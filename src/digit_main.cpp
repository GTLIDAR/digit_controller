/**
* Author:       Zhaoyuan Gu, Aziz Shamsah
* Email:        {zgu78, ashamsah3}@gatech.edu
* Modified:     02-25-2023
* Copyright:    LIDAR @ Georgia Tech
**/

#include <iostream>
#include <chrono>
#include <cmath>
#include <vector>
#include <algorithm>
#include <Eigen/Dense>

#include "ros/ros.h"
#include <ros/package.h>
#include "std_msgs/Bool.h"
#include <sensor_msgs/JointState.h>

#include "digit_main/DigitState.h"
#include "safety_manager.hpp"
#include "walking_trajectory.hpp"
#include "standing_controller.hpp"
#include "motor_control.hpp"
#include "robot_expressions.hpp"
#include "geo_expressions.hpp"
#include "analytical_expressions.hpp"
#include "digit_definition.hpp"
#include "step_planner.hpp"
#include "PS_planner.hpp"
#include "turtlebot.hpp"
#include "input_listener.hpp"
#include "domain_control.hpp"
#include "digit_state.hpp"

class EnabledListener {
  public:
    bool enabled = false;
    void enabledCallback(const std_msgs::Bool::ConstPtr& msg);
};

void EnabledListener::enabledCallback(const std_msgs::Bool::ConstPtr& msg) {
  enabled = msg->data;
}


int main(int argc, char **argv) {
  // size of control inputs
  const int N_joint = wdc::joint::N_JOINTS;
  const int N_motor = wdc::motor::N_MOTORS;
  std::cout << "N_joint:" << N_joint << std::endl;
  std::cout << "N_motor:" << N_motor << std::endl;

  // Torque commands are user-generated in this context
  VectorXd command(N_motor);  //commanded torque for actuated joints
  VectorXd old_command(N_motor);
  VectorXd gc_command = VectorXd::Zero(N_motor); // torque for gravity compensation.
  VectorXd ff_command = VectorXd::Zero(N_motor);
  VectorXd fb_command = VectorXd::Zero(N_motor);

  VectorXd pos_reference = VectorXd::Zero(N_motor);
  VectorXd vel_reference = VectorXd::Zero(N_motor);
  VectorXd acc_reference = VectorXd::Zero(N_motor);
  VectorXd zero_pos = VectorXd::Zero(N_motor);
  VectorXd zero_vel = VectorXd::Zero(N_motor);

  VectorXd position_acj(N_motor);
  VectorXd velocity_acj(N_motor);
  VectorXd position_unacj(N_joint-N_motor);
  VectorXd velocity_unacj(N_joint-N_motor);

  DigitState currState;

  VectorXd dGains = VectorXd::Zero(N_motor); // ZG: Check damping and dGains difference.
  VectorXd damping(N_motor);

  VectorXd leg_length = VectorXd::Zero(8);

  VectorXd p_MC_M = VectorXd::Zero(3);
  VectorXd p_MC_M_d = VectorXd::Zero(3);
  VectorXd p_WC;
  VectorXd p_WSt_f_dscrt = Vector3d{5.63176294, 3.50104551,0}; //VectorXd::Zero(3);
  Vector3d p_StSw_initial;
  MatrixXd p_WC_switch;
  
  double phase_variable = 0;
  bool startFlag = true;
  double time_elapsed = 0;
  double time_in_current_mode = 0;
  double time_last = 0;
  double loop_elapsed = 0;
  
  bool pub_state = true;  
  DomainControl::DomainType domain = DomainControl::DomainType::DOUBLE_SUPPORT;
  double target_vel_x_raw = 0; //-0.09;
  double target_vel_x = 0; //-0.09;
  double target_vel_y_raw = 0;
  double target_vel_y = 0; // -0.01;
  double target_vel_yaw = 0;
  double target_yaw = 0.0;
  unsigned int program_counter = 0;
  unsigned int shift_index = 0;
  unsigned int walking_counter = 0;
  int step_index = 0;
  bool is_shifting_body = false;

  VectorXd Knee_g_comp = VectorXd::Zero(20,1);
  Knee_g_comp[joint::LEFT_KNEE] = 70.0; // Nm.
  Knee_g_comp[joint::RIGHT_KNEE] = -70.0;

  GeoExpressions geoExpressions;
  AnalyticalExpressions analytical_expressions;
  
  //========reading PSP traj========//
  bool PSP_flag = true;

  double stepw_d;
  double stepl_d;
  double stepl_error = 0;
  double stepw_error = 0;

  std::vector<Vector3d> p_PTL_d_list; 
  std::vector<Vector3d> p_PTR_d_list;
  
  std::string package_path; 
  try {
    package_path = ros::package::getPath("digit_main");
    if (package_path.empty()) {
      throw 1;
    }
  } catch(...) {
    std::cerr << "package not found\n";
    return 0;
  }
  StepPlanner step_planner;
  PSPlanner ps_planner;

  // Initialize the hyper_parameter with default step time and 
  // step width (used by foot placement controller).
  // Target velocity is given by PSP or user.
  DigitControlHyperparameters hyper_param(0.4, 0.4, Vector3d::Zero(), 0, 0.4);
  
  
  ps_planner.read_PSP(package_path + "/src/config_files/log_psp_belief_with_switch1.txt");
  ps_planner.read_obs(package_path + "/src/config_files/log_obstacle_belief_with_switch1.txt");
  
  std::string path2toml = package_path + "/src"; 

  SafetyManager SafetyLayer(path2toml);
  printf("Safety Manager Layer Created. \n");
  MotorControl PDLayer(jointControl::PD_CONTROL, 100, path2toml);
  printf("Motor Control Layer Created. \n");
  WalkingTrajectory TrajLayer(path2toml);
  printf("Trajectory Layer Created. \n");
  TrajLayer.changeDomain(DomainControl::DomainType::RIGHT_STAND); //HW: refer to domain_control.hpp for details
  StandingController StandControl(path2toml);

  command.setZero(N_motor);
  // for llapi, we have to send torque, velocity and damping to the controller.
  damping << 66.849, 26.1129, 38.05, 38.05, 15.5532, 15.5532, 
            66.849, 26.1129, 38.05, 38.05, 15.5532, 15.5532, 
            66.849, 66.849, 26.1129, 66.849, 
            66.849, 66.849, 26.1129, 66.849;
  SafetyLayer.buttons.buttons[button::REMOTE_STANDSTILL].isPressed = false;
  SafetyLayer.buttons.buttons[button::REMOTE_WALK].isPressed = false;
  SafetyLayer.buttons.buttons[button::REMOTE_ZERO_POSITION].isPressed = false;
  // timer for control, TODO: replace with gamepad commands
  auto time_program_start = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed_time = std::chrono::system_clock::now() - time_program_start;
  time_elapsed = elapsed_time.count();
  auto time_last_mode_switch = time_program_start;
  
  // ros initialization
  ros::init(argc, argv, "sample_subscriber_node");
  ros::NodeHandle n;
  ros::Rate control_loop_rate(1000);
  bool run_sim = true;
  n.getParam("sim_mode", run_sim);
  n.getParam("use_psp", PSP_flag);

  // When auto_begin_walk, the standing time before moving to WALKING_GAIT.
  double time_stand_phase = run_sim ? 5 : 10; // Seconds.
  bool auto_begin_walk = PSP_flag;
  bool is_program_start_delay_complete = false; // ZG: I don't think we need this variable.
  
  // subscribers
  // listen to when the connection is established between the robot and pc (from websockets_node.py)
  EnabledListener enabledlistener;
  ros::Subscriber sub1 = n.subscribe("/websockets/llapi_enabled", 10, &EnabledListener::enabledCallback, &enabledlistener);

  ControlMode cm = ControlMode::ZERO_POSITION;
  InputListener input_listener(&cm, &target_vel_x_raw, &target_vel_y_raw, &target_yaw, SafetyLayer);
  
  Turtlebot turtlebots(n);

  ros::Publisher state_pub = n.advertise<digit_main::DigitState>("/digit_state", 10);

  //Connect to Digit hardware/simulator
  std::cout <<  "Program starts! run_sim:" << run_sim << std::endl;
  SafetyLayer.digit_connect(run_sim);  //TRY INCLUDING IN THE LOOP WITH THE VERIFICATION OF THE LOWLEVELAPI

  //============ Get agility's initial pose ================//
  currState = SafetyLayer.getFullFeedback();

  VectorXd q_0 = DigitState::buildState(VectorXd::Zero(3), VectorXd::Zero(3), currState.position_full);

  MatrixXd p_PTL_0 = analytical_expressions.p_left_toe_pitch(q_0);
  MatrixXd p_PTR_0 = analytical_expressions.p_right_toe_pitch(q_0);

  MatrixXd p_MP_P_0 =  -((p_PTL_0 + p_PTR_0)/2); 
  std::cout << "Desired height: " << p_MP_P_0(2) << std::endl;

  MatrixXd p_MTL = ((p_PTL_0 - p_PTR_0)/2);
  MatrixXd p_MTR = -((p_PTL_0 - p_PTR_0)/2);

  //======create list of desired base ========//
  Vector3d p_PTL_d;
  Vector3d p_PTR_d;
  Vector3d p_MP_P_d;
  const int EleNum = 500;
  const double stand_to_walk_transition_time = 0.5;
  double num =  M_PI / double(EleNum);
  for (int i = 0; i <=  (EleNum); i++) {
    // This shift caused a sudden jump from standing to walking. Not applying now.
    p_MP_P_d = p_MP_P_0 + Vector3d{
      0.0, -0.02*sin(i * 0.5*num), 0*-0.04*(1-cos(i * 0.5*num))};
    
    p_PTL_d = p_MTL -  p_MP_P_d;
    p_PTR_d = p_MTR -  p_MP_P_d; 

    p_PTL_d_list.push_back(p_PTL_d);
    p_PTR_d_list.push_back(p_PTR_d);
    
  }

  while (ros::ok()) {
    ros::spinOnce();
    program_counter++;

    if (SafetyLayer.isRunning) {
      // Timer for control modes, TODO: replace with gamepad
      std::chrono::duration<double> elapsed_time = 
        std::chrono::system_clock::now() - time_program_start;
      time_elapsed = elapsed_time.count();
      time_in_current_mode = std::chrono::duration<double>(
        std::chrono::system_clock::now() - time_last_mode_switch).count();
      
      if (auto_begin_walk && !is_program_start_delay_complete) {
        // Press button based on time automatically.
        if (time_elapsed < time_stand_phase) {
          // during time_stand_phase phase, robot is trying to stand up
          SafetyLayer.buttons.buttons[button::REMOTE_STANDSTILL].isPressed = true;
        } else if (time_elapsed > time_stand_phase) {
          SafetyLayer.buttons.buttons[button::REMOTE_STANDSTILL].isPressed = false;
          SafetyLayer.buttons.buttons[button::REMOTE_WALK].isPressed = true;
          is_program_start_delay_complete = true;
        }
      } else if (!auto_begin_walk && !is_program_start_delay_complete) {
        // If not going to automatically start walking, still need to enable 
        // standing mode.
        SafetyLayer.buttons.buttons[button::REMOTE_STANDSTILL].isPressed = true;
        // Reuse this variable to ensure stand button only pressed once
        // ZG: Do not use this variable because it confuses. There is actually 
        // no delay, but manually controlled with inputs.
        is_program_start_delay_complete = true; 
      }
      
      // Switch mode based on button.
      if (SafetyLayer.buttons.buttons[button::REMOTE_WALK].isPressed && cm != WALKING_GAIT) {
        // START GAIT
        cm = WALKING_GAIT;
        walking_counter = 0;
        time_last_mode_switch = std::chrono::system_clock::now();
        time_in_current_mode = std::chrono::duration<double>(std::chrono::system_clock::now() - time_last_mode_switch).count();
        
        turtlebots.setStartCommand(true);

        // Hardcode to always start walking in right stance.
        TrajLayer.changeDomain(DomainControl::DomainType::RIGHT_STAND); 
        TrajLayer.hasSwitched = true; // True when mode switch happens.

        TrajLayer.reloadRegulators(path2toml, run_sim);  // load regulator values for online implementation
        
        target_yaw = currState.base_orientation_unfil(2);
        TrajLayer.tg_yaw = target_yaw; // Hack! To initialize the member variable tg_yaw and tg_yaw_old.
        TrajLayer.updateYawTarget(target_yaw, currState.base_orientation_unfil(2), 
          currState.position_full(wdc::joint::RIGHT_HIP_YAW), currState.position_full(wdc::joint::LEFT_HIP_YAW));
        
        old_command = command;

        if (PSP_flag) {
          // Record initial body pose in world.
          ps_planner.set_T_PSPB(currState.base_position, target_yaw); 
          // Read the first hyperparameters of the PSP plan.
          ps_planner.getPSP_step(1);
        }

      } else if (SafetyLayer.buttons.buttons[button::REMOTE_STANDSTILL].isPressed && cm != STANDING) {
        old_command = currState.torque;
        std::cout << "=============Start Standing =============== \n";
        cm = STANDING;
        time_last_mode_switch = std::chrono::system_clock::now();
        time_in_current_mode = std::chrono::duration<double>(std::chrono::system_clock::now() - time_last_mode_switch).count();
      } else if (SafetyLayer.buttons.buttons[button::REMOTE_ZERO_POSITION].isPressed && cm != ZERO_POSITION) {
        std::cout << "============= ZERO_POSITION =============== \n";
        cm = ZERO_POSITION;
        time_last_mode_switch = std::chrono::system_clock::now();
        time_in_current_mode = std::chrono::duration<double>(std::chrono::system_clock::now() - time_last_mode_switch).count();
      }
      // Override mode.
      // cm = HANGING;

      // Full joint information stores in position_full, actuated joint_information stored in position
      currState = SafetyLayer.getFullFeedback();
      // Terminate when in danger.
      SafetyLayer.checkState(currState);

      position_acj = currState.position_full.head(N_motor);
      velocity_acj = currState.velocity_full.head(N_motor);
      position_unacj = currState.position_full.tail(N_joint-N_motor);
      velocity_unacj = currState.velocity_full.tail(N_joint-N_motor);

      // Create state q that follows Frost definition.
      // https://github.gatech.edu/GeorgiaTechLIDARGroup/Digit_CFROST
      VectorXd q = DigitState::buildState(currState.base_position,
          Vector3d{currState.base_orientation(0), currState.base_orientation(1), currState.base_orientation_unfil(2)},
          currState.position_full);

      VectorXd q_P = q;
      q_P.head(6) = VectorXd::Zero(6);
      
      VectorXd q_B = q;
      q_B.head(4) = VectorXd::Zero(4);

      VectorXd q_W = q;
      q_W(2) = 1.01;
      // Position of CoM in global/World frame.
      p_WC = analytical_expressions.p_COM(q_W); 

      switch(cm) {
        case WALKING_GAIT: {
          //==============Contact Guard==========//
          TrajLayer.getGRF(currState);
          shift_index = (int) (time_in_current_mode / 0.001);
          if (time_in_current_mode >= stand_to_walk_transition_time) {
            if (is_shifting_body) {
              is_shifting_body = false;
              TrajLayer.time_offset = time_in_current_mode;
              std::cout << "Finish Shift. Start walking!\n";
            }
            
            if (TrajLayer.evalGuardSensor(currState, domain, phase_variable)) {
              // Return true at every contact with ground; or 
              // switch from DOUBLE_SUPPORT to RIGHT_STAND.
              
              TrajLayer.updateTimeOffset(time_in_current_mode);

              // When switching, smooth torque using polynomial interpolation.
              old_command = command;

              MatrixXd p_BToe_l = analytical_expressions.p_left_toe_pitch(q_B);
              MatrixXd p_BToe_r = analytical_expressions.p_right_toe_pitch(q_B);
              MatrixXd p_BC =  analytical_expressions.p_COM(q_B); 

              p_WC_switch = analytical_expressions.p_COM(q); 

              TrajLayer.recordVelocityTarget(hyper_param.v_StB_d);
              TrajLayer.is_lateral_v_reachable = true;
              TrajLayer.fail_mode = 0;
              
              // Record state before contact in current frame.
              TrajLayer.v_StC_0 = TrajLayer.v_StB_Wpc_L; // Current body velocity right after contact.
              TrajLayer.v_StC_0_d = TrajLayer.v_StB_f; // Body velocity right before contact.
              TrajLayer.p_StC_0_d = TrajLayer.p_SwC_St_df;

              if (PSP_flag) {
                
                ps_planner.getPSP_step(step_index);
                ps_planner.getObs_step(step_index);
          
                target_yaw += ps_planner.PS_parameters_curr.heading_change;

                // Modify the target velocity based on waypoint tracking.
                ps_planner.waypoint_tracking(currState.base_position, target_yaw);

                // get Digit Control Hyperparameters
                hyper_param = ps_planner.getControlHyperparameters();
              }

              // Set time only once before each step. Then inside the step
              // the time is updated by the controller.
              TrajLayer.setStepTime(hyper_param.step_time_crnt, 
                                    hyper_param.step_time_next);

              // Record pre-contact state in next frame.
              double yaw_StSw_d_F0 = TrajLayer.yaw_StSw_df;
              Matrix3d R_StSw_d_F0 = AngleAxisd(yaw_StSw_d_F0, Vector3d::UnitZ()).toRotationMatrix();
              TrajLayer.v_StC_0 = R_StSw_d_F0.transpose() * TrajLayer.v_StC_0;
              TrajLayer.v_StC_0_d = R_StSw_d_F0.transpose() * TrajLayer.v_StC_0_d;
              TrajLayer.p_StC_0_d = R_StSw_d_F0.transpose() * TrajLayer.p_StC_0_d;

              double yaw_StSw_d_I1;
              if (domain == DomainControl::DomainType::RIGHT_STAND) { //right foot in stance
                p_StSw_initial = p_BToe_l - p_BToe_r; 
                TrajLayer.p_StC_0 = -p_BToe_r + p_BC;
                TrajLayer.p_BSw_initial = p_BToe_l;
                p_WSt_f_dscrt = analytical_expressions.p_right_toe_pitch(q);
                
                yaw_StSw_d_I1 = TrajLayer.updateYawTarget(target_yaw, currState.base_orientation_unfil(2), 
                  currState.position_full(wdc::joint::RIGHT_HIP_YAW), currState.position_full(wdc::joint::LEFT_HIP_YAW));
              } else { //left foot in stance
                p_StSw_initial = p_BToe_r - p_BToe_l; 
                TrajLayer.p_StC_0 = -p_BToe_l + p_BC;
                TrajLayer.p_BSw_initial = p_BToe_r;

                p_WSt_f_dscrt = analytical_expressions.p_left_toe_pitch(q);
                
                yaw_StSw_d_I1 = TrajLayer.updateYawTarget(target_yaw, currState.base_orientation_unfil(2), 
                  currState.position_full(wdc::joint::LEFT_HIP_YAW), currState.position_full(wdc::joint::RIGHT_HIP_YAW));
              }
              p_StSw_initial(2) = 0.0;  

              TrajLayer.roll_df *= 0.5; // Decay the body roll to zero.
              
              step_index++;

              // time_elapsed = (std::chrono::system_clock::now() - time_walking).count();
              // TrajLayer.logStepTime(time_elapsed);
              TrajLayer.toe_off = false;
              TrajLayer.s_toe_off = 0;
              TrajLayer.touch_down = false;
              TrajLayer.s_touch_down = 0;
            }
            
            phase_variable = TrajLayer.compute_phaseVariable(
              ps_planner.PS_parameters_curr.stept, time_in_current_mode);
          } else {
            is_shifting_body = true;
          }

          if (is_shifting_body) { // Shift body to side.
            // Generate position reference in Agility DigitMotors convention.
            StandControl.get_command_new(currState, p_PTL_d_list[shift_index], 
              p_PTR_d_list[shift_index], pos_reference, vel_reference,
              command, p_MC_M, leg_length, p_MC_M_d);

            fb_command = PDLayer.robotControl(pos_reference, position_acj, 
              zero_vel, zero_vel, dGains, DomainControl::DOUBLE_SUPPORT);
            ff_command = Knee_g_comp;//Eigen::VectorXd::Zero(20,1);
            command = fb_command + ff_command;
          } else {
            auto before = std::chrono::system_clock::now();

            // regulation_PSP includes swing and stance foot control (modifies command and pos_ref)
            TrajLayer.regulation_PSP(currState, pos_reference, vel_reference, 
              phase_variable, p_StSw_initial,
              hyper_param, p_MP_P_0, leg_length, command, acc_reference);

            fb_command = PDLayer.robotControl(
              pos_reference, position_acj, vel_reference, velocity_acj, dGains, domain);
            
            // Calculate the accelerate induced torque.
            ff_command = TrajLayer.calc_passivity_command(currState,
              pos_reference, vel_reference, velocity_acj, acc_reference);
            // ff_command = SafetyLayer.clampCommand(ff_command);
            
            // Calculate gravity induced torque.
            // Use q_B to calculate all the mass in B frame.
            // ff_command = TrajLayer.calc_gravity(q_B, domain);

            command = fb_command + ff_command;

            auto ms_spent = std::chrono::duration<double, std::milli>(
              std::chrono::system_clock::now() - before);
            loop_elapsed = ms_spent.count();
            // std::cout << "Time spent in M*ddq (ms): " << ms_spent.count() << std::endl;
          }

          walking_counter++;
          
        }
        break;

        case STANDING:
        { // Brackets Exists to Avoid "Cross Initialization Error"

          //regulate the command based on upper body state to maintain standing
          StandControl.get_command_new(currState, p_PTL_d_list[0], 
            p_PTR_d_list[0], pos_reference, vel_reference, command, 
            p_MC_M, leg_length, p_MC_M_d);
          
          //Generate PD command
          fb_command = PDLayer.robotControl(pos_reference, position_acj, 
            zero_vel, zero_vel, dGains, DomainControl::DOUBLE_SUPPORT);
          ff_command = Knee_g_comp;//Eigen::VectorXd::Zero(20,1);
          command = fb_command + ff_command;
          
          command = old_command - (old_command - command)*2*(1/(1+exp(-100*time_in_current_mode)) - 0.5);
        }
        break;

        case ZERO_POSITION:
        {
          pos_reference = zero_pos;
          vel_reference = zero_vel;
          if (startFlag) {
            command = PDLayer.robotToPoint(time_elapsed, 4, true, zero_pos, position_acj, zero_vel, zero_vel, dGains, false);
            startFlag = false;
            command = old_command - (old_command - command) * 2 * (1/(1 + exp(-100 * time_elapsed)) - 0.5);
          } else {
            command = PDLayer.robotToPoint(time_elapsed, 4, false, zero_pos, position_acj, zero_vel, velocity_acj, dGains, false);
            command = old_command - (old_command - command) * 2 * (1/(1 + exp(-100 * time_elapsed)) - 0.5);
          }
        }
        break;

        case HANGING:
        {
          pos_reference = zero_pos;
          vel_reference = zero_vel;
          pos_reference(joint::LEFT_HIP_ROLL) = 0.37;
          pos_reference(joint::RIGHT_HIP_ROLL) = -0.37;

          pos_reference(joint::LEFT_TOE_A) = 
            TrajLayer.transAnkle->j2mA(input_listener.q_left_toe_pitch, 
            input_listener.q_left_toe_roll, "left");
          pos_reference(joint::LEFT_TOE_B) = 
            TrajLayer.transAnkle->j2mB(input_listener.q_left_toe_pitch, 
            input_listener.q_left_toe_roll, "left");
          pos_reference(joint::RIGHT_TOE_A) = 
            TrajLayer.transAnkle->j2mA(input_listener.q_right_toe_pitch, 
            input_listener.q_right_toe_roll, "right");
          pos_reference(joint::RIGHT_TOE_B) = 
            TrajLayer.transAnkle->j2mB(input_listener.q_right_toe_pitch, 
            input_listener.q_right_toe_roll, "right");
          
          command = PDLayer.robotControl(pos_reference, position_acj, 
            zero_vel, velocity_acj, dGains, DomainControl::DOUBLE_SUPPORT);
          
          command.segment<2>(joint::LEFT_TOE_A) = 10 * geoExpressions.tau_PR2AB(
            {input_listener.q_left_toe_pitch, input_listener.q_left_toe_roll});
          command.segment<2>(joint::RIGHT_TOE_A) = 10 * geoExpressions.tau_PR2AB(
            {input_listener.q_right_toe_pitch, input_listener.q_right_toe_roll});
          // command(motor::LEFT_TOE_A) = 10 * input_listener.q_left_toe_pitch;
          // command(motor::LEFT_TOE_B) = 10 * input_listener.q_left_toe_roll;
        }
        break;

        default:
        {
          command.setZero(N_motor);
        }

      }

      VectorXd clamped_command = SafetyLayer.clampCommand(command);
      SafetyLayer.executeCommand(clamped_command, vel_reference, damping);

      if (pub_state) {
        digit_main::DigitState state_msg;
        state_msg.header = std_msgs::Header();
        state_msg.header.stamp = ros::Time::now();
        state_msg.header.seq = program_counter;

        state_msg.roll_df = TrajLayer.roll_df;
        state_msg.is_turning = TrajLayer.is_turning;
        state_msg.turning_step_index = TrajLayer.turning_step_index;
        state_msg.T_left = TrajLayer.T_left;
        state_msg.T = TrajLayer.T;
        state_msg.loop_elapsed = loop_elapsed;
        state_msg.time_elapsed = time_elapsed;
        state_msg.robot_time = SafetyLayer.robot_time;
        state_msg.phase_variable = phase_variable;
        state_msg.hasSwitched = TrajLayer.hasSwitched;
        state_msg.vx_pid = ps_planner.PS_parameters_curr.vx_pid;
        state_msg.vy_pid = ps_planner.PS_parameters_curr.vy_pid;

        state_msg.stepw_d = stepw_d;
        state_msg.stepl_d = stepl_d;
        state_msg.stepl_error = stepl_error;
        state_msg.L_Wpc_d = ps_planner.PS_parameters_curr.L_Wpc_d;
        state_msg.W_Wpc_d = ps_planner.PS_parameters_curr.W_Wpc_d;
        state_msg.heading_change = ps_planner.PS_parameters_curr.heading_change;
        
        state_msg.run_sim = run_sim;
        state_msg.domain = domain;

        state_msg.sw_yaw_error = TrajLayer.sw_yaw_error;
        state_msg.st_yaw_error = TrajLayer.st_yaw_error;
        state_msg.target_yaw = target_yaw; //TrajLayer.constrainAngle(target_yaw);
        state_msg.yaw_WSt = TrajLayer.yaw_WSt;
        state_msg.yaw_WpcB = TrajLayer.yaw_WpcB;

        std::copy(currState.base_position.data(), currState.base_position.data()+currState.base_position.size(), state_msg.base_position.begin()); // assert(base_position.size() == state_msg.base_position.size());
        std::copy(currState.base_orientation_unfil.data(), currState.base_orientation_unfil.data()+currState.base_orientation_unfil.size(), state_msg.base_orientation.begin()); // assert(base_orientation.size() == state_msg.base_orientation.size());
        std::copy(currState.base_velocity.data(), currState.base_velocity.data()+currState.base_velocity.size(), state_msg.base_velocity.begin()); // assert(base_velocity.size() == state_msg.base_velocity.size());
        std::copy(currState.base_angvel.data(), currState.base_angvel.data()+currState.base_angvel.size(), state_msg.base_angvel.begin()); // assert(base_angvel.size() == state_msg.base_angvel.size());
        std::copy(currState.IMU_acceleration.data(), currState.IMU_acceleration.data()+currState.IMU_acceleration.size(), state_msg.IMU_acceleration.begin());
        std::copy(currState.IMU_angvel.data(), currState.IMU_angvel.data()+currState.IMU_angvel.size(), state_msg.IMU_angvel.begin());
        std::copy(currState.position_full.data(), currState.position_full.data() + currState.position_full.size(), state_msg.position_full.begin());
        std::copy(currState.velocity_full.data(), currState.velocity_full.data()+currState.velocity_full.size(), state_msg.velocity_full.begin());
        std::copy(currState.torque.data(), currState.torque.data()+currState.torque.size(), state_msg.torque.begin());
        std::copy(currState.GRF_LR.data(), currState.GRF_LR.data()+currState.GRF_LR.size(), state_msg.GRF_LR.begin()); // assert(GRF_LR.size() == state_msg.GRF_LR.size());
        
        std::copy(pos_reference.data(), pos_reference.data()+pos_reference.size(), state_msg.pos_reference.begin());
        std::copy(vel_reference.data(), vel_reference.data()+vel_reference.size(), state_msg.vel_reference.begin());
        std::copy(acc_reference.data(), acc_reference.data()+acc_reference.size(), state_msg.acc_reference.begin());
        std::copy(command.data(), command.data()+command.size(), state_msg.command.begin());
        std::copy(ff_command.data(), ff_command.data()+ff_command.size(), state_msg.ff_command.begin());
        std::copy(gc_command.data(), gc_command.data()+gc_command.size(), state_msg.gc_command.begin());
        std::copy(fb_command.data(), fb_command.data()+fb_command.size(), state_msg.fb_command.begin());
        std::copy(TrajLayer.ff_8.data(), TrajLayer.ff_8.data()+TrajLayer.ff_8.size(), state_msg.ff_8.begin());
        std::copy(TrajLayer.gc_8.data(), TrajLayer.gc_8.data()+TrajLayer.gc_8.size(), state_msg.gc_8.begin());
        std::copy(TrajLayer.fb_8.data(), TrajLayer.fb_8.data()+TrajLayer.fb_8.size(), state_msg.fb_8.begin());
        std::copy(TrajLayer.q_d.data(), TrajLayer.q_d.data()+TrajLayer.q_d.size(), state_msg.q_d.begin());
        std::copy(TrajLayer.dq_d.data(), TrajLayer.dq_d.data()+TrajLayer.dq_d.size(), state_msg.dq_d.begin());
        std::copy(TrajLayer.ddq_d.data(), TrajLayer.ddq_d.data()+TrajLayer.ddq_d.size(), state_msg.ddq_d.begin());
        std::copy(hyper_param.v_StB_d.data(), hyper_param.v_StB_d.data()+hyper_param.v_StB_d.size(), state_msg.target_vel.begin()); // assert(target_vel.size() == state_msg.target_vel.size());
        std::copy(p_MC_M.data(), p_MC_M.data()+p_MC_M.size(), state_msg.p_MC_M.begin()); // assert(p_MC_M.size() == state_msg.p_MC_M.size());
        std::copy(p_MC_M_d.data(), p_MC_M_d.data()+p_MC_M_d.size(), state_msg.p_MC_M_d.begin()); // assert(p_MC_M_d.size() == state_msg.p_MC_M_d.size());
        std::copy(leg_length.data(), leg_length.data()+leg_length.size(), state_msg.leg_length.begin());
        std::copy(dGains.data(), dGains.data()+dGains.size(), state_msg.gains.begin());
        
        // Foot placement calculation related logging.
        std::copy(TrajLayer.p_StB_f.data(), TrajLayer.p_StB_f.data()+TrajLayer.p_StB_f.size(), state_msg.p_StB_f.begin());
        std::copy(TrajLayer.v_StB_f.data(), TrajLayer.v_StB_f.data()+TrajLayer.v_StB_f.size(), state_msg.v_StB_f.begin());
        std::copy(TrajLayer.v_StB_kin.data(), TrajLayer.v_StB_kin.data()+TrajLayer.v_StB_kin.size(), state_msg.v_StB_kin.begin()); 
        std::copy(TrajLayer.v_StB_L.data(), TrajLayer.v_StB_L.data()+TrajLayer.v_StB_L.size(), state_msg.v_StB_L.begin()); 
        std::copy(TrajLayer.v_StB_Wpc_L.data(), TrajLayer.v_StB_Wpc_L.data()+TrajLayer.v_StB_Wpc_L.size(), state_msg.v_StB_Wpc_L.begin());
        std::copy(TrajLayer.v_WB_B_d.data(), TrajLayer.v_WB_B_d.data()+TrajLayer.v_WB_B_d.size(), state_msg.v_WB_B_d.begin()); 
        std::copy(TrajLayer.p_StSw_d_final.data(), TrajLayer.p_StSw_d_final.data()+TrajLayer.p_StSw_d_final.size(), state_msg.p_StSw_d_final.begin());
        std::copy(TrajLayer.p_BSw_final.data(), TrajLayer.p_BSw_final.data()+TrajLayer.p_BSw_final.size(), state_msg.p_BSw_final.begin()); 
        std::copy(TrajLayer.p_StSw_d.data(), TrajLayer.p_StSw_d.data()+TrajLayer.p_StSw_d.size(), state_msg.p_StSw_d.begin());
        std::copy(TrajLayer.v_StSw_d.data(), TrajLayer.v_StSw_d.data()+TrajLayer.v_StSw_d.size(), state_msg.v_StSw_d.begin());
        std::copy(TrajLayer.a_StSw_d.data(), TrajLayer.a_StSw_d.data()+TrajLayer.a_StSw_d.size(), state_msg.a_StSw_d.begin());
        std::copy(TrajLayer.p_StSw_B_m.data(), TrajLayer.p_StSw_B_m.data()+TrajLayer.p_StSw_B_m.size(), state_msg.p_StSw_m.begin());
        std::copy(TrajLayer.p_BC.data(), TrajLayer.p_BC.data()+TrajLayer.p_BC.size(), state_msg.p_BC.begin());
        std::copy(TrajLayer.p_BSw.data(), TrajLayer.p_BSw.data()+TrajLayer.p_BSw.size(), state_msg.p_BSw.begin());
        std::copy(TrajLayer.p_BSw_d.data(), TrajLayer.p_BSw_d.data()+TrajLayer.p_BSw_d.size(), state_msg.p_BSw_d.begin());
        std::copy(TrajLayer.p_CSw.data(), TrajLayer.p_CSw.data()+TrajLayer.p_CSw.size(), state_msg.p_CSw.begin());
        std::copy(TrajLayer.p_CSw_St_df.data(), TrajLayer.p_CSw_St_df.data()+TrajLayer.p_CSw_St_df.size(), state_msg.p_CSw_df.begin());
        std::copy(TrajLayer.p_CSt.data(), TrajLayer.p_CSt.data()+TrajLayer.p_CSt.size(), state_msg.p_CSt.begin());
        std::copy(TrajLayer.v_StB_LIP.data(), TrajLayer.v_StB_LIP.data()+TrajLayer.v_StB_LIP.size(), state_msg.v_StB_LIP.begin());
        std::copy(TrajLayer.v_StB_LIP_d.data(), TrajLayer.v_StB_LIP_d.data()+TrajLayer.v_StB_LIP_d.size(), state_msg.v_StB_LIP_d.begin());
        std::copy(TrajLayer.p_StB.data(), TrajLayer.p_StB.data()+TrajLayer.p_StB.size(), state_msg.p_StB.begin());
        std::copy(TrajLayer.p_StB_LIP_d.data(), TrajLayer.p_StB_LIP_d.data()+TrajLayer.p_StB_LIP_d.size(), state_msg.p_StB_LIP_d.begin());
        std::copy(TrajLayer.L_pCSt.data(), TrajLayer.L_pCSt.data()+TrajLayer.L_pCSt.size(), state_msg.L_pCSt.begin());
        std::copy(TrajLayer.L_pCSt_est.data(), TrajLayer.L_pCSt_est.data()+TrajLayer.L_pCSt_est.size(), state_msg.L_pCSt_est.begin());

        std::copy(p_WSt_f_dscrt.data(), p_WSt_f_dscrt.data()+p_WSt_f_dscrt.size(), state_msg.p_WSt_f_dscrt.begin());
        std::copy(p_WC.data(), p_WC.data()+p_WC.size(), state_msg.p_WC.begin());
        std::copy(p_WC_switch.data(), p_WC_switch.data()+p_WC_switch.size(), state_msg.p_C_switch.begin());
        
        std::copy(ps_planner.PS_parameters_curr.waypoint.data(), ps_planner.PS_parameters_curr.waypoint.data()+ps_planner.PS_parameters_curr.waypoint.size(), state_msg.waypoint.begin()); 
        std::copy(ps_planner.PS_parameters_curr.switch_d.data(), ps_planner.PS_parameters_curr.switch_d.data()+ps_planner.PS_parameters_curr.switch_d.size(), state_msg.switch_d.begin());
        std::copy(ps_planner.PS_parameters_curr.waypointPSP.data(), ps_planner.PS_parameters_curr.waypointPSP.data() + ps_planner.PS_parameters_curr.waypointPSP.size(), state_msg.waypointPSP.begin());
        std::copy(ps_planner.PS_parameters_curr.psp_foot_w.data(), ps_planner.PS_parameters_curr.psp_foot_w.data() + ps_planner.PS_parameters_curr.psp_foot_w.size(), state_msg.psp_foot_w.begin());
        std::copy(ps_planner.PS_parameters_curr.psp_foot.data(), ps_planner.PS_parameters_curr.psp_foot.data()+ps_planner.PS_parameters_curr.psp_foot.size(), state_msg.psp_foot.begin());
        std::copy(ps_planner.obs.data(), ps_planner.obs.data()+ps_planner.obs.size(), state_msg.obs.begin());
      
        state_pub.publish(state_msg);
      }

      if (turtlebots.pub_turtle) {
        if (program_counter % 100 == 0) {
          turtlebots.pubDigitCommand();
        }
      }
    }
    
    control_loop_rate.sleep();

    elapsed_time = std::chrono::system_clock::now() - time_program_start;
    time_elapsed = elapsed_time.count();
    auto time_loop = time_elapsed - time_last;
    time_last = time_elapsed; 
    // std::cout << "Control frequency: " << 1/time_loop <<endl;
  }

  SafetyLayer.digit_shutdown();

  if (turtlebots.pub_turtle) {
    turtlebots.setStartCommand(false);
    turtlebots.pubDigitCommand();
  }

  std::cout << "\nDigit main control closed.\n";
  return 0;
}

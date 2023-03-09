#include "standing_controller.hpp"
#include "cpptoml/include/cpptoml.h"
#include "utilities.hpp"

using namespace Eigen;
using namespace wdc;

StandingController::StandingController(std::string path2toml) {
  joint_label[0] = "HipRoll";
  joint_label[1] = "HipYaw";
  joint_label[2] = "HipPitch";
  joint_label[3] = "Knee";
  joint_label[4] = "ToeA";
  joint_label[5] = "ToeB";
  joint_label[6] = "ShoulderRoll";
  joint_label[7] = "ShoulderPitch";
  joint_label[8] = "ShoulderYaw";
  joint_label[9] = "Elbow";  

  step_period = 0.4;
  ct = 1/step_period;

  t1 = 0;
  s1 = 0;
  s2 = 0;
  tg_velocity_x = 0;
  tg_velocity_x_fil = 0;
  lateral_move_fil = 0;
  pitch_des_fil = 0;
  roll_des_fil = 0;

  dLL_des_fil = 0;
  P_feedback_toe_fil = 0;

  qthigh_knee_d_L.resize(2);
  qthigh_knee_d_R.resize(2);
  dqthigh_knee_d_L.resize(2);
  dqthigh_knee_d_R.resize(2);    
  dqthigh_knee_d_L << 0, 0;
  dqthigh_knee_d_R << 0, 0; 
  error_thigh.resize(2);
  derror_thigh.resize(2);  
  error_knee.resize(2);
  derror_knee.resize(2);

  p_COM.resize(3);
  v_COM.resize(3);
  p_rightFoot.resize(3);
  p_leftFoot.resize(3);
  

  load_parameters(path2toml); // This is only executed once at initialization.

  transAnkleStanding = new TransmissionAnkleNew();
}

int StandingController::load_parameters(std::string path2toml) {
  // USING TOML TO STORE PD GAINS
  config = cpptoml::parse_file(path2toml + "/config_files/robot_config.toml");
  // config = cpptoml::parse_file("robot_config.toml");

  Kp_abduction_stand = config->get_qualified_as<double>("pid-standing.HipRoll.Kp").value_or(0);
  Kp_thigh_stand = config->get_qualified_as<double>("pid-standing.HipPitch.Kp").value_or(0);
  Kp_knee_stand = config->get_qualified_as<double>("pid-standing.Knee.Kp").value_or(0);
  Kp_rotation_stand = config->get_qualified_as<double>("pid-standing.HipYaw.Kp").value_or(0);
  Kp_toe_stand = config->get_qualified_as<double>("pid-standing.ToeStand.Kp").value_or(0);
  Kd_abduction_stand = config->get_qualified_as<double>("pid-standing.HipRoll.Kd").value_or(0);
  Kd_thigh_stand = config->get_qualified_as<double>("pid-standing.HipPitch.Kd").value_or(0);
  Kd_knee_stand = config->get_qualified_as<double>("pid-standing.Knee.Kd").value_or(0);
  Kd_rotation_stand = config->get_qualified_as<double>("pid-standing.HipYaw.Kd").value_or(0);
  Kd_toe_stand = config->get_qualified_as<double>("pid-standing.ToeStand.Kd").value_or(0);
  Kp_lateral_stand = config->get_qualified_as<double>("pid-standing.LateralStand.Kp").value_or(0);
  Kd_lateral_stand = config->get_qualified_as<double>("pid-standing.LateralStand.Kd").value_or(0);
  Kp_toeA = config->get_qualified_as<double>("pid-standing.ToeA.Kp").value_or(0);
  Kd_toeA = config->get_qualified_as<double>("pid-standing.ToeA.Kd").value_or(0);
  Kp_toeB = config->get_qualified_as<double>("pid-standing.ToeB.Kp").value_or(0);
  Kd_toeB = config->get_qualified_as<double>("pid-standing.ToeB.Kd").value_or(0);

  LSA = config->get_qualified_as<double>("parameters_standing.LSA").value_or(0);
  RHA = config->get_qualified_as<double>("parameters_standing.RHA").value_or(0);
  
  RVA = config->get_qualified_as<double>("parameters_standing.RVA").value_or(0);
  step_period = config->get_qualified_as<double>("parameters_standing.StepPeriod").value_or(0);
  shift_time = config->get_qualified_as<double>("parameters_standing.ShiftTime").value_or(0);
  standing_abduction_offset = config->get_qualified_as<double>("parameters_standing.StandingAbductionOffset").value_or(0);
  // LL_des = config->get_qualified_as<double>("parameters_standing.LL_des").value_or(0);
  // standing_switch_time = config->get_qualified_as<double>("parameters_standing.StandingSwitchTime").value_or(0);
  stand_offset = config->get_qualified_as<double>("parameters_standing.StandOffset").value_or(0);  
  max_time_stand_control = config->get_qualified_as<double>("parameters_standing.MaxTimeStandingControl").value_or(0);  
  shift_distance = config->get_qualified_as<double>("parameters_standing.ShiftDistance").value_or(0);  
  
  // Load max/min control signal limits
  if((sizeof(max_torque)/sizeof(max_torque[0]) == N_MOTORS)
          && (sizeof(min_torque)/sizeof(min_torque[0]) == N_MOTORS)) {
    for (int i = 0; i < 2; i++) {
      for (int k = 0; k < 6; k++) {
        max_torque[k + 6*i] = config->get_qualified_as<double>("pid-limits." + joint_label[k] + ".Max").value_or(0);
        min_torque[k + 6*i] = config->get_qualified_as<double>("pid-limits." + joint_label[k] + ".Min").value_or(0);      
      }
      for (int k = 0; k < 4; k++) {
        max_torque[12+k + 4*i] = config->get_qualified_as<double>("pid-limits." + joint_label[k] + ".Max").value_or(0);
        min_torque[12+k + 4*i] = config->get_qualified_as<double>("pid-limits." + joint_label[k] + ".Min").value_or(0);      
      } 
    }
  }
  return 0;
}

int StandingController::get_command_new(const DigitState& currState, Vector3d p_PTL_d,
  Vector3d p_PTR_d, VectorXd &pos_reference, VectorXd &vel_reference,
  VectorXd &command, VectorXd &p_MC_M, VectorXd &leg_length, VectorXd &p_MC_M_d) {

  //---left and right arm-----//
  pos_reference.tail(8) << -0.150623, 1.09331, 5.71354e-05, -0.141287, 
                            0.150628, -1.09328, -5.60829e-05, 0.141287;

  double heading = 0.0;

  //full IK solution (q_sol)
  VectorXd q_d = geoExpressions.IK_Geo_full_PToe(p_PTL_d, p_PTR_d, heading);
  // get desired LL & LA
  VectorXd output = geoExpressions.Geo_full_LA_LL_PToe(p_PTL_d, p_PTR_d, heading);
  double LL = output(0);
  double LA = output(1) ;
  double RR = output(2);
  double RA = output(3) ;

  // Vector2d LL_LA;
  // geoExpressions.IK_PToe(p_PTL_d, LL_LA, 1, heading);
  // double LL = LL_LA(0);
  // double LA = LL_LA(1);
  // geoExpressions.IK_PToe(p_PTR_d, LL_LA, 0, heading);
  // double RR = LL_LA(0);
  // double RA = LL_LA(1);

  // TODO: filter the measured variables.
  LL_des = LL;//0.8 + LSA * 0.2;
  LL_des_fil = LL_des; //YToolkits.first_order_filter(self.LL_des_fil,LL_des,0.05)     

  RR_des = RR;//0.8 + LSA * 0.2;
  RR_des_fil = RR_des; //YToolkits.first_order_filter(self.LL_des_fil,LL_des,0.05)          
  

  roll = currState.base_orientation[0];
  pitch = currState.base_orientation[1];
  yaw = currState.base_orientation[2];
  droll = currState.base_angvel[0];
  dpitch = currState.base_angvel[1];
  dyaw = currState.base_angvel[2];

  //--------Desired-----------//
  VectorXd q_dd(28);
  q_dd << 0,0,0,0,0,0,
    q_d(7,0), q_d(8,0), q_d(9,0), q_d(10,0), q_d(11,0), q_d(12,0), q_d(13,0),
    q_d(14,0), q_d(15,0), q_d(16,0), q_d(17,0),
    q_d(18,0), q_d(19,0), q_d(20,0), q_d(21,0), q_d(22,0), q_d(23,0), q_d(24,0),
    q_d(25,0), q_d(26,0), q_d(27,0), q_d(28,0);

  MatrixXd p_PL_d = analytical_expressions.p_left_toe_pitch(q_dd);
  MatrixXd p_PR_d = analytical_expressions.p_right_toe_pitch(q_dd);

  MatrixXd p_MP_P_d =  -((p_PL_d + p_PR_d)/2); //pelvis point w.r.t middle-point in pelvis frame
  MatrixXd p_PC_P_d =  analytical_expressions.p_COM(q_dd);
  
  AngleAxisd rollAngle_d(0, Vector3d::UnitX());
  AngleAxisd pitchAngle_d(0, Vector3d::UnitY());
  AngleAxisd yawAngle_d(q_d(19,0), Vector3d::UnitZ());
  Quaternion<double> quat_d = yawAngle_d * pitchAngle_d * rollAngle_d;
  Matrix3d R_MP_d = quat_d.matrix();

  p_MC_M_d = R_MP_d*(p_MP_P_d + p_PC_P_d); //desired COM w.r.t to middle point in middle frame


  //----------Measured---------//
  VectorXd q = DigitState::buildState(VectorXd::Zero(3), VectorXd::Zero(3), currState.position_full);

  MatrixXd p_PL = analytical_expressions.p_left_toe_pitch(q);
  MatrixXd p_PR = analytical_expressions.p_right_toe_pitch(q);

  MatrixXd p_MP_P = -((p_PL + p_PR)/2); //pelvis point w.r.t middle-point in pelvis frame
  MatrixXd p_PC_P = analytical_expressions.p_COM(q); //COM w.r.t pelvis in pelvis frame
  
  AngleAxisd rollAngle(roll, Vector3d::UnitX());
  AngleAxisd pitchAngle(pitch, Vector3d::UnitY());
  AngleAxisd yawAngle(currState.position_full[joint::RIGHT_HIP_YAW], Vector3d::UnitZ());
  Quaternion<double> quat = yawAngle * pitchAngle * rollAngle;
  Matrix3d R_MP = quat.matrix();
  
  //MatrixXd p_MC_M_prev; //for filtering
  //p_MC_M_prev = p_MC_M;

  p_MC_M = R_MP*(p_MP_P + p_PC_P); //COM w.r.t to middle point in middle frame

  Matrix3d R_WB = AngleAxisd(yaw, Vector3d::UnitZ()).toRotationMatrix();
  double lateral_shift = p_MC_M(1) - p_MC_M_d(1);//measured - desired 
  // double lateral_shift = p_MC_M(1) - Base_d(1);//measured - desired 
  Vector3d v_WB_B = R_WB.transpose() * currState.base_velocity;
  double v_lateral_shift = currState.base_velocity(1);//v_WB_B(1);
  double H_error = p_MC_M(2) - p_MC_M_d(2);
  // double H_error = p_MC_M(2) - Base_d(2);
  double dH_error = currState.base_velocity(2);//v_WB_B(2) - 0;
  //std::cout << H_error << std::endl;
  double kpc = 0.4;//0.7;//0.2;
  double kdc = 0.04;//0.06;
  double h_kp = 0.1; // So currently the height is not FB regulated.
  double h_kd = 0.001;
  double kproll = 0.1;//0.2;
  double kdroll = 0.01;//0.01;//0.05;
  double kpitch = 0.1;//0.2;
  double kdpitch = 0.0001;//0.01;//0.05;

  //-----Based on the commanded roll angle, and lateral_shift, decide the Leg Length Difference in right and left leg.
  //left_tune =  -(kproll* (roll - roll_des_fil)  -kpc*lateral_shift + kdc*droll) ; 
  //right_tune = (kproll* (roll - roll_des_fil)  -kpc*lateral_shift + kdc*droll) ; 

  //-----left and right tune without body roll
  left_tune = (kpc*lateral_shift + kdc*v_lateral_shift); 
  right_tune = -(kpc*lateral_shift + kdc*v_lateral_shift); 
  double height_tune = -h_kp*H_error -h_kd*dH_error;

  //abduction roll compensation
  double abd_tune_l = (kproll* (roll - 0) + kdroll*droll);
  double abd_tune_r = (kproll* (roll - 0) + kdroll*droll);

  //LA compensation based on Pitch
  double pitch_l_tune = (kpitch * (pitch - 0) + kdpitch*dpitch); //2.5*kp
  double pitch_r_tune = (kpitch * (pitch - 0) + kdpitch*dpitch);
  double yaw_l_tune =(-Kp_lateral_stand * (yaw - 0) + Kd_lateral_stand*dyaw); // This looks wrong. P and D term has opposite sign.
  double yaw_r_tune =(-Kp_lateral_stand * (yaw - 0) + Kd_lateral_stand*dyaw);  

  des_min_length = 0.9;
  // Inverse kinematics of Digit's leg to get desired joint position based on the hip position
  VectorXd q_thigh_knee(2);
  q_thigh_knee = geoExpressions.IK_Geo_p_cassie(LA - pitch_l_tune,std::min(LL_des_fil + left_tune + height_tune, des_min_length));  
  qthigh_knee_d_L = geoExpressions.Cassie2Digit(q_thigh_knee, DomainControl::DomainType::LEFT_STAND);
  q_thigh_knee = geoExpressions.IK_Geo_p_cassie(RA - pitch_r_tune, std::min(RR_des_fil + right_tune + height_tune, des_min_length));
  qthigh_knee_d_R  = geoExpressions.Cassie2Digit(q_thigh_knee, DomainControl::DomainType::RIGHT_STAND);
  //std::cout << RR_des_fil + right_tune << std::endl;

  //spring deflection 

  //left spring
  //add offset to get zero configuration for Knee and Tarsus
  double m_knee_0 = currState.position_full[joint::LEFT_KNEE] - M_PI/2; 
  double m_tarsus_0 = currState.position_full[joint::LEFT_TARSUS] + deg2rad(103);
  // qknee+q_tarsuse = spring_def + 13deg
  double l_spring_def = m_knee_0 + m_tarsus_0 - deg2rad(13);

  //right spring
  m_knee_0 = -currState.position_full[joint::RIGHT_KNEE] - M_PI/2; 
  m_tarsus_0 = currState.position_full[joint::RIGHT_TARSUS] - deg2rad(103);

  double r_spring_def = -m_knee_0 + m_tarsus_0 + deg2rad(13);

  qthigh_knee_d_L[0] = std::clamp(qthigh_knee_d_L[0], deg2rad(-60), deg2rad(90));
  qthigh_knee_d_R[0] = std::clamp(qthigh_knee_d_R[0], deg2rad(-90), deg2rad(60));
  qthigh_knee_d_L[1] = std::clamp(qthigh_knee_d_L[1], deg2rad(-71), deg2rad(50));
  qthigh_knee_d_R[1] = std::clamp(qthigh_knee_d_R[1], deg2rad(-50), deg2rad(71));
  
  //std::cout << "qthigh_knee_d_L" << qthigh_knee_d_L[1] << "\n";
  //std::cout << "qthigh_knee_d_R" << qthigh_knee_d_R[1] << "\n";  
  pos_reference[joint::LEFT_HIP_PITCH] = qthigh_knee_d_L[0];
  pos_reference[joint::RIGHT_HIP_PITCH] = qthigh_knee_d_R[0];
  //adding spring def and heuristically found gravity compensation
  pos_reference[joint::LEFT_KNEE] = qthigh_knee_d_L[1]  + l_spring_def;
  pos_reference[joint::RIGHT_KNEE] = qthigh_knee_d_R[1] + r_spring_def;

  pos_reference[joint::LEFT_HIP_ROLL] = q_d(7,0) - abd_tune_l; // ZG: think this direction is wrong?
  pos_reference[joint::RIGHT_HIP_ROLL] = q_d(18,0) - abd_tune_r;
  pos_reference[joint::LEFT_HIP_YAW] = 0;//yaw_l_tune;
  pos_reference[joint::RIGHT_HIP_YAW] = 0;//yaw_r_tune;

  vel_reference[joint::LEFT_HIP_ROLL] = 0;
  vel_reference[joint::RIGHT_HIP_ROLL] = 0;
  vel_reference[joint::LEFT_HIP_YAW] = 0;
  vel_reference[joint::RIGHT_HIP_YAW] = 0;

  error_thigh << currState.position_full[joint::LEFT_HIP_PITCH] - qthigh_knee_d_L[0],
      currState.position_full[joint::RIGHT_HIP_PITCH] - qthigh_knee_d_R[0];
  derror_thigh << currState.velocity_full[joint::LEFT_HIP_PITCH]- dqthigh_knee_d_L[0],
      currState.velocity_full[joint::RIGHT_HIP_PITCH] - dqthigh_knee_d_R[0];
  error_knee << currState.position_full[joint::LEFT_KNEE] - pos_reference[joint::LEFT_KNEE],
      currState.position_full[joint::RIGHT_KNEE] - pos_reference[joint::RIGHT_KNEE];
  derror_knee << currState.velocity_full[joint::LEFT_KNEE] - dqthigh_knee_d_L[1],
      currState.velocity_full[joint::RIGHT_KNEE] - dqthigh_knee_d_R[1];
  //std::cout << error_knee << std::endl;

  //Calculate torque (except Toe)
  // command[joint::LEFT_HIP_ROLL] = - ( Kp_abduction_stand * (position[joint::LEFT_HIP_ROLL] - pos_reference[joint::LEFT_HIP_ROLL]) + Kd_abduction_stand * (velocity[joint::LEFT_HIP_ROLL] - vel_reference[joint::LEFT_HIP_ROLL]) );
  // command[joint::RIGHT_HIP_ROLL] = - ( Kp_abduction_stand * (position[joint::RIGHT_HIP_ROLL] - pos_reference[joint::RIGHT_HIP_ROLL]) + Kd_abduction_stand * (velocity[joint::RIGHT_HIP_ROLL] - vel_reference[joint::RIGHT_HIP_ROLL]) );

  // command[joint::LEFT_HIP_YAW] = - ( Kp_rotation_stand * (position[joint::LEFT_HIP_YAW]) + Kd_rotation_stand * velocity[joint::LEFT_HIP_YAW] );
  // command[joint::RIGHT_HIP_YAW] = - ( Kp_rotation_stand * (position[joint::RIGHT_HIP_YAW])+ Kd_rotation_stand * velocity[joint::RIGHT_HIP_YAW] );

  // command[joint::LEFT_HIP_PITCH] = - ( Kp_thigh_stand * error_thigh(0) + Kd_thigh_stand * derror_thigh(0) );
  // command[joint::RIGHT_HIP_PITCH] = - ( Kp_thigh_stand * error_thigh(1) + Kd_thigh_stand * derror_thigh(1) );

  // command[joint::LEFT_KNEE] = - ( Kp_knee_stand*error_knee(0) + Kd_knee_stand*derror_knee(0) -  Kp_knee_stand*0.037) ; //kp_knee_stand = 1500
  // command[joint::RIGHT_KNEE] = - ( Kp_knee_stand*error_knee(1) + Kd_knee_stand*derror_knee(1) + Kp_knee_stand*0.037) ; //kp_knee_stand = 1500

  
  // calculate the toe torque
  vx_COM_fil = currState.base_velocity(0);//v_WB_B(0);//v_COM(0); // This is not filtered, and CoM velocity is in B frame. Can't we use v_WB_B?
  
  double sag_shift = p_MC_M(0)-p_MC_M_d(0); //measured- desired

  // double sag_shift = p_MC_M(0)-Base_d(0,0); //measured- desired
  p_feedback_toe = stand_offset*2.8 + sag_shift; // ZG: Why stand_offset?
  p_feedback_toe_fil = p_feedback_toe; //not filtered 
  delta_toe = - (Kp_toe_stand * (p_feedback_toe_fil) + Kd_toe_stand * (vx_COM_fil - 0) );
  // Use toe pitch to keep the COM near to the midpoint distance the feet in the x direction
  //IK (desired) toe pitch
  double l_toe_pitch_d = q_d(12,0);
  double r_toe_pitch_d = q_d(23,0);
  target_lToePitch = std::clamp(l_toe_pitch_d + delta_toe, -0.3049, 0.403629);
  target_rToePitch = std::clamp(r_toe_pitch_d - delta_toe, -0.3049, 0.403629);
  // Keep the toe roll flat. What is this magic number 0.3266?
  // ZG: give the clamp joint limit a name.
  //IK (desired) toe roll
  double l_toe_roll_d = q_d(13,0);
  double r_toe_roll_d = q_d(24,0);
  target_lToeRoll = std::clamp(l_toe_roll_d , -0.3049,0.3049);
  target_rToeRoll = std::clamp(r_toe_roll_d , -0.3049,0.3049);

  //std::cout << p_MC_M(0) << " = " << p_MC_M_d(0) << " ------ "<< p_MC_M(1) << " = " << p_MC_M_d(1) << " ------ "<< p_MC_M(2) << " = " << p_MC_M_d(2)<< std::endl;

  //Compute desired Toe actuators position based on the desired Toe Pitch and Roll angle
  target_lToeA = transAnkleStanding->j2mA(target_lToePitch, target_lToeRoll, "left");
  target_lToeB = transAnkleStanding->j2mB(target_lToePitch, target_lToeRoll, "left");
  target_rToeA = transAnkleStanding->j2mA(target_rToePitch, target_rToeRoll, "right");
  target_rToeB = transAnkleStanding->j2mB(target_rToePitch, target_rToeRoll, "right");

  pos_reference[joint::LEFT_TOE_A] = target_lToeA;
  pos_reference[joint::RIGHT_TOE_A] = target_rToeA;
  pos_reference[joint::LEFT_TOE_B] = target_lToeB;
  pos_reference[joint::RIGHT_TOE_B] = target_rToeB;

  //-----------leg length log -------------//
  //comanded
  leg_length(0) = LL_des_fil + left_tune + height_tune;
  leg_length(1) = RR_des_fil + right_tune + height_tune;

  //measured
  VectorXd Cassie_qthigh_knee(2);
  Cassie_qthigh_knee = geoExpressions.Digit2Cassie(Vector2d{currState.position_full[joint::LEFT_HIP_PITCH],
          currState.position_full[joint::LEFT_KNEE]}, DomainControl::DomainType::LEFT_STAND);
  VectorXd measured_length(2);
  measured_length = geoExpressions.FK_Geo_p_cassie(Cassie_qthigh_knee(0),Cassie_qthigh_knee(1));
  leg_length(2) = measured_length(1);

  Cassie_qthigh_knee = geoExpressions.Digit2Cassie(Vector2d{currState.position_full[joint::RIGHT_HIP_PITCH],
          currState.position_full[joint::RIGHT_KNEE]}, DomainControl::DomainType::RIGHT_STAND);
  measured_length = geoExpressions.FK_Geo_p_cassie(Cassie_qthigh_knee(0),Cassie_qthigh_knee(1));
  leg_length(3) = measured_length(1);
  //std::cout << "  Desried LL based on IK->FK=  " << measured_length(1) << "  DESIRED LL=  " << LL_des_fil + left_tune << "  LA IK->FK=" << measured_length(0) << "  IK LA=" << pitch_des_fil - pitch_l_tune << std::endl;

  //std::cout<< "standing LA = " << measured_length(0) << std::endl; 

  // command[joint::LEFT_TOE_A] = - (Kp_toeA*(position[joint::LEFT_TOE_A] - target_lToeA) + Kd_toeA*(velocity[joint::LEFT_TOE_A] - 0));
  // command[joint::RIGHT_TOE_A] = - (Kp_toeA*(position[joint::RIGHT_TOE_A] - target_rToeA) + Kd_toeA*(velocity[joint::RIGHT_TOE_A] - 0));
  // command[joint::LEFT_TOE_B] = - (Kp_toeB*(position[joint::LEFT_TOE_B] - target_lToeB) + Kd_toeB*(velocity[joint::LEFT_TOE_B] - 0));
  // command[joint::RIGHT_TOE_B] = - (Kp_toeB*(position[joint::RIGHT_TOE_B] - target_rToeB) + Kd_toeB*(velocity[joint::RIGHT_TOE_B] - 0));
  return 0;
}

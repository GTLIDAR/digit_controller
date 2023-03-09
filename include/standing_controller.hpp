#pragma once

#include "Eigen/Dense"
#include "safety_manager.hpp"
#include "robot_expressions.hpp"
#include "analytical_expressions.hpp"
#include "geo_expressions.hpp"

using Eigen::VectorXd;

class StandingController{
public:
  StandingController(std::string path2toml);
  std::string joint_label[N_MOTORS_HALF];
  double LSA;
  double RVA;
  double RHA;
  double step_period;
  double ct = 1/step_period;

  double max_torque[N_MOTORS];
  double min_torque[N_MOTORS];

  // get_command_new is Aziz's standing controller.
  int get_command_new(const DigitState& currState, Vector3d p_PTL_d, Vector3d p_PTR_d, 
    VectorXd &pos_reference, VectorXd &vel_reference, VectorXd &command,
    VectorXd &p_MC_M, VectorXd &leg_length, VectorXd &p_MC_M_d);


private:
  std::shared_ptr<cpptoml::table> config;
  int load_parameters(std::string path2toml);

  RobotExpressions robotExpressions;

  AnalyticalExpressions analytical_expressions;

  GeoExpressions geoExpressions;

  double Kp_abduction_stand ;
  double Kp_thigh_stand;
  double Kp_knee_stand;
  double Kp_rotation_stand;
  double Kp_toe_stand;
  double Kd_abduction_stand;
  double Kd_thigh_stand;
  double Kd_knee_stand;
  double Kd_rotation_stand;
  double Kd_toe_stand;

  double Kp_lateral_stand;
  double Kd_lateral_stand;
  double Kp_toeA;
  double Kd_toeA;
  double Kp_toeB;
  double Kd_toeB;

  // shifting center of mass when it will start walking
  double shift_distance;
  double shift_time;
  double standing_abduction_offset;
  double stand_offset_exp;
  double stand_offset;
  double t1;
  double s1;
  double s2;
  double tg_velocity_x;
  double tg_velocity_x_fil;
  double lateral_move_fil;
  double max_time_stand_control;

  double dLL_des_fil;
  double P_feedback_toe_fil;
  double standing_switch_time;

  double pitch_des;
  double pitch_des_fil;
  double LL_des;
  double LL_des_fil;
  double pitch_des_R;
  double pitch_des_fil_R;
  double RR_des;
  double RR_des_fil;
  double roll_des;
  double roll_des_l;
  double roll_des_r;
  double roll_des_fil;
  double des_min_length; // ZG: Make this local variable, not a member variable.

  double roll;
  double pitch;
  double yaw;
  double droll;
  double dpitch;
  double dyaw;

  double tg_yaw;
  double lateral_shift;
  double left_tune;
  double right_tune;

  VectorXd qthigh_knee_d_L;
  VectorXd qthigh_knee_d_R;
  VectorXd dqthigh_knee_d_L;
  VectorXd dqthigh_knee_d_R;
  VectorXd error_thigh;
  VectorXd derror_thigh;  
  VectorXd error_knee;
  VectorXd derror_knee;
  
  VectorXd p_COM;
  VectorXd v_COM;
  double px_COM_fil;
  double vx_COM_fil;

  double p_feedback_toe;
  double p_feedback_toe_fil;
  double delta_toe;
  VectorXd p_rightFoot;
  VectorXd p_leftFoot;

  VectorXd p_PC_P;
  VectorXd p_PC_P_prev;
  VectorXd p_PC_P_fil;
  double p_PC_P_fil_x = 0;
  double p_PC_P_fil_y = 0;
  double p_PC_P_fil_z = 0;


  TransmissionAnkleNew *transAnkleStanding;
  
  double target_lToeA;
  double target_lToeB;
  double target_rToeA;
  double target_rToeB; 
  double target_lToePitch;
  double target_lToeRoll;
  double target_rToePitch;
  double target_rToeRoll;
};
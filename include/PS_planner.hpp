/**
* Author:       Zhaoyuan Gu, Aziz Shamsah
* Email:        {zgu78, ashamsah3}@gatech.edu
* Modified:     02-25-2023
* Copyright:    LIDAR @ Georgia Tech
**/
#ifndef PS_PLANNER_H_
#define PS_PLANNER_H_

#include "Eigen/Dense"
#include <iostream>
#include <fstream>
#include <vector>
#include "digit_definition.hpp"

using namespace Eigen;

// Definition of hyperparameters.
struct PS_parameters {
  double L_Wpc_d;
  double W_Wpc_d;
  double v_StB_Wpn_d_x;
  double v_StB_Wpn_d_y;
  double stept = 0.4;
  double stept_n; 
  double heading_change;
  
  VectorXd v_StB_Wpn_d = VectorXd::Zero(3);
  Vector3d v_StB_Wpc_d = Vector3d{0,0,0};

  Vector2d switch_PSP = {5.50164294, 3.50104551};
  Vector2d psp_foot_w = {5.63176294, 3.50104551}; 
  Vector2d waypointPSP;
  Vector2d waypoint = {5.50164294, 3.50104551}; 
  Vector2d psp_foot;
  Vector2d switch_d = {5.50164294, 3.50104551}; 

  double vx_pid;
  double vy_pid;
};

class PSPlanner{
 public:
  PSPlanner();
  
  // void getPSP_step(double step_index, double& target_vel_x_raw, double& target_vel_y_raw, double& stept, double& stept_n, double& stepw_psp, double& target_yaw, double& stepl_psp, Vector2d& waypoint, Vector2d& foot_w_psp, Vector2d& switch_PSP);
  void getPSP_step(double step_index);

  void waypoint_tracking(VectorXd base_position, double target_yaw);

  void read_PSP(std::string filename);

  void getObs_step(double step_index);
  void read_obs(std::string filename);
  void set_T_PSPB(Vector3d base_position, double target_yaw);
  
  DigitControlHyperparameters getControlHyperparameters();

  std::vector<Eigen::Vector2d> target_vel_PSP;
  std::vector<double> step_t;
  std::vector<double> step_w;
  std::vector<double> step_l;
  std::vector<double> delta_theta;
  std::vector<double> step_t1;
  std::vector<double> step_t2;
  std::vector<double> step_v_apex; 
  std::vector<Eigen::Vector2d> W_foot;
  std::vector<Eigen::Vector2d> waypoint_PSP;
  std::vector<Eigen::Vector2d> switch_PSP_list;

  std::vector<Eigen::Vector4d> obs_list;

  double num_steps;
  double num_steps_obs;

  Matrix4d T_PSPB_0 = Matrix4d::Identity();
  Vector4d obs = Vector4d{5.0, 2.0, 6.0, 1.0};

  PS_parameters PS_parameters_curr; // Gets updated every step by getPSP_step().
};

#endif // PS_PLANNER_H_

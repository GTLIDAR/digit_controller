/**
* Author:       Victor Paredes, Guillermo Castillo
* Email:        paredescauna.1@osu.edu, castillomartinez.2@osu.edu
* Modified:     01-25-2022
* Copyright:    Cyberbotics Lab @The Ohio State University
**/
/*
* Copyright (c) 2023, The Ohio State University - Cyberbotics Lab
* All rights reserved.
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* 1. Redistributions of source code must retain the above copyright notice, this
*    list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
* 3. Neither the name of the copyright holder nor the names of its
*    contributors may be used to endorse or promote products derived from
*    this software without specific prior written permission.
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**
* Author:       Zhaoyuan Gu, Aziz Shamsah
* Email:        {zgu78, ashamsah3}@gatech.edu
* Modified:     02-25-2023
* Copyright:    LIDAR @ Georgia Tech
**/

#ifndef WALKING_TRAJECTORY_H_
#define WALKING_TRAJECTORY_H_

#include "Eigen/Dense"
#include <chrono>
#include <vector>
#include <cmath>
#include <memory>
#include <algorithm>
#include <set>
#include "cpptoml/include/cpptoml.h"
#include "safety_manager.hpp"
#include "robot_expressions.hpp"
#include "filter.hpp"
#include "motor_control.hpp"
#include "utilities.hpp"

#include "geo_expressions.hpp"
#include "digit_definition.hpp"
#include "analytical_expressions.hpp"
#include "domain_control.hpp"
#include "digit_state.hpp"
// #include "analytical_expressions_fixarm.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm> 

#include <vector> 

using namespace std;
using namespace wdc;
using namespace Eigen;

struct Transition{
  int source_domain;
  int target_domain;
  bool isTransitioning;
};


class PID_comp{
public:
  PID_comp(double p_gain, double i_gain, double d_gain, double mn, double mx, double dt=0.001);
  double kp; 
  double ki;
  double kd;
  double min;
  double max;
  double dt = 0.001;
  double update(double qd, double qdotd, double q, double qdot);

private:
  double error_pos = 0;
  double error_vel = 0;
  double error_int = 0;
  double output;
  double previous_error;
};

class BezierSupport{
public:
  BezierSupport(int _bezierOrder, VectorXd &_points);
  std::vector<double> P; // N control points for K outputs
  std::vector<int> bezierBinomialCoef; // Stores binomial coefficients values  
  int bezierOrder;
  double Bezier(double t);
  double DBezier(double t);
  double bincoeff(int upper, int lower);  
  double bincoeffFast(int upper, int lower); // Fast calculation of bezier coeficients  
};

class WalkingTrajectory{
public:
  WalkingTrajectory(std::string path2toml="");

  double compute_phaseVariable(double stept, double t);

  double constrainAngle(double x);

  int evalGuardSensor(DigitState& currState, DomainControl::DomainType &domain, double &t);
 
  int getGRF(DigitState& currState);

  int reloadRegulators(std::string path2toml, bool sim);

  double updateYawTarget(double newYawTarget, double yaw_WB, double st_yaw, double sw_yaw);

  void updateTimeOffset(double time_in_current_mode) {time_offset = time_in_current_mode;}

  /**
   * Specifies a direction on the graph to switch to domain outside the current cycle
   * @param source_domain the domain from which the transition will fire up
   * @return 1: If succesfully set the transition, 0: Error, maybe the domains do not exists.
   */
  int goToDomain(DomainControl::DomainType source_domain, DomainControl::DomainType target_domain);
  int changeDomain(DomainControl::DomainType domain_id);
  
  int regulation_PSP(const DigitState& currState, VectorXd &pos_reference, VectorXd &vel_reference, 
    double s, Vector3d& p_StSw_initial, const DigitControlHyperparameters &hyper_param, 
    VectorXd p_MP_P_0, VectorXd &leg_length, VectorXd &command, VectorXd& acc_reference);

  VectorXd calc_ff_command(VectorXd &base_orientation, VectorXd &base_angvel,  
    VectorXd &pos_reference,  VectorXd &position);

  VectorXd calc_passivity_command(DigitState& currState, VectorXd pos_reference, 
    VectorXd vel_reference, VectorXd velocity, VectorXd acc_reference);
  
  MatrixXd J_HeelSpringDeflectionEst(double q_knee, double q_knee_spring, double q_ankle);

  void swing_foot_traj(VectorXd& p_PSw_d, VectorXd& v_PSw_d, VectorXd& a_PSw_d, 
    const Vector3d p_PSw_d_final, const Vector3d p_PSw_initial, 
    double swing_height_d, double sXY, double sZ);

  MatrixXd get_B();

  // Reorder A matrix's row, put index in index first, shift other rows to 
  // bottom in order. Set dim != 0 to reorder the columns.
  MatrixXd reorder(MatrixXd A, const VectorXd& index, int dim = 0);

  // Select elements in q by index and create a new vector.
  VectorXd select(const VectorXd& q, const VectorXd& index);

  // Put u8 in u (fixed length) at index.
  VectorXd distribute(const VectorXd& u8, const VectorXd& index);

  // Calculate the Abduction and Knee joint torque based on the configuration given. 
  VectorXd calc_gravity(VectorXd q, DomainControl::DomainType domain);

  double get_joint_gravity_burden(MatrixXd p_Links_com, 
    VectorXd Links_mass, std::vector<int> burden_index, 
    VectorXd p_BJ, MatrixXd R_BJ, VectorXd joint_direction);

  double linear_fast_rise(double s);

  int slopeEstimationFK(VectorXd &orientation, VectorXd &x_full, VectorXd &slopeFK);

  VectorXd calc_p_StSw_d_f(VectorXd v_WB_B, Vector3d v_WB_B_d, VectorXd p_BSt, 
    double step_time_spent, int stance_leg, double stepl_d, double stepw_d, 
    VectorXd v_StB_L);

  void logStepTime(double time_switches);

  void recordVelocityTarget(const Vector3d &target_vel) {v_StC_d_F0 = v_WB_B_d;}

  // Calculate body velocity in Stance Toe frame, based on kinematics.
  Vector3d get_v_StB(VectorXd &q_St, VectorXd &dq_St);
  
  void setStepTime(double stept, double stept_n) {T = stept; T_n = stept_n; T_left = T;}

  double step_time_error = 0; // time_spent at contact - T.
  double time_offset = 0.0; // The first time_offset = time_walking.
  double step_time_spent = 0.0; // From latest contact till now.
  double T = 0.5;
  double T_left = T;
  double T_n;
  double phaseVariable;
  DomainControl::Domain *current_domain;
  int nDomains;
  bool hasSwitched;
  bool resetTime;
  bool is_lateral_v_reachable = true;
  int fail_mode = 0;

  BezierSupport *s_slow;
  BezierSupport *ds_slow;
  BezierSupport *s_fast;
  BezierSupport *s_middle;
  JointFilter RFootPitch;
  JointFilter RFootRoll;
  
  // Regulator variables
  double Kp_fps;
  double Kd_fps;
  double Kp_fpf;
  double Kd_fpf;
  double Kp_tp;
  double Kd_tp;
  double Kp_tr;
  double Kd_tr;

  double landing_pitch_offset_left;
  double landing_pitch_offset_right;
  double vx_offset = 0.0;
  double vy_offset = 0.0;
  double yaw_offset = 0.0;
  int hip_pitch_direction;
  int hip_roll_direction;
  int hip_yaw_direction;
  double u_torsopitch;
  double u_torsoroll;
  double u_torsoyaw;
  double torso_pitch_offset;
  double torso_roll_offset;
  double lToe_Pitch;
  double lToe_Roll;
  double rToe_Pitch;
  double rToe_Roll;

  int st_abduction;
  int st_rotation;
  int st_flexion;
  int st_knee;
  int st_ankle;
  int st_toeA;
  int st_toeB;
  int sw_abduction;
  int sw_rotation;
  int sw_flexion;
  int sw_knee;
  int sw_ankle;
  int sw_toeA;
  int sw_toeB;

  int st_motor_abduction;
  int st_motor_rotation;
  int st_motor_thigh;
  int st_motor_knee;
  int st_motor_toeA;
  int st_motor_toeB;
  int sw_motor_abduction;
  int sw_motor_rotation;
  int sw_motor_thigh;
  int sw_motor_knee;
  int sw_motor_toeA;
  int sw_motor_toeB;

  double roll_df = 0;

  double st_yaw_error;
  double sw_yaw_error;
  double st_yaw_init;
  double sw_yaw_init;
  double yaw_StSw_df;
  double st_yaw_df;
  double sw_yaw_df;
  int is_turning = 0; // 0 = no, -1 = left, 1 = right.
  int turning_step_index = 0;

  double tg_velocity_x_fil;
  double tg_velocity_y_fil;
  double tg_velocity_yaw_fil;
  double tg_yaw;
  double tg_yaw_old;
  double comp_fps;
  double comp_fpf;
  double comp_fpf_old;
  double dcomp_fpf;
  double t_old;


  double pos_reference_lhiproll_old = 0.3605;
  double pos_reference_rhiproll_old = -0.3605;

  JointFilter Vx_filtered;
  JointFilter Vy_filtered;
  JointFilter TorsoPitch;
  JointFilter TorsoRoll;
  JointFilter TorsoYaw;
  JointFilter LFootPitch;
  JointFilter LFootRoll;
  JointFilter Ax_filtered;
  JointFilter Ay_filtered;
  double hip_pitch_offset;
  double hip_roll_offset;
  double hip_yaw_offset;

  double roll;
  double pitch;
  double yaw;

  double yaw_WSt = 0;

  TransmissionAnkleNew *transAnkle;
  
  // Record the phase when the toe is off the ground. s_toe_off = s before toe off.
  bool toe_off = false; 
  double s_toe_off; 
  // Record the phase when the toe touches the ground. s_touch_down = 0 before toe touch down.
  double s_touch_down; 
  // Happens when p_StSw_B_m(2) is smaller than a certain value. Should be earlier than leg switch.
  bool touch_down = false; 
  // s = 0 < s_toe_off << s_touch_down < s = 1; 
  
  VectorXd p_BSt = VectorXd::Zero(3);
  VectorXd p_BSw = VectorXd::Zero(3);
  VectorXd p_WSt = VectorXd::Zero(3);
  VectorXd p_BC = VectorXd::Zero(3);
  VectorXd position_last = VectorXd::Zero(3);
  VectorXd velocity_last = VectorXd::Zero(3);
  VectorXd p_StSw_d_final = VectorXd::Zero(3);
  VectorXd p_BSw_final =  VectorXd::Zero(3);
  VectorXd p_StSw_d_contact = VectorXd::Zero(3);
  VectorXd p_SwC_St_df = VectorXd::Zero(3);
  VectorXd p_StSw_B_m = VectorXd::Zero(3);
  VectorXd p_StSw_d = VectorXd::Zero(3);
  VectorXd v_StSw_d = VectorXd::Zero(3);
  VectorXd a_StSw_d = VectorXd::Zero(3);

  Vector3d v_StB_f = Vector3d::Zero();
  Vector3d v_StB_L = Vector3d::Zero();
  Vector3d v_StB_Wpc_L = Vector3d::Zero();
  Vector3d v_StC_0 = Vector3d::Zero();
  Vector3d v_StC_0_d = Vector3d::Zero();
  Vector3d p_StC_0 = Vector3d::Zero();
  Vector3d p_StC_0_d = Vector3d::Zero();

  Vector3d v_WB_B_d = Vector3d{0,0,0};
  // A record of the v_WB_B_d from last step, 
  // the velocity target for this step.
  Vector3d v_StC_d_F0 = VectorXd::Zero(3); 

  Vector3d v_StB_kin = Vector3d::Zero();
  Vector3d v_StB_LIP = Vector3d::Zero();
  Vector3d v_StB_LIP_d = Vector3d::Zero();
  Vector3d p_StB_LIP_d = Vector3d::Zero();
  Vector3d p_StC_LIP_d = Vector3d::Zero();
  Vector3d p_StB_f = Vector3d::Zero();
  Vector3d p_StB = Vector3d::Zero();

  Vector3d p_CSt = Vector3d::Zero();
  Vector3d p_CSw_St_df = Vector3d::Zero();
  VectorXd p_CSw = VectorXd::Zero(3);
  Vector3d p_CSw_d = Vector3d::Zero();
  Vector3d p_BSw_d = Vector3d::Zero();
  VectorXd p_BSw_initial = VectorXd::Zero(3);

  Vector3d L_pCSt_est = Vector3d::Zero();

  VectorXd L_pCSt = VectorXd::Zero(3);
  VectorXd L_pCOM = VectorXd::Zero(3);

  VectorXd gc_8 = VectorXd::Zero(10); // torque for gravity compensation.
  VectorXd ff_8 = VectorXd::Zero(10);
  VectorXd fb_8 = VectorXd::Zero(10);
  VectorXd q_d = VectorXd::Zero(10);
  VectorXd dq_d = VectorXd::Zero(10);
  VectorXd ddq_d = VectorXd::Zero(10);

  double vx_pid = 0;
  double vy_pid = 0;

  double yaw_WpcB;

  const double h_toe = 0.0580841; // toe joint to ground.
  const double H_com = std::clamp(0.95, 0.4, 1.2); // -p_CSt(2)
  const double mass = 51.15;//48.2843212;
  const double g = 9.81;

private:
  std::unique_ptr<DomainControl::Domain []> walkingDomain;
  std::shared_ptr<cpptoml::table> config;
  std::shared_ptr<cpptoml::table> config_robot;
  std::shared_ptr<cpptoml::table> reg_config;
  Transition domain_transition;
  RobotExpressions robotExpressions;

  GeoExpressions geoExpressions;

  AnalyticalExpressions analytical_expressions;
  // AnalyticalExpressionsFixArm analytical_expressions_fixarm;
  
  double force_threshold; 

  FirstOrderFilter filter_yaw;

};

#endif //WALKING_TRAJECTORY_H
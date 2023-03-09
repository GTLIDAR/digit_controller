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
#ifndef ROBOT_EXPRESSIONS_H_
#define ROBOT_EXPRESSIONS_H_

#include "Eigen/Dense"
#include "safety_manager.hpp"
#include "math.h"

#include "J_leftFoot.hh"
#include "J_rightFoot.hh"
#include "p_leftFoot.hh"
#include "p_rightFoot.hh"
#include "p_com.hh"
#include "v_com.hh"
#include "T_leftFoot.hh"
#include "T_rightFoot.hh"


using namespace Eigen;

struct RobotParameters{
  struct{
    double toe_heel;
    double heel_sankle;
    double sankle_hankle;
    double hankle_knee;
    double knee_ship;
    double ship_thip;
    double thip_fhip;
  }Length;

  struct{
    double toe_heel;
    double heel_sankle;
    double sankle_hankle;
    double hankle_knee;
    double knee_ship;
    double ship_thip;
    double thip_fhip;
  }Axis;
  
};

class RobotExpressions{
public:
  /** 
   * We should load some complex expressions from MATLAB or Mathematica and
   * define the robot parameters as lengths, axes, offsets and etc
   */
  RobotExpressions();

  // Kinematics

  /**
   * Computes the robot's lateral CoM based on urdf and states
   * @param x Vector containing joint positions
   * @dx Vector containing joint speeds
   * @stancefoot Indicates which foot acts as support (0: Left, 1: Right, 2: DS)
   * @return jacobian matrix (row vector)
   */  
  MatrixXd jac_leftFoot(VectorXd &x);

  /**
   * Computes the robot's lateral CoM jacobian based on urdf and states
   * @param x Vector containing joint positions
   * @dx Vector containing joint speeds
   * @stancefoot Indicates which foot acts as support (0: Left, 1: Right, 2: DS)
   * @return jacobian matrix (row vector)
   */  
  MatrixXd jac_rightFoot(VectorXd &x);


  // /**
  //  * Computes the robot's left foot position on urdf and states  (compute the positions)
  //  * @param x Vector containing joint positions
  //  * @return position robot's left foot (row vector)
  //  */  
  MatrixXd pos_leftFoot(VectorXd &x);


  // /**
  //  * Computes the robot's right foot position on urdf and states  (compute the positions)
  //  * @param x Vector containing joint positions
  //  * @return position robot's right foot (row vector)
  //  */  
  MatrixXd pos_rightFoot(VectorXd &x);


  // /**
  //  * Computes the robot's CoM position on urdf and states
  //  * @param x Vector containing joint positions
  //  * @return position robot's CoM (row vector)
  //  */  
  MatrixXd pos_com(VectorXd &x);


    // /**
  //  * Computes the robot's CoM velocity on urdf and states
  //  * @param x Vector containing joint positions and velocities
  //  * @return velocity robot's CoM (row vector)
  //  */  
  MatrixXd vel_com(VectorXd &x, VectorXd &dx);

  // what is this function?
  VectorXd Inverse_Kinematics_p_L(double LA, double LL);
  VectorXd Inverse_Kinematics_p_R(double LA, double LL);


  VectorXd Inverse_Kinematics_p_L_new(double LA, double LL);
  VectorXd Inverse_Kinematics_p_R_new(double LA, double LL);

  VectorXd Forward_Kinematics_p_L(double qHip, double qKnee);
  VectorXd Forward_Kinematics_p_R(double qHip, double qKnee);
  VectorXd Forward_Kinematics_p(double qHip, double qKnee, double leg);

  VectorXd Inverse_Kinematics_v(double LA, double LL, double dLA, double dLL);

  VectorXd Get_Ik_LL_LA(const Eigen::Matrix<double, 3, 1> COM, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const Eigen::Matrix<double, 1, 1> heading);
  VectorXd Get_geom_full_Ik_solution(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> COM, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const Eigen::Matrix<double, 1, 1> heading);
  void IK_p_full(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> p_PToe, double leg, double q_rotation);
  void IK_v_full(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> p_PToe, const Eigen::Matrix<double, 3, 1> v_PToe, int leg, double q_rotation, double dq_rotation);
  
  void swing_foot_traj(VectorXd& p_StSw_d, Vector3d& v_StSw_d, Vector3d& a_StSw_d, const Vector3d p_StSw_d_final, const Vector3d p_StSw_initial, double swing_height_d, double sXY, double sZ);
  VectorXd get_displacement_xyz(const Vector3d D_xy_final, double H, double sXY, double sZ);

  MatrixXd T_rightFoot(VectorXd &x);
  MatrixXd T_leftFoot(VectorXd &x); 

private:
  RobotParameters robotParameters;
  double qHipPitch;
  double qKnee;
  double dqFlexion;
  double dqKnee;
  std::vector<double> b_hip = {8.1017, 44.7855, 95.1940, 90.9300, 32.0764};
  std::vector<double> b_knee = { 1.1646, -0.0674, -2.8622, -0.8685};

};

#endif

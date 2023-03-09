#ifndef ANALYTICAL_EXPRESSIONS_H_
#define ANALYTICAL_EXPRESSIONS_H_

// Include Files
# include <iostream>

#include "Eigen/Dense"
#include <cmath>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "math2mat.hpp"
#include "mdefs.hpp"

#include "all_kinematics.h" // .h file are all the same for fixed and non-fixed arm.
#include "dynFixArm/InertiaMatrix_src.h"
#include "dynFixArm/CoriolisTerm_src.h"
#include "dynFixArm/GravityVector_src.h"

using namespace Eigen;

// state is defined in digit_definition.h.
class AnalyticalExpressions{
public:
 
  AnalyticalExpressions();
  
  // ZG TODO: Figure out should we make these functions static?
  // Does create an object for each function call have more overhead?
  // Or is it better to have a static class that is shared between all calls?
  
  //--FK for COM
  MatrixXd p_COM(VectorXd q);

  //--FK for left toe position
  MatrixXd p_left_toe_pitch(VectorXd q);
  //--FK for right toe position 
  MatrixXd p_right_toe_pitch(VectorXd q);

  VectorXd p_Pelvis(VectorXd q);

  VectorXd p_LeftPelvisRotation(VectorXd q);
  VectorXd p_LeftHip(VectorXd q);
  VectorXd p_LeftThigh(VectorXd q);
  VectorXd p_LeftKnee(VectorXd q);
  // Frost didn't generate this function because the knee-to-shin joint is fixed 
  // in URDF. 
  // VectorXd p_LeftShin(VectorXd q); 
  VectorXd p_LeftTarsus(VectorXd q);
  VectorXd p_LeftToe(VectorXd q);

  VectorXd p_RightPelvisRotation(VectorXd q);
  VectorXd p_RightHip(VectorXd q);
  VectorXd p_RightThigh(VectorXd q);
  VectorXd p_RightKnee(VectorXd q);
  // VectorXd p_RightShin(VectorXd q);
  VectorXd p_RightTarsus(VectorXd q);
  VectorXd p_RightToe(VectorXd q);

  VectorXd p_LeftAbductionJoint(VectorXd q);
  VectorXd p_LeftThighJoint(VectorXd q);
  VectorXd p_LeftKneeJoint(VectorXd q);
  VectorXd p_LeftTarsusJoint(VectorXd q);
  VectorXd p_RightAbductionJoint(VectorXd q);
  VectorXd p_RightThighJoint(VectorXd q);
  VectorXd p_RightKneeJoint(VectorXd q);
  VectorXd p_RightTarsusJoint(VectorXd q);

  MatrixXd R_LeftAbductionJoint(VectorXd q);
  MatrixXd R_LeftThighJoint(VectorXd q);
  MatrixXd R_LeftKneeJoint(VectorXd q);
  MatrixXd R_RightAbductionJoint(VectorXd q);
  MatrixXd R_RightThighJoint(VectorXd q);
  MatrixXd R_RightKneeJoint(VectorXd q);

  MatrixXd AMworld_about_pA(VectorXd q, VectorXd qd, VectorXd pA);
  MatrixXd Jdq_AMworld_about_pA(VectorXd q, VectorXd qd, VectorXd pA);
  
  MatrixXd Jp_toe_pitch_joint_left(VectorXd q);
  MatrixXd Jp_toe_pitch_joint_right(VectorXd q);

  MatrixXd InertiaMatrix(VectorXd q_fixarm);
  MatrixXd CoriolisTerm(VectorXd q_fixarm, VectorXd dq_fixarm);
  MatrixXd GravityVector(VectorXd q_fixarm);
  MatrixXd Jb_LeftToeBottomBack(VectorXd q_fixarm);
  MatrixXd Jb_LeftToeBottom(VectorXd q_fixarm);
  MatrixXd Jb_RightToeBottomBack(VectorXd q_fixarm);
  MatrixXd Jb_RightToeBottom(VectorXd q_fixarm);
  MatrixXd Jp_LeftToeBottomBack(VectorXd q_fixarm);
  MatrixXd Jp_LeftToeBottom(VectorXd q_fixarm);
  MatrixXd Jp_RightToeBottomBack(VectorXd q_fixarm);
  MatrixXd Jp_RightToeBottom(VectorXd q_fixarm);

};

#endif

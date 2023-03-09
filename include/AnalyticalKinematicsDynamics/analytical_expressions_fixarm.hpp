#ifndef ANALYTICAL_EXPRESSIONS_FIXARM_H_
#define ANALYTICAL_EXPRESSIONS_FIXARM_H_

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

#include "all_kinematics_fixarm.h"
#include "dynFixArm/InertiaMatrix_src.h"
#include "dynFixArm/CoriolisTerm_src.h"
#include "dynFixArm/GravityVector_src.h"

using namespace Eigen;

// state is defined in digit_definition.h.
class AnalyticalExpressionsFixArm{
public:
 
  AnalyticalExpressionsFixArm();

  MatrixXd InertiaMatrix(VectorXd q);
  MatrixXd CoriolisTerm(VectorXd q, VectorXd dq);
  MatrixXd GravityVector(VectorXd q);

  MatrixXd Jb_LeftToeBottomBack(VectorXd q);
  MatrixXd Jb_RightToeBottomBack(VectorXd q);
  MatrixXd Jp_LeftToeBottomBack(VectorXd q);
  MatrixXd Jp_RightToeBottomBack(VectorXd q);
};

#endif

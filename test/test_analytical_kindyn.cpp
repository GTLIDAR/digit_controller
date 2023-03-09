// Note: make sure to compile together with test_entrypoint.cpp
// #ifdef TEST

#include <iostream>
#include "test_entrypoint.h"

#include "Eigen/Dense"
#include "analytical_expressions.hpp"
#include "geo_expressions.hpp"
#include "safety_manager.hpp"
#include "digit_definition.hpp"
// #include "analytical_expressions_fixarm.hpp"
#include "kin/p_COM_src.h"
#include "domain_control.hpp"

#define EIGEN_DONT_VECTORIZE
#define EIGEN_DISABLE_UNALIGNED_ARRAY_ASSERT

AnalyticalExpressions analytical_expressions;
GeoExpressions geo_expressions;
// AnalyticalExpressionsFixArm analytical_expressions_fixarm;
VectorXd q = VectorXd::Zero(28);
VectorXd q_fixarm = VectorXd::Zero(20);

TEST_CASE("TEST consensus between geo and analy") {
  double q_thigh_cassie = 0.4;
  double q_knee_cassie = -0.9;
  VectorXd LA_LL = geo_expressions.FK_Geo_p_cassie(q_thigh_cassie, q_knee_cassie);

  VectorXd q_left = VectorXd::Zero(28);
  q_left(dd::LeftHipRoll) = 0.1; // Should be irrelevant to leg roll.
  q_left.segment(dd::LeftHipPitch,2) = geo_expressions.Cassie2Digit(Vector2d{q_thigh_cassie, q_knee_cassie}, DomainControl::DomainType::LEFT_STAND);
  q_left(dd::LeftAnkle) = -q_left(dd::LeftKnee);
  VectorXd p_PTl = analytical_expressions.p_left_toe_pitch(q_left);
  Vector2d LA_LL_answer;
  Eigen::VectorXd q_solution = geo_expressions.IK_PToe(p_PTl, LA_LL_answer, DomainControl::DomainType::RIGHT_STAND, 0);
  std::cout << LA_LL.transpose() << " " << LA_LL_answer.transpose() << std::endl;
  CHECK(LA_LL.isApprox(LA_LL_answer, 1e-3));
}

// TEST_CASE("TEST consensus between geo and analy") {
//   double q_thigh_cassie = 0.6;
//   double q_knee_cassie = -0.9;
//   VectorXd LA_LL = geo_expressions.FK_Geo_p_cassie(q_thigh_cassie, q_knee_cassie);

//   VectorXd q_left = VectorXd::Zero(28);
//   q_left(dd::LeftHipRoll) = 0.37524572679 - 0.2; // Should be irrelevant to leg roll.
//   q_left(dd::LeftHipYaw) = -0.12; // The change in the yaw doesn't affect too much.
//   q_left.segment(dd::LeftHipPitch,2) = geo_expressions.Cassie2Digit(Vector2d{q_thigh_cassie, q_knee_cassie}, DomainControl::DomainType::LEFT_STAND);
//   q_left(dd::LeftAnkle) = -q_left(dd::LeftKnee);
//   VectorXd p_PTl = analytical_expressions.p_left_toe_pitch(q_left);
//   std::cout << "p_PTl: " << p_PTl.transpose() << std::endl;
//   Vector2d LA_LL_answer;
//   Eigen::VectorXd q_solution = geo_expressions.IK_PToe(p_PTl, LA_LL_answer, DomainControl::DomainType::RIGHT_STAND, q_left(dd::LeftHipYaw));
//   std::cout << LA_LL.transpose() << " " << LA_LL_answer.transpose() << std::endl;
//   CHECK(LA_LL.isApprox(LA_LL_answer, 3e-3));
//   std::cout << "\n";
// }

// TEST_CASE("TEST consensus between geo and analy") {
//   double q_thigh_cassie = 0.2;
//   double q_knee_cassie = -1.0;
//   VectorXd LA_LL = geo_expressions.FK_Geo_p_cassie(q_thigh_cassie, q_knee_cassie);

//   VectorXd q_right = VectorXd::Zero(28);
//   q_right(dd::RightHipRoll) = -0.37524572679 - 0.1; // Should be irrelevant to leg roll.
//   q_right(dd::RightHipYaw) = -0.05; // The change in the yaw doesn't affect too much.
//   q_right.segment(dd::RightHipPitch,2) = geo_expressions.Cassie2Digit(Vector2d{q_thigh_cassie, q_knee_cassie}, DomainControl::DomainType::RIGHT_STAND);
//   q_right(dd::RightAnkle) = -q_right(dd::RightKnee);
//   VectorXd p_PTr = analytical_expressions.p_right_toe_pitch(q_right);
//   std::cout << "p_PTr: " << p_PTr.transpose() << std::endl;
//   Vector2d LA_LL_answer;
//   Eigen::VectorXd q_solution = geo_expressions.IK_PToe(p_PTr, LA_LL_answer, DomainControl::DomainType::RIGHT_STAND, q_right(dd::RightHipYaw));
//   std::cout << LA_LL.transpose() << " " << LA_LL_answer.transpose() << std::endl;
//   CHECK(LA_LL.isApprox(LA_LL_answer, 3e-3));
//   std::cout << "\n";

// }

TEST_CASE("Test FK") {
  Vector3d p_BTl_rviz {0.0618, 0.4026, -0.7924};
  Vector3d p_BTl = analytical_expressions.p_left_toe_pitch(q);

  CHECK(p_BTl.isApprox(p_BTl_rviz, 1e-3));
}

TEST_CASE("Test CoM position and function wrapper") {
  double p_output_1[3];
  const double var1[28] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
  p_COM_src(p_output_1, var1);
  Vector3d answer = analytical_expressions.p_COM(VectorXd::Zero(28));

  CHECK(answer.isApprox(Map<Vector3d>(p_output_1, 3)));
}

TEST_CASE("Test rotation matrix of abduction") {
  MatrixXd R_output = analytical_expressions.R_LeftAbductionJoint(q);
  MatrixXd R_answer = ( // Use rpy in hip_abduction_left joint of Digit URDF.
    AngleAxisd(-1.57079632679, Vector3d::UnitZ()) * 
    AngleAxisd(-1.1955506, Vector3d::UnitY()) * 
    AngleAxisd(1.57079632679, Vector3d::UnitX())).toRotationMatrix();
  // std::cout << R_output << std::endl;
  // std::cout << R_answer << std::endl;
  CHECK(R_output.isApprox(R_answer, 1e-6)); // Even 1e-8 fails.

  Quaterniond q_answer(0.694697, 0.131892, -0.694697, -0.131892); // From RViz.
  std::cout << q_answer.toRotationMatrix() << std::endl;
  CHECK(R_output.isApprox(q_answer.toRotationMatrix(), 1e-5)); // Even 1e-6 fails.
}

TEST_CASE("Test rotation matrix of knee joint") {
  VectorXd q_stand = q;
  q_stand(6) = 0.3752458;
  q_stand(17) = -0.3752458;

  MatrixXd R_output = analytical_expressions.R_RightThighJoint(q_stand);
  Quaterniond q_answer(0.6519, -0.65459, 0.27124, 0.270125); // From RViz.

  // std::cout << R_output << std::endl;
  // std::cout << q_answer.toRotationMatrix() << std::endl;

  CHECK(R_output.isApprox(q_answer.toRotationMatrix(), 1e-2)); // Some element are quite different.
}

TEST_CASE("Test Torso CoM position") {
  VectorXd p_output = analytical_expressions.p_Pelvis(q);
  VectorXd p_answer(3);
  p_answer << 0.001437, 0.000175, 0.230096; // This is from Digit_CFROST test.
  std::cout << p_output << std::endl;
  std::cout << p_answer << std::endl;
  CHECK(p_output.isApprox(p_answer, 1e-6));
}

TEST_CASE("Test Full EoM Matrix") {
  MatrixXd M = analytical_expressions.InertiaMatrix(q_fixarm);
  // std::cout << M << std::endl << std::endl;

  MatrixXd G = analytical_expressions.GravityVector(q_fixarm);
  // std::cout << G << std::endl;
  
  const double g = 9.81;

  CHECK(M(0,0) == doctest::Approx(48.3515));
  CHECK(G(2) == doctest::Approx(M(0,0)*g));
}

TEST_CASE("Test Jacobian") {
  q_fixarm(ddfa::LeftHipRoll) = 0.37;
  q_fixarm(ddfa::RightHipRoll) = -0.37;
  q_fixarm(ddfa::LeftToePitch) = -0.11; // Make toe (almost) align with body.
  MatrixXd Jb_L = analytical_expressions.Jb_LeftToeBottomBack(q_fixarm);
  std::cout << Jb_L << std::endl;
  MatrixXd Jc_L = analytical_expressions.Jp_LeftToeBottomBack(q_fixarm);
  std::cout << Jc_L << std::endl;
  CHECK(Jb_L.bottomRightCorner(6,7).isZero());
  CHECK(Jb_L.bottomLeftCorner(3,3).isZero());
  CHECK(Jb_L(3,5) == doctest::Approx(1.0));
  CHECK(Jb_L(4,4) == doctest::Approx(1.0));
  CHECK(Jb_L(5,3) == doctest::Approx(1.0));
}

// Conclusion: the com is mostly staying in the same place of pelvis.
TEST_CASE("Test CoM position at multiple configurations") {
  VectorXd q_stand = VectorXd::Zero(28);
  q_stand.tail(8) << -0.150623, 1.09331, 0.0, -0.141287, 
                      0.150623, -1.09331, -0.0, 0.141287;
  q_stand(dd::LeftHipRoll) = 0.37;
  q_stand(dd::RightHipRoll) = -0.37;
  q_stand.segment<2>(dd::LeftHipPitch) = geo_expressions.IK_Geo_p_digit(0, 0.9, DomainControl::DomainType::LEFT_STAND);
  q_stand(dd::LeftAnkle) = -q_stand(dd::LeftKnee);
  q_stand.segment<2>(dd::RightHipPitch) = geo_expressions.IK_Geo_p_digit(0, 0.9, DomainControl::DomainType::RIGHT_STAND);
  q_stand(dd::RightAnkle) = -q_stand(dd::RightKnee);

  VectorXd p_BC = analytical_expressions.p_COM(q_stand);
  // std::cout << q_stand.transpose() << std::endl;
  std::cout << "p_BC\n" << p_BC << std::endl;
  CHECK(p_BC(0) == doctest::Approx(-0.03).epsilon(0.01));
  CHECK(p_BC(1) == doctest::Approx(0.0).epsilon(0.01));

  VectorXd q_right_front = q_stand;
  q_right_front.segment<2>(dd::LeftHipPitch) = geo_expressions.IK_Geo_p_digit(-0.05, 1.0, DomainControl::DomainType::LEFT_STAND);
  q_right_front(dd::LeftAnkle) = -q_right_front(dd::LeftKnee);
  q_right_front.segment<2>(dd::RightHipPitch) = geo_expressions.IK_Geo_p_digit(0.05, 1.0, DomainControl::DomainType::RIGHT_STAND);
  q_right_front(dd::RightAnkle) = -q_right_front(dd::RightKnee);
  VectorXd p_BC2 = analytical_expressions.p_COM(q_right_front);
  std::cout << "p_BC2\n" << p_BC2 << std::endl;
  CHECK(p_BC2(0) == doctest::Approx(-0.03).epsilon(0.01));
  CHECK(p_BC2(1) == doctest::Approx(0.0).epsilon(0.01));

}

// #endif

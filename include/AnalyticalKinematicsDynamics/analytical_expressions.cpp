/**

**/

#include "analytical_expressions.hpp"

AnalyticalExpressions::AnalyticalExpressions()
{

}


MatrixXd AnalyticalExpressions::p_COM(VectorXd q)
{
  MatrixXd output(3,1);
  //input
  assert_size_matrix(q, 28, 1);
  // - Outputs
  assert_size_matrix(output, 3, 1);
  // set zero the matrix
  output.setZero();
  p_COM_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::p_left_toe_pitch(VectorXd q)
{
  MatrixXd output(3,1);
  //input
  assert_size_matrix(q, 28, 1);
  // - Outputs
  assert_size_matrix(output, 3, 1);
  // set zero the matrix
  output.setZero();
  p_left_toe_pitch_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::p_right_toe_pitch(VectorXd q)
{
  MatrixXd output(3,1);
  //input
  assert_size_matrix(q, 28, 1);
  // - Outputs
  assert_size_matrix(output, 3, 1);
  // set zero the matrix
  output.setZero();
  p_right_toe_pitch_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_Pelvis(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_torso_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftPelvisRotation(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_left_hip_roll_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftHip(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_left_hip_yaw_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftThigh(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_left_hip_pitch_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftKnee(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_left_knee_src(output.data(), q.data());
  return output;
}

// VectorXd AnalyticalExpressions::p_LeftShin(VectorXd q) {
//   VectorXd output(3);
//   assert_size_matrix(q, 28, 1);
//   assert_size_matrix(output, 3, 1);

//   p_left_shin_src(output.data(), q.data());
//   return output;
// }

VectorXd AnalyticalExpressions::p_LeftTarsus(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_left_tarsus_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftToe(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_left_toe_roll_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightPelvisRotation(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_right_hip_roll_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightHip(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_right_hip_yaw_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightThigh(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_right_hip_pitch_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightKnee(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_right_knee_src(output.data(), q.data());
  return output;
}

// VectorXd AnalyticalExpressions::p_RightShin(VectorXd q) {
//   VectorXd output(3);
//   assert_size_matrix(q, 28, 1);
//   assert_size_matrix(output, 3, 1);

//   p_right_shin_src(output.data(), q.data());
//   return output;
// }

VectorXd AnalyticalExpressions::p_RightTarsus(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_right_tarsus_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightToe(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_right_toe_roll_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftAbductionJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_hip_abduction_left_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftThighJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_hip_flexion_left_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftKneeJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_knee_joint_left_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_LeftTarsusJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_shin_to_tarsus_left_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightAbductionJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_hip_abduction_right_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightThighJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_hip_flexion_right_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightKneeJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_knee_joint_right_src(output.data(), q.data());
  return output;
}

VectorXd AnalyticalExpressions::p_RightTarsusJoint(VectorXd q) {
  VectorXd output(3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 1);

  p_shin_to_tarsus_right_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::R_LeftAbductionJoint(VectorXd q) {
  MatrixXd output(3, 3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 3);

  R_hip_abduction_left_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::R_LeftThighJoint(VectorXd q) {
  MatrixXd output(3, 3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 3);

  R_hip_flexion_left_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::R_LeftKneeJoint(VectorXd q) {
  MatrixXd output(3, 3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 3);

  R_knee_joint_left_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::R_RightAbductionJoint(VectorXd q) {
  MatrixXd output(3, 3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 3);

  R_hip_abduction_right_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::R_RightThighJoint(VectorXd q) {
  MatrixXd output(3, 3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 3);

  R_hip_flexion_right_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::R_RightKneeJoint(VectorXd q) {
  MatrixXd output(3, 3);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 3);

  R_knee_joint_right_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::AMworld_about_pA(VectorXd q, VectorXd qd, VectorXd pA) {
  MatrixXd output(3,1);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(qd, 28, 1);
  assert_size_matrix(pA, 3, 1);

  assert_size_matrix(output, 3, 1);
  // set zero the matrix
  output.setZero();

  AMworld_about_pA_src(output.data(), q.data(), qd.data(), pA.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jdq_AMworld_about_pA(VectorXd q, VectorXd qd, VectorXd pA){
  MatrixXd output(84,1);
  MatrixXd Jdq_pA(84,1);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(qd, 28, 1);
  assert_size_matrix(pA, 3, 1);
  assert_size_matrix(Jdq_pA, 84, 1);

  assert_size_matrix(output, 84, 1);
  // set zero the matrix
  output.setZero();
  Jdq_pA.setZero();

  Jdq_AMworld_about_pA_src(output.data(), q.data(), qd.data(), pA.data(), Jdq_pA.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jp_toe_pitch_joint_left(VectorXd q) {
  MatrixXd output(3, 28);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 28);

  Jp_toe_pitch_joint_left_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jp_toe_pitch_joint_right(VectorXd q) {
  MatrixXd output(3, 28);
  assert_size_matrix(q, 28, 1);
  assert_size_matrix(output, 3, 28);

  Jp_toe_pitch_joint_right_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::InertiaMatrix(VectorXd q) {
  MatrixXd output(20,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 20, 20);

  InertiaMatrix_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::CoriolisTerm(VectorXd q, VectorXd dq) {
  MatrixXd output(20,1);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(dq, 20, 1);
  assert_size_matrix(output, 20, 1);

  CoriolisTerm_src(output.data(), q.data(), dq.data());
  return output;
}


MatrixXd AnalyticalExpressions::GravityVector(VectorXd q) {
  MatrixXd output(20,1);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 20, 1);

  GravityVector_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jb_LeftToeBottomBack(VectorXd q) {
  MatrixXd output(6,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 6, 20);

  Jb_LeftToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jb_LeftToeBottom(VectorXd q) {
  MatrixXd output(6,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 6, 20);

  Jb_LeftToeBottom_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jb_RightToeBottomBack(VectorXd q) {
  MatrixXd output(6,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 6, 20);

  Jb_RightToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jb_RightToeBottom(VectorXd q) {
  MatrixXd output(6,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 6, 20);

  Jb_RightToeBottom_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jp_LeftToeBottomBack(VectorXd q) {
  MatrixXd output(3,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 3, 20);

  Jp_LeftToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jp_LeftToeBottom(VectorXd q) {
  MatrixXd output(3,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 3, 20);

  Jp_LeftToeBottom_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jp_RightToeBottomBack(VectorXd q) {
  MatrixXd output(3,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 3, 20);

  Jp_RightToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressions::Jp_RightToeBottom(VectorXd q) {
  MatrixXd output(3,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 3, 20);

  Jp_RightToeBottom_src(output.data(), q.data());
  return output;
}

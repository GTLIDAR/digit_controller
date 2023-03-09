#include "analytical_expressions_fixarm.hpp"

AnalyticalExpressionsFixArm::AnalyticalExpressionsFixArm()
{

}

MatrixXd AnalyticalExpressionsFixArm::InertiaMatrix(VectorXd q) {
  MatrixXd output(20,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 20, 20);

  InertiaMatrix_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressionsFixArm::CoriolisTerm(VectorXd q, VectorXd dq) {
  MatrixXd output(20,1);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(dq, 20, 1);
  assert_size_matrix(output, 20, 1);

  CoriolisTerm_src(output.data(), q.data(), dq.data());
  return output;
}


MatrixXd AnalyticalExpressionsFixArm::GravityVector(VectorXd q) {
  MatrixXd output(20,1);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 20, 1);

  GravityVector_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressionsFixArm::Jb_LeftToeBottomBack(VectorXd q) {
  MatrixXd output(6,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 6, 20);

  Jb_LeftToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressionsFixArm::Jb_RightToeBottomBack(VectorXd q) {
  MatrixXd output(6,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 6, 20);

  Jb_RightToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressionsFixArm::Jp_LeftToeBottomBack(VectorXd q) {
  MatrixXd output(3,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 3, 20);

  Jp_LeftToeBottomBack_src(output.data(), q.data());
  return output;
}

MatrixXd AnalyticalExpressionsFixArm::Jp_RightToeBottomBack(VectorXd q) {
  MatrixXd output(3,20);
  assert_size_matrix(q, 20, 1);
  assert_size_matrix(output, 3, 20);

  Jp_RightToeBottomBack_src(output.data(), q.data());
  return output;
}

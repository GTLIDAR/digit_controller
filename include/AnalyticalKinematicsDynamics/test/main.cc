#include "analytical_expressions.hpp"
// extern "C" {
#include "kin/p_COM_src.h"
// }
#include <iostream>
#include "Eigen/Dense"

int main (int argc, char** argv)
{
  double p_output1[3];
  const double var1[28] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
  
  p_COM_src(p_output1, var1);
  std::cout << (p_output1[1]) << std::endl;
  
  AnalyticalExpressions analytical_expressions;
  MatrixXd answer = analytical_expressions.p_COM(VectorXd::Zero(28));
  std::cout << answer(1) << std::endl;
  return 0;
}

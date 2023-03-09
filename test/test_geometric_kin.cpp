// Note: make sure to compile together with test_entrypoint.cpp
// #ifdef TEST

#include <iostream>
#include <cmath>
#include "test_entrypoint.h"

#include "Eigen/Dense"
#include "FK_Geo_p.h"
#include "IK_Geo_p.h"
#include "geo_expressions.hpp"
#include "walking_trajectory.hpp"
#include "domain_control.hpp"

GeoExpressions geoExpressions;

TEST_CASE("Testing geometric kinematics") {
  const double q_thigh = 0.5767;
  const double q_knee = -2.3665;
  double LA, LL; // LA = -0.4230, LL = 0.4065.
  double q_thigh_IK, q_knee_IK;
  FK_Geo_p(q_thigh, q_knee, &LA, &LL);
  IK_Geo_p(LA, LL, &q_thigh_IK, &q_knee_IK);
  //std::cout << LA << ", " << LL << ", " << q_thigh_IK << ", " << q_knee_IK << std::endl;

  CHECK(LA == doctest::Approx(-0.422974));
  CHECK(LL == doctest::Approx(0.406455));
  CHECK(q_thigh_IK == doctest::Approx(q_thigh));
  CHECK(q_knee_IK == doctest::Approx(q_knee));
}

TEST_CASE("Test toe joint and AB motor") {
  TransmissionAnkleNew transmissionAnkleNew;
  double A = transmissionAnkleNew.j2mA(0.00169356, 0, "left");
  double B = transmissionAnkleNew.j2mB(0.00169356, 0, "left");
  // CHECK(A == doctest::Approx(0.0));
  // CHECK(B == doctest::Approx(-0.0));
}

TEST_CASE("LA LL and IK") {
  const double h_AS = 0.1185;

  VectorXd p_PToe(3);
  p_PToe << -0.146, 0.095745, -1;
  DomainControl::DomainType leg = DomainControl::DomainType::LEFT_STAND;
  VectorXd LA_LL = geoExpressions.Geo_LA_LL(p_PToe, 0, leg);
  // std::cout << LA_LL << std::endl;
  CHECK(LA_LL(1) == doctest::Approx((-p_PToe(2)-h_AS)/std::cos(LA_LL(0))).epsilon(1e-4));

  p_PToe << 0.2, -0.09, -0.93;
  leg = DomainControl::DomainType::RIGHT_STAND;
  LA_LL = geoExpressions.Geo_LA_LL(p_PToe, 0, leg);
  std::cout << LA_LL << std::endl;
  CHECK(LA_LL(1) == doctest::Approx((-p_PToe(2)-h_AS)/std::cos(LA_LL(0))).epsilon(1e-4));

  p_PToe << 0.108, 0.086, -0.97;
  leg = DomainControl::DomainType::LEFT_STAND;
  LA_LL = geoExpressions.Geo_LA_LL(p_PToe, 0, leg);
  std::cout << LA_LL << std::endl;
  CHECK(LA_LL(1) == doctest::Approx((-p_PToe(2)-h_AS)/std::cos(LA_LL(0))).epsilon(1e-4));
}

// #endif

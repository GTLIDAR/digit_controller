# include <iostream>

#include "FK_Geo_p.h"
#include "FK_Geo_v.h"
#include "IK_Geo_p.h"
#include "IK_Geo_v.h"
#include "J_FK_Geo_p.h"
#include "J_IK_Geo_p.h"
#include "dJ_FK_Geo_p.h"
#include "dJ_IK_Geo_p.h"

int main(int, const char * const [])
{
  double q_thigh = 0.5767;
  double q_knee = -2.3665;
  double LA, LL; // LA = -0.4230, LL = 0.4065.
  double q_thigh_IK, q_knee_IK;
  FK_Geo_p(q_thigh, q_knee, &LA, &LL);
  IK_Geo_p(LA, LL, &q_thigh_IK, &q_knee_IK);
  std::cout << LA << ", " << LL << ", " << q_thigh_IK << ", " << q_knee_IK << std::endl;
  return 0;
}
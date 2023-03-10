//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: J_IK_Geo_p.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 17-Jul-2022 20:41:51
//

// Include Files
#include "rt_nonfinite.h"
#include "FK_Geo_p.h"
#include "FK_Geo_v.h"
#include "IK_Geo_p.h"
#include "IK_Geo_v.h"
#include "J_FK_Geo_p.h"
#include "J_IK_Geo_p.h"
#include "dJ_FK_Geo_p.h"
#include "dJ_IK_Geo_p.h"

// Function Definitions

//
// J_IK_GEO_P
//     [J_QFLEXION,J_QKNEE] = J_IK_GEO_P(LA,LL)
// Arguments    : double LA
//                double LL
//                double J_qFlexion[2]
//                double J_qKnee[2]
// Return Type  : void
//
void J_IK_Geo_p(double, double LL, double J_qFlexion[2], double J_qKnee[2])
{
  double t2;
  double t3;

  //     This function was generated by the Symbolic Math Toolbox version 8.0.
  //     17-Jul-2022 20:28:12
  t2 = 1.0 / (LL * LL);
  t3 = LL * LL;
  J_qFlexion[0] = 1.0;
  J_qFlexion[1] = 1.0 / std::sqrt(t2 * ((t3 + 0.030052640000000019) * (t3 +
    0.030052640000000019)) * -0.89268931726549694 + 1.0) * (t2 * (t3 +
    0.030052640000000019) * 0.944822373393802 - 1.8896447467876041);
  t2 = t3 * 1.8896447467876041 - 1.0016111866969011;
  J_qKnee[0] = 0.0;
  J_qKnee[1] = LL / std::sqrt(-(t2 * t2) + 1.0) * 3.7792894935752082;
}

//
// File trailer for J_IK_Geo_p.cpp
//
// [EOF]
//

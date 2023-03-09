//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: dJ_FK_Geo_p.cpp
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
#include "KinGeo_rtwutil.h"

// Function Definitions

//
// DJ_FK_GEO_P
//     [DJ_LA,DJ_LL] = DJ_FK_GEO_P(QFLEXION,QKNEE,DQFLEXION,DQKNEE)
// Arguments    : double qFlexion
//                double qKnee
//                double dqFlexion
//                double dqKnee
//                double *dJ_LA
//                double *dJ_LL
// Return Type  : void
//
void dJ_FK_Geo_p(double, double qKnee, double dqFlexion, double dqKnee, double
                 *dJ_LA, double *dJ_LL)
{
  double t3;
  double t5;
  double t8;

  //     This function was generated by the Symbolic Math Toolbox version 8.0.
  //     17-Jul-2022 20:28:18
  t3 = std::sin(qKnee + 0.035);
  t5 = std::cos(qKnee + 0.035) * 0.5292;
  t8 = 1.0 / std::sqrt(t5 + 0.53005264000000007);
  *dJ_LA = dqFlexion - dqKnee / std::sqrt((t5 + 0.56010528000000015) * (t5 +
    0.56010528000000015) * -0.89268931726549694 / (t5 + 0.53005264000000007) +
    1.0) * (t3 * t8 * 0.5 - t3 / rt_powd_snf(t5 + 0.53005264000000007, 1.5) *
            (t5 + 0.56010528000000015) * 0.25);
  *dJ_LL = dqKnee * t3 * t8 * -0.2646;
}

//
// File trailer for dJ_FK_Geo_p.cpp
//
// [EOF]
//
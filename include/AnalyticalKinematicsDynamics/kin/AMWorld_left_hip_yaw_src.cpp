/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_left_hip_yaw_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t157;
  double t191;
  double t336;
  double t68;
  double t1485;
  double t1585;
  double t1632;
  double t1633;
  double t2439;
  double t491;
  double t846;
  double t991;
  double t1077;
  double t1117;
  double t2538;
  double t3186;
  double t1479;
  double t2544;
  double t2640;
  double t39;
  double t3313;
  double t3446;
  double t3480;
  double t4000;
  double t4018;
  double t4041;
  double t4502;
  double t4504;
  double t4297;
  double t4572;
  double t4595;
  double t5740;
  double t5742;
  double t5814;
  double t5628;
  double t5703;
  double t3859;
  double t5711;
  double t5864;
  double t5892;
  double t5912;
  double t5940;
  double t5978;
  double t3934;
  double t6164;
  double t6172;
  double t6200;
  double t6336;
  double t6319;
  double t6356;
  double t6360;
  double t6361;
  double t6326;
  double t6344;
  double t6348;
  double t6349;
  double t6369;
  double t6378;
  double t6391;
  double t6398;
  double t6405;
  double t25;
  double t2974;
  double t3517;
  double t3755;
  double t3788;
  double t3880;
  double t3903;
  double t3906;
  double t3910;
  double t4612;
  double t4904;
  double t4939;
  double t5201;
  double t5431;
  double t5474;
  double t5507;
  double t5536;
  double t5597;
  double t5897;
  double t5995;
  double t6011;
  double t6038;
  double t6083;
  double t6149;
  double t6158;
  double t6161;
  double t6201;
  double t6202;
  double t6228;
  double t6229;
  double t6246;
  double t6251;
  double t6269;
  double t6270;
  double t6281;
  double t6390;
  double t6412;
  double t6429;
  double t6442;
  double t6460;
  double t6478;
  double t6499;
  double t6504;
  double t6567;
  double t6576;
  double t6586;
  double t6596;
  double t6614;
  double t6617;
  double t6627;
  double t6641;
  double t6556;
  double t5623;
  double t6293;
  double t6313;
  double t6733;
  double t6734;
  double t6741;
  double t6720;
  double t6723;
  double t6725;
  double t6727;
  double t6742;
  double t6747;
  double t6752;
  double t6754;
  double t6758;
  double t6525;
  double t6529;
  double t6530;
  double t6750;
  double t6760;
  double t6761;
  double t6762;
  double t6778;
  double t6780;
  double t6783;
  double t6785;
  double t6562;
  double t6565;
  double t6577;
  double t6579;
  double t6616;
  double t6642;
  double t6643;
  double t6647;
  double t6650;
  double t6651;
  double t6655;
  double t6656;
  double t6657;
  double t6659;
  double t6667;
  double t6676;
  double t6680;
  double t6681;
  double t6689;
  double t6692;
  double t6856;
  double t6858;
  double t6861;
  double t6865;
  double t6868;
  double t6869;
  double t6863;
  double t6871;
  double t6873;
  double t6875;
  double t6877;
  double t6881;
  double t6885;
  double t6887;
  t157 = Cos(var1[7]);
  t191 = -1.*t157;
  t336 = 1. + t191;
  t68 = Cos(var1[6]);
  t1485 = -0.134322983001*t336;
  t1585 = 1. + t1485;
  t1632 = -0.930418*t1585;
  t1633 = -0.12497652119782442*t336;
  t2439 = t1632 + t1633;
  t491 = -0.8656776547239999*t336;
  t846 = 1. + t491;
  t991 = 0.366501*t846;
  t1077 = 0.3172717261340007*t336;
  t1117 = t991 + t1077;
  t2538 = Sin(var1[6]);
  t3186 = Sin(var1[5]);
  t1479 = t68*t1117;
  t2544 = t2439*t2538;
  t2640 = 0. + t1479 + t2544;
  t39 = Cos(var1[5]);
  t3313 = t68*t2439;
  t3446 = -1.*t1117*t2538;
  t3480 = 0. + t3313 + t3446;
  t4000 = Sin(var1[7]);
  t4018 = 0.366501*t4000;
  t4041 = 0. + t4018;
  t4502 = 0.930418*t4000;
  t4504 = 0. + t4502;
  t4297 = -0.930418*t4041;
  t4572 = 0.366501*t4504;
  t4595 = 0. + t4297 + t4572;
  t5740 = 0.366501*t1585;
  t5742 = -0.3172717261340007*t336;
  t5814 = t5740 + t5742;
  t5628 = 0.930418*t846;
  t5703 = t5628 + t1633;
  t3859 = Cos(var1[4]);
  t5711 = t68*t5703;
  t5864 = t5814*t2538;
  t5892 = 0. + t5711 + t5864;
  t5912 = t68*t5814;
  t5940 = -1.*t5703*t2538;
  t5978 = 0. + t5912 + t5940;
  t3934 = Sin(var1[4]);
  t6164 = 0.366501*t4041;
  t6172 = 0.930418*t4504;
  t6200 = 0. + t6164 + t6172;
  t6336 = Cos(var1[3]);
  t6319 = Sin(var1[3]);
  t6356 = t6336*t39*t3934;
  t6360 = t6319*t3186;
  t6361 = t6356 + t6360;
  t6326 = -1.*t39*t6319;
  t6344 = t6336*t3934*t3186;
  t6348 = t6326 + t6344;
  t6349 = t68*t6348;
  t6369 = -1.*t6361*t2538;
  t6378 = t6349 + t6369;
  t6391 = t68*t6361;
  t6398 = t6348*t2538;
  t6405 = t6391 + t6398;
  t25 = 1.000000637725*var2[7];
  t2974 = t39*t2640;
  t3517 = -1.*t3186*t3480;
  t3755 = 0. + t2974 + t3517;
  t3788 = var2[4]*t3755;
  t3880 = t3186*t2640;
  t3903 = t39*t3480;
  t3906 = 0. + t3880 + t3903;
  t3910 = t3859*t3906;
  t4612 = -1.*t3934*t4595;
  t4904 = 0. + t3910 + t4612;
  t4939 = var2[3]*t4904;
  t5201 = 0.930418*t4041;
  t5431 = -0.366501*t4504;
  t5474 = 0. + t5201 + t5431;
  t5507 = var2[6]*t5474;
  t5536 = var2[5]*t4595;
  t5597 = t25 + t3788 + t4939 + t5507 + t5536;
  t5897 = t39*t5892;
  t5995 = -1.*t3186*t5978;
  t6011 = 0. + t5897 + t5995;
  t6038 = var2[4]*t6011;
  t6083 = t3186*t5892;
  t6149 = t39*t5978;
  t6158 = 0. + t6083 + t6149;
  t6161 = t3859*t6158;
  t6201 = -1.*t3934*t6200;
  t6202 = 0. + t6161 + t6201;
  t6228 = var2[3]*t6202;
  t6229 = -0.366501*t4041;
  t6246 = -0.930418*t4504;
  t6251 = 0. + t6229 + t6246;
  t6269 = var2[6]*t6251;
  t6270 = var2[5]*t6200;
  t6281 = 0. + t6038 + t6228 + t6269 + t6270;
  t6390 = -0.340999127418*t336*t6378;
  t6412 = t1585*t6405;
  t6429 = t6336*t3859*t4041;
  t6442 = t6390 + t6412 + t6429;
  t6460 = t846*t6378;
  t6478 = -0.340999127418*t336*t6405;
  t6499 = t6336*t3859*t4504;
  t6504 = t6460 + t6478 + t6499;
  t6567 = 1.000000637725*t336;
  t6576 = -1. + t6567;
  t6586 = t2538*t4041;
  t6596 = t68*t4504;
  t6614 = t6586 + t6596;
  t6617 = t68*t4041;
  t6627 = -1.*t2538*t4504;
  t6641 = t6617 + t6627;
  t6556 = -1.000000637725*t336;
  t5623 = 0.00077*t5597;
  t6293 = 0.00005*t6281;
  t6313 = t5623 + t6293;
  t6733 = t39*t6319*t3934;
  t6734 = -1.*t6336*t3186;
  t6741 = t6733 + t6734;
  t6720 = t6336*t39;
  t6723 = t6319*t3934*t3186;
  t6725 = t6720 + t6723;
  t6727 = t68*t6725;
  t6742 = -1.*t6741*t2538;
  t6747 = t6727 + t6742;
  t6752 = t68*t6741;
  t6754 = t6725*t2538;
  t6758 = t6752 + t6754;
  t6525 = 0.00005*t5597;
  t6529 = 0.00193*t6281;
  t6530 = t6525 + t6529;
  t6750 = -0.340999127418*t336*t6747;
  t6760 = t1585*t6758;
  t6761 = t3859*t6319*t4041;
  t6762 = t6750 + t6760 + t6761;
  t6778 = t846*t6747;
  t6780 = -0.340999127418*t336*t6758;
  t6783 = t3859*t6319*t4504;
  t6785 = t6778 + t6780 + t6783;
  t6562 = 1. + t6556;
  t6565 = var2[6]*t6562;
  t6577 = var2[5]*t6576;
  t6579 = -1.*t6576*t3934;
  t6616 = t3186*t6614;
  t6642 = t39*t6641;
  t6643 = t6616 + t6642;
  t6647 = t3859*t6643;
  t6650 = t6579 + t6647;
  t6651 = var2[3]*t6650;
  t6655 = t39*t6614;
  t6656 = -1.*t3186*t6641;
  t6657 = t6655 + t6656;
  t6659 = var2[4]*t6657;
  t6667 = 0. + t6565 + t6577 + t6651 + t6659;
  t6676 = 1. + t6556;
  t6680 = -0.930418*t4000;
  t6681 = 0. + t6680;
  t6689 = -0.366501*t4000;
  t6692 = 0. + t6689;
  t6856 = t3859*t68*t3186;
  t6858 = -1.*t3859*t39*t2538;
  t6861 = t6856 + t6858;
  t6865 = t3859*t39*t68;
  t6868 = t3859*t3186*t2538;
  t6869 = t6865 + t6868;
  t6863 = -0.340999127418*t336*t6861;
  t6871 = t1585*t6869;
  t6873 = -1.*t3934*t4041;
  t6875 = t6863 + t6871 + t6873;
  t6877 = t846*t6861;
  t6881 = -0.340999127418*t336*t6869;
  t6885 = -1.*t3934*t4504;
  t6887 = t6877 + t6881 + t6885;
  p_output1[0]=t6313*(-0.930418*t6442 + 0.366501*t6504) + (0.366501*t6442 + 0.930418*t6504)*t6530 + 0.00163*t6667*(-1.*t3859*t6336*t6676 - 1.*t6378*t6681 - 1.*t6405*t6692);
  p_output1[1]=0.00163*t6667*(-1.*t3859*t6319*t6676 - 1.*t6681*t6747 - 1.*t6692*t6758) + t6313*(-0.930418*t6762 + 0.366501*t6785) + t6530*(0.366501*t6762 + 0.930418*t6785);
  p_output1[2]=0.00163*t6667*(t3934*t6676 - 1.*t6681*t6861 - 1.*t6692*t6869) + t6313*(-0.930418*t6875 + 0.366501*t6887) + t6530*(0.366501*t6875 + 0.930418*t6887);
}



void AMWorld_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

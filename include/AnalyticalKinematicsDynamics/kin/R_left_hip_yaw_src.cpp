/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_hip_yaw_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1007;
  double t1523;
  double t1578;
  double t1549;
  double t1793;
  double t1518;
  double t1883;
  double t1952;
  double t1959;
  double t1577;
  double t1799;
  double t1803;
  double t1968;
  double t2111;
  double t1016;
  double t1166;
  double t1368;
  double t1381;
  double t1417;
  double t1442;
  double t2338;
  double t2361;
  double t2806;
  double t2827;
  double t2828;
  double t2679;
  double t2714;
  double t2716;
  double t2559;
  double t2577;
  double t1854;
  double t1976;
  double t1978;
  double t2486;
  double t2492;
  double t2524;
  double t2729;
  double t2896;
  double t2905;
  double t3294;
  double t3318;
  double t2985;
  double t2992;
  double t3007;
  double t3393;
  double t3395;
  double t3464;
  double t3477;
  double t3535;
  double t3562;
  double t3128;
  double t3129;
  double t3140;
  double t3225;
  double t3229;
  double t3237;
  double t3290;
  double t3337;
  double t3409;
  double t3418;
  double t3488;
  double t3496;
  double t3596;
  double t3599;
  double t3647;
  double t3650;
  double t3653;
  double t3664;
  double t3669;
  double t3728;
  double t3732;
  double t3765;
  double t3808;
  double t3811;
  double t3819;
  double t3827;
  double t3835;
  double t3841;
  double t3854;
  double t3866;
  t1007 = Cos(var1[3]);
  t1523 = Cos(var1[5]);
  t1578 = Sin(var1[4]);
  t1549 = Sin(var1[3]);
  t1793 = Sin(var1[5]);
  t1518 = Cos(var1[6]);
  t1883 = t1007*t1523*t1578;
  t1952 = t1549*t1793;
  t1959 = t1883 + t1952;
  t1577 = -1.*t1523*t1549;
  t1799 = t1007*t1578*t1793;
  t1803 = t1577 + t1799;
  t1968 = Sin(var1[6]);
  t2111 = Sin(var1[7]);
  t1016 = Cos(var1[4]);
  t1166 = Cos(var1[7]);
  t1368 = -1.*t1166;
  t1381 = 1. + t1368;
  t1417 = -1.000000637725*t1381;
  t1442 = 1. + t1417;
  t2338 = -0.930418*t2111;
  t2361 = 0. + t2338;
  t2806 = t1523*t1549*t1578;
  t2827 = -1.*t1007*t1793;
  t2828 = t2806 + t2827;
  t2679 = t1007*t1523;
  t2714 = t1549*t1578*t1793;
  t2716 = t2679 + t2714;
  t2559 = -0.366501*t2111;
  t2577 = 0. + t2559;
  t1854 = t1518*t1803;
  t1976 = -1.*t1959*t1968;
  t1978 = t1854 + t1976;
  t2486 = t1518*t1959;
  t2492 = t1803*t1968;
  t2524 = t2486 + t2492;
  t2729 = t1518*t2716;
  t2896 = -1.*t2828*t1968;
  t2905 = t2729 + t2896;
  t3294 = -0.134322983001*t1381;
  t3318 = 1. + t3294;
  t2985 = t1518*t2828;
  t2992 = t2716*t1968;
  t3007 = t2985 + t2992;
  t3393 = 0.366501*t2111;
  t3395 = 0. + t3393;
  t3464 = -0.8656776547239999*t1381;
  t3477 = 1. + t3464;
  t3535 = 0.930418*t2111;
  t3562 = 0. + t3535;
  t3128 = t1016*t1518*t1793;
  t3129 = -1.*t1016*t1523*t1968;
  t3140 = t3128 + t3129;
  t3225 = t1016*t1523*t1518;
  t3229 = t1016*t1793*t1968;
  t3237 = t3225 + t3229;
  t3290 = -0.340999127418*t1381*t1978;
  t3337 = t3318*t2524;
  t3409 = t1007*t1016*t3395;
  t3418 = t3290 + t3337 + t3409;
  t3488 = t3477*t1978;
  t3496 = -0.340999127418*t1381*t2524;
  t3596 = t1007*t1016*t3562;
  t3599 = t3488 + t3496 + t3596;
  t3647 = -0.340999127418*t1381*t2905;
  t3650 = t3318*t3007;
  t3653 = t1016*t1549*t3395;
  t3664 = t3647 + t3650 + t3653;
  t3669 = t3477*t2905;
  t3728 = -0.340999127418*t1381*t3007;
  t3732 = t1016*t1549*t3562;
  t3765 = t3669 + t3728 + t3732;
  t3808 = -0.340999127418*t1381*t3140;
  t3811 = t3318*t3237;
  t3819 = -1.*t1578*t3395;
  t3827 = t3808 + t3811 + t3819;
  t3835 = t3477*t3140;
  t3841 = -0.340999127418*t1381*t3237;
  t3854 = -1.*t1578*t3562;
  t3866 = t3835 + t3841 + t3854;
  p_output1[0]=-1.*t1007*t1016*t1442 - 1.*t1978*t2361 - 1.*t2524*t2577;
  p_output1[1]=-1.*t1016*t1442*t1549 - 1.*t2361*t2905 - 1.*t2577*t3007;
  p_output1[2]=t1442*t1578 - 1.*t2361*t3140 - 1.*t2577*t3237;
  p_output1[3]=0.366501*t3418 + 0.930418*t3599;
  p_output1[4]=0.366501*t3664 + 0.930418*t3765;
  p_output1[5]=0.366501*t3827 + 0.930418*t3866;
  p_output1[6]=-0.930418*t3418 + 0.366501*t3599;
  p_output1[7]=-0.930418*t3664 + 0.366501*t3765;
  p_output1[8]=-0.930418*t3827 + 0.366501*t3866;
}



void R_left_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

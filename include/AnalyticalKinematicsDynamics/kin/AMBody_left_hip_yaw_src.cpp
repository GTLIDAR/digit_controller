/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_hip_yaw_src.h"

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
  double t121;
  double t690;
  double t707;
  double t1460;
  double t1505;
  double t2133;
  double t2246;
  double t2174;
  double t2211;
  double t2074;
  double t2479;
  double t2607;
  double t2975;
  double t2219;
  double t2798;
  double t2920;
  double t2046;
  double t2983;
  double t2988;
  double t3111;
  double t4104;
  double t4117;
  double t4186;
  double t4222;
  double t4226;
  double t3753;
  double t3761;
  double t3805;
  double t3815;
  double t3926;
  double t1955;
  double t4076;
  double t4227;
  double t4229;
  double t4360;
  double t4362;
  double t4380;
  double t1708;
  double t4573;
  double t4576;
  double t4589;
  double t4877;
  double t4881;
  double t4894;
  double t4771;
  double t4785;
  double t4873;
  double t4899;
  double t4925;
  double t4928;
  double t4938;
  double t4943;
  double t5060;
  double t5063;
  double t5067;
  double t3741;
  double t4340;
  double t4394;
  double t4409;
  double t4416;
  double t4434;
  double t4436;
  double t4446;
  double t4500;
  double t4592;
  double t4602;
  double t4607;
  double t4612;
  double t4687;
  double t4694;
  double t4717;
  double t4725;
  double t4769;
  double t4927;
  double t4944;
  double t4945;
  double t4995;
  double t5031;
  double t5048;
  double t5055;
  double t5056;
  double t5073;
  double t5139;
  double t5145;
  double t5168;
  double t5195;
  double t5207;
  double t5209;
  double t5216;
  double t5236;
  t121 = Cos(var1[7]);
  t690 = -1.*t121;
  t707 = 1. + t690;
  t1460 = 1.000000637725*t707;
  t1505 = -1. + t1460;
  t2133 = Sin(var1[7]);
  t2246 = Cos(var1[6]);
  t2174 = 0.366501*t2133;
  t2211 = 0. + t2174;
  t2074 = Sin(var1[6]);
  t2479 = 0.930418*t2133;
  t2607 = 0. + t2479;
  t2975 = Cos(var1[5]);
  t2219 = t2074*t2211;
  t2798 = t2246*t2607;
  t2920 = t2219 + t2798;
  t2046 = Sin(var1[5]);
  t2983 = t2246*t2211;
  t2988 = -1.*t2074*t2607;
  t3111 = t2983 + t2988;
  t4104 = -0.134322983001*t707;
  t4117 = 1. + t4104;
  t4186 = -0.930418*t4117;
  t4222 = -0.12497652119782442*t707;
  t4226 = t4186 + t4222;
  t3753 = -0.8656776547239999*t707;
  t3761 = 1. + t3753;
  t3805 = 0.366501*t3761;
  t3815 = 0.3172717261340007*t707;
  t3926 = t3805 + t3815;
  t1955 = Cos(var1[4]);
  t4076 = t2246*t3926;
  t4227 = t4226*t2074;
  t4229 = 0. + t4076 + t4227;
  t4360 = t2246*t4226;
  t4362 = -1.*t3926*t2074;
  t4380 = 0. + t4360 + t4362;
  t1708 = Sin(var1[4]);
  t4573 = -0.930418*t2211;
  t4576 = 0.366501*t2607;
  t4589 = 0. + t4573 + t4576;
  t4877 = 0.366501*t4117;
  t4881 = -0.3172717261340007*t707;
  t4894 = t4877 + t4881;
  t4771 = 0.930418*t3761;
  t4785 = t4771 + t4222;
  t4873 = t2246*t4785;
  t4899 = t4894*t2074;
  t4925 = 0. + t4873 + t4899;
  t4928 = t2246*t4894;
  t4938 = -1.*t4785*t2074;
  t4943 = 0. + t4928 + t4938;
  t5060 = 0.366501*t2211;
  t5063 = 0.930418*t2607;
  t5067 = 0. + t5060 + t5063;
  t3741 = 1.000000637725*var2[7];
  t4340 = t2975*t4229;
  t4394 = -1.*t2046*t4380;
  t4409 = 0. + t4340 + t4394;
  t4416 = var2[4]*t4409;
  t4434 = t2046*t4229;
  t4436 = t2975*t4380;
  t4446 = 0. + t4434 + t4436;
  t4500 = t1955*t4446;
  t4592 = -1.*t1708*t4589;
  t4602 = 0. + t4500 + t4592;
  t4607 = var2[3]*t4602;
  t4612 = 0.930418*t2211;
  t4687 = -0.366501*t2607;
  t4694 = 0. + t4612 + t4687;
  t4717 = var2[6]*t4694;
  t4725 = var2[5]*t4589;
  t4769 = t3741 + t4416 + t4607 + t4717 + t4725;
  t4927 = t2975*t4925;
  t4944 = -1.*t2046*t4943;
  t4945 = 0. + t4927 + t4944;
  t4995 = var2[4]*t4945;
  t5031 = t2046*t4925;
  t5048 = t2975*t4943;
  t5055 = 0. + t5031 + t5048;
  t5056 = t1955*t5055;
  t5073 = -1.*t1708*t5067;
  t5139 = 0. + t5056 + t5073;
  t5145 = var2[3]*t5139;
  t5168 = -0.366501*t2211;
  t5195 = -0.930418*t2607;
  t5207 = 0. + t5168 + t5195;
  t5209 = var2[6]*t5207;
  t5216 = var2[5]*t5067;
  t5236 = 0. + t4995 + t5145 + t5209 + t5216;
  p_output1[0]=0.00163*(0. + (-1.*t1505*t1708 + t1955*(t2046*t2920 + t2975*t3111))*var2[3] + (t2920*t2975 - 1.*t2046*t3111)*var2[4] + t1505*var2[5] + (1. - 1.000000637725*t707)*var2[6]);
  p_output1[1]=0.00005*t4769 + 0.00193*t5236;
  p_output1[2]=0.00077*t4769 + 0.00005*t5236;
}



void AMBody_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

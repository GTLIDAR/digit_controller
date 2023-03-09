/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shoulder_pitch_joint_right_src.h"

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
  double t2237;
  double t971;
  double t3654;
  double t3682;
  double t3700;
  double t3708;
  double t3832;
  double t4008;
  double t3834;
  double t4052;
  double t1912;
  double t1932;
  double t2109;
  double t3835;
  double t4053;
  double t4128;
  double t4152;
  double t4160;
  double t4164;
  double t1894;
  double t4238;
  double t4239;
  double t4194;
  double t4198;
  double t4199;
  double t4278;
  double t4281;
  double t4306;
  double t4179;
  double t4184;
  double t2242;
  double t2409;
  double t2728;
  double t3193;
  double t2125;
  double t2642;
  double t3421;
  double t3497;
  double t3707;
  double t3766;
  double t3803;
  double t4131;
  double t4132;
  double t4140;
  double t4167;
  double t4174;
  double t4185;
  double t4193;
  double t4452;
  double t4460;
  double t4463;
  double t4469;
  double t4471;
  double t4474;
  double t4205;
  double t4235;
  double t4253;
  double t4265;
  double t4478;
  double t4479;
  double t4480;
  double t4345;
  double t4375;
  double t4492;
  double t4498;
  double t4504;
  double t4389;
  double t4393;
  double t4425;
  double t4435;
  double t4548;
  double t4549;
  double t4552;
  double t4556;
  double t4558;
  double t4561;
  t2237 = Sin(var1[25]);
  t971 = Cos(var1[3]);
  t3654 = Cos(var1[24]);
  t3682 = -1.*t3654;
  t3700 = 1. + t3682;
  t3708 = Sin(var1[24]);
  t3832 = Cos(var1[5]);
  t4008 = Sin(var1[3]);
  t3834 = Sin(var1[4]);
  t4052 = Sin(var1[5]);
  t1912 = Cos(var1[25]);
  t1932 = -1.*t1912;
  t2109 = 1. + t1932;
  t3835 = t971*t3832*t3834;
  t4053 = t4008*t4052;
  t4128 = t3835 + t4053;
  t4152 = -1.*t3832*t4008;
  t4160 = t971*t3834*t4052;
  t4164 = t4152 + t4160;
  t1894 = Cos(var1[4]);
  t4238 = -0.994522*t2237;
  t4239 = 0. + t4238;
  t4194 = -1.*t3708*t4128;
  t4198 = t3654*t4164;
  t4199 = t4194 + t4198;
  t4278 = t3654*t4128;
  t4281 = t3708*t4164;
  t4306 = t4278 + t4281;
  t4179 = -0.104528*t2237;
  t4184 = 0. + t4179;
  t2242 = 0.104528*t2237;
  t2409 = 0. + t2242;
  t2728 = 0.994522*t2237;
  t3193 = 0. + t2728;
  t2125 = -0.056500534356700764*t2109;
  t2642 = 0.040271188976*t2409;
  t3421 = 0.38315650737400003*t3193;
  t3497 = 0. + t2125 + t2642 + t3421;
  t3707 = 0.4*t3700;
  t3766 = -0.12*t3708;
  t3803 = 0. + t3707 + t3766;
  t4131 = -0.12*t3700;
  t4132 = -0.4*t3708;
  t4140 = 0. + t4131 + t4132;
  t4167 = 1.1345904784751044e-7*var1[25];
  t4174 = 0.04027119345689465*t2109;
  t4185 = -0.05650052807*t4184;
  t4193 = t4167 + t4174 + t4185;
  t4452 = t3832*t4008*t3834;
  t4460 = -1.*t971*t4052;
  t4463 = t4452 + t4460;
  t4469 = t971*t3832;
  t4471 = t4008*t3834*t4052;
  t4474 = t4469 + t4471;
  t4205 = -1.1924972351948546e-8*var1[25];
  t4235 = 0.38315655000705834*t2109;
  t4253 = -0.05650052807*t4239;
  t4265 = t4205 + t4235 + t4253;
  t4478 = -1.*t3708*t4463;
  t4479 = t3654*t4474;
  t4480 = t4478 + t4479;
  t4345 = -0.9890740084840001*t2109;
  t4375 = 1. + t4345;
  t4492 = t3654*t4463;
  t4498 = t3708*t4474;
  t4504 = t4492 + t4498;
  t4389 = -0.010926102783999999*t2109;
  t4393 = 1. + t4389;
  t4425 = -1.0000001112680001*t2109;
  t4435 = 1. + t4425;
  t4548 = -1.*t1894*t3832*t3708;
  t4549 = t3654*t1894*t4052;
  t4552 = t4548 + t4549;
  t4556 = t3654*t1894*t3832;
  t4558 = t1894*t3708*t4052;
  t4561 = t4556 + t4558;
  p_output1[0]=0. + t3803*t4128 + t4140*t4164 + t4193*t4199 + t4265*t4306 + t1894*t3497*t971 - 0.108558*(-0.103955395616*t2109*t4306 + t4199*t4393 + t1894*t4184*t971) + 0.398799*(-0.103955395616*t2109*t4199 + t4306*t4375 + t1894*t4239*t971) - 0.0565*(t2409*t4199 + t3193*t4306 + t1894*t4435*t971) + var1[0];
  p_output1[1]=0. + t1894*t3497*t4008 + t3803*t4463 + t4140*t4474 + t4193*t4480 + t4265*t4504 - 0.108558*(t1894*t4008*t4184 + t4393*t4480 - 0.103955395616*t2109*t4504) - 0.0565*(t1894*t4008*t4435 + t2409*t4480 + t3193*t4504) + 0.398799*(t1894*t4008*t4239 - 0.103955395616*t2109*t4480 + t4375*t4504) + var1[1];
  p_output1[2]=0. + t1894*t3803*t3832 - 1.*t3497*t3834 + t1894*t4052*t4140 + t4193*t4552 + t4265*t4561 - 0.108558*(-1.*t3834*t4184 + t4393*t4552 - 0.103955395616*t2109*t4561) - 0.0565*(-1.*t3834*t4435 + t2409*t4552 + t3193*t4561) + 0.398799*(-1.*t3834*t4239 - 0.103955395616*t2109*t4552 + t4375*t4561) + var1[2];
}



void p_shoulder_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_shoulder_roll_src.h"

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
  double t228;
  double t294;
  double t338;
  double t342;
  double t472;
  double t506;
  double t627;
  double t510;
  double t639;
  double t534;
  double t650;
  double t654;
  double t754;
  double t771;
  double t778;
  double t276;
  double t458;
  double t501;
  double t504;
  double t681;
  double t710;
  double t752;
  double t1075;
  double t1099;
  double t1109;
  double t1131;
  double t1145;
  double t1147;
  t228 = Cos(var1[3]);
  t294 = Cos(var1[24]);
  t338 = -1.*t294;
  t342 = 1. + t338;
  t472 = Sin(var1[24]);
  t506 = Cos(var1[5]);
  t627 = Sin(var1[3]);
  t510 = Sin(var1[4]);
  t639 = Sin(var1[5]);
  t534 = t228*t506*t510;
  t650 = t627*t639;
  t654 = t534 + t650;
  t754 = -1.*t506*t627;
  t771 = t228*t510*t639;
  t778 = t754 + t771;
  t276 = Cos(var1[4]);
  t458 = 0.4*t342;
  t501 = -0.12*t472;
  t504 = 0. + t458 + t501;
  t681 = -0.12*t342;
  t710 = -0.4*t472;
  t752 = 0. + t681 + t710;
  t1075 = t506*t627*t510;
  t1099 = -1.*t228*t639;
  t1109 = t1075 + t1099;
  t1131 = t228*t506;
  t1145 = t627*t510*t639;
  t1147 = t1131 + t1145;
  p_output1[0]=0. - 0.02441*t228*t276 + t504*t654 + t752*t778 - 0.11689*(-1.*t472*t654 + t294*t778) + 0.400559*(t294*t654 + t472*t778) + var1[0];
  p_output1[1]=0. - 0.11689*(t1147*t294 - 1.*t1109*t472) + 0.400559*(t1109*t294 + t1147*t472) + t1109*t504 - 0.02441*t276*t627 + t1147*t752 + var1[1];
  p_output1[2]=0. + t276*t504*t506 + 0.02441*t510 - 0.11689*(-1.*t276*t472*t506 + t276*t294*t639) + 0.400559*(t276*t294*t506 + t276*t472*t639) + t276*t639*t752 + var1[2];
}



void p_right_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

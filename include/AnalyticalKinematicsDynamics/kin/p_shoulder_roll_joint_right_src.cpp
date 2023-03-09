/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shoulder_roll_joint_right_src.h"

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
  double t205;
  double t260;
  double t278;
  double t291;
  double t448;
  double t675;
  double t731;
  double t681;
  double t732;
  double t708;
  double t783;
  double t823;
  double t1926;
  double t1934;
  double t1990;
  double t245;
  double t373;
  double t478;
  double t512;
  double t1335;
  double t1678;
  double t1758;
  double t2455;
  double t2470;
  double t2492;
  double t2510;
  double t2511;
  double t2512;
  t205 = Cos(var1[3]);
  t260 = Cos(var1[24]);
  t278 = -1.*t260;
  t291 = 1. + t278;
  t448 = Sin(var1[24]);
  t675 = Cos(var1[5]);
  t731 = Sin(var1[3]);
  t681 = Sin(var1[4]);
  t732 = Sin(var1[5]);
  t708 = t205*t675*t681;
  t783 = t731*t732;
  t823 = t708 + t783;
  t1926 = -1.*t675*t731;
  t1934 = t205*t681*t732;
  t1990 = t1926 + t1934;
  t245 = Cos(var1[4]);
  t373 = 0.4*t291;
  t478 = -0.12*t448;
  t512 = 0. + t373 + t478;
  t1335 = -0.12*t291;
  t1678 = -0.4*t448;
  t1758 = 0. + t1335 + t1678;
  t2455 = t675*t731*t681;
  t2470 = -1.*t205*t732;
  t2492 = t2455 + t2470;
  t2510 = t205*t675;
  t2511 = t731*t681*t732;
  t2512 = t2510 + t2511;
  p_output1[0]=0. + t1758*t1990 - 0.001*t205*t245 + t512*t823 + 0.4*(t1990*t448 + t260*t823) - 0.12*(t1990*t260 - 1.*t448*t823) + var1[0];
  p_output1[1]=0. + t1758*t2512 - 0.12*(t2512*t260 - 1.*t2492*t448) + 0.4*(t2492*t260 + t2512*t448) + t2492*t512 - 0.001*t245*t731 + var1[1];
  p_output1[2]=0. + t245*t512*t675 + 0.001*t681 + t1758*t245*t732 - 0.12*(-1.*t245*t448*t675 + t245*t260*t732) + 0.4*(t245*t260*t675 + t245*t448*t732) + var1[2];
}



void p_shoulder_roll_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

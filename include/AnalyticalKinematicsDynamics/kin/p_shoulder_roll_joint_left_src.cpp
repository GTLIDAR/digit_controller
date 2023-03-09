/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shoulder_roll_joint_left_src.h"

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
  double t503;
  double t698;
  double t810;
  double t830;
  double t980;
  double t1066;
  double t1322;
  double t1198;
  double t1416;
  double t1213;
  double t1455;
  double t1464;
  double t1571;
  double t1613;
  double t1614;
  double t678;
  double t861;
  double t1008;
  double t1041;
  double t1470;
  double t1471;
  double t1549;
  double t2149;
  double t2185;
  double t2190;
  double t2278;
  double t2280;
  double t2289;
  t503 = Cos(var1[3]);
  t698 = Cos(var1[13]);
  t810 = -1.*t698;
  t830 = 1. + t810;
  t980 = Sin(var1[13]);
  t1066 = Cos(var1[5]);
  t1322 = Sin(var1[3]);
  t1198 = Sin(var1[4]);
  t1416 = Sin(var1[5]);
  t1213 = t503*t1066*t1198;
  t1455 = t1322*t1416;
  t1464 = t1213 + t1455;
  t1571 = -1.*t1066*t1322;
  t1613 = t503*t1198*t1416;
  t1614 = t1571 + t1613;
  t678 = Cos(var1[4]);
  t861 = 0.4*t830;
  t1008 = 0.12*t980;
  t1041 = 0. + t861 + t1008;
  t1470 = 0.12*t830;
  t1471 = -0.4*t980;
  t1549 = 0. + t1470 + t1471;
  t2149 = t1066*t1322*t1198;
  t2185 = -1.*t503*t1416;
  t2190 = t2149 + t2185;
  t2278 = t503*t1066;
  t2280 = t1322*t1198*t1416;
  t2289 = t2278 + t2280;
  p_output1[0]=0. + t1041*t1464 + t1549*t1614 - 0.001*t503*t678 + 0.12*(t1614*t698 - 1.*t1464*t980) + 0.4*(t1464*t698 + t1614*t980) + var1[0];
  p_output1[1]=0. + t1041*t2190 + t1549*t2289 - 0.001*t1322*t678 + 0.12*(t2289*t698 - 1.*t2190*t980) + 0.4*(t2190*t698 + t2289*t980) + var1[1];
  p_output1[2]=0. + 0.001*t1198 + t1041*t1066*t678 + t1416*t1549*t678 + 0.12*(t1416*t678*t698 - 1.*t1066*t678*t980) + 0.4*(t1066*t678*t698 + t1416*t678*t980) + var1[2];
}



void p_shoulder_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

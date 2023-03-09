/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_hip_roll_src.h"

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
  double t453;
  double t924;
  double t979;
  double t953;
  double t1050;
  double t628;
  double t973;
  double t1074;
  double t1082;
  double t1096;
  double t1159;
  double t1175;
  double t1338;
  double t521;
  double t631;
  double t861;
  double t1101;
  double t1104;
  double t1110;
  double t1116;
  double t1799;
  double t1826;
  double t1853;
  double t1932;
  double t2062;
  double t2130;
  t453 = Cos(var1[3]);
  t924 = Cos(var1[5]);
  t979 = Sin(var1[3]);
  t953 = Sin(var1[4]);
  t1050 = Sin(var1[5]);
  t628 = Sin(var1[17]);
  t973 = t453*t924*t953;
  t1074 = t979*t1050;
  t1082 = t973 + t1074;
  t1096 = Cos(var1[17]);
  t1159 = -1.*t924*t979;
  t1175 = t453*t953*t1050;
  t1338 = t1159 + t1175;
  t521 = Cos(var1[4]);
  t631 = -0.091*t628;
  t861 = 0. + t631;
  t1101 = -1.*t1096;
  t1104 = 1. + t1101;
  t1110 = -0.091*t1104;
  t1116 = 0. + t1110;
  t1799 = t924*t979*t953;
  t1826 = -1.*t453*t1050;
  t1853 = t1799 + t1826;
  t1932 = t453*t924;
  t2062 = t979*t953*t1050;
  t2130 = t1932 + t2062;
  p_output1[0]=0. + t1116*t1338 - 0.03244*t453*t521 - 0.091945*(t1096*t1338 - 1.*t1082*t628) - 0.001745*(t1082*t1096 + t1338*t628) + t1082*t861 + var1[0];
  p_output1[1]=0. + t1116*t2130 - 0.091945*(t1096*t2130 - 1.*t1853*t628) - 0.001745*(t1096*t1853 + t2130*t628) + t1853*t861 - 0.03244*t521*t979 + var1[1];
  p_output1[2]=0. + t1050*t1116*t521 + t521*t861*t924 - 0.001745*(t1050*t521*t628 + t1096*t521*t924) - 0.091945*(t1050*t1096*t521 - 1.*t521*t628*t924) + 0.03244*t953 + var1[2];
}



void p_right_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

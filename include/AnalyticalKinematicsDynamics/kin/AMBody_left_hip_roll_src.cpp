/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_hip_roll_src.h"

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
  double t1865;
  double t1918;
  double t2560;
  double t1901;
  double t2130;
  double t2234;
  double t1787;
  double t2627;
  double t2649;
  double t2699;
  double t1776;
  double t3686;
  double t3698;
  double t3713;
  double t2384;
  double t396;
  double t471;
  double t501;
  double t536;
  double t807;
  double t2849;
  double t2850;
  double t2890;
  double t3141;
  double t3307;
  double t3358;
  double t3386;
  double t3411;
  double t3412;
  double t3429;
  t1865 = Cos(var1[6]);
  t1918 = Sin(var1[6]);
  t2560 = Sin(var1[5]);
  t1901 = 0.930418*t1865;
  t2130 = 0.366501*t1918;
  t2234 = t1901 + t2130;
  t1787 = Cos(var1[5]);
  t2627 = -0.366501*t1865;
  t2649 = 0.930418*t1918;
  t2699 = t2627 + t2649;
  t1776 = Cos(var1[4]);
  t3686 = 0.366501*t1865;
  t3698 = -0.930418*t1918;
  t3713 = t3686 + t3698;
  t2384 = t1787*t2234;
  t396 = -1.*var2[5];
  t471 = Sin(var1[4]);
  t501 = 0. + t471;
  t536 = var2[3]*t501;
  t807 = 0. + t396 + var2[6] + t536;
  t2849 = t2560*t2699;
  t2850 = 0. + t2384 + t2849;
  t2890 = t1776*t2850;
  t3141 = 0. + t2890;
  t3307 = var2[3]*t3141;
  t3358 = -1.*t2560*t2234;
  t3386 = t1787*t2699;
  t3411 = 0. + t3358 + t3386;
  t3412 = var2[4]*t3411;
  t3429 = 0. + t3307 + t3412;
  p_output1[0]=0.00102*t3429 + 0.00001*t807;
  p_output1[1]=0.00115*(0. + (0. + t1776*(0. + t2234*t2560 + t1787*t3713))*var2[3] + (0. + t2384 - 1.*t2560*t3713)*var2[4]);
  p_output1[2]=0.00001*t3429 + 0.00077*t807;
}



void AMBody_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

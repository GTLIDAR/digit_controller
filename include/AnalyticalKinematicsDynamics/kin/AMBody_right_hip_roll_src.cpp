/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_hip_roll_src.h"

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
  double t2189;
  double t2286;
  double t1998;
  double t2483;
  double t2556;
  double t2734;
  double t2233;
  double t2318;
  double t2436;
  double t2863;
  double t3050;
  double t2956;
  double t3478;
  double t3657;
  double t3658;
  double t673;
  double t1165;
  double t1240;
  double t1283;
  double t1290;
  double t2468;
  double t2871;
  double t2889;
  double t2906;
  double t3072;
  double t3080;
  double t3134;
  double t3170;
  double t3213;
  double t3215;
  t2189 = Cos(var1[17]);
  t2286 = Sin(var1[17]);
  t1998 = Cos(var1[5]);
  t2483 = 0.930418*t2189;
  t2556 = -0.366501*t2286;
  t2734 = t2483 + t2556;
  t2233 = 0.366501*t2189;
  t2318 = 0.930418*t2286;
  t2436 = t2233 + t2318;
  t2863 = Sin(var1[5]);
  t3050 = t1998*t2734;
  t2956 = Cos(var1[4]);
  t3478 = -0.366501*t2189;
  t3657 = -0.930418*t2286;
  t3658 = t3478 + t3657;
  t673 = -1.*var2[5];
  t1165 = Sin(var1[4]);
  t1240 = 0. + t1165;
  t1283 = var2[3]*t1240;
  t1290 = 0. + var2[17] + t673 + t1283;
  t2468 = t1998*t2436;
  t2871 = -1.*t2734*t2863;
  t2889 = 0. + t2468 + t2871;
  t2906 = var2[4]*t2889;
  t3072 = t2436*t2863;
  t3080 = 0. + t3050 + t3072;
  t3134 = t2956*t3080;
  t3170 = 0. + t3134;
  t3213 = var2[3]*t3170;
  t3215 = 0. + t2906 + t3213;
  p_output1[0]=0.00001*t1290 + 0.00102*t3215;
  p_output1[1]=0.00115*(0. + (0. + t2956*(0. + t2734*t2863 + t1998*t3658))*var2[3] + (0. + t3050 - 1.*t2863*t3658)*var2[4]);
  p_output1[2]=0.00077*t1290 + 0.00001*t3215;
}



void AMBody_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

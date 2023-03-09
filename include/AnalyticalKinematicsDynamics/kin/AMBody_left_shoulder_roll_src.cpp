/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_shoulder_roll_src.h"

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
  double t1183;
  double t1216;
  double t1153;
  double t1378;
  double t1808;
  double t1867;
  double t1215;
  double t1254;
  double t1290;
  double t1906;
  double t1988;
  double t1318;
  double t2429;
  double t2483;
  double t2488;
  double t28;
  double t144;
  double t145;
  double t859;
  double t898;
  double t1943;
  double t1948;
  double t1968;
  double t2020;
  double t2123;
  double t2125;
  double t2129;
  double t2313;
  double t2349;
  double t2382;
  double t2645;
  double t2678;
  double t2780;
  double t2817;
  double t3005;
  double t3050;
  double t3111;
  double t3185;
  double t3212;
  double t3215;
  double t3398;
  t1183 = Cos(var1[13]);
  t1216 = Sin(var1[13]);
  t1153 = Cos(var1[5]);
  t1378 = -0.173648*t1183;
  t1808 = -0.984808*t1216;
  t1867 = t1378 + t1808;
  t1215 = 0.984808*t1183;
  t1254 = -0.173648*t1216;
  t1290 = t1215 + t1254;
  t1906 = Sin(var1[5]);
  t1988 = Cos(var1[4]);
  t1318 = t1153*t1290;
  t2429 = 0.173648*t1183;
  t2483 = 0.984808*t1216;
  t2488 = t2429 + t2483;
  t28 = -1.*var2[5];
  t144 = Sin(var1[4]);
  t145 = 0. + t144;
  t859 = var2[3]*t145;
  t898 = 0. + var2[13] + t28 + t859;
  t1943 = -1.*t1867*t1906;
  t1948 = 0. + t1318 + t1943;
  t1968 = var2[4]*t1948;
  t2020 = t1153*t1867;
  t2123 = t1290*t1906;
  t2125 = 0. + t2020 + t2123;
  t2129 = t1988*t2125;
  t2313 = 0. + t2129;
  t2349 = var2[3]*t2313;
  t2382 = 0. + t1968 + t2349;
  t2645 = t1153*t2488;
  t2678 = -1.*t1290*t1906;
  t2780 = 0. + t2645 + t2678;
  t2817 = var2[4]*t2780;
  t3005 = t2488*t1906;
  t3050 = 0. + t1318 + t3005;
  t3111 = t1988*t3050;
  t3185 = 0. + t3111;
  t3212 = var2[3]*t3185;
  t3215 = 0. + t2817 + t3212;
  t3398 = 0.00001*t3215;
  p_output1[0]=0.00001*t2382 + 0.0007*t3215 + 0.00001*t898;
  p_output1[1]=0.00075*t2382 + t3398 + 0.00004*t898;
  p_output1[2]=0.00004*t2382 + t3398 + 0.0003*t898;
}



void AMBody_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shoulder_roll_joint_left_src.h"

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
  double t1568;
  double t1672;
  double t1541;
  double t1581;
  double t1899;
  double t2004;
  double t1594;
  double t1931;
  double t1947;
  double t1528;
  double t2048;
  double t2090;
  double t2131;
  double t2660;
  double t2662;
  double t2703;
  double t2963;
  double t3017;
  double t3019;
  double t3289;
  double t1999;
  double t2174;
  double t2220;
  double t2275;
  double t2284;
  double t2402;
  double t2894;
  double t3142;
  double t3144;
  double t3222;
  double t3246;
  double t3268;
  double t3295;
  double t3298;
  double t3309;
  double t3317;
  double t3321;
  double t3331;
  t1568 = Cos(var1[5]);
  t1672 = Sin(var1[3]);
  t1541 = Cos(var1[3]);
  t1581 = Sin(var1[4]);
  t1899 = Sin(var1[5]);
  t2004 = Cos(var1[13]);
  t1594 = t1541*t1568*t1581;
  t1931 = t1672*t1899;
  t1947 = t1594 + t1931;
  t1528 = Sin(var1[13]);
  t2048 = -1.*t1568*t1672;
  t2090 = t1541*t1581*t1899;
  t2131 = t2048 + t2090;
  t2660 = t1568*t1672*t1581;
  t2662 = -1.*t1541*t1899;
  t2703 = t2660 + t2662;
  t2963 = t1541*t1568;
  t3017 = t1672*t1581*t1899;
  t3019 = t2963 + t3017;
  t3289 = Cos(var1[4]);
  t1999 = -1.*t1528*t1947;
  t2174 = t2004*t2131;
  t2220 = t1999 + t2174;
  t2275 = t2004*t1947;
  t2284 = t1528*t2131;
  t2402 = t2275 + t2284;
  t2894 = -1.*t1528*t2703;
  t3142 = t2004*t3019;
  t3144 = t2894 + t3142;
  t3222 = t2004*t2703;
  t3246 = t1528*t3019;
  t3268 = t3222 + t3246;
  t3295 = -1.*t3289*t1568*t1528;
  t3298 = t2004*t3289*t1899;
  t3309 = t3295 + t3298;
  t3317 = t2004*t3289*t1568;
  t3321 = t3289*t1528*t1899;
  t3331 = t3317 + t3321;
  p_output1[0]=0.173648*t2220 + 0.984808*t2402;
  p_output1[1]=0.173648*t3144 + 0.984808*t3268;
  p_output1[2]=0.173648*t3309 + 0.984808*t3331;
  p_output1[3]=0.984808*t2220 - 0.173648*t2402;
  p_output1[4]=0.984808*t3144 - 0.173648*t3268;
  p_output1[5]=0.984808*t3309 - 0.173648*t3331;
  p_output1[6]=-1.*t1541*t3289;
  p_output1[7]=-1.*t1672*t3289;
  p_output1[8]=t1581;
}



void R_shoulder_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

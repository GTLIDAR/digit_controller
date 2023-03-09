/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shoulder_roll_joint_right_src.h"

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
  double t1366;
  double t1681;
  double t710;
  double t1502;
  double t1699;
  double t1929;
  double t1601;
  double t1752;
  double t1799;
  double t690;
  double t2013;
  double t2164;
  double t2206;
  double t2834;
  double t2848;
  double t2858;
  double t3113;
  double t3193;
  double t3310;
  double t3565;
  double t1807;
  double t2269;
  double t2467;
  double t2596;
  double t2603;
  double t2608;
  double t3072;
  double t3420;
  double t3425;
  double t3473;
  double t3512;
  double t3519;
  double t3569;
  double t3574;
  double t3578;
  double t3587;
  double t3593;
  double t3599;
  t1366 = Cos(var1[5]);
  t1681 = Sin(var1[3]);
  t710 = Cos(var1[3]);
  t1502 = Sin(var1[4]);
  t1699 = Sin(var1[5]);
  t1929 = Cos(var1[24]);
  t1601 = t710*t1366*t1502;
  t1752 = t1681*t1699;
  t1799 = t1601 + t1752;
  t690 = Sin(var1[24]);
  t2013 = -1.*t1366*t1681;
  t2164 = t710*t1502*t1699;
  t2206 = t2013 + t2164;
  t2834 = t1366*t1681*t1502;
  t2848 = -1.*t710*t1699;
  t2858 = t2834 + t2848;
  t3113 = t710*t1366;
  t3193 = t1681*t1502*t1699;
  t3310 = t3113 + t3193;
  t3565 = Cos(var1[4]);
  t1807 = -1.*t690*t1799;
  t2269 = t1929*t2206;
  t2467 = t1807 + t2269;
  t2596 = t1929*t1799;
  t2603 = t690*t2206;
  t2608 = t2596 + t2603;
  t3072 = -1.*t690*t2858;
  t3420 = t1929*t3310;
  t3425 = t3072 + t3420;
  t3473 = t1929*t2858;
  t3512 = t690*t3310;
  t3519 = t3473 + t3512;
  t3569 = -1.*t3565*t1366*t690;
  t3574 = t1929*t3565*t1699;
  t3578 = t3569 + t3574;
  t3587 = t1929*t3565*t1366;
  t3593 = t3565*t690*t1699;
  t3599 = t3587 + t3593;
  p_output1[0]=-0.173648*t2467 + 0.984808*t2608;
  p_output1[1]=-0.173648*t3425 + 0.984808*t3519;
  p_output1[2]=-0.173648*t3578 + 0.984808*t3599;
  p_output1[3]=0.984808*t2467 + 0.173648*t2608;
  p_output1[4]=0.984808*t3425 + 0.173648*t3519;
  p_output1[5]=0.984808*t3578 + 0.173648*t3599;
  p_output1[6]=-1.*t3565*t710;
  p_output1[7]=-1.*t1681*t3565;
  p_output1[8]=t1502;
}



void R_shoulder_roll_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_shoulder_roll_src.h"

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
  double t1132;
  double t1386;
  double t1020;
  double t1550;
  double t1589;
  double t1757;
  double t1201;
  double t1388;
  double t1480;
  double t1944;
  double t2073;
  double t1544;
  double t2924;
  double t2930;
  double t2954;
  double t80;
  double t184;
  double t419;
  double t490;
  double t560;
  double t2033;
  double t2039;
  double t2071;
  double t2129;
  double t2302;
  double t2415;
  double t2703;
  double t2805;
  double t2889;
  double t2903;
  double t2959;
  double t3027;
  double t3034;
  double t3046;
  double t3169;
  double t3213;
  double t3300;
  double t3302;
  double t3401;
  double t3505;
  t1132 = Cos(var1[24]);
  t1386 = Sin(var1[24]);
  t1020 = Cos(var1[5]);
  t1550 = 0.173648*t1132;
  t1589 = -0.984808*t1386;
  t1757 = t1550 + t1589;
  t1201 = 0.984808*t1132;
  t1388 = 0.173648*t1386;
  t1480 = t1201 + t1388;
  t1944 = Sin(var1[5]);
  t2073 = Cos(var1[4]);
  t1544 = t1020*t1480;
  t2924 = -0.173648*t1132;
  t2930 = 0.984808*t1386;
  t2954 = t2924 + t2930;
  t80 = -1.*var2[5];
  t184 = Sin(var1[4]);
  t419 = 0. + t184;
  t490 = var2[3]*t419;
  t560 = 0. + var2[24] + t80 + t490;
  t2033 = -1.*t1757*t1944;
  t2039 = 0. + t1544 + t2033;
  t2071 = var2[4]*t2039;
  t2129 = t1020*t1757;
  t2302 = t1480*t1944;
  t2415 = 0. + t2129 + t2302;
  t2703 = t2073*t2415;
  t2805 = 0. + t2703;
  t2889 = var2[3]*t2805;
  t2903 = 0. + t2071 + t2889;
  t2959 = t1020*t2954;
  t3027 = -1.*t1480*t1944;
  t3034 = 0. + t2959 + t3027;
  t3046 = var2[4]*t3034;
  t3169 = t2954*t1944;
  t3213 = 0. + t1544 + t3169;
  t3300 = t2073*t3213;
  t3302 = 0. + t3300;
  t3401 = var2[3]*t3302;
  t3505 = 0. + t3046 + t3401;
  p_output1[0]=-0.00001*t2903 + 0.0007*t3505 + 0.00001*t560;
  p_output1[1]=0.00075*t2903 - 0.00001*t3505 - 0.00004*t560;
  p_output1[2]=-0.00004*t2903 + 0.00001*t3505 + 0.0003*t560;
}



void AMBody_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

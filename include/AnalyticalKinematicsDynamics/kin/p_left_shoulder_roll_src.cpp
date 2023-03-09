/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_shoulder_roll_src.h"

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
  double t96;
  double t150;
  double t315;
  double t523;
  double t594;
  double t891;
  double t1075;
  double t943;
  double t1122;
  double t1059;
  double t1149;
  double t1155;
  double t1288;
  double t1294;
  double t1311;
  double t111;
  double t577;
  double t834;
  double t852;
  double t1264;
  double t1267;
  double t1277;
  double t1544;
  double t1578;
  double t1619;
  double t1636;
  double t1642;
  double t1662;
  t96 = Cos(var1[3]);
  t150 = Cos(var1[13]);
  t315 = -1.*t150;
  t523 = 1. + t315;
  t594 = Sin(var1[13]);
  t891 = Cos(var1[5]);
  t1075 = Sin(var1[3]);
  t943 = Sin(var1[4]);
  t1122 = Sin(var1[5]);
  t1059 = t96*t891*t943;
  t1149 = t1075*t1122;
  t1155 = t1059 + t1149;
  t1288 = -1.*t891*t1075;
  t1294 = t96*t943*t1122;
  t1311 = t1288 + t1294;
  t111 = Cos(var1[4]);
  t577 = 0.4*t523;
  t834 = 0.12*t594;
  t852 = 0. + t577 + t834;
  t1264 = 0.12*t523;
  t1267 = -0.4*t594;
  t1277 = 0. + t1264 + t1267;
  t1544 = t891*t1075*t943;
  t1578 = -1.*t96*t1122;
  t1619 = t1544 + t1578;
  t1636 = t96*t891;
  t1642 = t1075*t943*t1122;
  t1662 = t1636 + t1642;
  p_output1[0]=0. + t1277*t1311 + 0.11689*(t1311*t150 - 1.*t1155*t594) + 0.400559*(t1155*t150 + t1311*t594) + t1155*t852 - 0.02441*t111*t96 + var1[0];
  p_output1[1]=0. - 0.02441*t1075*t111 + t1277*t1662 + 0.11689*(t150*t1662 - 1.*t1619*t594) + 0.400559*(t150*t1619 + t1662*t594) + t1619*t852 + var1[1];
  p_output1[2]=0. + t111*t1122*t1277 + t111*t852*t891 + 0.400559*(t111*t1122*t594 + t111*t150*t891) + 0.11689*(t111*t1122*t150 - 1.*t111*t594*t891) + 0.02441*t943 + var1[2];
}



void p_left_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

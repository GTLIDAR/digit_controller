/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_shoulder_roll_src.h"

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
  double t511;
  double t649;
  double t334;
  double t633;
  double t702;
  double t1103;
  double t647;
  double t709;
  double t978;
  double t220;
  double t1106;
  double t1144;
  double t1200;
  double t1531;
  double t1572;
  double t1593;
  double t1652;
  double t1653;
  double t1656;
  double t1807;
  double t1059;
  double t1290;
  double t1296;
  double t1345;
  double t1450;
  double t1467;
  double t1649;
  double t1692;
  double t1694;
  double t1759;
  double t1775;
  double t1776;
  double t1817;
  double t1850;
  double t1856;
  double t1892;
  double t1896;
  double t1906;
  double t2190;
  double t2207;
  double t2231;
  double t2252;
  double t2277;
  double t2357;
  double t2358;
  double t2362;
  t511 = Cos(var1[5]);
  t649 = Sin(var1[3]);
  t334 = Cos(var1[3]);
  t633 = Sin(var1[4]);
  t702 = Sin(var1[5]);
  t1103 = Cos(var1[24]);
  t647 = t334*t511*t633;
  t709 = t649*t702;
  t978 = t647 + t709;
  t220 = Sin(var1[24]);
  t1106 = -1.*t511*t649;
  t1144 = t334*t633*t702;
  t1200 = t1106 + t1144;
  t1531 = t511*t649*t633;
  t1572 = -1.*t334*t702;
  t1593 = t1531 + t1572;
  t1652 = t334*t511;
  t1653 = t649*t633*t702;
  t1656 = t1652 + t1653;
  t1807 = Cos(var1[4]);
  t1059 = -1.*t220*t978;
  t1290 = t1103*t1200;
  t1296 = t1059 + t1290;
  t1345 = t1103*t978;
  t1450 = t220*t1200;
  t1467 = t1345 + t1450;
  t1649 = -1.*t220*t1593;
  t1692 = t1103*t1656;
  t1694 = t1649 + t1692;
  t1759 = t1103*t1593;
  t1775 = t220*t1656;
  t1776 = t1759 + t1775;
  t1817 = -1.*t1807*t511*t220;
  t1850 = t1103*t1807*t702;
  t1856 = t1817 + t1850;
  t1892 = t1103*t1807*t511;
  t1896 = t1807*t220*t702;
  t1906 = t1892 + t1896;
  t2190 = -1.*t1103;
  t2207 = 1. + t2190;
  t2231 = 0.4*t2207;
  t2252 = -0.12*t220;
  t2277 = 0. + t2231 + t2252;
  t2357 = -0.12*t2207;
  t2358 = -0.4*t220;
  t2362 = 0. + t2357 + t2358;
  p_output1[0]=-0.173648*t1296 + 0.984808*t1467;
  p_output1[1]=-0.173648*t1694 + 0.984808*t1776;
  p_output1[2]=-0.173648*t1856 + 0.984808*t1906;
  p_output1[3]=0.;
  p_output1[4]=0.984808*t1296 + 0.173648*t1467;
  p_output1[5]=0.984808*t1694 + 0.173648*t1776;
  p_output1[6]=0.984808*t1856 + 0.173648*t1906;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1807*t334;
  p_output1[9]=-1.*t1807*t649;
  p_output1[10]=t633;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.11689*t1296 + 0.400559*t1467 + t1200*t2362 - 0.02441*t1807*t334 + t2277*t978 + var1[0];
  p_output1[13]=0. - 0.11689*t1694 + 0.400559*t1776 + t1593*t2277 + t1656*t2362 - 0.02441*t1807*t649 + var1[1];
  p_output1[14]=0. - 0.11689*t1856 + 0.400559*t1906 + t1807*t2277*t511 + 0.02441*t633 + t1807*t2362*t702 + var1[2];
  p_output1[15]=1.;
}



void T_right_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

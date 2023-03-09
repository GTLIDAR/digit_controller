/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_hip_roll_src.h"

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
  double t440;
  double t524;
  double t395;
  double t496;
  double t528;
  double t660;
  double t514;
  double t534;
  double t539;
  double t360;
  double t714;
  double t867;
  double t931;
  double t1220;
  double t1246;
  double t1249;
  double t1331;
  double t1356;
  double t1365;
  double t1567;
  double t611;
  double t1064;
  double t1093;
  double t1107;
  double t1152;
  double t1161;
  double t1253;
  double t1389;
  double t1399;
  double t1440;
  double t1455;
  double t1499;
  double t1607;
  double t1613;
  double t1632;
  double t1635;
  double t1637;
  double t1699;
  double t1999;
  double t2021;
  double t2034;
  double t2038;
  double t2040;
  double t2047;
  t440 = Cos(var1[5]);
  t524 = Sin(var1[3]);
  t395 = Cos(var1[3]);
  t496 = Sin(var1[4]);
  t528 = Sin(var1[5]);
  t660 = Cos(var1[17]);
  t514 = t395*t440*t496;
  t534 = t524*t528;
  t539 = t514 + t534;
  t360 = Sin(var1[17]);
  t714 = -1.*t440*t524;
  t867 = t395*t496*t528;
  t931 = t714 + t867;
  t1220 = t440*t524*t496;
  t1246 = -1.*t395*t528;
  t1249 = t1220 + t1246;
  t1331 = t395*t440;
  t1356 = t524*t496*t528;
  t1365 = t1331 + t1356;
  t1567 = Cos(var1[4]);
  t611 = -1.*t360*t539;
  t1064 = t660*t931;
  t1093 = t611 + t1064;
  t1107 = t660*t539;
  t1152 = t360*t931;
  t1161 = t1107 + t1152;
  t1253 = -1.*t360*t1249;
  t1389 = t660*t1365;
  t1399 = t1253 + t1389;
  t1440 = t660*t1249;
  t1455 = t360*t1365;
  t1499 = t1440 + t1455;
  t1607 = -1.*t1567*t440*t360;
  t1613 = t660*t1567*t528;
  t1632 = t1607 + t1613;
  t1635 = t660*t1567*t440;
  t1637 = t1567*t360*t528;
  t1699 = t1635 + t1637;
  t1999 = -0.091*t360;
  t2021 = 0. + t1999;
  t2034 = -1.*t660;
  t2038 = 1. + t2034;
  t2040 = -0.091*t2038;
  t2047 = 0. + t2040;
  p_output1[0]=0.366501*t1093 + 0.930418*t1161;
  p_output1[1]=0.366501*t1399 + 0.930418*t1499;
  p_output1[2]=0.366501*t1632 + 0.930418*t1699;
  p_output1[3]=0.;
  p_output1[4]=0.930418*t1093 - 0.366501*t1161;
  p_output1[5]=0.930418*t1399 - 0.366501*t1499;
  p_output1[6]=0.930418*t1632 - 0.366501*t1699;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1567*t395;
  p_output1[9]=-1.*t1567*t524;
  p_output1[10]=t496;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.091945*t1093 - 0.001745*t1161 - 0.03244*t1567*t395 + t2021*t539 + t2047*t931 + var1[0];
  p_output1[13]=0. - 0.091945*t1399 - 0.001745*t1499 + t1249*t2021 + t1365*t2047 - 0.03244*t1567*t524 + var1[1];
  p_output1[14]=0. - 0.091945*t1632 - 0.001745*t1699 + t1567*t2021*t440 + 0.03244*t496 + t1567*t2047*t528 + var1[2];
  p_output1[15]=1.;
}



void T_right_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

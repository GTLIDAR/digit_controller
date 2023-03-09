/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_left_src.h"

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
  double t404;
  double t432;
  double t434;
  double t431;
  double t436;
  double t420;
  double t433;
  double t438;
  double t439;
  double t442;
  double t443;
  double t444;
  double t445;
  double t390;
  double t424;
  double t428;
  double t429;
  double t430;
  double t446;
  double t447;
  double t455;
  double t456;
  double t457;
  double t459;
  double t460;
  double t461;
  double t497;
  double t498;
  double t499;
  double t506;
  double t507;
  double t508;
  double t532;
  double t533;
  double t534;
  t404 = Sin(var1[3]);
  t432 = Cos(var1[5]);
  t434 = Sin(var1[4]);
  t431 = Cos(var1[3]);
  t436 = Sin(var1[5]);
  t420 = Cos(var1[6]);
  t433 = -1.*t431*t432;
  t438 = -1.*t404*t434*t436;
  t439 = t433 + t438;
  t442 = -1.*t432*t404*t434;
  t443 = t431*t436;
  t444 = t442 + t443;
  t445 = Sin(var1[6]);
  t390 = Cos(var1[4]);
  t424 = -1.*t420;
  t428 = 1. + t424;
  t429 = 0.091*t428;
  t430 = 0. + t429;
  t446 = 0.091*t445;
  t447 = 0. + t446;
  t455 = -1.*t432*t404;
  t456 = t431*t434*t436;
  t457 = t455 + t456;
  t459 = t431*t432*t434;
  t460 = t404*t436;
  t461 = t459 + t460;
  t497 = t432*t404;
  t498 = -1.*t431*t434*t436;
  t499 = t497 + t498;
  t506 = t432*t404*t434;
  t507 = -1.*t431*t436;
  t508 = t506 + t507;
  t532 = t431*t432;
  t533 = t404*t434*t436;
  t534 = t532 + t533;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.001*t390*t404 + t430*t439 + 0.091*(t420*t439 - 1.*t444*t445) + t444*t447;
  p_output1[10]=-0.001*t390*t431 + t430*t457 + t447*t461 + 0.091*(t420*t457 - 1.*t445*t461);
  p_output1[11]=0;
  p_output1[12]=0.001*t431*t434 + t390*t430*t431*t436 + 0.091*(t390*t420*t431*t436 - 1.*t390*t431*t432*t445) + t390*t431*t432*t447;
  p_output1[13]=0.001*t404*t434 + t390*t404*t430*t436 + 0.091*(t390*t404*t420*t436 - 1.*t390*t404*t432*t445) + t390*t404*t432*t447;
  p_output1[14]=0.001*t390 - 1.*t430*t434*t436 + 0.091*(-1.*t420*t434*t436 + t432*t434*t445) - 1.*t432*t434*t447;
  p_output1[15]=t430*t461 + t447*t499 + 0.091*(t420*t461 - 1.*t445*t499);
  p_output1[16]=t439*t447 + t430*t508 + 0.091*(-1.*t439*t445 + t420*t508);
  p_output1[17]=t390*t430*t432 + 0.091*(t390*t420*t432 + t390*t436*t445) - 1.*t390*t436*t447;
  p_output1[18]=0.091*t445*t457 + 0.091*t420*t461 + 0.091*(-1.*t445*t457 - 1.*t420*t461);
  p_output1[19]=0.091*t420*t508 + 0.091*t445*t534 + 0.091*(-1.*t420*t508 - 1.*t445*t534);
  p_output1[20]=0.091*t390*t420*t432 + 0.091*t390*t436*t445 + 0.091*(-1.*t390*t420*t432 - 1.*t390*t436*t445);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jp_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

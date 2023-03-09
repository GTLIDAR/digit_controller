/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_left_hip_roll_src.h"

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
  double t1516;
  double t1787;
  double t807;
  double t1124;
  double t2627;
  double t1776;
  double t1901;
  double t2130;
  double t471;
  double t2329;
  double t2699;
  double t2849;
  double t2850;
  double t2890;
  double t3141;
  double t3429;
  double t3460;
  double t3467;
  double t4174;
  double t4277;
  double t4375;
  double t4387;
  double t4405;
  double t4415;
  double t4460;
  double t4488;
  double t4520;
  double t4540;
  double t4547;
  double t3686;
  double t3698;
  double t4773;
  double t4802;
  double t4813;
  double t4703;
  double t4719;
  double t4730;
  double t4746;
  t1516 = Cos(var1[6]);
  t1787 = Sin(var1[6]);
  t807 = Sin(var1[4]);
  t1124 = Cos(var1[5]);
  t2627 = Sin(var1[5]);
  t1776 = 0.930418*t1516;
  t1901 = 0.366501*t1787;
  t2130 = t1776 + t1901;
  t471 = Cos(var1[4]);
  t2329 = t1124*t2130;
  t2699 = -0.366501*t1516;
  t2849 = 0.930418*t1787;
  t2850 = t2699 + t2849;
  t2890 = t2627*t2850;
  t3141 = 0. + t2329 + t2890;
  t3429 = 0.366501*t1516;
  t3460 = -0.930418*t1787;
  t3467 = t3429 + t3460;
  t4174 = -1.*t2627*t2130;
  t4277 = t1124*t2850;
  t4375 = t4174 + t4277;
  t4387 = var2[3]*t471*t4375;
  t4405 = -1.*t1124*t2130;
  t4415 = -1.*t2627*t2850;
  t4460 = t4405 + t4415;
  t4488 = var2[4]*t4460;
  t4520 = t4387 + t4488;
  t4540 = -1.*t2627*t3467;
  t4547 = t4540 + t2329;
  t3686 = t1124*t3467;
  t3698 = t2627*t2130;
  t4773 = -0.930418*t1516;
  t4802 = -0.366501*t1787;
  t4813 = t4773 + t4802;
  t4703 = var2[4]*t4547;
  t4719 = t3686 + t3698;
  t4730 = var2[3]*t471*t4719;
  t4746 = t4703 + t4730;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.00001*t471*var2[3] - 0.00102*t3141*t807*var2[3];
  p_output1[13]=-0.00115*(0. + t3686 + t3698)*t807*var2[3];
  p_output1[14]=0.00077*t471*var2[3] - 0.00001*t3141*t807*var2[3];
  p_output1[15]=0.00102*t4520;
  p_output1[16]=0.00115*(t4547*t471*var2[3] + (-1.*t1124*t3467 + t4174)*var2[4]);
  p_output1[17]=0.00001*t4520;
  p_output1[18]=0.00102*t4746;
  p_output1[19]=0.00115*(t471*(t2627*t3467 + t1124*t4813)*var2[3] + (t3686 - 1.*t2627*t4813)*var2[4]);
  p_output1[20]=0.00001*t4746;
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



void Jq_AMBody_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

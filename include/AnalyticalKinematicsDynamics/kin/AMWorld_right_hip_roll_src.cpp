/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_right_hip_roll_src.h"

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
  double t1032;
  double t1359;
  double t661;
  double t1872;
  double t2956;
  double t2981;
  double t1165;
  double t1663;
  double t1685;
  double t3194;
  double t4505;
  double t4263;
  double t4276;
  double t4399;
  double t4572;
  double t4601;
  double t4662;
  double t4687;
  double t4688;
  double t3721;
  double t1754;
  double t5029;
  double t5030;
  double t5045;
  double t4624;
  double t4732;
  double t4757;
  double t4828;
  double t4856;
  double t4870;
  double t4927;
  double t4928;
  double t4960;
  double t4967;
  double t5062;
  double t5066;
  double t5067;
  double t5084;
  double t5103;
  double t5122;
  double t5147;
  double t5161;
  double t5176;
  double t5205;
  double t3213;
  double t3657;
  double t3677;
  double t3732;
  double t3759;
  double t3861;
  double t3996;
  double t4021;
  double t4029;
  double t4116;
  double t5331;
  double t5335;
  double t5336;
  double t5340;
  double t5353;
  double t5355;
  double t4974;
  double t5207;
  double t5208;
  double t5339;
  double t5356;
  double t5357;
  double t5382;
  double t5412;
  double t5417;
  double t5240;
  double t5243;
  double t5269;
  double t5496;
  double t5499;
  double t5501;
  double t5504;
  double t5505;
  double t5513;
  t1032 = Cos(var1[17]);
  t1359 = Sin(var1[17]);
  t661 = Cos(var1[5]);
  t1872 = -0.366501*t1032;
  t2956 = -0.930418*t1359;
  t2981 = t1872 + t2956;
  t1165 = 0.930418*t1032;
  t1663 = -0.366501*t1359;
  t1685 = t1165 + t1663;
  t3194 = Sin(var1[5]);
  t4505 = Sin(var1[3]);
  t4263 = Cos(var1[3]);
  t4276 = Sin(var1[4]);
  t4399 = t4263*t661*t4276;
  t4572 = t4505*t3194;
  t4601 = t4399 + t4572;
  t4662 = -1.*t661*t4505;
  t4687 = t4263*t4276*t3194;
  t4688 = t4662 + t4687;
  t3721 = Cos(var1[4]);
  t1754 = t661*t1685;
  t5029 = 0.366501*t1032;
  t5030 = 0.930418*t1359;
  t5045 = t5029 + t5030;
  t4624 = -1.*t1359*t4601;
  t4732 = t1032*t4688;
  t4757 = t4624 + t4732;
  t4828 = t1032*t4601;
  t4856 = t1359*t4688;
  t4870 = t4828 + t4856;
  t4927 = -1.*var2[5];
  t4928 = 0. + t4276;
  t4960 = var2[3]*t4928;
  t4967 = 0. + var2[17] + t4927 + t4960;
  t5062 = t661*t5045;
  t5066 = -1.*t1685*t3194;
  t5067 = 0. + t5062 + t5066;
  t5084 = var2[4]*t5067;
  t5103 = t5045*t3194;
  t5122 = 0. + t1754 + t5103;
  t5147 = t3721*t5122;
  t5161 = 0. + t5147;
  t5176 = var2[3]*t5161;
  t5205 = 0. + t5084 + t5176;
  t3213 = -1.*t2981*t3194;
  t3657 = 0. + t1754 + t3213;
  t3677 = var2[4]*t3657;
  t3732 = t661*t2981;
  t3759 = t1685*t3194;
  t3861 = 0. + t3732 + t3759;
  t3996 = t3721*t3861;
  t4021 = 0. + t3996;
  t4029 = var2[3]*t4021;
  t4116 = 0. + t3677 + t4029;
  t5331 = t661*t4505*t4276;
  t5335 = -1.*t4263*t3194;
  t5336 = t5331 + t5335;
  t5340 = t4263*t661;
  t5353 = t4505*t4276*t3194;
  t5355 = t5340 + t5353;
  t4974 = 0.00077*t4967;
  t5207 = 0.00001*t5205;
  t5208 = t4974 + t5207;
  t5339 = -1.*t1359*t5336;
  t5356 = t1032*t5355;
  t5357 = t5339 + t5356;
  t5382 = t1032*t5336;
  t5412 = t1359*t5355;
  t5417 = t5382 + t5412;
  t5240 = 0.00001*t4967;
  t5243 = 0.00102*t5205;
  t5269 = t5240 + t5243;
  t5496 = -1.*t3721*t661*t1359;
  t5499 = t1032*t3721*t3194;
  t5501 = t5496 + t5499;
  t5504 = t1032*t3721*t661;
  t5505 = t3721*t1359*t3194;
  t5513 = t5504 + t5505;
  p_output1[0]=0.00115*t4116*(0.930418*t4757 - 0.366501*t4870) - 1.*t3721*t4263*t5208 + (0.366501*t4757 + 0.930418*t4870)*t5269;
  p_output1[1]=-1.*t3721*t4505*t5208 + 0.00115*t4116*(0.930418*t5357 - 0.366501*t5417) + t5269*(0.366501*t5357 + 0.930418*t5417);
  p_output1[2]=t4276*t5208 + 0.00115*t4116*(0.930418*t5501 - 0.366501*t5513) + t5269*(0.366501*t5501 + 0.930418*t5513);
}



void AMWorld_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

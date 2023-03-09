/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_left_shoulder_roll_src.h"

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
  double t1488;
  double t2403;
  double t141;
  double t1254;
  double t2725;
  double t2728;
  double t2780;
  double t2354;
  double t2429;
  double t2488;
  double t2817;
  double t2720;
  double t3521;
  double t3527;
  double t3597;
  double t127;
  double t260;
  double t4154;
  double t4150;
  double t4178;
  double t4217;
  double t4230;
  double t4269;
  double t4291;
  double t144;
  double t347;
  double t350;
  double t876;
  double t2820;
  double t3005;
  double t3111;
  double t3166;
  double t3185;
  double t3215;
  double t3216;
  double t3395;
  double t3409;
  double t3412;
  double t3618;
  double t3653;
  double t3706;
  double t3786;
  double t3846;
  double t3863;
  double t3872;
  double t3901;
  double t3946;
  double t3948;
  double t4011;
  double t4227;
  double t4326;
  double t4329;
  double t4361;
  double t4382;
  double t4401;
  double t1006;
  double t3415;
  double t4084;
  double t4684;
  double t4697;
  double t4700;
  double t4707;
  double t4710;
  double t4712;
  double t4454;
  double t4456;
  double t4464;
  double t4706;
  double t4714;
  double t4721;
  double t4726;
  double t4730;
  double t4732;
  double t4613;
  double t4642;
  double t4645;
  double t4648;
  double t4782;
  double t4788;
  double t4792;
  double t4798;
  double t4815;
  double t4816;
  t1488 = Cos(var1[13]);
  t2403 = Sin(var1[13]);
  t141 = Cos(var1[4]);
  t1254 = Cos(var1[5]);
  t2725 = -0.173648*t1488;
  t2728 = -0.984808*t2403;
  t2780 = t2725 + t2728;
  t2354 = 0.984808*t1488;
  t2429 = -0.173648*t2403;
  t2488 = t2354 + t2429;
  t2817 = Sin(var1[5]);
  t2720 = t1254*t2488;
  t3521 = 0.173648*t1488;
  t3527 = 0.984808*t2403;
  t3597 = t3521 + t3527;
  t127 = Cos(var1[3]);
  t260 = Sin(var1[4]);
  t4154 = Sin(var1[3]);
  t4150 = t127*t1254*t260;
  t4178 = t4154*t2817;
  t4217 = t4150 + t4178;
  t4230 = -1.*t1254*t4154;
  t4269 = t127*t260*t2817;
  t4291 = t4230 + t4269;
  t144 = -1.*var2[5];
  t347 = 0. + t260;
  t350 = var2[3]*t347;
  t876 = 0. + var2[13] + t144 + t350;
  t2820 = -1.*t2780*t2817;
  t3005 = 0. + t2720 + t2820;
  t3111 = var2[4]*t3005;
  t3166 = t1254*t2780;
  t3185 = t2488*t2817;
  t3215 = 0. + t3166 + t3185;
  t3216 = t141*t3215;
  t3395 = 0. + t3216;
  t3409 = var2[3]*t3395;
  t3412 = 0. + t3111 + t3409;
  t3618 = t1254*t3597;
  t3653 = -1.*t2488*t2817;
  t3706 = 0. + t3618 + t3653;
  t3786 = var2[4]*t3706;
  t3846 = t3597*t2817;
  t3863 = 0. + t2720 + t3846;
  t3872 = t141*t3863;
  t3901 = 0. + t3872;
  t3946 = var2[3]*t3901;
  t3948 = 0. + t3786 + t3946;
  t4011 = 0.00001*t3948;
  t4227 = -1.*t2403*t4217;
  t4326 = t1488*t4291;
  t4329 = t4227 + t4326;
  t4361 = t1488*t4217;
  t4382 = t2403*t4291;
  t4401 = t4361 + t4382;
  t1006 = 0.0003*t876;
  t3415 = 0.00004*t3412;
  t4084 = t1006 + t3415 + t4011;
  t4684 = t1254*t4154*t260;
  t4697 = -1.*t127*t2817;
  t4700 = t4684 + t4697;
  t4707 = t127*t1254;
  t4710 = t4154*t260*t2817;
  t4712 = t4707 + t4710;
  t4454 = 0.00004*t876;
  t4456 = 0.00075*t3412;
  t4464 = t4454 + t4456 + t4011;
  t4706 = -1.*t2403*t4700;
  t4714 = t1488*t4712;
  t4721 = t4706 + t4714;
  t4726 = t1488*t4700;
  t4730 = t2403*t4712;
  t4732 = t4726 + t4730;
  t4613 = 0.00001*t876;
  t4642 = 0.00001*t3412;
  t4645 = 0.0007*t3948;
  t4648 = t4613 + t4642 + t4645;
  t4782 = -1.*t141*t1254*t2403;
  t4788 = t1488*t141*t2817;
  t4792 = t4782 + t4788;
  t4798 = t1488*t141*t1254;
  t4815 = t141*t2403*t2817;
  t4816 = t4798 + t4815;
  p_output1[0]=-1.*t127*t141*t4084 + (0.984808*t4329 - 0.173648*t4401)*t4464 + (0.173648*t4329 + 0.984808*t4401)*t4648;
  p_output1[1]=-1.*t141*t4084*t4154 + t4464*(0.984808*t4721 - 0.173648*t4732) + t4648*(0.173648*t4721 + 0.984808*t4732);
  p_output1[2]=t260*t4084 + t4464*(0.984808*t4792 - 0.173648*t4816) + t4648*(0.173648*t4792 + 0.984808*t4816);
}



void AMWorld_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

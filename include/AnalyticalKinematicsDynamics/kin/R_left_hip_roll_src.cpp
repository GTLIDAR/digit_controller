/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_hip_roll_src.h"

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
  double t1358;
  double t1021;
  double t1391;
  double t1073;
  double t1476;
  double t502;
  double t1847;
  double t1975;
  double t2012;
  double t1334;
  double t1499;
  double t1699;
  double t2051;
  double t2890;
  double t2958;
  double t2961;
  double t2263;
  double t2488;
  double t2627;
  double t3173;
  double t1846;
  double t2056;
  double t2081;
  double t2150;
  double t2164;
  double t2172;
  double t2850;
  double t2970;
  double t3028;
  double t3117;
  double t3135;
  double t3136;
  double t3209;
  double t3221;
  double t3259;
  double t3291;
  double t3339;
  double t3349;
  t1358 = Cos(var1[3]);
  t1021 = Cos(var1[5]);
  t1391 = Sin(var1[4]);
  t1073 = Sin(var1[3]);
  t1476 = Sin(var1[5]);
  t502 = Cos(var1[6]);
  t1847 = t1358*t1021*t1391;
  t1975 = t1073*t1476;
  t2012 = t1847 + t1975;
  t1334 = -1.*t1021*t1073;
  t1499 = t1358*t1391*t1476;
  t1699 = t1334 + t1499;
  t2051 = Sin(var1[6]);
  t2890 = t1021*t1073*t1391;
  t2958 = -1.*t1358*t1476;
  t2961 = t2890 + t2958;
  t2263 = t1358*t1021;
  t2488 = t1073*t1391*t1476;
  t2627 = t2263 + t2488;
  t3173 = Cos(var1[4]);
  t1846 = t502*t1699;
  t2056 = -1.*t2012*t2051;
  t2081 = t1846 + t2056;
  t2150 = t502*t2012;
  t2164 = t1699*t2051;
  t2172 = t2150 + t2164;
  t2850 = t502*t2627;
  t2970 = -1.*t2961*t2051;
  t3028 = t2850 + t2970;
  t3117 = t502*t2961;
  t3135 = t2627*t2051;
  t3136 = t3117 + t3135;
  t3209 = t3173*t502*t1476;
  t3221 = -1.*t3173*t1021*t2051;
  t3259 = t3209 + t3221;
  t3291 = t3173*t1021*t502;
  t3339 = t3173*t1476*t2051;
  t3349 = t3291 + t3339;
  p_output1[0]=-0.366501*t2081 + 0.930418*t2172;
  p_output1[1]=-0.366501*t3028 + 0.930418*t3136;
  p_output1[2]=-0.366501*t3259 + 0.930418*t3349;
  p_output1[3]=0.930418*t2081 + 0.366501*t2172;
  p_output1[4]=0.930418*t3028 + 0.366501*t3136;
  p_output1[5]=0.930418*t3259 + 0.366501*t3349;
  p_output1[6]=-1.*t1358*t3173;
  p_output1[7]=-1.*t1073*t3173;
  p_output1[8]=t1391;
}



void R_left_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

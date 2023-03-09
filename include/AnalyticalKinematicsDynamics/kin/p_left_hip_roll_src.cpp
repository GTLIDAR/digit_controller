/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_hip_roll_src.h"

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
  double t265;
  double t4059;
  double t4124;
  double t4061;
  double t4145;
  double t3588;
  double t4119;
  double t4152;
  double t4180;
  double t4187;
  double t4190;
  double t4198;
  double t4204;
  double t277;
  double t3730;
  double t3987;
  double t4022;
  double t4046;
  double t4205;
  double t4209;
  double t4312;
  double t4315;
  double t4317;
  double t4321;
  double t4327;
  double t4328;
  t265 = Cos(var1[3]);
  t4059 = Cos(var1[5]);
  t4124 = Sin(var1[4]);
  t4061 = Sin(var1[3]);
  t4145 = Sin(var1[5]);
  t3588 = Cos(var1[6]);
  t4119 = -1.*t4059*t4061;
  t4152 = t265*t4124*t4145;
  t4180 = t4119 + t4152;
  t4187 = t265*t4059*t4124;
  t4190 = t4061*t4145;
  t4198 = t4187 + t4190;
  t4204 = Sin(var1[6]);
  t277 = Cos(var1[4]);
  t3730 = -1.*t3588;
  t3987 = 1. + t3730;
  t4022 = 0.091*t3987;
  t4046 = 0. + t4022;
  t4205 = 0.091*t4204;
  t4209 = 0. + t4205;
  t4312 = t265*t4059;
  t4315 = t4061*t4124*t4145;
  t4317 = t4312 + t4315;
  t4321 = t4059*t4061*t4124;
  t4327 = -1.*t265*t4145;
  t4328 = t4321 + t4327;
  p_output1[0]=0. - 0.03244*t265*t277 + t4046*t4180 - 0.001745*(t3588*t4198 + t4180*t4204) + 0.091945*(t3588*t4180 - 1.*t4198*t4204) + t4198*t4209 + var1[0];
  p_output1[1]=0. - 0.03244*t277*t4061 + t4046*t4317 + t4209*t4328 - 0.001745*(t4204*t4317 + t3588*t4328) + 0.091945*(t3588*t4317 - 1.*t4204*t4328) + var1[1];
  p_output1[2]=0. + 0.03244*t4124 + t277*t4046*t4145 + 0.091945*(t277*t3588*t4145 - 1.*t277*t4059*t4204) - 0.001745*(t277*t3588*t4059 + t277*t4145*t4204) + t277*t4059*t4209 + var1[2];
}



void p_left_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

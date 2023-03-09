/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_BaseRotX_src.h"

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
  double t332;
  double t325;
  double t330;
  double t333;
  double t348;
  double t350;
  double t351;
  double t352;
  double t353;
  double t355;
  double t356;
  double t357;
  t332 = Cos(var1[3]);
  t325 = Cos(var1[4]);
  t330 = Sin(var1[3]);
  t333 = Sin(var1[4]);
  t348 = Sin(var1[5]);
  t350 = Cos(var1[5]);
  t351 = t332*t350*t333;
  t352 = t330*t348;
  t353 = t351 + t352;
  t355 = -1.*t332*t350;
  t356 = -1.*t330*t333*t348;
  t357 = t355 + t356;
  p_output1[0]=-1.*t325*t330*var2[3] - 1.*t332*t333*var2[4];
  p_output1[1]=t325*t332*var2[3] - 1.*t330*t333*var2[4];
  p_output1[2]=-1.*t325*var2[4];
  p_output1[3]=t357*var2[3] + t325*t332*t348*var2[4] + t353*var2[5];
  p_output1[4]=(t332*t333*t348 - 1.*t330*t350)*var2[3] + t325*t330*t348*var2[4] + (-1.*t332*t348 + t330*t333*t350)*var2[5];
  p_output1[5]=-1.*t333*t348*var2[4] + t325*t350*var2[5];
  p_output1[6]=(t332*t348 - 1.*t330*t333*t350)*var2[3] + t325*t332*t350*var2[4] + (-1.*t332*t333*t348 + t330*t350)*var2[5];
  p_output1[7]=t353*var2[3] + t325*t330*t350*var2[4] + t357*var2[5];
  p_output1[8]=-1.*t333*t350*var2[4] - 1.*t325*t348*var2[5];
}



void dR_BaseRotX_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

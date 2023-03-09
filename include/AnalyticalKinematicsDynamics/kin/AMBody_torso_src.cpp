/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_torso_src.h"

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
  double t2233;
  double t1664;
  double t2326;
  double t577;
  double t1013;
  double t1024;
  double t2324;
  double t2453;
  double t2498;
  double t2734;
  double t2791;
  double t2800;
  t2233 = Cos(var1[5]);
  t1664 = Cos(var1[4]);
  t2326 = Sin(var1[5]);
  t577 = Sin(var1[4]);
  t1013 = -1.*var2[3]*t577;
  t1024 = var2[5] + t1013;
  t2324 = var2[3]*t1664*t2233;
  t2453 = -1.*var2[4]*t2326;
  t2498 = 0. + t2324 + t2453;
  t2734 = var2[4]*t2233;
  t2791 = var2[3]*t1664*t2326;
  t2800 = 0. + t2734 + t2791;
  p_output1[0]=0.483626*t1024 + 0.007698*t2498 - 0.000091*t2800;
  p_output1[1]=-0.000091*t1024 - 0.000019*t2498 + 0.45019*t2800;
  p_output1[2]=0.007698*t1024 + 0.101876*t2498 - 0.000019*t2800;
}



void AMBody_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_BaseRotX_src.h"

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
  double t300;
  double t312;
  double t293;
  double t318;
  double t320;
  double t322;
  t300 = Cos(var1[4]);
  t312 = Sin(var1[3]);
  t293 = Cos(var1[3]);
  t318 = Sin(var1[4]);
  t320 = Cos(var1[5]);
  t322 = Sin(var1[5]);
  p_output1[0]=t293*t300;
  p_output1[1]=t300*t312;
  p_output1[2]=-1.*t318;
  p_output1[3]=-1.*t312*t320 + t293*t318*t322;
  p_output1[4]=t293*t320 + t312*t318*t322;
  p_output1[5]=t300*t322;
  p_output1[6]=t293*t318*t320 + t312*t322;
  p_output1[7]=t312*t318*t320 - 1.*t293*t322;
  p_output1[8]=t300*t320;
}



void R_BaseRotX_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

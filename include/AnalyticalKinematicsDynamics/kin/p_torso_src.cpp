/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_torso_src.h"

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
  double t25;
  double t336;
  double t491;
  double t371;
  double t846;
  double t44;
  t25 = Cos(var1[3]);
  t336 = Cos(var1[5]);
  t491 = Sin(var1[3]);
  t371 = Sin(var1[4]);
  t846 = Sin(var1[5]);
  t44 = Cos(var1[4]);
  p_output1[0]=0.001437*t25*t44 + 0.000175*(-1.*t336*t491 + t25*t371*t846) + 0.230096*(t25*t336*t371 + t491*t846) + var1[0];
  p_output1[1]=0.001437*t44*t491 + 0.230096*(t336*t371*t491 - 1.*t25*t846) + 0.000175*(t25*t336 + t371*t491*t846) + var1[1];
  p_output1[2]=-0.001437*t371 + 0.230096*t336*t44 + 0.000175*t44*t846 + var1[2];
}



void p_torso_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_torso_src.h"

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
  double t1704;
  double t51;
  double t863;
  double t1748;
  double t2552;
  double t2653;
  double t2695;
  double t2716;
  double t2784;
  double t2806;
  double t2847;
  double t2855;
  t1704 = Cos(var1[3]);
  t51 = Cos(var1[4]);
  t863 = Sin(var1[3]);
  t1748 = Sin(var1[4]);
  t2552 = Sin(var1[5]);
  t2653 = Cos(var1[5]);
  t2695 = t1704*t2653*t1748;
  t2716 = t863*t2552;
  t2784 = t2695 + t2716;
  t2806 = -1.*t1704*t2653;
  t2847 = -1.*t863*t1748*t2552;
  t2855 = t2806 + t2847;
  p_output1[0]=-1.*t51*t863*var2[3] - 1.*t1704*t1748*var2[4];
  p_output1[1]=t1704*t51*var2[3] - 1.*t1748*t863*var2[4];
  p_output1[2]=-1.*t51*var2[4];
  p_output1[3]=t2855*var2[3] + t1704*t2552*t51*var2[4] + t2784*var2[5];
  p_output1[4]=(t1704*t1748*t2552 - 1.*t2653*t863)*var2[3] + t2552*t51*t863*var2[4] + (-1.*t1704*t2552 + t1748*t2653*t863)*var2[5];
  p_output1[5]=-1.*t1748*t2552*var2[4] + t2653*t51*var2[5];
  p_output1[6]=(t1704*t2552 - 1.*t1748*t2653*t863)*var2[3] + t1704*t2653*t51*var2[4] + (-1.*t1704*t1748*t2552 + t2653*t863)*var2[5];
  p_output1[7]=t2784*var2[3] + t2653*t51*t863*var2[4] + t2855*var2[5];
  p_output1[8]=-1.*t1748*t2653*var2[4] - 1.*t2552*t51*var2[5];
}



void dR_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

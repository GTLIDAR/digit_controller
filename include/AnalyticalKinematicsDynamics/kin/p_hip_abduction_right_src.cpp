/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right_src.h"

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
  double t13;
  double t820;
  double t1655;
  double t1187;
  double t1911;
  double t277;
  double t1570;
  double t1962;
  double t2003;
  double t2200;
  double t2464;
  double t2553;
  double t2560;
  double t222;
  double t582;
  double t585;
  double t2302;
  double t2326;
  double t2342;
  double t2393;
  double t2759;
  double t2855;
  double t2929;
  double t2932;
  double t2957;
  double t3017;
  t13 = Cos(var1[3]);
  t820 = Cos(var1[5]);
  t1655 = Sin(var1[3]);
  t1187 = Sin(var1[4]);
  t1911 = Sin(var1[5]);
  t277 = Sin(var1[17]);
  t1570 = t13*t820*t1187;
  t1962 = t1655*t1911;
  t2003 = t1570 + t1962;
  t2200 = Cos(var1[17]);
  t2464 = -1.*t820*t1655;
  t2553 = t13*t1187*t1911;
  t2560 = t2464 + t2553;
  t222 = Cos(var1[4]);
  t582 = -0.091*t277;
  t585 = 0. + t582;
  t2302 = -1.*t2200;
  t2326 = 1. + t2302;
  t2342 = -0.091*t2326;
  t2393 = 0. + t2342;
  t2759 = t820*t1655*t1187;
  t2855 = -1.*t13*t1911;
  t2929 = t2759 + t2855;
  t2932 = t13*t820;
  t2957 = t1655*t1187*t1911;
  t3017 = t2932 + t2957;
  p_output1[0]=0. - 0.001*t13*t222 + t2393*t2560 - 0.091*(t2200*t2560 - 1.*t2003*t277) + t2003*t585 + var1[0];
  p_output1[1]=0. - 0.001*t1655*t222 + t2393*t3017 - 0.091*(-1.*t277*t2929 + t2200*t3017) + t2929*t585 + var1[1];
  p_output1[2]=0. + 0.001*t1187 + t1911*t222*t2393 + t222*t585*t820 - 0.091*(t1911*t2200*t222 - 1.*t222*t277*t820) + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

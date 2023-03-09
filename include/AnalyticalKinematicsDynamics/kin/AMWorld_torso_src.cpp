/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_torso_src.h"

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
  double t693;
  double t2933;
  double t2972;
  double t563;
  double t1679;
  double t1686;
  double t2750;
  double t2964;
  double t2991;
  double t2997;
  double t3049;
  double t3064;
  double t3137;
  double t3288;
  double t2759;
  double t3029;
  double t3181;
  double t3208;
  double t3330;
  double t3372;
  double t3385;
  double t3445;
  double t3537;
  double t3544;
  double t3545;
  double t3564;
  t693 = Cos(var1[4]);
  t2933 = Cos(var1[5]);
  t2972 = Sin(var1[5]);
  t563 = Cos(var1[3]);
  t1679 = Sin(var1[4]);
  t1686 = -1.*var2[3]*t1679;
  t2750 = var2[5] + t1686;
  t2964 = var2[3]*t693*t2933;
  t2991 = -1.*var2[4]*t2972;
  t2997 = 0. + t2964 + t2991;
  t3049 = var2[4]*t2933;
  t3064 = var2[3]*t693*t2972;
  t3137 = 0. + t3049 + t3064;
  t3288 = Sin(var1[3]);
  t2759 = 0.483626*t2750;
  t3029 = 0.007698*t2997;
  t3181 = -0.000091*t3137;
  t3208 = t2759 + t3029 + t3181;
  t3330 = 0.007698*t2750;
  t3372 = 0.101876*t2997;
  t3385 = -0.000019*t3137;
  t3445 = t3330 + t3372 + t3385;
  t3537 = -0.000091*t2750;
  t3544 = -0.000019*t2997;
  t3545 = 0.45019*t3137;
  t3564 = t3537 + t3544 + t3545;
  p_output1[0]=t3445*(t2972*t3288 + t1679*t2933*t563) + t3564*(-1.*t2933*t3288 + t1679*t2972*t563) + t3208*t563*t693;
  p_output1[1]=t3564*(t1679*t2972*t3288 + t2933*t563) + t3445*(t1679*t2933*t3288 - 1.*t2972*t563) + t3208*t3288*t693;
  p_output1[2]=-1.*t1679*t3208 + t2933*t3445*t693 + t2972*t3564*t693;
}



void AMWorld_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

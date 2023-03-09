/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_hip_yaw_src.h"

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
  double t2149;
  double t1749;
  double t2182;
  double t1751;
  double t2482;
  double t3851;
  double t3675;
  double t3708;
  double t3731;
  double t3796;
  double t644;
  double t1966;
  double t2511;
  double t2591;
  double t2892;
  double t3023;
  double t3102;
  double t3214;
  double t3868;
  double t3874;
  double t3924;
  double t3933;
  double t4629;
  double t4648;
  double t4653;
  double t4135;
  double t4419;
  double t4582;
  double t5046;
  double t5213;
  double t5439;
  double t5440;
  double t676;
  double t1003;
  double t1320;
  double t1436;
  double t3320;
  double t3329;
  double t3837;
  double t3915;
  double t3937;
  double t3973;
  double t4044;
  double t4080;
  double t5557;
  double t5558;
  double t5561;
  double t5568;
  double t5573;
  double t5578;
  double t5622;
  double t5627;
  double t5630;
  double t4998;
  double t5043;
  double t5222;
  double t5223;
  double t5607;
  double t5611;
  double t5613;
  double t5304;
  double t5321;
  double t5417;
  double t5433;
  double t5456;
  double t5489;
  double t5502;
  double t5506;
  double t5811;
  double t5812;
  double t5813;
  double t5789;
  double t5797;
  double t5798;
  t2149 = Cos(var1[3]);
  t1749 = Cos(var1[5]);
  t2182 = Sin(var1[4]);
  t1751 = Sin(var1[3]);
  t2482 = Sin(var1[5]);
  t3851 = Sin(var1[7]);
  t3675 = Cos(var1[4]);
  t3708 = Cos(var1[7]);
  t3731 = -1.*t3708;
  t3796 = 1. + t3731;
  t644 = Cos(var1[6]);
  t1966 = -1.*t1749*t1751;
  t2511 = t2149*t2182*t2482;
  t2591 = t1966 + t2511;
  t2892 = t2149*t1749*t2182;
  t3023 = t1751*t2482;
  t3102 = t2892 + t3023;
  t3214 = Sin(var1[6]);
  t3868 = -0.930418*t3851;
  t3874 = 0. + t3868;
  t3924 = -0.366501*t3851;
  t3933 = 0. + t3924;
  t4629 = t644*t3102;
  t4648 = t2591*t3214;
  t4653 = t4629 + t4648;
  t4135 = t644*t2591;
  t4419 = -1.*t3102*t3214;
  t4582 = t4135 + t4419;
  t5046 = 0.366501*t3851;
  t5213 = 0. + t5046;
  t5439 = 0.930418*t3851;
  t5440 = 0. + t5439;
  t676 = -1.*t644;
  t1003 = 1. + t676;
  t1320 = 0.091*t1003;
  t1436 = 0. + t1320;
  t3320 = 0.091*t3214;
  t3329 = 0. + t3320;
  t3837 = -0.04500040093286238*t3796;
  t3915 = 0.07877663122399998*t3874;
  t3937 = 0.031030906668*t3933;
  t3973 = 0. + t3837 + t3915 + t3937;
  t4044 = -1.000000637725*t3796;
  t4080 = 1. + t4044;
  t5557 = t2149*t1749;
  t5558 = t1751*t2182*t2482;
  t5561 = t5557 + t5558;
  t5568 = t1749*t1751*t2182;
  t5573 = -1.*t2149*t2482;
  t5578 = t5568 + t5573;
  t5622 = t644*t5578;
  t5627 = t5561*t3214;
  t5630 = t5622 + t5627;
  t4998 = -3.2909349868922137e-7*var1[7];
  t5043 = 0.03103092645718495*t3796;
  t5222 = -0.045000372235*t5213;
  t5223 = t4998 + t5043 + t5222;
  t5607 = t644*t5561;
  t5611 = -1.*t5578*t3214;
  t5613 = t5607 + t5611;
  t5304 = -0.134322983001*t3796;
  t5321 = 1. + t5304;
  t5417 = 1.296332362046933e-7*var1[7];
  t5433 = 0.07877668146182712*t3796;
  t5456 = -0.045000372235*t5440;
  t5489 = t5417 + t5433 + t5456;
  t5502 = -0.8656776547239999*t3796;
  t5506 = 1. + t5502;
  t5811 = t3675*t1749*t644;
  t5812 = t3675*t2482*t3214;
  t5813 = t5811 + t5812;
  t5789 = t3675*t644*t2482;
  t5797 = -1.*t3675*t1749*t3214;
  t5798 = t5789 + t5797;
  p_output1[0]=0. + t1436*t2591 + t3102*t3329 + t2149*t3675*t3973 - 0.04501*(t2149*t3675*t4080 + t3874*t4582 + t3933*t4653) + t4653*t5223 - 0.086806*(-0.340999127418*t3796*t4582 + t2149*t3675*t5213 + t4653*t5321) + t4582*t5489 + 0.123098*(-0.340999127418*t3796*t4653 + t2149*t3675*t5440 + t4582*t5506) + var1[0];
  p_output1[1]=0. + t1751*t3675*t3973 + t1436*t5561 + t3329*t5578 + t5489*t5613 + t5223*t5630 + 0.123098*(t1751*t3675*t5440 + t5506*t5613 - 0.340999127418*t3796*t5630) - 0.04501*(t1751*t3675*t4080 + t3874*t5613 + t3933*t5630) - 0.086806*(t1751*t3675*t5213 - 0.340999127418*t3796*t5613 + t5321*t5630) + var1[1];
  p_output1[2]=0. + t1436*t2482*t3675 + t1749*t3329*t3675 - 1.*t2182*t3973 + t5489*t5798 + t5223*t5813 + 0.123098*(-1.*t2182*t5440 + t5506*t5798 - 0.340999127418*t3796*t5813) - 0.04501*(-1.*t2182*t4080 + t3874*t5798 + t3933*t5813) - 0.086806*(-1.*t2182*t5213 - 0.340999127418*t3796*t5798 + t5321*t5813) + var1[2];
}



void p_left_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

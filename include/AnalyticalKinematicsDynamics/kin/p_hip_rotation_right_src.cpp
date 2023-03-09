/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t1714;
  double t619;
  double t3087;
  double t3452;
  double t3173;
  double t3505;
  double t1323;
  double t1386;
  double t1469;
  double t2643;
  double t3377;
  double t3515;
  double t3559;
  double t3609;
  double t3953;
  double t3955;
  double t3969;
  double t1177;
  double t4219;
  double t4259;
  double t4095;
  double t4136;
  double t4137;
  double t4369;
  double t4379;
  double t4416;
  double t4052;
  double t4074;
  double t1779;
  double t1796;
  double t1864;
  double t1929;
  double t1629;
  double t1836;
  double t2017;
  double t2350;
  double t2891;
  double t3035;
  double t3655;
  double t3933;
  double t3935;
  double t3942;
  double t4027;
  double t4034;
  double t4078;
  double t4091;
  double t4701;
  double t4720;
  double t4736;
  double t4752;
  double t4754;
  double t4759;
  double t4150;
  double t4167;
  double t4277;
  double t4338;
  double t4776;
  double t4783;
  double t4787;
  double t4460;
  double t4497;
  double t4809;
  double t4816;
  double t4820;
  double t4565;
  double t4573;
  double t4610;
  double t4637;
  double t4901;
  double t4902;
  double t4909;
  double t4914;
  double t4915;
  double t4921;
  t1714 = Sin(var1[18]);
  t619 = Cos(var1[3]);
  t3087 = Cos(var1[5]);
  t3452 = Sin(var1[3]);
  t3173 = Sin(var1[4]);
  t3505 = Sin(var1[5]);
  t1323 = Cos(var1[18]);
  t1386 = -1.*t1323;
  t1469 = 1. + t1386;
  t2643 = Sin(var1[17]);
  t3377 = t619*t3087*t3173;
  t3515 = t3452*t3505;
  t3559 = t3377 + t3515;
  t3609 = Cos(var1[17]);
  t3953 = -1.*t3087*t3452;
  t3955 = t619*t3173*t3505;
  t3969 = t3953 + t3955;
  t1177 = Cos(var1[4]);
  t4219 = -0.366501*t1714;
  t4259 = 0. + t4219;
  t4095 = -1.*t2643*t3559;
  t4136 = t3609*t3969;
  t4137 = t4095 + t4136;
  t4369 = t3609*t3559;
  t4379 = t2643*t3969;
  t4416 = t4369 + t4379;
  t4052 = 0.930418*t1714;
  t4074 = 0. + t4052;
  t1779 = -0.930418*t1714;
  t1796 = 0. + t1779;
  t1864 = 0.366501*t1714;
  t1929 = 0. + t1864;
  t1629 = -0.04500040093286238*t1469;
  t1836 = -0.07877663122399998*t1796;
  t2017 = 0.031030906668*t1929;
  t2350 = 0. + t1629 + t1836 + t2017;
  t2891 = -0.091*t2643;
  t3035 = 0. + t2891;
  t3655 = -1.*t3609;
  t3933 = 1. + t3655;
  t3935 = -0.091*t3933;
  t3942 = 0. + t3935;
  t4027 = 1.296332362046933e-7*var1[18];
  t4034 = -0.07877668146182712*t1469;
  t4078 = -0.045000372235*t4074;
  t4091 = t4027 + t4034 + t4078;
  t4701 = t3087*t3452*t3173;
  t4720 = -1.*t619*t3505;
  t4736 = t4701 + t4720;
  t4752 = t619*t3087;
  t4754 = t3452*t3173*t3505;
  t4759 = t4752 + t4754;
  t4150 = 3.2909349868922137e-7*var1[18];
  t4167 = 0.03103092645718495*t1469;
  t4277 = -0.045000372235*t4259;
  t4338 = t4150 + t4167 + t4277;
  t4776 = -1.*t2643*t4736;
  t4783 = t3609*t4759;
  t4787 = t4776 + t4783;
  t4460 = -0.134322983001*t1469;
  t4497 = 1. + t4460;
  t4809 = t3609*t4736;
  t4816 = t2643*t4759;
  t4820 = t4809 + t4816;
  t4565 = -0.8656776547239999*t1469;
  t4573 = 1. + t4565;
  t4610 = -1.000000637725*t1469;
  t4637 = 1. + t4610;
  t4901 = -1.*t1177*t3087*t2643;
  t4902 = t3609*t1177*t3505;
  t4909 = t4901 + t4902;
  t4914 = t3609*t1177*t3087;
  t4915 = t1177*t2643*t3505;
  t4921 = t4914 + t4915;
  p_output1[0]=0. + t3035*t3559 + t3942*t3969 + t4091*t4137 + t4338*t4416 + t1177*t2350*t619 - 0.109508*(0.340999127418*t1469*t4416 + t4137*t4573 + t1177*t4074*t619) - 0.046986*(0.340999127418*t1469*t4137 + t4416*t4497 + t1177*t4259*t619) - 0.045*(t1796*t4137 + t1929*t4416 + t1177*t4637*t619) + var1[0];
  p_output1[1]=0. + t1177*t2350*t3452 + t3035*t4736 + t3942*t4759 + t4091*t4787 + t4338*t4820 - 0.109508*(t1177*t3452*t4074 + t4573*t4787 + 0.340999127418*t1469*t4820) - 0.045*(t1177*t3452*t4637 + t1796*t4787 + t1929*t4820) - 0.046986*(t1177*t3452*t4259 + 0.340999127418*t1469*t4787 + t4497*t4820) + var1[1];
  p_output1[2]=0. + t1177*t3035*t3087 - 1.*t2350*t3173 + t1177*t3505*t3942 + t4091*t4909 + t4338*t4921 - 0.109508*(-1.*t3173*t4074 + t4573*t4909 + 0.340999127418*t1469*t4921) - 0.045*(-1.*t3173*t4637 + t1796*t4909 + t1929*t4921) - 0.046986*(-1.*t3173*t4259 + 0.340999127418*t1469*t4909 + t4497*t4921) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

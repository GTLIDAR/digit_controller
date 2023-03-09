/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_hip_yaw_src.h"

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
  double t1010;
  double t1844;
  double t1897;
  double t1849;
  double t1928;
  double t1555;
  double t2002;
  double t1880;
  double t1929;
  double t1985;
  double t1816;
  double t2006;
  double t2036;
  double t2052;
  double t417;
  double t425;
  double t576;
  double t697;
  double t958;
  double t1086;
  double t1650;
  double t1774;
  double t2348;
  double t2373;
  double t2644;
  double t2663;
  double t2673;
  double t2719;
  double t2723;
  double t2747;
  double t1997;
  double t2235;
  double t2264;
  double t2426;
  double t2460;
  double t2535;
  double t3257;
  double t3258;
  double t2689;
  double t2774;
  double t2809;
  double t3288;
  double t3289;
  double t2832;
  double t2857;
  double t2937;
  double t3357;
  double t3382;
  double t3470;
  double t3496;
  double t3066;
  double t3069;
  double t3086;
  double t3112;
  double t3205;
  double t3235;
  double t3259;
  double t3264;
  double t3295;
  double t3323;
  double t3429;
  double t3501;
  double t3541;
  double t3593;
  double t3627;
  double t3635;
  double t3701;
  double t3702;
  double t3739;
  double t3748;
  double t3771;
  double t3797;
  double t3829;
  double t3833;
  double t3856;
  double t3892;
  double t3969;
  double t3990;
  double t3991;
  double t3992;
  t1010 = Cos(var1[3]);
  t1844 = Cos(var1[5]);
  t1897 = Sin(var1[3]);
  t1849 = Sin(var1[4]);
  t1928 = Sin(var1[5]);
  t1555 = Sin(var1[18]);
  t2002 = Cos(var1[17]);
  t1880 = t1010*t1844*t1849;
  t1929 = t1897*t1928;
  t1985 = t1880 + t1929;
  t1816 = Sin(var1[17]);
  t2006 = -1.*t1844*t1897;
  t2036 = t1010*t1849*t1928;
  t2052 = t2006 + t2036;
  t417 = Cos(var1[18]);
  t425 = -1.*t417;
  t576 = 1. + t425;
  t697 = -1.000000637725*t576;
  t958 = 1. + t697;
  t1086 = Cos(var1[4]);
  t1650 = -0.930418*t1555;
  t1774 = 0. + t1650;
  t2348 = 0.366501*t1555;
  t2373 = 0. + t2348;
  t2644 = t1844*t1897*t1849;
  t2663 = -1.*t1010*t1928;
  t2673 = t2644 + t2663;
  t2719 = t1010*t1844;
  t2723 = t1897*t1849*t1928;
  t2747 = t2719 + t2723;
  t1997 = -1.*t1816*t1985;
  t2235 = t2002*t2052;
  t2264 = t1997 + t2235;
  t2426 = t2002*t1985;
  t2460 = t1816*t2052;
  t2535 = t2426 + t2460;
  t3257 = -0.366501*t1555;
  t3258 = 0. + t3257;
  t2689 = -1.*t1816*t2673;
  t2774 = t2002*t2747;
  t2809 = t2689 + t2774;
  t3288 = -0.134322983001*t576;
  t3289 = 1. + t3288;
  t2832 = t2002*t2673;
  t2857 = t1816*t2747;
  t2937 = t2832 + t2857;
  t3357 = 0.930418*t1555;
  t3382 = 0. + t3357;
  t3470 = -0.8656776547239999*t576;
  t3496 = 1. + t3470;
  t3066 = -1.*t1086*t1844*t1816;
  t3069 = t2002*t1086*t1928;
  t3086 = t3066 + t3069;
  t3112 = t2002*t1086*t1844;
  t3205 = t1086*t1816*t1928;
  t3235 = t3112 + t3205;
  t3259 = t1010*t1086*t3258;
  t3264 = 0.340999127418*t576*t2264;
  t3295 = t3289*t2535;
  t3323 = t3259 + t3264 + t3295;
  t3429 = t1010*t1086*t3382;
  t3501 = t3496*t2264;
  t3541 = 0.340999127418*t576*t2535;
  t3593 = t3429 + t3501 + t3541;
  t3627 = t1086*t3258*t1897;
  t3635 = 0.340999127418*t576*t2809;
  t3701 = t3289*t2937;
  t3702 = t3627 + t3635 + t3701;
  t3739 = t1086*t3382*t1897;
  t3748 = t3496*t2809;
  t3771 = 0.340999127418*t576*t2937;
  t3797 = t3739 + t3748 + t3771;
  t3829 = -1.*t3258*t1849;
  t3833 = 0.340999127418*t576*t3086;
  t3856 = t3289*t3235;
  t3892 = t3829 + t3833 + t3856;
  t3969 = -1.*t3382*t1849;
  t3990 = t3496*t3086;
  t3991 = 0.340999127418*t576*t3235;
  t3992 = t3969 + t3990 + t3991;
  p_output1[0]=-1.*t1774*t2264 - 1.*t2373*t2535 - 1.*t1010*t1086*t958;
  p_output1[1]=-1.*t1774*t2809 - 1.*t2373*t2937 - 1.*t1086*t1897*t958;
  p_output1[2]=-1.*t1774*t3086 - 1.*t2373*t3235 + t1849*t958;
  p_output1[3]=-0.366501*t3323 + 0.930418*t3593;
  p_output1[4]=-0.366501*t3702 + 0.930418*t3797;
  p_output1[5]=-0.366501*t3892 + 0.930418*t3992;
  p_output1[6]=-0.930418*t3323 - 0.366501*t3593;
  p_output1[7]=-0.930418*t3702 - 0.366501*t3797;
  p_output1[8]=-0.930418*t3892 - 0.366501*t3992;
}



void R_right_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

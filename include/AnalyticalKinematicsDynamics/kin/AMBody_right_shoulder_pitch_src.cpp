/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_shoulder_pitch_src.h"

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
  double t1158;
  double t93;
  double t103;
  double t256;
  double t667;
  double t989;
  double t1163;
  double t1249;
  double t1322;
  double t1325;
  double t2655;
  double t2085;
  double t2317;
  double t2371;
  double t2389;
  double t2401;
  double t2416;
  double t2429;
  double t2433;
  double t1998;
  double t2674;
  double t2856;
  double t2899;
  double t2912;
  double t2921;
  double t2922;
  double t2923;
  double t2929;
  double t1562;
  double t1569;
  double t1665;
  double t1854;
  double t1921;
  double t3174;
  double t3216;
  double t3222;
  double t2495;
  double t2955;
  double t3058;
  double t3229;
  double t1264;
  double t1390;
  double t991;
  double t3521;
  double t3553;
  double t3555;
  double t3583;
  double t3596;
  double t3606;
  double t3437;
  double t3333;
  double t3341;
  double t3639;
  double t3645;
  double t3668;
  double t3569;
  double t3617;
  double t3623;
  double t4049;
  double t4063;
  double t4076;
  double t4029;
  double t4030;
  double t4032;
  double t3909;
  double t3985;
  double t4006;
  double t4095;
  double t4123;
  double t4132;
  double t4044;
  double t4083;
  double t4093;
  double t36;
  double t1410;
  double t1447;
  double t1894;
  double t3112;
  double t3233;
  double t3291;
  double t3298;
  double t3340;
  double t3380;
  double t3387;
  double t3392;
  double t3398;
  double t3404;
  double t3411;
  double t3420;
  double t3436;
  double t3470;
  double t3480;
  double t3494;
  double t3628;
  double t3695;
  double t3703;
  double t3722;
  double t3756;
  double t3785;
  double t3786;
  double t3796;
  double t3799;
  double t3805;
  double t3808;
  double t3811;
  double t3820;
  double t3822;
  double t3824;
  double t3825;
  double t3895;
  double t4018;
  double t4094;
  double t4159;
  double t4163;
  double t4190;
  double t4214;
  double t4224;
  double t4229;
  double t4250;
  double t4258;
  double t4265;
  double t4280;
  double t4284;
  t1158 = Sin(var1[25]);
  t93 = Cos(var1[25]);
  t103 = -1.*t93;
  t256 = 1. + t103;
  t667 = -1.0000001112680001*t256;
  t989 = 1. + t667;
  t1163 = -0.994522*t1158;
  t1249 = 0. + t1163;
  t1322 = -0.104528*t1158;
  t1325 = 0. + t1322;
  t2655 = Sin(var1[24]);
  t2085 = -0.010926102783999999*t256;
  t2317 = 1. + t2085;
  t2371 = 0.073913*t2317;
  t2389 = -0.07310496868062215*t256;
  t2401 = 0.104528*t1158;
  t2416 = 0. + t2401;
  t2429 = 0.707107*t2416;
  t2433 = t2371 + t2389 + t2429;
  t1998 = Cos(var1[24]);
  t2674 = -0.9890740084840001*t256;
  t2856 = 1. + t2674;
  t2899 = 0.703234*t2856;
  t2912 = -0.007683655156165408*t256;
  t2921 = 0.994522*t1158;
  t2922 = 0. + t2921;
  t2923 = 0.707107*t2922;
  t2929 = t2899 + t2912 + t2923;
  t1562 = 0.707107*t989;
  t1569 = 0.703234*t1249;
  t1665 = 0.073913*t1325;
  t1854 = 0. + t1562 + t1569 + t1665;
  t1921 = Cos(var1[5]);
  t3174 = -1.*t2655*t2433;
  t3216 = t1998*t2929;
  t3222 = 0. + t3174 + t3216;
  t2495 = t1998*t2433;
  t2955 = t2655*t2929;
  t3058 = 0. + t2495 + t2955;
  t3229 = Sin(var1[5]);
  t1264 = -0.703234*t1249;
  t1390 = -0.073913*t1325;
  t991 = -0.707107*t989;
  t3521 = -0.073913*t2317;
  t3553 = 0.07310496868062215*t256;
  t3555 = t3521 + t3553 + t2429;
  t3583 = -0.703234*t2856;
  t3596 = 0.007683655156165408*t256;
  t3606 = t3583 + t3596 + t2923;
  t3437 = 0. + t1562 + t1264 + t1390;
  t3333 = Sin(var1[4]);
  t3341 = Cos(var1[4]);
  t3639 = -1.*t2655*t3555;
  t3645 = t1998*t3606;
  t3668 = 0. + t3639 + t3645;
  t3569 = t1998*t3555;
  t3617 = t2655*t3606;
  t3623 = 0. + t3569 + t3617;
  t4049 = -0.104528*t2856;
  t4063 = -0.10338592795881554*t256;
  t4076 = t4049 + t4063;
  t4029 = 0.994522*t2317;
  t4030 = 0.010866249592949247*t256;
  t4032 = t4029 + t4030;
  t3909 = -0.104528*t1249;
  t3985 = 0.994522*t1325;
  t4006 = 0. + t3909 + t3985;
  t4095 = t1998*t4076;
  t4123 = -1.*t4032*t2655;
  t4132 = 0. + t4095 + t4123;
  t4044 = t1998*t4032;
  t4083 = t4076*t2655;
  t4093 = 0. + t4044 + t4083;
  t36 = -4.610340000044122e-7*var2[25];
  t1410 = 0. + t991 + t1264 + t1390;
  t1447 = var2[24]*t1410;
  t1894 = var2[5]*t1854;
  t3112 = t1921*t3058;
  t3233 = -1.*t3222*t3229;
  t3291 = 0. + t3112 + t3233;
  t3298 = var2[4]*t3291;
  t3340 = -1.*t1854*t3333;
  t3380 = t1921*t3222;
  t3387 = t3058*t3229;
  t3392 = 0. + t3380 + t3387;
  t3398 = t3341*t3392;
  t3404 = 0. + t3340 + t3398;
  t3411 = var2[3]*t3404;
  t3420 = t36 + t1447 + t1894 + t3298 + t3411;
  t3436 = 4.610340000044122e-7*var2[25];
  t3470 = var2[5]*t3437;
  t3480 = 0. + t991 + t1569 + t1665;
  t3494 = var2[24]*t3480;
  t3628 = t1921*t3623;
  t3695 = -1.*t3668*t3229;
  t3703 = 0. + t3628 + t3695;
  t3722 = var2[4]*t3703;
  t3756 = -1.*t3437*t3333;
  t3785 = t1921*t3668;
  t3786 = t3623*t3229;
  t3796 = 0. + t3785 + t3786;
  t3799 = t3341*t3796;
  t3805 = 0. + t3756 + t3799;
  t3808 = var2[3]*t3805;
  t3811 = t3436 + t3470 + t3494 + t3722 + t3808;
  t3820 = -1.0000001112680001*var2[25];
  t3822 = 0.104528*t1249;
  t3824 = -0.994522*t1325;
  t3825 = 0. + t3822 + t3824;
  t3895 = var2[24]*t3825;
  t4018 = var2[5]*t4006;
  t4094 = t1921*t4093;
  t4159 = -1.*t4132*t3229;
  t4163 = 0. + t4094 + t4159;
  t4190 = var2[4]*t4163;
  t4214 = -1.*t4006*t3333;
  t4224 = t1921*t4132;
  t4229 = t4093*t3229;
  t4250 = 0. + t4224 + t4229;
  t4258 = t3341*t4250;
  t4265 = 0. + t4214 + t4258;
  t4280 = var2[3]*t4265;
  t4284 = t3820 + t3895 + t4018 + t4190 + t4280;
  p_output1[0]=0.00676*t3420 + 0.00001*t3811;
  p_output1[1]=0.00001*t3420 + 0.00209*t3811 + 0.00205*t4284;
  p_output1[2]=0.00205*t3811 + 0.00578*t4284;
}



void AMBody_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

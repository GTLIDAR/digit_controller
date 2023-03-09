/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_shoulder_pitch_src.h"

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
  double t1671;
  double t435;
  double t467;
  double t923;
  double t979;
  double t1015;
  double t1932;
  double t1935;
  double t2197;
  double t2219;
  double t2995;
  double t2797;
  double t2832;
  double t2838;
  double t2891;
  double t2923;
  double t2925;
  double t2939;
  double t2971;
  double t2789;
  double t3007;
  double t3016;
  double t3147;
  double t3158;
  double t3221;
  double t3233;
  double t3249;
  double t3349;
  double t2455;
  double t2458;
  double t2476;
  double t2493;
  double t2734;
  double t3458;
  double t3459;
  double t3529;
  double t2973;
  double t3357;
  double t3381;
  double t3535;
  double t181;
  double t2078;
  double t2305;
  double t1667;
  double t3831;
  double t3832;
  double t3861;
  double t3874;
  double t3803;
  double t3578;
  double t3620;
  double t3921;
  double t3922;
  double t3934;
  double t3855;
  double t3877;
  double t3893;
  double t4384;
  double t4389;
  double t4390;
  double t4368;
  double t4369;
  double t4375;
  double t4191;
  double t4315;
  double t4319;
  double t4422;
  double t4427;
  double t4433;
  double t4381;
  double t4405;
  double t4408;
  double t2325;
  double t2448;
  double t2647;
  double t3422;
  double t3537;
  double t3573;
  double t3576;
  double t3580;
  double t3637;
  double t3638;
  double t3643;
  double t3703;
  double t3710;
  double t3716;
  double t3722;
  double t3782;
  double t3785;
  double t3804;
  double t3914;
  double t3962;
  double t4020;
  double t4048;
  double t4060;
  double t4087;
  double t4103;
  double t4108;
  double t4153;
  double t4162;
  double t4170;
  double t4182;
  double t4190;
  double t4324;
  double t4338;
  double t4354;
  double t4362;
  double t4364;
  double t4418;
  double t4434;
  double t4436;
  double t4443;
  double t4450;
  double t4461;
  double t4467;
  double t4471;
  double t4473;
  double t4476;
  double t4480;
  double t4495;
  t1671 = Sin(var1[14]);
  t435 = Cos(var1[14]);
  t467 = -1.*t435;
  t923 = 1. + t467;
  t979 = -1.0000001112680001*t923;
  t1015 = 1. + t979;
  t1932 = -0.104528*t1671;
  t1935 = 0. + t1932;
  t2197 = 0.994522*t1671;
  t2219 = 0. + t2197;
  t2995 = Cos(var1[13]);
  t2797 = -0.9890740084840001*t923;
  t2832 = 1. + t2797;
  t2838 = 0.703234*t2832;
  t2891 = -0.007683655156165408*t923;
  t2923 = -0.994522*t1671;
  t2925 = 0. + t2923;
  t2939 = -0.707107*t2925;
  t2971 = t2838 + t2891 + t2939;
  t2789 = Sin(var1[13]);
  t3007 = -0.010926102783999999*t923;
  t3016 = 1. + t3007;
  t3147 = -0.073913*t3016;
  t3158 = 0.07310496868062215*t923;
  t3221 = 0.104528*t1671;
  t3233 = 0. + t3221;
  t3249 = -0.707107*t3233;
  t3349 = t3147 + t3158 + t3249;
  t2455 = -0.707107*t1015;
  t2458 = -0.073913*t1935;
  t2476 = 0.703234*t2219;
  t2493 = 0. + t2455 + t2458 + t2476;
  t2734 = Cos(var1[5]);
  t3458 = t2995*t2971;
  t3459 = -1.*t2789*t3349;
  t3529 = 0. + t3458 + t3459;
  t2973 = t2789*t2971;
  t3357 = t2995*t3349;
  t3381 = 0. + t2973 + t3357;
  t3535 = Sin(var1[5]);
  t181 = -4.610340000044122e-7*var2[14];
  t2078 = 0.073913*t1935;
  t2305 = -0.703234*t2219;
  t1667 = 0.707107*t1015;
  t3831 = 0.707107*t2925;
  t3832 = t2838 + t2891 + t3831;
  t3861 = 0.707107*t3233;
  t3874 = t3147 + t3158 + t3861;
  t3803 = 0. + t1667 + t2458 + t2476;
  t3578 = Sin(var1[4]);
  t3620 = Cos(var1[4]);
  t3921 = t2995*t3832;
  t3922 = -1.*t2789*t3874;
  t3934 = 0. + t3921 + t3922;
  t3855 = t2789*t3832;
  t3877 = t2995*t3874;
  t3893 = 0. + t3855 + t3877;
  t4384 = -0.104528*t2832;
  t4389 = -0.10338592795881554*t923;
  t4390 = t4384 + t4389;
  t4368 = -0.994522*t3016;
  t4369 = -0.010866249592949247*t923;
  t4375 = t4368 + t4369;
  t4191 = -0.994522*t1935;
  t4315 = -0.104528*t2219;
  t4319 = 0. + t4191 + t4315;
  t4422 = t2995*t4390;
  t4427 = -1.*t4375*t2789;
  t4433 = 0. + t4422 + t4427;
  t4381 = t2995*t4375;
  t4405 = t4390*t2789;
  t4408 = 0. + t4381 + t4405;
  t2325 = 0. + t1667 + t2078 + t2305;
  t2448 = var2[13]*t2325;
  t2647 = var2[5]*t2493;
  t3422 = t2734*t3381;
  t3537 = -1.*t3529*t3535;
  t3573 = 0. + t3422 + t3537;
  t3576 = var2[4]*t3573;
  t3580 = -1.*t2493*t3578;
  t3637 = t2734*t3529;
  t3638 = t3381*t3535;
  t3643 = 0. + t3637 + t3638;
  t3703 = t3620*t3643;
  t3710 = 0. + t3580 + t3703;
  t3716 = var2[3]*t3710;
  t3722 = t181 + t2448 + t2647 + t3576 + t3716;
  t3782 = 0. + t2455 + t2078 + t2305;
  t3785 = var2[13]*t3782;
  t3804 = var2[5]*t3803;
  t3914 = t2734*t3893;
  t3962 = -1.*t3934*t3535;
  t4020 = 0. + t3914 + t3962;
  t4048 = var2[4]*t4020;
  t4060 = -1.*t3803*t3578;
  t4087 = t2734*t3934;
  t4103 = t3893*t3535;
  t4108 = 0. + t4087 + t4103;
  t4153 = t3620*t4108;
  t4162 = 0. + t4060 + t4153;
  t4170 = var2[3]*t4162;
  t4182 = t181 + t3785 + t3804 + t4048 + t4170;
  t4190 = -1.0000001112680001*var2[14];
  t4324 = var2[5]*t4319;
  t4338 = 0.994522*t1935;
  t4354 = 0.104528*t2219;
  t4362 = 0. + t4338 + t4354;
  t4364 = var2[13]*t4362;
  t4418 = t2734*t4408;
  t4434 = -1.*t4433*t3535;
  t4436 = 0. + t4418 + t4434;
  t4443 = var2[4]*t4436;
  t4450 = -1.*t4319*t3578;
  t4461 = t2734*t4433;
  t4467 = t4408*t3535;
  t4471 = 0. + t4461 + t4467;
  t4473 = t3620*t4471;
  t4476 = 0. + t4450 + t4473;
  t4480 = var2[3]*t4476;
  t4495 = t4190 + t4324 + t4364 + t4443 + t4480;
  p_output1[0]=-0.00001*t3722 + 0.00676*t4182;
  p_output1[1]=0.00209*t3722 - 0.00001*t4182 - 0.00205*t4495;
  p_output1[2]=-0.00205*t3722 + 0.00578*t4495;
}



void AMBody_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

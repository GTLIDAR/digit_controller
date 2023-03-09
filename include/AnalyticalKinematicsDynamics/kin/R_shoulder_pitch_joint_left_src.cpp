/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shoulder_pitch_joint_left_src.h"

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
  double t319;
  double t1498;
  double t1553;
  double t1500;
  double t1854;
  double t1325;
  double t1338;
  double t1400;
  double t1907;
  double t1505;
  double t1864;
  double t1870;
  double t1495;
  double t1919;
  double t1928;
  double t1944;
  double t573;
  double t656;
  double t1894;
  double t2022;
  double t2029;
  double t2168;
  double t2181;
  double t2198;
  double t759;
  double t1193;
  double t2115;
  double t2164;
  double t2706;
  double t2732;
  double t2749;
  double t2795;
  double t2804;
  double t2892;
  double t2253;
  double t2282;
  double t2303;
  double t2334;
  double t2762;
  double t2893;
  double t2919;
  double t2995;
  double t3010;
  double t3023;
  double t2470;
  double t2497;
  double t2551;
  double t2566;
  double t2592;
  double t2618;
  double t3325;
  double t3334;
  double t3349;
  double t3370;
  double t3385;
  double t3403;
  double t1232;
  double t2045;
  double t2201;
  double t2203;
  double t2210;
  double t2292;
  double t2433;
  double t2435;
  double t2441;
  double t2467;
  double t2549;
  double t2585;
  double t2638;
  double t2664;
  double t2705;
  double t2925;
  double t3055;
  double t3068;
  double t3069;
  double t3112;
  double t3116;
  double t3117;
  double t3118;
  double t3141;
  double t3156;
  double t3221;
  double t3263;
  double t3288;
  double t3319;
  double t3350;
  double t3404;
  double t3407;
  double t3411;
  double t3412;
  double t3436;
  double t3442;
  double t3453;
  double t3459;
  double t3462;
  double t3465;
  double t3470;
  double t3471;
  t319 = Cos(var1[3]);
  t1498 = Cos(var1[5]);
  t1553 = Sin(var1[3]);
  t1500 = Sin(var1[4]);
  t1854 = Sin(var1[5]);
  t1325 = Cos(var1[14]);
  t1338 = -1.*t1325;
  t1400 = 1. + t1338;
  t1907 = Cos(var1[13]);
  t1505 = t319*t1498*t1500;
  t1864 = t1553*t1854;
  t1870 = t1505 + t1864;
  t1495 = Sin(var1[13]);
  t1919 = -1.*t1498*t1553;
  t1928 = t319*t1500*t1854;
  t1944 = t1919 + t1928;
  t573 = Cos(var1[4]);
  t656 = Sin(var1[14]);
  t1894 = -1.*t1495*t1870;
  t2022 = t1907*t1944;
  t2029 = t1894 + t2022;
  t2168 = t1907*t1870;
  t2181 = t1495*t1944;
  t2198 = t2168 + t2181;
  t759 = 0.994522*t656;
  t1193 = 0. + t759;
  t2115 = -0.9890740084840001*t1400;
  t2164 = 1. + t2115;
  t2706 = t1498*t1553*t1500;
  t2732 = -1.*t319*t1854;
  t2749 = t2706 + t2732;
  t2795 = t319*t1498;
  t2804 = t1553*t1500*t1854;
  t2892 = t2795 + t2804;
  t2253 = -0.104528*t656;
  t2282 = 0. + t2253;
  t2303 = -0.010926102783999999*t1400;
  t2334 = 1. + t2303;
  t2762 = -1.*t1495*t2749;
  t2893 = t1907*t2892;
  t2919 = t2762 + t2893;
  t2995 = t1907*t2749;
  t3010 = t1495*t2892;
  t3023 = t2995 + t3010;
  t2470 = -1.0000001112680001*t1400;
  t2497 = 1. + t2470;
  t2551 = 0.104528*t656;
  t2566 = 0. + t2551;
  t2592 = -0.994522*t656;
  t2618 = 0. + t2592;
  t3325 = -1.*t573*t1498*t1495;
  t3334 = t1907*t573*t1854;
  t3349 = t3325 + t3334;
  t3370 = t1907*t573*t1498;
  t3385 = t573*t1495*t1854;
  t3403 = t3370 + t3385;
  t1232 = t319*t573*t1193;
  t2045 = 0.103955395616*t1400*t2029;
  t2201 = t2164*t2198;
  t2203 = t1232 + t2045 + t2201;
  t2210 = 0.703234*t2203;
  t2292 = t319*t573*t2282;
  t2433 = t2334*t2029;
  t2435 = 0.103955395616*t1400*t2198;
  t2441 = t2292 + t2433 + t2435;
  t2467 = -0.073913*t2441;
  t2549 = t2497*t319*t573;
  t2585 = t2566*t2029;
  t2638 = t2618*t2198;
  t2664 = t2549 + t2585 + t2638;
  t2705 = t573*t1193*t1553;
  t2925 = 0.103955395616*t1400*t2919;
  t3055 = t2164*t3023;
  t3068 = t2705 + t2925 + t3055;
  t3069 = 0.703234*t3068;
  t3112 = t573*t2282*t1553;
  t3116 = t2334*t2919;
  t3117 = 0.103955395616*t1400*t3023;
  t3118 = t3112 + t3116 + t3117;
  t3141 = -0.073913*t3118;
  t3156 = t2497*t573*t1553;
  t3221 = t2566*t2919;
  t3263 = t2618*t3023;
  t3288 = t3156 + t3221 + t3263;
  t3319 = -1.*t1193*t1500;
  t3350 = 0.103955395616*t1400*t3349;
  t3404 = t2164*t3403;
  t3407 = t3319 + t3350 + t3404;
  t3411 = 0.703234*t3407;
  t3412 = -1.*t2282*t1500;
  t3436 = t2334*t3349;
  t3442 = 0.103955395616*t1400*t3403;
  t3453 = t3412 + t3436 + t3442;
  t3459 = -0.073913*t3453;
  t3462 = -1.*t2497*t1500;
  t3465 = t2566*t3349;
  t3470 = t2618*t3403;
  t3471 = t3462 + t3465 + t3470;
  p_output1[0]=t2210 + t2467 + 0.707107*t2664;
  p_output1[1]=t3069 + t3141 + 0.707107*t3288;
  p_output1[2]=t3411 + t3459 + 0.707107*t3471;
  p_output1[3]=t2210 + t2467 - 0.707107*t2664;
  p_output1[4]=t3069 + t3141 - 0.707107*t3288;
  p_output1[5]=t3411 + t3459 - 0.707107*t3471;
  p_output1[6]=-0.104528*t2203 - 0.994522*t2441;
  p_output1[7]=-0.104528*t3068 - 0.994522*t3118;
  p_output1[8]=-0.104528*t3407 - 0.994522*t3453;
}



void R_shoulder_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

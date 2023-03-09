/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_shoulder_yaw_src.h"

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
  double t771;
  double t1741;
  double t1808;
  double t1744;
  double t1876;
  double t1592;
  double t1596;
  double t1659;
  double t1934;
  double t1757;
  double t1890;
  double t1901;
  double t1671;
  double t1943;
  double t1949;
  double t1999;
  double t273;
  double t376;
  double t394;
  double t541;
  double t1183;
  double t1384;
  double t1913;
  double t2091;
  double t2108;
  double t2164;
  double t2193;
  double t2194;
  double t1482;
  double t1500;
  double t1548;
  double t2113;
  double t2118;
  double t2155;
  double t2220;
  double t2231;
  double t2396;
  double t2434;
  double t2443;
  double t2453;
  double t2457;
  double t2463;
  double t2475;
  double t2495;
  double t395;
  double t2619;
  double t2632;
  double t2639;
  double t2665;
  double t2671;
  double t2674;
  double t2676;
  double t2685;
  double t2703;
  double t2716;
  double t2825;
  double t2332;
  double t565;
  double t619;
  double t3155;
  double t3179;
  double t3182;
  double t3195;
  double t3200;
  double t3205;
  double t2343;
  double t2349;
  double t3188;
  double t3207;
  double t3213;
  double t3232;
  double t3235;
  double t3237;
  double t2557;
  double t2573;
  double t2753;
  double t2777;
  double t3152;
  double t3229;
  double t3242;
  double t3244;
  double t2847;
  double t2871;
  double t3274;
  double t3277;
  double t3309;
  double t3319;
  double t2884;
  double t2885;
  double t3337;
  double t3342;
  double t3343;
  double t3347;
  double t2906;
  double t2907;
  double t3012;
  double t3035;
  double t3059;
  double t3105;
  double t3476;
  double t3483;
  double t3484;
  double t3496;
  double t3497;
  double t3501;
  double t3472;
  double t3494;
  double t3503;
  double t3524;
  double t3530;
  double t3540;
  double t3545;
  double t3559;
  double t3571;
  double t3575;
  double t3589;
  double t3591;
  double t2787;
  double t2878;
  double t2896;
  double t2901;
  double t2936;
  double t3047;
  double t3110;
  double t3121;
  double t3411;
  double t3412;
  double t3422;
  double t3424;
  double t3432;
  double t3437;
  double t3439;
  double t3454;
  double t3612;
  double t3623;
  double t3627;
  double t3630;
  double t3640;
  double t3644;
  double t3648;
  double t3652;
  double t2283;
  double t2497;
  double t2723;
  double t2724;
  double t2750;
  double t3272;
  double t3335;
  double t3362;
  double t3391;
  double t3394;
  double t3525;
  double t3563;
  double t3592;
  double t3595;
  double t3601;
  t771 = Cos(var1[3]);
  t1741 = Cos(var1[5]);
  t1808 = Sin(var1[3]);
  t1744 = Sin(var1[4]);
  t1876 = Sin(var1[5]);
  t1592 = Cos(var1[14]);
  t1596 = -1.*t1592;
  t1659 = 1. + t1596;
  t1934 = Cos(var1[13]);
  t1757 = t771*t1741*t1744;
  t1890 = t1808*t1876;
  t1901 = t1757 + t1890;
  t1671 = Sin(var1[13]);
  t1943 = -1.*t1741*t1808;
  t1949 = t771*t1744*t1876;
  t1999 = t1943 + t1949;
  t273 = Cos(var1[15]);
  t376 = -1.*t273;
  t394 = 1. + t376;
  t541 = Sin(var1[15]);
  t1183 = Cos(var1[4]);
  t1384 = Sin(var1[14]);
  t1913 = -1.*t1671*t1901;
  t2091 = t1934*t1999;
  t2108 = t1913 + t2091;
  t2164 = t1934*t1901;
  t2193 = t1671*t1999;
  t2194 = t2164 + t2193;
  t1482 = 0.994522*t1384;
  t1500 = 0. + t1482;
  t1548 = t771*t1183*t1500;
  t2113 = 0.103955395616*t1659*t2108;
  t2118 = -0.9890740084840001*t1659;
  t2155 = 1. + t2118;
  t2220 = t2155*t2194;
  t2231 = t1548 + t2113 + t2220;
  t2396 = -0.104528*t1384;
  t2434 = 0. + t2396;
  t2443 = t771*t1183*t2434;
  t2453 = -0.010926102783999999*t1659;
  t2457 = 1. + t2453;
  t2463 = t2457*t2108;
  t2475 = 0.103955395616*t1659*t2194;
  t2495 = t2443 + t2463 + t2475;
  t395 = -0.49726168403800003*t394;
  t2619 = -1.0000001112680001*t1659;
  t2632 = 1. + t2619;
  t2639 = t2632*t771*t1183;
  t2665 = 0.104528*t1384;
  t2671 = 0. + t2665;
  t2674 = t2671*t2108;
  t2676 = -0.994522*t1384;
  t2685 = 0. + t2676;
  t2703 = t2685*t2194;
  t2716 = t2639 + t2674 + t2703;
  t2825 = -0.051978134642000004*t394;
  t2332 = 0.05226439969100001*t394;
  t565 = -0.073913*t541;
  t619 = t395 + t565;
  t3155 = t1741*t1808*t1744;
  t3179 = -1.*t771*t1876;
  t3182 = t3155 + t3179;
  t3195 = t771*t1741;
  t3200 = t1808*t1744*t1876;
  t3205 = t3195 + t3200;
  t2343 = -0.703234*t541;
  t2349 = t2332 + t2343;
  t3188 = -1.*t1671*t3182;
  t3207 = t1934*t3205;
  t3213 = t3188 + t3207;
  t3232 = t1934*t3182;
  t3235 = t1671*t3205;
  t3237 = t3232 + t3235;
  t2557 = -0.500001190325*t394;
  t2573 = 1. + t2557;
  t2753 = -0.5054634410180001*t394;
  t2777 = 1. + t2753;
  t3152 = t1183*t1500*t1808;
  t3229 = 0.103955395616*t1659*t3213;
  t3242 = t2155*t3237;
  t3244 = t3152 + t3229 + t3242;
  t2847 = -0.707107*t541;
  t2871 = t2825 + t2847;
  t3274 = t1183*t2434*t1808;
  t3277 = t2457*t3213;
  t3309 = 0.103955395616*t1659*t3237;
  t3319 = t3274 + t3277 + t3309;
  t2884 = 0.073913*t541;
  t2885 = t395 + t2884;
  t3337 = t2632*t1183*t1808;
  t3342 = t2671*t3213;
  t3343 = t2685*t3237;
  t3347 = t3337 + t3342 + t3343;
  t2906 = 0.707107*t541;
  t2907 = t2825 + t2906;
  t3012 = -0.9945383682050002*t394;
  t3035 = 1. + t3012;
  t3059 = 0.703234*t541;
  t3105 = t2332 + t3059;
  t3476 = -1.*t1183*t1741*t1671;
  t3483 = t1934*t1183*t1876;
  t3484 = t3476 + t3483;
  t3496 = t1934*t1183*t1741;
  t3497 = t1183*t1671*t1876;
  t3501 = t3496 + t3497;
  t3472 = -1.*t1500*t1744;
  t3494 = 0.103955395616*t1659*t3484;
  t3503 = t2155*t3501;
  t3524 = t3472 + t3494 + t3503;
  t3530 = -1.*t2434*t1744;
  t3540 = t2457*t3484;
  t3545 = 0.103955395616*t1659*t3501;
  t3559 = t3530 + t3540 + t3545;
  t3571 = -1.*t2632*t1744;
  t3575 = t2671*t3484;
  t3589 = t2685*t3501;
  t3591 = t3571 + t3575 + t3589;
  t2787 = t2777*t2231;
  t2878 = t2871*t2495;
  t2896 = t2885*t2716;
  t2901 = t2787 + t2878 + t2896;
  t2936 = t2907*t2231;
  t3047 = t3035*t2495;
  t3110 = t3105*t2716;
  t3121 = t2936 + t3047 + t3110;
  t3411 = t2777*t3244;
  t3412 = t2871*t3319;
  t3422 = t2885*t3347;
  t3424 = t3411 + t3412 + t3422;
  t3432 = t2907*t3244;
  t3437 = t3035*t3319;
  t3439 = t3105*t3347;
  t3454 = t3432 + t3437 + t3439;
  t3612 = t2777*t3524;
  t3623 = t2871*t3559;
  t3627 = t2885*t3591;
  t3630 = t3612 + t3623 + t3627;
  t3640 = t2907*t3524;
  t3644 = t3035*t3559;
  t3648 = t3105*t3591;
  t3652 = t3640 + t3644 + t3648;
  t2283 = t619*t2231;
  t2497 = t2349*t2495;
  t2723 = t2573*t2716;
  t2724 = t2283 + t2497 + t2723;
  t2750 = 0.707107*t2724;
  t3272 = t619*t3244;
  t3335 = t2349*t3319;
  t3362 = t2573*t3347;
  t3391 = t3272 + t3335 + t3362;
  t3394 = 0.707107*t3391;
  t3525 = t619*t3524;
  t3563 = t2349*t3559;
  t3592 = t2573*t3591;
  t3595 = t3525 + t3563 + t3592;
  t3601 = 0.707107*t3595;
  p_output1[0]=t2750 + 0.703234*t2901 - 0.073913*t3121;
  p_output1[1]=t3394 + 0.703234*t3424 - 0.073913*t3454;
  p_output1[2]=t3601 + 0.703234*t3630 - 0.073913*t3652;
  p_output1[3]=-0.104528*t2901 - 0.994522*t3121;
  p_output1[4]=-0.104528*t3424 - 0.994522*t3454;
  p_output1[5]=-0.104528*t3630 - 0.994522*t3652;
  p_output1[6]=t2750 - 0.703234*t2901 + 0.073913*t3121;
  p_output1[7]=t3394 - 0.703234*t3424 + 0.073913*t3454;
  p_output1[8]=t3601 - 0.703234*t3630 + 0.073913*t3652;
}



void R_left_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

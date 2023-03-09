/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t1127;
  double t1087;
  double t1198;
  double t1109;
  double t1352;
  double t980;
  double t1019;
  double t1053;
  double t1071;
  double t1637;
  double t1661;
  double t1692;
  double t1111;
  double t1488;
  double t1572;
  double t1728;
  double t908;
  double t909;
  double t911;
  double t1601;
  double t1765;
  double t1800;
  double t1853;
  double t1867;
  double t1894;
  double t1954;
  double t1963;
  double t2263;
  double t2273;
  double t2277;
  double t2313;
  double t2337;
  double t2345;
  double t2350;
  double t2354;
  double t2365;
  double t2376;
  double t1801;
  double t1803;
  double t1839;
  double t1895;
  double t1978;
  double t2009;
  double t2010;
  double t2059;
  double t2379;
  double t2102;
  double t2108;
  double t2164;
  double t2181;
  double t2193;
  double t2199;
  double t2216;
  double t2238;
  double t647;
  double t790;
  double t806;
  double t2076;
  double t2080;
  double t2081;
  double t2261;
  double t2420;
  double t2426;
  double t2518;
  double t2525;
  double t2529;
  double t2545;
  double t2550;
  double t2644;
  double t2691;
  double t2706;
  double t2709;
  double t2721;
  double t2762;
  double t2775;
  double t2780;
  double t2801;
  double t2804;
  double t2853;
  double t2884;
  double t2896;
  double t2905;
  double t2915;
  double t2920;
  double t3113;
  double t3114;
  double t3124;
  double t3089;
  double t3096;
  double t3104;
  double t3106;
  double t3132;
  double t3138;
  double t3148;
  double t3152;
  double t3165;
  double t2531;
  double t2541;
  double t3222;
  double t3233;
  double t3238;
  double t3239;
  double t3142;
  double t3166;
  double t3185;
  double t3189;
  double t3198;
  double t3204;
  double t3209;
  double t3212;
  double t2783;
  double t2794;
  double t2939;
  double t2948;
  double t3192;
  double t3213;
  double t3242;
  double t3247;
  double t2979;
  double t2994;
  double t3254;
  double t3263;
  double t3264;
  double t3268;
  double t3281;
  double t3288;
  double t3290;
  double t3295;
  double t3021;
  double t3022;
  double t3025;
  double t3026;
  double t3034;
  double t3036;
  double t3398;
  double t3405;
  double t3417;
  double t3428;
  double t3441;
  double t3451;
  double t3509;
  double t3510;
  double t3512;
  double t3515;
  double t3422;
  double t3452;
  double t3464;
  double t3465;
  double t3490;
  double t3496;
  double t3498;
  double t3503;
  double t3472;
  double t3508;
  double t3523;
  double t3546;
  double t3560;
  double t3567;
  double t3569;
  double t3571;
  double t3575;
  double t3584;
  double t3588;
  double t3589;
  double t2528;
  double t2782;
  double t2921;
  double t2924;
  double t2937;
  double t2951;
  double t3011;
  double t3016;
  double t3018;
  double t3020;
  double t3023;
  double t3029;
  double t3043;
  double t3047;
  double t3252;
  double t3272;
  double t3312;
  double t3332;
  double t3334;
  double t3336;
  double t3339;
  double t3342;
  double t3359;
  double t3363;
  double t3368;
  double t3370;
  double t3379;
  double t3381;
  double t3557;
  double t3572;
  double t3590;
  double t3593;
  double t3608;
  double t3617;
  double t3620;
  double t3627;
  double t3628;
  double t3630;
  double t3632;
  double t3639;
  double t3646;
  double t3647;
  t1127 = Cos(var1[3]);
  t1087 = Cos(var1[5]);
  t1198 = Sin(var1[4]);
  t1109 = Sin(var1[3]);
  t1352 = Sin(var1[5]);
  t980 = Cos(var1[7]);
  t1019 = -1.*t980;
  t1053 = 1. + t1019;
  t1071 = Cos(var1[6]);
  t1637 = t1127*t1087*t1198;
  t1661 = t1109*t1352;
  t1692 = t1637 + t1661;
  t1111 = -1.*t1087*t1109;
  t1488 = t1127*t1198*t1352;
  t1572 = t1111 + t1488;
  t1728 = Sin(var1[6]);
  t908 = Cos(var1[8]);
  t909 = -1.*t908;
  t911 = 1. + t909;
  t1601 = t1071*t1572;
  t1765 = -1.*t1692*t1728;
  t1800 = t1601 + t1765;
  t1853 = t1071*t1692;
  t1867 = t1572*t1728;
  t1894 = t1853 + t1867;
  t1954 = Cos(var1[4]);
  t1963 = Sin(var1[7]);
  t2263 = -1.000000637725*t1053;
  t2273 = 1. + t2263;
  t2277 = t1127*t1954*t2273;
  t2313 = -0.930418*t1963;
  t2337 = 0. + t2313;
  t2345 = t1800*t2337;
  t2350 = -0.366501*t1963;
  t2354 = 0. + t2350;
  t2365 = t1894*t2354;
  t2376 = t2277 + t2345 + t2365;
  t1801 = -0.340999127418*t1053*t1800;
  t1803 = -0.134322983001*t1053;
  t1839 = 1. + t1803;
  t1895 = t1839*t1894;
  t1978 = 0.366501*t1963;
  t2009 = 0. + t1978;
  t2010 = t1127*t1954*t2009;
  t2059 = t1801 + t1895 + t2010;
  t2379 = Sin(var1[8]);
  t2102 = -0.8656776547239999*t1053;
  t2108 = 1. + t2102;
  t2164 = t2108*t1800;
  t2181 = -0.340999127418*t1053*t1894;
  t2193 = 0.930418*t1963;
  t2199 = 0. + t2193;
  t2216 = t1127*t1954*t2199;
  t2238 = t2164 + t2181 + t2216;
  t647 = Cos(var1[9]);
  t790 = -1.*t647;
  t806 = 1. + t790;
  t2076 = 0.340999127418*t911*t2059;
  t2080 = -0.134322983001*t911;
  t2081 = 1. + t2080;
  t2261 = t2081*t2238;
  t2420 = -0.366501*t2379;
  t2426 = 0. + t2420;
  t2518 = t2376*t2426;
  t2525 = t2076 + t2261 + t2518;
  t2529 = Sin(var1[9]);
  t2545 = -1.000000637725*t911;
  t2550 = 1. + t2545;
  t2644 = t2550*t2376;
  t2691 = -0.930418*t2379;
  t2706 = 0. + t2691;
  t2709 = t2059*t2706;
  t2721 = 0.366501*t2379;
  t2762 = 0. + t2721;
  t2775 = t2238*t2762;
  t2780 = t2644 + t2709 + t2775;
  t2801 = -0.8656776547239999*t911;
  t2804 = 1. + t2801;
  t2853 = t2804*t2059;
  t2884 = 0.340999127418*t911*t2238;
  t2896 = 0.930418*t2379;
  t2905 = 0. + t2896;
  t2915 = t2376*t2905;
  t2920 = t2853 + t2884 + t2915;
  t3113 = t1087*t1109*t1198;
  t3114 = -1.*t1127*t1352;
  t3124 = t3113 + t3114;
  t3089 = t1127*t1087;
  t3096 = t1109*t1198*t1352;
  t3104 = t3089 + t3096;
  t3106 = t1071*t3104;
  t3132 = -1.*t3124*t1728;
  t3138 = t3106 + t3132;
  t3148 = t1071*t3124;
  t3152 = t3104*t1728;
  t3165 = t3148 + t3152;
  t2531 = -0.930418*t2529;
  t2541 = 0. + t2531;
  t3222 = t1954*t2273*t1109;
  t3233 = t3138*t2337;
  t3238 = t3165*t2354;
  t3239 = t3222 + t3233 + t3238;
  t3142 = -0.340999127418*t1053*t3138;
  t3166 = t1839*t3165;
  t3185 = t1954*t1109*t2009;
  t3189 = t3142 + t3166 + t3185;
  t3198 = t2108*t3138;
  t3204 = -0.340999127418*t1053*t3165;
  t3209 = t1954*t1109*t2199;
  t3212 = t3198 + t3204 + t3209;
  t2783 = -0.8656776547239999*t806;
  t2794 = 1. + t2783;
  t2939 = -0.134322983001*t806;
  t2948 = 1. + t2939;
  t3192 = 0.340999127418*t911*t3189;
  t3213 = t2081*t3212;
  t3242 = t3239*t2426;
  t3247 = t3192 + t3213 + t3242;
  t2979 = 0.366501*t2529;
  t2994 = 0. + t2979;
  t3254 = t2550*t3239;
  t3263 = t3189*t2706;
  t3264 = t3212*t2762;
  t3268 = t3254 + t3263 + t3264;
  t3281 = t2804*t3189;
  t3288 = 0.340999127418*t911*t3212;
  t3290 = t3239*t2905;
  t3295 = t3281 + t3288 + t3290;
  t3021 = -0.366501*t2529;
  t3022 = 0. + t3021;
  t3025 = -1.000000637725*t806;
  t3026 = 1. + t3025;
  t3034 = 0.930418*t2529;
  t3036 = 0. + t3034;
  t3398 = t1954*t1071*t1352;
  t3405 = -1.*t1954*t1087*t1728;
  t3417 = t3398 + t3405;
  t3428 = t1954*t1087*t1071;
  t3441 = t1954*t1352*t1728;
  t3451 = t3428 + t3441;
  t3509 = -1.*t2273*t1198;
  t3510 = t3417*t2337;
  t3512 = t3451*t2354;
  t3515 = t3509 + t3510 + t3512;
  t3422 = -0.340999127418*t1053*t3417;
  t3452 = t1839*t3451;
  t3464 = -1.*t1198*t2009;
  t3465 = t3422 + t3452 + t3464;
  t3490 = t2108*t3417;
  t3496 = -0.340999127418*t1053*t3451;
  t3498 = -1.*t1198*t2199;
  t3503 = t3490 + t3496 + t3498;
  t3472 = 0.340999127418*t911*t3465;
  t3508 = t2081*t3503;
  t3523 = t3515*t2426;
  t3546 = t3472 + t3508 + t3523;
  t3560 = t2550*t3515;
  t3567 = t3465*t2706;
  t3569 = t3503*t2762;
  t3571 = t3560 + t3567 + t3569;
  t3575 = t2804*t3465;
  t3584 = 0.340999127418*t911*t3503;
  t3588 = t3515*t2905;
  t3589 = t3575 + t3584 + t3588;
  t2528 = 0.340999127418*t806*t2525;
  t2782 = t2541*t2780;
  t2921 = t2794*t2920;
  t2924 = t2528 + t2782 + t2921;
  t2937 = -0.657905*t2924;
  t2951 = t2948*t2525;
  t3011 = t2994*t2780;
  t3016 = 0.340999127418*t806*t2920;
  t3018 = t2951 + t3011 + t3016;
  t3020 = 0.259155*t3018;
  t3023 = t3022*t2525;
  t3029 = t3026*t2780;
  t3043 = t3036*t2920;
  t3047 = t3023 + t3029 + t3043;
  t3252 = 0.340999127418*t806*t3247;
  t3272 = t2541*t3268;
  t3312 = t2794*t3295;
  t3332 = t3252 + t3272 + t3312;
  t3334 = -0.657905*t3332;
  t3336 = t2948*t3247;
  t3339 = t2994*t3268;
  t3342 = 0.340999127418*t806*t3295;
  t3359 = t3336 + t3339 + t3342;
  t3363 = 0.259155*t3359;
  t3368 = t3022*t3247;
  t3370 = t3026*t3268;
  t3379 = t3036*t3295;
  t3381 = t3368 + t3370 + t3379;
  t3557 = 0.340999127418*t806*t3546;
  t3572 = t2541*t3571;
  t3590 = t2794*t3589;
  t3593 = t3557 + t3572 + t3590;
  t3608 = -0.657905*t3593;
  t3617 = t2948*t3546;
  t3620 = t2994*t3571;
  t3627 = 0.340999127418*t806*t3589;
  t3628 = t3617 + t3620 + t3627;
  t3630 = 0.259155*t3628;
  t3632 = t3022*t3546;
  t3639 = t3026*t3571;
  t3646 = t3036*t3589;
  t3647 = t3632 + t3639 + t3646;
  p_output1[0]=t2937 + t3020 - 0.707107*t3047;
  p_output1[1]=t3334 + t3363 - 0.707107*t3381;
  p_output1[2]=t3608 + t3630 - 0.707107*t3647;
  p_output1[3]=t2937 + t3020 + 0.707107*t3047;
  p_output1[4]=t3334 + t3363 + 0.707107*t3381;
  p_output1[5]=t3608 + t3630 + 0.707107*t3647;
  p_output1[6]=-0.366501*t2924 - 0.930418*t3018;
  p_output1[7]=-0.366501*t3332 - 0.930418*t3359;
  p_output1[8]=-0.366501*t3593 - 0.930418*t3628;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

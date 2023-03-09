/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_hip_pitch_src.h"

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
  double t290;
  double t1310;
  double t1402;
  double t1376;
  double t1419;
  double t957;
  double t975;
  double t1026;
  double t1528;
  double t1387;
  double t1432;
  double t1470;
  double t1063;
  double t1530;
  double t1538;
  double t1544;
  double t7;
  double t292;
  double t405;
  double t1479;
  double t1613;
  double t1662;
  double t1753;
  double t1824;
  double t1856;
  double t2392;
  double t2395;
  double t2396;
  double t460;
  double t659;
  double t855;
  double t1714;
  double t1716;
  double t1723;
  double t1875;
  double t2040;
  double t2234;
  double t2247;
  double t2268;
  double t2271;
  double t2273;
  double t2295;
  double t2300;
  double t2310;
  double t2424;
  double t2436;
  double t2465;
  double t2466;
  double t2474;
  double t2516;
  double t2535;
  double t2542;
  double t2582;
  double t2609;
  double t46;
  double t55;
  double t2921;
  double t2923;
  double t2925;
  double t2933;
  double t2940;
  double t2946;
  double t2204;
  double t2209;
  double t2926;
  double t2992;
  double t3004;
  double t3050;
  double t3072;
  double t3076;
  double t2419;
  double t2420;
  double t2665;
  double t2678;
  double t2897;
  double t3029;
  double t3105;
  double t3118;
  double t3124;
  double t3131;
  double t3133;
  double t3141;
  double t2736;
  double t2742;
  double t3146;
  double t3148;
  double t3161;
  double t3167;
  double t2770;
  double t2782;
  double t2797;
  double t2801;
  double t3258;
  double t3269;
  double t3279;
  double t3308;
  double t3330;
  double t3336;
  double t3243;
  double t3304;
  double t3338;
  double t3344;
  double t3364;
  double t3383;
  double t3392;
  double t3396;
  double t3416;
  double t3420;
  double t3421;
  double t3423;
  double t2168;
  double t2391;
  double t2611;
  double t2613;
  double t2704;
  double t2722;
  double t2744;
  double t2749;
  double t2759;
  double t2769;
  double t2787;
  double t2802;
  double t2827;
  double t2864;
  double t3120;
  double t3144;
  double t3170;
  double t3171;
  double t3177;
  double t3190;
  double t3191;
  double t3197;
  double t3205;
  double t3212;
  double t3213;
  double t3216;
  double t3222;
  double t3226;
  double t3358;
  double t3414;
  double t3426;
  double t3437;
  double t3440;
  double t3448;
  double t3467;
  double t3471;
  double t3479;
  double t3484;
  double t3490;
  double t3492;
  double t3499;
  double t3500;
  t290 = Cos(var1[3]);
  t1310 = Cos(var1[5]);
  t1402 = Sin(var1[3]);
  t1376 = Sin(var1[4]);
  t1419 = Sin(var1[5]);
  t957 = Cos(var1[18]);
  t975 = -1.*t957;
  t1026 = 1. + t975;
  t1528 = Cos(var1[17]);
  t1387 = t290*t1310*t1376;
  t1432 = t1402*t1419;
  t1470 = t1387 + t1432;
  t1063 = Sin(var1[17]);
  t1530 = -1.*t1310*t1402;
  t1538 = t290*t1376*t1419;
  t1544 = t1530 + t1538;
  t7 = Sin(var1[19]);
  t292 = Cos(var1[4]);
  t405 = Sin(var1[18]);
  t1479 = -1.*t1063*t1470;
  t1613 = t1528*t1544;
  t1662 = t1479 + t1613;
  t1753 = t1528*t1470;
  t1824 = t1063*t1544;
  t1856 = t1753 + t1824;
  t2392 = Cos(var1[19]);
  t2395 = -1.*t2392;
  t2396 = 1. + t2395;
  t460 = -0.366501*t405;
  t659 = 0. + t460;
  t855 = t290*t292*t659;
  t1714 = 0.340999127418*t1026*t1662;
  t1716 = -0.134322983001*t1026;
  t1723 = 1. + t1716;
  t1875 = t1723*t1856;
  t2040 = t855 + t1714 + t1875;
  t2234 = 0.930418*t405;
  t2247 = 0. + t2234;
  t2268 = t290*t292*t2247;
  t2271 = -0.8656776547239999*t1026;
  t2273 = 1. + t2271;
  t2295 = t2273*t1662;
  t2300 = 0.340999127418*t1026*t1856;
  t2310 = t2268 + t2295 + t2300;
  t2424 = -1.000000637725*t1026;
  t2436 = 1. + t2424;
  t2465 = t2436*t290*t292;
  t2466 = -0.930418*t405;
  t2474 = 0. + t2466;
  t2516 = t2474*t1662;
  t2535 = 0.366501*t405;
  t2542 = 0. + t2535;
  t2582 = t2542*t1856;
  t2609 = t2465 + t2516 + t2582;
  t46 = 0.930418*t7;
  t55 = 0. + t46;
  t2921 = t1310*t1402*t1376;
  t2923 = -1.*t290*t1419;
  t2925 = t2921 + t2923;
  t2933 = t290*t1310;
  t2940 = t1402*t1376*t1419;
  t2946 = t2933 + t2940;
  t2204 = 0.366501*t7;
  t2209 = 0. + t2204;
  t2926 = -1.*t1063*t2925;
  t2992 = t1528*t2946;
  t3004 = t2926 + t2992;
  t3050 = t1528*t2925;
  t3072 = t1063*t2946;
  t3076 = t3050 + t3072;
  t2419 = -1.000000637725*t2396;
  t2420 = 1. + t2419;
  t2665 = -0.8656776547239999*t2396;
  t2678 = 1. + t2665;
  t2897 = t292*t659*t1402;
  t3029 = 0.340999127418*t1026*t3004;
  t3105 = t1723*t3076;
  t3118 = t2897 + t3029 + t3105;
  t3124 = t292*t2247*t1402;
  t3131 = t2273*t3004;
  t3133 = 0.340999127418*t1026*t3076;
  t3141 = t3124 + t3131 + t3133;
  t2736 = -0.930418*t7;
  t2742 = 0. + t2736;
  t3146 = t2436*t292*t1402;
  t3148 = t2474*t3004;
  t3161 = t2542*t3076;
  t3167 = t3146 + t3148 + t3161;
  t2770 = -0.134322983001*t2396;
  t2782 = 1. + t2770;
  t2797 = -0.366501*t7;
  t2801 = 0. + t2797;
  t3258 = -1.*t292*t1310*t1063;
  t3269 = t1528*t292*t1419;
  t3279 = t3258 + t3269;
  t3308 = t1528*t292*t1310;
  t3330 = t292*t1063*t1419;
  t3336 = t3308 + t3330;
  t3243 = -1.*t659*t1376;
  t3304 = 0.340999127418*t1026*t3279;
  t3338 = t1723*t3336;
  t3344 = t3243 + t3304 + t3338;
  t3364 = -1.*t2247*t1376;
  t3383 = t2273*t3279;
  t3392 = 0.340999127418*t1026*t3336;
  t3396 = t3364 + t3383 + t3392;
  t3416 = -1.*t2436*t1376;
  t3420 = t2474*t3279;
  t3421 = t2542*t3336;
  t3423 = t3416 + t3420 + t3421;
  t2168 = t55*t2040;
  t2391 = t2209*t2310;
  t2611 = t2420*t2609;
  t2613 = t2168 + t2391 + t2611;
  t2704 = t2678*t2040;
  t2722 = -0.340999127418*t2396*t2310;
  t2744 = t2742*t2609;
  t2749 = t2704 + t2722 + t2744;
  t2759 = -0.657905*t2749;
  t2769 = -0.340999127418*t2396*t2040;
  t2787 = t2782*t2310;
  t2802 = t2801*t2609;
  t2827 = t2769 + t2787 + t2802;
  t2864 = -0.259155*t2827;
  t3120 = t55*t3118;
  t3144 = t2209*t3141;
  t3170 = t2420*t3167;
  t3171 = t3120 + t3144 + t3170;
  t3177 = t2678*t3118;
  t3190 = -0.340999127418*t2396*t3141;
  t3191 = t2742*t3167;
  t3197 = t3177 + t3190 + t3191;
  t3205 = -0.657905*t3197;
  t3212 = -0.340999127418*t2396*t3118;
  t3213 = t2782*t3141;
  t3216 = t2801*t3167;
  t3222 = t3212 + t3213 + t3216;
  t3226 = -0.259155*t3222;
  t3358 = t55*t3344;
  t3414 = t2209*t3396;
  t3426 = t2420*t3423;
  t3437 = t3358 + t3414 + t3426;
  t3440 = t2678*t3344;
  t3448 = -0.340999127418*t2396*t3396;
  t3467 = t2742*t3423;
  t3471 = t3440 + t3448 + t3467;
  t3479 = -0.657905*t3471;
  t3484 = -0.340999127418*t2396*t3344;
  t3490 = t2782*t3396;
  t3492 = t2801*t3423;
  t3499 = t3484 + t3490 + t3492;
  t3500 = -0.259155*t3499;
  p_output1[0]=0.707107*t2613 + t2759 + t2864;
  p_output1[1]=0.707107*t3171 + t3205 + t3226;
  p_output1[2]=0.707107*t3437 + t3479 + t3500;
  p_output1[3]=-0.707107*t2613 + t2759 + t2864;
  p_output1[4]=-0.707107*t3171 + t3205 + t3226;
  p_output1[5]=-0.707107*t3437 + t3479 + t3500;
  p_output1[6]=-0.366501*t2749 + 0.930418*t2827;
  p_output1[7]=-0.366501*t3197 + 0.930418*t3222;
  p_output1[8]=-0.366501*t3471 + 0.930418*t3499;
}



void R_right_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

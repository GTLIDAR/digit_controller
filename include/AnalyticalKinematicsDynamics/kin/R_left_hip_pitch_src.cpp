/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_hip_pitch_src.h"

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
  double t1600;
  double t1451;
  double t1663;
  double t1561;
  double t1684;
  double t1269;
  double t1296;
  double t1438;
  double t1443;
  double t1884;
  double t1927;
  double t1955;
  double t1585;
  double t1694;
  double t1754;
  double t1969;
  double t280;
  double t575;
  double t1267;
  double t1826;
  double t2066;
  double t2082;
  double t2170;
  double t2208;
  double t2279;
  double t2309;
  double t2327;
  double t2678;
  double t2695;
  double t2714;
  double t2815;
  double t2821;
  double t2826;
  double t2830;
  double t2853;
  double t2858;
  double t2870;
  double t2096;
  double t2154;
  double t2155;
  double t2297;
  double t2332;
  double t2374;
  double t2403;
  double t2431;
  double t2875;
  double t2475;
  double t2494;
  double t2558;
  double t2591;
  double t2605;
  double t2620;
  double t2636;
  double t2671;
  double t3305;
  double t3327;
  double t3335;
  double t3263;
  double t3275;
  double t3288;
  double t2442;
  double t2458;
  double t3295;
  double t3343;
  double t3345;
  double t3352;
  double t3361;
  double t3364;
  double t2915;
  double t2920;
  double t2987;
  double t3001;
  double t3439;
  double t3450;
  double t3453;
  double t3463;
  double t3347;
  double t3366;
  double t3383;
  double t3386;
  double t3018;
  double t3029;
  double t3400;
  double t3408;
  double t3418;
  double t3433;
  double t3058;
  double t3064;
  double t3099;
  double t3108;
  double t3141;
  double t3144;
  double t3569;
  double t3573;
  double t3574;
  double t3592;
  double t3593;
  double t3605;
  double t3652;
  double t3658;
  double t3667;
  double t3670;
  double t3584;
  double t3610;
  double t3611;
  double t3612;
  double t3614;
  double t3621;
  double t3623;
  double t3634;
  double t2434;
  double t2677;
  double t2933;
  double t2937;
  double t3017;
  double t3032;
  double t3069;
  double t3083;
  double t3093;
  double t3112;
  double t3139;
  double t3168;
  double t3184;
  double t3388;
  double t3436;
  double t3491;
  double t3492;
  double t3497;
  double t3506;
  double t3511;
  double t3515;
  double t3524;
  double t3541;
  double t3542;
  double t3550;
  double t3555;
  double t3613;
  double t3643;
  double t3671;
  double t3682;
  double t3712;
  double t3715;
  double t3717;
  double t3727;
  double t3731;
  double t3732;
  double t3735;
  double t3746;
  double t3756;
  t1600 = Cos(var1[3]);
  t1451 = Cos(var1[5]);
  t1663 = Sin(var1[4]);
  t1561 = Sin(var1[3]);
  t1684 = Sin(var1[5]);
  t1269 = Cos(var1[7]);
  t1296 = -1.*t1269;
  t1438 = 1. + t1296;
  t1443 = Cos(var1[6]);
  t1884 = t1600*t1451*t1663;
  t1927 = t1561*t1684;
  t1955 = t1884 + t1927;
  t1585 = -1.*t1451*t1561;
  t1694 = t1600*t1663*t1684;
  t1754 = t1585 + t1694;
  t1969 = Sin(var1[6]);
  t280 = Cos(var1[8]);
  t575 = -1.*t280;
  t1267 = 1. + t575;
  t1826 = t1443*t1754;
  t2066 = -1.*t1955*t1969;
  t2082 = t1826 + t2066;
  t2170 = t1443*t1955;
  t2208 = t1754*t1969;
  t2279 = t2170 + t2208;
  t2309 = Cos(var1[4]);
  t2327 = Sin(var1[7]);
  t2678 = -1.000000637725*t1438;
  t2695 = 1. + t2678;
  t2714 = t1600*t2309*t2695;
  t2815 = -0.930418*t2327;
  t2821 = 0. + t2815;
  t2826 = t2082*t2821;
  t2830 = -0.366501*t2327;
  t2853 = 0. + t2830;
  t2858 = t2279*t2853;
  t2870 = t2714 + t2826 + t2858;
  t2096 = -0.340999127418*t1438*t2082;
  t2154 = -0.134322983001*t1438;
  t2155 = 1. + t2154;
  t2297 = t2155*t2279;
  t2332 = 0.366501*t2327;
  t2374 = 0. + t2332;
  t2403 = t1600*t2309*t2374;
  t2431 = t2096 + t2297 + t2403;
  t2875 = Sin(var1[8]);
  t2475 = -0.8656776547239999*t1438;
  t2494 = 1. + t2475;
  t2558 = t2494*t2082;
  t2591 = -0.340999127418*t1438*t2279;
  t2605 = 0.930418*t2327;
  t2620 = 0. + t2605;
  t2636 = t1600*t2309*t2620;
  t2671 = t2558 + t2591 + t2636;
  t3305 = t1451*t1561*t1663;
  t3327 = -1.*t1600*t1684;
  t3335 = t3305 + t3327;
  t3263 = t1600*t1451;
  t3275 = t1561*t1663*t1684;
  t3288 = t3263 + t3275;
  t2442 = -0.134322983001*t1267;
  t2458 = 1. + t2442;
  t3295 = t1443*t3288;
  t3343 = -1.*t3335*t1969;
  t3345 = t3295 + t3343;
  t3352 = t1443*t3335;
  t3361 = t3288*t1969;
  t3364 = t3352 + t3361;
  t2915 = -0.366501*t2875;
  t2920 = 0. + t2915;
  t2987 = -1.000000637725*t1267;
  t3001 = 1. + t2987;
  t3439 = t2309*t2695*t1561;
  t3450 = t3345*t2821;
  t3453 = t3364*t2853;
  t3463 = t3439 + t3450 + t3453;
  t3347 = -0.340999127418*t1438*t3345;
  t3366 = t2155*t3364;
  t3383 = t2309*t1561*t2374;
  t3386 = t3347 + t3366 + t3383;
  t3018 = -0.930418*t2875;
  t3029 = 0. + t3018;
  t3400 = t2494*t3345;
  t3408 = -0.340999127418*t1438*t3364;
  t3418 = t2309*t1561*t2620;
  t3433 = t3400 + t3408 + t3418;
  t3058 = 0.366501*t2875;
  t3064 = 0. + t3058;
  t3099 = -0.8656776547239999*t1267;
  t3108 = 1. + t3099;
  t3141 = 0.930418*t2875;
  t3144 = 0. + t3141;
  t3569 = t2309*t1443*t1684;
  t3573 = -1.*t2309*t1451*t1969;
  t3574 = t3569 + t3573;
  t3592 = t2309*t1451*t1443;
  t3593 = t2309*t1684*t1969;
  t3605 = t3592 + t3593;
  t3652 = -1.*t2695*t1663;
  t3658 = t3574*t2821;
  t3667 = t3605*t2853;
  t3670 = t3652 + t3658 + t3667;
  t3584 = -0.340999127418*t1438*t3574;
  t3610 = t2155*t3605;
  t3611 = -1.*t1663*t2374;
  t3612 = t3584 + t3610 + t3611;
  t3614 = t2494*t3574;
  t3621 = -0.340999127418*t1438*t3605;
  t3623 = -1.*t1663*t2620;
  t3634 = t3614 + t3621 + t3623;
  t2434 = 0.340999127418*t1267*t2431;
  t2677 = t2458*t2671;
  t2933 = t2870*t2920;
  t2937 = t2434 + t2677 + t2933;
  t3017 = t3001*t2870;
  t3032 = t2431*t3029;
  t3069 = t2671*t3064;
  t3083 = t3017 + t3032 + t3069;
  t3093 = 0.707107*t3083;
  t3112 = t3108*t2431;
  t3139 = 0.340999127418*t1267*t2671;
  t3168 = t2870*t3144;
  t3184 = t3112 + t3139 + t3168;
  t3388 = 0.340999127418*t1267*t3386;
  t3436 = t2458*t3433;
  t3491 = t3463*t2920;
  t3492 = t3388 + t3436 + t3491;
  t3497 = t3001*t3463;
  t3506 = t3386*t3029;
  t3511 = t3433*t3064;
  t3515 = t3497 + t3506 + t3511;
  t3524 = 0.707107*t3515;
  t3541 = t3108*t3386;
  t3542 = 0.340999127418*t1267*t3433;
  t3550 = t3463*t3144;
  t3555 = t3541 + t3542 + t3550;
  t3613 = 0.340999127418*t1267*t3612;
  t3643 = t2458*t3634;
  t3671 = t3670*t2920;
  t3682 = t3613 + t3643 + t3671;
  t3712 = t3001*t3670;
  t3715 = t3612*t3029;
  t3717 = t3634*t3064;
  t3727 = t3712 + t3715 + t3717;
  t3731 = 0.707107*t3727;
  t3732 = t3108*t3612;
  t3735 = 0.340999127418*t1267*t3634;
  t3746 = t3670*t3144;
  t3756 = t3732 + t3735 + t3746;
  p_output1[0]=0.259155*t2937 + t3093 - 0.657905*t3184;
  p_output1[1]=0.259155*t3492 + t3524 - 0.657905*t3555;
  p_output1[2]=0.259155*t3682 + t3731 - 0.657905*t3756;
  p_output1[3]=-0.259155*t2937 + t3093 + 0.657905*t3184;
  p_output1[4]=-0.259155*t3492 + t3524 + 0.657905*t3555;
  p_output1[5]=-0.259155*t3682 + t3731 + 0.657905*t3756;
  p_output1[6]=-0.930418*t2937 - 0.366501*t3184;
  p_output1[7]=-0.930418*t3492 - 0.366501*t3555;
  p_output1[8]=-0.930418*t3682 - 0.366501*t3756;
}



void R_left_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

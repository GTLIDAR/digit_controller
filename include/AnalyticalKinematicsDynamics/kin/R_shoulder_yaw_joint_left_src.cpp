/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shoulder_yaw_joint_left_src.h"

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
  double t592;
  double t1685;
  double t1779;
  double t1705;
  double t1822;
  double t1453;
  double t1566;
  double t1592;
  double t1877;
  double t1739;
  double t1835;
  double t1847;
  double t1671;
  double t1880;
  double t1899;
  double t1916;
  double t174;
  double t180;
  double t275;
  double t474;
  double t628;
  double t1373;
  double t1862;
  double t1987;
  double t2077;
  double t2237;
  double t2243;
  double t2248;
  double t1376;
  double t1384;
  double t1420;
  double t2097;
  double t2137;
  double t2141;
  double t2251;
  double t2257;
  double t2345;
  double t2362;
  double t2438;
  double t2462;
  double t2470;
  double t2486;
  double t2487;
  double t2489;
  double t387;
  double t2554;
  double t2565;
  double t2628;
  double t2632;
  double t2642;
  double t2682;
  double t2689;
  double t2690;
  double t2695;
  double t2701;
  double t2827;
  double t2271;
  double t500;
  double t582;
  double t3106;
  double t3109;
  double t3114;
  double t3140;
  double t3145;
  double t3147;
  double t2314;
  double t2317;
  double t3115;
  double t3162;
  double t3163;
  double t3190;
  double t3202;
  double t3207;
  double t2539;
  double t2541;
  double t2721;
  double t2822;
  double t3102;
  double t3176;
  double t3212;
  double t3214;
  double t2870;
  double t2907;
  double t3224;
  double t3229;
  double t3241;
  double t3245;
  double t2923;
  double t2929;
  double t3258;
  double t3266;
  double t3272;
  double t3280;
  double t2971;
  double t2976;
  double t3000;
  double t3032;
  double t3047;
  double t3059;
  double t3415;
  double t3422;
  double t3431;
  double t3449;
  double t3454;
  double t3456;
  double t3413;
  double t3442;
  double t3461;
  double t3473;
  double t3478;
  double t3489;
  double t3501;
  double t3504;
  double t3523;
  double t3528;
  double t3530;
  double t3531;
  double t2824;
  double t2917;
  double t2960;
  double t2967;
  double t2984;
  double t3040;
  double t3080;
  double t3082;
  double t3336;
  double t3344;
  double t3346;
  double t3357;
  double t3361;
  double t3378;
  double t3386;
  double t3387;
  double t3553;
  double t3556;
  double t3557;
  double t3560;
  double t3570;
  double t3573;
  double t3595;
  double t3598;
  double t2263;
  double t2490;
  double t2708;
  double t2716;
  double t2718;
  double t3223;
  double t3257;
  double t3294;
  double t3305;
  double t3333;
  double t3476;
  double t3512;
  double t3538;
  double t3541;
  double t3550;
  t592 = Cos(var1[3]);
  t1685 = Cos(var1[5]);
  t1779 = Sin(var1[3]);
  t1705 = Sin(var1[4]);
  t1822 = Sin(var1[5]);
  t1453 = Cos(var1[14]);
  t1566 = -1.*t1453;
  t1592 = 1. + t1566;
  t1877 = Cos(var1[13]);
  t1739 = t592*t1685*t1705;
  t1835 = t1779*t1822;
  t1847 = t1739 + t1835;
  t1671 = Sin(var1[13]);
  t1880 = -1.*t1685*t1779;
  t1899 = t592*t1705*t1822;
  t1916 = t1880 + t1899;
  t174 = Cos(var1[15]);
  t180 = -1.*t174;
  t275 = 1. + t180;
  t474 = Sin(var1[15]);
  t628 = Cos(var1[4]);
  t1373 = Sin(var1[14]);
  t1862 = -1.*t1671*t1847;
  t1987 = t1877*t1916;
  t2077 = t1862 + t1987;
  t2237 = t1877*t1847;
  t2243 = t1671*t1916;
  t2248 = t2237 + t2243;
  t1376 = 0.994522*t1373;
  t1384 = 0. + t1376;
  t1420 = t592*t628*t1384;
  t2097 = 0.103955395616*t1592*t2077;
  t2137 = -0.9890740084840001*t1592;
  t2141 = 1. + t2137;
  t2251 = t2141*t2248;
  t2257 = t1420 + t2097 + t2251;
  t2345 = -0.104528*t1373;
  t2362 = 0. + t2345;
  t2438 = t592*t628*t2362;
  t2462 = -0.010926102783999999*t1592;
  t2470 = 1. + t2462;
  t2486 = t2470*t2077;
  t2487 = 0.103955395616*t1592*t2248;
  t2489 = t2438 + t2486 + t2487;
  t387 = -0.49726168403800003*t275;
  t2554 = -1.0000001112680001*t1592;
  t2565 = 1. + t2554;
  t2628 = t2565*t592*t628;
  t2632 = 0.104528*t1373;
  t2642 = 0. + t2632;
  t2682 = t2642*t2077;
  t2689 = -0.994522*t1373;
  t2690 = 0. + t2689;
  t2695 = t2690*t2248;
  t2701 = t2628 + t2682 + t2695;
  t2827 = -0.051978134642000004*t275;
  t2271 = 0.05226439969100001*t275;
  t500 = -0.073913*t474;
  t582 = t387 + t500;
  t3106 = t1685*t1779*t1705;
  t3109 = -1.*t592*t1822;
  t3114 = t3106 + t3109;
  t3140 = t592*t1685;
  t3145 = t1779*t1705*t1822;
  t3147 = t3140 + t3145;
  t2314 = -0.703234*t474;
  t2317 = t2271 + t2314;
  t3115 = -1.*t1671*t3114;
  t3162 = t1877*t3147;
  t3163 = t3115 + t3162;
  t3190 = t1877*t3114;
  t3202 = t1671*t3147;
  t3207 = t3190 + t3202;
  t2539 = -0.500001190325*t275;
  t2541 = 1. + t2539;
  t2721 = -0.5054634410180001*t275;
  t2822 = 1. + t2721;
  t3102 = t628*t1384*t1779;
  t3176 = 0.103955395616*t1592*t3163;
  t3212 = t2141*t3207;
  t3214 = t3102 + t3176 + t3212;
  t2870 = -0.707107*t474;
  t2907 = t2827 + t2870;
  t3224 = t628*t2362*t1779;
  t3229 = t2470*t3163;
  t3241 = 0.103955395616*t1592*t3207;
  t3245 = t3224 + t3229 + t3241;
  t2923 = 0.073913*t474;
  t2929 = t387 + t2923;
  t3258 = t2565*t628*t1779;
  t3266 = t2642*t3163;
  t3272 = t2690*t3207;
  t3280 = t3258 + t3266 + t3272;
  t2971 = 0.707107*t474;
  t2976 = t2827 + t2971;
  t3000 = -0.9945383682050002*t275;
  t3032 = 1. + t3000;
  t3047 = 0.703234*t474;
  t3059 = t2271 + t3047;
  t3415 = -1.*t628*t1685*t1671;
  t3422 = t1877*t628*t1822;
  t3431 = t3415 + t3422;
  t3449 = t1877*t628*t1685;
  t3454 = t628*t1671*t1822;
  t3456 = t3449 + t3454;
  t3413 = -1.*t1384*t1705;
  t3442 = 0.103955395616*t1592*t3431;
  t3461 = t2141*t3456;
  t3473 = t3413 + t3442 + t3461;
  t3478 = -1.*t2362*t1705;
  t3489 = t2470*t3431;
  t3501 = 0.103955395616*t1592*t3456;
  t3504 = t3478 + t3489 + t3501;
  t3523 = -1.*t2565*t1705;
  t3528 = t2642*t3431;
  t3530 = t2690*t3456;
  t3531 = t3523 + t3528 + t3530;
  t2824 = t2822*t2257;
  t2917 = t2907*t2489;
  t2960 = t2929*t2701;
  t2967 = t2824 + t2917 + t2960;
  t2984 = t2976*t2257;
  t3040 = t3032*t2489;
  t3080 = t3059*t2701;
  t3082 = t2984 + t3040 + t3080;
  t3336 = t2822*t3214;
  t3344 = t2907*t3245;
  t3346 = t2929*t3280;
  t3357 = t3336 + t3344 + t3346;
  t3361 = t2976*t3214;
  t3378 = t3032*t3245;
  t3386 = t3059*t3280;
  t3387 = t3361 + t3378 + t3386;
  t3553 = t2822*t3473;
  t3556 = t2907*t3504;
  t3557 = t2929*t3531;
  t3560 = t3553 + t3556 + t3557;
  t3570 = t2976*t3473;
  t3573 = t3032*t3504;
  t3595 = t3059*t3531;
  t3598 = t3570 + t3573 + t3595;
  t2263 = t582*t2257;
  t2490 = t2317*t2489;
  t2708 = t2541*t2701;
  t2716 = t2263 + t2490 + t2708;
  t2718 = 0.707107*t2716;
  t3223 = t582*t3214;
  t3257 = t2317*t3245;
  t3294 = t2541*t3280;
  t3305 = t3223 + t3257 + t3294;
  t3333 = 0.707107*t3305;
  t3476 = t582*t3473;
  t3512 = t2317*t3504;
  t3538 = t2541*t3531;
  t3541 = t3476 + t3512 + t3538;
  t3550 = 0.707107*t3541;
  p_output1[0]=t2718 + 0.703234*t2967 - 0.073913*t3082;
  p_output1[1]=t3333 + 0.703234*t3357 - 0.073913*t3387;
  p_output1[2]=t3550 + 0.703234*t3560 - 0.073913*t3598;
  p_output1[3]=-0.104528*t2967 - 0.994522*t3082;
  p_output1[4]=-0.104528*t3357 - 0.994522*t3387;
  p_output1[5]=-0.104528*t3560 - 0.994522*t3598;
  p_output1[6]=t2718 - 0.703234*t2967 + 0.073913*t3082;
  p_output1[7]=t3333 - 0.703234*t3357 + 0.073913*t3387;
  p_output1[8]=t3550 - 0.703234*t3560 + 0.073913*t3598;
}



void R_shoulder_yaw_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

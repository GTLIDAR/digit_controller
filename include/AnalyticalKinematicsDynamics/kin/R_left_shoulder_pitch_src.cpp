/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_shoulder_pitch_src.h"

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
  double t123;
  double t1625;
  double t1738;
  double t1704;
  double t1745;
  double t1420;
  double t1551;
  double t1556;
  double t1884;
  double t1716;
  double t1766;
  double t1880;
  double t1577;
  double t1891;
  double t1892;
  double t1900;
  double t143;
  double t443;
  double t1883;
  double t1950;
  double t1953;
  double t2109;
  double t2117;
  double t2119;
  double t695;
  double t851;
  double t1999;
  double t2072;
  double t2660;
  double t2673;
  double t2687;
  double t2714;
  double t2738;
  double t2743;
  double t2267;
  double t2304;
  double t2333;
  double t2351;
  double t2692;
  double t2746;
  double t2781;
  double t2787;
  double t2808;
  double t2829;
  double t2437;
  double t2440;
  double t2493;
  double t2511;
  double t2517;
  double t2532;
  double t3050;
  double t3113;
  double t3115;
  double t3123;
  double t3125;
  double t3147;
  double t867;
  double t1967;
  double t2126;
  double t2190;
  double t2266;
  double t2305;
  double t2358;
  double t2372;
  double t2375;
  double t2434;
  double t2448;
  double t2516;
  double t2594;
  double t2606;
  double t2657;
  double t2782;
  double t2838;
  double t2923;
  double t2925;
  double t2930;
  double t2956;
  double t2958;
  double t2963;
  double t2964;
  double t2965;
  double t2971;
  double t2995;
  double t3003;
  double t3042;
  double t3116;
  double t3158;
  double t3169;
  double t3190;
  double t3252;
  double t3270;
  double t3274;
  double t3288;
  double t3291;
  double t3293;
  double t3297;
  double t3309;
  double t3317;
  t123 = Cos(var1[3]);
  t1625 = Cos(var1[5]);
  t1738 = Sin(var1[3]);
  t1704 = Sin(var1[4]);
  t1745 = Sin(var1[5]);
  t1420 = Cos(var1[14]);
  t1551 = -1.*t1420;
  t1556 = 1. + t1551;
  t1884 = Cos(var1[13]);
  t1716 = t123*t1625*t1704;
  t1766 = t1738*t1745;
  t1880 = t1716 + t1766;
  t1577 = Sin(var1[13]);
  t1891 = -1.*t1625*t1738;
  t1892 = t123*t1704*t1745;
  t1900 = t1891 + t1892;
  t143 = Cos(var1[4]);
  t443 = Sin(var1[14]);
  t1883 = -1.*t1577*t1880;
  t1950 = t1884*t1900;
  t1953 = t1883 + t1950;
  t2109 = t1884*t1880;
  t2117 = t1577*t1900;
  t2119 = t2109 + t2117;
  t695 = 0.994522*t443;
  t851 = 0. + t695;
  t1999 = -0.9890740084840001*t1556;
  t2072 = 1. + t1999;
  t2660 = t1625*t1738*t1704;
  t2673 = -1.*t123*t1745;
  t2687 = t2660 + t2673;
  t2714 = t123*t1625;
  t2738 = t1738*t1704*t1745;
  t2743 = t2714 + t2738;
  t2267 = -0.104528*t443;
  t2304 = 0. + t2267;
  t2333 = -0.010926102783999999*t1556;
  t2351 = 1. + t2333;
  t2692 = -1.*t1577*t2687;
  t2746 = t1884*t2743;
  t2781 = t2692 + t2746;
  t2787 = t1884*t2687;
  t2808 = t1577*t2743;
  t2829 = t2787 + t2808;
  t2437 = -1.0000001112680001*t1556;
  t2440 = 1. + t2437;
  t2493 = 0.104528*t443;
  t2511 = 0. + t2493;
  t2517 = -0.994522*t443;
  t2532 = 0. + t2517;
  t3050 = -1.*t143*t1625*t1577;
  t3113 = t1884*t143*t1745;
  t3115 = t3050 + t3113;
  t3123 = t1884*t143*t1625;
  t3125 = t143*t1577*t1745;
  t3147 = t3123 + t3125;
  t867 = t123*t143*t851;
  t1967 = 0.103955395616*t1556*t1953;
  t2126 = t2072*t2119;
  t2190 = t867 + t1967 + t2126;
  t2266 = 0.703234*t2190;
  t2305 = t123*t143*t2304;
  t2358 = t2351*t1953;
  t2372 = 0.103955395616*t1556*t2119;
  t2375 = t2305 + t2358 + t2372;
  t2434 = -0.073913*t2375;
  t2448 = t2440*t123*t143;
  t2516 = t2511*t1953;
  t2594 = t2532*t2119;
  t2606 = t2448 + t2516 + t2594;
  t2657 = t143*t851*t1738;
  t2782 = 0.103955395616*t1556*t2781;
  t2838 = t2072*t2829;
  t2923 = t2657 + t2782 + t2838;
  t2925 = 0.703234*t2923;
  t2930 = t143*t2304*t1738;
  t2956 = t2351*t2781;
  t2958 = 0.103955395616*t1556*t2829;
  t2963 = t2930 + t2956 + t2958;
  t2964 = -0.073913*t2963;
  t2965 = t2440*t143*t1738;
  t2971 = t2511*t2781;
  t2995 = t2532*t2829;
  t3003 = t2965 + t2971 + t2995;
  t3042 = -1.*t851*t1704;
  t3116 = 0.103955395616*t1556*t3115;
  t3158 = t2072*t3147;
  t3169 = t3042 + t3116 + t3158;
  t3190 = 0.703234*t3169;
  t3252 = -1.*t2304*t1704;
  t3270 = t2351*t3115;
  t3274 = 0.103955395616*t1556*t3147;
  t3288 = t3252 + t3270 + t3274;
  t3291 = -0.073913*t3288;
  t3293 = -1.*t2440*t1704;
  t3297 = t2511*t3115;
  t3309 = t2532*t3147;
  t3317 = t3293 + t3297 + t3309;
  p_output1[0]=t2266 + t2434 + 0.707107*t2606;
  p_output1[1]=t2925 + t2964 + 0.707107*t3003;
  p_output1[2]=t3190 + t3291 + 0.707107*t3317;
  p_output1[3]=t2266 + t2434 - 0.707107*t2606;
  p_output1[4]=t2925 + t2964 - 0.707107*t3003;
  p_output1[5]=t3190 + t3291 - 0.707107*t3317;
  p_output1[6]=-0.104528*t2190 - 0.994522*t2375;
  p_output1[7]=-0.104528*t2923 - 0.994522*t2963;
  p_output1[8]=-0.104528*t3169 - 0.994522*t3288;
}



void R_left_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

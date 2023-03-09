/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_shoulder_yaw_src.h"

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
  double t880;
  double t1796;
  double t1805;
  double t1797;
  double t1855;
  double t1586;
  double t1613;
  double t1642;
  double t1899;
  double t1803;
  double t1887;
  double t1895;
  double t1670;
  double t1913;
  double t1932;
  double t1984;
  double t326;
  double t380;
  double t391;
  double t551;
  double t1093;
  double t1392;
  double t1897;
  double t1996;
  double t2029;
  double t2204;
  double t2229;
  double t2263;
  double t1506;
  double t1570;
  double t1577;
  double t2047;
  double t2175;
  double t2191;
  double t2268;
  double t2276;
  double t2370;
  double t2393;
  double t2407;
  double t2408;
  double t2416;
  double t2417;
  double t2419;
  double t2428;
  double t398;
  double t2505;
  double t2512;
  double t2519;
  double t2529;
  double t2553;
  double t2554;
  double t2564;
  double t2567;
  double t2578;
  double t2608;
  double t2642;
  double t2344;
  double t556;
  double t667;
  double t2938;
  double t2942;
  double t2943;
  double t2987;
  double t2996;
  double t3018;
  double t2347;
  double t2349;
  double t2951;
  double t3021;
  double t3023;
  double t3061;
  double t3062;
  double t3066;
  double t2446;
  double t2447;
  double t2625;
  double t2628;
  double t2933;
  double t3055;
  double t3082;
  double t3094;
  double t2668;
  double t2672;
  double t3117;
  double t3121;
  double t3122;
  double t3140;
  double t2707;
  double t2720;
  double t3143;
  double t3149;
  double t3165;
  double t3186;
  double t2764;
  double t2770;
  double t2802;
  double t2831;
  double t2872;
  double t2873;
  double t3305;
  double t3306;
  double t3307;
  double t3320;
  double t3333;
  double t3337;
  double t3303;
  double t3310;
  double t3340;
  double t3342;
  double t3355;
  double t3356;
  double t3357;
  double t3358;
  double t3360;
  double t3364;
  double t3366;
  double t3371;
  double t2629;
  double t2700;
  double t2721;
  double t2731;
  double t2778;
  double t2871;
  double t2899;
  double t2902;
  double t3213;
  double t3215;
  double t3235;
  double t3244;
  double t3254;
  double t3255;
  double t3261;
  double t3263;
  double t3386;
  double t3390;
  double t3395;
  double t3402;
  double t3437;
  double t3444;
  double t3451;
  double t3457;
  double t2320;
  double t2429;
  double t2612;
  double t2620;
  double t2624;
  double t3106;
  double t3142;
  double t3190;
  double t3202;
  double t3211;
  double t3345;
  double t3359;
  double t3375;
  double t3379;
  double t3382;
  t880 = Cos(var1[3]);
  t1796 = Cos(var1[5]);
  t1805 = Sin(var1[3]);
  t1797 = Sin(var1[4]);
  t1855 = Sin(var1[5]);
  t1586 = Cos(var1[25]);
  t1613 = -1.*t1586;
  t1642 = 1. + t1613;
  t1899 = Cos(var1[24]);
  t1803 = t880*t1796*t1797;
  t1887 = t1805*t1855;
  t1895 = t1803 + t1887;
  t1670 = Sin(var1[24]);
  t1913 = -1.*t1796*t1805;
  t1932 = t880*t1797*t1855;
  t1984 = t1913 + t1932;
  t326 = Cos(var1[26]);
  t380 = -1.*t326;
  t391 = 1. + t380;
  t551 = Sin(var1[26]);
  t1093 = Cos(var1[4]);
  t1392 = Sin(var1[25]);
  t1897 = -1.*t1670*t1895;
  t1996 = t1899*t1984;
  t2029 = t1897 + t1996;
  t2204 = t1899*t1895;
  t2229 = t1670*t1984;
  t2263 = t2204 + t2229;
  t1506 = -0.994522*t1392;
  t1570 = 0. + t1506;
  t1577 = t880*t1093*t1570;
  t2047 = -0.103955395616*t1642*t2029;
  t2175 = -0.9890740084840001*t1642;
  t2191 = 1. + t2175;
  t2268 = t2191*t2263;
  t2276 = t1577 + t2047 + t2268;
  t2370 = -0.104528*t1392;
  t2393 = 0. + t2370;
  t2407 = t880*t1093*t2393;
  t2408 = -0.010926102783999999*t1642;
  t2416 = 1. + t2408;
  t2417 = t2416*t2029;
  t2419 = -0.103955395616*t1642*t2263;
  t2428 = t2407 + t2417 + t2419;
  t398 = -0.49726168403800003*t391;
  t2505 = -1.0000001112680001*t1642;
  t2512 = 1. + t2505;
  t2519 = t2512*t880*t1093;
  t2529 = 0.104528*t1392;
  t2553 = 0. + t2529;
  t2554 = t2553*t2029;
  t2564 = 0.994522*t1392;
  t2567 = 0. + t2564;
  t2578 = t2567*t2263;
  t2608 = t2519 + t2554 + t2578;
  t2642 = 0.051978134642000004*t391;
  t2344 = -0.05226439969100001*t391;
  t556 = 0.073913*t551;
  t667 = t398 + t556;
  t2938 = t1796*t1805*t1797;
  t2942 = -1.*t880*t1855;
  t2943 = t2938 + t2942;
  t2987 = t880*t1796;
  t2996 = t1805*t1797*t1855;
  t3018 = t2987 + t2996;
  t2347 = -0.703234*t551;
  t2349 = t2344 + t2347;
  t2951 = -1.*t1670*t2943;
  t3021 = t1899*t3018;
  t3023 = t2951 + t3021;
  t3061 = t1899*t2943;
  t3062 = t1670*t3018;
  t3066 = t3061 + t3062;
  t2446 = -0.500001190325*t391;
  t2447 = 1. + t2446;
  t2625 = -0.5054634410180001*t391;
  t2628 = 1. + t2625;
  t2933 = t1093*t1570*t1805;
  t3055 = -0.103955395616*t1642*t3023;
  t3082 = t2191*t3066;
  t3094 = t2933 + t3055 + t3082;
  t2668 = -0.707107*t551;
  t2672 = t2642 + t2668;
  t3117 = t1093*t2393*t1805;
  t3121 = t2416*t3023;
  t3122 = -0.103955395616*t1642*t3066;
  t3140 = t3117 + t3121 + t3122;
  t2707 = -0.073913*t551;
  t2720 = t398 + t2707;
  t3143 = t2512*t1093*t1805;
  t3149 = t2553*t3023;
  t3165 = t2567*t3066;
  t3186 = t3143 + t3149 + t3165;
  t2764 = 0.707107*t551;
  t2770 = t2642 + t2764;
  t2802 = -0.9945383682050002*t391;
  t2831 = 1. + t2802;
  t2872 = 0.703234*t551;
  t2873 = t2344 + t2872;
  t3305 = -1.*t1093*t1796*t1670;
  t3306 = t1899*t1093*t1855;
  t3307 = t3305 + t3306;
  t3320 = t1899*t1093*t1796;
  t3333 = t1093*t1670*t1855;
  t3337 = t3320 + t3333;
  t3303 = -1.*t1570*t1797;
  t3310 = -0.103955395616*t1642*t3307;
  t3340 = t2191*t3337;
  t3342 = t3303 + t3310 + t3340;
  t3355 = -1.*t2393*t1797;
  t3356 = t2416*t3307;
  t3357 = -0.103955395616*t1642*t3337;
  t3358 = t3355 + t3356 + t3357;
  t3360 = -1.*t2512*t1797;
  t3364 = t2553*t3307;
  t3366 = t2567*t3337;
  t3371 = t3360 + t3364 + t3366;
  t2629 = t2628*t2276;
  t2700 = t2672*t2428;
  t2721 = t2720*t2608;
  t2731 = t2629 + t2700 + t2721;
  t2778 = t2770*t2276;
  t2871 = t2831*t2428;
  t2899 = t2873*t2608;
  t2902 = t2778 + t2871 + t2899;
  t3213 = t2628*t3094;
  t3215 = t2672*t3140;
  t3235 = t2720*t3186;
  t3244 = t3213 + t3215 + t3235;
  t3254 = t2770*t3094;
  t3255 = t2831*t3140;
  t3261 = t2873*t3186;
  t3263 = t3254 + t3255 + t3261;
  t3386 = t2628*t3342;
  t3390 = t2672*t3358;
  t3395 = t2720*t3371;
  t3402 = t3386 + t3390 + t3395;
  t3437 = t2770*t3342;
  t3444 = t2831*t3358;
  t3451 = t2873*t3371;
  t3457 = t3437 + t3444 + t3451;
  t2320 = t667*t2276;
  t2429 = t2349*t2428;
  t2612 = t2447*t2608;
  t2620 = t2320 + t2429 + t2612;
  t2624 = 0.707107*t2620;
  t3106 = t667*t3094;
  t3142 = t2349*t3140;
  t3190 = t2447*t3186;
  t3202 = t3106 + t3142 + t3190;
  t3211 = 0.707107*t3202;
  t3345 = t667*t3342;
  t3359 = t2349*t3358;
  t3375 = t2447*t3371;
  t3379 = t3345 + t3359 + t3375;
  t3382 = 0.707107*t3379;
  p_output1[0]=t2624 + 0.703234*t2731 + 0.073913*t2902;
  p_output1[1]=t3211 + 0.703234*t3244 + 0.073913*t3263;
  p_output1[2]=t3382 + 0.703234*t3402 + 0.073913*t3457;
  p_output1[3]=0.104528*t2731 - 0.994522*t2902;
  p_output1[4]=0.104528*t3244 - 0.994522*t3263;
  p_output1[5]=0.104528*t3402 - 0.994522*t3457;
  p_output1[6]=t2624 - 0.703234*t2731 - 0.073913*t2902;
  p_output1[7]=t3211 - 0.703234*t3244 - 0.073913*t3263;
  p_output1[8]=t3382 - 0.703234*t3402 - 0.073913*t3457;
}



void R_right_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

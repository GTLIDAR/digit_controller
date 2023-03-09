/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_elbow_joint_right_src.h"

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
  double t377;
  double t1263;
  double t1295;
  double t1292;
  double t1551;
  double t1206;
  double t1229;
  double t1230;
  double t1635;
  double t1293;
  double t1554;
  double t1632;
  double t1254;
  double t1731;
  double t1740;
  double t1745;
  double t64;
  double t139;
  double t260;
  double t293;
  double t448;
  double t456;
  double t1633;
  double t1747;
  double t1750;
  double t1912;
  double t1941;
  double t1944;
  double t467;
  double t552;
  double t1175;
  double t1768;
  double t1786;
  double t1876;
  double t1954;
  double t2003;
  double t2086;
  double t2132;
  double t2145;
  double t2168;
  double t2204;
  double t2214;
  double t2247;
  double t2266;
  double t283;
  double t2374;
  double t2380;
  double t2386;
  double t2389;
  double t2392;
  double t2410;
  double t2422;
  double t2429;
  double t2434;
  double t2435;
  double t2479;
  double t2489;
  double t2492;
  double t2569;
  double t2030;
  double t10;
  double t325;
  double t371;
  double t2024;
  double t2055;
  double t2084;
  double t2281;
  double t2328;
  double t2351;
  double t2458;
  double t2461;
  double t2510;
  double t2512;
  double t2555;
  double t2583;
  double t2584;
  double t2586;
  double t2589;
  double t2633;
  double t2638;
  double t2644;
  double t2669;
  double t2683;
  double t2704;
  double t2713;
  double t2720;
  double t2724;
  double t2739;
  double t2741;
  double t2744;
  double t2764;
  double t45;
  double t55;
  double t3046;
  double t3052;
  double t3056;
  double t3071;
  double t3074;
  double t3075;
  double t3067;
  double t3077;
  double t3078;
  double t3100;
  double t3102;
  double t3106;
  double t3027;
  double t3086;
  double t3108;
  double t3112;
  double t3119;
  double t3153;
  double t3159;
  double t3169;
  double t3180;
  double t3181;
  double t3187;
  double t3189;
  double t2661;
  double t2662;
  double t2827;
  double t2828;
  double t3115;
  double t3170;
  double t3190;
  double t3197;
  double t2832;
  double t2845;
  double t3219;
  double t3227;
  double t3229;
  double t3239;
  double t3267;
  double t3269;
  double t3284;
  double t3299;
  double t2907;
  double t2913;
  double t2918;
  double t2922;
  double t2941;
  double t2948;
  double t3391;
  double t3392;
  double t3394;
  double t3422;
  double t3424;
  double t3425;
  double t3380;
  double t3415;
  double t3431;
  double t3436;
  double t3439;
  double t3444;
  double t3445;
  double t3450;
  double t3457;
  double t3458;
  double t3461;
  double t3462;
  double t3438;
  double t3454;
  double t3469;
  double t3471;
  double t3475;
  double t3477;
  double t3479;
  double t3481;
  double t3493;
  double t3495;
  double t3504;
  double t3514;
  double t2477;
  double t2645;
  double t2810;
  double t2811;
  double t2829;
  double t2859;
  double t2866;
  double t2899;
  double t2914;
  double t2926;
  double t2952;
  double t2962;
  double t3215;
  double t3262;
  double t3300;
  double t3302;
  double t3304;
  double t3308;
  double t3323;
  double t3328;
  double t3333;
  double t3335;
  double t3345;
  double t3351;
  double t3472;
  double t3488;
  double t3517;
  double t3518;
  double t3532;
  double t3539;
  double t3543;
  double t3544;
  double t3554;
  double t3558;
  double t3560;
  double t3563;
  t377 = Cos(var1[3]);
  t1263 = Cos(var1[5]);
  t1295 = Sin(var1[3]);
  t1292 = Sin(var1[4]);
  t1551 = Sin(var1[5]);
  t1206 = Cos(var1[25]);
  t1229 = -1.*t1206;
  t1230 = 1. + t1229;
  t1635 = Cos(var1[24]);
  t1293 = t377*t1263*t1292;
  t1554 = t1295*t1551;
  t1632 = t1293 + t1554;
  t1254 = Sin(var1[24]);
  t1731 = -1.*t1263*t1295;
  t1740 = t377*t1292*t1551;
  t1745 = t1731 + t1740;
  t64 = Cos(var1[26]);
  t139 = -1.*t64;
  t260 = 1. + t139;
  t293 = Sin(var1[26]);
  t448 = Cos(var1[4]);
  t456 = Sin(var1[25]);
  t1633 = -1.*t1254*t1632;
  t1747 = t1635*t1745;
  t1750 = t1633 + t1747;
  t1912 = t1635*t1632;
  t1941 = t1254*t1745;
  t1944 = t1912 + t1941;
  t467 = -0.994522*t456;
  t552 = 0. + t467;
  t1175 = t377*t448*t552;
  t1768 = -0.103955395616*t1230*t1750;
  t1786 = -0.9890740084840001*t1230;
  t1876 = 1. + t1786;
  t1954 = t1876*t1944;
  t2003 = t1175 + t1768 + t1954;
  t2086 = -0.104528*t456;
  t2132 = 0. + t2086;
  t2145 = t377*t448*t2132;
  t2168 = -0.010926102783999999*t1230;
  t2204 = 1. + t2168;
  t2214 = t2204*t1750;
  t2247 = -0.103955395616*t1230*t1944;
  t2266 = t2145 + t2214 + t2247;
  t283 = -0.49726168403800003*t260;
  t2374 = -1.0000001112680001*t1230;
  t2380 = 1. + t2374;
  t2386 = t2380*t377*t448;
  t2389 = 0.104528*t456;
  t2392 = 0. + t2389;
  t2410 = t2392*t1750;
  t2422 = 0.994522*t456;
  t2429 = 0. + t2422;
  t2434 = t2429*t1944;
  t2435 = t2386 + t2410 + t2434;
  t2479 = Cos(var1[27]);
  t2489 = -1.*t2479;
  t2492 = 1. + t2489;
  t2569 = 0.051978134642000004*t260;
  t2030 = -0.05226439969100001*t260;
  t10 = Sin(var1[27]);
  t325 = 0.073913*t293;
  t371 = t283 + t325;
  t2024 = t371*t2003;
  t2055 = -0.703234*t293;
  t2084 = t2030 + t2055;
  t2281 = t2084*t2266;
  t2328 = -0.500001190325*t260;
  t2351 = 1. + t2328;
  t2458 = t2351*t2435;
  t2461 = t2024 + t2281 + t2458;
  t2510 = -0.5054634410180001*t260;
  t2512 = 1. + t2510;
  t2555 = t2512*t2003;
  t2583 = -0.707107*t293;
  t2584 = t2569 + t2583;
  t2586 = t2584*t2266;
  t2589 = -0.073913*t293;
  t2633 = t283 + t2589;
  t2638 = t2633*t2435;
  t2644 = t2555 + t2586 + t2638;
  t2669 = 0.707107*t293;
  t2683 = t2569 + t2669;
  t2704 = t2683*t2003;
  t2713 = -0.9945383682050002*t260;
  t2720 = 1. + t2713;
  t2724 = t2720*t2266;
  t2739 = 0.703234*t293;
  t2741 = t2030 + t2739;
  t2744 = t2741*t2435;
  t2764 = t2704 + t2724 + t2744;
  t45 = -0.104528*t10;
  t55 = 0. + t45;
  t3046 = t1263*t1295*t1292;
  t3052 = -1.*t377*t1551;
  t3056 = t3046 + t3052;
  t3071 = t377*t1263;
  t3074 = t1295*t1292*t1551;
  t3075 = t3071 + t3074;
  t3067 = -1.*t1254*t3056;
  t3077 = t1635*t3075;
  t3078 = t3067 + t3077;
  t3100 = t1635*t3056;
  t3102 = t1254*t3075;
  t3106 = t3100 + t3102;
  t3027 = t448*t552*t1295;
  t3086 = -0.103955395616*t1230*t3078;
  t3108 = t1876*t3106;
  t3112 = t3027 + t3086 + t3108;
  t3119 = t448*t2132*t1295;
  t3153 = t2204*t3078;
  t3159 = -0.103955395616*t1230*t3106;
  t3169 = t3119 + t3153 + t3159;
  t3180 = t2380*t448*t1295;
  t3181 = t2392*t3078;
  t3187 = t2429*t3106;
  t3189 = t3180 + t3181 + t3187;
  t2661 = -0.010926102783999999*t2492;
  t2662 = 1. + t2661;
  t2827 = -0.994522*t10;
  t2828 = 0. + t2827;
  t3115 = t371*t3112;
  t3170 = t2084*t3169;
  t3190 = t2351*t3189;
  t3197 = t3115 + t3170 + t3190;
  t2832 = -0.9890740084840001*t2492;
  t2845 = 1. + t2832;
  t3219 = t2512*t3112;
  t3227 = t2584*t3169;
  t3229 = t2633*t3189;
  t3239 = t3219 + t3227 + t3229;
  t3267 = t2683*t3112;
  t3269 = t2720*t3169;
  t3284 = t2741*t3189;
  t3299 = t3267 + t3269 + t3284;
  t2907 = -1.0000001112680001*t2492;
  t2913 = 1. + t2907;
  t2918 = 0.994522*t10;
  t2922 = 0. + t2918;
  t2941 = 0.104528*t10;
  t2948 = 0. + t2941;
  t3391 = -1.*t448*t1263*t1254;
  t3392 = t1635*t448*t1551;
  t3394 = t3391 + t3392;
  t3422 = t1635*t448*t1263;
  t3424 = t448*t1254*t1551;
  t3425 = t3422 + t3424;
  t3380 = -1.*t552*t1292;
  t3415 = -0.103955395616*t1230*t3394;
  t3431 = t1876*t3425;
  t3436 = t3380 + t3415 + t3431;
  t3439 = -1.*t2132*t1292;
  t3444 = t2204*t3394;
  t3445 = -0.103955395616*t1230*t3425;
  t3450 = t3439 + t3444 + t3445;
  t3457 = -1.*t2380*t1292;
  t3458 = t2392*t3394;
  t3461 = t2429*t3425;
  t3462 = t3457 + t3458 + t3461;
  t3438 = t371*t3436;
  t3454 = t2084*t3450;
  t3469 = t2351*t3462;
  t3471 = t3438 + t3454 + t3469;
  t3475 = t2512*t3436;
  t3477 = t2584*t3450;
  t3479 = t2633*t3462;
  t3481 = t3475 + t3477 + t3479;
  t3493 = t2683*t3436;
  t3495 = t2720*t3450;
  t3504 = t2741*t3462;
  t3514 = t3493 + t3495 + t3504;
  t2477 = t55*t2461;
  t2645 = -0.103955395616*t2492*t2644;
  t2810 = t2662*t2764;
  t2811 = t2477 + t2645 + t2810;
  t2829 = t2828*t2461;
  t2859 = t2845*t2644;
  t2866 = -0.103955395616*t2492*t2764;
  t2899 = t2829 + t2859 + t2866;
  t2914 = t2913*t2461;
  t2926 = t2922*t2644;
  t2952 = t2948*t2764;
  t2962 = t2914 + t2926 + t2952;
  t3215 = t55*t3197;
  t3262 = -0.103955395616*t2492*t3239;
  t3300 = t2662*t3299;
  t3302 = t3215 + t3262 + t3300;
  t3304 = t2828*t3197;
  t3308 = t2845*t3239;
  t3323 = -0.103955395616*t2492*t3299;
  t3328 = t3304 + t3308 + t3323;
  t3333 = t2913*t3197;
  t3335 = t2922*t3239;
  t3345 = t2948*t3299;
  t3351 = t3333 + t3335 + t3345;
  t3472 = t55*t3471;
  t3488 = -0.103955395616*t2492*t3481;
  t3517 = t2662*t3514;
  t3518 = t3472 + t3488 + t3517;
  t3532 = t2828*t3471;
  t3539 = t2845*t3481;
  t3543 = -0.103955395616*t2492*t3514;
  t3544 = t3532 + t3539 + t3543;
  t3554 = t2913*t3471;
  t3558 = t2922*t3481;
  t3560 = t2948*t3514;
  t3563 = t3554 + t3558 + t3560;
  p_output1[0]=0.040001*t2811 + 0.380588*t2899 + 0.92388*t2962;
  p_output1[1]=0.040001*t3302 + 0.380588*t3328 + 0.92388*t3351;
  p_output1[2]=0.040001*t3518 + 0.380588*t3544 + 0.92388*t3563;
  p_output1[3]=0.096572*t2811 + 0.918819*t2899 - 0.382684*t2962;
  p_output1[4]=0.096572*t3302 + 0.918819*t3328 - 0.382684*t3351;
  p_output1[5]=0.096572*t3518 + 0.918819*t3544 - 0.382684*t3563;
  p_output1[6]=-0.994522*t2811 + 0.104528*t2899;
  p_output1[7]=-0.994522*t3302 + 0.104528*t3328;
  p_output1[8]=-0.994522*t3518 + 0.104528*t3544;
}



void R_elbow_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_knee_src.h"

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
  double t84;
  double t1166;
  double t1294;
  double t1172;
  double t1307;
  double t959;
  double t1015;
  double t1074;
  double t1393;
  double t1242;
  double t1332;
  double t1339;
  double t1147;
  double t1490;
  double t1497;
  double t1612;
  double t63;
  double t182;
  double t194;
  double t1358;
  double t1613;
  double t1622;
  double t1923;
  double t1927;
  double t1933;
  double t2318;
  double t2319;
  double t2334;
  double t201;
  double t678;
  double t831;
  double t1681;
  double t1779;
  double t1922;
  double t1973;
  double t2003;
  double t2130;
  double t2133;
  double t2147;
  double t2158;
  double t2168;
  double t2180;
  double t2184;
  double t2193;
  double t2379;
  double t2415;
  double t2470;
  double t2472;
  double t2484;
  double t2496;
  double t2502;
  double t2505;
  double t2518;
  double t2530;
  double t2559;
  double t2560;
  double t2593;
  double t25;
  double t64;
  double t65;
  double t2096;
  double t2118;
  double t2119;
  double t2303;
  double t2340;
  double t2355;
  double t2533;
  double t2539;
  double t2594;
  double t2601;
  double t2605;
  double t2617;
  double t2627;
  double t2636;
  double t2643;
  double t2655;
  double t2702;
  double t2711;
  double t2712;
  double t2732;
  double t2742;
  double t2750;
  double t2755;
  double t2758;
  double t48;
  double t51;
  double t2971;
  double t2984;
  double t2986;
  double t3002;
  double t3004;
  double t3022;
  double t3001;
  double t3052;
  double t3057;
  double t3092;
  double t3094;
  double t3100;
  double t2968;
  double t3062;
  double t3101;
  double t3102;
  double t3104;
  double t3105;
  double t3108;
  double t3114;
  double t3123;
  double t3136;
  double t3140;
  double t3149;
  double t2688;
  double t2695;
  double t2816;
  double t2825;
  double t3103;
  double t3120;
  double t3150;
  double t3155;
  double t2838;
  double t2851;
  double t3167;
  double t3168;
  double t3182;
  double t3187;
  double t3191;
  double t3194;
  double t3197;
  double t3201;
  double t2909;
  double t2911;
  double t2919;
  double t2931;
  double t2946;
  double t2948;
  double t3256;
  double t3260;
  double t3263;
  double t3271;
  double t3272;
  double t3273;
  double t3254;
  double t3269;
  double t3274;
  double t3276;
  double t3282;
  double t3283;
  double t3290;
  double t3291;
  double t3296;
  double t3309;
  double t3310;
  double t3311;
  double t3277;
  double t3293;
  double t3317;
  double t3318;
  double t3322;
  double t3324;
  double t3325;
  double t3328;
  double t3340;
  double t3348;
  double t3349;
  double t3351;
  double t2558;
  double t2662;
  double t2773;
  double t2787;
  double t2835;
  double t2860;
  double t2868;
  double t2869;
  double t2912;
  double t2939;
  double t2949;
  double t2957;
  double t2962;
  double t3163;
  double t3189;
  double t3213;
  double t3220;
  double t3222;
  double t3231;
  double t3234;
  double t3236;
  double t3242;
  double t3244;
  double t3245;
  double t3249;
  double t3251;
  double t3319;
  double t3331;
  double t3353;
  double t3354;
  double t3358;
  double t3369;
  double t3375;
  double t3376;
  double t3384;
  double t3386;
  double t3391;
  double t3400;
  double t3412;
  t84 = Cos(var1[3]);
  t1166 = Cos(var1[5]);
  t1294 = Sin(var1[3]);
  t1172 = Sin(var1[4]);
  t1307 = Sin(var1[5]);
  t959 = Cos(var1[18]);
  t1015 = -1.*t959;
  t1074 = 1. + t1015;
  t1393 = Cos(var1[17]);
  t1242 = t84*t1166*t1172;
  t1332 = t1294*t1307;
  t1339 = t1242 + t1332;
  t1147 = Sin(var1[17]);
  t1490 = -1.*t1166*t1294;
  t1497 = t84*t1172*t1307;
  t1612 = t1490 + t1497;
  t63 = Sin(var1[19]);
  t182 = Cos(var1[4]);
  t194 = Sin(var1[18]);
  t1358 = -1.*t1147*t1339;
  t1613 = t1393*t1612;
  t1622 = t1358 + t1613;
  t1923 = t1393*t1339;
  t1927 = t1147*t1612;
  t1933 = t1923 + t1927;
  t2318 = Cos(var1[19]);
  t2319 = -1.*t2318;
  t2334 = 1. + t2319;
  t201 = -0.366501*t194;
  t678 = 0. + t201;
  t831 = t84*t182*t678;
  t1681 = 0.340999127418*t1074*t1622;
  t1779 = -0.134322983001*t1074;
  t1922 = 1. + t1779;
  t1973 = t1922*t1933;
  t2003 = t831 + t1681 + t1973;
  t2130 = 0.930418*t194;
  t2133 = 0. + t2130;
  t2147 = t84*t182*t2133;
  t2158 = -0.8656776547239999*t1074;
  t2168 = 1. + t2158;
  t2180 = t2168*t1622;
  t2184 = 0.340999127418*t1074*t1933;
  t2193 = t2147 + t2180 + t2184;
  t2379 = -1.000000637725*t1074;
  t2415 = 1. + t2379;
  t2470 = t2415*t84*t182;
  t2472 = -0.930418*t194;
  t2484 = 0. + t2472;
  t2496 = t2484*t1622;
  t2502 = 0.366501*t194;
  t2505 = 0. + t2502;
  t2518 = t2505*t1933;
  t2530 = t2470 + t2496 + t2518;
  t2559 = Cos(var1[20]);
  t2560 = -1.*t2559;
  t2593 = 1. + t2560;
  t25 = Sin(var1[20]);
  t64 = 0.930418*t63;
  t65 = 0. + t64;
  t2096 = t65*t2003;
  t2118 = 0.366501*t63;
  t2119 = 0. + t2118;
  t2303 = t2119*t2193;
  t2340 = -1.000000637725*t2334;
  t2355 = 1. + t2340;
  t2533 = t2355*t2530;
  t2539 = t2096 + t2303 + t2533;
  t2594 = -0.8656776547239999*t2334;
  t2601 = 1. + t2594;
  t2605 = t2601*t2003;
  t2617 = -0.340999127418*t2334*t2193;
  t2627 = -0.930418*t63;
  t2636 = 0. + t2627;
  t2643 = t2636*t2530;
  t2655 = t2605 + t2617 + t2643;
  t2702 = -0.340999127418*t2334*t2003;
  t2711 = -0.134322983001*t2334;
  t2712 = 1. + t2711;
  t2732 = t2712*t2193;
  t2742 = -0.366501*t63;
  t2750 = 0. + t2742;
  t2755 = t2750*t2530;
  t2758 = t2702 + t2732 + t2755;
  t48 = 0.366501*t25;
  t51 = 0. + t48;
  t2971 = t1166*t1294*t1172;
  t2984 = -1.*t84*t1307;
  t2986 = t2971 + t2984;
  t3002 = t84*t1166;
  t3004 = t1294*t1172*t1307;
  t3022 = t3002 + t3004;
  t3001 = -1.*t1147*t2986;
  t3052 = t1393*t3022;
  t3057 = t3001 + t3052;
  t3092 = t1393*t2986;
  t3094 = t1147*t3022;
  t3100 = t3092 + t3094;
  t2968 = t182*t678*t1294;
  t3062 = 0.340999127418*t1074*t3057;
  t3101 = t1922*t3100;
  t3102 = t2968 + t3062 + t3101;
  t3104 = t182*t2133*t1294;
  t3105 = t2168*t3057;
  t3108 = 0.340999127418*t1074*t3100;
  t3114 = t3104 + t3105 + t3108;
  t3123 = t2415*t182*t1294;
  t3136 = t2484*t3057;
  t3140 = t2505*t3100;
  t3149 = t3123 + t3136 + t3140;
  t2688 = -0.134322983001*t2593;
  t2695 = 1. + t2688;
  t2816 = 0.930418*t25;
  t2825 = 0. + t2816;
  t3103 = t65*t3102;
  t3120 = t2119*t3114;
  t3150 = t2355*t3149;
  t3155 = t3103 + t3120 + t3150;
  t2838 = -0.8656776547239999*t2593;
  t2851 = 1. + t2838;
  t3167 = t2601*t3102;
  t3168 = -0.340999127418*t2334*t3114;
  t3182 = t2636*t3149;
  t3187 = t3167 + t3168 + t3182;
  t3191 = -0.340999127418*t2334*t3102;
  t3194 = t2712*t3114;
  t3197 = t2750*t3149;
  t3201 = t3191 + t3194 + t3197;
  t2909 = -1.000000637725*t2593;
  t2911 = 1. + t2909;
  t2919 = -0.930418*t25;
  t2931 = 0. + t2919;
  t2946 = -0.366501*t25;
  t2948 = 0. + t2946;
  t3256 = -1.*t182*t1166*t1147;
  t3260 = t1393*t182*t1307;
  t3263 = t3256 + t3260;
  t3271 = t1393*t182*t1166;
  t3272 = t182*t1147*t1307;
  t3273 = t3271 + t3272;
  t3254 = -1.*t678*t1172;
  t3269 = 0.340999127418*t1074*t3263;
  t3274 = t1922*t3273;
  t3276 = t3254 + t3269 + t3274;
  t3282 = -1.*t2133*t1172;
  t3283 = t2168*t3263;
  t3290 = 0.340999127418*t1074*t3273;
  t3291 = t3282 + t3283 + t3290;
  t3296 = -1.*t2415*t1172;
  t3309 = t2484*t3263;
  t3310 = t2505*t3273;
  t3311 = t3296 + t3309 + t3310;
  t3277 = t65*t3276;
  t3293 = t2119*t3291;
  t3317 = t2355*t3311;
  t3318 = t3277 + t3293 + t3317;
  t3322 = t2601*t3276;
  t3324 = -0.340999127418*t2334*t3291;
  t3325 = t2636*t3311;
  t3328 = t3322 + t3324 + t3325;
  t3340 = -0.340999127418*t2334*t3276;
  t3348 = t2712*t3291;
  t3349 = t2750*t3311;
  t3351 = t3340 + t3348 + t3349;
  t2558 = t51*t2539;
  t2662 = -0.340999127418*t2593*t2655;
  t2773 = t2695*t2758;
  t2787 = t2558 + t2662 + t2773;
  t2835 = t2825*t2539;
  t2860 = t2851*t2655;
  t2868 = -0.340999127418*t2593*t2758;
  t2869 = t2835 + t2860 + t2868;
  t2912 = t2911*t2539;
  t2939 = t2931*t2655;
  t2949 = t2948*t2758;
  t2957 = t2912 + t2939 + t2949;
  t2962 = -0.707107*t2957;
  t3163 = t51*t3155;
  t3189 = -0.340999127418*t2593*t3187;
  t3213 = t2695*t3201;
  t3220 = t3163 + t3189 + t3213;
  t3222 = t2825*t3155;
  t3231 = t2851*t3187;
  t3234 = -0.340999127418*t2593*t3201;
  t3236 = t3222 + t3231 + t3234;
  t3242 = t2911*t3155;
  t3244 = t2931*t3187;
  t3245 = t2948*t3201;
  t3249 = t3242 + t3244 + t3245;
  t3251 = -0.707107*t3249;
  t3319 = t51*t3318;
  t3331 = -0.340999127418*t2593*t3328;
  t3353 = t2695*t3351;
  t3354 = t3319 + t3331 + t3353;
  t3358 = t2825*t3318;
  t3369 = t2851*t3328;
  t3375 = -0.340999127418*t2593*t3351;
  t3376 = t3358 + t3369 + t3375;
  t3384 = t2911*t3318;
  t3386 = t2931*t3328;
  t3391 = t2948*t3351;
  t3400 = t3384 + t3386 + t3391;
  t3412 = -0.707107*t3400;
  p_output1[0]=-0.259155*t2787 - 0.657905*t2869 + t2962;
  p_output1[1]=-0.259155*t3220 - 0.657905*t3236 + t3251;
  p_output1[2]=-0.259155*t3354 - 0.657905*t3376 + t3412;
  p_output1[3]=0.259155*t2787 + 0.657905*t2869 + t2962;
  p_output1[4]=0.259155*t3220 + 0.657905*t3236 + t3251;
  p_output1[5]=0.259155*t3354 + 0.657905*t3376 + t3412;
  p_output1[6]=0.930418*t2787 - 0.366501*t2869;
  p_output1[7]=0.930418*t3220 - 0.366501*t3236;
  p_output1[8]=0.930418*t3354 - 0.366501*t3376;
}



void R_right_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

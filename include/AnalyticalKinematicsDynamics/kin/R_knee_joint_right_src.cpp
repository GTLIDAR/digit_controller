/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:45:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t176;
  double t1245;
  double t1333;
  double t1254;
  double t1348;
  double t964;
  double t1071;
  double t1196;
  double t1504;
  double t1255;
  double t1370;
  double t1499;
  double t1225;
  double t1554;
  double t1555;
  double t1568;
  double t19;
  double t181;
  double t254;
  double t1500;
  double t1569;
  double t1573;
  double t1871;
  double t1873;
  double t1973;
  double t2235;
  double t2258;
  double t2264;
  double t335;
  double t381;
  double t761;
  double t1800;
  double t1843;
  double t1870;
  double t2064;
  double t2077;
  double t2121;
  double t2130;
  double t2133;
  double t2136;
  double t2142;
  double t2152;
  double t2177;
  double t2223;
  double t2320;
  double t2335;
  double t2338;
  double t2342;
  double t2356;
  double t2357;
  double t2359;
  double t2360;
  double t2363;
  double t2371;
  double t2483;
  double t2491;
  double t2494;
  double t6;
  double t20;
  double t31;
  double t2092;
  double t2098;
  double t2104;
  double t2232;
  double t2271;
  double t2288;
  double t2399;
  double t2452;
  double t2513;
  double t2520;
  double t2529;
  double t2532;
  double t2543;
  double t2545;
  double t2556;
  double t2557;
  double t2580;
  double t2590;
  double t2614;
  double t2621;
  double t2633;
  double t2637;
  double t2640;
  double t2645;
  double t7;
  double t18;
  double t2869;
  double t2885;
  double t2886;
  double t2894;
  double t2896;
  double t2897;
  double t2887;
  double t2901;
  double t2904;
  double t2915;
  double t2931;
  double t2938;
  double t2846;
  double t2914;
  double t2947;
  double t2951;
  double t2968;
  double t2982;
  double t2985;
  double t2988;
  double t2991;
  double t2996;
  double t2999;
  double t3000;
  double t2571;
  double t2579;
  double t2687;
  double t2691;
  double t2952;
  double t2989;
  double t3011;
  double t3012;
  double t2697;
  double t2700;
  double t3048;
  double t3051;
  double t3054;
  double t3057;
  double t3066;
  double t3070;
  double t3073;
  double t3076;
  double t2735;
  double t2747;
  double t2751;
  double t2752;
  double t2767;
  double t2769;
  double t3159;
  double t3160;
  double t3161;
  double t3165;
  double t3172;
  double t3176;
  double t3158;
  double t3162;
  double t3179;
  double t3181;
  double t3184;
  double t3206;
  double t3222;
  double t3224;
  double t3233;
  double t3240;
  double t3247;
  double t3248;
  double t3182;
  double t3227;
  double t3252;
  double t3269;
  double t3271;
  double t3289;
  double t3299;
  double t3318;
  double t3324;
  double t3326;
  double t3333;
  double t3338;
  double t2480;
  double t2565;
  double t2652;
  double t2654;
  double t2696;
  double t2724;
  double t2725;
  double t2726;
  double t2750;
  double t2765;
  double t2774;
  double t2803;
  double t2835;
  double t3026;
  double t3064;
  double t3078;
  double t3087;
  double t3104;
  double t3109;
  double t3114;
  double t3122;
  double t3137;
  double t3147;
  double t3148;
  double t3151;
  double t3155;
  double t3270;
  double t3322;
  double t3339;
  double t3343;
  double t3352;
  double t3354;
  double t3357;
  double t3358;
  double t3366;
  double t3368;
  double t3369;
  double t3370;
  double t3372;
  t176 = Cos(var1[3]);
  t1245 = Cos(var1[5]);
  t1333 = Sin(var1[3]);
  t1254 = Sin(var1[4]);
  t1348 = Sin(var1[5]);
  t964 = Cos(var1[18]);
  t1071 = -1.*t964;
  t1196 = 1. + t1071;
  t1504 = Cos(var1[17]);
  t1255 = t176*t1245*t1254;
  t1370 = t1333*t1348;
  t1499 = t1255 + t1370;
  t1225 = Sin(var1[17]);
  t1554 = -1.*t1245*t1333;
  t1555 = t176*t1254*t1348;
  t1568 = t1554 + t1555;
  t19 = Sin(var1[19]);
  t181 = Cos(var1[4]);
  t254 = Sin(var1[18]);
  t1500 = -1.*t1225*t1499;
  t1569 = t1504*t1568;
  t1573 = t1500 + t1569;
  t1871 = t1504*t1499;
  t1873 = t1225*t1568;
  t1973 = t1871 + t1873;
  t2235 = Cos(var1[19]);
  t2258 = -1.*t2235;
  t2264 = 1. + t2258;
  t335 = -0.366501*t254;
  t381 = 0. + t335;
  t761 = t176*t181*t381;
  t1800 = 0.340999127418*t1196*t1573;
  t1843 = -0.134322983001*t1196;
  t1870 = 1. + t1843;
  t2064 = t1870*t1973;
  t2077 = t761 + t1800 + t2064;
  t2121 = 0.930418*t254;
  t2130 = 0. + t2121;
  t2133 = t176*t181*t2130;
  t2136 = -0.8656776547239999*t1196;
  t2142 = 1. + t2136;
  t2152 = t2142*t1573;
  t2177 = 0.340999127418*t1196*t1973;
  t2223 = t2133 + t2152 + t2177;
  t2320 = -1.000000637725*t1196;
  t2335 = 1. + t2320;
  t2338 = t2335*t176*t181;
  t2342 = -0.930418*t254;
  t2356 = 0. + t2342;
  t2357 = t2356*t1573;
  t2359 = 0.366501*t254;
  t2360 = 0. + t2359;
  t2363 = t2360*t1973;
  t2371 = t2338 + t2357 + t2363;
  t2483 = Cos(var1[20]);
  t2491 = -1.*t2483;
  t2494 = 1. + t2491;
  t6 = Sin(var1[20]);
  t20 = 0.930418*t19;
  t31 = 0. + t20;
  t2092 = t31*t2077;
  t2098 = 0.366501*t19;
  t2104 = 0. + t2098;
  t2232 = t2104*t2223;
  t2271 = -1.000000637725*t2264;
  t2288 = 1. + t2271;
  t2399 = t2288*t2371;
  t2452 = t2092 + t2232 + t2399;
  t2513 = -0.8656776547239999*t2264;
  t2520 = 1. + t2513;
  t2529 = t2520*t2077;
  t2532 = -0.340999127418*t2264*t2223;
  t2543 = -0.930418*t19;
  t2545 = 0. + t2543;
  t2556 = t2545*t2371;
  t2557 = t2529 + t2532 + t2556;
  t2580 = -0.340999127418*t2264*t2077;
  t2590 = -0.134322983001*t2264;
  t2614 = 1. + t2590;
  t2621 = t2614*t2223;
  t2633 = -0.366501*t19;
  t2637 = 0. + t2633;
  t2640 = t2637*t2371;
  t2645 = t2580 + t2621 + t2640;
  t7 = 0.366501*t6;
  t18 = 0. + t7;
  t2869 = t1245*t1333*t1254;
  t2885 = -1.*t176*t1348;
  t2886 = t2869 + t2885;
  t2894 = t176*t1245;
  t2896 = t1333*t1254*t1348;
  t2897 = t2894 + t2896;
  t2887 = -1.*t1225*t2886;
  t2901 = t1504*t2897;
  t2904 = t2887 + t2901;
  t2915 = t1504*t2886;
  t2931 = t1225*t2897;
  t2938 = t2915 + t2931;
  t2846 = t181*t381*t1333;
  t2914 = 0.340999127418*t1196*t2904;
  t2947 = t1870*t2938;
  t2951 = t2846 + t2914 + t2947;
  t2968 = t181*t2130*t1333;
  t2982 = t2142*t2904;
  t2985 = 0.340999127418*t1196*t2938;
  t2988 = t2968 + t2982 + t2985;
  t2991 = t2335*t181*t1333;
  t2996 = t2356*t2904;
  t2999 = t2360*t2938;
  t3000 = t2991 + t2996 + t2999;
  t2571 = -0.134322983001*t2494;
  t2579 = 1. + t2571;
  t2687 = 0.930418*t6;
  t2691 = 0. + t2687;
  t2952 = t31*t2951;
  t2989 = t2104*t2988;
  t3011 = t2288*t3000;
  t3012 = t2952 + t2989 + t3011;
  t2697 = -0.8656776547239999*t2494;
  t2700 = 1. + t2697;
  t3048 = t2520*t2951;
  t3051 = -0.340999127418*t2264*t2988;
  t3054 = t2545*t3000;
  t3057 = t3048 + t3051 + t3054;
  t3066 = -0.340999127418*t2264*t2951;
  t3070 = t2614*t2988;
  t3073 = t2637*t3000;
  t3076 = t3066 + t3070 + t3073;
  t2735 = -1.000000637725*t2494;
  t2747 = 1. + t2735;
  t2751 = -0.930418*t6;
  t2752 = 0. + t2751;
  t2767 = -0.366501*t6;
  t2769 = 0. + t2767;
  t3159 = -1.*t181*t1245*t1225;
  t3160 = t1504*t181*t1348;
  t3161 = t3159 + t3160;
  t3165 = t1504*t181*t1245;
  t3172 = t181*t1225*t1348;
  t3176 = t3165 + t3172;
  t3158 = -1.*t381*t1254;
  t3162 = 0.340999127418*t1196*t3161;
  t3179 = t1870*t3176;
  t3181 = t3158 + t3162 + t3179;
  t3184 = -1.*t2130*t1254;
  t3206 = t2142*t3161;
  t3222 = 0.340999127418*t1196*t3176;
  t3224 = t3184 + t3206 + t3222;
  t3233 = -1.*t2335*t1254;
  t3240 = t2356*t3161;
  t3247 = t2360*t3176;
  t3248 = t3233 + t3240 + t3247;
  t3182 = t31*t3181;
  t3227 = t2104*t3224;
  t3252 = t2288*t3248;
  t3269 = t3182 + t3227 + t3252;
  t3271 = t2520*t3181;
  t3289 = -0.340999127418*t2264*t3224;
  t3299 = t2545*t3248;
  t3318 = t3271 + t3289 + t3299;
  t3324 = -0.340999127418*t2264*t3181;
  t3326 = t2614*t3224;
  t3333 = t2637*t3248;
  t3338 = t3324 + t3326 + t3333;
  t2480 = t18*t2452;
  t2565 = -0.340999127418*t2494*t2557;
  t2652 = t2579*t2645;
  t2654 = t2480 + t2565 + t2652;
  t2696 = t2691*t2452;
  t2724 = t2700*t2557;
  t2725 = -0.340999127418*t2494*t2645;
  t2726 = t2696 + t2724 + t2725;
  t2750 = t2747*t2452;
  t2765 = t2752*t2557;
  t2774 = t2769*t2645;
  t2803 = t2750 + t2765 + t2774;
  t2835 = -0.707107*t2803;
  t3026 = t18*t3012;
  t3064 = -0.340999127418*t2494*t3057;
  t3078 = t2579*t3076;
  t3087 = t3026 + t3064 + t3078;
  t3104 = t2691*t3012;
  t3109 = t2700*t3057;
  t3114 = -0.340999127418*t2494*t3076;
  t3122 = t3104 + t3109 + t3114;
  t3137 = t2747*t3012;
  t3147 = t2752*t3057;
  t3148 = t2769*t3076;
  t3151 = t3137 + t3147 + t3148;
  t3155 = -0.707107*t3151;
  t3270 = t18*t3269;
  t3322 = -0.340999127418*t2494*t3318;
  t3339 = t2579*t3338;
  t3343 = t3270 + t3322 + t3339;
  t3352 = t2691*t3269;
  t3354 = t2700*t3318;
  t3357 = -0.340999127418*t2494*t3338;
  t3358 = t3352 + t3354 + t3357;
  t3366 = t2747*t3269;
  t3368 = t2752*t3318;
  t3369 = t2769*t3338;
  t3370 = t3366 + t3368 + t3369;
  t3372 = -0.707107*t3370;
  p_output1[0]=-0.259155*t2654 - 0.657905*t2726 + t2835;
  p_output1[1]=-0.259155*t3087 - 0.657905*t3122 + t3155;
  p_output1[2]=-0.259155*t3343 - 0.657905*t3358 + t3372;
  p_output1[3]=0.259155*t2654 + 0.657905*t2726 + t2835;
  p_output1[4]=0.259155*t3087 + 0.657905*t3122 + t3155;
  p_output1[5]=0.259155*t3343 + 0.657905*t3358 + t3372;
  p_output1[6]=0.930418*t2654 - 0.366501*t2726;
  p_output1[7]=0.930418*t3087 - 0.366501*t3122;
  p_output1[8]=0.930418*t3343 - 0.366501*t3358;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

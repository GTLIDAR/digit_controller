/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_elbow_joint_left_src.h"

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
  double t371;
  double t1157;
  double t1194;
  double t1167;
  double t1214;
  double t1051;
  double t1053;
  double t1056;
  double t1332;
  double t1190;
  double t1250;
  double t1317;
  double t1113;
  double t1336;
  double t1401;
  double t1490;
  double t57;
  double t179;
  double t184;
  double t199;
  double t866;
  double t935;
  double t1327;
  double t1520;
  double t1525;
  double t1618;
  double t1680;
  double t1683;
  double t1009;
  double t1038;
  double t1040;
  double t1527;
  double t1528;
  double t1607;
  double t1684;
  double t1719;
  double t1783;
  double t1875;
  double t1905;
  double t1933;
  double t1938;
  double t1945;
  double t1961;
  double t1971;
  double t191;
  double t2010;
  double t2016;
  double t2044;
  double t2078;
  double t2080;
  double t2090;
  double t2091;
  double t2099;
  double t2128;
  double t2146;
  double t2205;
  double t2243;
  double t2276;
  double t2320;
  double t1756;
  double t5;
  double t290;
  double t358;
  double t1754;
  double t1759;
  double t1776;
  double t1974;
  double t1984;
  double t2000;
  double t2149;
  double t2160;
  double t2278;
  double t2279;
  double t2310;
  double t2337;
  double t2339;
  double t2340;
  double t2342;
  double t2419;
  double t2429;
  double t2433;
  double t2474;
  double t2567;
  double t2569;
  double t2573;
  double t2587;
  double t2597;
  double t2598;
  double t2603;
  double t2620;
  double t2625;
  double t7;
  double t52;
  double t2873;
  double t2894;
  double t2899;
  double t2906;
  double t2916;
  double t2919;
  double t2900;
  double t2924;
  double t2926;
  double t2932;
  double t2936;
  double t2940;
  double t2849;
  double t2929;
  double t2946;
  double t2954;
  double t2957;
  double t2960;
  double t2962;
  double t2972;
  double t2983;
  double t2989;
  double t2991;
  double t2999;
  double t2444;
  double t2463;
  double t2652;
  double t2674;
  double t2956;
  double t2981;
  double t3001;
  double t3002;
  double t2697;
  double t2702;
  double t3011;
  double t3017;
  double t3019;
  double t3021;
  double t3036;
  double t3039;
  double t3046;
  double t3048;
  double t2726;
  double t2733;
  double t2773;
  double t2786;
  double t2791;
  double t2792;
  double t3167;
  double t3169;
  double t3175;
  double t3181;
  double t3184;
  double t3185;
  double t3150;
  double t3177;
  double t3188;
  double t3189;
  double t3195;
  double t3198;
  double t3221;
  double t3225;
  double t3236;
  double t3239;
  double t3240;
  double t3243;
  double t3191;
  double t3232;
  double t3245;
  double t3246;
  double t3261;
  double t3275;
  double t3289;
  double t3291;
  double t3293;
  double t3295;
  double t3297;
  double t3305;
  double t2195;
  double t2436;
  double t2630;
  double t2631;
  double t2690;
  double t2703;
  double t2718;
  double t2719;
  double t2743;
  double t2788;
  double t2807;
  double t2824;
  double t3004;
  double t3029;
  double t3052;
  double t3065;
  double t3071;
  double t3075;
  double t3079;
  double t3080;
  double t3089;
  double t3100;
  double t3108;
  double t3122;
  double t3248;
  double t3292;
  double t3306;
  double t3314;
  double t3319;
  double t3320;
  double t3321;
  double t3322;
  double t3326;
  double t3338;
  double t3345;
  double t3350;
  t371 = Cos(var1[3]);
  t1157 = Cos(var1[5]);
  t1194 = Sin(var1[3]);
  t1167 = Sin(var1[4]);
  t1214 = Sin(var1[5]);
  t1051 = Cos(var1[14]);
  t1053 = -1.*t1051;
  t1056 = 1. + t1053;
  t1332 = Cos(var1[13]);
  t1190 = t371*t1157*t1167;
  t1250 = t1194*t1214;
  t1317 = t1190 + t1250;
  t1113 = Sin(var1[13]);
  t1336 = -1.*t1157*t1194;
  t1401 = t371*t1167*t1214;
  t1490 = t1336 + t1401;
  t57 = Cos(var1[15]);
  t179 = -1.*t57;
  t184 = 1. + t179;
  t199 = Sin(var1[15]);
  t866 = Cos(var1[4]);
  t935 = Sin(var1[14]);
  t1327 = -1.*t1113*t1317;
  t1520 = t1332*t1490;
  t1525 = t1327 + t1520;
  t1618 = t1332*t1317;
  t1680 = t1113*t1490;
  t1683 = t1618 + t1680;
  t1009 = 0.994522*t935;
  t1038 = 0. + t1009;
  t1040 = t371*t866*t1038;
  t1527 = 0.103955395616*t1056*t1525;
  t1528 = -0.9890740084840001*t1056;
  t1607 = 1. + t1528;
  t1684 = t1607*t1683;
  t1719 = t1040 + t1527 + t1684;
  t1783 = -0.104528*t935;
  t1875 = 0. + t1783;
  t1905 = t371*t866*t1875;
  t1933 = -0.010926102783999999*t1056;
  t1938 = 1. + t1933;
  t1945 = t1938*t1525;
  t1961 = 0.103955395616*t1056*t1683;
  t1971 = t1905 + t1945 + t1961;
  t191 = -0.49726168403800003*t184;
  t2010 = -1.0000001112680001*t1056;
  t2016 = 1. + t2010;
  t2044 = t2016*t371*t866;
  t2078 = 0.104528*t935;
  t2080 = 0. + t2078;
  t2090 = t2080*t1525;
  t2091 = -0.994522*t935;
  t2099 = 0. + t2091;
  t2128 = t2099*t1683;
  t2146 = t2044 + t2090 + t2128;
  t2205 = Cos(var1[16]);
  t2243 = -1.*t2205;
  t2276 = 1. + t2243;
  t2320 = -0.051978134642000004*t184;
  t1756 = 0.05226439969100001*t184;
  t5 = Sin(var1[16]);
  t290 = -0.073913*t199;
  t358 = t191 + t290;
  t1754 = t358*t1719;
  t1759 = -0.703234*t199;
  t1776 = t1756 + t1759;
  t1974 = t1776*t1971;
  t1984 = -0.500001190325*t184;
  t2000 = 1. + t1984;
  t2149 = t2000*t2146;
  t2160 = t1754 + t1974 + t2149;
  t2278 = -0.5054634410180001*t184;
  t2279 = 1. + t2278;
  t2310 = t2279*t1719;
  t2337 = -0.707107*t199;
  t2339 = t2320 + t2337;
  t2340 = t2339*t1971;
  t2342 = 0.073913*t199;
  t2419 = t191 + t2342;
  t2429 = t2419*t2146;
  t2433 = t2310 + t2340 + t2429;
  t2474 = 0.707107*t199;
  t2567 = t2320 + t2474;
  t2569 = t2567*t1719;
  t2573 = -0.9945383682050002*t184;
  t2587 = 1. + t2573;
  t2597 = t2587*t1971;
  t2598 = 0.703234*t199;
  t2603 = t1756 + t2598;
  t2620 = t2603*t2146;
  t2625 = t2569 + t2597 + t2620;
  t7 = -0.104528*t5;
  t52 = 0. + t7;
  t2873 = t1157*t1194*t1167;
  t2894 = -1.*t371*t1214;
  t2899 = t2873 + t2894;
  t2906 = t371*t1157;
  t2916 = t1194*t1167*t1214;
  t2919 = t2906 + t2916;
  t2900 = -1.*t1113*t2899;
  t2924 = t1332*t2919;
  t2926 = t2900 + t2924;
  t2932 = t1332*t2899;
  t2936 = t1113*t2919;
  t2940 = t2932 + t2936;
  t2849 = t866*t1038*t1194;
  t2929 = 0.103955395616*t1056*t2926;
  t2946 = t1607*t2940;
  t2954 = t2849 + t2929 + t2946;
  t2957 = t866*t1875*t1194;
  t2960 = t1938*t2926;
  t2962 = 0.103955395616*t1056*t2940;
  t2972 = t2957 + t2960 + t2962;
  t2983 = t2016*t866*t1194;
  t2989 = t2080*t2926;
  t2991 = t2099*t2940;
  t2999 = t2983 + t2989 + t2991;
  t2444 = -0.010926102783999999*t2276;
  t2463 = 1. + t2444;
  t2652 = 0.994522*t5;
  t2674 = 0. + t2652;
  t2956 = t358*t2954;
  t2981 = t1776*t2972;
  t3001 = t2000*t2999;
  t3002 = t2956 + t2981 + t3001;
  t2697 = -0.9890740084840001*t2276;
  t2702 = 1. + t2697;
  t3011 = t2279*t2954;
  t3017 = t2339*t2972;
  t3019 = t2419*t2999;
  t3021 = t3011 + t3017 + t3019;
  t3036 = t2567*t2954;
  t3039 = t2587*t2972;
  t3046 = t2603*t2999;
  t3048 = t3036 + t3039 + t3046;
  t2726 = -1.0000001112680001*t2276;
  t2733 = 1. + t2726;
  t2773 = -0.994522*t5;
  t2786 = 0. + t2773;
  t2791 = 0.104528*t5;
  t2792 = 0. + t2791;
  t3167 = -1.*t866*t1157*t1113;
  t3169 = t1332*t866*t1214;
  t3175 = t3167 + t3169;
  t3181 = t1332*t866*t1157;
  t3184 = t866*t1113*t1214;
  t3185 = t3181 + t3184;
  t3150 = -1.*t1038*t1167;
  t3177 = 0.103955395616*t1056*t3175;
  t3188 = t1607*t3185;
  t3189 = t3150 + t3177 + t3188;
  t3195 = -1.*t1875*t1167;
  t3198 = t1938*t3175;
  t3221 = 0.103955395616*t1056*t3185;
  t3225 = t3195 + t3198 + t3221;
  t3236 = -1.*t2016*t1167;
  t3239 = t2080*t3175;
  t3240 = t2099*t3185;
  t3243 = t3236 + t3239 + t3240;
  t3191 = t358*t3189;
  t3232 = t1776*t3225;
  t3245 = t2000*t3243;
  t3246 = t3191 + t3232 + t3245;
  t3261 = t2279*t3189;
  t3275 = t2339*t3225;
  t3289 = t2419*t3243;
  t3291 = t3261 + t3275 + t3289;
  t3293 = t2567*t3189;
  t3295 = t2587*t3225;
  t3297 = t2603*t3243;
  t3305 = t3293 + t3295 + t3297;
  t2195 = t52*t2160;
  t2436 = 0.103955395616*t2276*t2433;
  t2630 = t2463*t2625;
  t2631 = t2195 + t2436 + t2630;
  t2690 = t2674*t2160;
  t2703 = t2702*t2433;
  t2718 = 0.103955395616*t2276*t2625;
  t2719 = t2690 + t2703 + t2718;
  t2743 = t2733*t2160;
  t2788 = t2786*t2433;
  t2807 = t2792*t2625;
  t2824 = t2743 + t2788 + t2807;
  t3004 = t52*t3002;
  t3029 = 0.103955395616*t2276*t3021;
  t3052 = t2463*t3048;
  t3065 = t3004 + t3029 + t3052;
  t3071 = t2674*t3002;
  t3075 = t2702*t3021;
  t3079 = 0.103955395616*t2276*t3048;
  t3080 = t3071 + t3075 + t3079;
  t3089 = t2733*t3002;
  t3100 = t2786*t3021;
  t3108 = t2792*t3048;
  t3122 = t3089 + t3100 + t3108;
  t3248 = t52*t3246;
  t3292 = 0.103955395616*t2276*t3291;
  t3306 = t2463*t3305;
  t3314 = t3248 + t3292 + t3306;
  t3319 = t2674*t3246;
  t3320 = t2702*t3291;
  t3321 = 0.103955395616*t2276*t3305;
  t3322 = t3319 + t3320 + t3321;
  t3326 = t2733*t3246;
  t3338 = t2786*t3291;
  t3345 = t2792*t3305;
  t3350 = t3326 + t3338 + t3345;
  p_output1[0]=-0.040001*t2631 + 0.380588*t2719 + 0.92388*t2824;
  p_output1[1]=-0.040001*t3065 + 0.380588*t3080 + 0.92388*t3122;
  p_output1[2]=-0.040001*t3314 + 0.380588*t3322 + 0.92388*t3350;
  p_output1[3]=0.096572*t2631 - 0.918819*t2719 + 0.382684*t2824;
  p_output1[4]=0.096572*t3065 - 0.918819*t3080 + 0.382684*t3122;
  p_output1[5]=0.096572*t3314 - 0.918819*t3322 + 0.382684*t3350;
  p_output1[6]=0.994522*t2631 + 0.104528*t2719;
  p_output1[7]=0.994522*t3065 + 0.104528*t3080;
  p_output1[8]=0.994522*t3314 + 0.104528*t3322;
}



void R_elbow_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

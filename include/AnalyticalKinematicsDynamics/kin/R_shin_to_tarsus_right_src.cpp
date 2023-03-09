/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:45:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shin_to_tarsus_right_src.h"

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
  double t174;
  double t1273;
  double t1422;
  double t1354;
  double t1425;
  double t1218;
  double t1230;
  double t1265;
  double t1635;
  double t1355;
  double t1458;
  double t1479;
  double t1267;
  double t1640;
  double t1678;
  double t1687;
  double t78;
  double t267;
  double t320;
  double t1604;
  double t1727;
  double t1749;
  double t2049;
  double t2084;
  double t2088;
  double t2323;
  double t2357;
  double t2376;
  double t950;
  double t1028;
  double t1193;
  double t1964;
  double t1991;
  double t2025;
  double t2091;
  double t2094;
  double t2181;
  double t2198;
  double t2247;
  double t2250;
  double t2257;
  double t2259;
  double t2262;
  double t2266;
  double t2429;
  double t2430;
  double t2438;
  double t2442;
  double t2451;
  double t2465;
  double t2467;
  double t2470;
  double t2475;
  double t2493;
  double t2584;
  double t2587;
  double t2589;
  double t7;
  double t44;
  double t86;
  double t113;
  double t2095;
  double t2160;
  double t2169;
  double t2270;
  double t2379;
  double t2393;
  double t2498;
  double t2506;
  double t2590;
  double t2600;
  double t2608;
  double t2614;
  double t2619;
  double t2640;
  double t2646;
  double t2656;
  double t2675;
  double t2678;
  double t2683;
  double t2685;
  double t2688;
  double t2690;
  double t2697;
  double t2700;
  double t2788;
  double t2790;
  double t2791;
  double t56;
  double t59;
  double t2509;
  double t2659;
  double t2669;
  double t2671;
  double t2719;
  double t2721;
  double t2732;
  double t2734;
  double t2735;
  double t2739;
  double t2758;
  double t2764;
  double t2772;
  double t2773;
  double t2816;
  double t2817;
  double t2819;
  double t2820;
  double t2823;
  double t2830;
  double t2831;
  double t2833;
  double t2838;
  double t2839;
  double t20;
  double t41;
  double t2933;
  double t2934;
  double t2938;
  double t2940;
  double t2944;
  double t2945;
  double t2939;
  double t2946;
  double t2947;
  double t2951;
  double t2952;
  double t2954;
  double t2930;
  double t2949;
  double t2955;
  double t2961;
  double t2966;
  double t2973;
  double t2974;
  double t2978;
  double t2981;
  double t2984;
  double t2989;
  double t2990;
  double t2730;
  double t2731;
  double t2963;
  double t2979;
  double t2993;
  double t3009;
  double t3016;
  double t3018;
  double t3020;
  double t3028;
  double t3047;
  double t3063;
  double t3068;
  double t3071;
  double t2807;
  double t2813;
  double t2853;
  double t2854;
  double t3013;
  double t3044;
  double t3073;
  double t3074;
  double t3081;
  double t3093;
  double t3094;
  double t3103;
  double t2865;
  double t2867;
  double t3114;
  double t3115;
  double t3116;
  double t3117;
  double t2882;
  double t2897;
  double t2909;
  double t2917;
  double t3154;
  double t3155;
  double t3157;
  double t3160;
  double t3161;
  double t3163;
  double t3152;
  double t3158;
  double t3164;
  double t3173;
  double t3175;
  double t3177;
  double t3178;
  double t3181;
  double t3196;
  double t3200;
  double t3202;
  double t3203;
  double t3174;
  double t3189;
  double t3204;
  double t3211;
  double t3218;
  double t3223;
  double t3224;
  double t3225;
  double t3230;
  double t3231;
  double t3234;
  double t3241;
  double t3212;
  double t3227;
  double t3244;
  double t3249;
  double t3257;
  double t3259;
  double t3263;
  double t3266;
  double t3274;
  double t3275;
  double t3277;
  double t3279;
  double t2722;
  double t2784;
  double t2841;
  double t2845;
  double t2860;
  double t2863;
  double t2871;
  double t2872;
  double t2876;
  double t2903;
  double t2919;
  double t2926;
  double t3076;
  double t3104;
  double t3118;
  double t3122;
  double t3125;
  double t3126;
  double t3128;
  double t3129;
  double t3138;
  double t3139;
  double t3141;
  double t3144;
  double t3251;
  double t3267;
  double t3282;
  double t3283;
  double t3289;
  double t3303;
  double t3305;
  double t3312;
  double t3326;
  double t3335;
  double t3336;
  double t3338;
  t174 = Cos(var1[3]);
  t1273 = Cos(var1[5]);
  t1422 = Sin(var1[3]);
  t1354 = Sin(var1[4]);
  t1425 = Sin(var1[5]);
  t1218 = Cos(var1[18]);
  t1230 = -1.*t1218;
  t1265 = 1. + t1230;
  t1635 = Cos(var1[17]);
  t1355 = t174*t1273*t1354;
  t1458 = t1422*t1425;
  t1479 = t1355 + t1458;
  t1267 = Sin(var1[17]);
  t1640 = -1.*t1273*t1422;
  t1678 = t174*t1354*t1425;
  t1687 = t1640 + t1678;
  t78 = Sin(var1[19]);
  t267 = Cos(var1[4]);
  t320 = Sin(var1[18]);
  t1604 = -1.*t1267*t1479;
  t1727 = t1635*t1687;
  t1749 = t1604 + t1727;
  t2049 = t1635*t1479;
  t2084 = t1267*t1687;
  t2088 = t2049 + t2084;
  t2323 = Cos(var1[19]);
  t2357 = -1.*t2323;
  t2376 = 1. + t2357;
  t950 = -0.366501*t320;
  t1028 = 0. + t950;
  t1193 = t174*t267*t1028;
  t1964 = 0.340999127418*t1265*t1749;
  t1991 = -0.134322983001*t1265;
  t2025 = 1. + t1991;
  t2091 = t2025*t2088;
  t2094 = t1193 + t1964 + t2091;
  t2181 = 0.930418*t320;
  t2198 = 0. + t2181;
  t2247 = t174*t267*t2198;
  t2250 = -0.8656776547239999*t1265;
  t2257 = 1. + t2250;
  t2259 = t2257*t1749;
  t2262 = 0.340999127418*t1265*t2088;
  t2266 = t2247 + t2259 + t2262;
  t2429 = -1.000000637725*t1265;
  t2430 = 1. + t2429;
  t2438 = t2430*t174*t267;
  t2442 = -0.930418*t320;
  t2451 = 0. + t2442;
  t2465 = t2451*t1749;
  t2467 = 0.366501*t320;
  t2470 = 0. + t2467;
  t2475 = t2470*t2088;
  t2493 = t2438 + t2465 + t2475;
  t2584 = Cos(var1[20]);
  t2587 = -1.*t2584;
  t2589 = 1. + t2587;
  t7 = Sin(var1[21]);
  t44 = Sin(var1[20]);
  t86 = 0.930418*t78;
  t113 = 0. + t86;
  t2095 = t113*t2094;
  t2160 = 0.366501*t78;
  t2169 = 0. + t2160;
  t2270 = t2169*t2266;
  t2379 = -1.000000637725*t2376;
  t2393 = 1. + t2379;
  t2498 = t2393*t2493;
  t2506 = t2095 + t2270 + t2498;
  t2590 = -0.8656776547239999*t2376;
  t2600 = 1. + t2590;
  t2608 = t2600*t2094;
  t2614 = -0.340999127418*t2376*t2266;
  t2619 = -0.930418*t78;
  t2640 = 0. + t2619;
  t2646 = t2640*t2493;
  t2656 = t2608 + t2614 + t2646;
  t2675 = -0.340999127418*t2376*t2094;
  t2678 = -0.134322983001*t2376;
  t2683 = 1. + t2678;
  t2685 = t2683*t2266;
  t2688 = -0.366501*t78;
  t2690 = 0. + t2688;
  t2697 = t2690*t2493;
  t2700 = t2675 + t2685 + t2697;
  t2788 = Cos(var1[21]);
  t2790 = -1.*t2788;
  t2791 = 1. + t2790;
  t56 = 0.366501*t44;
  t59 = 0. + t56;
  t2509 = t59*t2506;
  t2659 = -0.340999127418*t2589*t2656;
  t2669 = -0.134322983001*t2589;
  t2671 = 1. + t2669;
  t2719 = t2671*t2700;
  t2721 = t2509 + t2659 + t2719;
  t2732 = 0.930418*t44;
  t2734 = 0. + t2732;
  t2735 = t2734*t2506;
  t2739 = -0.8656776547239999*t2589;
  t2758 = 1. + t2739;
  t2764 = t2758*t2656;
  t2772 = -0.340999127418*t2589*t2700;
  t2773 = t2735 + t2764 + t2772;
  t2816 = -1.000000637725*t2589;
  t2817 = 1. + t2816;
  t2819 = t2817*t2506;
  t2820 = -0.930418*t44;
  t2823 = 0. + t2820;
  t2830 = t2823*t2656;
  t2831 = -0.366501*t44;
  t2833 = 0. + t2831;
  t2838 = t2833*t2700;
  t2839 = t2819 + t2830 + t2838;
  t20 = -0.366501*t7;
  t41 = 0. + t20;
  t2933 = t1273*t1422*t1354;
  t2934 = -1.*t174*t1425;
  t2938 = t2933 + t2934;
  t2940 = t174*t1273;
  t2944 = t1422*t1354*t1425;
  t2945 = t2940 + t2944;
  t2939 = -1.*t1267*t2938;
  t2946 = t1635*t2945;
  t2947 = t2939 + t2946;
  t2951 = t1635*t2938;
  t2952 = t1267*t2945;
  t2954 = t2951 + t2952;
  t2930 = t267*t1028*t1422;
  t2949 = 0.340999127418*t1265*t2947;
  t2955 = t2025*t2954;
  t2961 = t2930 + t2949 + t2955;
  t2966 = t267*t2198*t1422;
  t2973 = t2257*t2947;
  t2974 = 0.340999127418*t1265*t2954;
  t2978 = t2966 + t2973 + t2974;
  t2981 = t2430*t267*t1422;
  t2984 = t2451*t2947;
  t2989 = t2470*t2954;
  t2990 = t2981 + t2984 + t2989;
  t2730 = -0.930418*t7;
  t2731 = 0. + t2730;
  t2963 = t113*t2961;
  t2979 = t2169*t2978;
  t2993 = t2393*t2990;
  t3009 = t2963 + t2979 + t2993;
  t3016 = t2600*t2961;
  t3018 = -0.340999127418*t2376*t2978;
  t3020 = t2640*t2990;
  t3028 = t3016 + t3018 + t3020;
  t3047 = -0.340999127418*t2376*t2961;
  t3063 = t2683*t2978;
  t3068 = t2690*t2990;
  t3071 = t3047 + t3063 + t3068;
  t2807 = -1.000000637725*t2791;
  t2813 = 1. + t2807;
  t2853 = -0.134322983001*t2791;
  t2854 = 1. + t2853;
  t3013 = t59*t3009;
  t3044 = -0.340999127418*t2589*t3028;
  t3073 = t2671*t3071;
  t3074 = t3013 + t3044 + t3073;
  t3081 = t2734*t3009;
  t3093 = t2758*t3028;
  t3094 = -0.340999127418*t2589*t3071;
  t3103 = t3081 + t3093 + t3094;
  t2865 = 0.366501*t7;
  t2867 = 0. + t2865;
  t3114 = t2817*t3009;
  t3115 = t2823*t3028;
  t3116 = t2833*t3071;
  t3117 = t3114 + t3115 + t3116;
  t2882 = -0.8656776547239999*t2791;
  t2897 = 1. + t2882;
  t2909 = 0.930418*t7;
  t2917 = 0. + t2909;
  t3154 = -1.*t267*t1273*t1267;
  t3155 = t1635*t267*t1425;
  t3157 = t3154 + t3155;
  t3160 = t1635*t267*t1273;
  t3161 = t267*t1267*t1425;
  t3163 = t3160 + t3161;
  t3152 = -1.*t1028*t1354;
  t3158 = 0.340999127418*t1265*t3157;
  t3164 = t2025*t3163;
  t3173 = t3152 + t3158 + t3164;
  t3175 = -1.*t2198*t1354;
  t3177 = t2257*t3157;
  t3178 = 0.340999127418*t1265*t3163;
  t3181 = t3175 + t3177 + t3178;
  t3196 = -1.*t2430*t1354;
  t3200 = t2451*t3157;
  t3202 = t2470*t3163;
  t3203 = t3196 + t3200 + t3202;
  t3174 = t113*t3173;
  t3189 = t2169*t3181;
  t3204 = t2393*t3203;
  t3211 = t3174 + t3189 + t3204;
  t3218 = t2600*t3173;
  t3223 = -0.340999127418*t2376*t3181;
  t3224 = t2640*t3203;
  t3225 = t3218 + t3223 + t3224;
  t3230 = -0.340999127418*t2376*t3173;
  t3231 = t2683*t3181;
  t3234 = t2690*t3203;
  t3241 = t3230 + t3231 + t3234;
  t3212 = t59*t3211;
  t3227 = -0.340999127418*t2589*t3225;
  t3244 = t2671*t3241;
  t3249 = t3212 + t3227 + t3244;
  t3257 = t2734*t3211;
  t3259 = t2758*t3225;
  t3263 = -0.340999127418*t2589*t3241;
  t3266 = t3257 + t3259 + t3263;
  t3274 = t2817*t3211;
  t3275 = t2823*t3225;
  t3277 = t2833*t3241;
  t3279 = t3274 + t3275 + t3277;
  t2722 = t41*t2721;
  t2784 = t2731*t2773;
  t2841 = t2813*t2839;
  t2845 = t2722 + t2784 + t2841;
  t2860 = t2854*t2721;
  t2863 = -0.340999127418*t2791*t2773;
  t2871 = t2867*t2839;
  t2872 = t2860 + t2863 + t2871;
  t2876 = -0.340999127418*t2791*t2721;
  t2903 = t2897*t2773;
  t2919 = t2917*t2839;
  t2926 = t2876 + t2903 + t2919;
  t3076 = t41*t3074;
  t3104 = t2731*t3103;
  t3118 = t2813*t3117;
  t3122 = t3076 + t3104 + t3118;
  t3125 = t2854*t3074;
  t3126 = -0.340999127418*t2791*t3103;
  t3128 = t2867*t3117;
  t3129 = t3125 + t3126 + t3128;
  t3138 = -0.340999127418*t2791*t3074;
  t3139 = t2897*t3103;
  t3141 = t2917*t3117;
  t3144 = t3138 + t3139 + t3141;
  t3251 = t41*t3249;
  t3267 = t2731*t3266;
  t3282 = t2813*t3279;
  t3283 = t3251 + t3267 + t3282;
  t3289 = t2854*t3249;
  t3303 = -0.340999127418*t2791*t3266;
  t3305 = t2867*t3279;
  t3312 = t3289 + t3303 + t3305;
  t3326 = -0.340999127418*t2791*t3249;
  t3335 = t2897*t3266;
  t3336 = t2917*t3279;
  t3338 = t3326 + t3335 + t3336;
  p_output1[0]=0.848048*t2845 - 0.194216*t2872 - 0.493047*t2926;
  p_output1[1]=0.848048*t3122 - 0.194216*t3129 - 0.493047*t3144;
  p_output1[2]=0.848048*t3283 - 0.194216*t3312 - 0.493047*t3338;
  p_output1[3]=-0.529919*t2845 - 0.310811*t2872 - 0.789039*t2926;
  p_output1[4]=-0.529919*t3122 - 0.310811*t3129 - 0.789039*t3144;
  p_output1[5]=-0.529919*t3283 - 0.310811*t3312 - 0.789039*t3338;
  p_output1[6]=0.930418*t2872 - 0.366501*t2926;
  p_output1[7]=0.930418*t3129 - 0.366501*t3144;
  p_output1[8]=0.930418*t3312 - 0.366501*t3338;
}



void R_shin_to_tarsus_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

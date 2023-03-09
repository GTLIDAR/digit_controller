/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:34:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_shin_to_tarsus_left_src.h"

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
  double t1558;
  double t1502;
  double t1623;
  double t1503;
  double t1630;
  double t1300;
  double t1368;
  double t1432;
  double t1495;
  double t1712;
  double t1735;
  double t1743;
  double t1551;
  double t1683;
  double t1696;
  double t1770;
  double t1041;
  double t1076;
  double t1084;
  double t1698;
  double t1786;
  double t1787;
  double t1869;
  double t1883;
  double t1910;
  double t1959;
  double t1962;
  double t2202;
  double t2221;
  double t2232;
  double t2235;
  double t2243;
  double t2257;
  double t2371;
  double t2381;
  double t2416;
  double t2418;
  double t1837;
  double t1845;
  double t1847;
  double t1955;
  double t1963;
  double t1964;
  double t1973;
  double t2049;
  double t2425;
  double t2132;
  double t2135;
  double t2147;
  double t2148;
  double t2167;
  double t2170;
  double t2186;
  double t2188;
  double t256;
  double t259;
  double t402;
  double t15;
  double t2051;
  double t2098;
  double t2126;
  double t2201;
  double t2429;
  double t2431;
  double t2439;
  double t2454;
  double t2462;
  double t2483;
  double t2500;
  double t2506;
  double t2508;
  double t2510;
  double t2511;
  double t2514;
  double t2523;
  double t2573;
  double t2586;
  double t2611;
  double t2615;
  double t2629;
  double t2633;
  double t2638;
  double t2642;
  double t2650;
  double t2656;
  double t2719;
  double t2723;
  double t2727;
  double t2455;
  double t2471;
  double t2478;
  double t2588;
  double t2591;
  double t2608;
  double t2657;
  double t2671;
  double t2685;
  double t2687;
  double t2697;
  double t2700;
  double t2705;
  double t2711;
  double t2715;
  double t2716;
  double t2735;
  double t2744;
  double t2746;
  double t2748;
  double t2749;
  double t2750;
  double t2752;
  double t2753;
  double t2757;
  double t2761;
  double t23;
  double t34;
  double t2876;
  double t2877;
  double t2881;
  double t2862;
  double t2864;
  double t2867;
  double t2873;
  double t2885;
  double t2887;
  double t2891;
  double t2892;
  double t2893;
  double t2926;
  double t2927;
  double t2934;
  double t2936;
  double t2889;
  double t2894;
  double t2901;
  double t2903;
  double t2911;
  double t2920;
  double t2921;
  double t2922;
  double t2675;
  double t2684;
  double t2905;
  double t2925;
  double t2943;
  double t2963;
  double t2971;
  double t2972;
  double t2976;
  double t2977;
  double t2986;
  double t2987;
  double t2989;
  double t2993;
  double t2730;
  double t2733;
  double t2772;
  double t2780;
  double t2966;
  double t2984;
  double t2996;
  double t2999;
  double t3004;
  double t3012;
  double t3030;
  double t3032;
  double t2795;
  double t2799;
  double t3034;
  double t3035;
  double t3042;
  double t3044;
  double t2820;
  double t2823;
  double t2835;
  double t2839;
  double t3098;
  double t3101;
  double t3103;
  double t3106;
  double t3109;
  double t3111;
  double t3132;
  double t3133;
  double t3134;
  double t3136;
  double t3104;
  double t3116;
  double t3117;
  double t3118;
  double t3121;
  double t3124;
  double t3129;
  double t3130;
  double t3119;
  double t3131;
  double t3154;
  double t3157;
  double t3172;
  double t3174;
  double t3177;
  double t3180;
  double t3182;
  double t3187;
  double t3193;
  double t3194;
  double t3170;
  double t3181;
  double t3204;
  double t3213;
  double t3222;
  double t3223;
  double t3234;
  double t3239;
  double t3241;
  double t3246;
  double t3248;
  double t3251;
  double t2672;
  double t2717;
  double t2764;
  double t2765;
  double t2782;
  double t2792;
  double t2801;
  double t2808;
  double t2818;
  double t2832;
  double t2847;
  double t2855;
  double t3001;
  double t3033;
  double t3048;
  double t3052;
  double t3060;
  double t3067;
  double t3068;
  double t3070;
  double t3076;
  double t3077;
  double t3081;
  double t3082;
  double t3216;
  double t3240;
  double t3258;
  double t3277;
  double t3280;
  double t3281;
  double t3283;
  double t3285;
  double t3291;
  double t3314;
  double t3317;
  double t3319;
  t1558 = Cos(var1[3]);
  t1502 = Cos(var1[5]);
  t1623 = Sin(var1[4]);
  t1503 = Sin(var1[3]);
  t1630 = Sin(var1[5]);
  t1300 = Cos(var1[7]);
  t1368 = -1.*t1300;
  t1432 = 1. + t1368;
  t1495 = Cos(var1[6]);
  t1712 = t1558*t1502*t1623;
  t1735 = t1503*t1630;
  t1743 = t1712 + t1735;
  t1551 = -1.*t1502*t1503;
  t1683 = t1558*t1623*t1630;
  t1696 = t1551 + t1683;
  t1770 = Sin(var1[6]);
  t1041 = Cos(var1[8]);
  t1076 = -1.*t1041;
  t1084 = 1. + t1076;
  t1698 = t1495*t1696;
  t1786 = -1.*t1743*t1770;
  t1787 = t1698 + t1786;
  t1869 = t1495*t1743;
  t1883 = t1696*t1770;
  t1910 = t1869 + t1883;
  t1959 = Cos(var1[4]);
  t1962 = Sin(var1[7]);
  t2202 = -1.000000637725*t1432;
  t2221 = 1. + t2202;
  t2232 = t1558*t1959*t2221;
  t2235 = -0.930418*t1962;
  t2243 = 0. + t2235;
  t2257 = t1787*t2243;
  t2371 = -0.366501*t1962;
  t2381 = 0. + t2371;
  t2416 = t1910*t2381;
  t2418 = t2232 + t2257 + t2416;
  t1837 = -0.340999127418*t1432*t1787;
  t1845 = -0.134322983001*t1432;
  t1847 = 1. + t1845;
  t1955 = t1847*t1910;
  t1963 = 0.366501*t1962;
  t1964 = 0. + t1963;
  t1973 = t1558*t1959*t1964;
  t2049 = t1837 + t1955 + t1973;
  t2425 = Sin(var1[8]);
  t2132 = -0.8656776547239999*t1432;
  t2135 = 1. + t2132;
  t2147 = t2135*t1787;
  t2148 = -0.340999127418*t1432*t1910;
  t2167 = 0.930418*t1962;
  t2170 = 0. + t2167;
  t2186 = t1558*t1959*t2170;
  t2188 = t2147 + t2148 + t2186;
  t256 = Cos(var1[9]);
  t259 = -1.*t256;
  t402 = 1. + t259;
  t15 = Sin(var1[10]);
  t2051 = 0.340999127418*t1084*t2049;
  t2098 = -0.134322983001*t1084;
  t2126 = 1. + t2098;
  t2201 = t2126*t2188;
  t2429 = -0.366501*t2425;
  t2431 = 0. + t2429;
  t2439 = t2418*t2431;
  t2454 = t2051 + t2201 + t2439;
  t2462 = Sin(var1[9]);
  t2483 = -1.000000637725*t1084;
  t2500 = 1. + t2483;
  t2506 = t2500*t2418;
  t2508 = -0.930418*t2425;
  t2510 = 0. + t2508;
  t2511 = t2049*t2510;
  t2514 = 0.366501*t2425;
  t2523 = 0. + t2514;
  t2573 = t2188*t2523;
  t2586 = t2506 + t2511 + t2573;
  t2611 = -0.8656776547239999*t1084;
  t2615 = 1. + t2611;
  t2629 = t2615*t2049;
  t2633 = 0.340999127418*t1084*t2188;
  t2638 = 0.930418*t2425;
  t2642 = 0. + t2638;
  t2650 = t2418*t2642;
  t2656 = t2629 + t2633 + t2650;
  t2719 = Cos(var1[10]);
  t2723 = -1.*t2719;
  t2727 = 1. + t2723;
  t2455 = 0.340999127418*t402*t2454;
  t2471 = -0.930418*t2462;
  t2478 = 0. + t2471;
  t2588 = t2478*t2586;
  t2591 = -0.8656776547239999*t402;
  t2608 = 1. + t2591;
  t2657 = t2608*t2656;
  t2671 = t2455 + t2588 + t2657;
  t2685 = -0.134322983001*t402;
  t2687 = 1. + t2685;
  t2697 = t2687*t2454;
  t2700 = 0.366501*t2462;
  t2705 = 0. + t2700;
  t2711 = t2705*t2586;
  t2715 = 0.340999127418*t402*t2656;
  t2716 = t2697 + t2711 + t2715;
  t2735 = -0.366501*t2462;
  t2744 = 0. + t2735;
  t2746 = t2744*t2454;
  t2748 = -1.000000637725*t402;
  t2749 = 1. + t2748;
  t2750 = t2749*t2586;
  t2752 = 0.930418*t2462;
  t2753 = 0. + t2752;
  t2757 = t2753*t2656;
  t2761 = t2746 + t2750 + t2757;
  t23 = 0.930418*t15;
  t34 = 0. + t23;
  t2876 = t1502*t1503*t1623;
  t2877 = -1.*t1558*t1630;
  t2881 = t2876 + t2877;
  t2862 = t1558*t1502;
  t2864 = t1503*t1623*t1630;
  t2867 = t2862 + t2864;
  t2873 = t1495*t2867;
  t2885 = -1.*t2881*t1770;
  t2887 = t2873 + t2885;
  t2891 = t1495*t2881;
  t2892 = t2867*t1770;
  t2893 = t2891 + t2892;
  t2926 = t1959*t2221*t1503;
  t2927 = t2887*t2243;
  t2934 = t2893*t2381;
  t2936 = t2926 + t2927 + t2934;
  t2889 = -0.340999127418*t1432*t2887;
  t2894 = t1847*t2893;
  t2901 = t1959*t1503*t1964;
  t2903 = t2889 + t2894 + t2901;
  t2911 = t2135*t2887;
  t2920 = -0.340999127418*t1432*t2893;
  t2921 = t1959*t1503*t2170;
  t2922 = t2911 + t2920 + t2921;
  t2675 = -0.366501*t15;
  t2684 = 0. + t2675;
  t2905 = 0.340999127418*t1084*t2903;
  t2925 = t2126*t2922;
  t2943 = t2936*t2431;
  t2963 = t2905 + t2925 + t2943;
  t2971 = t2500*t2936;
  t2972 = t2903*t2510;
  t2976 = t2922*t2523;
  t2977 = t2971 + t2972 + t2976;
  t2986 = t2615*t2903;
  t2987 = 0.340999127418*t1084*t2922;
  t2989 = t2936*t2642;
  t2993 = t2986 + t2987 + t2989;
  t2730 = -1.000000637725*t2727;
  t2733 = 1. + t2730;
  t2772 = -0.8656776547239999*t2727;
  t2780 = 1. + t2772;
  t2966 = 0.340999127418*t402*t2963;
  t2984 = t2478*t2977;
  t2996 = t2608*t2993;
  t2999 = t2966 + t2984 + t2996;
  t3004 = t2687*t2963;
  t3012 = t2705*t2977;
  t3030 = 0.340999127418*t402*t2993;
  t3032 = t3004 + t3012 + t3030;
  t2795 = -0.930418*t15;
  t2799 = 0. + t2795;
  t3034 = t2744*t2963;
  t3035 = t2749*t2977;
  t3042 = t2753*t2993;
  t3044 = t3034 + t3035 + t3042;
  t2820 = -0.134322983001*t2727;
  t2823 = 1. + t2820;
  t2835 = 0.366501*t15;
  t2839 = 0. + t2835;
  t3098 = t1959*t1495*t1630;
  t3101 = -1.*t1959*t1502*t1770;
  t3103 = t3098 + t3101;
  t3106 = t1959*t1502*t1495;
  t3109 = t1959*t1630*t1770;
  t3111 = t3106 + t3109;
  t3132 = -1.*t2221*t1623;
  t3133 = t3103*t2243;
  t3134 = t3111*t2381;
  t3136 = t3132 + t3133 + t3134;
  t3104 = -0.340999127418*t1432*t3103;
  t3116 = t1847*t3111;
  t3117 = -1.*t1623*t1964;
  t3118 = t3104 + t3116 + t3117;
  t3121 = t2135*t3103;
  t3124 = -0.340999127418*t1432*t3111;
  t3129 = -1.*t1623*t2170;
  t3130 = t3121 + t3124 + t3129;
  t3119 = 0.340999127418*t1084*t3118;
  t3131 = t2126*t3130;
  t3154 = t3136*t2431;
  t3157 = t3119 + t3131 + t3154;
  t3172 = t2500*t3136;
  t3174 = t3118*t2510;
  t3177 = t3130*t2523;
  t3180 = t3172 + t3174 + t3177;
  t3182 = t2615*t3118;
  t3187 = 0.340999127418*t1084*t3130;
  t3193 = t3136*t2642;
  t3194 = t3182 + t3187 + t3193;
  t3170 = 0.340999127418*t402*t3157;
  t3181 = t2478*t3180;
  t3204 = t2608*t3194;
  t3213 = t3170 + t3181 + t3204;
  t3222 = t2687*t3157;
  t3223 = t2705*t3180;
  t3234 = 0.340999127418*t402*t3194;
  t3239 = t3222 + t3223 + t3234;
  t3241 = t2744*t3157;
  t3246 = t2749*t3180;
  t3248 = t2753*t3194;
  t3251 = t3241 + t3246 + t3248;
  t2672 = t34*t2671;
  t2717 = t2684*t2716;
  t2764 = t2733*t2761;
  t2765 = t2672 + t2717 + t2764;
  t2782 = t2780*t2671;
  t2792 = 0.340999127418*t2727*t2716;
  t2801 = t2799*t2761;
  t2808 = t2782 + t2792 + t2801;
  t2818 = 0.340999127418*t2727*t2671;
  t2832 = t2823*t2716;
  t2847 = t2839*t2761;
  t2855 = t2818 + t2832 + t2847;
  t3001 = t34*t2999;
  t3033 = t2684*t3032;
  t3048 = t2733*t3044;
  t3052 = t3001 + t3033 + t3048;
  t3060 = t2780*t2999;
  t3067 = 0.340999127418*t2727*t3032;
  t3068 = t2799*t3044;
  t3070 = t3060 + t3067 + t3068;
  t3076 = 0.340999127418*t2727*t2999;
  t3077 = t2823*t3032;
  t3081 = t2839*t3044;
  t3082 = t3076 + t3077 + t3081;
  t3216 = t34*t3213;
  t3240 = t2684*t3239;
  t3258 = t2733*t3251;
  t3277 = t3216 + t3240 + t3258;
  t3280 = t2780*t3213;
  t3281 = 0.340999127418*t2727*t3239;
  t3283 = t2799*t3251;
  t3285 = t3280 + t3281 + t3283;
  t3291 = 0.340999127418*t2727*t3213;
  t3314 = t2823*t3239;
  t3317 = t2839*t3251;
  t3319 = t3291 + t3314 + t3317;
  p_output1[0]=0.848048*t2765 - 0.493047*t2808 + 0.194216*t2855;
  p_output1[1]=0.848048*t3052 - 0.493047*t3070 + 0.194216*t3082;
  p_output1[2]=0.848048*t3277 - 0.493047*t3285 + 0.194216*t3319;
  p_output1[3]=0.529919*t2765 + 0.789039*t2808 - 0.310811*t2855;
  p_output1[4]=0.529919*t3052 + 0.789039*t3070 - 0.310811*t3082;
  p_output1[5]=0.529919*t3277 + 0.789039*t3285 - 0.310811*t3319;
  p_output1[6]=-0.366501*t2808 - 0.930418*t2855;
  p_output1[7]=-0.366501*t3070 - 0.930418*t3082;
  p_output1[8]=-0.366501*t3285 - 0.930418*t3319;
}



void R_shin_to_tarsus_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

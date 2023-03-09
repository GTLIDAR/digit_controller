/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_elbow_src.h"

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
  double t710;
  double t1358;
  double t1504;
  double t1372;
  double t1511;
  double t1317;
  double t1323;
  double t1324;
  double t1595;
  double t1489;
  double t1520;
  double t1525;
  double t1338;
  double t1602;
  double t1627;
  double t1656;
  double t247;
  double t265;
  double t268;
  double t492;
  double t1087;
  double t1123;
  double t1530;
  double t1684;
  double t1697;
  double t1875;
  double t1882;
  double t1895;
  double t1151;
  double t1279;
  double t1313;
  double t1702;
  double t1813;
  double t1827;
  double t1897;
  double t1905;
  double t1961;
  double t1973;
  double t1996;
  double t1998;
  double t2025;
  double t2039;
  double t2040;
  double t2073;
  double t288;
  double t2160;
  double t2161;
  double t2163;
  double t2169;
  double t2176;
  double t2189;
  double t2198;
  double t2248;
  double t2275;
  double t2297;
  double t2334;
  double t2341;
  double t2368;
  double t2394;
  double t1915;
  double t8;
  double t502;
  double t617;
  double t1908;
  double t1941;
  double t1950;
  double t2139;
  double t2151;
  double t2158;
  double t2316;
  double t2318;
  double t2370;
  double t2373;
  double t2386;
  double t2405;
  double t2437;
  double t2447;
  double t2451;
  double t2458;
  double t2497;
  double t2499;
  double t2532;
  double t2552;
  double t2556;
  double t2557;
  double t2558;
  double t2561;
  double t2569;
  double t2599;
  double t2601;
  double t2605;
  double t16;
  double t22;
  double t2796;
  double t2802;
  double t2803;
  double t2808;
  double t2810;
  double t2819;
  double t2804;
  double t2825;
  double t2830;
  double t2836;
  double t2841;
  double t2842;
  double t2788;
  double t2833;
  double t2847;
  double t2854;
  double t2864;
  double t2865;
  double t2868;
  double t2870;
  double t2875;
  double t2883;
  double t2885;
  double t2890;
  double t2525;
  double t2529;
  double t2637;
  double t2638;
  double t2859;
  double t2873;
  double t2896;
  double t2898;
  double t2645;
  double t2650;
  double t2902;
  double t2903;
  double t2909;
  double t2912;
  double t2932;
  double t2941;
  double t2942;
  double t2950;
  double t2703;
  double t2705;
  double t2708;
  double t2714;
  double t2736;
  double t2738;
  double t3029;
  double t3051;
  double t3052;
  double t3075;
  double t3078;
  double t3080;
  double t3027;
  double t3059;
  double t3082;
  double t3084;
  double t3088;
  double t3091;
  double t3092;
  double t3095;
  double t3099;
  double t3101;
  double t3104;
  double t3106;
  double t3087;
  double t3097;
  double t3117;
  double t3118;
  double t3126;
  double t3132;
  double t3138;
  double t3151;
  double t3155;
  double t3158;
  double t3162;
  double t3164;
  double t2326;
  double t2503;
  double t2616;
  double t2617;
  double t2642;
  double t2654;
  double t2683;
  double t2687;
  double t2707;
  double t2725;
  double t2749;
  double t2750;
  double t2899;
  double t2917;
  double t2951;
  double t2954;
  double t2957;
  double t2960;
  double t2963;
  double t2987;
  double t2993;
  double t3002;
  double t3006;
  double t3015;
  double t3124;
  double t3152;
  double t3166;
  double t3167;
  double t3171;
  double t3175;
  double t3178;
  double t3182;
  double t3194;
  double t3201;
  double t3205;
  double t3206;
  t710 = Cos(var1[3]);
  t1358 = Cos(var1[5]);
  t1504 = Sin(var1[3]);
  t1372 = Sin(var1[4]);
  t1511 = Sin(var1[5]);
  t1317 = Cos(var1[25]);
  t1323 = -1.*t1317;
  t1324 = 1. + t1323;
  t1595 = Cos(var1[24]);
  t1489 = t710*t1358*t1372;
  t1520 = t1504*t1511;
  t1525 = t1489 + t1520;
  t1338 = Sin(var1[24]);
  t1602 = -1.*t1358*t1504;
  t1627 = t710*t1372*t1511;
  t1656 = t1602 + t1627;
  t247 = Cos(var1[26]);
  t265 = -1.*t247;
  t268 = 1. + t265;
  t492 = Sin(var1[26]);
  t1087 = Cos(var1[4]);
  t1123 = Sin(var1[25]);
  t1530 = -1.*t1338*t1525;
  t1684 = t1595*t1656;
  t1697 = t1530 + t1684;
  t1875 = t1595*t1525;
  t1882 = t1338*t1656;
  t1895 = t1875 + t1882;
  t1151 = -0.994522*t1123;
  t1279 = 0. + t1151;
  t1313 = t710*t1087*t1279;
  t1702 = -0.103955395616*t1324*t1697;
  t1813 = -0.9890740084840001*t1324;
  t1827 = 1. + t1813;
  t1897 = t1827*t1895;
  t1905 = t1313 + t1702 + t1897;
  t1961 = -0.104528*t1123;
  t1973 = 0. + t1961;
  t1996 = t710*t1087*t1973;
  t1998 = -0.010926102783999999*t1324;
  t2025 = 1. + t1998;
  t2039 = t2025*t1697;
  t2040 = -0.103955395616*t1324*t1895;
  t2073 = t1996 + t2039 + t2040;
  t288 = -0.49726168403800003*t268;
  t2160 = -1.0000001112680001*t1324;
  t2161 = 1. + t2160;
  t2163 = t2161*t710*t1087;
  t2169 = 0.104528*t1123;
  t2176 = 0. + t2169;
  t2189 = t2176*t1697;
  t2198 = 0.994522*t1123;
  t2248 = 0. + t2198;
  t2275 = t2248*t1895;
  t2297 = t2163 + t2189 + t2275;
  t2334 = Cos(var1[27]);
  t2341 = -1.*t2334;
  t2368 = 1. + t2341;
  t2394 = 0.051978134642000004*t268;
  t1915 = -0.05226439969100001*t268;
  t8 = Sin(var1[27]);
  t502 = 0.073913*t492;
  t617 = t288 + t502;
  t1908 = t617*t1905;
  t1941 = -0.703234*t492;
  t1950 = t1915 + t1941;
  t2139 = t1950*t2073;
  t2151 = -0.500001190325*t268;
  t2158 = 1. + t2151;
  t2316 = t2158*t2297;
  t2318 = t1908 + t2139 + t2316;
  t2370 = -0.5054634410180001*t268;
  t2373 = 1. + t2370;
  t2386 = t2373*t1905;
  t2405 = -0.707107*t492;
  t2437 = t2394 + t2405;
  t2447 = t2437*t2073;
  t2451 = -0.073913*t492;
  t2458 = t288 + t2451;
  t2497 = t2458*t2297;
  t2499 = t2386 + t2447 + t2497;
  t2532 = 0.707107*t492;
  t2552 = t2394 + t2532;
  t2556 = t2552*t1905;
  t2557 = -0.9945383682050002*t268;
  t2558 = 1. + t2557;
  t2561 = t2558*t2073;
  t2569 = 0.703234*t492;
  t2599 = t1915 + t2569;
  t2601 = t2599*t2297;
  t2605 = t2556 + t2561 + t2601;
  t16 = -0.104528*t8;
  t22 = 0. + t16;
  t2796 = t1358*t1504*t1372;
  t2802 = -1.*t710*t1511;
  t2803 = t2796 + t2802;
  t2808 = t710*t1358;
  t2810 = t1504*t1372*t1511;
  t2819 = t2808 + t2810;
  t2804 = -1.*t1338*t2803;
  t2825 = t1595*t2819;
  t2830 = t2804 + t2825;
  t2836 = t1595*t2803;
  t2841 = t1338*t2819;
  t2842 = t2836 + t2841;
  t2788 = t1087*t1279*t1504;
  t2833 = -0.103955395616*t1324*t2830;
  t2847 = t1827*t2842;
  t2854 = t2788 + t2833 + t2847;
  t2864 = t1087*t1973*t1504;
  t2865 = t2025*t2830;
  t2868 = -0.103955395616*t1324*t2842;
  t2870 = t2864 + t2865 + t2868;
  t2875 = t2161*t1087*t1504;
  t2883 = t2176*t2830;
  t2885 = t2248*t2842;
  t2890 = t2875 + t2883 + t2885;
  t2525 = -0.010926102783999999*t2368;
  t2529 = 1. + t2525;
  t2637 = -0.994522*t8;
  t2638 = 0. + t2637;
  t2859 = t617*t2854;
  t2873 = t1950*t2870;
  t2896 = t2158*t2890;
  t2898 = t2859 + t2873 + t2896;
  t2645 = -0.9890740084840001*t2368;
  t2650 = 1. + t2645;
  t2902 = t2373*t2854;
  t2903 = t2437*t2870;
  t2909 = t2458*t2890;
  t2912 = t2902 + t2903 + t2909;
  t2932 = t2552*t2854;
  t2941 = t2558*t2870;
  t2942 = t2599*t2890;
  t2950 = t2932 + t2941 + t2942;
  t2703 = -1.0000001112680001*t2368;
  t2705 = 1. + t2703;
  t2708 = 0.994522*t8;
  t2714 = 0. + t2708;
  t2736 = 0.104528*t8;
  t2738 = 0. + t2736;
  t3029 = -1.*t1087*t1358*t1338;
  t3051 = t1595*t1087*t1511;
  t3052 = t3029 + t3051;
  t3075 = t1595*t1087*t1358;
  t3078 = t1087*t1338*t1511;
  t3080 = t3075 + t3078;
  t3027 = -1.*t1279*t1372;
  t3059 = -0.103955395616*t1324*t3052;
  t3082 = t1827*t3080;
  t3084 = t3027 + t3059 + t3082;
  t3088 = -1.*t1973*t1372;
  t3091 = t2025*t3052;
  t3092 = -0.103955395616*t1324*t3080;
  t3095 = t3088 + t3091 + t3092;
  t3099 = -1.*t2161*t1372;
  t3101 = t2176*t3052;
  t3104 = t2248*t3080;
  t3106 = t3099 + t3101 + t3104;
  t3087 = t617*t3084;
  t3097 = t1950*t3095;
  t3117 = t2158*t3106;
  t3118 = t3087 + t3097 + t3117;
  t3126 = t2373*t3084;
  t3132 = t2437*t3095;
  t3138 = t2458*t3106;
  t3151 = t3126 + t3132 + t3138;
  t3155 = t2552*t3084;
  t3158 = t2558*t3095;
  t3162 = t2599*t3106;
  t3164 = t3155 + t3158 + t3162;
  t2326 = t22*t2318;
  t2503 = -0.103955395616*t2368*t2499;
  t2616 = t2529*t2605;
  t2617 = t2326 + t2503 + t2616;
  t2642 = t2638*t2318;
  t2654 = t2650*t2499;
  t2683 = -0.103955395616*t2368*t2605;
  t2687 = t2642 + t2654 + t2683;
  t2707 = t2705*t2318;
  t2725 = t2714*t2499;
  t2749 = t2738*t2605;
  t2750 = t2707 + t2725 + t2749;
  t2899 = t22*t2898;
  t2917 = -0.103955395616*t2368*t2912;
  t2951 = t2529*t2950;
  t2954 = t2899 + t2917 + t2951;
  t2957 = t2638*t2898;
  t2960 = t2650*t2912;
  t2963 = -0.103955395616*t2368*t2950;
  t2987 = t2957 + t2960 + t2963;
  t2993 = t2705*t2898;
  t3002 = t2714*t2912;
  t3006 = t2738*t2950;
  t3015 = t2993 + t3002 + t3006;
  t3124 = t22*t3118;
  t3152 = -0.103955395616*t2368*t3151;
  t3166 = t2529*t3164;
  t3167 = t3124 + t3152 + t3166;
  t3171 = t2638*t3118;
  t3175 = t2650*t3151;
  t3178 = -0.103955395616*t2368*t3164;
  t3182 = t3171 + t3175 + t3178;
  t3194 = t2705*t3118;
  t3201 = t2714*t3151;
  t3205 = t2738*t3164;
  t3206 = t3194 + t3201 + t3205;
  p_output1[0]=0.040001*t2617 + 0.380588*t2687 + 0.92388*t2750;
  p_output1[1]=0.040001*t2954 + 0.380588*t2987 + 0.92388*t3015;
  p_output1[2]=0.040001*t3167 + 0.380588*t3182 + 0.92388*t3206;
  p_output1[3]=0.096572*t2617 + 0.918819*t2687 - 0.382684*t2750;
  p_output1[4]=0.096572*t2954 + 0.918819*t2987 - 0.382684*t3015;
  p_output1[5]=0.096572*t3167 + 0.918819*t3182 - 0.382684*t3206;
  p_output1[6]=-0.994522*t2617 + 0.104528*t2687;
  p_output1[7]=-0.994522*t2954 + 0.104528*t2987;
  p_output1[8]=-0.994522*t3167 + 0.104528*t3182;
}



void R_right_elbow_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

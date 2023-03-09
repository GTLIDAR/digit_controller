/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_elbow_src.h"

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
  double t543;
  double t1289;
  double t1449;
  double t1367;
  double t1481;
  double t1180;
  double t1205;
  double t1208;
  double t1543;
  double t1401;
  double t1500;
  double t1516;
  double t1211;
  double t1544;
  double t1545;
  double t1550;
  double t93;
  double t155;
  double t169;
  double t252;
  double t671;
  double t687;
  double t1531;
  double t1557;
  double t1559;
  double t1686;
  double t1690;
  double t1718;
  double t752;
  double t1086;
  double t1109;
  double t1592;
  double t1675;
  double t1685;
  double t1728;
  double t1752;
  double t1900;
  double t1935;
  double t1943;
  double t1945;
  double t1957;
  double t1995;
  double t2001;
  double t2067;
  double t203;
  double t2162;
  double t2169;
  double t2181;
  double t2182;
  double t2183;
  double t2184;
  double t2187;
  double t2241;
  double t2254;
  double t2267;
  double t2316;
  double t2341;
  double t2343;
  double t2380;
  double t1850;
  double t17;
  double t319;
  double t353;
  double t1792;
  double t1861;
  double t1892;
  double t2071;
  double t2120;
  double t2159;
  double t2296;
  double t2304;
  double t2358;
  double t2369;
  double t2375;
  double t2385;
  double t2403;
  double t2414;
  double t2421;
  double t2422;
  double t2423;
  double t2430;
  double t2511;
  double t2526;
  double t2570;
  double t2575;
  double t2577;
  double t2585;
  double t2587;
  double t2588;
  double t2590;
  double t2618;
  double t26;
  double t27;
  double t2831;
  double t2842;
  double t2846;
  double t2851;
  double t2853;
  double t2860;
  double t2850;
  double t2869;
  double t2872;
  double t2883;
  double t2887;
  double t2890;
  double t2829;
  double t2879;
  double t2909;
  double t2911;
  double t2917;
  double t2919;
  double t2932;
  double t2934;
  double t2963;
  double t2976;
  double t2983;
  double t2985;
  double t2487;
  double t2504;
  double t2638;
  double t2643;
  double t2914;
  double t2935;
  double t2986;
  double t2992;
  double t2718;
  double t2722;
  double t2997;
  double t3011;
  double t3012;
  double t3028;
  double t3030;
  double t3031;
  double t3036;
  double t3038;
  double t2751;
  double t2762;
  double t2770;
  double t2781;
  double t2799;
  double t2803;
  double t3112;
  double t3117;
  double t3123;
  double t3126;
  double t3130;
  double t3133;
  double t3106;
  double t3125;
  double t3139;
  double t3141;
  double t3153;
  double t3156;
  double t3157;
  double t3169;
  double t3191;
  double t3200;
  double t3203;
  double t3221;
  double t3144;
  double t3182;
  double t3222;
  double t3223;
  double t3234;
  double t3236;
  double t3240;
  double t3253;
  double t3259;
  double t3262;
  double t3264;
  double t3266;
  double t2308;
  double t2476;
  double t2619;
  double t2630;
  double t2697;
  double t2727;
  double t2742;
  double t2744;
  double t2769;
  double t2798;
  double t2808;
  double t2812;
  double t2995;
  double t3029;
  double t3039;
  double t3042;
  double t3047;
  double t3048;
  double t3049;
  double t3051;
  double t3067;
  double t3068;
  double t3070;
  double t3082;
  double t3232;
  double t3255;
  double t3267;
  double t3268;
  double t3276;
  double t3279;
  double t3282;
  double t3288;
  double t3291;
  double t3292;
  double t3294;
  double t3296;
  t543 = Cos(var1[3]);
  t1289 = Cos(var1[5]);
  t1449 = Sin(var1[3]);
  t1367 = Sin(var1[4]);
  t1481 = Sin(var1[5]);
  t1180 = Cos(var1[14]);
  t1205 = -1.*t1180;
  t1208 = 1. + t1205;
  t1543 = Cos(var1[13]);
  t1401 = t543*t1289*t1367;
  t1500 = t1449*t1481;
  t1516 = t1401 + t1500;
  t1211 = Sin(var1[13]);
  t1544 = -1.*t1289*t1449;
  t1545 = t543*t1367*t1481;
  t1550 = t1544 + t1545;
  t93 = Cos(var1[15]);
  t155 = -1.*t93;
  t169 = 1. + t155;
  t252 = Sin(var1[15]);
  t671 = Cos(var1[4]);
  t687 = Sin(var1[14]);
  t1531 = -1.*t1211*t1516;
  t1557 = t1543*t1550;
  t1559 = t1531 + t1557;
  t1686 = t1543*t1516;
  t1690 = t1211*t1550;
  t1718 = t1686 + t1690;
  t752 = 0.994522*t687;
  t1086 = 0. + t752;
  t1109 = t543*t671*t1086;
  t1592 = 0.103955395616*t1208*t1559;
  t1675 = -0.9890740084840001*t1208;
  t1685 = 1. + t1675;
  t1728 = t1685*t1718;
  t1752 = t1109 + t1592 + t1728;
  t1900 = -0.104528*t687;
  t1935 = 0. + t1900;
  t1943 = t543*t671*t1935;
  t1945 = -0.010926102783999999*t1208;
  t1957 = 1. + t1945;
  t1995 = t1957*t1559;
  t2001 = 0.103955395616*t1208*t1718;
  t2067 = t1943 + t1995 + t2001;
  t203 = -0.49726168403800003*t169;
  t2162 = -1.0000001112680001*t1208;
  t2169 = 1. + t2162;
  t2181 = t2169*t543*t671;
  t2182 = 0.104528*t687;
  t2183 = 0. + t2182;
  t2184 = t2183*t1559;
  t2187 = -0.994522*t687;
  t2241 = 0. + t2187;
  t2254 = t2241*t1718;
  t2267 = t2181 + t2184 + t2254;
  t2316 = Cos(var1[16]);
  t2341 = -1.*t2316;
  t2343 = 1. + t2341;
  t2380 = -0.051978134642000004*t169;
  t1850 = 0.05226439969100001*t169;
  t17 = Sin(var1[16]);
  t319 = -0.073913*t252;
  t353 = t203 + t319;
  t1792 = t353*t1752;
  t1861 = -0.703234*t252;
  t1892 = t1850 + t1861;
  t2071 = t1892*t2067;
  t2120 = -0.500001190325*t169;
  t2159 = 1. + t2120;
  t2296 = t2159*t2267;
  t2304 = t1792 + t2071 + t2296;
  t2358 = -0.5054634410180001*t169;
  t2369 = 1. + t2358;
  t2375 = t2369*t1752;
  t2385 = -0.707107*t252;
  t2403 = t2380 + t2385;
  t2414 = t2403*t2067;
  t2421 = 0.073913*t252;
  t2422 = t203 + t2421;
  t2423 = t2422*t2267;
  t2430 = t2375 + t2414 + t2423;
  t2511 = 0.707107*t252;
  t2526 = t2380 + t2511;
  t2570 = t2526*t1752;
  t2575 = -0.9945383682050002*t169;
  t2577 = 1. + t2575;
  t2585 = t2577*t2067;
  t2587 = 0.703234*t252;
  t2588 = t1850 + t2587;
  t2590 = t2588*t2267;
  t2618 = t2570 + t2585 + t2590;
  t26 = -0.104528*t17;
  t27 = 0. + t26;
  t2831 = t1289*t1449*t1367;
  t2842 = -1.*t543*t1481;
  t2846 = t2831 + t2842;
  t2851 = t543*t1289;
  t2853 = t1449*t1367*t1481;
  t2860 = t2851 + t2853;
  t2850 = -1.*t1211*t2846;
  t2869 = t1543*t2860;
  t2872 = t2850 + t2869;
  t2883 = t1543*t2846;
  t2887 = t1211*t2860;
  t2890 = t2883 + t2887;
  t2829 = t671*t1086*t1449;
  t2879 = 0.103955395616*t1208*t2872;
  t2909 = t1685*t2890;
  t2911 = t2829 + t2879 + t2909;
  t2917 = t671*t1935*t1449;
  t2919 = t1957*t2872;
  t2932 = 0.103955395616*t1208*t2890;
  t2934 = t2917 + t2919 + t2932;
  t2963 = t2169*t671*t1449;
  t2976 = t2183*t2872;
  t2983 = t2241*t2890;
  t2985 = t2963 + t2976 + t2983;
  t2487 = -0.010926102783999999*t2343;
  t2504 = 1. + t2487;
  t2638 = 0.994522*t17;
  t2643 = 0. + t2638;
  t2914 = t353*t2911;
  t2935 = t1892*t2934;
  t2986 = t2159*t2985;
  t2992 = t2914 + t2935 + t2986;
  t2718 = -0.9890740084840001*t2343;
  t2722 = 1. + t2718;
  t2997 = t2369*t2911;
  t3011 = t2403*t2934;
  t3012 = t2422*t2985;
  t3028 = t2997 + t3011 + t3012;
  t3030 = t2526*t2911;
  t3031 = t2577*t2934;
  t3036 = t2588*t2985;
  t3038 = t3030 + t3031 + t3036;
  t2751 = -1.0000001112680001*t2343;
  t2762 = 1. + t2751;
  t2770 = -0.994522*t17;
  t2781 = 0. + t2770;
  t2799 = 0.104528*t17;
  t2803 = 0. + t2799;
  t3112 = -1.*t671*t1289*t1211;
  t3117 = t1543*t671*t1481;
  t3123 = t3112 + t3117;
  t3126 = t1543*t671*t1289;
  t3130 = t671*t1211*t1481;
  t3133 = t3126 + t3130;
  t3106 = -1.*t1086*t1367;
  t3125 = 0.103955395616*t1208*t3123;
  t3139 = t1685*t3133;
  t3141 = t3106 + t3125 + t3139;
  t3153 = -1.*t1935*t1367;
  t3156 = t1957*t3123;
  t3157 = 0.103955395616*t1208*t3133;
  t3169 = t3153 + t3156 + t3157;
  t3191 = -1.*t2169*t1367;
  t3200 = t2183*t3123;
  t3203 = t2241*t3133;
  t3221 = t3191 + t3200 + t3203;
  t3144 = t353*t3141;
  t3182 = t1892*t3169;
  t3222 = t2159*t3221;
  t3223 = t3144 + t3182 + t3222;
  t3234 = t2369*t3141;
  t3236 = t2403*t3169;
  t3240 = t2422*t3221;
  t3253 = t3234 + t3236 + t3240;
  t3259 = t2526*t3141;
  t3262 = t2577*t3169;
  t3264 = t2588*t3221;
  t3266 = t3259 + t3262 + t3264;
  t2308 = t27*t2304;
  t2476 = 0.103955395616*t2343*t2430;
  t2619 = t2504*t2618;
  t2630 = t2308 + t2476 + t2619;
  t2697 = t2643*t2304;
  t2727 = t2722*t2430;
  t2742 = 0.103955395616*t2343*t2618;
  t2744 = t2697 + t2727 + t2742;
  t2769 = t2762*t2304;
  t2798 = t2781*t2430;
  t2808 = t2803*t2618;
  t2812 = t2769 + t2798 + t2808;
  t2995 = t27*t2992;
  t3029 = 0.103955395616*t2343*t3028;
  t3039 = t2504*t3038;
  t3042 = t2995 + t3029 + t3039;
  t3047 = t2643*t2992;
  t3048 = t2722*t3028;
  t3049 = 0.103955395616*t2343*t3038;
  t3051 = t3047 + t3048 + t3049;
  t3067 = t2762*t2992;
  t3068 = t2781*t3028;
  t3070 = t2803*t3038;
  t3082 = t3067 + t3068 + t3070;
  t3232 = t27*t3223;
  t3255 = 0.103955395616*t2343*t3253;
  t3267 = t2504*t3266;
  t3268 = t3232 + t3255 + t3267;
  t3276 = t2643*t3223;
  t3279 = t2722*t3253;
  t3282 = 0.103955395616*t2343*t3266;
  t3288 = t3276 + t3279 + t3282;
  t3291 = t2762*t3223;
  t3292 = t2781*t3253;
  t3294 = t2803*t3266;
  t3296 = t3291 + t3292 + t3294;
  p_output1[0]=-0.040001*t2630 + 0.380588*t2744 + 0.92388*t2812;
  p_output1[1]=-0.040001*t3042 + 0.380588*t3051 + 0.92388*t3082;
  p_output1[2]=-0.040001*t3268 + 0.380588*t3288 + 0.92388*t3296;
  p_output1[3]=0.096572*t2630 - 0.918819*t2744 + 0.382684*t2812;
  p_output1[4]=0.096572*t3042 - 0.918819*t3051 + 0.382684*t3082;
  p_output1[5]=0.096572*t3268 - 0.918819*t3288 + 0.382684*t3296;
  p_output1[6]=0.994522*t2630 + 0.104528*t2744;
  p_output1[7]=0.994522*t3042 + 0.104528*t3051;
  p_output1[8]=0.994522*t3268 + 0.104528*t3288;
}



void R_left_elbow_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

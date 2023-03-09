/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_right_tarsus_src.h"

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
  double t246;
  double t1045;
  double t1054;
  double t1049;
  double t1160;
  double t740;
  double t827;
  double t982;
  double t1252;
  double t1052;
  double t1218;
  double t1232;
  double t1030;
  double t1281;
  double t1310;
  double t1326;
  double t69;
  double t299;
  double t357;
  double t1233;
  double t1401;
  double t1420;
  double t1472;
  double t1654;
  double t1666;
  double t1897;
  double t1901;
  double t1977;
  double t358;
  double t400;
  double t419;
  double t1444;
  double t1448;
  double t1470;
  double t1675;
  double t1713;
  double t1809;
  double t1810;
  double t1815;
  double t1828;
  double t1862;
  double t1867;
  double t1874;
  double t1889;
  double t2033;
  double t2036;
  double t2048;
  double t2052;
  double t2068;
  double t2071;
  double t2093;
  double t2096;
  double t2097;
  double t2098;
  double t2128;
  double t2132;
  double t2133;
  double t27;
  double t39;
  double t80;
  double t100;
  double t1782;
  double t1784;
  double t1798;
  double t1896;
  double t2026;
  double t2028;
  double t2101;
  double t2102;
  double t2140;
  double t2142;
  double t2187;
  double t2195;
  double t2198;
  double t2201;
  double t2225;
  double t2229;
  double t2245;
  double t2253;
  double t2255;
  double t2266;
  double t2279;
  double t2283;
  double t2305;
  double t2315;
  double t2373;
  double t2380;
  double t2385;
  double t46;
  double t55;
  double t2104;
  double t2231;
  double t2238;
  double t2241;
  double t2321;
  double t2322;
  double t2342;
  double t2344;
  double t2346;
  double t2351;
  double t2352;
  double t2354;
  double t2355;
  double t2356;
  double t2395;
  double t2401;
  double t2404;
  double t2406;
  double t2408;
  double t2419;
  double t2422;
  double t2429;
  double t2430;
  double t2431;
  double t29;
  double t30;
  double t2575;
  double t2578;
  double t2579;
  double t2583;
  double t2588;
  double t2589;
  double t2581;
  double t2591;
  double t2594;
  double t2605;
  double t2613;
  double t2615;
  double t2570;
  double t2597;
  double t2616;
  double t2626;
  double t2635;
  double t2638;
  double t2640;
  double t2645;
  double t2662;
  double t2666;
  double t2667;
  double t2669;
  double t2329;
  double t2341;
  double t2629;
  double t2646;
  double t2670;
  double t2675;
  double t2703;
  double t2709;
  double t2756;
  double t2760;
  double t2764;
  double t2771;
  double t2774;
  double t2782;
  double t2386;
  double t2392;
  double t2459;
  double t2463;
  double t2702;
  double t2763;
  double t2785;
  double t2791;
  double t2798;
  double t2813;
  double t2814;
  double t2822;
  double t2490;
  double t2491;
  double t2829;
  double t2831;
  double t2832;
  double t2833;
  double t2515;
  double t2517;
  double t2534;
  double t2535;
  double t2887;
  double t2891;
  double t2894;
  double t2905;
  double t2907;
  double t2908;
  double t2881;
  double t2902;
  double t2913;
  double t2920;
  double t2932;
  double t2933;
  double t2935;
  double t2936;
  double t2942;
  double t2943;
  double t2945;
  double t2947;
  double t2926;
  double t2940;
  double t2959;
  double t2963;
  double t2966;
  double t2967;
  double t2968;
  double t2988;
  double t2992;
  double t2994;
  double t2995;
  double t2996;
  double t2965;
  double t2991;
  double t3006;
  double t3009;
  double t3012;
  double t3014;
  double t3015;
  double t3020;
  double t3026;
  double t3028;
  double t3029;
  double t3030;
  double t2324;
  double t2364;
  double t2441;
  double t2449;
  double t2471;
  double t2489;
  double t2494;
  double t2504;
  double t2513;
  double t2519;
  double t2548;
  double t2555;
  double t2797;
  double t2823;
  double t2838;
  double t2839;
  double t2842;
  double t2849;
  double t2853;
  double t2856;
  double t2858;
  double t2859;
  double t2860;
  double t2861;
  double t3010;
  double t3022;
  double t3031;
  double t3032;
  double t3044;
  double t3045;
  double t3047;
  double t3049;
  double t3052;
  double t3053;
  double t3054;
  double t3056;
  t246 = Cos(var1[3]);
  t1045 = Cos(var1[5]);
  t1054 = Sin(var1[3]);
  t1049 = Sin(var1[4]);
  t1160 = Sin(var1[5]);
  t740 = Cos(var1[18]);
  t827 = -1.*t740;
  t982 = 1. + t827;
  t1252 = Cos(var1[17]);
  t1052 = t246*t1045*t1049;
  t1218 = t1054*t1160;
  t1232 = t1052 + t1218;
  t1030 = Sin(var1[17]);
  t1281 = -1.*t1045*t1054;
  t1310 = t246*t1049*t1160;
  t1326 = t1281 + t1310;
  t69 = Sin(var1[19]);
  t299 = Cos(var1[4]);
  t357 = Sin(var1[18]);
  t1233 = -1.*t1030*t1232;
  t1401 = t1252*t1326;
  t1420 = t1233 + t1401;
  t1472 = t1252*t1232;
  t1654 = t1030*t1326;
  t1666 = t1472 + t1654;
  t1897 = Cos(var1[19]);
  t1901 = -1.*t1897;
  t1977 = 1. + t1901;
  t358 = -0.366501*t357;
  t400 = 0. + t358;
  t419 = t246*t299*t400;
  t1444 = 0.340999127418*t982*t1420;
  t1448 = -0.134322983001*t982;
  t1470 = 1. + t1448;
  t1675 = t1470*t1666;
  t1713 = t419 + t1444 + t1675;
  t1809 = 0.930418*t357;
  t1810 = 0. + t1809;
  t1815 = t246*t299*t1810;
  t1828 = -0.8656776547239999*t982;
  t1862 = 1. + t1828;
  t1867 = t1862*t1420;
  t1874 = 0.340999127418*t982*t1666;
  t1889 = t1815 + t1867 + t1874;
  t2033 = -1.000000637725*t982;
  t2036 = 1. + t2033;
  t2048 = t2036*t246*t299;
  t2052 = -0.930418*t357;
  t2068 = 0. + t2052;
  t2071 = t2068*t1420;
  t2093 = 0.366501*t357;
  t2096 = 0. + t2093;
  t2097 = t2096*t1666;
  t2098 = t2048 + t2071 + t2097;
  t2128 = Cos(var1[20]);
  t2132 = -1.*t2128;
  t2133 = 1. + t2132;
  t27 = Sin(var1[21]);
  t39 = Sin(var1[20]);
  t80 = 0.930418*t69;
  t100 = 0. + t80;
  t1782 = t100*t1713;
  t1784 = 0.366501*t69;
  t1798 = 0. + t1784;
  t1896 = t1798*t1889;
  t2026 = -1.000000637725*t1977;
  t2028 = 1. + t2026;
  t2101 = t2028*t2098;
  t2102 = t1782 + t1896 + t2101;
  t2140 = -0.8656776547239999*t1977;
  t2142 = 1. + t2140;
  t2187 = t2142*t1713;
  t2195 = -0.340999127418*t1977*t1889;
  t2198 = -0.930418*t69;
  t2201 = 0. + t2198;
  t2225 = t2201*t2098;
  t2229 = t2187 + t2195 + t2225;
  t2245 = -0.340999127418*t1977*t1713;
  t2253 = -0.134322983001*t1977;
  t2255 = 1. + t2253;
  t2266 = t2255*t1889;
  t2279 = -0.366501*t69;
  t2283 = 0. + t2279;
  t2305 = t2283*t2098;
  t2315 = t2245 + t2266 + t2305;
  t2373 = Cos(var1[21]);
  t2380 = -1.*t2373;
  t2385 = 1. + t2380;
  t46 = 0.366501*t39;
  t55 = 0. + t46;
  t2104 = t55*t2102;
  t2231 = -0.340999127418*t2133*t2229;
  t2238 = -0.134322983001*t2133;
  t2241 = 1. + t2238;
  t2321 = t2241*t2315;
  t2322 = t2104 + t2231 + t2321;
  t2342 = 0.930418*t39;
  t2344 = 0. + t2342;
  t2346 = t2344*t2102;
  t2351 = -0.8656776547239999*t2133;
  t2352 = 1. + t2351;
  t2354 = t2352*t2229;
  t2355 = -0.340999127418*t2133*t2315;
  t2356 = t2346 + t2354 + t2355;
  t2395 = -1.000000637725*t2133;
  t2401 = 1. + t2395;
  t2404 = t2401*t2102;
  t2406 = -0.930418*t39;
  t2408 = 0. + t2406;
  t2419 = t2408*t2229;
  t2422 = -0.366501*t39;
  t2429 = 0. + t2422;
  t2430 = t2429*t2315;
  t2431 = t2404 + t2419 + t2430;
  t29 = -0.366501*t27;
  t30 = 0. + t29;
  t2575 = t1045*t1054*t1049;
  t2578 = -1.*t246*t1160;
  t2579 = t2575 + t2578;
  t2583 = t246*t1045;
  t2588 = t1054*t1049*t1160;
  t2589 = t2583 + t2588;
  t2581 = -1.*t1030*t2579;
  t2591 = t1252*t2589;
  t2594 = t2581 + t2591;
  t2605 = t1252*t2579;
  t2613 = t1030*t2589;
  t2615 = t2605 + t2613;
  t2570 = t299*t400*t1054;
  t2597 = 0.340999127418*t982*t2594;
  t2616 = t1470*t2615;
  t2626 = t2570 + t2597 + t2616;
  t2635 = t299*t1810*t1054;
  t2638 = t1862*t2594;
  t2640 = 0.340999127418*t982*t2615;
  t2645 = t2635 + t2638 + t2640;
  t2662 = t2036*t299*t1054;
  t2666 = t2068*t2594;
  t2667 = t2096*t2615;
  t2669 = t2662 + t2666 + t2667;
  t2329 = -0.930418*t27;
  t2341 = 0. + t2329;
  t2629 = t100*t2626;
  t2646 = t1798*t2645;
  t2670 = t2028*t2669;
  t2675 = t2629 + t2646 + t2670;
  t2703 = t2142*t2626;
  t2709 = -0.340999127418*t1977*t2645;
  t2756 = t2201*t2669;
  t2760 = t2703 + t2709 + t2756;
  t2764 = -0.340999127418*t1977*t2626;
  t2771 = t2255*t2645;
  t2774 = t2283*t2669;
  t2782 = t2764 + t2771 + t2774;
  t2386 = -1.000000637725*t2385;
  t2392 = 1. + t2386;
  t2459 = -0.134322983001*t2385;
  t2463 = 1. + t2459;
  t2702 = t55*t2675;
  t2763 = -0.340999127418*t2133*t2760;
  t2785 = t2241*t2782;
  t2791 = t2702 + t2763 + t2785;
  t2798 = t2344*t2675;
  t2813 = t2352*t2760;
  t2814 = -0.340999127418*t2133*t2782;
  t2822 = t2798 + t2813 + t2814;
  t2490 = 0.366501*t27;
  t2491 = 0. + t2490;
  t2829 = t2401*t2675;
  t2831 = t2408*t2760;
  t2832 = t2429*t2782;
  t2833 = t2829 + t2831 + t2832;
  t2515 = -0.8656776547239999*t2385;
  t2517 = 1. + t2515;
  t2534 = 0.930418*t27;
  t2535 = 0. + t2534;
  t2887 = -1.*t299*t1045*t1030;
  t2891 = t1252*t299*t1160;
  t2894 = t2887 + t2891;
  t2905 = t1252*t299*t1045;
  t2907 = t299*t1030*t1160;
  t2908 = t2905 + t2907;
  t2881 = -1.*t400*t1049;
  t2902 = 0.340999127418*t982*t2894;
  t2913 = t1470*t2908;
  t2920 = t2881 + t2902 + t2913;
  t2932 = -1.*t1810*t1049;
  t2933 = t1862*t2894;
  t2935 = 0.340999127418*t982*t2908;
  t2936 = t2932 + t2933 + t2935;
  t2942 = -1.*t2036*t1049;
  t2943 = t2068*t2894;
  t2945 = t2096*t2908;
  t2947 = t2942 + t2943 + t2945;
  t2926 = t100*t2920;
  t2940 = t1798*t2936;
  t2959 = t2028*t2947;
  t2963 = t2926 + t2940 + t2959;
  t2966 = t2142*t2920;
  t2967 = -0.340999127418*t1977*t2936;
  t2968 = t2201*t2947;
  t2988 = t2966 + t2967 + t2968;
  t2992 = -0.340999127418*t1977*t2920;
  t2994 = t2255*t2936;
  t2995 = t2283*t2947;
  t2996 = t2992 + t2994 + t2995;
  t2965 = t55*t2963;
  t2991 = -0.340999127418*t2133*t2988;
  t3006 = t2241*t2996;
  t3009 = t2965 + t2991 + t3006;
  t3012 = t2344*t2963;
  t3014 = t2352*t2988;
  t3015 = -0.340999127418*t2133*t2996;
  t3020 = t3012 + t3014 + t3015;
  t3026 = t2401*t2963;
  t3028 = t2408*t2988;
  t3029 = t2429*t2996;
  t3030 = t3026 + t3028 + t3029;
  t2324 = t30*t2322;
  t2364 = t2341*t2356;
  t2441 = t2392*t2431;
  t2449 = t2324 + t2364 + t2441;
  t2471 = t2463*t2322;
  t2489 = -0.340999127418*t2385*t2356;
  t2494 = t2491*t2431;
  t2504 = t2471 + t2489 + t2494;
  t2513 = -0.340999127418*t2385*t2322;
  t2519 = t2517*t2356;
  t2548 = t2535*t2431;
  t2555 = t2513 + t2519 + t2548;
  t2797 = t30*t2791;
  t2823 = t2341*t2822;
  t2838 = t2392*t2833;
  t2839 = t2797 + t2823 + t2838;
  t2842 = t2463*t2791;
  t2849 = -0.340999127418*t2385*t2822;
  t2853 = t2491*t2833;
  t2856 = t2842 + t2849 + t2853;
  t2858 = -0.340999127418*t2385*t2791;
  t2859 = t2517*t2822;
  t2860 = t2535*t2833;
  t2861 = t2858 + t2859 + t2860;
  t3010 = t30*t3009;
  t3022 = t2341*t3020;
  t3031 = t2392*t3030;
  t3032 = t3010 + t3022 + t3031;
  t3044 = t2463*t3009;
  t3045 = -0.340999127418*t2385*t3020;
  t3047 = t2491*t3030;
  t3049 = t3044 + t3045 + t3047;
  t3052 = -0.340999127418*t2385*t3009;
  t3053 = t2517*t3020;
  t3054 = t2535*t3030;
  t3056 = t3052 + t3053 + t3054;
  p_output1[0]=0.848048*t2449 - 0.194216*t2504 - 0.493047*t2555;
  p_output1[1]=0.848048*t2839 - 0.194216*t2856 - 0.493047*t2861;
  p_output1[2]=0.848048*t3032 - 0.194216*t3049 - 0.493047*t3056;
  p_output1[3]=-0.529919*t2449 - 0.310811*t2504 - 0.789039*t2555;
  p_output1[4]=-0.529919*t2839 - 0.310811*t2856 - 0.789039*t2861;
  p_output1[5]=-0.529919*t3032 - 0.310811*t3049 - 0.789039*t3056;
  p_output1[6]=0.930418*t2504 - 0.366501*t2555;
  p_output1[7]=0.930418*t2856 - 0.366501*t2861;
  p_output1[8]=0.930418*t3049 - 0.366501*t3056;
}



void R_right_tarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

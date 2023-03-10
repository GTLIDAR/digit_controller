/*
 * Automatically Generated from Mathematica.
 * Sun 16 Oct 2022 22:00:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottomFront_src.h"

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
  double t736;
  double t1239;
  double t1399;
  double t1241;
  double t1401;
  double t1193;
  double t1194;
  double t1210;
  double t1493;
  double t1321;
  double t1402;
  double t1461;
  double t1216;
  double t1516;
  double t1519;
  double t1534;
  double t479;
  double t920;
  double t1029;
  double t1486;
  double t1538;
  double t1556;
  double t1615;
  double t1634;
  double t1679;
  double t1854;
  double t1858;
  double t1880;
  double t1050;
  double t1164;
  double t1185;
  double t1565;
  double t1573;
  double t1611;
  double t1703;
  double t1705;
  double t1791;
  double t1792;
  double t1793;
  double t1797;
  double t1799;
  double t1800;
  double t1838;
  double t1849;
  double t1934;
  double t1938;
  double t1941;
  double t1942;
  double t1944;
  double t1988;
  double t1993;
  double t1999;
  double t2008;
  double t2017;
  double t2064;
  double t2069;
  double t2083;
  double t226;
  double t372;
  double t533;
  double t542;
  double t1717;
  double t1742;
  double t1789;
  double t1852;
  double t1903;
  double t1922;
  double t2029;
  double t2031;
  double t2091;
  double t2136;
  double t2138;
  double t2144;
  double t2146;
  double t2150;
  double t2152;
  double t2153;
  double t2164;
  double t2179;
  double t2180;
  double t2181;
  double t2183;
  double t2186;
  double t2188;
  double t2192;
  double t2316;
  double t2327;
  double t2329;
  double t417;
  double t419;
  double t2033;
  double t2154;
  double t2157;
  double t2159;
  double t2201;
  double t2213;
  double t2281;
  double t2282;
  double t2288;
  double t2291;
  double t2292;
  double t2293;
  double t2302;
  double t2306;
  double t2340;
  double t2345;
  double t2349;
  double t2351;
  double t2354;
  double t2355;
  double t2357;
  double t2365;
  double t2366;
  double t2371;
  double t2379;
  double t2381;
  double t2385;
  double t106;
  double t114;
  double t119;
  double t187;
  double t235;
  double t312;
  double t2264;
  double t2271;
  double t2274;
  double t2311;
  double t2335;
  double t2337;
  double t2372;
  double t2374;
  double t2388;
  double t2392;
  double t2395;
  double t2408;
  double t2415;
  double t2421;
  double t2422;
  double t2424;
  double t2466;
  double t2471;
  double t2472;
  double t2473;
  double t2474;
  double t2484;
  double t2485;
  double t2489;
  double t157;
  double t208;
  double t211;
  double t2376;
  double t2426;
  double t2441;
  double t2455;
  double t2502;
  double t2506;
  double t139;
  double t2516;
  double t2518;
  double t2519;
  double t2520;
  double t2527;
  double t2530;
  double t2531;
  double t2532;
  double t2545;
  double t2546;
  double t2547;
  double t2552;
  double t2555;
  double t2556;
  double t2557;
  double t2563;
  double t2566;
  double t2568;
  double t159;
  double t176;
  double t2630;
  double t2635;
  double t2638;
  double t2640;
  double t2643;
  double t2644;
  double t2639;
  double t2645;
  double t2647;
  double t2649;
  double t2651;
  double t2657;
  double t2628;
  double t2648;
  double t2658;
  double t2660;
  double t2666;
  double t2670;
  double t2672;
  double t2674;
  double t2683;
  double t2684;
  double t2685;
  double t2686;
  double t2662;
  double t2675;
  double t2692;
  double t2695;
  double t2704;
  double t2705;
  double t2706;
  double t2707;
  double t2711;
  double t2713;
  double t2714;
  double t2717;
  double t2703;
  double t2709;
  double t2721;
  double t2727;
  double t2732;
  double t2737;
  double t2739;
  double t2743;
  double t2746;
  double t2747;
  double t2748;
  double t2754;
  double t2512;
  double t2514;
  double t2729;
  double t2744;
  double t2755;
  double t2764;
  double t2788;
  double t2789;
  double t2797;
  double t2803;
  double t2809;
  double t2821;
  double t2832;
  double t2840;
  double t2535;
  double t2539;
  double t2542;
  double t2596;
  double t2604;
  double t2777;
  double t2806;
  double t2842;
  double t2843;
  double t2607;
  double t2611;
  double t2846;
  double t2848;
  double t2854;
  double t2855;
  double t2614;
  double t2615;
  double t2616;
  double t2864;
  double t2866;
  double t2868;
  double t2871;
  double t2889;
  double t2892;
  double t2901;
  double t2906;
  double t2910;
  double t2911;
  double t2888;
  double t2905;
  double t2912;
  double t2915;
  double t2917;
  double t2924;
  double t2925;
  double t2927;
  double t2942;
  double t2946;
  double t2958;
  double t2961;
  double t2916;
  double t2936;
  double t2964;
  double t2966;
  double t2975;
  double t2986;
  double t2987;
  double t2988;
  double t2999;
  double t3003;
  double t3004;
  double t3005;
  double t2972;
  double t2991;
  double t3007;
  double t3008;
  double t3019;
  double t3022;
  double t3023;
  double t3026;
  double t3033;
  double t3036;
  double t3037;
  double t3045;
  double t3010;
  double t3028;
  double t3054;
  double t3055;
  double t3062;
  double t3069;
  double t3079;
  double t3080;
  double t3088;
  double t3089;
  double t3091;
  double t3095;
  double t3058;
  double t3086;
  double t3098;
  double t3100;
  double t3106;
  double t3107;
  double t3108;
  double t3112;
  double t3117;
  double t3118;
  double t3120;
  double t3121;
  double t2507;
  double t2533;
  double t2578;
  double t2581;
  double t2606;
  double t2613;
  double t2618;
  double t2621;
  double t3145;
  double t3147;
  double t3149;
  double t3150;
  double t3155;
  double t3156;
  double t2845;
  double t2861;
  double t2872;
  double t2876;
  double t2878;
  double t2879;
  double t2880;
  double t2881;
  double t3101;
  double t3114;
  double t3123;
  double t3124;
  double t3127;
  double t3129;
  double t3131;
  double t3136;
  double t3148;
  double t3154;
  double t3157;
  double t3162;
  double t3171;
  double t3172;
  double t3173;
  double t3177;
  double t3203;
  double t3205;
  double t3210;
  double t3211;
  t736 = Cos(var1[3]);
  t1239 = Cos(var1[5]);
  t1399 = Sin(var1[3]);
  t1241 = Sin(var1[4]);
  t1401 = Sin(var1[5]);
  t1193 = Cos(var1[14]);
  t1194 = -1.*t1193;
  t1210 = 1. + t1194;
  t1493 = Cos(var1[13]);
  t1321 = t736*t1239*t1241;
  t1402 = t1399*t1401;
  t1461 = t1321 + t1402;
  t1216 = Sin(var1[13]);
  t1516 = -1.*t1239*t1399;
  t1519 = t736*t1241*t1401;
  t1534 = t1516 + t1519;
  t479 = Sin(var1[15]);
  t920 = Cos(var1[4]);
  t1029 = Sin(var1[14]);
  t1486 = -1.*t1216*t1461;
  t1538 = t1493*t1534;
  t1556 = t1486 + t1538;
  t1615 = t1493*t1461;
  t1634 = t1216*t1534;
  t1679 = t1615 + t1634;
  t1854 = Cos(var1[15]);
  t1858 = -1.*t1854;
  t1880 = 1. + t1858;
  t1050 = -0.366501*t1029;
  t1164 = 0. + t1050;
  t1185 = t736*t920*t1164;
  t1565 = 0.340999127418*t1210*t1556;
  t1573 = -0.134322983001*t1210;
  t1611 = 1. + t1573;
  t1703 = t1611*t1679;
  t1705 = t1185 + t1565 + t1703;
  t1791 = 0.930418*t1029;
  t1792 = 0. + t1791;
  t1793 = t736*t920*t1792;
  t1797 = -0.8656776547239999*t1210;
  t1799 = 1. + t1797;
  t1800 = t1799*t1556;
  t1838 = 0.340999127418*t1210*t1679;
  t1849 = t1793 + t1800 + t1838;
  t1934 = -1.000000637725*t1210;
  t1938 = 1. + t1934;
  t1941 = t1938*t736*t920;
  t1942 = -0.930418*t1029;
  t1944 = 0. + t1942;
  t1988 = t1944*t1556;
  t1993 = 0.366501*t1029;
  t1999 = 0. + t1993;
  t2008 = t1999*t1679;
  t2017 = t1941 + t1988 + t2008;
  t2064 = Cos(var1[16]);
  t2069 = -1.*t2064;
  t2083 = 1. + t2069;
  t226 = Sin(var1[17]);
  t372 = Sin(var1[16]);
  t533 = 0.930418*t479;
  t542 = 0. + t533;
  t1717 = t542*t1705;
  t1742 = 0.366501*t479;
  t1789 = 0. + t1742;
  t1852 = t1789*t1849;
  t1903 = -1.000000637725*t1880;
  t1922 = 1. + t1903;
  t2029 = t1922*t2017;
  t2031 = t1717 + t1852 + t2029;
  t2091 = -0.8656776547239999*t1880;
  t2136 = 1. + t2091;
  t2138 = t2136*t1705;
  t2144 = -0.340999127418*t1880*t1849;
  t2146 = -0.930418*t479;
  t2150 = 0. + t2146;
  t2152 = t2150*t2017;
  t2153 = t2138 + t2144 + t2152;
  t2164 = -0.340999127418*t1880*t1705;
  t2179 = -0.134322983001*t1880;
  t2180 = 1. + t2179;
  t2181 = t2180*t1849;
  t2183 = -0.366501*t479;
  t2186 = 0. + t2183;
  t2188 = t2186*t2017;
  t2192 = t2164 + t2181 + t2188;
  t2316 = Cos(var1[17]);
  t2327 = -1.*t2316;
  t2329 = 1. + t2327;
  t417 = 0.366501*t372;
  t419 = 0. + t417;
  t2033 = t419*t2031;
  t2154 = -0.340999127418*t2083*t2153;
  t2157 = -0.134322983001*t2083;
  t2159 = 1. + t2157;
  t2201 = t2159*t2192;
  t2213 = t2033 + t2154 + t2201;
  t2281 = 0.930418*t372;
  t2282 = 0. + t2281;
  t2288 = t2282*t2031;
  t2291 = -0.8656776547239999*t2083;
  t2292 = 1. + t2291;
  t2293 = t2292*t2153;
  t2302 = -0.340999127418*t2083*t2192;
  t2306 = t2288 + t2293 + t2302;
  t2340 = -1.000000637725*t2083;
  t2345 = 1. + t2340;
  t2349 = t2345*t2031;
  t2351 = -0.930418*t372;
  t2354 = 0. + t2351;
  t2355 = t2354*t2153;
  t2357 = -0.366501*t372;
  t2365 = 0. + t2357;
  t2366 = t2365*t2192;
  t2371 = t2349 + t2355 + t2366;
  t2379 = Cos(var1[18]);
  t2381 = -1.*t2379;
  t2385 = 1. + t2381;
  t106 = Cos(var1[19]);
  t114 = -1.*t106;
  t119 = 1. + t114;
  t187 = Sin(var1[18]);
  t235 = -0.366501*t226;
  t312 = 0. + t235;
  t2264 = t312*t2213;
  t2271 = -0.930418*t226;
  t2274 = 0. + t2271;
  t2311 = t2274*t2306;
  t2335 = -1.000000637725*t2329;
  t2337 = 1. + t2335;
  t2372 = t2337*t2371;
  t2374 = t2264 + t2311 + t2372;
  t2388 = -0.134322983001*t2329;
  t2392 = 1. + t2388;
  t2395 = t2392*t2213;
  t2408 = -0.340999127418*t2329*t2306;
  t2415 = 0.366501*t226;
  t2421 = 0. + t2415;
  t2422 = t2421*t2371;
  t2424 = t2395 + t2408 + t2422;
  t2466 = -0.340999127418*t2329*t2213;
  t2471 = -0.8656776547239999*t2329;
  t2472 = 1. + t2471;
  t2473 = t2472*t2306;
  t2474 = 0.930418*t226;
  t2484 = 0. + t2474;
  t2485 = t2484*t2371;
  t2489 = t2466 + t2473 + t2485;
  t157 = Sin(var1[19]);
  t208 = 0.930418*t187;
  t211 = 0. + t208;
  t2376 = t211*t2374;
  t2426 = -0.340999127418*t2385*t2424;
  t2441 = -0.8656776547239999*t2385;
  t2455 = 1. + t2441;
  t2502 = t2455*t2489;
  t2506 = t2376 + t2426 + t2502;
  t139 = 0.120666640478*t119;
  t2516 = 0.366501*t187;
  t2518 = 0. + t2516;
  t2519 = t2518*t2374;
  t2520 = -0.134322983001*t2385;
  t2527 = 1. + t2520;
  t2530 = t2527*t2424;
  t2531 = -0.340999127418*t2385*t2489;
  t2532 = t2519 + t2530 + t2531;
  t2545 = -1.000000637725*t2385;
  t2546 = 1. + t2545;
  t2547 = t2546*t2374;
  t2552 = -0.366501*t187;
  t2555 = 0. + t2552;
  t2556 = t2555*t2424;
  t2557 = -0.930418*t187;
  t2563 = 0. + t2557;
  t2566 = t2563*t2489;
  t2568 = t2547 + t2556 + t2566;
  t159 = 0.803828*t157;
  t176 = t139 + t159;
  t2630 = t1239*t1399*t1241;
  t2635 = -1.*t736*t1401;
  t2638 = t2630 + t2635;
  t2640 = t736*t1239;
  t2643 = t1399*t1241*t1401;
  t2644 = t2640 + t2643;
  t2639 = -1.*t1216*t2638;
  t2645 = t1493*t2644;
  t2647 = t2639 + t2645;
  t2649 = t1493*t2638;
  t2651 = t1216*t2644;
  t2657 = t2649 + t2651;
  t2628 = t920*t1164*t1399;
  t2648 = 0.340999127418*t1210*t2647;
  t2658 = t1611*t2657;
  t2660 = t2628 + t2648 + t2658;
  t2666 = t920*t1792*t1399;
  t2670 = t1799*t2647;
  t2672 = 0.340999127418*t1210*t2657;
  t2674 = t2666 + t2670 + t2672;
  t2683 = t1938*t920*t1399;
  t2684 = t1944*t2647;
  t2685 = t1999*t2657;
  t2686 = t2683 + t2684 + t2685;
  t2662 = t542*t2660;
  t2675 = t1789*t2674;
  t2692 = t1922*t2686;
  t2695 = t2662 + t2675 + t2692;
  t2704 = t2136*t2660;
  t2705 = -0.340999127418*t1880*t2674;
  t2706 = t2150*t2686;
  t2707 = t2704 + t2705 + t2706;
  t2711 = -0.340999127418*t1880*t2660;
  t2713 = t2180*t2674;
  t2714 = t2186*t2686;
  t2717 = t2711 + t2713 + t2714;
  t2703 = t419*t2695;
  t2709 = -0.340999127418*t2083*t2707;
  t2721 = t2159*t2717;
  t2727 = t2703 + t2709 + t2721;
  t2732 = t2282*t2695;
  t2737 = t2292*t2707;
  t2739 = -0.340999127418*t2083*t2717;
  t2743 = t2732 + t2737 + t2739;
  t2746 = t2345*t2695;
  t2747 = t2354*t2707;
  t2748 = t2365*t2717;
  t2754 = t2746 + t2747 + t2748;
  t2512 = -0.952469601425*t119;
  t2514 = 1. + t2512;
  t2729 = t312*t2727;
  t2744 = t2274*t2743;
  t2755 = t2337*t2754;
  t2764 = t2729 + t2744 + t2755;
  t2788 = t2392*t2727;
  t2789 = -0.340999127418*t2329*t2743;
  t2797 = t2421*t2754;
  t2803 = t2788 + t2789 + t2797;
  t2809 = -0.340999127418*t2329*t2727;
  t2821 = t2472*t2743;
  t2832 = t2484*t2754;
  t2840 = t2809 + t2821 + t2832;
  t2535 = 0.175248972904*t119;
  t2539 = -0.553471*t157;
  t2542 = t2535 + t2539;
  t2596 = -0.693671301908*t119;
  t2604 = 1. + t2596;
  t2777 = t211*t2764;
  t2806 = -0.340999127418*t2385*t2803;
  t2842 = t2455*t2840;
  t2843 = t2777 + t2806 + t2842;
  t2607 = -0.803828*t157;
  t2611 = t139 + t2607;
  t2846 = t2518*t2764;
  t2848 = t2527*t2803;
  t2854 = -0.340999127418*t2385*t2840;
  t2855 = t2846 + t2848 + t2854;
  t2614 = 0.444895486988*t119;
  t2615 = 0.218018*t157;
  t2616 = t2614 + t2615;
  t2864 = t2546*t2764;
  t2866 = t2555*t2803;
  t2868 = t2563*t2840;
  t2871 = t2864 + t2866 + t2868;
  t2889 = -1.*t920*t1239*t1216;
  t2892 = t1493*t920*t1401;
  t2901 = t2889 + t2892;
  t2906 = t1493*t920*t1239;
  t2910 = t920*t1216*t1401;
  t2911 = t2906 + t2910;
  t2888 = -1.*t1164*t1241;
  t2905 = 0.340999127418*t1210*t2901;
  t2912 = t1611*t2911;
  t2915 = t2888 + t2905 + t2912;
  t2917 = -1.*t1792*t1241;
  t2924 = t1799*t2901;
  t2925 = 0.340999127418*t1210*t2911;
  t2927 = t2917 + t2924 + t2925;
  t2942 = -1.*t1938*t1241;
  t2946 = t1944*t2901;
  t2958 = t1999*t2911;
  t2961 = t2942 + t2946 + t2958;
  t2916 = t542*t2915;
  t2936 = t1789*t2927;
  t2964 = t1922*t2961;
  t2966 = t2916 + t2936 + t2964;
  t2975 = t2136*t2915;
  t2986 = -0.340999127418*t1880*t2927;
  t2987 = t2150*t2961;
  t2988 = t2975 + t2986 + t2987;
  t2999 = -0.340999127418*t1880*t2915;
  t3003 = t2180*t2927;
  t3004 = t2186*t2961;
  t3005 = t2999 + t3003 + t3004;
  t2972 = t419*t2966;
  t2991 = -0.340999127418*t2083*t2988;
  t3007 = t2159*t3005;
  t3008 = t2972 + t2991 + t3007;
  t3019 = t2282*t2966;
  t3022 = t2292*t2988;
  t3023 = -0.340999127418*t2083*t3005;
  t3026 = t3019 + t3022 + t3023;
  t3033 = t2345*t2966;
  t3036 = t2354*t2988;
  t3037 = t2365*t3005;
  t3045 = t3033 + t3036 + t3037;
  t3010 = t312*t3008;
  t3028 = t2274*t3026;
  t3054 = t2337*t3045;
  t3055 = t3010 + t3028 + t3054;
  t3062 = t2392*t3008;
  t3069 = -0.340999127418*t2329*t3026;
  t3079 = t2421*t3045;
  t3080 = t3062 + t3069 + t3079;
  t3088 = -0.340999127418*t2329*t3008;
  t3089 = t2472*t3026;
  t3091 = t2484*t3045;
  t3095 = t3088 + t3089 + t3091;
  t3058 = t211*t3055;
  t3086 = -0.340999127418*t2385*t3080;
  t3098 = t2455*t3095;
  t3100 = t3058 + t3086 + t3098;
  t3106 = t2518*t3055;
  t3107 = t2527*t3080;
  t3108 = -0.340999127418*t2385*t3095;
  t3112 = t3106 + t3107 + t3108;
  t3117 = t2546*t3055;
  t3118 = t2555*t3080;
  t3120 = t2563*t3095;
  t3121 = t3117 + t3118 + t3120;
  t2507 = t176*t2506;
  t2533 = t2514*t2532;
  t2578 = t2542*t2568;
  t2581 = t2507 + t2533 + t2578;
  t2606 = t2604*t2506;
  t2613 = t2611*t2532;
  t2618 = t2616*t2568;
  t2621 = t2606 + t2613 + t2618;
  t3145 = -0.218018*t157;
  t3147 = t2614 + t3145;
  t3149 = 0.553471*t157;
  t3150 = t2535 + t3149;
  t3155 = -0.353861996165*t119;
  t3156 = 1. + t3155;
  t2845 = t176*t2843;
  t2861 = t2514*t2855;
  t2872 = t2542*t2871;
  t2876 = t2845 + t2861 + t2872;
  t2878 = t2604*t2843;
  t2879 = t2611*t2855;
  t2880 = t2616*t2871;
  t2881 = t2878 + t2879 + t2880;
  t3101 = t176*t3100;
  t3114 = t2514*t3112;
  t3123 = t2542*t3121;
  t3124 = t3101 + t3114 + t3123;
  t3127 = t2604*t3100;
  t3129 = t2611*t3112;
  t3131 = t2616*t3121;
  t3136 = t3127 + t3129 + t3131;
  t3148 = t3147*t2506;
  t3154 = t3150*t2532;
  t3157 = t3156*t2568;
  t3162 = t3148 + t3154 + t3157;
  t3171 = t3147*t2843;
  t3172 = t3150*t2855;
  t3173 = t3156*t2871;
  t3177 = t3171 + t3172 + t3173;
  t3203 = t3147*t3100;
  t3205 = t3150*t3112;
  t3210 = t3156*t3121;
  t3211 = t3203 + t3205 + t3210;
  p_output1[0]=-0.930418*t2581 + 0.366501*t2621;
  p_output1[1]=-0.930418*t2876 + 0.366501*t2881;
  p_output1[2]=-0.930418*t3124 + 0.366501*t3136;
  p_output1[3]=-0.294604*t2581 - 0.747896*t2621 + 0.594863*t3162;
  p_output1[4]=-0.294604*t2876 - 0.747896*t2881 + 0.594863*t3177;
  p_output1[5]=-0.294604*t3124 - 0.747896*t3136 + 0.594863*t3211;
  p_output1[6]=0.218018*t2581 + 0.553471*t2621 + 0.803828*t3162;
  p_output1[7]=0.218018*t2876 + 0.553471*t2881 + 0.803828*t3177;
  p_output1[8]=0.218018*t3124 + 0.553471*t3136 + 0.803828*t3211;
}



void R_RightToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

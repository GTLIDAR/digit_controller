/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_roll_joint_left_src.h"

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
  double t1393;
  double t1297;
  double t1402;
  double t1306;
  double t1407;
  double t1090;
  double t1114;
  double t1163;
  double t1287;
  double t1474;
  double t1475;
  double t1509;
  double t1368;
  double t1452;
  double t1453;
  double t1563;
  double t990;
  double t997;
  double t1054;
  double t1472;
  double t1570;
  double t1600;
  double t1618;
  double t1619;
  double t1674;
  double t1679;
  double t1687;
  double t1872;
  double t1908;
  double t1914;
  double t1961;
  double t1962;
  double t1967;
  double t1968;
  double t1969;
  double t1970;
  double t1972;
  double t1601;
  double t1602;
  double t1617;
  double t1675;
  double t1688;
  double t1742;
  double t1743;
  double t1750;
  double t1987;
  double t1815;
  double t1816;
  double t1824;
  double t1844;
  double t1852;
  double t1853;
  double t1855;
  double t1868;
  double t750;
  double t803;
  double t816;
  double t605;
  double t1768;
  double t1786;
  double t1793;
  double t1871;
  double t1998;
  double t2008;
  double t2021;
  double t2032;
  double t2042;
  double t2073;
  double t2112;
  double t2113;
  double t2118;
  double t2177;
  double t2180;
  double t2183;
  double t2189;
  double t2198;
  double t2204;
  double t2226;
  double t2227;
  double t2271;
  double t2274;
  double t2278;
  double t2280;
  double t2281;
  double t2290;
  double t2364;
  double t2372;
  double t2379;
  double t2035;
  double t2051;
  double t2056;
  double t2205;
  double t2218;
  double t2224;
  double t2291;
  double t2306;
  double t2322;
  double t2325;
  double t2332;
  double t2336;
  double t2348;
  double t2353;
  double t2359;
  double t2362;
  double t2401;
  double t2403;
  double t2404;
  double t2421;
  double t2426;
  double t2427;
  double t2431;
  double t2437;
  double t2445;
  double t2446;
  double t2454;
  double t2462;
  double t2464;
  double t176;
  double t183;
  double t188;
  double t234;
  double t688;
  double t746;
  double t2318;
  double t2319;
  double t2321;
  double t2363;
  double t2389;
  double t2395;
  double t2447;
  double t2448;
  double t2474;
  double t2477;
  double t2478;
  double t2483;
  double t2485;
  double t2489;
  double t2490;
  double t2491;
  double t2504;
  double t2506;
  double t2510;
  double t2514;
  double t2516;
  double t2518;
  double t2521;
  double t2522;
  double t2572;
  double t2569;
  double t476;
  double t483;
  double t2451;
  double t2494;
  double t2495;
  double t2498;
  double t2557;
  double t2558;
  double t2579;
  double t2581;
  double t2588;
  double t2590;
  double t2593;
  double t2594;
  double t2595;
  double t2596;
  double t2609;
  double t2610;
  double t2611;
  double t2613;
  double t2614;
  double t2616;
  double t2617;
  double t2619;
  double t2621;
  double t2622;
  double t207;
  double t217;
  double t2682;
  double t2683;
  double t2685;
  double t2672;
  double t2674;
  double t2677;
  double t2678;
  double t2687;
  double t2689;
  double t2696;
  double t2698;
  double t2700;
  double t2731;
  double t2732;
  double t2733;
  double t2735;
  double t2690;
  double t2702;
  double t2704;
  double t2706;
  double t2708;
  double t2719;
  double t2721;
  double t2727;
  double t2707;
  double t2729;
  double t2748;
  double t2755;
  double t2761;
  double t2764;
  double t2766;
  double t2769;
  double t2774;
  double t2776;
  double t2779;
  double t2780;
  double t2756;
  double t2770;
  double t2781;
  double t2788;
  double t2792;
  double t2793;
  double t2794;
  double t2799;
  double t2815;
  double t2818;
  double t2820;
  double t2821;
  double t2575;
  double t2577;
  double t2791;
  double t2808;
  double t2822;
  double t2827;
  double t2837;
  double t2840;
  double t2842;
  double t2843;
  double t2852;
  double t2855;
  double t2861;
  double t2865;
  double t2604;
  double t2607;
  double t2608;
  double t2629;
  double t2630;
  double t2836;
  double t2848;
  double t2869;
  double t2870;
  double t2636;
  double t2640;
  double t2872;
  double t2873;
  double t2874;
  double t2875;
  double t2642;
  double t2644;
  double t2657;
  double t2886;
  double t2887;
  double t2888;
  double t2893;
  double t2912;
  double t2913;
  double t2914;
  double t2917;
  double t2921;
  double t2922;
  double t2939;
  double t2943;
  double t2945;
  double t2946;
  double t2916;
  double t2923;
  double t2924;
  double t2925;
  double t2928;
  double t2929;
  double t2930;
  double t2932;
  double t2926;
  double t2936;
  double t2947;
  double t2949;
  double t2956;
  double t2957;
  double t2959;
  double t2961;
  double t2971;
  double t2974;
  double t2975;
  double t2977;
  double t2950;
  double t2967;
  double t2982;
  double t2994;
  double t2999;
  double t3006;
  double t3007;
  double t3008;
  double t3010;
  double t3013;
  double t3023;
  double t3028;
  double t2996;
  double t3009;
  double t3029;
  double t3035;
  double t3041;
  double t3044;
  double t3046;
  double t3050;
  double t3053;
  double t3063;
  double t3065;
  double t3070;
  double t3036;
  double t3051;
  double t3081;
  double t3087;
  double t3091;
  double t3105;
  double t3113;
  double t3116;
  double t3128;
  double t3130;
  double t3131;
  double t3132;
  double t2567;
  double t2602;
  double t2625;
  double t2626;
  double t2631;
  double t2641;
  double t2659;
  double t2667;
  double t3171;
  double t3173;
  double t3178;
  double t3180;
  double t3183;
  double t3185;
  double t2871;
  double t2877;
  double t2895;
  double t2898;
  double t2905;
  double t2907;
  double t2908;
  double t2909;
  double t3090;
  double t3120;
  double t3139;
  double t3146;
  double t3160;
  double t3162;
  double t3163;
  double t3165;
  double t3175;
  double t3182;
  double t3188;
  double t3196;
  double t3218;
  double t3224;
  double t3232;
  double t3234;
  double t3245;
  double t3248;
  double t3250;
  double t3257;
  t1393 = Cos(var1[3]);
  t1297 = Cos(var1[5]);
  t1402 = Sin(var1[4]);
  t1306 = Sin(var1[3]);
  t1407 = Sin(var1[5]);
  t1090 = Cos(var1[7]);
  t1114 = -1.*t1090;
  t1163 = 1. + t1114;
  t1287 = Cos(var1[6]);
  t1474 = t1393*t1297*t1402;
  t1475 = t1306*t1407;
  t1509 = t1474 + t1475;
  t1368 = -1.*t1297*t1306;
  t1452 = t1393*t1402*t1407;
  t1453 = t1368 + t1452;
  t1563 = Sin(var1[6]);
  t990 = Cos(var1[8]);
  t997 = -1.*t990;
  t1054 = 1. + t997;
  t1472 = t1287*t1453;
  t1570 = -1.*t1509*t1563;
  t1600 = t1472 + t1570;
  t1618 = t1287*t1509;
  t1619 = t1453*t1563;
  t1674 = t1618 + t1619;
  t1679 = Cos(var1[4]);
  t1687 = Sin(var1[7]);
  t1872 = -1.000000637725*t1163;
  t1908 = 1. + t1872;
  t1914 = t1393*t1679*t1908;
  t1961 = -0.930418*t1687;
  t1962 = 0. + t1961;
  t1967 = t1600*t1962;
  t1968 = -0.366501*t1687;
  t1969 = 0. + t1968;
  t1970 = t1674*t1969;
  t1972 = t1914 + t1967 + t1970;
  t1601 = -0.340999127418*t1163*t1600;
  t1602 = -0.134322983001*t1163;
  t1617 = 1. + t1602;
  t1675 = t1617*t1674;
  t1688 = 0.366501*t1687;
  t1742 = 0. + t1688;
  t1743 = t1393*t1679*t1742;
  t1750 = t1601 + t1675 + t1743;
  t1987 = Sin(var1[8]);
  t1815 = -0.8656776547239999*t1163;
  t1816 = 1. + t1815;
  t1824 = t1816*t1600;
  t1844 = -0.340999127418*t1163*t1674;
  t1852 = 0.930418*t1687;
  t1853 = 0. + t1852;
  t1855 = t1393*t1679*t1853;
  t1868 = t1824 + t1844 + t1855;
  t750 = Cos(var1[9]);
  t803 = -1.*t750;
  t816 = 1. + t803;
  t605 = Sin(var1[10]);
  t1768 = 0.340999127418*t1054*t1750;
  t1786 = -0.134322983001*t1054;
  t1793 = 1. + t1786;
  t1871 = t1793*t1868;
  t1998 = -0.366501*t1987;
  t2008 = 0. + t1998;
  t2021 = t1972*t2008;
  t2032 = t1768 + t1871 + t2021;
  t2042 = Sin(var1[9]);
  t2073 = -1.000000637725*t1054;
  t2112 = 1. + t2073;
  t2113 = t2112*t1972;
  t2118 = -0.930418*t1987;
  t2177 = 0. + t2118;
  t2180 = t1750*t2177;
  t2183 = 0.366501*t1987;
  t2189 = 0. + t2183;
  t2198 = t1868*t2189;
  t2204 = t2113 + t2180 + t2198;
  t2226 = -0.8656776547239999*t1054;
  t2227 = 1. + t2226;
  t2271 = t2227*t1750;
  t2274 = 0.340999127418*t1054*t1868;
  t2278 = 0.930418*t1987;
  t2280 = 0. + t2278;
  t2281 = t1972*t2280;
  t2290 = t2271 + t2274 + t2281;
  t2364 = Cos(var1[10]);
  t2372 = -1.*t2364;
  t2379 = 1. + t2372;
  t2035 = 0.340999127418*t816*t2032;
  t2051 = -0.930418*t2042;
  t2056 = 0. + t2051;
  t2205 = t2056*t2204;
  t2218 = -0.8656776547239999*t816;
  t2224 = 1. + t2218;
  t2291 = t2224*t2290;
  t2306 = t2035 + t2205 + t2291;
  t2322 = -0.134322983001*t816;
  t2325 = 1. + t2322;
  t2332 = t2325*t2032;
  t2336 = 0.366501*t2042;
  t2348 = 0. + t2336;
  t2353 = t2348*t2204;
  t2359 = 0.340999127418*t816*t2290;
  t2362 = t2332 + t2353 + t2359;
  t2401 = -0.366501*t2042;
  t2403 = 0. + t2401;
  t2404 = t2403*t2032;
  t2421 = -1.000000637725*t816;
  t2426 = 1. + t2421;
  t2427 = t2426*t2204;
  t2431 = 0.930418*t2042;
  t2437 = 0. + t2431;
  t2445 = t2437*t2290;
  t2446 = t2404 + t2427 + t2445;
  t2454 = Cos(var1[11]);
  t2462 = -1.*t2454;
  t2464 = 1. + t2462;
  t176 = Cos(var1[12]);
  t183 = -1.*t176;
  t188 = 1. + t183;
  t234 = Sin(var1[11]);
  t688 = 0.930418*t605;
  t746 = 0. + t688;
  t2318 = t746*t2306;
  t2319 = -0.366501*t605;
  t2321 = 0. + t2319;
  t2363 = t2321*t2362;
  t2389 = -1.000000637725*t2379;
  t2395 = 1. + t2389;
  t2447 = t2395*t2446;
  t2448 = t2318 + t2363 + t2447;
  t2474 = -0.8656776547239999*t2379;
  t2477 = 1. + t2474;
  t2478 = t2477*t2306;
  t2483 = 0.340999127418*t2379*t2362;
  t2485 = -0.930418*t605;
  t2489 = 0. + t2485;
  t2490 = t2489*t2446;
  t2491 = t2478 + t2483 + t2490;
  t2504 = 0.340999127418*t2379*t2306;
  t2506 = -0.134322983001*t2379;
  t2510 = 1. + t2506;
  t2514 = t2510*t2362;
  t2516 = 0.366501*t605;
  t2518 = 0. + t2516;
  t2521 = t2518*t2446;
  t2522 = t2504 + t2514 + t2521;
  t2572 = Sin(var1[12]);
  t2569 = -0.120666640478*t188;
  t476 = 0.366501*t234;
  t483 = 0. + t476;
  t2451 = t483*t2448;
  t2494 = 0.340999127418*t2464*t2491;
  t2495 = -0.134322983001*t2464;
  t2498 = 1. + t2495;
  t2557 = t2498*t2522;
  t2558 = t2451 + t2494 + t2557;
  t2579 = -0.930418*t234;
  t2581 = 0. + t2579;
  t2588 = t2581*t2448;
  t2590 = -0.8656776547239999*t2464;
  t2593 = 1. + t2590;
  t2594 = t2593*t2491;
  t2595 = 0.340999127418*t2464*t2522;
  t2596 = t2588 + t2594 + t2595;
  t2609 = -1.000000637725*t2464;
  t2610 = 1. + t2609;
  t2611 = t2610*t2448;
  t2613 = 0.930418*t234;
  t2614 = 0. + t2613;
  t2616 = t2614*t2491;
  t2617 = -0.366501*t234;
  t2619 = 0. + t2617;
  t2621 = t2619*t2522;
  t2622 = t2611 + t2616 + t2621;
  t207 = -0.952469601425*t188;
  t217 = 1. + t207;
  t2682 = t1297*t1306*t1402;
  t2683 = -1.*t1393*t1407;
  t2685 = t2682 + t2683;
  t2672 = t1393*t1297;
  t2674 = t1306*t1402*t1407;
  t2677 = t2672 + t2674;
  t2678 = t1287*t2677;
  t2687 = -1.*t2685*t1563;
  t2689 = t2678 + t2687;
  t2696 = t1287*t2685;
  t2698 = t2677*t1563;
  t2700 = t2696 + t2698;
  t2731 = t1679*t1908*t1306;
  t2732 = t2689*t1962;
  t2733 = t2700*t1969;
  t2735 = t2731 + t2732 + t2733;
  t2690 = -0.340999127418*t1163*t2689;
  t2702 = t1617*t2700;
  t2704 = t1679*t1306*t1742;
  t2706 = t2690 + t2702 + t2704;
  t2708 = t1816*t2689;
  t2719 = -0.340999127418*t1163*t2700;
  t2721 = t1679*t1306*t1853;
  t2727 = t2708 + t2719 + t2721;
  t2707 = 0.340999127418*t1054*t2706;
  t2729 = t1793*t2727;
  t2748 = t2735*t2008;
  t2755 = t2707 + t2729 + t2748;
  t2761 = t2112*t2735;
  t2764 = t2706*t2177;
  t2766 = t2727*t2189;
  t2769 = t2761 + t2764 + t2766;
  t2774 = t2227*t2706;
  t2776 = 0.340999127418*t1054*t2727;
  t2779 = t2735*t2280;
  t2780 = t2774 + t2776 + t2779;
  t2756 = 0.340999127418*t816*t2755;
  t2770 = t2056*t2769;
  t2781 = t2224*t2780;
  t2788 = t2756 + t2770 + t2781;
  t2792 = t2325*t2755;
  t2793 = t2348*t2769;
  t2794 = 0.340999127418*t816*t2780;
  t2799 = t2792 + t2793 + t2794;
  t2815 = t2403*t2755;
  t2818 = t2426*t2769;
  t2820 = t2437*t2780;
  t2821 = t2815 + t2818 + t2820;
  t2575 = 0.803828*t2572;
  t2577 = t2569 + t2575;
  t2791 = t746*t2788;
  t2808 = t2321*t2799;
  t2822 = t2395*t2821;
  t2827 = t2791 + t2808 + t2822;
  t2837 = t2477*t2788;
  t2840 = 0.340999127418*t2379*t2799;
  t2842 = t2489*t2821;
  t2843 = t2837 + t2840 + t2842;
  t2852 = 0.340999127418*t2379*t2788;
  t2855 = t2510*t2799;
  t2861 = t2518*t2821;
  t2865 = t2852 + t2855 + t2861;
  t2604 = -0.175248972904*t188;
  t2607 = -0.553471*t2572;
  t2608 = t2604 + t2607;
  t2629 = -0.803828*t2572;
  t2630 = t2569 + t2629;
  t2836 = t483*t2827;
  t2848 = 0.340999127418*t2464*t2843;
  t2869 = t2498*t2865;
  t2870 = t2836 + t2848 + t2869;
  t2636 = -0.693671301908*t188;
  t2640 = 1. + t2636;
  t2872 = t2581*t2827;
  t2873 = t2593*t2843;
  t2874 = 0.340999127418*t2464*t2865;
  t2875 = t2872 + t2873 + t2874;
  t2642 = 0.444895486988*t188;
  t2644 = -0.218018*t2572;
  t2657 = t2642 + t2644;
  t2886 = t2610*t2827;
  t2887 = t2614*t2843;
  t2888 = t2619*t2865;
  t2893 = t2886 + t2887 + t2888;
  t2912 = t1679*t1287*t1407;
  t2913 = -1.*t1679*t1297*t1563;
  t2914 = t2912 + t2913;
  t2917 = t1679*t1297*t1287;
  t2921 = t1679*t1407*t1563;
  t2922 = t2917 + t2921;
  t2939 = -1.*t1908*t1402;
  t2943 = t2914*t1962;
  t2945 = t2922*t1969;
  t2946 = t2939 + t2943 + t2945;
  t2916 = -0.340999127418*t1163*t2914;
  t2923 = t1617*t2922;
  t2924 = -1.*t1402*t1742;
  t2925 = t2916 + t2923 + t2924;
  t2928 = t1816*t2914;
  t2929 = -0.340999127418*t1163*t2922;
  t2930 = -1.*t1402*t1853;
  t2932 = t2928 + t2929 + t2930;
  t2926 = 0.340999127418*t1054*t2925;
  t2936 = t1793*t2932;
  t2947 = t2946*t2008;
  t2949 = t2926 + t2936 + t2947;
  t2956 = t2112*t2946;
  t2957 = t2925*t2177;
  t2959 = t2932*t2189;
  t2961 = t2956 + t2957 + t2959;
  t2971 = t2227*t2925;
  t2974 = 0.340999127418*t1054*t2932;
  t2975 = t2946*t2280;
  t2977 = t2971 + t2974 + t2975;
  t2950 = 0.340999127418*t816*t2949;
  t2967 = t2056*t2961;
  t2982 = t2224*t2977;
  t2994 = t2950 + t2967 + t2982;
  t2999 = t2325*t2949;
  t3006 = t2348*t2961;
  t3007 = 0.340999127418*t816*t2977;
  t3008 = t2999 + t3006 + t3007;
  t3010 = t2403*t2949;
  t3013 = t2426*t2961;
  t3023 = t2437*t2977;
  t3028 = t3010 + t3013 + t3023;
  t2996 = t746*t2994;
  t3009 = t2321*t3008;
  t3029 = t2395*t3028;
  t3035 = t2996 + t3009 + t3029;
  t3041 = t2477*t2994;
  t3044 = 0.340999127418*t2379*t3008;
  t3046 = t2489*t3028;
  t3050 = t3041 + t3044 + t3046;
  t3053 = 0.340999127418*t2379*t2994;
  t3063 = t2510*t3008;
  t3065 = t2518*t3028;
  t3070 = t3053 + t3063 + t3065;
  t3036 = t483*t3035;
  t3051 = 0.340999127418*t2464*t3050;
  t3081 = t2498*t3070;
  t3087 = t3036 + t3051 + t3081;
  t3091 = t2581*t3035;
  t3105 = t2593*t3050;
  t3113 = 0.340999127418*t2464*t3070;
  t3116 = t3091 + t3105 + t3113;
  t3128 = t2610*t3035;
  t3130 = t2614*t3050;
  t3131 = t2619*t3070;
  t3132 = t3128 + t3130 + t3131;
  t2567 = t217*t2558;
  t2602 = t2577*t2596;
  t2625 = t2608*t2622;
  t2626 = t2567 + t2602 + t2625;
  t2631 = t2630*t2558;
  t2641 = t2640*t2596;
  t2659 = t2657*t2622;
  t2667 = t2631 + t2641 + t2659;
  t3171 = 0.553471*t2572;
  t3173 = t2604 + t3171;
  t3178 = 0.218018*t2572;
  t3180 = t2642 + t3178;
  t3183 = -0.353861996165*t188;
  t3185 = 1. + t3183;
  t2871 = t217*t2870;
  t2877 = t2577*t2875;
  t2895 = t2608*t2893;
  t2898 = t2871 + t2877 + t2895;
  t2905 = t2630*t2870;
  t2907 = t2640*t2875;
  t2908 = t2657*t2893;
  t2909 = t2905 + t2907 + t2908;
  t3090 = t217*t3087;
  t3120 = t2577*t3116;
  t3139 = t2608*t3132;
  t3146 = t3090 + t3120 + t3139;
  t3160 = t2630*t3087;
  t3162 = t2640*t3116;
  t3163 = t2657*t3132;
  t3165 = t3160 + t3162 + t3163;
  t3175 = t3173*t2558;
  t3182 = t3180*t2596;
  t3188 = t3185*t2622;
  t3196 = t3175 + t3182 + t3188;
  t3218 = t3173*t2870;
  t3224 = t3180*t2875;
  t3232 = t3185*t2893;
  t3234 = t3218 + t3224 + t3232;
  t3245 = t3173*t3087;
  t3248 = t3180*t3116;
  t3250 = t3185*t3132;
  t3257 = t3245 + t3248 + t3250;
  p_output1[0]=0.930418*t2626 + 0.366501*t2667;
  p_output1[1]=0.930418*t2898 + 0.366501*t2909;
  p_output1[2]=0.930418*t3146 + 0.366501*t3165;
  p_output1[3]=-0.294604*t2626 + 0.747896*t2667 - 0.594863*t3196;
  p_output1[4]=-0.294604*t2898 + 0.747896*t2909 - 0.594863*t3234;
  p_output1[5]=-0.294604*t3146 + 0.747896*t3165 - 0.594863*t3257;
  p_output1[6]=-0.218018*t2626 + 0.553471*t2667 + 0.803828*t3196;
  p_output1[7]=-0.218018*t2898 + 0.553471*t2909 + 0.803828*t3234;
  p_output1[8]=-0.218018*t3146 + 0.553471*t3165 + 0.803828*t3257;
}



void R_toe_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

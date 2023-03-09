/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_tarsus_src.h"

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
  double t1277;
  double t1058;
  double t1325;
  double t1247;
  double t1330;
  double t1000;
  double t1029;
  double t1030;
  double t1033;
  double t1411;
  double t1416;
  double t1434;
  double t1249;
  double t1333;
  double t1387;
  double t1437;
  double t692;
  double t753;
  double t874;
  double t1401;
  double t1469;
  double t1477;
  double t1598;
  double t1625;
  double t1627;
  double t1673;
  double t1685;
  double t1984;
  double t1989;
  double t1996;
  double t2011;
  double t2035;
  double t2039;
  double t2044;
  double t2046;
  double t2047;
  double t2109;
  double t1505;
  double t1515;
  double t1520;
  double t1632;
  double t1735;
  double t1741;
  double t1764;
  double t1765;
  double t2110;
  double t1804;
  double t1813;
  double t1814;
  double t1818;
  double t1824;
  double t1848;
  double t1875;
  double t1904;
  double t152;
  double t595;
  double t688;
  double t32;
  double t1771;
  double t1772;
  double t1781;
  double t1915;
  double t2112;
  double t2127;
  double t2212;
  double t2221;
  double t2298;
  double t2326;
  double t2331;
  double t2332;
  double t2335;
  double t2348;
  double t2371;
  double t2387;
  double t2395;
  double t2435;
  double t2449;
  double t2467;
  double t2472;
  double t2503;
  double t2505;
  double t2512;
  double t2518;
  double t2542;
  double t2557;
  double t2623;
  double t2625;
  double t2627;
  double t2252;
  double t2314;
  double t2321;
  double t2453;
  double t2463;
  double t2465;
  double t2559;
  double t2574;
  double t2597;
  double t2603;
  double t2604;
  double t2607;
  double t2609;
  double t2611;
  double t2612;
  double t2615;
  double t2643;
  double t2647;
  double t2648;
  double t2659;
  double t2664;
  double t2666;
  double t2667;
  double t2671;
  double t2676;
  double t2678;
  double t44;
  double t51;
  double t2806;
  double t2810;
  double t2811;
  double t2771;
  double t2774;
  double t2775;
  double t2790;
  double t2813;
  double t2814;
  double t2820;
  double t2821;
  double t2824;
  double t2869;
  double t2870;
  double t2880;
  double t2882;
  double t2819;
  double t2829;
  double t2832;
  double t2840;
  double t2844;
  double t2849;
  double t2857;
  double t2860;
  double t2581;
  double t2583;
  double t2842;
  double t2866;
  double t2884;
  double t2887;
  double t2889;
  double t2892;
  double t2894;
  double t2903;
  double t2906;
  double t2907;
  double t2914;
  double t2915;
  double t2632;
  double t2639;
  double t2688;
  double t2702;
  double t2888;
  double t2904;
  double t2916;
  double t2922;
  double t2925;
  double t2937;
  double t2941;
  double t2944;
  double t2709;
  double t2711;
  double t2953;
  double t2955;
  double t2959;
  double t2967;
  double t2737;
  double t2738;
  double t2747;
  double t2755;
  double t3005;
  double t3006;
  double t3007;
  double t3013;
  double t3014;
  double t3015;
  double t3035;
  double t3038;
  double t3047;
  double t3049;
  double t3009;
  double t3017;
  double t3018;
  double t3023;
  double t3027;
  double t3029;
  double t3030;
  double t3031;
  double t3025;
  double t3034;
  double t3050;
  double t3051;
  double t3054;
  double t3056;
  double t3068;
  double t3073;
  double t3084;
  double t3088;
  double t3089;
  double t3090;
  double t3052;
  double t3075;
  double t3091;
  double t3094;
  double t3098;
  double t3100;
  double t3101;
  double t3103;
  double t3110;
  double t3113;
  double t3122;
  double t3125;
  double t2580;
  double t2620;
  double t2684;
  double t2685;
  double t2706;
  double t2707;
  double t2712;
  double t2716;
  double t2731;
  double t2739;
  double t2758;
  double t2759;
  double t2923;
  double t2945;
  double t2968;
  double t2975;
  double t2982;
  double t2984;
  double t2986;
  double t2988;
  double t2991;
  double t2995;
  double t2999;
  double t3000;
  double t3095;
  double t3104;
  double t3128;
  double t3131;
  double t3138;
  double t3144;
  double t3146;
  double t3159;
  double t3178;
  double t3181;
  double t3182;
  double t3183;
  t1277 = Cos(var1[3]);
  t1058 = Cos(var1[5]);
  t1325 = Sin(var1[4]);
  t1247 = Sin(var1[3]);
  t1330 = Sin(var1[5]);
  t1000 = Cos(var1[7]);
  t1029 = -1.*t1000;
  t1030 = 1. + t1029;
  t1033 = Cos(var1[6]);
  t1411 = t1277*t1058*t1325;
  t1416 = t1247*t1330;
  t1434 = t1411 + t1416;
  t1249 = -1.*t1058*t1247;
  t1333 = t1277*t1325*t1330;
  t1387 = t1249 + t1333;
  t1437 = Sin(var1[6]);
  t692 = Cos(var1[8]);
  t753 = -1.*t692;
  t874 = 1. + t753;
  t1401 = t1033*t1387;
  t1469 = -1.*t1434*t1437;
  t1477 = t1401 + t1469;
  t1598 = t1033*t1434;
  t1625 = t1387*t1437;
  t1627 = t1598 + t1625;
  t1673 = Cos(var1[4]);
  t1685 = Sin(var1[7]);
  t1984 = -1.000000637725*t1030;
  t1989 = 1. + t1984;
  t1996 = t1277*t1673*t1989;
  t2011 = -0.930418*t1685;
  t2035 = 0. + t2011;
  t2039 = t1477*t2035;
  t2044 = -0.366501*t1685;
  t2046 = 0. + t2044;
  t2047 = t1627*t2046;
  t2109 = t1996 + t2039 + t2047;
  t1505 = -0.340999127418*t1030*t1477;
  t1515 = -0.134322983001*t1030;
  t1520 = 1. + t1515;
  t1632 = t1520*t1627;
  t1735 = 0.366501*t1685;
  t1741 = 0. + t1735;
  t1764 = t1277*t1673*t1741;
  t1765 = t1505 + t1632 + t1764;
  t2110 = Sin(var1[8]);
  t1804 = -0.8656776547239999*t1030;
  t1813 = 1. + t1804;
  t1814 = t1813*t1477;
  t1818 = -0.340999127418*t1030*t1627;
  t1824 = 0.930418*t1685;
  t1848 = 0. + t1824;
  t1875 = t1277*t1673*t1848;
  t1904 = t1814 + t1818 + t1875;
  t152 = Cos(var1[9]);
  t595 = -1.*t152;
  t688 = 1. + t595;
  t32 = Sin(var1[10]);
  t1771 = 0.340999127418*t874*t1765;
  t1772 = -0.134322983001*t874;
  t1781 = 1. + t1772;
  t1915 = t1781*t1904;
  t2112 = -0.366501*t2110;
  t2127 = 0. + t2112;
  t2212 = t2109*t2127;
  t2221 = t1771 + t1915 + t2212;
  t2298 = Sin(var1[9]);
  t2326 = -1.000000637725*t874;
  t2331 = 1. + t2326;
  t2332 = t2331*t2109;
  t2335 = -0.930418*t2110;
  t2348 = 0. + t2335;
  t2371 = t1765*t2348;
  t2387 = 0.366501*t2110;
  t2395 = 0. + t2387;
  t2435 = t1904*t2395;
  t2449 = t2332 + t2371 + t2435;
  t2467 = -0.8656776547239999*t874;
  t2472 = 1. + t2467;
  t2503 = t2472*t1765;
  t2505 = 0.340999127418*t874*t1904;
  t2512 = 0.930418*t2110;
  t2518 = 0. + t2512;
  t2542 = t2109*t2518;
  t2557 = t2503 + t2505 + t2542;
  t2623 = Cos(var1[10]);
  t2625 = -1.*t2623;
  t2627 = 1. + t2625;
  t2252 = 0.340999127418*t688*t2221;
  t2314 = -0.930418*t2298;
  t2321 = 0. + t2314;
  t2453 = t2321*t2449;
  t2463 = -0.8656776547239999*t688;
  t2465 = 1. + t2463;
  t2559 = t2465*t2557;
  t2574 = t2252 + t2453 + t2559;
  t2597 = -0.134322983001*t688;
  t2603 = 1. + t2597;
  t2604 = t2603*t2221;
  t2607 = 0.366501*t2298;
  t2609 = 0. + t2607;
  t2611 = t2609*t2449;
  t2612 = 0.340999127418*t688*t2557;
  t2615 = t2604 + t2611 + t2612;
  t2643 = -0.366501*t2298;
  t2647 = 0. + t2643;
  t2648 = t2647*t2221;
  t2659 = -1.000000637725*t688;
  t2664 = 1. + t2659;
  t2666 = t2664*t2449;
  t2667 = 0.930418*t2298;
  t2671 = 0. + t2667;
  t2676 = t2671*t2557;
  t2678 = t2648 + t2666 + t2676;
  t44 = 0.930418*t32;
  t51 = 0. + t44;
  t2806 = t1058*t1247*t1325;
  t2810 = -1.*t1277*t1330;
  t2811 = t2806 + t2810;
  t2771 = t1277*t1058;
  t2774 = t1247*t1325*t1330;
  t2775 = t2771 + t2774;
  t2790 = t1033*t2775;
  t2813 = -1.*t2811*t1437;
  t2814 = t2790 + t2813;
  t2820 = t1033*t2811;
  t2821 = t2775*t1437;
  t2824 = t2820 + t2821;
  t2869 = t1673*t1989*t1247;
  t2870 = t2814*t2035;
  t2880 = t2824*t2046;
  t2882 = t2869 + t2870 + t2880;
  t2819 = -0.340999127418*t1030*t2814;
  t2829 = t1520*t2824;
  t2832 = t1673*t1247*t1741;
  t2840 = t2819 + t2829 + t2832;
  t2844 = t1813*t2814;
  t2849 = -0.340999127418*t1030*t2824;
  t2857 = t1673*t1247*t1848;
  t2860 = t2844 + t2849 + t2857;
  t2581 = -0.366501*t32;
  t2583 = 0. + t2581;
  t2842 = 0.340999127418*t874*t2840;
  t2866 = t1781*t2860;
  t2884 = t2882*t2127;
  t2887 = t2842 + t2866 + t2884;
  t2889 = t2331*t2882;
  t2892 = t2840*t2348;
  t2894 = t2860*t2395;
  t2903 = t2889 + t2892 + t2894;
  t2906 = t2472*t2840;
  t2907 = 0.340999127418*t874*t2860;
  t2914 = t2882*t2518;
  t2915 = t2906 + t2907 + t2914;
  t2632 = -1.000000637725*t2627;
  t2639 = 1. + t2632;
  t2688 = -0.8656776547239999*t2627;
  t2702 = 1. + t2688;
  t2888 = 0.340999127418*t688*t2887;
  t2904 = t2321*t2903;
  t2916 = t2465*t2915;
  t2922 = t2888 + t2904 + t2916;
  t2925 = t2603*t2887;
  t2937 = t2609*t2903;
  t2941 = 0.340999127418*t688*t2915;
  t2944 = t2925 + t2937 + t2941;
  t2709 = -0.930418*t32;
  t2711 = 0. + t2709;
  t2953 = t2647*t2887;
  t2955 = t2664*t2903;
  t2959 = t2671*t2915;
  t2967 = t2953 + t2955 + t2959;
  t2737 = -0.134322983001*t2627;
  t2738 = 1. + t2737;
  t2747 = 0.366501*t32;
  t2755 = 0. + t2747;
  t3005 = t1673*t1033*t1330;
  t3006 = -1.*t1673*t1058*t1437;
  t3007 = t3005 + t3006;
  t3013 = t1673*t1058*t1033;
  t3014 = t1673*t1330*t1437;
  t3015 = t3013 + t3014;
  t3035 = -1.*t1989*t1325;
  t3038 = t3007*t2035;
  t3047 = t3015*t2046;
  t3049 = t3035 + t3038 + t3047;
  t3009 = -0.340999127418*t1030*t3007;
  t3017 = t1520*t3015;
  t3018 = -1.*t1325*t1741;
  t3023 = t3009 + t3017 + t3018;
  t3027 = t1813*t3007;
  t3029 = -0.340999127418*t1030*t3015;
  t3030 = -1.*t1325*t1848;
  t3031 = t3027 + t3029 + t3030;
  t3025 = 0.340999127418*t874*t3023;
  t3034 = t1781*t3031;
  t3050 = t3049*t2127;
  t3051 = t3025 + t3034 + t3050;
  t3054 = t2331*t3049;
  t3056 = t3023*t2348;
  t3068 = t3031*t2395;
  t3073 = t3054 + t3056 + t3068;
  t3084 = t2472*t3023;
  t3088 = 0.340999127418*t874*t3031;
  t3089 = t3049*t2518;
  t3090 = t3084 + t3088 + t3089;
  t3052 = 0.340999127418*t688*t3051;
  t3075 = t2321*t3073;
  t3091 = t2465*t3090;
  t3094 = t3052 + t3075 + t3091;
  t3098 = t2603*t3051;
  t3100 = t2609*t3073;
  t3101 = 0.340999127418*t688*t3090;
  t3103 = t3098 + t3100 + t3101;
  t3110 = t2647*t3051;
  t3113 = t2664*t3073;
  t3122 = t2671*t3090;
  t3125 = t3110 + t3113 + t3122;
  t2580 = t51*t2574;
  t2620 = t2583*t2615;
  t2684 = t2639*t2678;
  t2685 = t2580 + t2620 + t2684;
  t2706 = t2702*t2574;
  t2707 = 0.340999127418*t2627*t2615;
  t2712 = t2711*t2678;
  t2716 = t2706 + t2707 + t2712;
  t2731 = 0.340999127418*t2627*t2574;
  t2739 = t2738*t2615;
  t2758 = t2755*t2678;
  t2759 = t2731 + t2739 + t2758;
  t2923 = t51*t2922;
  t2945 = t2583*t2944;
  t2968 = t2639*t2967;
  t2975 = t2923 + t2945 + t2968;
  t2982 = t2702*t2922;
  t2984 = 0.340999127418*t2627*t2944;
  t2986 = t2711*t2967;
  t2988 = t2982 + t2984 + t2986;
  t2991 = 0.340999127418*t2627*t2922;
  t2995 = t2738*t2944;
  t2999 = t2755*t2967;
  t3000 = t2991 + t2995 + t2999;
  t3095 = t51*t3094;
  t3104 = t2583*t3103;
  t3128 = t2639*t3125;
  t3131 = t3095 + t3104 + t3128;
  t3138 = t2702*t3094;
  t3144 = 0.340999127418*t2627*t3103;
  t3146 = t2711*t3125;
  t3159 = t3138 + t3144 + t3146;
  t3178 = 0.340999127418*t2627*t3094;
  t3181 = t2738*t3103;
  t3182 = t2755*t3125;
  t3183 = t3178 + t3181 + t3182;
  p_output1[0]=0.848048*t2685 - 0.493047*t2716 + 0.194216*t2759;
  p_output1[1]=0.848048*t2975 - 0.493047*t2988 + 0.194216*t3000;
  p_output1[2]=0.848048*t3131 - 0.493047*t3159 + 0.194216*t3183;
  p_output1[3]=0.529919*t2685 + 0.789039*t2716 - 0.310811*t2759;
  p_output1[4]=0.529919*t2975 + 0.789039*t2988 - 0.310811*t3000;
  p_output1[5]=0.529919*t3131 + 0.789039*t3159 - 0.310811*t3183;
  p_output1[6]=-0.366501*t2716 - 0.930418*t2759;
  p_output1[7]=-0.366501*t2988 - 0.930418*t3000;
  p_output1[8]=-0.366501*t3159 - 0.930418*t3183;
}



void R_left_tarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:07:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_left_toe_roll_src.h"

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
  double t49;
  double t74;
  double t136;
  double t141;
  double t223;
  double t226;
  double t225;
  double t229;
  double t233;
  double t323;
  double t331;
  double t335;
  double t344;
  double t368;
  double t245;
  double t248;
  double t249;
  double t410;
  double t415;
  double t416;
  double t423;
  double t445;
  double t450;
  double t427;
  double t431;
  double t441;
  double t444;
  double t457;
  double t458;
  double t497;
  double t498;
  double t501;
  double t502;
  double t516;
  double t519;
  double t533;
  double t565;
  double t566;
  double t570;
  double t32;
  double t462;
  double t473;
  double t478;
  double t356;
  double t371;
  double t381;
  double t610;
  double t622;
  double t626;
  double t553;
  double t559;
  double t561;
  double t629;
  double t630;
  double t631;
  double t394;
  double t402;
  double t408;
  double t694;
  double t696;
  double t700;
  double t703;
  double t681;
  double t684;
  double t686;
  double t816;
  double t792;
  double t798;
  double t810;
  double t880;
  double t883;
  double t813;
  double t822;
  double t828;
  double t831;
  double t838;
  double t840;
  double t844;
  double t859;
  double t867;
  double t873;
  double t895;
  double t897;
  double t911;
  double t913;
  double t917;
  double t930;
  double t931;
  double t933;
  double t943;
  double t945;
  double t860;
  double t906;
  double t936;
  double t940;
  double t964;
  double t966;
  double t968;
  double t971;
  double t1002;
  double t1004;
  double t1080;
  double t1085;
  double t1101;
  double t1109;
  double t973;
  double t975;
  double t983;
  double t984;
  double t1131;
  double t1132;
  double t1135;
  double t1144;
  double t1111;
  double t1115;
  double t1116;
  double t1118;
  double t1149;
  double t1152;
  double t1154;
  double t1158;
  double t1025;
  double t1026;
  double t1029;
  double t1034;
  double t1051;
  double t1053;
  double t942;
  double t953;
  double t954;
  double t956;
  double t1005;
  double t1007;
  double t1011;
  double t1022;
  double t1216;
  double t1219;
  double t1221;
  double t1226;
  double t1231;
  double t1249;
  double t1250;
  double t1256;
  double t1192;
  double t1197;
  double t1201;
  double t1204;
  double t1359;
  double t1362;
  double t1370;
  double t1380;
  double t1292;
  double t1298;
  double t1309;
  double t1312;
  double t1381;
  double t1384;
  double t1357;
  double t1373;
  double t1385;
  double t1388;
  double t1398;
  double t1402;
  double t1404;
  double t1411;
  double t1413;
  double t1414;
  double t1418;
  double t1420;
  double t1431;
  double t1432;
  double t1436;
  double t1437;
  double t1443;
  double t1455;
  double t1467;
  double t1469;
  double t1394;
  double t1426;
  double t1458;
  double t1460;
  double t1481;
  double t1486;
  double t1490;
  double t1492;
  double t1516;
  double t1518;
  double t1061;
  double t1062;
  double t1066;
  double t1076;
  double t1465;
  double t1472;
  double t1475;
  double t1478;
  double t1566;
  double t1579;
  double t1583;
  double t1584;
  double t1641;
  double t1651;
  double t1652;
  double t1654;
  double t1522;
  double t1528;
  double t1529;
  double t1531;
  double t1664;
  double t1674;
  double t1675;
  double t1680;
  double t1610;
  double t1611;
  double t1614;
  double t1626;
  double t1497;
  double t1498;
  double t1501;
  double t1503;
  double t1589;
  double t1591;
  double t1539;
  double t1545;
  double t1547;
  double t1553;
  double t1739;
  double t1741;
  double t1743;
  double t1745;
  double t1749;
  double t1755;
  double t1757;
  double t1765;
  double t1865;
  double t1867;
  double t1877;
  double t1880;
  double t1804;
  double t1812;
  double t1825;
  double t1826;
  double t1939;
  double t1940;
  double t1725;
  double t1727;
  double t1732;
  double t1733;
  double t1954;
  double t1956;
  double t1864;
  double t1878;
  double t1892;
  double t1895;
  double t1897;
  double t1899;
  double t1902;
  double t1903;
  double t1907;
  double t1908;
  double t1913;
  double t1916;
  double t1918;
  double t1921;
  double t1934;
  double t1937;
  double t1941;
  double t1943;
  double t1900;
  double t1929;
  double t1945;
  double t1949;
  double t2015;
  double t2018;
  double t1990;
  double t2001;
  double t2006;
  double t2009;
  double t1592;
  double t1593;
  double t1599;
  double t1600;
  double t2072;
  double t2081;
  double t2083;
  double t2084;
  double t1966;
  double t1967;
  double t1969;
  double t1985;
  double t2141;
  double t2144;
  double t2152;
  double t2153;
  double t2112;
  double t2113;
  double t2117;
  double t2118;
  double t2040;
  double t2043;
  double t2046;
  double t2055;
  double t2160;
  double t2167;
  double t2168;
  double t2177;
  double t1952;
  double t1953;
  double t1957;
  double t1961;
  double t2020;
  double t2023;
  double t2026;
  double t2037;
  double t2123;
  double t2130;
  double t2241;
  double t2243;
  double t2247;
  double t2258;
  double t2265;
  double t2270;
  double t2273;
  double t2274;
  double t2357;
  double t2121;
  double t2132;
  double t2133;
  double t2136;
  double t2379;
  double t2386;
  double t2389;
  double t2406;
  double t2410;
  double t2427;
  double t2429;
  double t2217;
  double t2219;
  double t2220;
  double t2222;
  double t2446;
  double t2454;
  double t2369;
  double t2371;
  double t2363;
  double t2365;
  double t2304;
  double t2312;
  double t2317;
  double t2321;
  double t2504;
  double t2505;
  double t2510;
  double t2515;
  double t2519;
  double t2532;
  double t2534;
  double t2535;
  double t2538;
  double t2539;
  double t2540;
  double t2542;
  double t2439;
  double t2443;
  double t2517;
  double t2537;
  double t2544;
  double t2546;
  double t2561;
  double t2563;
  double t2566;
  double t2570;
  double t2412;
  double t2413;
  double t2430;
  double t2433;
  double t2552;
  double t2554;
  double t2557;
  double t2559;
  double t2438;
  double t2444;
  double t2457;
  double t2476;
  double t2624;
  double t2626;
  double t2627;
  double t2631;
  double t2595;
  double t2597;
  double t2601;
  double t2606;
  double t2645;
  double t2646;
  double t2654;
  double t2658;
  double t2393;
  double t2395;
  double t2486;
  double t2492;
  double t2493;
  double t2497;
  double t2578;
  double t2580;
  double t2581;
  double t2590;
  double t2741;
  double t2748;
  double t2759;
  double t2762;
  double t2768;
  double t2770;
  double t2776;
  double t2779;
  double t2367;
  double t2372;
  double t2396;
  double t2400;
  double t2847;
  double t2848;
  double t2849;
  double t2835;
  double t2837;
  double t2844;
  double t2696;
  double t2697;
  double t2703;
  double t2708;
  double t2855;
  double t2858;
  double t2917;
  double t2920;
  double t2910;
  double t2912;
  double t2716;
  double t2720;
  double t2727;
  double t2729;
  double t2867;
  double t2872;
  double t2953;
  double t2959;
  double t2961;
  double t2962;
  double t2968;
  double t2972;
  double t2973;
  double t2975;
  double t2981;
  double t2983;
  double t2989;
  double t2990;
  double t2881;
  double t2883;
  double t2967;
  double t2980;
  double t2991;
  double t2992;
  double t3011;
  double t3016;
  double t3019;
  double t3020;
  double t2899;
  double t2902;
  double t2934;
  double t2942;
  double t2949;
  double t2950;
  double t3044;
  double t3045;
  double t3048;
  double t3054;
  double t3082;
  double t3083;
  double t3090;
  double t3091;
  double t2845;
  double t2852;
  double t2859;
  double t2861;
  double t2999;
  double t3002;
  double t3004;
  double t3006;
  double t2880;
  double t2886;
  double t2887;
  double t2888;
  double t3121;
  double t3125;
  double t3135;
  double t3138;
  double t3060;
  double t3061;
  double t3066;
  double t3069;
  double t3143;
  double t3149;
  double t3151;
  double t3152;
  double t2908;
  double t2915;
  double t2927;
  double t2931;
  double t3093;
  double t3103;
  double t3108;
  double t3109;
  double t3192;
  double t3196;
  double t3198;
  double t3199;
  double t3205;
  double t3206;
  double t3214;
  double t3221;
  t49 = Cos(var1[3]);
  t74 = Sin(var1[3]);
  t136 = Cos(var1[4]);
  t141 = Sin(var1[4]);
  t223 = Cos(var1[5]);
  t226 = Sin(var1[5]);
  t225 = t49*t223*t141;
  t229 = t74*t226;
  t233 = t225 + t229;
  t323 = Cos(var1[6]);
  t331 = -1.*t223*t74;
  t335 = t49*t141*t226;
  t344 = t331 + t335;
  t368 = Sin(var1[6]);
  t245 = t223*t74*t141;
  t248 = -1.*t49*t226;
  t249 = t245 + t248;
  t410 = -1.*t323;
  t415 = 1. + t410;
  t416 = 0.091*t415;
  t423 = 0. + t416;
  t445 = 0.091*t368;
  t450 = 0. + t445;
  t427 = t49*t223;
  t431 = t74*t141*t226;
  t441 = t427 + t431;
  t444 = t423*t441;
  t457 = t249*t450;
  t458 = 0. + var1[1] + t444 + t457;
  t497 = -1.*var1[2];
  t498 = -1.*t136*t423*t226;
  t501 = -1.*t136*t223*t450;
  t502 = 0. + t497 + t498 + t501;
  t516 = t323*t441;
  t519 = -1.*t249*t368;
  t533 = t516 + t519;
  t565 = t323*t249;
  t566 = t441*t368;
  t570 = t565 + t566;
  t32 = -1.*var1[0];
  t462 = t136*t323*t226;
  t473 = -1.*t136*t223*t368;
  t478 = t462 + t473;
  t356 = t323*t344;
  t371 = -1.*t233*t368;
  t381 = t356 + t371;
  t610 = -1.*t423*t344;
  t622 = -1.*t233*t450;
  t626 = 0. + t32 + t610 + t622;
  t553 = t136*t223*t323;
  t559 = t136*t226*t368;
  t561 = t553 + t559;
  t629 = t136*t423*t226;
  t630 = t136*t223*t450;
  t631 = 0. + var1[2] + t629 + t630;
  t394 = t323*t233;
  t402 = t344*t368;
  t408 = t394 + t402;
  t694 = -1.*var1[1];
  t696 = -1.*t423*t441;
  t700 = -1.*t249*t450;
  t703 = 0. + t694 + t696 + t700;
  t681 = t423*t344;
  t684 = t233*t450;
  t686 = 0. + var1[0] + t681 + t684;
  t816 = Sin(var1[7]);
  t792 = Cos(var1[7]);
  t798 = -1.*t792;
  t810 = 1. + t798;
  t880 = 0.366501*t816;
  t883 = 0. + t880;
  t813 = -0.04500040093286238*t810;
  t822 = -0.930418*t816;
  t828 = 0. + t822;
  t831 = 0.07877663122399998*t828;
  t838 = -0.366501*t816;
  t840 = 0. + t838;
  t844 = 0.031030906668*t840;
  t859 = 0. + t813 + t831 + t844;
  t867 = -3.2909349868922137e-7*var1[7];
  t873 = 0.03103092645718495*t810;
  t895 = -0.045000372235*t883;
  t897 = t867 + t873 + t895;
  t911 = 1.296332362046933e-7*var1[7];
  t913 = 0.07877668146182712*t810;
  t917 = 0.930418*t816;
  t930 = 0. + t917;
  t931 = -0.045000372235*t930;
  t933 = t911 + t913 + t931;
  t943 = -0.134322983001*t810;
  t945 = 1. + t943;
  t860 = t141*t859;
  t906 = -1.*t561*t897;
  t936 = -1.*t478*t933;
  t940 = 0. + t497 + t498 + t501 + t860 + t906 + t936;
  t964 = t136*t74*t859;
  t966 = t570*t897;
  t968 = t533*t933;
  t971 = 0. + var1[1] + t444 + t457 + t964 + t966 + t968;
  t1002 = -0.8656776547239999*t810;
  t1004 = 1. + t1002;
  t1080 = -0.340999127418*t810*t381;
  t1085 = t945*t408;
  t1101 = t49*t136*t883;
  t1109 = t1080 + t1085 + t1101;
  t973 = -0.340999127418*t810*t478;
  t975 = t945*t561;
  t983 = -1.*t141*t883;
  t984 = t973 + t975 + t983;
  t1131 = -1.*t141*t859;
  t1132 = t561*t897;
  t1135 = t478*t933;
  t1144 = 0. + var1[2] + t629 + t630 + t1131 + t1132 + t1135;
  t1111 = t1004*t381;
  t1115 = -0.340999127418*t810*t408;
  t1116 = t49*t136*t930;
  t1118 = t1111 + t1115 + t1116;
  t1149 = -1.*t49*t136*t859;
  t1152 = -1.*t408*t897;
  t1154 = -1.*t381*t933;
  t1158 = 0. + t32 + t610 + t622 + t1149 + t1152 + t1154;
  t1025 = t1004*t478;
  t1026 = -0.340999127418*t810*t561;
  t1029 = -1.*t141*t930;
  t1034 = t1025 + t1026 + t1029;
  t1051 = -1.000000637725*t810;
  t1053 = 1. + t1051;
  t942 = -0.340999127418*t810*t533;
  t953 = t945*t570;
  t954 = t136*t74*t883;
  t956 = t942 + t953 + t954;
  t1005 = t1004*t533;
  t1007 = -0.340999127418*t810*t570;
  t1011 = t136*t74*t930;
  t1022 = t1005 + t1007 + t1011;
  t1216 = -1.*t136*t74*t859;
  t1219 = -1.*t570*t897;
  t1221 = -1.*t533*t933;
  t1226 = 0. + t694 + t696 + t700 + t1216 + t1219 + t1221;
  t1231 = t49*t136*t859;
  t1249 = t408*t897;
  t1250 = t381*t933;
  t1256 = 0. + var1[0] + t681 + t684 + t1231 + t1249 + t1250;
  t1192 = t136*t1053*t74;
  t1197 = t533*t828;
  t1201 = t570*t840;
  t1204 = t1192 + t1197 + t1201;
  t1359 = Cos(var1[8]);
  t1362 = -1.*t1359;
  t1370 = 1. + t1362;
  t1380 = Sin(var1[8]);
  t1292 = -1.*t1053*t141;
  t1298 = t478*t828;
  t1309 = t561*t840;
  t1312 = t1292 + t1298 + t1309;
  t1381 = -0.366501*t1380;
  t1384 = 0. + t1381;
  t1357 = 3.2909349868922137e-7*var1[8];
  t1373 = 0.055653945343889656*t1370;
  t1385 = -0.045000372235*t1384;
  t1388 = t1357 + t1373 + t1385;
  t1398 = -0.04500040093286238*t1370;
  t1402 = -0.930418*t1380;
  t1404 = 0. + t1402;
  t1411 = -0.141285834136*t1404;
  t1413 = 0.366501*t1380;
  t1414 = 0. + t1413;
  t1418 = 0.055653909852*t1414;
  t1420 = 0. + t1398 + t1411 + t1418;
  t1431 = 1.296332362046933e-7*var1[8];
  t1432 = -0.14128592423750855*t1370;
  t1436 = 0.930418*t1380;
  t1437 = 0. + t1436;
  t1443 = -0.045000372235*t1437;
  t1455 = t1431 + t1432 + t1443;
  t1467 = -0.134322983001*t1370;
  t1469 = 1. + t1467;
  t1394 = t1022*t1388;
  t1426 = t1204*t1420;
  t1458 = t956*t1455;
  t1460 = 0. + var1[1] + t444 + t457 + t964 + t966 + t968 + t1394 + t1426 + t1458;
  t1481 = -1.*t1034*t1388;
  t1486 = -1.*t1312*t1420;
  t1490 = -1.*t984*t1455;
  t1492 = 0. + t497 + t498 + t501 + t860 + t906 + t936 + t1481 + t1486 + t1490;
  t1516 = -0.8656776547239999*t1370;
  t1518 = 1. + t1516;
  t1061 = t49*t136*t1053;
  t1062 = t381*t828;
  t1066 = t408*t840;
  t1076 = t1061 + t1062 + t1066;
  t1465 = 0.340999127418*t1370*t984;
  t1472 = t1469*t1034;
  t1475 = t1312*t1384;
  t1478 = t1465 + t1472 + t1475;
  t1566 = 0.340999127418*t1370*t1109;
  t1579 = t1469*t1118;
  t1583 = t1076*t1384;
  t1584 = t1566 + t1579 + t1583;
  t1641 = -1.*t1118*t1388;
  t1651 = -1.*t1076*t1420;
  t1652 = -1.*t1109*t1455;
  t1654 = 0. + t32 + t610 + t622 + t1149 + t1152 + t1154 + t1641 + t1651 + t1652;
  t1522 = t1518*t984;
  t1528 = 0.340999127418*t1370*t1034;
  t1529 = t1312*t1437;
  t1531 = t1522 + t1528 + t1529;
  t1664 = t1034*t1388;
  t1674 = t1312*t1420;
  t1675 = t984*t1455;
  t1680 = 0. + var1[2] + t629 + t630 + t1131 + t1132 + t1135 + t1664 + t1674 + t1675;
  t1610 = t1518*t1109;
  t1611 = 0.340999127418*t1370*t1118;
  t1614 = t1076*t1437;
  t1626 = t1610 + t1611 + t1614;
  t1497 = 0.340999127418*t1370*t956;
  t1498 = t1469*t1022;
  t1501 = t1204*t1384;
  t1503 = t1497 + t1498 + t1501;
  t1589 = -1.000000637725*t1370;
  t1591 = 1. + t1589;
  t1539 = t1518*t956;
  t1545 = 0.340999127418*t1370*t1022;
  t1547 = t1204*t1437;
  t1553 = t1539 + t1545 + t1547;
  t1739 = -1.*t1022*t1388;
  t1741 = -1.*t1204*t1420;
  t1743 = -1.*t956*t1455;
  t1745 = 0. + t694 + t696 + t700 + t1216 + t1219 + t1221 + t1739 + t1741 + t1743;
  t1749 = t1118*t1388;
  t1755 = t1076*t1420;
  t1757 = t1109*t1455;
  t1765 = 0. + var1[0] + t681 + t684 + t1231 + t1249 + t1250 + t1749 + t1755 + t1757;
  t1865 = Cos(var1[9]);
  t1867 = -1.*t1865;
  t1877 = 1. + t1867;
  t1880 = Sin(var1[9]);
  t1804 = t1591*t1312;
  t1812 = t984*t1404;
  t1825 = t1034*t1414;
  t1826 = t1804 + t1812 + t1825;
  t1939 = -0.930418*t1880;
  t1940 = 0. + t1939;
  t1725 = t1591*t1204;
  t1727 = t956*t1404;
  t1732 = t1022*t1414;
  t1733 = t1725 + t1727 + t1732;
  t1954 = -0.8656776547239999*t1877;
  t1956 = 1. + t1954;
  t1864 = -1.5981976069815686e-7*var1[9];
  t1878 = 0.08675267452931407*t1877;
  t1892 = 0.366501*t1880;
  t1895 = 0. + t1892;
  t1897 = 0.039853013046*t1895;
  t1899 = t1864 + t1878 + t1897;
  t1902 = 0.039853038461262744*t1877;
  t1903 = -0.366501*t1880;
  t1907 = 0. + t1903;
  t1908 = 0.086752619205*t1907;
  t1913 = 0.930418*t1880;
  t1916 = 0. + t1913;
  t1918 = -0.22023459268999998*t1916;
  t1921 = 0. + t1902 + t1908 + t1918;
  t1934 = -6.295460977284962e-8*var1[9];
  t1937 = -0.22023473313910558*t1877;
  t1941 = 0.039853013046*t1940;
  t1943 = t1934 + t1937 + t1941;
  t1900 = -1.*t1899*t1478;
  t1929 = -1.*t1921*t1826;
  t1945 = -1.*t1943*t1531;
  t1949 = 0. + t497 + t498 + t501 + t860 + t906 + t936 + t1481 + t1900 + t1486 + t1929 + t1490 + t1945;
  t2015 = -0.134322983001*t1877;
  t2018 = 1. + t2015;
  t1990 = t1899*t1503;
  t2001 = t1921*t1733;
  t2006 = t1943*t1553;
  t2009 = 0. + var1[1] + t444 + t457 + t964 + t966 + t968 + t1394 + t1990 + t1426 + t2001 + t1458 + t2006;
  t1592 = t1591*t1076;
  t1593 = t1109*t1404;
  t1599 = t1118*t1414;
  t1600 = t1592 + t1593 + t1599;
  t2072 = 0.340999127418*t1877*t1584;
  t2081 = t1940*t1600;
  t2083 = t1956*t1626;
  t2084 = t2072 + t2081 + t2083;
  t1966 = 0.340999127418*t1877*t1478;
  t1967 = t1940*t1826;
  t1969 = t1956*t1531;
  t1985 = t1966 + t1967 + t1969;
  t2141 = t1899*t1478;
  t2144 = t1921*t1826;
  t2152 = t1943*t1531;
  t2153 = 0. + var1[2] + t629 + t630 + t1131 + t1132 + t1135 + t1664 + t2141 + t1674 + t2144 + t1675 + t2152;
  t2112 = t2018*t1584;
  t2113 = t1895*t1600;
  t2117 = 0.340999127418*t1877*t1626;
  t2118 = t2112 + t2113 + t2117;
  t2040 = t2018*t1478;
  t2043 = t1895*t1826;
  t2046 = 0.340999127418*t1877*t1531;
  t2055 = t2040 + t2043 + t2046;
  t2160 = -1.*t1899*t1584;
  t2167 = -1.*t1921*t1600;
  t2168 = -1.*t1943*t1626;
  t2177 = 0. + t32 + t610 + t622 + t1149 + t1152 + t1154 + t1641 + t2160 + t1651 + t2167 + t1652 + t2168;
  t1952 = 0.340999127418*t1877*t1503;
  t1953 = t1940*t1733;
  t1957 = t1956*t1553;
  t1961 = t1952 + t1953 + t1957;
  t2020 = t2018*t1503;
  t2023 = t1895*t1733;
  t2026 = 0.340999127418*t1877*t1553;
  t2037 = t2020 + t2023 + t2026;
  t2123 = -1.000000637725*t1877;
  t2130 = 1. + t2123;
  t2241 = t1899*t1584;
  t2243 = t1921*t1600;
  t2247 = t1943*t1626;
  t2258 = 0. + var1[0] + t681 + t684 + t1231 + t1249 + t1250 + t1749 + t2241 + t1755 + t2243 + t1757 + t2247;
  t2265 = -1.*t1899*t1503;
  t2270 = -1.*t1921*t1733;
  t2273 = -1.*t1943*t1553;
  t2274 = 0. + t694 + t696 + t700 + t1216 + t1219 + t1221 + t1739 + t2265 + t1741 + t2270 + t1743 + t2273;
  t2357 = Sin(var1[10]);
  t2121 = t1907*t1584;
  t2132 = t2130*t1600;
  t2133 = t1916*t1626;
  t2136 = t2121 + t2132 + t2133;
  t2379 = Cos(var1[10]);
  t2386 = -1.*t2379;
  t2389 = 1. + t2386;
  t2406 = -0.8656776547239999*t2389;
  t2410 = 1. + t2406;
  t2427 = -0.930418*t2357;
  t2429 = 0. + t2427;
  t2217 = t1907*t1503;
  t2219 = t2130*t1733;
  t2220 = t1916*t1553;
  t2222 = t2217 + t2219 + t2220;
  t2446 = 0.366501*t2357;
  t2454 = 0. + t2446;
  t2369 = -0.366501*t2357;
  t2371 = 0. + t2369;
  t2363 = 0.930418*t2357;
  t2365 = 0. + t2363;
  t2304 = t1907*t1478;
  t2312 = t2130*t1826;
  t2317 = t1916*t1531;
  t2321 = t2304 + t2312 + t2317;
  t2504 = 2.281945176511838e-8*var1[10];
  t2505 = -0.5905366811997648*t2389;
  t2510 = -0.262809976934*t2429;
  t2515 = t2504 + t2505 + t2510;
  t2519 = 5.7930615939377813e-8*var1[10];
  t2532 = 0.23261833304643187*t2389;
  t2534 = -0.262809976934*t2454;
  t2535 = t2519 + t2532 + t2534;
  t2538 = -0.26281014453449253*t2389;
  t2539 = 0.23261818470000004*t2371;
  t2540 = -0.5905363046000001*t2365;
  t2542 = 0. + t2538 + t2539 + t2540;
  t2439 = -0.134322983001*t2389;
  t2443 = 1. + t2439;
  t2517 = -1.*t2515*t1985;
  t2537 = -1.*t2535*t2055;
  t2544 = -1.*t2542*t2321;
  t2546 = 0. + t497 + t498 + t501 + t860 + t906 + t936 + t2517 + t2537 + t2544 + t1481 + t1900 + t1486 + t1929 + t1490 + t1945;
  t2561 = t2515*t1961;
  t2563 = t2535*t2037;
  t2566 = t2542*t2222;
  t2570 = 0. + var1[1] + t444 + t457 + t964 + t966 + t968 + t2561 + t2563 + t2566 + t1394 + t1990 + t1426 + t2001 + t1458 + t2006;
  t2412 = t2410*t2084;
  t2413 = 0.340999127418*t2389*t2118;
  t2430 = t2429*t2136;
  t2433 = t2412 + t2413 + t2430;
  t2552 = t2410*t1985;
  t2554 = 0.340999127418*t2389*t2055;
  t2557 = t2429*t2321;
  t2559 = t2552 + t2554 + t2557;
  t2438 = 0.340999127418*t2389*t2084;
  t2444 = t2443*t2118;
  t2457 = t2454*t2136;
  t2476 = t2438 + t2444 + t2457;
  t2624 = t2515*t1985;
  t2626 = t2535*t2055;
  t2627 = t2542*t2321;
  t2631 = 0. + var1[2] + t629 + t630 + t1131 + t1132 + t1135 + t2624 + t2626 + t2627 + t1664 + t2141 + t1674 + t2144 + t1675 + t2152;
  t2595 = 0.340999127418*t2389*t1985;
  t2597 = t2443*t2055;
  t2601 = t2454*t2321;
  t2606 = t2595 + t2597 + t2601;
  t2645 = -1.*t2515*t2084;
  t2646 = -1.*t2535*t2118;
  t2654 = -1.*t2542*t2136;
  t2658 = 0. + t32 + t610 + t622 + t1149 + t1152 + t1154 + t2645 + t2646 + t2654 + t1641 + t2160 + t1651 + t2167 + t1652 + t2168;
  t2393 = -1.000000637725*t2389;
  t2395 = 1. + t2393;
  t2486 = t2410*t1961;
  t2492 = 0.340999127418*t2389*t2037;
  t2493 = t2429*t2222;
  t2497 = t2486 + t2492 + t2493;
  t2578 = 0.340999127418*t2389*t1961;
  t2580 = t2443*t2037;
  t2581 = t2454*t2222;
  t2590 = t2578 + t2580 + t2581;
  t2741 = t2515*t2084;
  t2748 = t2535*t2118;
  t2759 = t2542*t2136;
  t2762 = 0. + var1[0] + t681 + t684 + t1231 + t1249 + t1250 + t2741 + t2748 + t2759 + t1749 + t2241 + t1755 + t2243 + t1757 + t2247;
  t2768 = -1.*t2515*t1961;
  t2770 = -1.*t2535*t2037;
  t2776 = -1.*t2542*t2222;
  t2779 = 0. + t694 + t696 + t700 + t1216 + t1219 + t1221 + t2768 + t2770 + t2776 + t1739 + t2265 + t1741 + t2270 + t1743 + t2273;
  t2367 = t2365*t2084;
  t2372 = t2371*t2118;
  t2396 = t2395*t2136;
  t2400 = t2367 + t2372 + t2396;
  t2847 = Cos(var1[11]);
  t2848 = -1.*t2847;
  t2849 = 1. + t2848;
  t2835 = Sin(var1[11]);
  t2837 = 0.366501*t2835;
  t2844 = 0. + t2837;
  t2696 = t2365*t1961;
  t2697 = t2371*t2037;
  t2703 = t2395*t2222;
  t2708 = t2696 + t2697 + t2703;
  t2855 = -0.134322983001*t2849;
  t2858 = 1. + t2855;
  t2917 = -0.366501*t2835;
  t2920 = 0. + t2917;
  t2910 = 0.930418*t2835;
  t2912 = 0. + t2910;
  t2716 = t2365*t1985;
  t2720 = t2371*t2055;
  t2727 = t2395*t2321;
  t2729 = t2716 + t2720 + t2727;
  t2867 = -0.930418*t2835;
  t2872 = 0. + t2867;
  t2953 = 0.06199697675299678*t2849;
  t2959 = 0.324290713329*t2920;
  t2961 = -0.823260828522*t2912;
  t2962 = 0. + t2953 + t2959 + t2961;
  t2968 = 2.95447451120871e-8*var1[11];
  t2972 = -0.8232613535360118*t2849;
  t2973 = 0.061996937216*t2872;
  t2975 = t2968 + t2972 + t2973;
  t2981 = 7.500378623168247e-8*var1[11];
  t2983 = 0.32429092013729516*t2849;
  t2989 = 0.061996937216*t2844;
  t2990 = t2981 + t2983 + t2989;
  t2881 = -0.8656776547239999*t2849;
  t2883 = 1. + t2881;
  t2967 = -1.*t2962*t2729;
  t2980 = -1.*t2975*t2559;
  t2991 = -1.*t2990*t2606;
  t2992 = 0. + t497 + t498 + t501 + t860 + t906 + t936 + t2967 + t2980 + t2991 + t2517 + t2537 + t2544 + t1481 + t1900 + t1486 + t1929 + t1490 + t1945;
  t3011 = t2962*t2708;
  t3016 = t2975*t2497;
  t3019 = t2990*t2590;
  t3020 = 0. + var1[1] + t444 + t457 + t964 + t966 + t968 + t3011 + t3016 + t3019 + t2561 + t2563 + t2566 + t1394 + t1990 + t1426 + t2001 + t1458 + t2006;
  t2899 = -1.000000637725*t2849;
  t2902 = 1. + t2899;
  t2934 = t2844*t2708;
  t2942 = 0.340999127418*t2849*t2497;
  t2949 = t2858*t2590;
  t2950 = t2934 + t2942 + t2949;
  t3044 = t2872*t2708;
  t3045 = t2883*t2497;
  t3048 = 0.340999127418*t2849*t2590;
  t3054 = t3044 + t3045 + t3048;
  t3082 = t2902*t2708;
  t3083 = t2912*t2497;
  t3090 = t2920*t2590;
  t3091 = t3082 + t3083 + t3090;
  t2845 = t2844*t2400;
  t2852 = 0.340999127418*t2849*t2433;
  t2859 = t2858*t2476;
  t2861 = t2845 + t2852 + t2859;
  t2999 = t2844*t2729;
  t3002 = 0.340999127418*t2849*t2559;
  t3004 = t2858*t2606;
  t3006 = t2999 + t3002 + t3004;
  t2880 = t2872*t2400;
  t2886 = t2883*t2433;
  t2887 = 0.340999127418*t2849*t2476;
  t2888 = t2880 + t2886 + t2887;
  t3121 = t2962*t2729;
  t3125 = t2975*t2559;
  t3135 = t2990*t2606;
  t3138 = 0. + var1[2] + t629 + t630 + t1131 + t1132 + t1135 + t3121 + t3125 + t3135 + t2624 + t2626 + t2627 + t1664 + t2141 + t1674 + t2144 + t1675 + t2152;
  t3060 = t2872*t2729;
  t3061 = t2883*t2559;
  t3066 = 0.340999127418*t2849*t2606;
  t3069 = t3060 + t3061 + t3066;
  t3143 = -1.*t2962*t2400;
  t3149 = -1.*t2975*t2433;
  t3151 = -1.*t2990*t2476;
  t3152 = 0. + t32 + t610 + t622 + t1149 + t1152 + t1154 + t3143 + t3149 + t3151 + t2645 + t2646 + t2654 + t1641 + t2160 + t1651 + t2167 + t1652 + t2168;
  t2908 = t2902*t2400;
  t2915 = t2912*t2433;
  t2927 = t2920*t2476;
  t2931 = t2908 + t2915 + t2927;
  t3093 = t2902*t2729;
  t3103 = t2912*t2559;
  t3108 = t2920*t2606;
  t3109 = t3093 + t3103 + t3108;
  t3192 = t2962*t2400;
  t3196 = t2975*t2433;
  t3198 = t2990*t2476;
  t3199 = 0. + var1[0] + t681 + t684 + t1231 + t1249 + t1250 + t3192 + t3196 + t3198 + t2741 + t2748 + t2759 + t1749 + t2241 + t1755 + t2243 + t1757 + t2247;
  t3205 = -1.*t2962*t2708;
  t3206 = -1.*t2975*t2497;
  t3214 = -1.*t2990*t2590;
  t3221 = 0. + t694 + t696 + t700 + t1216 + t1219 + t1221 + t3205 + t3206 + t3214 + t2768 + t2770 + t2776 + t1739 + t2265 + t1741 + t2270 + t1743 + t2273;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t32;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t49*var1[2];
  p_output1[25]=-1.*t74*var1[2];
  p_output1[26]=t49*var1[0] + t74*var1[1];
  p_output1[27]=-1.*t74;
  p_output1[28]=t49;
  p_output1[29]=0;
  p_output1[30]=-1.*t141*var1[1] - 1.*t136*t74*var1[2];
  p_output1[31]=t141*var1[0] + t136*t49*var1[2];
  p_output1[32]=t136*t74*var1[0] - 1.*t136*t49*var1[1];
  p_output1[33]=t136*t49;
  p_output1[34]=t136*t74;
  p_output1[35]=-1.*t141;
  p_output1[36]=0.091*t233 + t141*var1[1] + t136*t74*var1[2];
  p_output1[37]=0.091*t249 - 1.*t141*var1[0] - 1.*t136*t49*var1[2];
  p_output1[38]=0.091*t136*t223 - 1.*t136*t74*var1[0] + t136*t49*var1[1];
  p_output1[39]=0. - 1.*t136*t49;
  p_output1[40]=0. - 1.*t136*t74;
  p_output1[41]=0. + t141;
  p_output1[42]=-0.041869*t381 - 0.016493*t408 - 0.084668*t136*t49 + 0.366501*(t458*t478 + t502*t533) - 0.930418*(t458*t561 + t502*t570);
  p_output1[43]=-0.041869*t533 - 0.016493*t570 + 0.366501*(t478*t626 + t381*t631) - 0.930418*(t561*t626 + t408*t631) - 0.084668*t136*t74;
  p_output1[44]=0.084668*t141 - 0.041869*t478 - 0.016493*t561 + 0.366501*(t533*t686 + t381*t703) - 0.930418*(t570*t686 + t408*t703);
  p_output1[45]=0. + 0.366501*t381 - 0.930418*t408;
  p_output1[46]=0. + 0.366501*t533 - 0.930418*t570;
  p_output1[47]=0. + 0.366501*t478 - 0.930418*t561;
  p_output1[48]=0.151852*t1076 - 0.041869*t1109 + 0.016493*t1118 + 0.930418*(t1022*t940 + t1034*t971) + 0.366501*(t940*t956 + t971*t984);
  p_output1[49]=0.016493*t1022 + 0.930418*(t1118*t1144 + t1034*t1158) + 0.151852*t1204 - 0.041869*t956 + 0.366501*(t1109*t1144 + t1158*t984);
  p_output1[50]=0.016493*t1034 + 0.930418*(t1118*t1226 + t1022*t1256) + 0.151852*t1312 + 0.366501*(t1109*t1226 + t1256*t956) - 0.041869*t984;
  p_output1[51]=0. + 0.366501*t1109 + 0.930418*t1118;
  p_output1[52]=0. + 0.930418*t1022 + 0.366501*t956;
  p_output1[53]=0. + 0.930418*t1034 + 0.366501*t984;
  p_output1[54]=-0.930418*(t1460*t1478 + t1492*t1503) - 0.366501*(t1460*t1531 + t1492*t1553) + 0.014606*t1584 - 0.236705*t1600 - 0.03708*t1626;
  p_output1[55]=0.014606*t1503 - 0.03708*t1553 - 0.930418*(t1478*t1654 + t1584*t1680) - 0.366501*(t1531*t1654 + t1626*t1680) - 0.236705*t1733;
  p_output1[56]=0.014606*t1478 - 0.03708*t1531 - 0.930418*(t1584*t1745 + t1503*t1765) - 0.366501*(t1626*t1745 + t1553*t1765) - 0.236705*t1826;
  p_output1[57]=0. - 0.930418*t1584 - 0.366501*t1626;
  p_output1[58]=0. - 0.930418*t1503 - 0.366501*t1553;
  p_output1[59]=0. - 0.930418*t1478 - 0.366501*t1531;
  p_output1[60]=-0.366501*(t1949*t1961 + t1985*t2009) - 0.930418*(t1949*t2037 + t2009*t2055) + 0.244523*t2084 - 0.09632*t2118 - 0.6347*t2136;
  p_output1[61]=0.244523*t1961 - 0.09632*t2037 - 0.366501*(t2084*t2153 + t1985*t2177) - 0.930418*(t2118*t2153 + t2055*t2177) - 0.6347*t2222;
  p_output1[62]=0.244523*t1985 - 0.09632*t2055 - 0.366501*(t1961*t2258 + t2084*t2274) - 0.930418*(t2037*t2258 + t2118*t2274) - 0.6347*t2321;
  p_output1[63]=0. - 0.366501*t2084 - 0.930418*t2118;
  p_output1[64]=0. - 0.366501*t1961 - 0.930418*t2037;
  p_output1[65]=0. - 0.366501*t1985 - 0.930418*t2055;
  p_output1[66]=-0.884829*t2400 - 0.057683*t2433 + 0.022722*t2476 - 0.366501*(t2497*t2546 + t2559*t2570) - 0.930418*(t2546*t2590 + t2570*t2606);
  p_output1[67]=-0.057683*t2497 + 0.022722*t2590 - 0.366501*(t2433*t2631 + t2559*t2658) - 0.930418*(t2476*t2631 + t2606*t2658) - 0.884829*t2708;
  p_output1[68]=-0.057683*t2559 + 0.022722*t2606 - 0.884829*t2729 - 0.366501*(t2497*t2762 + t2433*t2779) - 0.930418*(t2590*t2762 + t2476*t2779);
  p_output1[69]=0. - 0.366501*t2433 - 0.930418*t2476;
  p_output1[70]=0. - 0.366501*t2497 - 0.930418*t2590;
  p_output1[71]=0. - 0.366501*t2559 - 0.930418*t2606;
  p_output1[72]=-0.671277*t2861 - 0.337139*t2888 + 0.050068*t2931 - 0.218018*(t2950*t2992 + t3006*t3020) + 0.553471*(t2992*t3054 + t3020*t3069) + 0.803828*(t2992*t3091 + t3020*t3109);
  p_output1[73]=-0.671277*t2950 - 0.337139*t3054 + 0.050068*t3091 - 0.218018*(t2861*t3138 + t3006*t3152) + 0.553471*(t2888*t3138 + t3069*t3152) + 0.803828*(t2931*t3138 + t3109*t3152);
  p_output1[74]=-0.671277*t3006 - 0.337139*t3069 + 0.050068*t3109 - 0.218018*(t2950*t3199 + t2861*t3221) + 0.553471*(t3054*t3199 + t2888*t3221) + 0.803828*(t3091*t3199 + t2931*t3221);
  p_output1[75]=0. - 0.218018*t2861 + 0.553471*t2888 + 0.803828*t2931;
  p_output1[76]=0. - 0.218018*t2950 + 0.553471*t3054 + 0.803828*t3091;
  p_output1[77]=0. - 0.218018*t3006 + 0.553471*t3069 + 0.803828*t3109;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Js_left_toe_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

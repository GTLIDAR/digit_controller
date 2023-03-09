/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_left_tarsus_src.h"

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
  double t31;
  double t40;
  double t93;
  double t114;
  double t289;
  double t294;
  double t290;
  double t295;
  double t300;
  double t417;
  double t423;
  double t425;
  double t429;
  double t435;
  double t328;
  double t341;
  double t343;
  double t497;
  double t506;
  double t509;
  double t510;
  double t528;
  double t533;
  double t513;
  double t519;
  double t526;
  double t527;
  double t534;
  double t535;
  double t580;
  double t582;
  double t583;
  double t588;
  double t589;
  double t590;
  double t592;
  double t630;
  double t634;
  double t638;
  double t23;
  double t549;
  double t559;
  double t560;
  double t432;
  double t456;
  double t457;
  double t671;
  double t673;
  double t677;
  double t609;
  double t615;
  double t619;
  double t690;
  double t693;
  double t694;
  double t466;
  double t478;
  double t488;
  double t771;
  double t773;
  double t775;
  double t777;
  double t756;
  double t759;
  double t765;
  double t935;
  double t899;
  double t901;
  double t917;
  double t1008;
  double t1018;
  double t931;
  double t942;
  double t955;
  double t958;
  double t960;
  double t969;
  double t976;
  double t985;
  double t1004;
  double t1005;
  double t1020;
  double t1031;
  double t1046;
  double t1051;
  double t1052;
  double t1054;
  double t1055;
  double t1057;
  double t1103;
  double t1105;
  double t986;
  double t1041;
  double t1077;
  double t1088;
  double t1147;
  double t1150;
  double t1155;
  double t1158;
  double t1188;
  double t1191;
  double t1297;
  double t1304;
  double t1311;
  double t1312;
  double t1161;
  double t1168;
  double t1170;
  double t1171;
  double t1384;
  double t1385;
  double t1393;
  double t1402;
  double t1321;
  double t1335;
  double t1337;
  double t1347;
  double t1410;
  double t1421;
  double t1431;
  double t1433;
  double t1222;
  double t1223;
  double t1227;
  double t1229;
  double t1246;
  double t1255;
  double t1089;
  double t1129;
  double t1131;
  double t1140;
  double t1211;
  double t1215;
  double t1216;
  double t1218;
  double t1522;
  double t1528;
  double t1531;
  double t1536;
  double t1540;
  double t1541;
  double t1547;
  double t1552;
  double t1465;
  double t1472;
  double t1478;
  double t1481;
  double t1710;
  double t1716;
  double t1723;
  double t1726;
  double t1601;
  double t1603;
  double t1608;
  double t1612;
  double t1727;
  double t1735;
  double t1708;
  double t1725;
  double t1736;
  double t1737;
  double t1740;
  double t1745;
  double t1751;
  double t1757;
  double t1759;
  double t1764;
  double t1774;
  double t1775;
  double t1795;
  double t1797;
  double t1798;
  double t1801;
  double t1811;
  double t1812;
  double t1833;
  double t1835;
  double t1738;
  double t1778;
  double t1827;
  double t1829;
  double t1846;
  double t1853;
  double t1860;
  double t1861;
  double t1896;
  double t1898;
  double t1261;
  double t1264;
  double t1268;
  double t1271;
  double t1832;
  double t1838;
  double t1839;
  double t1842;
  double t1991;
  double t1993;
  double t2003;
  double t2016;
  double t2100;
  double t2101;
  double t2102;
  double t2104;
  double t1904;
  double t1915;
  double t1925;
  double t1941;
  double t2108;
  double t2111;
  double t2118;
  double t2119;
  double t2080;
  double t2088;
  double t2092;
  double t2094;
  double t1863;
  double t1869;
  double t1872;
  double t1876;
  double t2022;
  double t2026;
  double t1951;
  double t1962;
  double t1968;
  double t1975;
  double t2187;
  double t2188;
  double t2194;
  double t2205;
  double t2214;
  double t2218;
  double t2233;
  double t2235;
  double t2362;
  double t2364;
  double t2366;
  double t2369;
  double t2296;
  double t2297;
  double t2300;
  double t2305;
  double t2455;
  double t2463;
  double t2156;
  double t2158;
  double t2173;
  double t2174;
  double t2509;
  double t2513;
  double t2358;
  double t2367;
  double t2374;
  double t2375;
  double t2380;
  double t2402;
  double t2405;
  double t2418;
  double t2422;
  double t2423;
  double t2427;
  double t2435;
  double t2437;
  double t2442;
  double t2450;
  double t2453;
  double t2466;
  double t2488;
  double t2404;
  double t2446;
  double t2496;
  double t2498;
  double t2560;
  double t2567;
  double t2541;
  double t2543;
  double t2548;
  double t2550;
  double t2037;
  double t2048;
  double t2052;
  double t2059;
  double t2627;
  double t2628;
  double t2629;
  double t2630;
  double t2530;
  double t2531;
  double t2532;
  double t2537;
  double t2672;
  double t2676;
  double t2677;
  double t2678;
  double t2636;
  double t2639;
  double t2640;
  double t2641;
  double t2612;
  double t2615;
  double t2616;
  double t2617;
  double t2694;
  double t2696;
  double t2699;
  double t2700;
  double t2499;
  double t2503;
  double t2516;
  double t2520;
  double t2578;
  double t2581;
  double t2583;
  double t2594;
  double t2651;
  double t2653;
  double t2764;
  double t2775;
  double t2776;
  double t2786;
  double t2796;
  double t2798;
  double t2799;
  double t2811;
  t31 = Cos(var1[3]);
  t40 = Sin(var1[3]);
  t93 = Cos(var1[4]);
  t114 = Sin(var1[4]);
  t289 = Cos(var1[5]);
  t294 = Sin(var1[5]);
  t290 = t31*t289*t114;
  t295 = t40*t294;
  t300 = t290 + t295;
  t417 = Cos(var1[6]);
  t423 = -1.*t289*t40;
  t425 = t31*t114*t294;
  t429 = t423 + t425;
  t435 = Sin(var1[6]);
  t328 = t289*t40*t114;
  t341 = -1.*t31*t294;
  t343 = t328 + t341;
  t497 = -1.*t417;
  t506 = 1. + t497;
  t509 = 0.091*t506;
  t510 = 0. + t509;
  t528 = 0.091*t435;
  t533 = 0. + t528;
  t513 = t31*t289;
  t519 = t40*t114*t294;
  t526 = t513 + t519;
  t527 = t510*t526;
  t534 = t343*t533;
  t535 = 0. + var1[1] + t527 + t534;
  t580 = -1.*var1[2];
  t582 = -1.*t93*t510*t294;
  t583 = -1.*t93*t289*t533;
  t588 = 0. + t580 + t582 + t583;
  t589 = t417*t526;
  t590 = -1.*t343*t435;
  t592 = t589 + t590;
  t630 = t417*t343;
  t634 = t526*t435;
  t638 = t630 + t634;
  t23 = -1.*var1[0];
  t549 = t93*t417*t294;
  t559 = -1.*t93*t289*t435;
  t560 = t549 + t559;
  t432 = t417*t429;
  t456 = -1.*t300*t435;
  t457 = t432 + t456;
  t671 = -1.*t510*t429;
  t673 = -1.*t300*t533;
  t677 = 0. + t23 + t671 + t673;
  t609 = t93*t289*t417;
  t615 = t93*t294*t435;
  t619 = t609 + t615;
  t690 = t93*t510*t294;
  t693 = t93*t289*t533;
  t694 = 0. + var1[2] + t690 + t693;
  t466 = t417*t300;
  t478 = t429*t435;
  t488 = t466 + t478;
  t771 = -1.*var1[1];
  t773 = -1.*t510*t526;
  t775 = -1.*t343*t533;
  t777 = 0. + t771 + t773 + t775;
  t756 = t510*t429;
  t759 = t300*t533;
  t765 = 0. + var1[0] + t756 + t759;
  t935 = Sin(var1[7]);
  t899 = Cos(var1[7]);
  t901 = -1.*t899;
  t917 = 1. + t901;
  t1008 = 0.366501*t935;
  t1018 = 0. + t1008;
  t931 = -0.04500040093286238*t917;
  t942 = -0.930418*t935;
  t955 = 0. + t942;
  t958 = 0.07877663122399998*t955;
  t960 = -0.366501*t935;
  t969 = 0. + t960;
  t976 = 0.031030906668*t969;
  t985 = 0. + t931 + t958 + t976;
  t1004 = -3.2909349868922137e-7*var1[7];
  t1005 = 0.03103092645718495*t917;
  t1020 = -0.045000372235*t1018;
  t1031 = t1004 + t1005 + t1020;
  t1046 = 1.296332362046933e-7*var1[7];
  t1051 = 0.07877668146182712*t917;
  t1052 = 0.930418*t935;
  t1054 = 0. + t1052;
  t1055 = -0.045000372235*t1054;
  t1057 = t1046 + t1051 + t1055;
  t1103 = -0.134322983001*t917;
  t1105 = 1. + t1103;
  t986 = t114*t985;
  t1041 = -1.*t619*t1031;
  t1077 = -1.*t560*t1057;
  t1088 = 0. + t580 + t582 + t583 + t986 + t1041 + t1077;
  t1147 = t93*t40*t985;
  t1150 = t638*t1031;
  t1155 = t592*t1057;
  t1158 = 0. + var1[1] + t527 + t534 + t1147 + t1150 + t1155;
  t1188 = -0.8656776547239999*t917;
  t1191 = 1. + t1188;
  t1297 = -0.340999127418*t917*t457;
  t1304 = t1105*t488;
  t1311 = t31*t93*t1018;
  t1312 = t1297 + t1304 + t1311;
  t1161 = -0.340999127418*t917*t560;
  t1168 = t1105*t619;
  t1170 = -1.*t114*t1018;
  t1171 = t1161 + t1168 + t1170;
  t1384 = -1.*t114*t985;
  t1385 = t619*t1031;
  t1393 = t560*t1057;
  t1402 = 0. + var1[2] + t690 + t693 + t1384 + t1385 + t1393;
  t1321 = t1191*t457;
  t1335 = -0.340999127418*t917*t488;
  t1337 = t31*t93*t1054;
  t1347 = t1321 + t1335 + t1337;
  t1410 = -1.*t31*t93*t985;
  t1421 = -1.*t488*t1031;
  t1431 = -1.*t457*t1057;
  t1433 = 0. + t23 + t671 + t673 + t1410 + t1421 + t1431;
  t1222 = t1191*t560;
  t1223 = -0.340999127418*t917*t619;
  t1227 = -1.*t114*t1054;
  t1229 = t1222 + t1223 + t1227;
  t1246 = -1.000000637725*t917;
  t1255 = 1. + t1246;
  t1089 = -0.340999127418*t917*t592;
  t1129 = t1105*t638;
  t1131 = t93*t40*t1018;
  t1140 = t1089 + t1129 + t1131;
  t1211 = t1191*t592;
  t1215 = -0.340999127418*t917*t638;
  t1216 = t93*t40*t1054;
  t1218 = t1211 + t1215 + t1216;
  t1522 = -1.*t93*t40*t985;
  t1528 = -1.*t638*t1031;
  t1531 = -1.*t592*t1057;
  t1536 = 0. + t771 + t773 + t775 + t1522 + t1528 + t1531;
  t1540 = t31*t93*t985;
  t1541 = t488*t1031;
  t1547 = t457*t1057;
  t1552 = 0. + var1[0] + t756 + t759 + t1540 + t1541 + t1547;
  t1465 = t93*t1255*t40;
  t1472 = t592*t955;
  t1478 = t638*t969;
  t1481 = t1465 + t1472 + t1478;
  t1710 = Cos(var1[8]);
  t1716 = -1.*t1710;
  t1723 = 1. + t1716;
  t1726 = Sin(var1[8]);
  t1601 = -1.*t1255*t114;
  t1603 = t560*t955;
  t1608 = t619*t969;
  t1612 = t1601 + t1603 + t1608;
  t1727 = -0.366501*t1726;
  t1735 = 0. + t1727;
  t1708 = 3.2909349868922137e-7*var1[8];
  t1725 = 0.055653945343889656*t1723;
  t1736 = -0.045000372235*t1735;
  t1737 = t1708 + t1725 + t1736;
  t1740 = -0.04500040093286238*t1723;
  t1745 = -0.930418*t1726;
  t1751 = 0. + t1745;
  t1757 = -0.141285834136*t1751;
  t1759 = 0.366501*t1726;
  t1764 = 0. + t1759;
  t1774 = 0.055653909852*t1764;
  t1775 = 0. + t1740 + t1757 + t1774;
  t1795 = 1.296332362046933e-7*var1[8];
  t1797 = -0.14128592423750855*t1723;
  t1798 = 0.930418*t1726;
  t1801 = 0. + t1798;
  t1811 = -0.045000372235*t1801;
  t1812 = t1795 + t1797 + t1811;
  t1833 = -0.134322983001*t1723;
  t1835 = 1. + t1833;
  t1738 = t1218*t1737;
  t1778 = t1481*t1775;
  t1827 = t1140*t1812;
  t1829 = 0. + var1[1] + t527 + t534 + t1147 + t1150 + t1155 + t1738 + t1778 + t1827;
  t1846 = -1.*t1229*t1737;
  t1853 = -1.*t1612*t1775;
  t1860 = -1.*t1171*t1812;
  t1861 = 0. + t580 + t582 + t583 + t986 + t1041 + t1077 + t1846 + t1853 + t1860;
  t1896 = -0.8656776547239999*t1723;
  t1898 = 1. + t1896;
  t1261 = t31*t93*t1255;
  t1264 = t457*t955;
  t1268 = t488*t969;
  t1271 = t1261 + t1264 + t1268;
  t1832 = 0.340999127418*t1723*t1171;
  t1838 = t1835*t1229;
  t1839 = t1612*t1735;
  t1842 = t1832 + t1838 + t1839;
  t1991 = 0.340999127418*t1723*t1312;
  t1993 = t1835*t1347;
  t2003 = t1271*t1735;
  t2016 = t1991 + t1993 + t2003;
  t2100 = -1.*t1347*t1737;
  t2101 = -1.*t1271*t1775;
  t2102 = -1.*t1312*t1812;
  t2104 = 0. + t23 + t671 + t673 + t1410 + t1421 + t1431 + t2100 + t2101 + t2102;
  t1904 = t1898*t1171;
  t1915 = 0.340999127418*t1723*t1229;
  t1925 = t1612*t1801;
  t1941 = t1904 + t1915 + t1925;
  t2108 = t1229*t1737;
  t2111 = t1612*t1775;
  t2118 = t1171*t1812;
  t2119 = 0. + var1[2] + t690 + t693 + t1384 + t1385 + t1393 + t2108 + t2111 + t2118;
  t2080 = t1898*t1312;
  t2088 = 0.340999127418*t1723*t1347;
  t2092 = t1271*t1801;
  t2094 = t2080 + t2088 + t2092;
  t1863 = 0.340999127418*t1723*t1140;
  t1869 = t1835*t1218;
  t1872 = t1481*t1735;
  t1876 = t1863 + t1869 + t1872;
  t2022 = -1.000000637725*t1723;
  t2026 = 1. + t2022;
  t1951 = t1898*t1140;
  t1962 = 0.340999127418*t1723*t1218;
  t1968 = t1481*t1801;
  t1975 = t1951 + t1962 + t1968;
  t2187 = -1.*t1218*t1737;
  t2188 = -1.*t1481*t1775;
  t2194 = -1.*t1140*t1812;
  t2205 = 0. + t771 + t773 + t775 + t1522 + t1528 + t1531 + t2187 + t2188 + t2194;
  t2214 = t1347*t1737;
  t2218 = t1271*t1775;
  t2233 = t1312*t1812;
  t2235 = 0. + var1[0] + t756 + t759 + t1540 + t1541 + t1547 + t2214 + t2218 + t2233;
  t2362 = Cos(var1[9]);
  t2364 = -1.*t2362;
  t2366 = 1. + t2364;
  t2369 = Sin(var1[9]);
  t2296 = t2026*t1612;
  t2297 = t1171*t1751;
  t2300 = t1229*t1764;
  t2305 = t2296 + t2297 + t2300;
  t2455 = -0.930418*t2369;
  t2463 = 0. + t2455;
  t2156 = t2026*t1481;
  t2158 = t1140*t1751;
  t2173 = t1218*t1764;
  t2174 = t2156 + t2158 + t2173;
  t2509 = -0.8656776547239999*t2366;
  t2513 = 1. + t2509;
  t2358 = -1.5981976069815686e-7*var1[9];
  t2367 = 0.08675267452931407*t2366;
  t2374 = 0.366501*t2369;
  t2375 = 0. + t2374;
  t2380 = 0.039853013046*t2375;
  t2402 = t2358 + t2367 + t2380;
  t2405 = 0.039853038461262744*t2366;
  t2418 = -0.366501*t2369;
  t2422 = 0. + t2418;
  t2423 = 0.086752619205*t2422;
  t2427 = 0.930418*t2369;
  t2435 = 0. + t2427;
  t2437 = -0.22023459268999998*t2435;
  t2442 = 0. + t2405 + t2423 + t2437;
  t2450 = -6.295460977284962e-8*var1[9];
  t2453 = -0.22023473313910558*t2366;
  t2466 = 0.039853013046*t2463;
  t2488 = t2450 + t2453 + t2466;
  t2404 = -1.*t2402*t1842;
  t2446 = -1.*t2442*t2305;
  t2496 = -1.*t2488*t1941;
  t2498 = 0. + t580 + t582 + t583 + t986 + t1041 + t1077 + t1846 + t2404 + t1853 + t2446 + t1860 + t2496;
  t2560 = -0.134322983001*t2366;
  t2567 = 1. + t2560;
  t2541 = t2402*t1876;
  t2543 = t2442*t2174;
  t2548 = t2488*t1975;
  t2550 = 0. + var1[1] + t527 + t534 + t1147 + t1150 + t1155 + t1738 + t2541 + t1778 + t2543 + t1827 + t2548;
  t2037 = t2026*t1271;
  t2048 = t1312*t1751;
  t2052 = t1347*t1764;
  t2059 = t2037 + t2048 + t2052;
  t2627 = 0.340999127418*t2366*t2016;
  t2628 = t2463*t2059;
  t2629 = t2513*t2094;
  t2630 = t2627 + t2628 + t2629;
  t2530 = 0.340999127418*t2366*t1842;
  t2531 = t2463*t2305;
  t2532 = t2513*t1941;
  t2537 = t2530 + t2531 + t2532;
  t2672 = t2402*t1842;
  t2676 = t2442*t2305;
  t2677 = t2488*t1941;
  t2678 = 0. + var1[2] + t690 + t693 + t1384 + t1385 + t1393 + t2108 + t2672 + t2111 + t2676 + t2118 + t2677;
  t2636 = t2567*t2016;
  t2639 = t2375*t2059;
  t2640 = 0.340999127418*t2366*t2094;
  t2641 = t2636 + t2639 + t2640;
  t2612 = t2567*t1842;
  t2615 = t2375*t2305;
  t2616 = 0.340999127418*t2366*t1941;
  t2617 = t2612 + t2615 + t2616;
  t2694 = -1.*t2402*t2016;
  t2696 = -1.*t2442*t2059;
  t2699 = -1.*t2488*t2094;
  t2700 = 0. + t23 + t671 + t673 + t1410 + t1421 + t1431 + t2100 + t2694 + t2101 + t2696 + t2102 + t2699;
  t2499 = 0.340999127418*t2366*t1876;
  t2503 = t2463*t2174;
  t2516 = t2513*t1975;
  t2520 = t2499 + t2503 + t2516;
  t2578 = t2567*t1876;
  t2581 = t2375*t2174;
  t2583 = 0.340999127418*t2366*t1975;
  t2594 = t2578 + t2581 + t2583;
  t2651 = -1.000000637725*t2366;
  t2653 = 1. + t2651;
  t2764 = t2402*t2016;
  t2775 = t2442*t2059;
  t2776 = t2488*t2094;
  t2786 = 0. + var1[0] + t756 + t759 + t1540 + t1541 + t1547 + t2214 + t2764 + t2218 + t2775 + t2233 + t2776;
  t2796 = -1.*t2402*t1876;
  t2798 = -1.*t2442*t2174;
  t2799 = -1.*t2488*t1975;
  t2811 = 0. + t771 + t773 + t775 + t1522 + t1528 + t1531 + t2187 + t2796 + t2188 + t2798 + t2194 + t2799;
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
  p_output1[19]=t23;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t31*var1[2];
  p_output1[25]=-1.*t40*var1[2];
  p_output1[26]=t31*var1[0] + t40*var1[1];
  p_output1[27]=-1.*t40;
  p_output1[28]=t31;
  p_output1[29]=0;
  p_output1[30]=-1.*t114*var1[1] - 1.*t40*t93*var1[2];
  p_output1[31]=t114*var1[0] + t31*t93*var1[2];
  p_output1[32]=t40*t93*var1[0] - 1.*t31*t93*var1[1];
  p_output1[33]=t31*t93;
  p_output1[34]=t40*t93;
  p_output1[35]=-1.*t114;
  p_output1[36]=0.091*t300 + t114*var1[1] + t40*t93*var1[2];
  p_output1[37]=0.091*t343 - 1.*t114*var1[0] - 1.*t31*t93*var1[2];
  p_output1[38]=0.091*t289*t93 - 1.*t40*t93*var1[0] + t31*t93*var1[1];
  p_output1[39]=0. - 1.*t31*t93;
  p_output1[40]=0. - 1.*t40*t93;
  p_output1[41]=0. + t114;
  p_output1[42]=-0.041869*t457 - 0.016493*t488 + 0.366501*(t535*t560 + t588*t592) - 0.930418*(t535*t619 + t588*t638) - 0.084668*t31*t93;
  p_output1[43]=-0.041869*t592 - 0.016493*t638 + 0.366501*(t560*t677 + t457*t694) - 0.930418*(t619*t677 + t488*t694) - 0.084668*t40*t93;
  p_output1[44]=0.084668*t114 - 0.041869*t560 - 0.016493*t619 + 0.366501*(t592*t765 + t457*t777) - 0.930418*(t638*t765 + t488*t777);
  p_output1[45]=0. + 0.366501*t457 - 0.930418*t488;
  p_output1[46]=0. + 0.366501*t592 - 0.930418*t638;
  p_output1[47]=0. + 0.366501*t560 - 0.930418*t619;
  p_output1[48]=0.366501*(t1088*t1140 + t1158*t1171) + 0.930418*(t1088*t1218 + t1158*t1229) + 0.151852*t1271 - 0.041869*t1312 + 0.016493*t1347;
  p_output1[49]=-0.041869*t1140 + 0.016493*t1218 + 0.366501*(t1312*t1402 + t1171*t1433) + 0.930418*(t1347*t1402 + t1229*t1433) + 0.151852*t1481;
  p_output1[50]=-0.041869*t1171 + 0.016493*t1229 + 0.366501*(t1312*t1536 + t1140*t1552) + 0.930418*(t1347*t1536 + t1218*t1552) + 0.151852*t1612;
  p_output1[51]=0. + 0.366501*t1312 + 0.930418*t1347;
  p_output1[52]=0. + 0.366501*t1140 + 0.930418*t1218;
  p_output1[53]=0. + 0.366501*t1171 + 0.930418*t1229;
  p_output1[54]=-0.930418*(t1829*t1842 + t1861*t1876) - 0.366501*(t1829*t1941 + t1861*t1975) + 0.014606*t2016 - 0.236705*t2059 - 0.03708*t2094;
  p_output1[55]=0.014606*t1876 - 0.03708*t1975 - 0.930418*(t1842*t2104 + t2016*t2119) - 0.366501*(t1941*t2104 + t2094*t2119) - 0.236705*t2174;
  p_output1[56]=0.014606*t1842 - 0.03708*t1941 - 0.930418*(t2016*t2205 + t1876*t2235) - 0.366501*(t2094*t2205 + t1975*t2235) - 0.236705*t2305;
  p_output1[57]=0. - 0.930418*t2016 - 0.366501*t2094;
  p_output1[58]=0. - 0.930418*t1876 - 0.366501*t1975;
  p_output1[59]=0. - 0.930418*t1842 - 0.366501*t1941;
  p_output1[60]=-0.366501*(t2498*t2520 + t2537*t2550) - 0.930418*(t2498*t2594 + t2550*t2617) + 0.244523*t2630 - 0.09632*t2641 - 0.6347*(t2016*t2422 + t2094*t2435 + t2059*t2653);
  p_output1[61]=0.244523*t2520 - 0.09632*t2594 - 0.6347*(t1876*t2422 + t1975*t2435 + t2174*t2653) - 0.366501*(t2630*t2678 + t2537*t2700) - 0.930418*(t2641*t2678 + t2617*t2700);
  p_output1[62]=0.244523*t2537 - 0.09632*t2617 - 0.6347*(t1842*t2422 + t1941*t2435 + t2305*t2653) - 0.366501*(t2520*t2786 + t2630*t2811) - 0.930418*(t2594*t2786 + t2641*t2811);
  p_output1[63]=0. - 0.366501*t2630 - 0.930418*t2641;
  p_output1[64]=0. - 0.366501*t2520 - 0.930418*t2594;
  p_output1[65]=0. - 0.366501*t2537 - 0.930418*t2617;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
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



void Js_left_tarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

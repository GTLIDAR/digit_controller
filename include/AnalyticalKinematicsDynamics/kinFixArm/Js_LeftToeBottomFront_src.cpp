/*
 * Automatically Generated from Mathematica.
 * Sun 16 Oct 2022 21:52:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftToeBottomFront_src.h"

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
  double t57;
  double t63;
  double t103;
  double t107;
  double t183;
  double t185;
  double t184;
  double t189;
  double t191;
  double t285;
  double t287;
  double t288;
  double t300;
  double t311;
  double t213;
  double t214;
  double t218;
  double t347;
  double t355;
  double t379;
  double t380;
  double t397;
  double t408;
  double t385;
  double t393;
  double t395;
  double t396;
  double t420;
  double t425;
  double t437;
  double t444;
  double t448;
  double t452;
  double t453;
  double t456;
  double t460;
  double t493;
  double t494;
  double t502;
  double t44;
  double t426;
  double t428;
  double t430;
  double t304;
  double t314;
  double t318;
  double t531;
  double t535;
  double t538;
  double t479;
  double t484;
  double t489;
  double t544;
  double t554;
  double t558;
  double t330;
  double t333;
  double t345;
  double t606;
  double t608;
  double t614;
  double t616;
  double t595;
  double t603;
  double t604;
  double t740;
  double t703;
  double t721;
  double t724;
  double t788;
  double t790;
  double t736;
  double t742;
  double t752;
  double t753;
  double t755;
  double t757;
  double t758;
  double t763;
  double t775;
  double t776;
  double t795;
  double t806;
  double t809;
  double t815;
  double t819;
  double t822;
  double t823;
  double t825;
  double t845;
  double t865;
  double t770;
  double t807;
  double t837;
  double t838;
  double t891;
  double t893;
  double t895;
  double t901;
  double t930;
  double t931;
  double t1007;
  double t1013;
  double t1021;
  double t1022;
  double t906;
  double t909;
  double t912;
  double t915;
  double t1056;
  double t1057;
  double t1060;
  double t1065;
  double t1027;
  double t1030;
  double t1033;
  double t1036;
  double t1085;
  double t1090;
  double t1095;
  double t1096;
  double t962;
  double t963;
  double t965;
  double t972;
  double t985;
  double t990;
  double t843;
  double t868;
  double t887;
  double t889;
  double t941;
  double t942;
  double t943;
  double t952;
  double t1150;
  double t1153;
  double t1167;
  double t1168;
  double t1176;
  double t1183;
  double t1184;
  double t1188;
  double t1124;
  double t1127;
  double t1130;
  double t1133;
  double t1319;
  double t1321;
  double t1322;
  double t1328;
  double t1228;
  double t1240;
  double t1241;
  double t1247;
  double t1330;
  double t1335;
  double t1315;
  double t1324;
  double t1339;
  double t1341;
  double t1344;
  double t1345;
  double t1348;
  double t1349;
  double t1351;
  double t1352;
  double t1357;
  double t1358;
  double t1374;
  double t1375;
  double t1377;
  double t1378;
  double t1379;
  double t1383;
  double t1390;
  double t1392;
  double t1342;
  double t1359;
  double t1387;
  double t1388;
  double t1405;
  double t1410;
  double t1413;
  double t1414;
  double t1438;
  double t1439;
  double t992;
  double t996;
  double t1000;
  double t1001;
  double t1389;
  double t1394;
  double t1396;
  double t1400;
  double t1492;
  double t1493;
  double t1496;
  double t1500;
  double t1547;
  double t1549;
  double t1550;
  double t1551;
  double t1440;
  double t1442;
  double t1446;
  double t1451;
  double t1559;
  double t1560;
  double t1565;
  double t1570;
  double t1533;
  double t1537;
  double t1538;
  double t1539;
  double t1424;
  double t1425;
  double t1426;
  double t1429;
  double t1512;
  double t1513;
  double t1464;
  double t1474;
  double t1475;
  double t1477;
  double t1636;
  double t1638;
  double t1645;
  double t1646;
  double t1653;
  double t1655;
  double t1659;
  double t1660;
  double t1747;
  double t1749;
  double t1752;
  double t1761;
  double t1697;
  double t1701;
  double t1702;
  double t1703;
  double t1817;
  double t1819;
  double t1606;
  double t1608;
  double t1609;
  double t1621;
  double t1848;
  double t1852;
  double t1745;
  double t1755;
  double t1762;
  double t1763;
  double t1767;
  double t1770;
  double t1784;
  double t1785;
  double t1789;
  double t1794;
  double t1795;
  double t1797;
  double t1799;
  double t1801;
  double t1811;
  double t1812;
  double t1820;
  double t1822;
  double t1771;
  double t1804;
  double t1823;
  double t1824;
  double t1908;
  double t1912;
  double t1891;
  double t1892;
  double t1893;
  double t1894;
  double t1516;
  double t1519;
  double t1526;
  double t1527;
  double t1953;
  double t1959;
  double t1962;
  double t1968;
  double t1876;
  double t1879;
  double t1882;
  double t1883;
  double t2028;
  double t2030;
  double t2033;
  double t2034;
  double t1974;
  double t1976;
  double t1986;
  double t1991;
  double t1933;
  double t1934;
  double t1935;
  double t1944;
  double t2041;
  double t2042;
  double t2053;
  double t2057;
  double t1829;
  double t1831;
  double t1859;
  double t1862;
  double t1916;
  double t1917;
  double t1922;
  double t1924;
  double t1999;
  double t2012;
  double t2113;
  double t2117;
  double t2122;
  double t2123;
  double t2128;
  double t2131;
  double t2135;
  double t2137;
  double t2216;
  double t1998;
  double t2013;
  double t2014;
  double t2015;
  double t2251;
  double t2258;
  double t2260;
  double t2282;
  double t2284;
  double t2289;
  double t2296;
  double t2087;
  double t2093;
  double t2095;
  double t2096;
  double t2312;
  double t2328;
  double t2243;
  double t2249;
  double t2232;
  double t2239;
  double t2170;
  double t2172;
  double t2174;
  double t2175;
  double t2362;
  double t2364;
  double t2367;
  double t2369;
  double t2371;
  double t2374;
  double t2377;
  double t2378;
  double t2382;
  double t2383;
  double t2384;
  double t2388;
  double t2305;
  double t2310;
  double t2370;
  double t2379;
  double t2392;
  double t2396;
  double t2410;
  double t2416;
  double t2419;
  double t2429;
  double t2285;
  double t2286;
  double t2299;
  double t2302;
  double t2400;
  double t2402;
  double t2406;
  double t2408;
  double t2304;
  double t2311;
  double t2334;
  double t2335;
  double t2487;
  double t2494;
  double t2496;
  double t2498;
  double t2452;
  double t2453;
  double t2458;
  double t2460;
  double t2505;
  double t2517;
  double t2521;
  double t2523;
  double t2262;
  double t2264;
  double t2343;
  double t2344;
  double t2355;
  double t2357;
  double t2442;
  double t2447;
  double t2448;
  double t2449;
  double t2597;
  double t2600;
  double t2601;
  double t2602;
  double t2607;
  double t2608;
  double t2614;
  double t2618;
  double t2242;
  double t2250;
  double t2271;
  double t2272;
  double t2699;
  double t2701;
  double t2702;
  double t2685;
  double t2690;
  double t2695;
  double t2538;
  double t2542;
  double t2543;
  double t2545;
  double t2709;
  double t2712;
  double t2775;
  double t2778;
  double t2766;
  double t2767;
  double t2560;
  double t2561;
  double t2568;
  double t2571;
  double t2723;
  double t2725;
  double t2807;
  double t2810;
  double t2811;
  double t2812;
  double t2818;
  double t2821;
  double t2830;
  double t2832;
  double t2842;
  double t2846;
  double t2848;
  double t2849;
  double t2728;
  double t2737;
  double t2815;
  double t2836;
  double t2850;
  double t2851;
  double t2866;
  double t2868;
  double t2869;
  double t2871;
  double t2753;
  double t2754;
  double t2790;
  double t2795;
  double t2804;
  double t2805;
  double t2890;
  double t2892;
  double t2894;
  double t2896;
  double t2920;
  double t2922;
  double t2929;
  double t2938;
  double t2696;
  double t2704;
  double t2713;
  double t2716;
  double t2861;
  double t2863;
  double t2864;
  double t2865;
  double t2727;
  double t2740;
  double t2748;
  double t2749;
  double t2982;
  double t2984;
  double t2991;
  double t2994;
  double t2899;
  double t2905;
  double t2906;
  double t2907;
  double t2997;
  double t2999;
  double t3000;
  double t3002;
  double t2763;
  double t2772;
  double t2779;
  double t2780;
  double t2943;
  double t2950;
  double t2954;
  double t2956;
  double t3043;
  double t3046;
  double t3056;
  double t3062;
  double t3064;
  double t3069;
  double t3071;
  double t3073;
  t57 = Cos(var1[3]);
  t63 = Sin(var1[3]);
  t103 = Cos(var1[4]);
  t107 = Sin(var1[4]);
  t183 = Cos(var1[5]);
  t185 = Sin(var1[5]);
  t184 = t57*t183*t107;
  t189 = t63*t185;
  t191 = t184 + t189;
  t285 = Cos(var1[6]);
  t287 = -1.*t183*t63;
  t288 = t57*t107*t185;
  t300 = t287 + t288;
  t311 = Sin(var1[6]);
  t213 = t183*t63*t107;
  t214 = -1.*t57*t185;
  t218 = t213 + t214;
  t347 = -1.*t285;
  t355 = 1. + t347;
  t379 = 0.091*t355;
  t380 = 0. + t379;
  t397 = 0.091*t311;
  t408 = 0. + t397;
  t385 = t57*t183;
  t393 = t63*t107*t185;
  t395 = t385 + t393;
  t396 = t380*t395;
  t420 = t218*t408;
  t425 = 0. + var1[1] + t396 + t420;
  t437 = -1.*var1[2];
  t444 = -1.*t103*t380*t185;
  t448 = -1.*t103*t183*t408;
  t452 = 0. + t437 + t444 + t448;
  t453 = t285*t395;
  t456 = -1.*t218*t311;
  t460 = t453 + t456;
  t493 = t285*t218;
  t494 = t395*t311;
  t502 = t493 + t494;
  t44 = -1.*var1[0];
  t426 = t103*t285*t185;
  t428 = -1.*t103*t183*t311;
  t430 = t426 + t428;
  t304 = t285*t300;
  t314 = -1.*t191*t311;
  t318 = t304 + t314;
  t531 = -1.*t380*t300;
  t535 = -1.*t191*t408;
  t538 = 0. + t44 + t531 + t535;
  t479 = t103*t183*t285;
  t484 = t103*t185*t311;
  t489 = t479 + t484;
  t544 = t103*t380*t185;
  t554 = t103*t183*t408;
  t558 = 0. + var1[2] + t544 + t554;
  t330 = t285*t191;
  t333 = t300*t311;
  t345 = t330 + t333;
  t606 = -1.*var1[1];
  t608 = -1.*t380*t395;
  t614 = -1.*t218*t408;
  t616 = 0. + t606 + t608 + t614;
  t595 = t380*t300;
  t603 = t191*t408;
  t604 = 0. + var1[0] + t595 + t603;
  t740 = Sin(var1[7]);
  t703 = Cos(var1[7]);
  t721 = -1.*t703;
  t724 = 1. + t721;
  t788 = 0.366501*t740;
  t790 = 0. + t788;
  t736 = -0.04500040093286238*t724;
  t742 = -0.930418*t740;
  t752 = 0. + t742;
  t753 = 0.07877663122399998*t752;
  t755 = -0.366501*t740;
  t757 = 0. + t755;
  t758 = 0.031030906668*t757;
  t763 = 0. + t736 + t753 + t758;
  t775 = -3.2909349868922137e-7*var1[7];
  t776 = 0.03103092645718495*t724;
  t795 = -0.045000372235*t790;
  t806 = t775 + t776 + t795;
  t809 = 1.296332362046933e-7*var1[7];
  t815 = 0.07877668146182712*t724;
  t819 = 0.930418*t740;
  t822 = 0. + t819;
  t823 = -0.045000372235*t822;
  t825 = t809 + t815 + t823;
  t845 = -0.134322983001*t724;
  t865 = 1. + t845;
  t770 = t107*t763;
  t807 = -1.*t489*t806;
  t837 = -1.*t430*t825;
  t838 = 0. + t437 + t444 + t448 + t770 + t807 + t837;
  t891 = t103*t63*t763;
  t893 = t502*t806;
  t895 = t460*t825;
  t901 = 0. + var1[1] + t396 + t420 + t891 + t893 + t895;
  t930 = -0.8656776547239999*t724;
  t931 = 1. + t930;
  t1007 = -0.340999127418*t724*t318;
  t1013 = t865*t345;
  t1021 = t57*t103*t790;
  t1022 = t1007 + t1013 + t1021;
  t906 = -0.340999127418*t724*t430;
  t909 = t865*t489;
  t912 = -1.*t107*t790;
  t915 = t906 + t909 + t912;
  t1056 = -1.*t107*t763;
  t1057 = t489*t806;
  t1060 = t430*t825;
  t1065 = 0. + var1[2] + t544 + t554 + t1056 + t1057 + t1060;
  t1027 = t931*t318;
  t1030 = -0.340999127418*t724*t345;
  t1033 = t57*t103*t822;
  t1036 = t1027 + t1030 + t1033;
  t1085 = -1.*t57*t103*t763;
  t1090 = -1.*t345*t806;
  t1095 = -1.*t318*t825;
  t1096 = 0. + t44 + t531 + t535 + t1085 + t1090 + t1095;
  t962 = t931*t430;
  t963 = -0.340999127418*t724*t489;
  t965 = -1.*t107*t822;
  t972 = t962 + t963 + t965;
  t985 = -1.000000637725*t724;
  t990 = 1. + t985;
  t843 = -0.340999127418*t724*t460;
  t868 = t865*t502;
  t887 = t103*t63*t790;
  t889 = t843 + t868 + t887;
  t941 = t931*t460;
  t942 = -0.340999127418*t724*t502;
  t943 = t103*t63*t822;
  t952 = t941 + t942 + t943;
  t1150 = -1.*t103*t63*t763;
  t1153 = -1.*t502*t806;
  t1167 = -1.*t460*t825;
  t1168 = 0. + t606 + t608 + t614 + t1150 + t1153 + t1167;
  t1176 = t57*t103*t763;
  t1183 = t345*t806;
  t1184 = t318*t825;
  t1188 = 0. + var1[0] + t595 + t603 + t1176 + t1183 + t1184;
  t1124 = t103*t990*t63;
  t1127 = t460*t752;
  t1130 = t502*t757;
  t1133 = t1124 + t1127 + t1130;
  t1319 = Cos(var1[8]);
  t1321 = -1.*t1319;
  t1322 = 1. + t1321;
  t1328 = Sin(var1[8]);
  t1228 = -1.*t990*t107;
  t1240 = t430*t752;
  t1241 = t489*t757;
  t1247 = t1228 + t1240 + t1241;
  t1330 = -0.366501*t1328;
  t1335 = 0. + t1330;
  t1315 = 3.2909349868922137e-7*var1[8];
  t1324 = 0.055653945343889656*t1322;
  t1339 = -0.045000372235*t1335;
  t1341 = t1315 + t1324 + t1339;
  t1344 = -0.04500040093286238*t1322;
  t1345 = -0.930418*t1328;
  t1348 = 0. + t1345;
  t1349 = -0.141285834136*t1348;
  t1351 = 0.366501*t1328;
  t1352 = 0. + t1351;
  t1357 = 0.055653909852*t1352;
  t1358 = 0. + t1344 + t1349 + t1357;
  t1374 = 1.296332362046933e-7*var1[8];
  t1375 = -0.14128592423750855*t1322;
  t1377 = 0.930418*t1328;
  t1378 = 0. + t1377;
  t1379 = -0.045000372235*t1378;
  t1383 = t1374 + t1375 + t1379;
  t1390 = -0.134322983001*t1322;
  t1392 = 1. + t1390;
  t1342 = t952*t1341;
  t1359 = t1133*t1358;
  t1387 = t889*t1383;
  t1388 = 0. + var1[1] + t396 + t420 + t891 + t893 + t895 + t1342 + t1359 + t1387;
  t1405 = -1.*t972*t1341;
  t1410 = -1.*t1247*t1358;
  t1413 = -1.*t915*t1383;
  t1414 = 0. + t437 + t444 + t448 + t770 + t807 + t837 + t1405 + t1410 + t1413;
  t1438 = -0.8656776547239999*t1322;
  t1439 = 1. + t1438;
  t992 = t57*t103*t990;
  t996 = t318*t752;
  t1000 = t345*t757;
  t1001 = t992 + t996 + t1000;
  t1389 = 0.340999127418*t1322*t915;
  t1394 = t1392*t972;
  t1396 = t1247*t1335;
  t1400 = t1389 + t1394 + t1396;
  t1492 = 0.340999127418*t1322*t1022;
  t1493 = t1392*t1036;
  t1496 = t1001*t1335;
  t1500 = t1492 + t1493 + t1496;
  t1547 = -1.*t1036*t1341;
  t1549 = -1.*t1001*t1358;
  t1550 = -1.*t1022*t1383;
  t1551 = 0. + t44 + t531 + t535 + t1085 + t1090 + t1095 + t1547 + t1549 + t1550;
  t1440 = t1439*t915;
  t1442 = 0.340999127418*t1322*t972;
  t1446 = t1247*t1378;
  t1451 = t1440 + t1442 + t1446;
  t1559 = t972*t1341;
  t1560 = t1247*t1358;
  t1565 = t915*t1383;
  t1570 = 0. + var1[2] + t544 + t554 + t1056 + t1057 + t1060 + t1559 + t1560 + t1565;
  t1533 = t1439*t1022;
  t1537 = 0.340999127418*t1322*t1036;
  t1538 = t1001*t1378;
  t1539 = t1533 + t1537 + t1538;
  t1424 = 0.340999127418*t1322*t889;
  t1425 = t1392*t952;
  t1426 = t1133*t1335;
  t1429 = t1424 + t1425 + t1426;
  t1512 = -1.000000637725*t1322;
  t1513 = 1. + t1512;
  t1464 = t1439*t889;
  t1474 = 0.340999127418*t1322*t952;
  t1475 = t1133*t1378;
  t1477 = t1464 + t1474 + t1475;
  t1636 = -1.*t952*t1341;
  t1638 = -1.*t1133*t1358;
  t1645 = -1.*t889*t1383;
  t1646 = 0. + t606 + t608 + t614 + t1150 + t1153 + t1167 + t1636 + t1638 + t1645;
  t1653 = t1036*t1341;
  t1655 = t1001*t1358;
  t1659 = t1022*t1383;
  t1660 = 0. + var1[0] + t595 + t603 + t1176 + t1183 + t1184 + t1653 + t1655 + t1659;
  t1747 = Cos(var1[9]);
  t1749 = -1.*t1747;
  t1752 = 1. + t1749;
  t1761 = Sin(var1[9]);
  t1697 = t1513*t1247;
  t1701 = t915*t1348;
  t1702 = t972*t1352;
  t1703 = t1697 + t1701 + t1702;
  t1817 = -0.930418*t1761;
  t1819 = 0. + t1817;
  t1606 = t1513*t1133;
  t1608 = t889*t1348;
  t1609 = t952*t1352;
  t1621 = t1606 + t1608 + t1609;
  t1848 = -0.8656776547239999*t1752;
  t1852 = 1. + t1848;
  t1745 = -1.5981976069815686e-7*var1[9];
  t1755 = 0.08675267452931407*t1752;
  t1762 = 0.366501*t1761;
  t1763 = 0. + t1762;
  t1767 = 0.039853013046*t1763;
  t1770 = t1745 + t1755 + t1767;
  t1784 = 0.039853038461262744*t1752;
  t1785 = -0.366501*t1761;
  t1789 = 0. + t1785;
  t1794 = 0.086752619205*t1789;
  t1795 = 0.930418*t1761;
  t1797 = 0. + t1795;
  t1799 = -0.22023459268999998*t1797;
  t1801 = 0. + t1784 + t1794 + t1799;
  t1811 = -6.295460977284962e-8*var1[9];
  t1812 = -0.22023473313910558*t1752;
  t1820 = 0.039853013046*t1819;
  t1822 = t1811 + t1812 + t1820;
  t1771 = -1.*t1770*t1400;
  t1804 = -1.*t1801*t1703;
  t1823 = -1.*t1822*t1451;
  t1824 = 0. + t437 + t444 + t448 + t770 + t807 + t837 + t1405 + t1771 + t1410 + t1804 + t1413 + t1823;
  t1908 = -0.134322983001*t1752;
  t1912 = 1. + t1908;
  t1891 = t1770*t1429;
  t1892 = t1801*t1621;
  t1893 = t1822*t1477;
  t1894 = 0. + var1[1] + t396 + t420 + t891 + t893 + t895 + t1342 + t1891 + t1359 + t1892 + t1387 + t1893;
  t1516 = t1513*t1001;
  t1519 = t1022*t1348;
  t1526 = t1036*t1352;
  t1527 = t1516 + t1519 + t1526;
  t1953 = 0.340999127418*t1752*t1500;
  t1959 = t1819*t1527;
  t1962 = t1852*t1539;
  t1968 = t1953 + t1959 + t1962;
  t1876 = 0.340999127418*t1752*t1400;
  t1879 = t1819*t1703;
  t1882 = t1852*t1451;
  t1883 = t1876 + t1879 + t1882;
  t2028 = t1770*t1400;
  t2030 = t1801*t1703;
  t2033 = t1822*t1451;
  t2034 = 0. + var1[2] + t544 + t554 + t1056 + t1057 + t1060 + t1559 + t2028 + t1560 + t2030 + t1565 + t2033;
  t1974 = t1912*t1500;
  t1976 = t1763*t1527;
  t1986 = 0.340999127418*t1752*t1539;
  t1991 = t1974 + t1976 + t1986;
  t1933 = t1912*t1400;
  t1934 = t1763*t1703;
  t1935 = 0.340999127418*t1752*t1451;
  t1944 = t1933 + t1934 + t1935;
  t2041 = -1.*t1770*t1500;
  t2042 = -1.*t1801*t1527;
  t2053 = -1.*t1822*t1539;
  t2057 = 0. + t44 + t531 + t535 + t1085 + t1090 + t1095 + t1547 + t2041 + t1549 + t2042 + t1550 + t2053;
  t1829 = 0.340999127418*t1752*t1429;
  t1831 = t1819*t1621;
  t1859 = t1852*t1477;
  t1862 = t1829 + t1831 + t1859;
  t1916 = t1912*t1429;
  t1917 = t1763*t1621;
  t1922 = 0.340999127418*t1752*t1477;
  t1924 = t1916 + t1917 + t1922;
  t1999 = -1.000000637725*t1752;
  t2012 = 1. + t1999;
  t2113 = t1770*t1500;
  t2117 = t1801*t1527;
  t2122 = t1822*t1539;
  t2123 = 0. + var1[0] + t595 + t603 + t1176 + t1183 + t1184 + t1653 + t2113 + t1655 + t2117 + t1659 + t2122;
  t2128 = -1.*t1770*t1429;
  t2131 = -1.*t1801*t1621;
  t2135 = -1.*t1822*t1477;
  t2137 = 0. + t606 + t608 + t614 + t1150 + t1153 + t1167 + t1636 + t2128 + t1638 + t2131 + t1645 + t2135;
  t2216 = Sin(var1[10]);
  t1998 = t1789*t1500;
  t2013 = t2012*t1527;
  t2014 = t1797*t1539;
  t2015 = t1998 + t2013 + t2014;
  t2251 = Cos(var1[10]);
  t2258 = -1.*t2251;
  t2260 = 1. + t2258;
  t2282 = -0.8656776547239999*t2260;
  t2284 = 1. + t2282;
  t2289 = -0.930418*t2216;
  t2296 = 0. + t2289;
  t2087 = t1789*t1429;
  t2093 = t2012*t1621;
  t2095 = t1797*t1477;
  t2096 = t2087 + t2093 + t2095;
  t2312 = 0.366501*t2216;
  t2328 = 0. + t2312;
  t2243 = -0.366501*t2216;
  t2249 = 0. + t2243;
  t2232 = 0.930418*t2216;
  t2239 = 0. + t2232;
  t2170 = t1789*t1400;
  t2172 = t2012*t1703;
  t2174 = t1797*t1451;
  t2175 = t2170 + t2172 + t2174;
  t2362 = 2.281945176511838e-8*var1[10];
  t2364 = -0.5905366811997648*t2260;
  t2367 = -0.262809976934*t2296;
  t2369 = t2362 + t2364 + t2367;
  t2371 = 5.7930615939377813e-8*var1[10];
  t2374 = 0.23261833304643187*t2260;
  t2377 = -0.262809976934*t2328;
  t2378 = t2371 + t2374 + t2377;
  t2382 = -0.26281014453449253*t2260;
  t2383 = 0.23261818470000004*t2249;
  t2384 = -0.5905363046000001*t2239;
  t2388 = 0. + t2382 + t2383 + t2384;
  t2305 = -0.134322983001*t2260;
  t2310 = 1. + t2305;
  t2370 = -1.*t2369*t1883;
  t2379 = -1.*t2378*t1944;
  t2392 = -1.*t2388*t2175;
  t2396 = 0. + t437 + t444 + t448 + t770 + t807 + t837 + t2370 + t2379 + t2392 + t1405 + t1771 + t1410 + t1804 + t1413 + t1823;
  t2410 = t2369*t1862;
  t2416 = t2378*t1924;
  t2419 = t2388*t2096;
  t2429 = 0. + var1[1] + t396 + t420 + t891 + t893 + t895 + t2410 + t2416 + t2419 + t1342 + t1891 + t1359 + t1892 + t1387 + t1893;
  t2285 = t2284*t1968;
  t2286 = 0.340999127418*t2260*t1991;
  t2299 = t2296*t2015;
  t2302 = t2285 + t2286 + t2299;
  t2400 = t2284*t1883;
  t2402 = 0.340999127418*t2260*t1944;
  t2406 = t2296*t2175;
  t2408 = t2400 + t2402 + t2406;
  t2304 = 0.340999127418*t2260*t1968;
  t2311 = t2310*t1991;
  t2334 = t2328*t2015;
  t2335 = t2304 + t2311 + t2334;
  t2487 = t2369*t1883;
  t2494 = t2378*t1944;
  t2496 = t2388*t2175;
  t2498 = 0. + var1[2] + t544 + t554 + t1056 + t1057 + t1060 + t2487 + t2494 + t2496 + t1559 + t2028 + t1560 + t2030 + t1565 + t2033;
  t2452 = 0.340999127418*t2260*t1883;
  t2453 = t2310*t1944;
  t2458 = t2328*t2175;
  t2460 = t2452 + t2453 + t2458;
  t2505 = -1.*t2369*t1968;
  t2517 = -1.*t2378*t1991;
  t2521 = -1.*t2388*t2015;
  t2523 = 0. + t44 + t531 + t535 + t1085 + t1090 + t1095 + t2505 + t2517 + t2521 + t1547 + t2041 + t1549 + t2042 + t1550 + t2053;
  t2262 = -1.000000637725*t2260;
  t2264 = 1. + t2262;
  t2343 = t2284*t1862;
  t2344 = 0.340999127418*t2260*t1924;
  t2355 = t2296*t2096;
  t2357 = t2343 + t2344 + t2355;
  t2442 = 0.340999127418*t2260*t1862;
  t2447 = t2310*t1924;
  t2448 = t2328*t2096;
  t2449 = t2442 + t2447 + t2448;
  t2597 = t2369*t1968;
  t2600 = t2378*t1991;
  t2601 = t2388*t2015;
  t2602 = 0. + var1[0] + t595 + t603 + t1176 + t1183 + t1184 + t2597 + t2600 + t2601 + t1653 + t2113 + t1655 + t2117 + t1659 + t2122;
  t2607 = -1.*t2369*t1862;
  t2608 = -1.*t2378*t1924;
  t2614 = -1.*t2388*t2096;
  t2618 = 0. + t606 + t608 + t614 + t1150 + t1153 + t1167 + t2607 + t2608 + t2614 + t1636 + t2128 + t1638 + t2131 + t1645 + t2135;
  t2242 = t2239*t1968;
  t2250 = t2249*t1991;
  t2271 = t2264*t2015;
  t2272 = t2242 + t2250 + t2271;
  t2699 = Cos(var1[11]);
  t2701 = -1.*t2699;
  t2702 = 1. + t2701;
  t2685 = Sin(var1[11]);
  t2690 = 0.366501*t2685;
  t2695 = 0. + t2690;
  t2538 = t2239*t1862;
  t2542 = t2249*t1924;
  t2543 = t2264*t2096;
  t2545 = t2538 + t2542 + t2543;
  t2709 = -0.134322983001*t2702;
  t2712 = 1. + t2709;
  t2775 = -0.366501*t2685;
  t2778 = 0. + t2775;
  t2766 = 0.930418*t2685;
  t2767 = 0. + t2766;
  t2560 = t2239*t1883;
  t2561 = t2249*t1944;
  t2568 = t2264*t2175;
  t2571 = t2560 + t2561 + t2568;
  t2723 = -0.930418*t2685;
  t2725 = 0. + t2723;
  t2807 = 0.06199697675299678*t2702;
  t2810 = 0.324290713329*t2778;
  t2811 = -0.823260828522*t2767;
  t2812 = 0. + t2807 + t2810 + t2811;
  t2818 = 2.95447451120871e-8*var1[11];
  t2821 = -0.8232613535360118*t2702;
  t2830 = 0.061996937216*t2725;
  t2832 = t2818 + t2821 + t2830;
  t2842 = 7.500378623168247e-8*var1[11];
  t2846 = 0.32429092013729516*t2702;
  t2848 = 0.061996937216*t2695;
  t2849 = t2842 + t2846 + t2848;
  t2728 = -0.8656776547239999*t2702;
  t2737 = 1. + t2728;
  t2815 = -1.*t2812*t2571;
  t2836 = -1.*t2832*t2408;
  t2850 = -1.*t2849*t2460;
  t2851 = 0. + t437 + t444 + t448 + t770 + t807 + t837 + t2815 + t2836 + t2850 + t2370 + t2379 + t2392 + t1405 + t1771 + t1410 + t1804 + t1413 + t1823;
  t2866 = t2812*t2545;
  t2868 = t2832*t2357;
  t2869 = t2849*t2449;
  t2871 = 0. + var1[1] + t396 + t420 + t891 + t893 + t895 + t2866 + t2868 + t2869 + t2410 + t2416 + t2419 + t1342 + t1891 + t1359 + t1892 + t1387 + t1893;
  t2753 = -1.000000637725*t2702;
  t2754 = 1. + t2753;
  t2790 = t2695*t2545;
  t2795 = 0.340999127418*t2702*t2357;
  t2804 = t2712*t2449;
  t2805 = t2790 + t2795 + t2804;
  t2890 = t2725*t2545;
  t2892 = t2737*t2357;
  t2894 = 0.340999127418*t2702*t2449;
  t2896 = t2890 + t2892 + t2894;
  t2920 = t2754*t2545;
  t2922 = t2767*t2357;
  t2929 = t2778*t2449;
  t2938 = t2920 + t2922 + t2929;
  t2696 = t2695*t2272;
  t2704 = 0.340999127418*t2702*t2302;
  t2713 = t2712*t2335;
  t2716 = t2696 + t2704 + t2713;
  t2861 = t2695*t2571;
  t2863 = 0.340999127418*t2702*t2408;
  t2864 = t2712*t2460;
  t2865 = t2861 + t2863 + t2864;
  t2727 = t2725*t2272;
  t2740 = t2737*t2302;
  t2748 = 0.340999127418*t2702*t2335;
  t2749 = t2727 + t2740 + t2748;
  t2982 = t2812*t2571;
  t2984 = t2832*t2408;
  t2991 = t2849*t2460;
  t2994 = 0. + var1[2] + t544 + t554 + t1056 + t1057 + t1060 + t2982 + t2984 + t2991 + t2487 + t2494 + t2496 + t1559 + t2028 + t1560 + t2030 + t1565 + t2033;
  t2899 = t2725*t2571;
  t2905 = t2737*t2408;
  t2906 = 0.340999127418*t2702*t2460;
  t2907 = t2899 + t2905 + t2906;
  t2997 = -1.*t2812*t2272;
  t2999 = -1.*t2832*t2302;
  t3000 = -1.*t2849*t2335;
  t3002 = 0. + t44 + t531 + t535 + t1085 + t1090 + t1095 + t2997 + t2999 + t3000 + t2505 + t2517 + t2521 + t1547 + t2041 + t1549 + t2042 + t1550 + t2053;
  t2763 = t2754*t2272;
  t2772 = t2767*t2302;
  t2779 = t2778*t2335;
  t2780 = t2763 + t2772 + t2779;
  t2943 = t2754*t2571;
  t2950 = t2767*t2408;
  t2954 = t2778*t2460;
  t2956 = t2943 + t2950 + t2954;
  t3043 = t2812*t2272;
  t3046 = t2832*t2302;
  t3056 = t2849*t2335;
  t3062 = 0. + var1[0] + t595 + t603 + t1176 + t1183 + t1184 + t3043 + t3046 + t3056 + t2597 + t2600 + t2601 + t1653 + t2113 + t1655 + t2117 + t1659 + t2122;
  t3064 = -1.*t2812*t2545;
  t3069 = -1.*t2832*t2357;
  t3071 = -1.*t2849*t2449;
  t3073 = 0. + t606 + t608 + t614 + t1150 + t1153 + t1167 + t3064 + t3069 + t3071 + t2607 + t2608 + t2614 + t1636 + t2128 + t1638 + t2131 + t1645 + t2135;
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
  p_output1[19]=t44;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t57*var1[2];
  p_output1[25]=-1.*t63*var1[2];
  p_output1[26]=t57*var1[0] + t63*var1[1];
  p_output1[27]=-1.*t63;
  p_output1[28]=t57;
  p_output1[29]=0;
  p_output1[30]=-1.*t107*var1[1] - 1.*t103*t63*var1[2];
  p_output1[31]=t107*var1[0] + t103*t57*var1[2];
  p_output1[32]=t103*t63*var1[0] - 1.*t103*t57*var1[1];
  p_output1[33]=t103*t57;
  p_output1[34]=t103*t63;
  p_output1[35]=-1.*t107;
  p_output1[36]=0.091*t191 + t107*var1[1] + t103*t63*var1[2];
  p_output1[37]=0.091*t218 - 1.*t107*var1[0] - 1.*t103*t57*var1[2];
  p_output1[38]=0.091*t103*t183 - 1.*t103*t63*var1[0] + t103*t57*var1[1];
  p_output1[39]=0. - 1.*t103*t57;
  p_output1[40]=0. - 1.*t103*t63;
  p_output1[41]=0. + t107;
  p_output1[42]=-0.041869*t318 - 0.016493*t345 + 0.366501*(t425*t430 + t452*t460) - 0.930418*(t425*t489 + t452*t502) - 0.084668*t103*t57;
  p_output1[43]=-0.041869*t460 - 0.016493*t502 + 0.366501*(t430*t538 + t318*t558) - 0.930418*(t489*t538 + t345*t558) - 0.084668*t103*t63;
  p_output1[44]=0.084668*t107 - 0.041869*t430 - 0.016493*t489 + 0.366501*(t460*t604 + t318*t616) - 0.930418*(t502*t604 + t345*t616);
  p_output1[45]=0. + 0.366501*t318 - 0.930418*t345;
  p_output1[46]=0. + 0.366501*t460 - 0.930418*t502;
  p_output1[47]=0. + 0.366501*t430 - 0.930418*t489;
  p_output1[48]=0.151852*t1001 - 0.041869*t1022 + 0.016493*t1036 + 0.366501*(t838*t889 + t901*t915) + 0.930418*(t838*t952 + t901*t972);
  p_output1[49]=0.151852*t1133 - 0.041869*t889 + 0.366501*(t1022*t1065 + t1096*t915) + 0.016493*t952 + 0.930418*(t1036*t1065 + t1096*t972);
  p_output1[50]=0.151852*t1247 + 0.366501*(t1022*t1168 + t1188*t889) - 0.041869*t915 + 0.930418*(t1036*t1168 + t1188*t952) + 0.016493*t972;
  p_output1[51]=0. + 0.366501*t1022 + 0.930418*t1036;
  p_output1[52]=0. + 0.366501*t889 + 0.930418*t952;
  p_output1[53]=0. + 0.366501*t915 + 0.930418*t972;
  p_output1[54]=-0.930418*(t1388*t1400 + t1414*t1429) - 0.366501*(t1388*t1451 + t1414*t1477) + 0.014606*t1500 - 0.236705*t1527 - 0.03708*t1539;
  p_output1[55]=0.014606*t1429 - 0.03708*t1477 - 0.930418*(t1400*t1551 + t1500*t1570) - 0.366501*(t1451*t1551 + t1539*t1570) - 0.236705*t1621;
  p_output1[56]=0.014606*t1400 - 0.03708*t1451 - 0.930418*(t1500*t1646 + t1429*t1660) - 0.366501*(t1539*t1646 + t1477*t1660) - 0.236705*t1703;
  p_output1[57]=0. - 0.930418*t1500 - 0.366501*t1539;
  p_output1[58]=0. - 0.930418*t1429 - 0.366501*t1477;
  p_output1[59]=0. - 0.930418*t1400 - 0.366501*t1451;
  p_output1[60]=-0.366501*(t1824*t1862 + t1883*t1894) - 0.930418*(t1824*t1924 + t1894*t1944) + 0.244523*t1968 - 0.09632*t1991 - 0.6347*t2015;
  p_output1[61]=0.244523*t1862 - 0.09632*t1924 - 0.366501*(t1968*t2034 + t1883*t2057) - 0.930418*(t1991*t2034 + t1944*t2057) - 0.6347*t2096;
  p_output1[62]=0.244523*t1883 - 0.09632*t1944 - 0.366501*(t1862*t2123 + t1968*t2137) - 0.930418*(t1924*t2123 + t1991*t2137) - 0.6347*t2175;
  p_output1[63]=0. - 0.366501*t1968 - 0.930418*t1991;
  p_output1[64]=0. - 0.366501*t1862 - 0.930418*t1924;
  p_output1[65]=0. - 0.366501*t1883 - 0.930418*t1944;
  p_output1[66]=-0.884829*t2272 - 0.057683*t2302 + 0.022722*t2335 - 0.366501*(t2357*t2396 + t2408*t2429) - 0.930418*(t2396*t2449 + t2429*t2460);
  p_output1[67]=-0.057683*t2357 + 0.022722*t2449 - 0.366501*(t2302*t2498 + t2408*t2523) - 0.930418*(t2335*t2498 + t2460*t2523) - 0.884829*t2545;
  p_output1[68]=-0.057683*t2408 + 0.022722*t2460 - 0.884829*t2571 - 0.366501*(t2357*t2602 + t2302*t2618) - 0.930418*(t2449*t2602 + t2335*t2618);
  p_output1[69]=0. - 0.366501*t2302 - 0.930418*t2335;
  p_output1[70]=0. - 0.366501*t2357 - 0.930418*t2449;
  p_output1[71]=0. - 0.366501*t2408 - 0.930418*t2460;
  p_output1[72]=-0.671277*t2716 - 0.337139*t2749 + 0.050068*t2780 - 0.218018*(t2805*t2851 + t2865*t2871) + 0.553471*(t2851*t2896 + t2871*t2907) + 0.803828*(t2851*t2938 + t2871*t2956);
  p_output1[73]=-0.671277*t2805 - 0.337139*t2896 + 0.050068*t2938 - 0.218018*(t2716*t2994 + t2865*t3002) + 0.553471*(t2749*t2994 + t2907*t3002) + 0.803828*(t2780*t2994 + t2956*t3002);
  p_output1[74]=-0.671277*t2865 - 0.337139*t2907 + 0.050068*t2956 - 0.218018*(t2805*t3062 + t2716*t3073) + 0.553471*(t2896*t3062 + t2749*t3073) + 0.803828*(t2938*t3062 + t2780*t3073);
  p_output1[75]=0. - 0.218018*t2716 + 0.553471*t2749 + 0.803828*t2780;
  p_output1[76]=0. - 0.218018*t2805 + 0.553471*t2896 + 0.803828*t2938;
  p_output1[77]=0. - 0.218018*t2865 + 0.553471*t2907 + 0.803828*t2956;
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
}



void Js_LeftToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:45:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_shin_to_tarsus_right_src.h"

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
  double t34;
  double t51;
  double t143;
  double t157;
  double t265;
  double t268;
  double t266;
  double t279;
  double t280;
  double t503;
  double t499;
  double t505;
  double t520;
  double t521;
  double t298;
  double t304;
  double t309;
  double t588;
  double t595;
  double t603;
  double t604;
  double t606;
  double t607;
  double t618;
  double t628;
  double t630;
  double t597;
  double t641;
  double t654;
  double t658;
  double t663;
  double t670;
  double t677;
  double t686;
  double t688;
  double t689;
  double t732;
  double t733;
  double t738;
  double t580;
  double t584;
  double t587;
  double t16;
  double t500;
  double t522;
  double t549;
  double t709;
  double t725;
  double t726;
  double t758;
  double t766;
  double t769;
  double t781;
  double t788;
  double t799;
  double t570;
  double t574;
  double t576;
  double t887;
  double t915;
  double t919;
  double t921;
  double t942;
  double t961;
  double t970;
  double t1161;
  double t1169;
  double t1177;
  double t1122;
  double t1272;
  double t1277;
  double t1282;
  double t1290;
  double t1214;
  double t1215;
  double t1133;
  double t1145;
  double t1194;
  double t1204;
  double t1322;
  double t1331;
  double t1333;
  double t1336;
  double t1349;
  double t1355;
  double t1356;
  double t1358;
  double t1363;
  double t1364;
  double t1365;
  double t1367;
  double t1348;
  double t1359;
  double t1369;
  double t1379;
  double t1217;
  double t1222;
  double t1434;
  double t1436;
  double t1444;
  double t1449;
  double t1380;
  double t1383;
  double t1384;
  double t1390;
  double t1463;
  double t1471;
  double t1474;
  double t1476;
  double t1251;
  double t1259;
  double t1148;
  double t1179;
  double t1207;
  double t1208;
  double t1403;
  double t1406;
  double t1413;
  double t1429;
  double t1617;
  double t1620;
  double t1625;
  double t1626;
  double t1216;
  double t1230;
  double t1237;
  double t1238;
  double t1495;
  double t1503;
  double t1507;
  double t1515;
  double t1650;
  double t1665;
  double t1671;
  double t1677;
  double t1773;
  double t1780;
  double t1781;
  double t1792;
  double t1795;
  double t1799;
  double t1806;
  double t1807;
  double t1888;
  double t1269;
  double t1281;
  double t1304;
  double t1310;
  double t1920;
  double t1929;
  double t1931;
  double t1954;
  double t1956;
  double t1974;
  double t1979;
  double t1742;
  double t1744;
  double t1748;
  double t1751;
  double t2025;
  double t2033;
  double t1900;
  double t1902;
  double t1890;
  double t1893;
  double t1539;
  double t1545;
  double t1584;
  double t1595;
  double t2075;
  double t2089;
  double t2093;
  double t2096;
  double t2108;
  double t2110;
  double t2118;
  double t2122;
  double t2132;
  double t2142;
  double t2143;
  double t2145;
  double t2002;
  double t2003;
  double t2106;
  double t2126;
  double t2148;
  double t2158;
  double t2166;
  double t2170;
  double t2189;
  double t2210;
  double t1943;
  double t1946;
  double t2223;
  double t2225;
  double t2228;
  double t2233;
  double t2301;
  double t2308;
  double t2311;
  double t2312;
  double t2060;
  double t2069;
  double t2070;
  double t2072;
  double t1958;
  double t1965;
  double t1980;
  double t1987;
  double t2285;
  double t2290;
  double t2296;
  double t2298;
  double t2350;
  double t2358;
  double t2366;
  double t2373;
  double t2380;
  double t2381;
  double t2382;
  double t2392;
  double t2000;
  double t2017;
  double t2034;
  double t2039;
  double t2446;
  double t2448;
  double t2449;
  double t2451;
  double t2464;
  double t2472;
  double t2477;
  double t2478;
  double t1896;
  double t1919;
  double t1947;
  double t1949;
  double t2593;
  double t2597;
  double t2599;
  double t2574;
  double t2703;
  double t2714;
  double t2723;
  double t2727;
  double t2424;
  double t2432;
  double t2435;
  double t2437;
  double t2619;
  double t2621;
  double t2575;
  double t2584;
  double t2321;
  double t2322;
  double t2323;
  double t2326;
  double t2607;
  double t2609;
  double t2738;
  double t2743;
  double t2745;
  double t2757;
  double t2765;
  double t2768;
  double t2772;
  double t2777;
  double t2786;
  double t2790;
  double t2792;
  double t2795;
  double t2759;
  double t2782;
  double t2799;
  double t2800;
  double t2629;
  double t2644;
  double t2838;
  double t2848;
  double t2851;
  double t2854;
  double t2805;
  double t2808;
  double t2814;
  double t2816;
  double t2876;
  double t2877;
  double t2884;
  double t2885;
  double t2696;
  double t2699;
  double t2588;
  double t2603;
  double t2611;
  double t2613;
  double t2823;
  double t2828;
  double t2831;
  double t2833;
  double t2946;
  double t2949;
  double t2956;
  double t2957;
  double t2624;
  double t2660;
  double t2670;
  double t2680;
  double t2890;
  double t2892;
  double t2896;
  double t2899;
  double t2970;
  double t2972;
  double t2976;
  double t2978;
  double t3042;
  double t3049;
  double t3050;
  double t3061;
  double t3067;
  double t3069;
  double t3070;
  double t3071;
  t34 = Cos(var1[3]);
  t51 = Sin(var1[3]);
  t143 = Cos(var1[4]);
  t157 = Sin(var1[4]);
  t265 = Cos(var1[5]);
  t268 = Sin(var1[5]);
  t266 = t34*t265*t157;
  t279 = t51*t268;
  t280 = t266 + t279;
  t503 = Cos(var1[17]);
  t499 = Sin(var1[17]);
  t505 = -1.*t265*t51;
  t520 = t34*t157*t268;
  t521 = t505 + t520;
  t298 = t265*t51*t157;
  t304 = -1.*t34*t268;
  t309 = t298 + t304;
  t588 = -0.091*t499;
  t595 = 0. + t588;
  t603 = -1.*t503;
  t604 = 1. + t603;
  t606 = -0.091*t604;
  t607 = 0. + t606;
  t618 = t34*t265;
  t628 = t51*t157*t268;
  t630 = t618 + t628;
  t597 = t595*t309;
  t641 = t607*t630;
  t654 = 0. + var1[1] + t597 + t641;
  t658 = -1.*var1[2];
  t663 = -1.*t143*t265*t595;
  t670 = -1.*t607*t143*t268;
  t677 = 0. + t658 + t663 + t670;
  t686 = -1.*t499*t309;
  t688 = t503*t630;
  t689 = t686 + t688;
  t732 = t503*t309;
  t733 = t499*t630;
  t738 = t732 + t733;
  t580 = -1.*t143*t265*t499;
  t584 = t503*t143*t268;
  t587 = t580 + t584;
  t16 = -1.*var1[0];
  t500 = -1.*t499*t280;
  t522 = t503*t521;
  t549 = t500 + t522;
  t709 = t503*t143*t265;
  t725 = t143*t499*t268;
  t726 = t709 + t725;
  t758 = -1.*t595*t280;
  t766 = -1.*t607*t521;
  t769 = 0. + t16 + t758 + t766;
  t781 = t143*t265*t595;
  t788 = t607*t143*t268;
  t799 = 0. + var1[2] + t781 + t788;
  t570 = t503*t280;
  t574 = t499*t521;
  t576 = t570 + t574;
  t887 = -1.*var1[1];
  t915 = -1.*t595*t309;
  t919 = -1.*t607*t630;
  t921 = 0. + t887 + t915 + t919;
  t942 = t595*t280;
  t961 = t607*t521;
  t970 = 0. + var1[0] + t942 + t961;
  t1161 = Cos(var1[18]);
  t1169 = -1.*t1161;
  t1177 = 1. + t1169;
  t1122 = Sin(var1[18]);
  t1272 = -0.930418*t1122;
  t1277 = 0. + t1272;
  t1282 = 0.366501*t1122;
  t1290 = 0. + t1282;
  t1214 = 0.930418*t1122;
  t1215 = 0. + t1214;
  t1133 = -0.366501*t1122;
  t1145 = 0. + t1133;
  t1194 = -0.134322983001*t1177;
  t1204 = 1. + t1194;
  t1322 = -0.04500040093286238*t1177;
  t1331 = -0.07877663122399998*t1277;
  t1333 = 0.031030906668*t1290;
  t1336 = 0. + t1322 + t1331 + t1333;
  t1349 = 1.296332362046933e-7*var1[18];
  t1355 = -0.07877668146182712*t1177;
  t1356 = -0.045000372235*t1215;
  t1358 = t1349 + t1355 + t1356;
  t1363 = 3.2909349868922137e-7*var1[18];
  t1364 = 0.03103092645718495*t1177;
  t1365 = -0.045000372235*t1145;
  t1367 = t1363 + t1364 + t1365;
  t1348 = t1336*t157;
  t1359 = -1.*t1358*t587;
  t1369 = -1.*t1367*t726;
  t1379 = 0. + t658 + t663 + t1348 + t670 + t1359 + t1369;
  t1217 = -0.8656776547239999*t1177;
  t1222 = 1. + t1217;
  t1434 = t143*t1336*t51;
  t1436 = t1358*t689;
  t1444 = t1367*t738;
  t1449 = 0. + var1[1] + t1434 + t597 + t641 + t1436 + t1444;
  t1380 = t143*t1145*t51;
  t1383 = 0.340999127418*t1177*t689;
  t1384 = t1204*t738;
  t1390 = t1380 + t1383 + t1384;
  t1463 = t143*t1215*t51;
  t1471 = t1222*t689;
  t1474 = 0.340999127418*t1177*t738;
  t1476 = t1463 + t1471 + t1474;
  t1251 = -1.000000637725*t1177;
  t1259 = 1. + t1251;
  t1148 = t34*t143*t1145;
  t1179 = 0.340999127418*t1177*t549;
  t1207 = t1204*t576;
  t1208 = t1148 + t1179 + t1207;
  t1403 = -1.*t1145*t157;
  t1406 = 0.340999127418*t1177*t587;
  t1413 = t1204*t726;
  t1429 = t1403 + t1406 + t1413;
  t1617 = -1.*t1336*t157;
  t1620 = t1358*t587;
  t1625 = t1367*t726;
  t1626 = 0. + var1[2] + t781 + t1617 + t788 + t1620 + t1625;
  t1216 = t34*t143*t1215;
  t1230 = t1222*t549;
  t1237 = 0.340999127418*t1177*t576;
  t1238 = t1216 + t1230 + t1237;
  t1495 = -1.*t1215*t157;
  t1503 = t1222*t587;
  t1507 = 0.340999127418*t1177*t726;
  t1515 = t1495 + t1503 + t1507;
  t1650 = -1.*t34*t143*t1336;
  t1665 = -1.*t1358*t549;
  t1671 = -1.*t1367*t576;
  t1677 = 0. + t16 + t1650 + t758 + t766 + t1665 + t1671;
  t1773 = t34*t143*t1336;
  t1780 = t1358*t549;
  t1781 = t1367*t576;
  t1792 = 0. + var1[0] + t1773 + t942 + t961 + t1780 + t1781;
  t1795 = -1.*t143*t1336*t51;
  t1799 = -1.*t1358*t689;
  t1806 = -1.*t1367*t738;
  t1807 = 0. + t887 + t1795 + t915 + t919 + t1799 + t1806;
  t1888 = Sin(var1[19]);
  t1269 = t1259*t34*t143;
  t1281 = t1277*t549;
  t1304 = t1290*t576;
  t1310 = t1269 + t1281 + t1304;
  t1920 = Cos(var1[19]);
  t1929 = -1.*t1920;
  t1931 = 1. + t1929;
  t1954 = -0.8656776547239999*t1931;
  t1956 = 1. + t1954;
  t1974 = -0.930418*t1888;
  t1979 = 0. + t1974;
  t1742 = -1.*t1259*t157;
  t1744 = t1277*t587;
  t1748 = t1290*t726;
  t1751 = t1742 + t1744 + t1748;
  t2025 = -0.366501*t1888;
  t2033 = 0. + t2025;
  t1900 = 0.366501*t1888;
  t1902 = 0. + t1900;
  t1890 = 0.930418*t1888;
  t1893 = 0. + t1890;
  t1539 = t1259*t143*t51;
  t1545 = t1277*t689;
  t1584 = t1290*t738;
  t1595 = t1539 + t1545 + t1584;
  t2075 = -1.296332362046933e-7*var1[19];
  t2089 = -0.14128592423750855*t1931;
  t2093 = -0.045000372235*t1979;
  t2096 = t2075 + t2089 + t2093;
  t2108 = 3.2909349868922137e-7*var1[19];
  t2110 = -0.055653945343889656*t1931;
  t2118 = -0.045000372235*t2033;
  t2122 = t2108 + t2110 + t2118;
  t2132 = -0.04500040093286238*t1931;
  t2142 = -0.055653909852*t1902;
  t2143 = -0.141285834136*t1893;
  t2145 = 0. + t2132 + t2142 + t2143;
  t2002 = -0.134322983001*t1931;
  t2003 = 1. + t2002;
  t2106 = t2096*t1390;
  t2126 = t2122*t1476;
  t2148 = t2145*t1595;
  t2158 = 0. + var1[1] + t1434 + t597 + t641 + t1436 + t1444 + t2106 + t2126 + t2148;
  t2166 = -1.*t2096*t1429;
  t2170 = -1.*t2122*t1515;
  t2189 = -1.*t2145*t1751;
  t2210 = 0. + t658 + t663 + t1348 + t670 + t1359 + t1369 + t2166 + t2170 + t2189;
  t1943 = -1.000000637725*t1931;
  t1946 = 1. + t1943;
  t2223 = t1956*t1390;
  t2225 = -0.340999127418*t1931*t1476;
  t2228 = t1979*t1595;
  t2233 = t2223 + t2225 + t2228;
  t2301 = -0.340999127418*t1931*t1390;
  t2308 = t2003*t1476;
  t2311 = t2033*t1595;
  t2312 = t2301 + t2308 + t2311;
  t2060 = t1956*t1429;
  t2069 = -0.340999127418*t1931*t1515;
  t2070 = t1979*t1751;
  t2072 = t2060 + t2069 + t2070;
  t1958 = t1956*t1208;
  t1965 = -0.340999127418*t1931*t1238;
  t1980 = t1979*t1310;
  t1987 = t1958 + t1965 + t1980;
  t2285 = -0.340999127418*t1931*t1429;
  t2290 = t2003*t1515;
  t2296 = t2033*t1751;
  t2298 = t2285 + t2290 + t2296;
  t2350 = -1.*t2096*t1208;
  t2358 = -1.*t2122*t1238;
  t2366 = -1.*t2145*t1310;
  t2373 = 0. + t16 + t1650 + t758 + t766 + t1665 + t1671 + t2350 + t2358 + t2366;
  t2380 = t2096*t1429;
  t2381 = t2122*t1515;
  t2382 = t2145*t1751;
  t2392 = 0. + var1[2] + t781 + t1617 + t788 + t1620 + t1625 + t2380 + t2381 + t2382;
  t2000 = -0.340999127418*t1931*t1208;
  t2017 = t2003*t1238;
  t2034 = t2033*t1310;
  t2039 = t2000 + t2017 + t2034;
  t2446 = -1.*t2096*t1390;
  t2448 = -1.*t2122*t1476;
  t2449 = -1.*t2145*t1595;
  t2451 = 0. + t887 + t1795 + t915 + t919 + t1799 + t1806 + t2446 + t2448 + t2449;
  t2464 = t2096*t1208;
  t2472 = t2122*t1238;
  t2477 = t2145*t1310;
  t2478 = 0. + var1[0] + t1773 + t942 + t961 + t1780 + t1781 + t2464 + t2472 + t2477;
  t1896 = t1893*t1208;
  t1919 = t1902*t1238;
  t1947 = t1946*t1310;
  t1949 = t1896 + t1919 + t1947;
  t2593 = Cos(var1[20]);
  t2597 = -1.*t2593;
  t2599 = 1. + t2597;
  t2574 = Sin(var1[20]);
  t2703 = -0.930418*t2574;
  t2714 = 0. + t2703;
  t2723 = -0.366501*t2574;
  t2727 = 0. + t2723;
  t2424 = t1893*t1429;
  t2432 = t1902*t1515;
  t2435 = t1946*t1751;
  t2437 = t2424 + t2432 + t2435;
  t2619 = 0.930418*t2574;
  t2621 = 0. + t2619;
  t2575 = 0.366501*t2574;
  t2584 = 0. + t2575;
  t2321 = t1893*t1390;
  t2322 = t1902*t1476;
  t2323 = t1946*t1595;
  t2326 = t2321 + t2322 + t2323;
  t2607 = -0.134322983001*t2599;
  t2609 = 1. + t2607;
  t2738 = 0.039853038461262744*t2599;
  t2743 = -0.22023459268999998*t2714;
  t2745 = -0.086752619205*t2727;
  t2757 = 0. + t2738 + t2743 + t2745;
  t2765 = 6.295460977284962e-8*var1[20];
  t2768 = -0.22023473313910558*t2599;
  t2772 = 0.039853013046*t2621;
  t2777 = t2765 + t2768 + t2772;
  t2786 = -1.5981976069815686e-7*var1[20];
  t2790 = -0.08675267452931407*t2599;
  t2792 = 0.039853013046*t2584;
  t2795 = t2786 + t2790 + t2792;
  t2759 = -1.*t2757*t2437;
  t2782 = -1.*t2777*t2072;
  t2799 = -1.*t2795*t2298;
  t2800 = 0. + t658 + t663 + t1348 + t670 + t1359 + t1369 + t2166 + t2170 + t2189 + t2759 + t2782 + t2799;
  t2629 = -0.8656776547239999*t2599;
  t2644 = 1. + t2629;
  t2838 = t2757*t2326;
  t2848 = t2777*t2233;
  t2851 = t2795*t2312;
  t2854 = 0. + var1[1] + t1434 + t597 + t641 + t1436 + t1444 + t2106 + t2126 + t2148 + t2838 + t2848 + t2851;
  t2805 = t2584*t2326;
  t2808 = -0.340999127418*t2599*t2233;
  t2814 = t2609*t2312;
  t2816 = t2805 + t2808 + t2814;
  t2876 = t2621*t2326;
  t2877 = t2644*t2233;
  t2884 = -0.340999127418*t2599*t2312;
  t2885 = t2876 + t2877 + t2884;
  t2696 = -1.000000637725*t2599;
  t2699 = 1. + t2696;
  t2588 = t2584*t1949;
  t2603 = -0.340999127418*t2599*t1987;
  t2611 = t2609*t2039;
  t2613 = t2588 + t2603 + t2611;
  t2823 = t2584*t2437;
  t2828 = -0.340999127418*t2599*t2072;
  t2831 = t2609*t2298;
  t2833 = t2823 + t2828 + t2831;
  t2946 = t2757*t2437;
  t2949 = t2777*t2072;
  t2956 = t2795*t2298;
  t2957 = 0. + var1[2] + t781 + t1617 + t788 + t1620 + t1625 + t2380 + t2381 + t2382 + t2946 + t2949 + t2956;
  t2624 = t2621*t1949;
  t2660 = t2644*t1987;
  t2670 = -0.340999127418*t2599*t2039;
  t2680 = t2624 + t2660 + t2670;
  t2890 = t2621*t2437;
  t2892 = t2644*t2072;
  t2896 = -0.340999127418*t2599*t2298;
  t2899 = t2890 + t2892 + t2896;
  t2970 = -1.*t2757*t1949;
  t2972 = -1.*t2777*t1987;
  t2976 = -1.*t2795*t2039;
  t2978 = 0. + t16 + t1650 + t758 + t766 + t1665 + t1671 + t2350 + t2358 + t2366 + t2970 + t2972 + t2976;
  t3042 = t2757*t1949;
  t3049 = t2777*t1987;
  t3050 = t2795*t2039;
  t3061 = 0. + var1[0] + t1773 + t942 + t961 + t1780 + t1781 + t2464 + t2472 + t2477 + t3042 + t3049 + t3050;
  t3067 = -1.*t2757*t2326;
  t3069 = -1.*t2777*t2233;
  t3070 = -1.*t2795*t2312;
  t3071 = 0. + t887 + t1795 + t915 + t919 + t1799 + t1806 + t2446 + t2448 + t2449 + t3067 + t3069 + t3070;
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
  p_output1[19]=t16;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t34*var1[2];
  p_output1[25]=-1.*t51*var1[2];
  p_output1[26]=t34*var1[0] + t51*var1[1];
  p_output1[27]=-1.*t51;
  p_output1[28]=t34;
  p_output1[29]=0;
  p_output1[30]=-1.*t157*var1[1] - 1.*t143*t51*var1[2];
  p_output1[31]=t157*var1[0] + t143*t34*var1[2];
  p_output1[32]=t143*t51*var1[0] - 1.*t143*t34*var1[1];
  p_output1[33]=t143*t34;
  p_output1[34]=t143*t51;
  p_output1[35]=-1.*t157;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
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
  p_output1[102]=-0.091*t280 + t157*var1[1] + t143*t51*var1[2];
  p_output1[103]=-0.091*t309 - 1.*t157*var1[0] - 1.*t143*t34*var1[2];
  p_output1[104]=-0.091*t143*t265 - 1.*t143*t51*var1[0] + t143*t34*var1[1];
  p_output1[105]=0. - 1.*t143*t34;
  p_output1[106]=0. - 1.*t143*t51;
  p_output1[107]=0. + t157;
  p_output1[108]=0.084668*t143*t34 - 0.041869*t549 + 0.016493*t576 - 0.366501*(t587*t654 + t677*t689) - 0.930418*(t654*t726 + t677*t738);
  p_output1[109]=0.084668*t143*t51 - 0.041869*t689 + 0.016493*t738 - 0.366501*(t587*t769 + t549*t799) - 0.930418*(t726*t769 + t576*t799);
  p_output1[110]=-0.084668*t157 - 0.041869*t587 + 0.016493*t726 - 0.366501*(t549*t921 + t689*t970) - 0.930418*(t576*t921 + t738*t970);
  p_output1[111]=0. - 0.366501*t549 - 0.930418*t576;
  p_output1[112]=0. - 0.366501*t689 - 0.930418*t738;
  p_output1[113]=0. - 0.366501*t587 - 0.930418*t726;
  p_output1[114]=0.041869*t1208 + 0.016493*t1238 - 0.151852*t1310 + 0.366501*(t1379*t1390 + t1429*t1449) - 0.930418*(t1379*t1476 + t1449*t1515);
  p_output1[115]=0.041869*t1390 + 0.016493*t1476 - 0.151852*t1595 + 0.366501*(t1208*t1626 + t1429*t1677) - 0.930418*(t1238*t1626 + t1515*t1677);
  p_output1[116]=0.041869*t1429 + 0.016493*t1515 - 0.151852*t1751 + 0.366501*(t1390*t1792 + t1208*t1807) - 0.930418*(t1476*t1792 + t1238*t1807);
  p_output1[117]=0. + 0.366501*t1208 - 0.930418*t1238;
  p_output1[118]=0. + 0.366501*t1390 - 0.930418*t1476;
  p_output1[119]=0. + 0.366501*t1429 - 0.930418*t1515;
  p_output1[120]=0.236705*t1949 + 0.03708*t1987 + 0.014606*t2039 - 0.366501*(t2072*t2158 + t2210*t2233) + 0.930418*(t2158*t2298 + t2210*t2312);
  p_output1[121]=0.03708*t2233 + 0.014606*t2312 + 0.236705*t2326 - 0.366501*(t2072*t2373 + t1987*t2392) + 0.930418*(t2298*t2373 + t2039*t2392);
  p_output1[122]=0.03708*t2072 + 0.014606*t2298 + 0.236705*t2437 - 0.366501*(t1987*t2451 + t2233*t2478) + 0.930418*(t2039*t2451 + t2312*t2478);
  p_output1[123]=0. - 0.366501*t1987 + 0.930418*t2039;
  p_output1[124]=0. - 0.366501*t2233 + 0.930418*t2312;
  p_output1[125]=0. - 0.366501*t2072 + 0.930418*t2298;
  p_output1[126]=-0.09632*t2613 - 0.244523*t2680 + 0.6347*(t1949*t2699 + t1987*t2714 + t2039*t2727) + 0.930418*(t2800*t2816 + t2833*t2854) - 0.366501*(t2800*t2885 + t2854*t2899);
  p_output1[127]=0.6347*(t2326*t2699 + t2233*t2714 + t2312*t2727) - 0.09632*t2816 - 0.244523*t2885 + 0.930418*(t2613*t2957 + t2833*t2978) - 0.366501*(t2680*t2957 + t2899*t2978);
  p_output1[128]=0.6347*(t2437*t2699 + t2072*t2714 + t2298*t2727) - 0.09632*t2833 - 0.244523*t2899 + 0.930418*(t2816*t3061 + t2613*t3071) - 0.366501*(t2885*t3061 + t2680*t3071);
  p_output1[129]=0. + 0.930418*t2613 - 0.366501*t2680;
  p_output1[130]=0. + 0.930418*t2816 - 0.366501*t2885;
  p_output1[131]=0. + 0.930418*t2833 - 0.366501*t2899;
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



void Js_shin_to_tarsus_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

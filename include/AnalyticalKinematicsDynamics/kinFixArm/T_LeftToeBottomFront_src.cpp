/*
 * Automatically Generated from Mathematica.
 * Sun 16 Oct 2022 21:52:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToeBottomFront_src.h"

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
  double t209;
  double t194;
  double t213;
  double t195;
  double t215;
  double t176;
  double t178;
  double t181;
  double t184;
  double t233;
  double t240;
  double t243;
  double t197;
  double t216;
  double t225;
  double t244;
  double t169;
  double t170;
  double t172;
  double t229;
  double t247;
  double t249;
  double t277;
  double t280;
  double t288;
  double t295;
  double t296;
  double t393;
  double t400;
  double t403;
  double t405;
  double t411;
  double t412;
  double t415;
  double t416;
  double t429;
  double t431;
  double t253;
  double t258;
  double t268;
  double t294;
  double t299;
  double t304;
  double t313;
  double t320;
  double t440;
  double t333;
  double t337;
  double t339;
  double t343;
  double t349;
  double t351;
  double t385;
  double t386;
  double t129;
  double t153;
  double t154;
  double t123;
  double t325;
  double t329;
  double t330;
  double t391;
  double t448;
  double t454;
  double t473;
  double t485;
  double t525;
  double t544;
  double t545;
  double t546;
  double t552;
  double t553;
  double t566;
  double t571;
  double t617;
  double t619;
  double t621;
  double t633;
  double t652;
  double t659;
  double t663;
  double t675;
  double t676;
  double t678;
  double t680;
  double t753;
  double t755;
  double t768;
  double t523;
  double t532;
  double t543;
  double t622;
  double t627;
  double t630;
  double t684;
  double t696;
  double t707;
  double t711;
  double t712;
  double t715;
  double t734;
  double t735;
  double t737;
  double t742;
  double t794;
  double t800;
  double t804;
  double t814;
  double t816;
  double t819;
  double t820;
  double t838;
  double t856;
  double t858;
  double t888;
  double t890;
  double t892;
  double t31;
  double t35;
  double t36;
  double t51;
  double t127;
  double t128;
  double t698;
  double t701;
  double t704;
  double t751;
  double t770;
  double t775;
  double t862;
  double t864;
  double t895;
  double t896;
  double t899;
  double t900;
  double t901;
  double t902;
  double t903;
  double t905;
  double t956;
  double t957;
  double t979;
  double t982;
  double t984;
  double t988;
  double t992;
  double t993;
  double t1007;
  double t1006;
  double t56;
  double t121;
  double t887;
  double t909;
  double t935;
  double t941;
  double t998;
  double t1003;
  double t1038;
  double t1046;
  double t1049;
  double t1055;
  double t1061;
  double t1063;
  double t1077;
  double t1078;
  double t1092;
  double t1096;
  double t1097;
  double t1098;
  double t1119;
  double t1123;
  double t1130;
  double t1134;
  double t1135;
  double t1138;
  double t42;
  double t46;
  double t1249;
  double t1250;
  double t1251;
  double t1222;
  double t1224;
  double t1232;
  double t1234;
  double t1261;
  double t1263;
  double t1273;
  double t1276;
  double t1284;
  double t1344;
  double t1361;
  double t1363;
  double t1364;
  double t1270;
  double t1291;
  double t1298;
  double t1309;
  double t1320;
  double t1323;
  double t1324;
  double t1334;
  double t1318;
  double t1339;
  double t1369;
  double t1375;
  double t1387;
  double t1388;
  double t1389;
  double t1393;
  double t1442;
  double t1446;
  double t1448;
  double t1454;
  double t1381;
  double t1434;
  double t1460;
  double t1463;
  double t1465;
  double t1481;
  double t1487;
  double t1490;
  double t1496;
  double t1498;
  double t1499;
  double t1507;
  double t1015;
  double t1026;
  double t1464;
  double t1494;
  double t1510;
  double t1514;
  double t1525;
  double t1526;
  double t1533;
  double t1534;
  double t1538;
  double t1542;
  double t1543;
  double t1552;
  double t1088;
  double t1089;
  double t1091;
  double t1152;
  double t1155;
  double t1519;
  double t1536;
  double t1553;
  double t1559;
  double t1186;
  double t1191;
  double t1563;
  double t1567;
  double t1570;
  double t1574;
  double t1194;
  double t1195;
  double t1204;
  double t1584;
  double t1586;
  double t1587;
  double t1599;
  double t1661;
  double t1662;
  double t1668;
  double t1672;
  double t1677;
  double t1678;
  double t1702;
  double t1706;
  double t1714;
  double t1729;
  double t1670;
  double t1679;
  double t1680;
  double t1682;
  double t1689;
  double t1692;
  double t1696;
  double t1697;
  double t1685;
  double t1700;
  double t1743;
  double t1755;
  double t1762;
  double t1767;
  double t1768;
  double t1773;
  double t1775;
  double t1776;
  double t1777;
  double t1778;
  double t1757;
  double t1774;
  double t1781;
  double t1782;
  double t1785;
  double t1791;
  double t1792;
  double t1796;
  double t1807;
  double t1809;
  double t1831;
  double t1833;
  double t1784;
  double t1798;
  double t1834;
  double t1837;
  double t1859;
  double t1863;
  double t1870;
  double t1876;
  double t1891;
  double t1892;
  double t1898;
  double t1900;
  double t1853;
  double t1879;
  double t1901;
  double t1902;
  double t1928;
  double t1930;
  double t1933;
  double t1934;
  double t1948;
  double t1949;
  double t1951;
  double t1960;
  double t1005;
  double t1086;
  double t1140;
  double t1142;
  double t1164;
  double t1193;
  double t1206;
  double t1207;
  double t1988;
  double t1989;
  double t2003;
  double t2011;
  double t2014;
  double t2025;
  double t1560;
  double t1575;
  double t1604;
  double t1614;
  double t1616;
  double t1619;
  double t1626;
  double t1627;
  double t1926;
  double t1946;
  double t1962;
  double t1964;
  double t1969;
  double t1974;
  double t1975;
  double t1976;
  double t2001;
  double t2013;
  double t2027;
  double t2028;
  double t2036;
  double t2038;
  double t2039;
  double t2046;
  double t2067;
  double t2072;
  double t2073;
  double t2084;
  double t2184;
  double t2242;
  double t2176;
  double t2108;
  double t2109;
  double t2110;
  double t2111;
  double t2115;
  double t2116;
  double t2118;
  double t2120;
  double t2121;
  double t2122;
  double t2125;
  double t2126;
  double t2130;
  double t2137;
  double t2139;
  double t2144;
  double t2147;
  double t2154;
  double t2169;
  double t2174;
  double t2180;
  double t2182;
  double t2187;
  double t2188;
  double t2193;
  double t2205;
  double t2206;
  double t2235;
  double t2239;
  double t2243;
  double t2244;
  double t2247;
  double t2278;
  double t2279;
  double t2280;
  double t2287;
  double t2289;
  double t2290;
  double t2292;
  double t2300;
  double t2303;
  double t2304;
  double t2307;
  double t2311;
  double t2312;
  double t2314;
  double t2316;
  double t2318;
  double t2322;
  double t2328;
  double t2329;
  double t2334;
  double t2337;
  double t2338;
  double t2341;
  double t2344;
  double t2346;
  double t2355;
  double t2356;
  double t2364;
  double t2365;
  double t2367;
  double t2371;
  double t2376;
  double t2380;
  double t2382;
  double t2383;
  double t2385;
  double t2386;
  double t2395;
  double t2399;
  double t2404;
  double t2406;
  double t2409;
  double t2410;
  double t2416;
  double t2417;
  double t2418;
  double t2419;
  double t2430;
  double t2431;
  double t2436;
  double t2438;
  double t2443;
  double t2446;
  double t2451;
  double t2452;
  t209 = Cos(var1[3]);
  t194 = Cos(var1[5]);
  t213 = Sin(var1[4]);
  t195 = Sin(var1[3]);
  t215 = Sin(var1[5]);
  t176 = Cos(var1[7]);
  t178 = -1.*t176;
  t181 = 1. + t178;
  t184 = Cos(var1[6]);
  t233 = t209*t194*t213;
  t240 = t195*t215;
  t243 = t233 + t240;
  t197 = -1.*t194*t195;
  t216 = t209*t213*t215;
  t225 = t197 + t216;
  t244 = Sin(var1[6]);
  t169 = Cos(var1[8]);
  t170 = -1.*t169;
  t172 = 1. + t170;
  t229 = t184*t225;
  t247 = -1.*t243*t244;
  t249 = t229 + t247;
  t277 = t184*t243;
  t280 = t225*t244;
  t288 = t277 + t280;
  t295 = Cos(var1[4]);
  t296 = Sin(var1[7]);
  t393 = -1.000000637725*t181;
  t400 = 1. + t393;
  t403 = t209*t295*t400;
  t405 = -0.930418*t296;
  t411 = 0. + t405;
  t412 = t249*t411;
  t415 = -0.366501*t296;
  t416 = 0. + t415;
  t429 = t288*t416;
  t431 = t403 + t412 + t429;
  t253 = -0.340999127418*t181*t249;
  t258 = -0.134322983001*t181;
  t268 = 1. + t258;
  t294 = t268*t288;
  t299 = 0.366501*t296;
  t304 = 0. + t299;
  t313 = t209*t295*t304;
  t320 = t253 + t294 + t313;
  t440 = Sin(var1[8]);
  t333 = -0.8656776547239999*t181;
  t337 = 1. + t333;
  t339 = t337*t249;
  t343 = -0.340999127418*t181*t288;
  t349 = 0.930418*t296;
  t351 = 0. + t349;
  t385 = t209*t295*t351;
  t386 = t339 + t343 + t385;
  t129 = Cos(var1[9]);
  t153 = -1.*t129;
  t154 = 1. + t153;
  t123 = Sin(var1[10]);
  t325 = 0.340999127418*t172*t320;
  t329 = -0.134322983001*t172;
  t330 = 1. + t329;
  t391 = t330*t386;
  t448 = -0.366501*t440;
  t454 = 0. + t448;
  t473 = t431*t454;
  t485 = t325 + t391 + t473;
  t525 = Sin(var1[9]);
  t544 = -1.000000637725*t172;
  t545 = 1. + t544;
  t546 = t545*t431;
  t552 = -0.930418*t440;
  t553 = 0. + t552;
  t566 = t320*t553;
  t571 = 0.366501*t440;
  t617 = 0. + t571;
  t619 = t386*t617;
  t621 = t546 + t566 + t619;
  t633 = -0.8656776547239999*t172;
  t652 = 1. + t633;
  t659 = t652*t320;
  t663 = 0.340999127418*t172*t386;
  t675 = 0.930418*t440;
  t676 = 0. + t675;
  t678 = t431*t676;
  t680 = t659 + t663 + t678;
  t753 = Cos(var1[10]);
  t755 = -1.*t753;
  t768 = 1. + t755;
  t523 = 0.340999127418*t154*t485;
  t532 = -0.930418*t525;
  t543 = 0. + t532;
  t622 = t543*t621;
  t627 = -0.8656776547239999*t154;
  t630 = 1. + t627;
  t684 = t630*t680;
  t696 = t523 + t622 + t684;
  t707 = -0.134322983001*t154;
  t711 = 1. + t707;
  t712 = t711*t485;
  t715 = 0.366501*t525;
  t734 = 0. + t715;
  t735 = t734*t621;
  t737 = 0.340999127418*t154*t680;
  t742 = t712 + t735 + t737;
  t794 = -0.366501*t525;
  t800 = 0. + t794;
  t804 = t800*t485;
  t814 = -1.000000637725*t154;
  t816 = 1. + t814;
  t819 = t816*t621;
  t820 = 0.930418*t525;
  t838 = 0. + t820;
  t856 = t838*t680;
  t858 = t804 + t819 + t856;
  t888 = Cos(var1[11]);
  t890 = -1.*t888;
  t892 = 1. + t890;
  t31 = Cos(var1[12]);
  t35 = -1.*t31;
  t36 = 1. + t35;
  t51 = Sin(var1[11]);
  t127 = 0.930418*t123;
  t128 = 0. + t127;
  t698 = t128*t696;
  t701 = -0.366501*t123;
  t704 = 0. + t701;
  t751 = t704*t742;
  t770 = -1.000000637725*t768;
  t775 = 1. + t770;
  t862 = t775*t858;
  t864 = t698 + t751 + t862;
  t895 = -0.8656776547239999*t768;
  t896 = 1. + t895;
  t899 = t896*t696;
  t900 = 0.340999127418*t768*t742;
  t901 = -0.930418*t123;
  t902 = 0. + t901;
  t903 = t902*t858;
  t905 = t899 + t900 + t903;
  t956 = 0.340999127418*t768*t696;
  t957 = -0.134322983001*t768;
  t979 = 1. + t957;
  t982 = t979*t742;
  t984 = 0.366501*t123;
  t988 = 0. + t984;
  t992 = t988*t858;
  t993 = t956 + t982 + t992;
  t1007 = Sin(var1[12]);
  t1006 = -0.120666640478*t36;
  t56 = 0.366501*t51;
  t121 = 0. + t56;
  t887 = t121*t864;
  t909 = 0.340999127418*t892*t905;
  t935 = -0.134322983001*t892;
  t941 = 1. + t935;
  t998 = t941*t993;
  t1003 = t887 + t909 + t998;
  t1038 = -0.930418*t51;
  t1046 = 0. + t1038;
  t1049 = t1046*t864;
  t1055 = -0.8656776547239999*t892;
  t1061 = 1. + t1055;
  t1063 = t1061*t905;
  t1077 = 0.340999127418*t892*t993;
  t1078 = t1049 + t1063 + t1077;
  t1092 = -1.000000637725*t892;
  t1096 = 1. + t1092;
  t1097 = t1096*t864;
  t1098 = 0.930418*t51;
  t1119 = 0. + t1098;
  t1123 = t1119*t905;
  t1130 = -0.366501*t51;
  t1134 = 0. + t1130;
  t1135 = t1134*t993;
  t1138 = t1097 + t1123 + t1135;
  t42 = -0.952469601425*t36;
  t46 = 1. + t42;
  t1249 = t194*t195*t213;
  t1250 = -1.*t209*t215;
  t1251 = t1249 + t1250;
  t1222 = t209*t194;
  t1224 = t195*t213*t215;
  t1232 = t1222 + t1224;
  t1234 = t184*t1232;
  t1261 = -1.*t1251*t244;
  t1263 = t1234 + t1261;
  t1273 = t184*t1251;
  t1276 = t1232*t244;
  t1284 = t1273 + t1276;
  t1344 = t295*t400*t195;
  t1361 = t1263*t411;
  t1363 = t1284*t416;
  t1364 = t1344 + t1361 + t1363;
  t1270 = -0.340999127418*t181*t1263;
  t1291 = t268*t1284;
  t1298 = t295*t195*t304;
  t1309 = t1270 + t1291 + t1298;
  t1320 = t337*t1263;
  t1323 = -0.340999127418*t181*t1284;
  t1324 = t295*t195*t351;
  t1334 = t1320 + t1323 + t1324;
  t1318 = 0.340999127418*t172*t1309;
  t1339 = t330*t1334;
  t1369 = t1364*t454;
  t1375 = t1318 + t1339 + t1369;
  t1387 = t545*t1364;
  t1388 = t1309*t553;
  t1389 = t1334*t617;
  t1393 = t1387 + t1388 + t1389;
  t1442 = t652*t1309;
  t1446 = 0.340999127418*t172*t1334;
  t1448 = t1364*t676;
  t1454 = t1442 + t1446 + t1448;
  t1381 = 0.340999127418*t154*t1375;
  t1434 = t543*t1393;
  t1460 = t630*t1454;
  t1463 = t1381 + t1434 + t1460;
  t1465 = t711*t1375;
  t1481 = t734*t1393;
  t1487 = 0.340999127418*t154*t1454;
  t1490 = t1465 + t1481 + t1487;
  t1496 = t800*t1375;
  t1498 = t816*t1393;
  t1499 = t838*t1454;
  t1507 = t1496 + t1498 + t1499;
  t1015 = 0.803828*t1007;
  t1026 = t1006 + t1015;
  t1464 = t128*t1463;
  t1494 = t704*t1490;
  t1510 = t775*t1507;
  t1514 = t1464 + t1494 + t1510;
  t1525 = t896*t1463;
  t1526 = 0.340999127418*t768*t1490;
  t1533 = t902*t1507;
  t1534 = t1525 + t1526 + t1533;
  t1538 = 0.340999127418*t768*t1463;
  t1542 = t979*t1490;
  t1543 = t988*t1507;
  t1552 = t1538 + t1542 + t1543;
  t1088 = -0.175248972904*t36;
  t1089 = -0.553471*t1007;
  t1091 = t1088 + t1089;
  t1152 = -0.803828*t1007;
  t1155 = t1006 + t1152;
  t1519 = t121*t1514;
  t1536 = 0.340999127418*t892*t1534;
  t1553 = t941*t1552;
  t1559 = t1519 + t1536 + t1553;
  t1186 = -0.693671301908*t36;
  t1191 = 1. + t1186;
  t1563 = t1046*t1514;
  t1567 = t1061*t1534;
  t1570 = 0.340999127418*t892*t1552;
  t1574 = t1563 + t1567 + t1570;
  t1194 = 0.444895486988*t36;
  t1195 = -0.218018*t1007;
  t1204 = t1194 + t1195;
  t1584 = t1096*t1514;
  t1586 = t1119*t1534;
  t1587 = t1134*t1552;
  t1599 = t1584 + t1586 + t1587;
  t1661 = t295*t184*t215;
  t1662 = -1.*t295*t194*t244;
  t1668 = t1661 + t1662;
  t1672 = t295*t194*t184;
  t1677 = t295*t215*t244;
  t1678 = t1672 + t1677;
  t1702 = -1.*t400*t213;
  t1706 = t1668*t411;
  t1714 = t1678*t416;
  t1729 = t1702 + t1706 + t1714;
  t1670 = -0.340999127418*t181*t1668;
  t1679 = t268*t1678;
  t1680 = -1.*t213*t304;
  t1682 = t1670 + t1679 + t1680;
  t1689 = t337*t1668;
  t1692 = -0.340999127418*t181*t1678;
  t1696 = -1.*t213*t351;
  t1697 = t1689 + t1692 + t1696;
  t1685 = 0.340999127418*t172*t1682;
  t1700 = t330*t1697;
  t1743 = t1729*t454;
  t1755 = t1685 + t1700 + t1743;
  t1762 = t545*t1729;
  t1767 = t1682*t553;
  t1768 = t1697*t617;
  t1773 = t1762 + t1767 + t1768;
  t1775 = t652*t1682;
  t1776 = 0.340999127418*t172*t1697;
  t1777 = t1729*t676;
  t1778 = t1775 + t1776 + t1777;
  t1757 = 0.340999127418*t154*t1755;
  t1774 = t543*t1773;
  t1781 = t630*t1778;
  t1782 = t1757 + t1774 + t1781;
  t1785 = t711*t1755;
  t1791 = t734*t1773;
  t1792 = 0.340999127418*t154*t1778;
  t1796 = t1785 + t1791 + t1792;
  t1807 = t800*t1755;
  t1809 = t816*t1773;
  t1831 = t838*t1778;
  t1833 = t1807 + t1809 + t1831;
  t1784 = t128*t1782;
  t1798 = t704*t1796;
  t1834 = t775*t1833;
  t1837 = t1784 + t1798 + t1834;
  t1859 = t896*t1782;
  t1863 = 0.340999127418*t768*t1796;
  t1870 = t902*t1833;
  t1876 = t1859 + t1863 + t1870;
  t1891 = 0.340999127418*t768*t1782;
  t1892 = t979*t1796;
  t1898 = t988*t1833;
  t1900 = t1891 + t1892 + t1898;
  t1853 = t121*t1837;
  t1879 = 0.340999127418*t892*t1876;
  t1901 = t941*t1900;
  t1902 = t1853 + t1879 + t1901;
  t1928 = t1046*t1837;
  t1930 = t1061*t1876;
  t1933 = 0.340999127418*t892*t1900;
  t1934 = t1928 + t1930 + t1933;
  t1948 = t1096*t1837;
  t1949 = t1119*t1876;
  t1951 = t1134*t1900;
  t1960 = t1948 + t1949 + t1951;
  t1005 = t46*t1003;
  t1086 = t1026*t1078;
  t1140 = t1091*t1138;
  t1142 = t1005 + t1086 + t1140;
  t1164 = t1155*t1003;
  t1193 = t1191*t1078;
  t1206 = t1204*t1138;
  t1207 = t1164 + t1193 + t1206;
  t1988 = 0.553471*t1007;
  t1989 = t1088 + t1988;
  t2003 = 0.218018*t1007;
  t2011 = t1194 + t2003;
  t2014 = -0.353861996165*t36;
  t2025 = 1. + t2014;
  t1560 = t46*t1559;
  t1575 = t1026*t1574;
  t1604 = t1091*t1599;
  t1614 = t1560 + t1575 + t1604;
  t1616 = t1155*t1559;
  t1619 = t1191*t1574;
  t1626 = t1204*t1599;
  t1627 = t1616 + t1619 + t1626;
  t1926 = t46*t1902;
  t1946 = t1026*t1934;
  t1962 = t1091*t1960;
  t1964 = t1926 + t1946 + t1962;
  t1969 = t1155*t1902;
  t1974 = t1191*t1934;
  t1975 = t1204*t1960;
  t1976 = t1969 + t1974 + t1975;
  t2001 = t1989*t1003;
  t2013 = t2011*t1078;
  t2027 = t2025*t1138;
  t2028 = t2001 + t2013 + t2027;
  t2036 = t1989*t1559;
  t2038 = t2011*t1574;
  t2039 = t2025*t1599;
  t2046 = t2036 + t2038 + t2039;
  t2067 = t1989*t1902;
  t2072 = t2011*t1934;
  t2073 = t2025*t1960;
  t2084 = t2067 + t2072 + t2073;
  t2184 = 0.120666640478*t36;
  t2242 = -0.444895486988*t36;
  t2176 = 0.175248972904*t36;
  t2108 = -1.*t184;
  t2109 = 1. + t2108;
  t2110 = 0.091*t2109;
  t2111 = 0. + t2110;
  t2115 = 0.091*t244;
  t2116 = 0. + t2115;
  t2118 = -0.04500040093286238*t181;
  t2120 = 0.07877663122399998*t411;
  t2121 = 0.031030906668*t416;
  t2122 = 0. + t2118 + t2120 + t2121;
  t2125 = -3.2909349868922137e-7*var1[7];
  t2126 = 0.03103092645718495*t181;
  t2130 = -0.045000372235*t304;
  t2137 = t2125 + t2126 + t2130;
  t2139 = 1.296332362046933e-7*var1[7];
  t2144 = 0.07877668146182712*t181;
  t2147 = -0.045000372235*t351;
  t2154 = t2139 + t2144 + t2147;
  t2169 = 2.838136523330542e-8*var1[12];
  t2174 = 0.2845150083511607*t36;
  t2180 = t2176 + t1089;
  t2182 = 0.44503472296900004*t2180;
  t2187 = t2184 + t1015;
  t2188 = -0.5286755231320001*t2187;
  t2193 = t2169 + t2174 + t2182 + t2188;
  t2205 = -7.20503013377005e-8*var1[12];
  t2206 = -0.3667270384178674*t36;
  t2235 = t2184 + t1152;
  t2239 = 0.29871295412*t2235;
  t2243 = t2242 + t1195;
  t2244 = 0.44503472296900004*t2243;
  t2247 = t2205 + t2206 + t2239 + t2244;
  t2278 = -1.0464152525368286e-7*var1[12];
  t2279 = 0.15748087543254813*t36;
  t2280 = t2242 + t2003;
  t2287 = -0.5286755231320001*t2280;
  t2289 = t2176 + t1988;
  t2290 = 0.29871295412*t2289;
  t2292 = t2278 + t2279 + t2287 + t2290;
  t2300 = 0.06199697675299678*t892;
  t2303 = 0.324290713329*t1134;
  t2304 = -0.823260828522*t1119;
  t2307 = 0. + t2300 + t2303 + t2304;
  t2311 = 2.95447451120871e-8*var1[11];
  t2312 = -0.8232613535360118*t892;
  t2314 = 0.061996937216*t1046;
  t2316 = t2311 + t2312 + t2314;
  t2318 = 7.500378623168247e-8*var1[11];
  t2322 = 0.32429092013729516*t892;
  t2328 = 0.061996937216*t121;
  t2329 = t2318 + t2322 + t2328;
  t2334 = 2.281945176511838e-8*var1[10];
  t2337 = -0.5905366811997648*t768;
  t2338 = -0.262809976934*t902;
  t2341 = t2334 + t2337 + t2338;
  t2344 = 5.7930615939377813e-8*var1[10];
  t2346 = 0.23261833304643187*t768;
  t2355 = -0.262809976934*t988;
  t2356 = t2344 + t2346 + t2355;
  t2364 = -0.26281014453449253*t768;
  t2365 = 0.23261818470000004*t704;
  t2367 = -0.5905363046000001*t128;
  t2371 = 0. + t2364 + t2365 + t2367;
  t2376 = 3.2909349868922137e-7*var1[8];
  t2380 = 0.055653945343889656*t172;
  t2382 = -0.045000372235*t454;
  t2383 = t2376 + t2380 + t2382;
  t2385 = -1.5981976069815686e-7*var1[9];
  t2386 = 0.08675267452931407*t154;
  t2395 = 0.039853013046*t734;
  t2399 = t2385 + t2386 + t2395;
  t2404 = -0.04500040093286238*t172;
  t2406 = -0.141285834136*t553;
  t2409 = 0.055653909852*t617;
  t2410 = 0. + t2404 + t2406 + t2409;
  t2416 = 0.039853038461262744*t154;
  t2417 = 0.086752619205*t800;
  t2418 = -0.22023459268999998*t838;
  t2419 = 0. + t2416 + t2417 + t2418;
  t2430 = 1.296332362046933e-7*var1[8];
  t2431 = -0.14128592423750855*t172;
  t2436 = -0.045000372235*t676;
  t2438 = t2430 + t2431 + t2436;
  t2443 = -6.295460977284962e-8*var1[9];
  t2446 = -0.22023473313910558*t154;
  t2451 = 0.039853013046*t543;
  t2452 = t2443 + t2446 + t2451;
  p_output1[0]=0.930418*t1142 + 0.366501*t1207;
  p_output1[1]=0.930418*t1614 + 0.366501*t1627;
  p_output1[2]=0.930418*t1964 + 0.366501*t1976;
  p_output1[3]=0.;
  p_output1[4]=-0.294604*t1142 + 0.747896*t1207 - 0.594863*t2028;
  p_output1[5]=-0.294604*t1614 + 0.747896*t1627 - 0.594863*t2046;
  p_output1[6]=-0.294604*t1964 + 0.747896*t1976 - 0.594863*t2084;
  p_output1[7]=0.;
  p_output1[8]=-0.218018*t1142 + 0.553471*t1207 + 0.803828*t2028;
  p_output1[9]=-0.218018*t1614 + 0.553471*t1627 + 0.803828*t2046;
  p_output1[10]=-0.218018*t1964 + 0.553471*t1976 + 0.803828*t2084;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.481688*t1142 - 0.76126*t1207 + 0.061997*t2028 + t1003*t2193 + t1078*t2247 + t2111*t225 + t1138*t2292 + t2116*t243 + t2154*t249 + t2137*t288 + t209*t2122*t295 + t2438*t320 + t2383*t386 + t2410*t431 + t2399*t485 + t2419*t621 + t2452*t680 + t2341*t696 + t2356*t742 + t2371*t858 + t2307*t864 + t2316*t905 + t2329*t993 + var1[0];
  p_output1[13]=0. + 0.481688*t1614 - 0.76126*t1627 + 0.061997*t2046 + t1232*t2111 + t1251*t2116 + t1284*t2137 + t1263*t2154 + t1559*t2193 + t1574*t2247 + t1599*t2292 + t1514*t2307 + t1534*t2316 + t1552*t2329 + t1463*t2341 + t1490*t2356 + t1507*t2371 + t1334*t2383 + t1375*t2399 + t1364*t2410 + t1393*t2419 + t1309*t2438 + t1454*t2452 + t195*t2122*t295 + var1[1];
  p_output1[14]=0. + 0.481688*t1964 - 0.76126*t1976 + 0.061997*t2084 - 1.*t2122*t213 + t1678*t2137 + t1668*t2154 + t1902*t2193 + t1934*t2247 + t1960*t2292 + t1837*t2307 + t1876*t2316 + t1900*t2329 + t1782*t2341 + t1796*t2356 + t1833*t2371 + t1697*t2383 + t1755*t2399 + t1729*t2410 + t1773*t2419 + t1682*t2438 + t1778*t2452 + t194*t2116*t295 + t2111*t215*t295 + var1[2];
  p_output1[15]=1.;
}



void T_LeftToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

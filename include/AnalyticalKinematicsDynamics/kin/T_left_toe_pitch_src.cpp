/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:59:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_toe_pitch_src.h"

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
  double t249;
  double t215;
  double t257;
  double t222;
  double t259;
  double t195;
  double t198;
  double t211;
  double t213;
  double t281;
  double t290;
  double t291;
  double t243;
  double t262;
  double t274;
  double t295;
  double t174;
  double t176;
  double t177;
  double t276;
  double t301;
  double t309;
  double t324;
  double t340;
  double t345;
  double t354;
  double t359;
  double t465;
  double t470;
  double t485;
  double t491;
  double t492;
  double t493;
  double t499;
  double t512;
  double t524;
  double t531;
  double t310;
  double t314;
  double t315;
  double t349;
  double t365;
  double t367;
  double t368;
  double t371;
  double t534;
  double t392;
  double t393;
  double t404;
  double t416;
  double t419;
  double t433;
  double t445;
  double t447;
  double t111;
  double t169;
  double t172;
  double t38;
  double t373;
  double t376;
  double t380;
  double t451;
  double t540;
  double t544;
  double t555;
  double t557;
  double t560;
  double t593;
  double t596;
  double t601;
  double t626;
  double t632;
  double t633;
  double t635;
  double t643;
  double t644;
  double t645;
  double t693;
  double t695;
  double t696;
  double t697;
  double t699;
  double t720;
  double t745;
  double t753;
  double t901;
  double t904;
  double t907;
  double t559;
  double t567;
  double t584;
  double t648;
  double t680;
  double t688;
  double t756;
  double t762;
  double t783;
  double t788;
  double t806;
  double t815;
  double t855;
  double t874;
  double t877;
  double t878;
  double t933;
  double t944;
  double t949;
  double t951;
  double t960;
  double t964;
  double t965;
  double t969;
  double t971;
  double t1000;
  double t1016;
  double t1023;
  double t1029;
  double t13;
  double t71;
  double t72;
  double t776;
  double t779;
  double t780;
  double t897;
  double t910;
  double t921;
  double t1005;
  double t1006;
  double t1042;
  double t1044;
  double t1051;
  double t1055;
  double t1060;
  double t1061;
  double t1064;
  double t1069;
  double t1126;
  double t1129;
  double t1141;
  double t1146;
  double t1149;
  double t1162;
  double t1173;
  double t1176;
  double t17;
  double t34;
  double t1347;
  double t1354;
  double t1358;
  double t1328;
  double t1330;
  double t1331;
  double t1344;
  double t1368;
  double t1369;
  double t1387;
  double t1388;
  double t1396;
  double t1450;
  double t1461;
  double t1464;
  double t1490;
  double t1375;
  double t1400;
  double t1401;
  double t1409;
  double t1418;
  double t1419;
  double t1434;
  double t1443;
  double t1410;
  double t1448;
  double t1491;
  double t1501;
  double t1513;
  double t1515;
  double t1523;
  double t1524;
  double t1527;
  double t1530;
  double t1541;
  double t1576;
  double t1505;
  double t1526;
  double t1577;
  double t1581;
  double t1596;
  double t1599;
  double t1602;
  double t1605;
  double t1618;
  double t1625;
  double t1630;
  double t1638;
  double t1108;
  double t1109;
  double t1203;
  double t1204;
  double t1594;
  double t1609;
  double t1643;
  double t1644;
  double t1213;
  double t1217;
  double t1656;
  double t1663;
  double t1665;
  double t1674;
  double t1697;
  double t1699;
  double t1701;
  double t1707;
  double t1250;
  double t1262;
  double t1267;
  double t1277;
  double t1294;
  double t1307;
  double t1772;
  double t1774;
  double t1791;
  double t1799;
  double t1800;
  double t1801;
  double t1862;
  double t1865;
  double t1871;
  double t1878;
  double t1798;
  double t1803;
  double t1809;
  double t1811;
  double t1826;
  double t1829;
  double t1846;
  double t1853;
  double t1818;
  double t1857;
  double t1880;
  double t1881;
  double t1892;
  double t1901;
  double t1903;
  double t1904;
  double t1916;
  double t1924;
  double t1925;
  double t1937;
  double t1889;
  double t1912;
  double t1939;
  double t1940;
  double t1945;
  double t1946;
  double t1955;
  double t1963;
  double t1980;
  double t1991;
  double t1992;
  double t1993;
  double t1942;
  double t1966;
  double t1994;
  double t2000;
  double t2003;
  double t2006;
  double t2025;
  double t2036;
  double t2040;
  double t2042;
  double t2054;
  double t2055;
  double t1011;
  double t1076;
  double t1179;
  double t1185;
  double t1212;
  double t1219;
  double t1228;
  double t1232;
  double t1263;
  double t1282;
  double t1309;
  double t1313;
  double t1646;
  double t1678;
  double t1713;
  double t1719;
  double t1725;
  double t1729;
  double t1737;
  double t1743;
  double t1747;
  double t1751;
  double t1760;
  double t1763;
  double t2001;
  double t2037;
  double t2056;
  double t2058;
  double t2069;
  double t2072;
  double t2074;
  double t2081;
  double t2089;
  double t2091;
  double t2092;
  double t2096;
  double t2180;
  double t2192;
  double t2202;
  double t2206;
  double t2208;
  double t2211;
  double t2217;
  double t2219;
  double t2221;
  double t2222;
  double t2227;
  double t2232;
  double t2234;
  double t2235;
  double t2243;
  double t2245;
  double t2246;
  double t2247;
  double t2265;
  double t2269;
  double t2271;
  double t2273;
  double t2279;
  double t2280;
  double t2285;
  double t2290;
  double t2294;
  double t2295;
  double t2297;
  double t2298;
  double t2304;
  double t2305;
  double t2306;
  double t2308;
  double t2317;
  double t2322;
  double t2323;
  double t2327;
  double t2333;
  double t2335;
  double t2336;
  double t2337;
  double t2346;
  double t2355;
  double t2356;
  double t2363;
  double t2370;
  double t2372;
  double t2374;
  double t2381;
  double t2389;
  double t2391;
  double t2394;
  double t2398;
  double t2403;
  double t2405;
  double t2406;
  double t2412;
  double t2415;
  double t2422;
  double t2424;
  double t2427;
  double t2429;
  double t2430;
  double t2431;
  double t2432;
  t249 = Cos(var1[3]);
  t215 = Cos(var1[5]);
  t257 = Sin(var1[4]);
  t222 = Sin(var1[3]);
  t259 = Sin(var1[5]);
  t195 = Cos(var1[7]);
  t198 = -1.*t195;
  t211 = 1. + t198;
  t213 = Cos(var1[6]);
  t281 = t249*t215*t257;
  t290 = t222*t259;
  t291 = t281 + t290;
  t243 = -1.*t215*t222;
  t262 = t249*t257*t259;
  t274 = t243 + t262;
  t295 = Sin(var1[6]);
  t174 = Cos(var1[8]);
  t176 = -1.*t174;
  t177 = 1. + t176;
  t276 = t213*t274;
  t301 = -1.*t291*t295;
  t309 = t276 + t301;
  t324 = t213*t291;
  t340 = t274*t295;
  t345 = t324 + t340;
  t354 = Cos(var1[4]);
  t359 = Sin(var1[7]);
  t465 = -1.000000637725*t211;
  t470 = 1. + t465;
  t485 = t249*t354*t470;
  t491 = -0.930418*t359;
  t492 = 0. + t491;
  t493 = t309*t492;
  t499 = -0.366501*t359;
  t512 = 0. + t499;
  t524 = t345*t512;
  t531 = t485 + t493 + t524;
  t310 = -0.340999127418*t211*t309;
  t314 = -0.134322983001*t211;
  t315 = 1. + t314;
  t349 = t315*t345;
  t365 = 0.366501*t359;
  t367 = 0. + t365;
  t368 = t249*t354*t367;
  t371 = t310 + t349 + t368;
  t534 = Sin(var1[8]);
  t392 = -0.8656776547239999*t211;
  t393 = 1. + t392;
  t404 = t393*t309;
  t416 = -0.340999127418*t211*t345;
  t419 = 0.930418*t359;
  t433 = 0. + t419;
  t445 = t249*t354*t433;
  t447 = t404 + t416 + t445;
  t111 = Cos(var1[9]);
  t169 = -1.*t111;
  t172 = 1. + t169;
  t38 = Sin(var1[10]);
  t373 = 0.340999127418*t177*t371;
  t376 = -0.134322983001*t177;
  t380 = 1. + t376;
  t451 = t380*t447;
  t540 = -0.366501*t534;
  t544 = 0. + t540;
  t555 = t531*t544;
  t557 = t373 + t451 + t555;
  t560 = Sin(var1[9]);
  t593 = -1.000000637725*t177;
  t596 = 1. + t593;
  t601 = t596*t531;
  t626 = -0.930418*t534;
  t632 = 0. + t626;
  t633 = t371*t632;
  t635 = 0.366501*t534;
  t643 = 0. + t635;
  t644 = t447*t643;
  t645 = t601 + t633 + t644;
  t693 = -0.8656776547239999*t177;
  t695 = 1. + t693;
  t696 = t695*t371;
  t697 = 0.340999127418*t177*t447;
  t699 = 0.930418*t534;
  t720 = 0. + t699;
  t745 = t531*t720;
  t753 = t696 + t697 + t745;
  t901 = Cos(var1[10]);
  t904 = -1.*t901;
  t907 = 1. + t904;
  t559 = 0.340999127418*t172*t557;
  t567 = -0.930418*t560;
  t584 = 0. + t567;
  t648 = t584*t645;
  t680 = -0.8656776547239999*t172;
  t688 = 1. + t680;
  t756 = t688*t753;
  t762 = t559 + t648 + t756;
  t783 = -0.134322983001*t172;
  t788 = 1. + t783;
  t806 = t788*t557;
  t815 = 0.366501*t560;
  t855 = 0. + t815;
  t874 = t855*t645;
  t877 = 0.340999127418*t172*t753;
  t878 = t806 + t874 + t877;
  t933 = -0.366501*t560;
  t944 = 0. + t933;
  t949 = t944*t557;
  t951 = -1.000000637725*t172;
  t960 = 1. + t951;
  t964 = t960*t645;
  t965 = 0.930418*t560;
  t969 = 0. + t965;
  t971 = t969*t753;
  t1000 = t949 + t964 + t971;
  t1016 = Cos(var1[11]);
  t1023 = -1.*t1016;
  t1029 = 1. + t1023;
  t13 = Sin(var1[11]);
  t71 = 0.930418*t38;
  t72 = 0. + t71;
  t776 = t72*t762;
  t779 = -0.366501*t38;
  t780 = 0. + t779;
  t897 = t780*t878;
  t910 = -1.000000637725*t907;
  t921 = 1. + t910;
  t1005 = t921*t1000;
  t1006 = t776 + t897 + t1005;
  t1042 = -0.8656776547239999*t907;
  t1044 = 1. + t1042;
  t1051 = t1044*t762;
  t1055 = 0.340999127418*t907*t878;
  t1060 = -0.930418*t38;
  t1061 = 0. + t1060;
  t1064 = t1061*t1000;
  t1069 = t1051 + t1055 + t1064;
  t1126 = 0.340999127418*t907*t762;
  t1129 = -0.134322983001*t907;
  t1141 = 1. + t1129;
  t1146 = t1141*t878;
  t1149 = 0.366501*t38;
  t1162 = 0. + t1149;
  t1173 = t1162*t1000;
  t1176 = t1126 + t1146 + t1173;
  t17 = 0.366501*t13;
  t34 = 0. + t17;
  t1347 = t215*t222*t257;
  t1354 = -1.*t249*t259;
  t1358 = t1347 + t1354;
  t1328 = t249*t215;
  t1330 = t222*t257*t259;
  t1331 = t1328 + t1330;
  t1344 = t213*t1331;
  t1368 = -1.*t1358*t295;
  t1369 = t1344 + t1368;
  t1387 = t213*t1358;
  t1388 = t1331*t295;
  t1396 = t1387 + t1388;
  t1450 = t354*t470*t222;
  t1461 = t1369*t492;
  t1464 = t1396*t512;
  t1490 = t1450 + t1461 + t1464;
  t1375 = -0.340999127418*t211*t1369;
  t1400 = t315*t1396;
  t1401 = t354*t222*t367;
  t1409 = t1375 + t1400 + t1401;
  t1418 = t393*t1369;
  t1419 = -0.340999127418*t211*t1396;
  t1434 = t354*t222*t433;
  t1443 = t1418 + t1419 + t1434;
  t1410 = 0.340999127418*t177*t1409;
  t1448 = t380*t1443;
  t1491 = t1490*t544;
  t1501 = t1410 + t1448 + t1491;
  t1513 = t596*t1490;
  t1515 = t1409*t632;
  t1523 = t1443*t643;
  t1524 = t1513 + t1515 + t1523;
  t1527 = t695*t1409;
  t1530 = 0.340999127418*t177*t1443;
  t1541 = t1490*t720;
  t1576 = t1527 + t1530 + t1541;
  t1505 = 0.340999127418*t172*t1501;
  t1526 = t584*t1524;
  t1577 = t688*t1576;
  t1581 = t1505 + t1526 + t1577;
  t1596 = t788*t1501;
  t1599 = t855*t1524;
  t1602 = 0.340999127418*t172*t1576;
  t1605 = t1596 + t1599 + t1602;
  t1618 = t944*t1501;
  t1625 = t960*t1524;
  t1630 = t969*t1576;
  t1638 = t1618 + t1625 + t1630;
  t1108 = -0.134322983001*t1029;
  t1109 = 1. + t1108;
  t1203 = -0.930418*t13;
  t1204 = 0. + t1203;
  t1594 = t72*t1581;
  t1609 = t780*t1605;
  t1643 = t921*t1638;
  t1644 = t1594 + t1609 + t1643;
  t1213 = -0.8656776547239999*t1029;
  t1217 = 1. + t1213;
  t1656 = t1044*t1581;
  t1663 = 0.340999127418*t907*t1605;
  t1665 = t1061*t1638;
  t1674 = t1656 + t1663 + t1665;
  t1697 = 0.340999127418*t907*t1581;
  t1699 = t1141*t1605;
  t1701 = t1162*t1638;
  t1707 = t1697 + t1699 + t1701;
  t1250 = -1.000000637725*t1029;
  t1262 = 1. + t1250;
  t1267 = 0.930418*t13;
  t1277 = 0. + t1267;
  t1294 = -0.366501*t13;
  t1307 = 0. + t1294;
  t1772 = t354*t213*t259;
  t1774 = -1.*t354*t215*t295;
  t1791 = t1772 + t1774;
  t1799 = t354*t215*t213;
  t1800 = t354*t259*t295;
  t1801 = t1799 + t1800;
  t1862 = -1.*t470*t257;
  t1865 = t1791*t492;
  t1871 = t1801*t512;
  t1878 = t1862 + t1865 + t1871;
  t1798 = -0.340999127418*t211*t1791;
  t1803 = t315*t1801;
  t1809 = -1.*t257*t367;
  t1811 = t1798 + t1803 + t1809;
  t1826 = t393*t1791;
  t1829 = -0.340999127418*t211*t1801;
  t1846 = -1.*t257*t433;
  t1853 = t1826 + t1829 + t1846;
  t1818 = 0.340999127418*t177*t1811;
  t1857 = t380*t1853;
  t1880 = t1878*t544;
  t1881 = t1818 + t1857 + t1880;
  t1892 = t596*t1878;
  t1901 = t1811*t632;
  t1903 = t1853*t643;
  t1904 = t1892 + t1901 + t1903;
  t1916 = t695*t1811;
  t1924 = 0.340999127418*t177*t1853;
  t1925 = t1878*t720;
  t1937 = t1916 + t1924 + t1925;
  t1889 = 0.340999127418*t172*t1881;
  t1912 = t584*t1904;
  t1939 = t688*t1937;
  t1940 = t1889 + t1912 + t1939;
  t1945 = t788*t1881;
  t1946 = t855*t1904;
  t1955 = 0.340999127418*t172*t1937;
  t1963 = t1945 + t1946 + t1955;
  t1980 = t944*t1881;
  t1991 = t960*t1904;
  t1992 = t969*t1937;
  t1993 = t1980 + t1991 + t1992;
  t1942 = t72*t1940;
  t1966 = t780*t1963;
  t1994 = t921*t1993;
  t2000 = t1942 + t1966 + t1994;
  t2003 = t1044*t1940;
  t2006 = 0.340999127418*t907*t1963;
  t2025 = t1061*t1993;
  t2036 = t2003 + t2006 + t2025;
  t2040 = 0.340999127418*t907*t1940;
  t2042 = t1141*t1963;
  t2054 = t1162*t1993;
  t2055 = t2040 + t2042 + t2054;
  t1011 = t34*t1006;
  t1076 = 0.340999127418*t1029*t1069;
  t1179 = t1109*t1176;
  t1185 = t1011 + t1076 + t1179;
  t1212 = t1204*t1006;
  t1219 = t1217*t1069;
  t1228 = 0.340999127418*t1029*t1176;
  t1232 = t1212 + t1219 + t1228;
  t1263 = t1262*t1006;
  t1282 = t1277*t1069;
  t1309 = t1307*t1176;
  t1313 = t1263 + t1282 + t1309;
  t1646 = t34*t1644;
  t1678 = 0.340999127418*t1029*t1674;
  t1713 = t1109*t1707;
  t1719 = t1646 + t1678 + t1713;
  t1725 = t1204*t1644;
  t1729 = t1217*t1674;
  t1737 = 0.340999127418*t1029*t1707;
  t1743 = t1725 + t1729 + t1737;
  t1747 = t1262*t1644;
  t1751 = t1277*t1674;
  t1760 = t1307*t1707;
  t1763 = t1747 + t1751 + t1760;
  t2001 = t34*t2000;
  t2037 = 0.340999127418*t1029*t2036;
  t2056 = t1109*t2055;
  t2058 = t2001 + t2037 + t2056;
  t2069 = t1204*t2000;
  t2072 = t1217*t2036;
  t2074 = 0.340999127418*t1029*t2055;
  t2081 = t2069 + t2072 + t2074;
  t2089 = t1262*t2000;
  t2091 = t1277*t2036;
  t2092 = t1307*t2055;
  t2096 = t2089 + t2091 + t2092;
  t2180 = -1.*t213;
  t2192 = 1. + t2180;
  t2202 = 0.091*t2192;
  t2206 = 0. + t2202;
  t2208 = 0.091*t295;
  t2211 = 0. + t2208;
  t2217 = -0.04500040093286238*t211;
  t2219 = 0.07877663122399998*t492;
  t2221 = 0.031030906668*t512;
  t2222 = 0. + t2217 + t2219 + t2221;
  t2227 = -3.2909349868922137e-7*var1[7];
  t2232 = 0.03103092645718495*t211;
  t2234 = -0.045000372235*t367;
  t2235 = t2227 + t2232 + t2234;
  t2243 = 1.296332362046933e-7*var1[7];
  t2245 = 0.07877668146182712*t211;
  t2246 = -0.045000372235*t433;
  t2247 = t2243 + t2245 + t2246;
  t2265 = 0.06199697675299678*t1029;
  t2269 = 0.324290713329*t1307;
  t2271 = -0.823260828522*t1277;
  t2273 = 0. + t2265 + t2269 + t2271;
  t2279 = 2.95447451120871e-8*var1[11];
  t2280 = -0.8232613535360118*t1029;
  t2285 = 0.061996937216*t1204;
  t2290 = t2279 + t2280 + t2285;
  t2294 = 7.500378623168247e-8*var1[11];
  t2295 = 0.32429092013729516*t1029;
  t2297 = 0.061996937216*t34;
  t2298 = t2294 + t2295 + t2297;
  t2304 = 2.281945176511838e-8*var1[10];
  t2305 = -0.5905366811997648*t907;
  t2306 = -0.262809976934*t1061;
  t2308 = t2304 + t2305 + t2306;
  t2317 = 5.7930615939377813e-8*var1[10];
  t2322 = 0.23261833304643187*t907;
  t2323 = -0.262809976934*t1162;
  t2327 = t2317 + t2322 + t2323;
  t2333 = -0.26281014453449253*t907;
  t2335 = 0.23261818470000004*t780;
  t2336 = -0.5905363046000001*t72;
  t2337 = 0. + t2333 + t2335 + t2336;
  t2346 = 3.2909349868922137e-7*var1[8];
  t2355 = 0.055653945343889656*t177;
  t2356 = -0.045000372235*t544;
  t2363 = t2346 + t2355 + t2356;
  t2370 = -1.5981976069815686e-7*var1[9];
  t2372 = 0.08675267452931407*t172;
  t2374 = 0.039853013046*t855;
  t2381 = t2370 + t2372 + t2374;
  t2389 = -0.04500040093286238*t177;
  t2391 = -0.141285834136*t632;
  t2394 = 0.055653909852*t643;
  t2398 = 0. + t2389 + t2391 + t2394;
  t2403 = 0.039853038461262744*t172;
  t2405 = 0.086752619205*t944;
  t2406 = -0.22023459268999998*t969;
  t2412 = 0. + t2403 + t2405 + t2406;
  t2415 = 1.296332362046933e-7*var1[8];
  t2422 = -0.14128592423750855*t177;
  t2424 = -0.045000372235*t720;
  t2427 = t2415 + t2422 + t2424;
  t2429 = -6.295460977284962e-8*var1[9];
  t2430 = -0.22023473313910558*t172;
  t2431 = 0.039853013046*t584;
  t2432 = t2429 + t2430 + t2431;
  p_output1[0]=-0.218018*t1185 + 0.553471*t1232 + 0.803828*t1313;
  p_output1[1]=-0.218018*t1719 + 0.553471*t1743 + 0.803828*t1763;
  p_output1[2]=-0.218018*t2058 + 0.553471*t2081 + 0.803828*t2096;
  p_output1[3]=0.;
  p_output1[4]=-0.294604*t1185 + 0.747896*t1232 - 0.594863*t1313;
  p_output1[5]=-0.294604*t1719 + 0.747896*t1743 - 0.594863*t1763;
  p_output1[6]=-0.294604*t2058 + 0.747896*t2081 - 0.594863*t2096;
  p_output1[7]=0.;
  p_output1[8]=-0.930418*t1185 - 0.366501*t1232;
  p_output1[9]=-0.930418*t1719 - 0.366501*t1743;
  p_output1[10]=-0.930418*t2058 - 0.366501*t2081;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.402633*t1185 - 0.79249*t1232 + 0.061884*t1313 + t1006*t2273 + t1069*t2290 + t1176*t2298 + t1000*t2337 + t2206*t274 + t2211*t291 + t2247*t309 + t2235*t345 + t2222*t249*t354 + t2427*t371 + t2363*t447 + t2398*t531 + t2381*t557 + t2412*t645 + t2432*t753 + t2308*t762 + t2327*t878 + var1[0];
  p_output1[13]=0. + 0.402633*t1719 - 0.79249*t1743 + 0.061884*t1763 + t1331*t2206 + t1358*t2211 + t1396*t2235 + t1369*t2247 + t1644*t2273 + t1674*t2290 + t1707*t2298 + t1581*t2308 + t1605*t2327 + t1638*t2337 + t1443*t2363 + t1501*t2381 + t1490*t2398 + t1524*t2412 + t1409*t2427 + t1576*t2432 + t222*t2222*t354 + var1[1];
  p_output1[14]=0. + 0.402633*t2058 - 0.79249*t2081 + 0.061884*t2096 + t1801*t2235 + t1791*t2247 + t2000*t2273 + t2036*t2290 + t2055*t2298 + t1940*t2308 + t1963*t2327 + t1993*t2337 + t1853*t2363 + t1881*t2381 + t1878*t2398 + t1904*t2412 + t1811*t2427 + t1937*t2432 - 1.*t2222*t257 + t215*t2211*t354 + t2206*t259*t354 + var1[2];
  p_output1[15]=1.;
}



void T_left_toe_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
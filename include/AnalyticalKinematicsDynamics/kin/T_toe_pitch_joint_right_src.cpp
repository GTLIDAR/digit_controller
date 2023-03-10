/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:47:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_toe_pitch_joint_right_src.h"

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
  double t81;
  double t173;
  double t209;
  double t197;
  double t219;
  double t164;
  double t166;
  double t170;
  double t252;
  double t199;
  double t239;
  double t242;
  double t172;
  double t253;
  double t255;
  double t259;
  double t49;
  double t84;
  double t97;
  double t244;
  double t266;
  double t269;
  double t299;
  double t300;
  double t307;
  double t388;
  double t402;
  double t409;
  double t127;
  double t131;
  double t162;
  double t271;
  double t277;
  double t294;
  double t308;
  double t312;
  double t331;
  double t337;
  double t350;
  double t369;
  double t377;
  double t382;
  double t385;
  double t386;
  double t434;
  double t447;
  double t454;
  double t456;
  double t465;
  double t479;
  double t500;
  double t505;
  double t506;
  double t514;
  double t533;
  double t534;
  double t558;
  double t18;
  double t22;
  double t52;
  double t53;
  double t314;
  double t316;
  double t317;
  double t387;
  double t410;
  double t412;
  double t515;
  double t521;
  double t559;
  double t566;
  double t567;
  double t568;
  double t569;
  double t574;
  double t578;
  double t587;
  double t650;
  double t653;
  double t660;
  double t665;
  double t666;
  double t687;
  double t690;
  double t710;
  double t789;
  double t821;
  double t837;
  double t25;
  double t37;
  double t527;
  double t596;
  double t597;
  double t639;
  double t731;
  double t733;
  double t742;
  double t744;
  double t749;
  double t754;
  double t760;
  double t764;
  double t780;
  double t781;
  double t850;
  double t854;
  double t873;
  double t875;
  double t879;
  double t883;
  double t885;
  double t887;
  double t919;
  double t927;
  double t943;
  double t984;
  double t986;
  double t5;
  double t19;
  double t20;
  double t734;
  double t735;
  double t738;
  double t783;
  double t838;
  double t839;
  double t929;
  double t933;
  double t988;
  double t994;
  double t995;
  double t1002;
  double t1010;
  double t1011;
  double t1028;
  double t1030;
  double t1036;
  double t1039;
  double t1045;
  double t1046;
  double t1050;
  double t1056;
  double t1059;
  double t1068;
  double t9;
  double t17;
  double t1223;
  double t1236;
  double t1239;
  double t1248;
  double t1249;
  double t1251;
  double t1246;
  double t1256;
  double t1276;
  double t1290;
  double t1292;
  double t1295;
  double t1213;
  double t1286;
  double t1302;
  double t1304;
  double t1310;
  double t1314;
  double t1325;
  double t1327;
  double t1346;
  double t1361;
  double t1362;
  double t1368;
  double t1305;
  double t1343;
  double t1372;
  double t1376;
  double t1383;
  double t1384;
  double t1399;
  double t1405;
  double t1415;
  double t1423;
  double t1432;
  double t1436;
  double t1379;
  double t1413;
  double t1438;
  double t1447;
  double t1457;
  double t1459;
  double t1461;
  double t1462;
  double t1471;
  double t1479;
  double t1488;
  double t1492;
  double t1032;
  double t1034;
  double t1092;
  double t1101;
  double t1456;
  double t1470;
  double t1493;
  double t1508;
  double t1105;
  double t1117;
  double t1523;
  double t1525;
  double t1529;
  double t1547;
  double t1551;
  double t1554;
  double t1555;
  double t1556;
  double t1153;
  double t1155;
  double t1163;
  double t1170;
  double t1184;
  double t1188;
  double t1601;
  double t1603;
  double t1604;
  double t1617;
  double t1629;
  double t1637;
  double t1595;
  double t1612;
  double t1646;
  double t1669;
  double t1676;
  double t1682;
  double t1685;
  double t1703;
  double t1711;
  double t1713;
  double t1714;
  double t1718;
  double t1672;
  double t1710;
  double t1722;
  double t1724;
  double t1731;
  double t1733;
  double t1735;
  double t1741;
  double t1754;
  double t1759;
  double t1766;
  double t1767;
  double t1726;
  double t1743;
  double t1768;
  double t1772;
  double t1777;
  double t1780;
  double t1786;
  double t1787;
  double t1801;
  double t1806;
  double t1811;
  double t1824;
  double t1776;
  double t1793;
  double t1830;
  double t1831;
  double t1841;
  double t1843;
  double t1846;
  double t1847;
  double t1859;
  double t1863;
  double t1864;
  double t1871;
  double t941;
  double t1031;
  double t1073;
  double t1086;
  double t1104;
  double t1127;
  double t1137;
  double t1147;
  double t1162;
  double t1173;
  double t1195;
  double t1200;
  double t1521;
  double t1549;
  double t1557;
  double t1562;
  double t1567;
  double t1569;
  double t1574;
  double t1577;
  double t1585;
  double t1588;
  double t1589;
  double t1592;
  double t1834;
  double t1849;
  double t1873;
  double t1885;
  double t1913;
  double t1926;
  double t1929;
  double t1939;
  double t1961;
  double t1966;
  double t1975;
  double t1977;
  double t2065;
  double t2070;
  double t2071;
  double t2072;
  double t2078;
  double t2086;
  double t2090;
  double t2096;
  double t2097;
  double t2098;
  double t2107;
  double t2109;
  double t2123;
  double t2124;
  double t2127;
  double t2129;
  double t2135;
  double t2137;
  double t2153;
  double t2159;
  double t2161;
  double t2165;
  double t2186;
  double t2192;
  double t2193;
  double t2197;
  double t2201;
  double t2202;
  double t2205;
  double t2211;
  double t2222;
  double t2223;
  double t2225;
  double t2228;
  double t2236;
  double t2240;
  double t2244;
  double t2246;
  double t2257;
  double t2269;
  double t2271;
  double t2273;
  double t2282;
  double t2286;
  double t2288;
  double t2289;
  double t2295;
  double t2300;
  double t2301;
  double t2304;
  double t2310;
  double t2311;
  double t2312;
  double t2313;
  double t2317;
  double t2318;
  double t2321;
  double t2322;
  double t2325;
  double t2332;
  double t2338;
  double t2340;
  double t2357;
  double t2365;
  double t2366;
  double t2367;
  t81 = Cos(var1[3]);
  t173 = Cos(var1[5]);
  t209 = Sin(var1[3]);
  t197 = Sin(var1[4]);
  t219 = Sin(var1[5]);
  t164 = Cos(var1[18]);
  t166 = -1.*t164;
  t170 = 1. + t166;
  t252 = Cos(var1[17]);
  t199 = t81*t173*t197;
  t239 = t209*t219;
  t242 = t199 + t239;
  t172 = Sin(var1[17]);
  t253 = -1.*t173*t209;
  t255 = t81*t197*t219;
  t259 = t253 + t255;
  t49 = Sin(var1[19]);
  t84 = Cos(var1[4]);
  t97 = Sin(var1[18]);
  t244 = -1.*t172*t242;
  t266 = t252*t259;
  t269 = t244 + t266;
  t299 = t252*t242;
  t300 = t172*t259;
  t307 = t299 + t300;
  t388 = Cos(var1[19]);
  t402 = -1.*t388;
  t409 = 1. + t402;
  t127 = -0.366501*t97;
  t131 = 0. + t127;
  t162 = t81*t84*t131;
  t271 = 0.340999127418*t170*t269;
  t277 = -0.134322983001*t170;
  t294 = 1. + t277;
  t308 = t294*t307;
  t312 = t162 + t271 + t308;
  t331 = 0.930418*t97;
  t337 = 0. + t331;
  t350 = t81*t84*t337;
  t369 = -0.8656776547239999*t170;
  t377 = 1. + t369;
  t382 = t377*t269;
  t385 = 0.340999127418*t170*t307;
  t386 = t350 + t382 + t385;
  t434 = -1.000000637725*t170;
  t447 = 1. + t434;
  t454 = t447*t81*t84;
  t456 = -0.930418*t97;
  t465 = 0. + t456;
  t479 = t465*t269;
  t500 = 0.366501*t97;
  t505 = 0. + t500;
  t506 = t505*t307;
  t514 = t454 + t479 + t506;
  t533 = Cos(var1[20]);
  t534 = -1.*t533;
  t558 = 1. + t534;
  t18 = Sin(var1[21]);
  t22 = Sin(var1[20]);
  t52 = 0.930418*t49;
  t53 = 0. + t52;
  t314 = t53*t312;
  t316 = 0.366501*t49;
  t317 = 0. + t316;
  t387 = t317*t386;
  t410 = -1.000000637725*t409;
  t412 = 1. + t410;
  t515 = t412*t514;
  t521 = t314 + t387 + t515;
  t559 = -0.8656776547239999*t409;
  t566 = 1. + t559;
  t567 = t566*t312;
  t568 = -0.340999127418*t409*t386;
  t569 = -0.930418*t49;
  t574 = 0. + t569;
  t578 = t574*t514;
  t587 = t567 + t568 + t578;
  t650 = -0.340999127418*t409*t312;
  t653 = -0.134322983001*t409;
  t660 = 1. + t653;
  t665 = t660*t386;
  t666 = -0.366501*t49;
  t687 = 0. + t666;
  t690 = t687*t514;
  t710 = t650 + t665 + t690;
  t789 = Cos(var1[21]);
  t821 = -1.*t789;
  t837 = 1. + t821;
  t25 = 0.366501*t22;
  t37 = 0. + t25;
  t527 = t37*t521;
  t596 = -0.340999127418*t558*t587;
  t597 = -0.134322983001*t558;
  t639 = 1. + t597;
  t731 = t639*t710;
  t733 = t527 + t596 + t731;
  t742 = 0.930418*t22;
  t744 = 0. + t742;
  t749 = t744*t521;
  t754 = -0.8656776547239999*t558;
  t760 = 1. + t754;
  t764 = t760*t587;
  t780 = -0.340999127418*t558*t710;
  t781 = t749 + t764 + t780;
  t850 = -1.000000637725*t558;
  t854 = 1. + t850;
  t873 = t854*t521;
  t875 = -0.930418*t22;
  t879 = 0. + t875;
  t883 = t879*t587;
  t885 = -0.366501*t22;
  t887 = 0. + t885;
  t919 = t887*t710;
  t927 = t873 + t883 + t919;
  t943 = Cos(var1[22]);
  t984 = -1.*t943;
  t986 = 1. + t984;
  t5 = Sin(var1[22]);
  t19 = -0.366501*t18;
  t20 = 0. + t19;
  t734 = t20*t733;
  t735 = -0.930418*t18;
  t738 = 0. + t735;
  t783 = t738*t781;
  t838 = -1.000000637725*t837;
  t839 = 1. + t838;
  t929 = t839*t927;
  t933 = t734 + t783 + t929;
  t988 = -0.134322983001*t837;
  t994 = 1. + t988;
  t995 = t994*t733;
  t1002 = -0.340999127418*t837*t781;
  t1010 = 0.366501*t18;
  t1011 = 0. + t1010;
  t1028 = t1011*t927;
  t1030 = t995 + t1002 + t1028;
  t1036 = -0.340999127418*t837*t733;
  t1039 = -0.8656776547239999*t837;
  t1045 = 1. + t1039;
  t1046 = t1045*t781;
  t1050 = 0.930418*t18;
  t1056 = 0. + t1050;
  t1059 = t1056*t927;
  t1068 = t1036 + t1046 + t1059;
  t9 = 0.930418*t5;
  t17 = 0. + t9;
  t1223 = t173*t209*t197;
  t1236 = -1.*t81*t219;
  t1239 = t1223 + t1236;
  t1248 = t81*t173;
  t1249 = t209*t197*t219;
  t1251 = t1248 + t1249;
  t1246 = -1.*t172*t1239;
  t1256 = t252*t1251;
  t1276 = t1246 + t1256;
  t1290 = t252*t1239;
  t1292 = t172*t1251;
  t1295 = t1290 + t1292;
  t1213 = t84*t131*t209;
  t1286 = 0.340999127418*t170*t1276;
  t1302 = t294*t1295;
  t1304 = t1213 + t1286 + t1302;
  t1310 = t84*t337*t209;
  t1314 = t377*t1276;
  t1325 = 0.340999127418*t170*t1295;
  t1327 = t1310 + t1314 + t1325;
  t1346 = t447*t84*t209;
  t1361 = t465*t1276;
  t1362 = t505*t1295;
  t1368 = t1346 + t1361 + t1362;
  t1305 = t53*t1304;
  t1343 = t317*t1327;
  t1372 = t412*t1368;
  t1376 = t1305 + t1343 + t1372;
  t1383 = t566*t1304;
  t1384 = -0.340999127418*t409*t1327;
  t1399 = t574*t1368;
  t1405 = t1383 + t1384 + t1399;
  t1415 = -0.340999127418*t409*t1304;
  t1423 = t660*t1327;
  t1432 = t687*t1368;
  t1436 = t1415 + t1423 + t1432;
  t1379 = t37*t1376;
  t1413 = -0.340999127418*t558*t1405;
  t1438 = t639*t1436;
  t1447 = t1379 + t1413 + t1438;
  t1457 = t744*t1376;
  t1459 = t760*t1405;
  t1461 = -0.340999127418*t558*t1436;
  t1462 = t1457 + t1459 + t1461;
  t1471 = t854*t1376;
  t1479 = t879*t1405;
  t1488 = t887*t1436;
  t1492 = t1471 + t1479 + t1488;
  t1032 = -0.8656776547239999*t986;
  t1034 = 1. + t1032;
  t1092 = 0.366501*t5;
  t1101 = 0. + t1092;
  t1456 = t20*t1447;
  t1470 = t738*t1462;
  t1493 = t839*t1492;
  t1508 = t1456 + t1470 + t1493;
  t1105 = -0.134322983001*t986;
  t1117 = 1. + t1105;
  t1523 = t994*t1447;
  t1525 = -0.340999127418*t837*t1462;
  t1529 = t1011*t1492;
  t1547 = t1523 + t1525 + t1529;
  t1551 = -0.340999127418*t837*t1447;
  t1554 = t1045*t1462;
  t1555 = t1056*t1492;
  t1556 = t1551 + t1554 + t1555;
  t1153 = -1.000000637725*t986;
  t1155 = 1. + t1153;
  t1163 = -0.366501*t5;
  t1170 = 0. + t1163;
  t1184 = -0.930418*t5;
  t1188 = 0. + t1184;
  t1601 = -1.*t84*t173*t172;
  t1603 = t252*t84*t219;
  t1604 = t1601 + t1603;
  t1617 = t252*t84*t173;
  t1629 = t84*t172*t219;
  t1637 = t1617 + t1629;
  t1595 = -1.*t131*t197;
  t1612 = 0.340999127418*t170*t1604;
  t1646 = t294*t1637;
  t1669 = t1595 + t1612 + t1646;
  t1676 = -1.*t337*t197;
  t1682 = t377*t1604;
  t1685 = 0.340999127418*t170*t1637;
  t1703 = t1676 + t1682 + t1685;
  t1711 = -1.*t447*t197;
  t1713 = t465*t1604;
  t1714 = t505*t1637;
  t1718 = t1711 + t1713 + t1714;
  t1672 = t53*t1669;
  t1710 = t317*t1703;
  t1722 = t412*t1718;
  t1724 = t1672 + t1710 + t1722;
  t1731 = t566*t1669;
  t1733 = -0.340999127418*t409*t1703;
  t1735 = t574*t1718;
  t1741 = t1731 + t1733 + t1735;
  t1754 = -0.340999127418*t409*t1669;
  t1759 = t660*t1703;
  t1766 = t687*t1718;
  t1767 = t1754 + t1759 + t1766;
  t1726 = t37*t1724;
  t1743 = -0.340999127418*t558*t1741;
  t1768 = t639*t1767;
  t1772 = t1726 + t1743 + t1768;
  t1777 = t744*t1724;
  t1780 = t760*t1741;
  t1786 = -0.340999127418*t558*t1767;
  t1787 = t1777 + t1780 + t1786;
  t1801 = t854*t1724;
  t1806 = t879*t1741;
  t1811 = t887*t1767;
  t1824 = t1801 + t1806 + t1811;
  t1776 = t20*t1772;
  t1793 = t738*t1787;
  t1830 = t839*t1824;
  t1831 = t1776 + t1793 + t1830;
  t1841 = t994*t1772;
  t1843 = -0.340999127418*t837*t1787;
  t1846 = t1011*t1824;
  t1847 = t1841 + t1843 + t1846;
  t1859 = -0.340999127418*t837*t1772;
  t1863 = t1045*t1787;
  t1864 = t1056*t1824;
  t1871 = t1859 + t1863 + t1864;
  t941 = t17*t933;
  t1031 = -0.340999127418*t986*t1030;
  t1073 = t1034*t1068;
  t1086 = t941 + t1031 + t1073;
  t1104 = t1101*t933;
  t1127 = t1117*t1030;
  t1137 = -0.340999127418*t986*t1068;
  t1147 = t1104 + t1127 + t1137;
  t1162 = t1155*t933;
  t1173 = t1170*t1030;
  t1195 = t1188*t1068;
  t1200 = t1162 + t1173 + t1195;
  t1521 = t17*t1508;
  t1549 = -0.340999127418*t986*t1547;
  t1557 = t1034*t1556;
  t1562 = t1521 + t1549 + t1557;
  t1567 = t1101*t1508;
  t1569 = t1117*t1547;
  t1574 = -0.340999127418*t986*t1556;
  t1577 = t1567 + t1569 + t1574;
  t1585 = t1155*t1508;
  t1588 = t1170*t1547;
  t1589 = t1188*t1556;
  t1592 = t1585 + t1588 + t1589;
  t1834 = t17*t1831;
  t1849 = -0.340999127418*t986*t1847;
  t1873 = t1034*t1871;
  t1885 = t1834 + t1849 + t1873;
  t1913 = t1101*t1831;
  t1926 = t1117*t1847;
  t1929 = -0.340999127418*t986*t1871;
  t1939 = t1913 + t1926 + t1929;
  t1961 = t1155*t1831;
  t1966 = t1170*t1847;
  t1975 = t1188*t1871;
  t1977 = t1961 + t1966 + t1975;
  t2065 = -0.04500040093286238*t170;
  t2070 = -0.07877663122399998*t465;
  t2071 = 0.031030906668*t505;
  t2072 = 0. + t2065 + t2070 + t2071;
  t2078 = -0.091*t172;
  t2086 = 0. + t2078;
  t2090 = -1.*t252;
  t2096 = 1. + t2090;
  t2097 = -0.091*t2096;
  t2098 = 0. + t2097;
  t2107 = 1.296332362046933e-7*var1[18];
  t2109 = -0.07877668146182712*t170;
  t2123 = -0.045000372235*t337;
  t2124 = t2107 + t2109 + t2123;
  t2127 = 3.2909349868922137e-7*var1[18];
  t2129 = 0.03103092645718495*t170;
  t2135 = -0.045000372235*t131;
  t2137 = t2127 + t2129 + t2135;
  t2153 = -1.296332362046933e-7*var1[19];
  t2159 = -0.14128592423750855*t409;
  t2161 = -0.045000372235*t574;
  t2165 = t2153 + t2159 + t2161;
  t2186 = 3.2909349868922137e-7*var1[19];
  t2192 = -0.055653945343889656*t409;
  t2193 = -0.045000372235*t687;
  t2197 = t2186 + t2192 + t2193;
  t2201 = -0.04500040093286238*t409;
  t2202 = -0.055653909852*t317;
  t2205 = -0.141285834136*t53;
  t2211 = 0. + t2201 + t2202 + t2205;
  t2222 = 0.039853038461262744*t558;
  t2223 = -0.22023459268999998*t879;
  t2225 = -0.086752619205*t887;
  t2228 = 0. + t2222 + t2223 + t2225;
  t2236 = 6.295460977284962e-8*var1[20];
  t2240 = -0.22023473313910558*t558;
  t2244 = 0.039853013046*t744;
  t2246 = t2236 + t2240 + t2244;
  t2257 = -1.5981976069815686e-7*var1[20];
  t2269 = -0.08675267452931407*t558;
  t2271 = 0.039853013046*t37;
  t2273 = t2257 + t2269 + t2271;
  t2282 = 5.7930615939377813e-8*var1[21];
  t2286 = -0.23261833304643187*t837;
  t2288 = -0.262809976934*t1011;
  t2289 = t2282 + t2286 + t2288;
  t2295 = -2.281945176511838e-8*var1[21];
  t2300 = -0.5905366811997648*t837;
  t2301 = -0.262809976934*t1056;
  t2304 = t2295 + t2300 + t2301;
  t2310 = -0.26281014453449253*t837;
  t2311 = -0.5905363046000001*t738;
  t2312 = -0.23261818470000004*t20;
  t2313 = 0. + t2310 + t2311 + t2312;
  t2317 = 0.06199697675299678*t986;
  t2318 = -0.823260828522*t1188;
  t2321 = -0.324290713329*t1170;
  t2322 = 0. + t2317 + t2318 + t2321;
  t2325 = 7.500378623168247e-8*var1[22];
  t2332 = -0.32429092013729516*t986;
  t2338 = 0.061996937216*t1101;
  t2340 = t2325 + t2332 + t2338;
  t2357 = -2.95447451120871e-8*var1[22];
  t2365 = -0.8232613535360118*t986;
  t2366 = 0.061996937216*t17;
  t2367 = t2357 + t2365 + t2366;
  p_output1[0]=0.553471*t1086 + 0.218018*t1147 + 0.803828*t1200;
  p_output1[1]=0.553471*t1562 + 0.218018*t1577 + 0.803828*t1592;
  p_output1[2]=0.553471*t1885 + 0.218018*t1939 + 0.803828*t1977;
  p_output1[3]=0.;
  p_output1[4]=-0.747896*t1086 - 0.294604*t1147 + 0.594863*t1200;
  p_output1[5]=-0.747896*t1562 - 0.294604*t1577 + 0.594863*t1592;
  p_output1[6]=-0.747896*t1885 - 0.294604*t1939 + 0.594863*t1977;
  p_output1[7]=0.;
  p_output1[8]=-0.366501*t1086 + 0.930418*t1147;
  p_output1[9]=-0.366501*t1562 + 0.930418*t1577;
  p_output1[10]=-0.366501*t1885 + 0.930418*t1939;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.792413*t1086 - 0.402602*t1147 + 0.061997*t1200 + t1030*t2340 + t1068*t2367 + t2086*t242 + t2098*t259 + t2124*t269 + t2137*t307 + t2165*t312 + t2197*t386 + t2211*t514 + t2228*t521 + t2246*t587 + t2273*t710 + t2289*t733 + t2304*t781 + t2072*t81*t84 + t2313*t927 + t2322*t933 + var1[0];
  p_output1[13]=0. - 0.792413*t1562 - 0.402602*t1577 + 0.061997*t1592 + t1239*t2086 + t1251*t2098 + t1276*t2124 + t1295*t2137 + t1304*t2165 + t1327*t2197 + t1368*t2211 + t1376*t2228 + t1405*t2246 + t1436*t2273 + t1447*t2289 + t1462*t2304 + t1492*t2313 + t1508*t2322 + t1547*t2340 + t1556*t2367 + t2072*t209*t84 + var1[1];
  p_output1[14]=0. - 0.792413*t1885 - 0.402602*t1939 + 0.061997*t1977 - 1.*t197*t2072 + t1604*t2124 + t1637*t2137 + t1669*t2165 + t1703*t2197 + t1718*t2211 + t1724*t2228 + t1741*t2246 + t1767*t2273 + t1772*t2289 + t1787*t2304 + t1824*t2313 + t1831*t2322 + t1847*t2340 + t1871*t2367 + t173*t2086*t84 + t2098*t219*t84 + var1[2];
  p_output1[15]=1.;
}



void T_toe_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Thu 10 Nov 2022 14:34:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToeBottomBack_src.h"

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
  double t219;
  double t207;
  double t221;
  double t211;
  double t224;
  double t196;
  double t197;
  double t202;
  double t204;
  double t248;
  double t250;
  double t252;
  double t212;
  double t228;
  double t246;
  double t260;
  double t180;
  double t187;
  double t193;
  double t247;
  double t263;
  double t265;
  double t274;
  double t279;
  double t283;
  double t292;
  double t296;
  double t424;
  double t425;
  double t427;
  double t433;
  double t437;
  double t440;
  double t442;
  double t444;
  double t451;
  double t456;
  double t266;
  double t271;
  double t272;
  double t284;
  double t303;
  double t317;
  double t321;
  double t323;
  double t457;
  double t348;
  double t350;
  double t375;
  double t376;
  double t377;
  double t385;
  double t386;
  double t398;
  double t154;
  double t156;
  double t173;
  double t145;
  double t324;
  double t339;
  double t345;
  double t421;
  double t464;
  double t467;
  double t470;
  double t471;
  double t492;
  double t546;
  double t552;
  double t553;
  double t565;
  double t566;
  double t567;
  double t568;
  double t569;
  double t571;
  double t575;
  double t622;
  double t623;
  double t625;
  double t628;
  double t630;
  double t643;
  double t654;
  double t665;
  double t796;
  double t798;
  double t835;
  double t472;
  double t495;
  double t498;
  double t576;
  double t599;
  double t616;
  double t671;
  double t686;
  double t708;
  double t710;
  double t720;
  double t724;
  double t728;
  double t743;
  double t745;
  double t780;
  double t847;
  double t864;
  double t865;
  double t869;
  double t892;
  double t893;
  double t901;
  double t921;
  double t925;
  double t926;
  double t972;
  double t973;
  double t986;
  double t64;
  double t69;
  double t73;
  double t86;
  double t97;
  double t150;
  double t151;
  double t687;
  double t688;
  double t707;
  double t790;
  double t837;
  double t841;
  double t944;
  double t945;
  double t994;
  double t996;
  double t998;
  double t999;
  double t1000;
  double t1029;
  double t1036;
  double t1044;
  double t1059;
  double t1065;
  double t1070;
  double t1073;
  double t1076;
  double t1105;
  double t1107;
  double t1115;
  double t98;
  double t99;
  double t962;
  double t1051;
  double t1054;
  double t1058;
  double t1117;
  double t1130;
  double t1172;
  double t1182;
  double t1187;
  double t1192;
  double t1197;
  double t1213;
  double t1215;
  double t1216;
  double t82;
  double t1231;
  double t1233;
  double t1238;
  double t1240;
  double t1263;
  double t1270;
  double t1272;
  double t1276;
  double t1279;
  double t1283;
  double t1333;
  double t1149;
  double t89;
  double t90;
  double t1473;
  double t1474;
  double t1477;
  double t1458;
  double t1464;
  double t1471;
  double t1472;
  double t1488;
  double t1494;
  double t1509;
  double t1522;
  double t1524;
  double t1576;
  double t1586;
  double t1591;
  double t1594;
  double t1504;
  double t1547;
  double t1551;
  double t1552;
  double t1560;
  double t1564;
  double t1570;
  double t1572;
  double t1555;
  double t1574;
  double t1595;
  double t1597;
  double t1614;
  double t1620;
  double t1623;
  double t1624;
  double t1634;
  double t1639;
  double t1642;
  double t1643;
  double t1613;
  double t1631;
  double t1653;
  double t1656;
  double t1667;
  double t1668;
  double t1672;
  double t1681;
  double t1689;
  double t1692;
  double t1694;
  double t1696;
  double t1161;
  double t1167;
  double t1659;
  double t1688;
  double t1708;
  double t1709;
  double t1713;
  double t1717;
  double t1722;
  double t1725;
  double t1752;
  double t1753;
  double t1763;
  double t1769;
  double t1227;
  double t1229;
  double t1314;
  double t1315;
  double t1710;
  double t1728;
  double t1777;
  double t1788;
  double t1336;
  double t1344;
  double t1793;
  double t1794;
  double t1798;
  double t1801;
  double t1372;
  double t1375;
  double t1806;
  double t1807;
  double t1812;
  double t1813;
  double t1385;
  double t1394;
  double t1399;
  double t1400;
  double t1424;
  double t1436;
  double t1868;
  double t1876;
  double t1881;
  double t1890;
  double t1896;
  double t1900;
  double t1929;
  double t1930;
  double t1933;
  double t1936;
  double t1888;
  double t1903;
  double t1905;
  double t1906;
  double t1917;
  double t1918;
  double t1920;
  double t1921;
  double t1915;
  double t1924;
  double t1937;
  double t1942;
  double t1956;
  double t1961;
  double t1962;
  double t1964;
  double t1967;
  double t1968;
  double t1971;
  double t1972;
  double t1946;
  double t1966;
  double t1975;
  double t1976;
  double t1981;
  double t1986;
  double t1987;
  double t1988;
  double t2016;
  double t2027;
  double t2028;
  double t2029;
  double t1977;
  double t2004;
  double t2031;
  double t2034;
  double t2037;
  double t2049;
  double t2056;
  double t2065;
  double t2067;
  double t2068;
  double t2069;
  double t2070;
  double t2035;
  double t2066;
  double t2071;
  double t2073;
  double t2076;
  double t2077;
  double t2079;
  double t2086;
  double t2092;
  double t2093;
  double t2094;
  double t2096;
  double t1317;
  double t1364;
  double t1380;
  double t1381;
  double t1398;
  double t1403;
  double t1438;
  double t1440;
  double t1836;
  double t1837;
  double t1844;
  double t1845;
  double t1848;
  double t1849;
  double t1854;
  double t1857;
  double t2109;
  double t2111;
  double t2115;
  double t2126;
  double t2134;
  double t2138;
  double t2140;
  double t2142;
  double t1132;
  double t1224;
  double t1297;
  double t1298;
  double t1792;
  double t1805;
  double t1815;
  double t1821;
  double t2075;
  double t2090;
  double t2097;
  double t2107;
  double t2329;
  double t2353;
  double t2324;
  double t2221;
  double t2223;
  double t2229;
  double t2236;
  double t2250;
  double t2255;
  double t2259;
  double t2263;
  double t2264;
  double t2267;
  double t2269;
  double t2270;
  double t2272;
  double t2273;
  double t2281;
  double t2282;
  double t2283;
  double t2284;
  double t2301;
  double t2323;
  double t2325;
  double t2328;
  double t2331;
  double t2332;
  double t2336;
  double t2342;
  double t2345;
  double t2346;
  double t2352;
  double t2354;
  double t2361;
  double t2362;
  double t2365;
  double t2374;
  double t2376;
  double t2378;
  double t2380;
  double t2382;
  double t2389;
  double t2396;
  double t2397;
  double t2399;
  double t2401;
  double t2404;
  double t2405;
  double t2408;
  double t2411;
  double t2414;
  double t2418;
  double t2422;
  double t2427;
  double t2435;
  double t2437;
  double t2438;
  double t2444;
  double t2447;
  double t2449;
  double t2452;
  double t2461;
  double t2467;
  double t2473;
  double t2474;
  double t2476;
  double t2492;
  double t2494;
  double t2495;
  double t2497;
  double t2506;
  double t2508;
  double t2511;
  double t2520;
  double t2531;
  double t2534;
  double t2535;
  double t2537;
  double t2544;
  double t2545;
  double t2552;
  double t2560;
  double t2563;
  double t2567;
  double t2570;
  double t2572;
  double t2580;
  double t2583;
  double t2584;
  double t2589;
  t219 = Cos(var1[3]);
  t207 = Cos(var1[5]);
  t221 = Sin(var1[4]);
  t211 = Sin(var1[3]);
  t224 = Sin(var1[5]);
  t196 = Cos(var1[7]);
  t197 = -1.*t196;
  t202 = 1. + t197;
  t204 = Cos(var1[6]);
  t248 = t219*t207*t221;
  t250 = t211*t224;
  t252 = t248 + t250;
  t212 = -1.*t207*t211;
  t228 = t219*t221*t224;
  t246 = t212 + t228;
  t260 = Sin(var1[6]);
  t180 = Cos(var1[8]);
  t187 = -1.*t180;
  t193 = 1. + t187;
  t247 = t204*t246;
  t263 = -1.*t252*t260;
  t265 = t247 + t263;
  t274 = t204*t252;
  t279 = t246*t260;
  t283 = t274 + t279;
  t292 = Cos(var1[4]);
  t296 = Sin(var1[7]);
  t424 = -1.000000637725*t202;
  t425 = 1. + t424;
  t427 = t219*t292*t425;
  t433 = -0.930418*t296;
  t437 = 0. + t433;
  t440 = t265*t437;
  t442 = -0.366501*t296;
  t444 = 0. + t442;
  t451 = t283*t444;
  t456 = t427 + t440 + t451;
  t266 = -0.340999127418*t202*t265;
  t271 = -0.134322983001*t202;
  t272 = 1. + t271;
  t284 = t272*t283;
  t303 = 0.366501*t296;
  t317 = 0. + t303;
  t321 = t219*t292*t317;
  t323 = t266 + t284 + t321;
  t457 = Sin(var1[8]);
  t348 = -0.8656776547239999*t202;
  t350 = 1. + t348;
  t375 = t350*t265;
  t376 = -0.340999127418*t202*t283;
  t377 = 0.930418*t296;
  t385 = 0. + t377;
  t386 = t219*t292*t385;
  t398 = t375 + t376 + t386;
  t154 = Cos(var1[9]);
  t156 = -1.*t154;
  t173 = 1. + t156;
  t145 = Sin(var1[10]);
  t324 = 0.340999127418*t193*t323;
  t339 = -0.134322983001*t193;
  t345 = 1. + t339;
  t421 = t345*t398;
  t464 = -0.366501*t457;
  t467 = 0. + t464;
  t470 = t456*t467;
  t471 = t324 + t421 + t470;
  t492 = Sin(var1[9]);
  t546 = -1.000000637725*t193;
  t552 = 1. + t546;
  t553 = t552*t456;
  t565 = -0.930418*t457;
  t566 = 0. + t565;
  t567 = t323*t566;
  t568 = 0.366501*t457;
  t569 = 0. + t568;
  t571 = t398*t569;
  t575 = t553 + t567 + t571;
  t622 = -0.8656776547239999*t193;
  t623 = 1. + t622;
  t625 = t623*t323;
  t628 = 0.340999127418*t193*t398;
  t630 = 0.930418*t457;
  t643 = 0. + t630;
  t654 = t456*t643;
  t665 = t625 + t628 + t654;
  t796 = Cos(var1[10]);
  t798 = -1.*t796;
  t835 = 1. + t798;
  t472 = 0.340999127418*t173*t471;
  t495 = -0.930418*t492;
  t498 = 0. + t495;
  t576 = t498*t575;
  t599 = -0.8656776547239999*t173;
  t616 = 1. + t599;
  t671 = t616*t665;
  t686 = t472 + t576 + t671;
  t708 = -0.134322983001*t173;
  t710 = 1. + t708;
  t720 = t710*t471;
  t724 = 0.366501*t492;
  t728 = 0. + t724;
  t743 = t728*t575;
  t745 = 0.340999127418*t173*t665;
  t780 = t720 + t743 + t745;
  t847 = -0.366501*t492;
  t864 = 0. + t847;
  t865 = t864*t471;
  t869 = -1.000000637725*t173;
  t892 = 1. + t869;
  t893 = t892*t575;
  t901 = 0.930418*t492;
  t921 = 0. + t901;
  t925 = t921*t665;
  t926 = t865 + t893 + t925;
  t972 = Cos(var1[11]);
  t973 = -1.*t972;
  t986 = 1. + t973;
  t64 = Cos(var1[12]);
  t69 = -1.*t64;
  t73 = 1. + t69;
  t86 = Sin(var1[12]);
  t97 = Sin(var1[11]);
  t150 = 0.930418*t145;
  t151 = 0. + t150;
  t687 = t151*t686;
  t688 = -0.366501*t145;
  t707 = 0. + t688;
  t790 = t707*t780;
  t837 = -1.000000637725*t835;
  t841 = 1. + t837;
  t944 = t841*t926;
  t945 = t687 + t790 + t944;
  t994 = -0.8656776547239999*t835;
  t996 = 1. + t994;
  t998 = t996*t686;
  t999 = 0.340999127418*t835*t780;
  t1000 = -0.930418*t145;
  t1029 = 0. + t1000;
  t1036 = t1029*t926;
  t1044 = t998 + t999 + t1036;
  t1059 = 0.340999127418*t835*t686;
  t1065 = -0.134322983001*t835;
  t1070 = 1. + t1065;
  t1073 = t1070*t780;
  t1076 = 0.366501*t145;
  t1105 = 0. + t1076;
  t1107 = t1105*t926;
  t1115 = t1059 + t1073 + t1107;
  t98 = 0.366501*t97;
  t99 = 0. + t98;
  t962 = t99*t945;
  t1051 = 0.340999127418*t986*t1044;
  t1054 = -0.134322983001*t986;
  t1058 = 1. + t1054;
  t1117 = t1058*t1115;
  t1130 = t962 + t1051 + t1117;
  t1172 = -0.930418*t97;
  t1182 = 0. + t1172;
  t1187 = t1182*t945;
  t1192 = -0.8656776547239999*t986;
  t1197 = 1. + t1192;
  t1213 = t1197*t1044;
  t1215 = 0.340999127418*t986*t1115;
  t1216 = t1187 + t1213 + t1215;
  t82 = -0.175248972904*t73;
  t1231 = -1.000000637725*t986;
  t1233 = 1. + t1231;
  t1238 = t1233*t945;
  t1240 = 0.930418*t97;
  t1263 = 0. + t1240;
  t1270 = t1263*t1044;
  t1272 = -0.366501*t97;
  t1276 = 0. + t1272;
  t1279 = t1276*t1115;
  t1283 = t1238 + t1270 + t1279;
  t1333 = -0.120666640478*t73;
  t1149 = 0.444895486988*t73;
  t89 = 0.553471*t86;
  t90 = t82 + t89;
  t1473 = t207*t211*t221;
  t1474 = -1.*t219*t224;
  t1477 = t1473 + t1474;
  t1458 = t219*t207;
  t1464 = t211*t221*t224;
  t1471 = t1458 + t1464;
  t1472 = t204*t1471;
  t1488 = -1.*t1477*t260;
  t1494 = t1472 + t1488;
  t1509 = t204*t1477;
  t1522 = t1471*t260;
  t1524 = t1509 + t1522;
  t1576 = t292*t425*t211;
  t1586 = t1494*t437;
  t1591 = t1524*t444;
  t1594 = t1576 + t1586 + t1591;
  t1504 = -0.340999127418*t202*t1494;
  t1547 = t272*t1524;
  t1551 = t292*t211*t317;
  t1552 = t1504 + t1547 + t1551;
  t1560 = t350*t1494;
  t1564 = -0.340999127418*t202*t1524;
  t1570 = t292*t211*t385;
  t1572 = t1560 + t1564 + t1570;
  t1555 = 0.340999127418*t193*t1552;
  t1574 = t345*t1572;
  t1595 = t1594*t467;
  t1597 = t1555 + t1574 + t1595;
  t1614 = t552*t1594;
  t1620 = t1552*t566;
  t1623 = t1572*t569;
  t1624 = t1614 + t1620 + t1623;
  t1634 = t623*t1552;
  t1639 = 0.340999127418*t193*t1572;
  t1642 = t1594*t643;
  t1643 = t1634 + t1639 + t1642;
  t1613 = 0.340999127418*t173*t1597;
  t1631 = t498*t1624;
  t1653 = t616*t1643;
  t1656 = t1613 + t1631 + t1653;
  t1667 = t710*t1597;
  t1668 = t728*t1624;
  t1672 = 0.340999127418*t173*t1643;
  t1681 = t1667 + t1668 + t1672;
  t1689 = t864*t1597;
  t1692 = t892*t1624;
  t1694 = t921*t1643;
  t1696 = t1689 + t1692 + t1694;
  t1161 = 0.218018*t86;
  t1167 = t1149 + t1161;
  t1659 = t151*t1656;
  t1688 = t707*t1681;
  t1708 = t841*t1696;
  t1709 = t1659 + t1688 + t1708;
  t1713 = t996*t1656;
  t1717 = 0.340999127418*t835*t1681;
  t1722 = t1029*t1696;
  t1725 = t1713 + t1717 + t1722;
  t1752 = 0.340999127418*t835*t1656;
  t1753 = t1070*t1681;
  t1763 = t1105*t1696;
  t1769 = t1752 + t1753 + t1763;
  t1227 = -0.353861996165*t73;
  t1229 = 1. + t1227;
  t1314 = -0.952469601425*t73;
  t1315 = 1. + t1314;
  t1710 = t99*t1709;
  t1728 = 0.340999127418*t986*t1725;
  t1777 = t1058*t1769;
  t1788 = t1710 + t1728 + t1777;
  t1336 = 0.803828*t86;
  t1344 = t1333 + t1336;
  t1793 = t1182*t1709;
  t1794 = t1197*t1725;
  t1798 = 0.340999127418*t986*t1769;
  t1801 = t1793 + t1794 + t1798;
  t1372 = -0.553471*t86;
  t1375 = t82 + t1372;
  t1806 = t1233*t1709;
  t1807 = t1263*t1725;
  t1812 = t1276*t1769;
  t1813 = t1806 + t1807 + t1812;
  t1385 = -0.803828*t86;
  t1394 = t1333 + t1385;
  t1399 = -0.693671301908*t73;
  t1400 = 1. + t1399;
  t1424 = -0.218018*t86;
  t1436 = t1149 + t1424;
  t1868 = t292*t204*t224;
  t1876 = -1.*t292*t207*t260;
  t1881 = t1868 + t1876;
  t1890 = t292*t207*t204;
  t1896 = t292*t224*t260;
  t1900 = t1890 + t1896;
  t1929 = -1.*t425*t221;
  t1930 = t1881*t437;
  t1933 = t1900*t444;
  t1936 = t1929 + t1930 + t1933;
  t1888 = -0.340999127418*t202*t1881;
  t1903 = t272*t1900;
  t1905 = -1.*t221*t317;
  t1906 = t1888 + t1903 + t1905;
  t1917 = t350*t1881;
  t1918 = -0.340999127418*t202*t1900;
  t1920 = -1.*t221*t385;
  t1921 = t1917 + t1918 + t1920;
  t1915 = 0.340999127418*t193*t1906;
  t1924 = t345*t1921;
  t1937 = t1936*t467;
  t1942 = t1915 + t1924 + t1937;
  t1956 = t552*t1936;
  t1961 = t1906*t566;
  t1962 = t1921*t569;
  t1964 = t1956 + t1961 + t1962;
  t1967 = t623*t1906;
  t1968 = 0.340999127418*t193*t1921;
  t1971 = t1936*t643;
  t1972 = t1967 + t1968 + t1971;
  t1946 = 0.340999127418*t173*t1942;
  t1966 = t498*t1964;
  t1975 = t616*t1972;
  t1976 = t1946 + t1966 + t1975;
  t1981 = t710*t1942;
  t1986 = t728*t1964;
  t1987 = 0.340999127418*t173*t1972;
  t1988 = t1981 + t1986 + t1987;
  t2016 = t864*t1942;
  t2027 = t892*t1964;
  t2028 = t921*t1972;
  t2029 = t2016 + t2027 + t2028;
  t1977 = t151*t1976;
  t2004 = t707*t1988;
  t2031 = t841*t2029;
  t2034 = t1977 + t2004 + t2031;
  t2037 = t996*t1976;
  t2049 = 0.340999127418*t835*t1988;
  t2056 = t1029*t2029;
  t2065 = t2037 + t2049 + t2056;
  t2067 = 0.340999127418*t835*t1976;
  t2068 = t1070*t1988;
  t2069 = t1105*t2029;
  t2070 = t2067 + t2068 + t2069;
  t2035 = t99*t2034;
  t2066 = 0.340999127418*t986*t2065;
  t2071 = t1058*t2070;
  t2073 = t2035 + t2066 + t2071;
  t2076 = t1182*t2034;
  t2077 = t1197*t2065;
  t2079 = 0.340999127418*t986*t2070;
  t2086 = t2076 + t2077 + t2079;
  t2092 = t1233*t2034;
  t2093 = t1263*t2065;
  t2094 = t1276*t2070;
  t2096 = t2092 + t2093 + t2094;
  t1317 = t1315*t1130;
  t1364 = t1344*t1216;
  t1380 = t1375*t1283;
  t1381 = t1317 + t1364 + t1380;
  t1398 = t1394*t1130;
  t1403 = t1400*t1216;
  t1438 = t1436*t1283;
  t1440 = t1398 + t1403 + t1438;
  t1836 = t1315*t1788;
  t1837 = t1344*t1801;
  t1844 = t1375*t1813;
  t1845 = t1836 + t1837 + t1844;
  t1848 = t1394*t1788;
  t1849 = t1400*t1801;
  t1854 = t1436*t1813;
  t1857 = t1848 + t1849 + t1854;
  t2109 = t1315*t2073;
  t2111 = t1344*t2086;
  t2115 = t1375*t2096;
  t2126 = t2109 + t2111 + t2115;
  t2134 = t1394*t2073;
  t2138 = t1400*t2086;
  t2140 = t1436*t2096;
  t2142 = t2134 + t2138 + t2140;
  t1132 = t90*t1130;
  t1224 = t1167*t1216;
  t1297 = t1229*t1283;
  t1298 = t1132 + t1224 + t1297;
  t1792 = t90*t1788;
  t1805 = t1167*t1801;
  t1815 = t1229*t1813;
  t1821 = t1792 + t1805 + t1815;
  t2075 = t90*t2073;
  t2090 = t1167*t2086;
  t2097 = t1229*t2096;
  t2107 = t2075 + t2090 + t2097;
  t2329 = 0.120666640478*t73;
  t2353 = -0.444895486988*t73;
  t2324 = 0.175248972904*t73;
  t2221 = -1.*t204;
  t2223 = 1. + t2221;
  t2229 = 0.091*t2223;
  t2236 = 0. + t2229;
  t2250 = 0.091*t260;
  t2255 = 0. + t2250;
  t2259 = -0.04500040093286238*t202;
  t2263 = 0.07877663122399998*t437;
  t2264 = 0.031030906668*t444;
  t2267 = 0. + t2259 + t2263 + t2264;
  t2269 = -3.2909349868922137e-7*var1[7];
  t2270 = 0.03103092645718495*t202;
  t2272 = -0.045000372235*t317;
  t2273 = t2269 + t2270 + t2272;
  t2281 = 1.296332362046933e-7*var1[7];
  t2282 = 0.07877668146182712*t202;
  t2283 = -0.045000372235*t385;
  t2284 = t2281 + t2282 + t2283;
  t2301 = 2.838136523330542e-8*var1[12];
  t2323 = 0.2845150083511607*t73;
  t2325 = t2324 + t1372;
  t2328 = 0.44503472296900004*t2325;
  t2331 = t2329 + t1336;
  t2332 = -0.5286755231320001*t2331;
  t2336 = t2301 + t2323 + t2328 + t2332;
  t2342 = -7.20503013377005e-8*var1[12];
  t2345 = -0.3667270384178674*t73;
  t2346 = t2329 + t1385;
  t2352 = 0.29871295412*t2346;
  t2354 = t2353 + t1424;
  t2361 = 0.44503472296900004*t2354;
  t2362 = t2342 + t2345 + t2352 + t2361;
  t2365 = -1.0464152525368286e-7*var1[12];
  t2374 = 0.15748087543254813*t73;
  t2376 = t2353 + t1161;
  t2378 = -0.5286755231320001*t2376;
  t2380 = t2324 + t89;
  t2382 = 0.29871295412*t2380;
  t2389 = t2365 + t2374 + t2378 + t2382;
  t2396 = 0.06199697675299678*t986;
  t2397 = 0.324290713329*t1276;
  t2399 = -0.823260828522*t1263;
  t2401 = 0. + t2396 + t2397 + t2399;
  t2404 = 2.95447451120871e-8*var1[11];
  t2405 = -0.8232613535360118*t986;
  t2408 = 0.061996937216*t1182;
  t2411 = t2404 + t2405 + t2408;
  t2414 = 7.500378623168247e-8*var1[11];
  t2418 = 0.32429092013729516*t986;
  t2422 = 0.061996937216*t99;
  t2427 = t2414 + t2418 + t2422;
  t2435 = 2.281945176511838e-8*var1[10];
  t2437 = -0.5905366811997648*t835;
  t2438 = -0.262809976934*t1029;
  t2444 = t2435 + t2437 + t2438;
  t2447 = 5.7930615939377813e-8*var1[10];
  t2449 = 0.23261833304643187*t835;
  t2452 = -0.262809976934*t1105;
  t2461 = t2447 + t2449 + t2452;
  t2467 = -0.26281014453449253*t835;
  t2473 = 0.23261818470000004*t707;
  t2474 = -0.5905363046000001*t151;
  t2476 = 0. + t2467 + t2473 + t2474;
  t2492 = 3.2909349868922137e-7*var1[8];
  t2494 = 0.055653945343889656*t193;
  t2495 = -0.045000372235*t467;
  t2497 = t2492 + t2494 + t2495;
  t2506 = -1.5981976069815686e-7*var1[9];
  t2508 = 0.08675267452931407*t173;
  t2511 = 0.039853013046*t728;
  t2520 = t2506 + t2508 + t2511;
  t2531 = -0.04500040093286238*t193;
  t2534 = -0.141285834136*t566;
  t2535 = 0.055653909852*t569;
  t2537 = 0. + t2531 + t2534 + t2535;
  t2544 = 0.039853038461262744*t173;
  t2545 = 0.086752619205*t864;
  t2552 = -0.22023459268999998*t921;
  t2560 = 0. + t2544 + t2545 + t2552;
  t2563 = 1.296332362046933e-7*var1[8];
  t2567 = -0.14128592423750855*t193;
  t2570 = -0.045000372235*t643;
  t2572 = t2563 + t2567 + t2570;
  t2580 = -6.295460977284962e-8*var1[9];
  t2583 = -0.22023473313910558*t173;
  t2584 = 0.039853013046*t498;
  t2589 = t2580 + t2583 + t2584;
  p_output1[0]=0.993567*t1298 - 0.041508*t1381 + 0.105375*t1440;
  p_output1[1]=0.993567*t1821 - 0.041508*t1845 + 0.105375*t1857;
  p_output1[2]=0.993567*t2107 - 0.041508*t2126 + 0.105375*t2142;
  p_output1[3]=0.;
  p_output1[4]=0.930418*t1381 + 0.366501*t1440;
  p_output1[5]=0.930418*t1845 + 0.366501*t1857;
  p_output1[6]=0.930418*t2126 + 0.366501*t2142;
  p_output1[7]=0.;
  p_output1[8]=-0.113255*t1298 - 0.364143*t1381 + 0.924432*t1440;
  p_output1[9]=-0.113255*t1821 - 0.364143*t1845 + 0.924432*t1857;
  p_output1[10]=-0.113255*t2107 - 0.364143*t2126 + 0.924432*t2142;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.018436*t1298 + 0.432489*t1381 - 0.854643*t1440 + t1130*t2336 + t1216*t2362 + t1283*t2389 + t1044*t2411 + t1115*t2427 + t2236*t246 + t2255*t252 + t2284*t265 + t2273*t283 + t219*t2267*t292 + t2572*t323 + t2497*t398 + t2537*t456 + t2520*t471 + t2560*t575 + t2589*t665 + t2444*t686 + t2461*t780 + t2476*t926 + t2401*t945 + var1[0];
  p_output1[13]=0. - 0.018436*t1821 + 0.432489*t1845 - 0.854643*t1857 + t1471*t2236 + t1477*t2255 + t1524*t2273 + t1494*t2284 + t1788*t2336 + t1801*t2362 + t1813*t2389 + t1709*t2401 + t1725*t2411 + t1769*t2427 + t1656*t2444 + t1681*t2461 + t1696*t2476 + t1572*t2497 + t1597*t2520 + t1594*t2537 + t1624*t2560 + t1552*t2572 + t1643*t2589 + t211*t2267*t292 + var1[1];
  p_output1[14]=0. - 0.018436*t2107 + 0.432489*t2126 - 0.854643*t2142 - 1.*t221*t2267 + t1900*t2273 + t1881*t2284 + t2073*t2336 + t2086*t2362 + t2096*t2389 + t2034*t2401 + t2065*t2411 + t2070*t2427 + t1976*t2444 + t1988*t2461 + t2029*t2476 + t1921*t2497 + t1942*t2520 + t1936*t2537 + t1964*t2560 + t1906*t2572 + t1972*t2589 + t2236*t224*t292 + t207*t2255*t292 + var1[2];
  p_output1[15]=1.;
}



void T_LeftToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
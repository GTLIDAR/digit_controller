/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:12:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_right_toe_pitch_src.h"

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
  double t55;
  double t59;
  double t110;
  double t118;
  double t172;
  double t181;
  double t176;
  double t182;
  double t186;
  double t337;
  double t328;
  double t340;
  double t345;
  double t346;
  double t232;
  double t235;
  double t236;
  double t410;
  double t412;
  double t418;
  double t419;
  double t420;
  double t423;
  double t430;
  double t434;
  double t436;
  double t414;
  double t449;
  double t450;
  double t461;
  double t478;
  double t481;
  double t485;
  double t486;
  double t489;
  double t492;
  double t524;
  double t526;
  double t541;
  double t399;
  double t406;
  double t407;
  double t32;
  double t333;
  double t368;
  double t372;
  double t516;
  double t519;
  double t522;
  double t572;
  double t574;
  double t576;
  double t599;
  double t608;
  double t612;
  double t389;
  double t391;
  double t392;
  double t675;
  double t678;
  double t699;
  double t700;
  double t705;
  double t706;
  double t707;
  double t834;
  double t837;
  double t842;
  double t814;
  double t924;
  double t937;
  double t939;
  double t941;
  double t866;
  double t883;
  double t821;
  double t822;
  double t845;
  double t851;
  double t956;
  double t957;
  double t961;
  double t963;
  double t977;
  double t980;
  double t981;
  double t993;
  double t1010;
  double t1015;
  double t1020;
  double t1021;
  double t972;
  double t1001;
  double t1023;
  double t1027;
  double t888;
  double t892;
  double t1095;
  double t1103;
  double t1105;
  double t1108;
  double t1038;
  double t1061;
  double t1066;
  double t1074;
  double t1121;
  double t1129;
  double t1131;
  double t1133;
  double t901;
  double t906;
  double t833;
  double t844;
  double t852;
  double t856;
  double t1078;
  double t1085;
  double t1092;
  double t1093;
  double t1261;
  double t1265;
  double t1266;
  double t1267;
  double t885;
  double t896;
  double t897;
  double t898;
  double t1144;
  double t1147;
  double t1151;
  double t1157;
  double t1284;
  double t1285;
  double t1288;
  double t1292;
  double t1358;
  double t1359;
  double t1364;
  double t1366;
  double t1368;
  double t1370;
  double t1379;
  double t1390;
  double t1449;
  double t912;
  double t938;
  double t952;
  double t953;
  double t1482;
  double t1483;
  double t1486;
  double t1531;
  double t1547;
  double t1557;
  double t1560;
  double t1335;
  double t1337;
  double t1341;
  double t1356;
  double t1591;
  double t1592;
  double t1467;
  double t1471;
  double t1455;
  double t1458;
  double t1217;
  double t1225;
  double t1234;
  double t1248;
  double t1624;
  double t1625;
  double t1636;
  double t1638;
  double t1648;
  double t1668;
  double t1672;
  double t1682;
  double t1687;
  double t1688;
  double t1696;
  double t1701;
  double t1580;
  double t1581;
  double t1639;
  double t1685;
  double t1707;
  double t1722;
  double t1725;
  double t1727;
  double t1729;
  double t1733;
  double t1492;
  double t1496;
  double t1735;
  double t1739;
  double t1742;
  double t1745;
  double t1785;
  double t1791;
  double t1794;
  double t1804;
  double t1617;
  double t1618;
  double t1620;
  double t1621;
  double t1549;
  double t1554;
  double t1565;
  double t1573;
  double t1758;
  double t1768;
  double t1772;
  double t1777;
  double t1861;
  double t1862;
  double t1867;
  double t1871;
  double t1878;
  double t1885;
  double t1890;
  double t1891;
  double t1578;
  double t1582;
  double t1601;
  double t1603;
  double t1950;
  double t1966;
  double t1973;
  double t1974;
  double t1979;
  double t1980;
  double t1981;
  double t1982;
  double t1466;
  double t1478;
  double t1513;
  double t1519;
  double t2049;
  double t2064;
  double t2065;
  double t2039;
  double t2155;
  double t2167;
  double t2178;
  double t2189;
  double t1930;
  double t1933;
  double t1935;
  double t1937;
  double t2094;
  double t2095;
  double t2041;
  double t2046;
  double t1822;
  double t1823;
  double t1832;
  double t1842;
  double t2070;
  double t2078;
  double t2202;
  double t2211;
  double t2213;
  double t2218;
  double t2224;
  double t2225;
  double t2229;
  double t2232;
  double t2239;
  double t2241;
  double t2242;
  double t2253;
  double t2219;
  double t2238;
  double t2259;
  double t2267;
  double t2103;
  double t2106;
  double t2317;
  double t2320;
  double t2324;
  double t2325;
  double t2271;
  double t2275;
  double t2282;
  double t2284;
  double t2331;
  double t2332;
  double t2336;
  double t2339;
  double t2130;
  double t2150;
  double t2048;
  double t2068;
  double t2083;
  double t2087;
  double t2295;
  double t2297;
  double t2301;
  double t2302;
  double t2374;
  double t2382;
  double t2393;
  double t2397;
  double t2099;
  double t2110;
  double t2112;
  double t2120;
  double t2344;
  double t2345;
  double t2349;
  double t2352;
  double t2407;
  double t2409;
  double t2411;
  double t2416;
  double t2483;
  double t2485;
  double t2491;
  double t2492;
  double t2494;
  double t2500;
  double t2501;
  double t2502;
  double t2573;
  double t2151;
  double t2173;
  double t2196;
  double t2197;
  double t2607;
  double t2612;
  double t2614;
  double t2632;
  double t2633;
  double t2642;
  double t2645;
  double t2456;
  double t2457;
  double t2458;
  double t2475;
  double t2661;
  double t2662;
  double t2582;
  double t2594;
  double t2574;
  double t2577;
  double t2364;
  double t2367;
  double t2368;
  double t2369;
  double t2679;
  double t2681;
  double t2683;
  double t2684;
  double t2695;
  double t2698;
  double t2705;
  double t2708;
  double t2715;
  double t2716;
  double t2719;
  double t2721;
  double t2657;
  double t2658;
  double t2693;
  double t2713;
  double t2723;
  double t2725;
  double t2729;
  double t2733;
  double t2736;
  double t2738;
  double t2617;
  double t2618;
  double t2739;
  double t2740;
  double t2743;
  double t2745;
  double t2774;
  double t2777;
  double t2782;
  double t2785;
  double t2668;
  double t2669;
  double t2674;
  double t2676;
  double t2640;
  double t2641;
  double t2646;
  double t2651;
  double t2761;
  double t2762;
  double t2764;
  double t2769;
  double t2819;
  double t2822;
  double t2824;
  double t2825;
  double t2827;
  double t2830;
  double t2838;
  double t2840;
  double t2655;
  double t2660;
  double t2663;
  double t2666;
  double t2898;
  double t2899;
  double t2902;
  double t2903;
  double t2928;
  double t2929;
  double t2931;
  double t2933;
  t55 = Cos(var1[3]);
  t59 = Sin(var1[3]);
  t110 = Cos(var1[4]);
  t118 = Sin(var1[4]);
  t172 = Cos(var1[5]);
  t181 = Sin(var1[5]);
  t176 = t55*t172*t118;
  t182 = t59*t181;
  t186 = t176 + t182;
  t337 = Cos(var1[17]);
  t328 = Sin(var1[17]);
  t340 = -1.*t172*t59;
  t345 = t55*t118*t181;
  t346 = t340 + t345;
  t232 = t172*t59*t118;
  t235 = -1.*t55*t181;
  t236 = t232 + t235;
  t410 = -0.091*t328;
  t412 = 0. + t410;
  t418 = -1.*t337;
  t419 = 1. + t418;
  t420 = -0.091*t419;
  t423 = 0. + t420;
  t430 = t55*t172;
  t434 = t59*t118*t181;
  t436 = t430 + t434;
  t414 = t412*t236;
  t449 = t423*t436;
  t450 = 0. + var1[1] + t414 + t449;
  t461 = -1.*var1[2];
  t478 = -1.*t110*t172*t412;
  t481 = -1.*t423*t110*t181;
  t485 = 0. + t461 + t478 + t481;
  t486 = -1.*t328*t236;
  t489 = t337*t436;
  t492 = t486 + t489;
  t524 = t337*t236;
  t526 = t328*t436;
  t541 = t524 + t526;
  t399 = -1.*t110*t172*t328;
  t406 = t337*t110*t181;
  t407 = t399 + t406;
  t32 = -1.*var1[0];
  t333 = -1.*t328*t186;
  t368 = t337*t346;
  t372 = t333 + t368;
  t516 = t337*t110*t172;
  t519 = t110*t328*t181;
  t522 = t516 + t519;
  t572 = -1.*t412*t186;
  t574 = -1.*t423*t346;
  t576 = 0. + t32 + t572 + t574;
  t599 = t110*t172*t412;
  t608 = t423*t110*t181;
  t612 = 0. + var1[2] + t599 + t608;
  t389 = t337*t186;
  t391 = t328*t346;
  t392 = t389 + t391;
  t675 = -1.*var1[1];
  t678 = -1.*t412*t236;
  t699 = -1.*t423*t436;
  t700 = 0. + t675 + t678 + t699;
  t705 = t412*t186;
  t706 = t423*t346;
  t707 = 0. + var1[0] + t705 + t706;
  t834 = Cos(var1[18]);
  t837 = -1.*t834;
  t842 = 1. + t837;
  t814 = Sin(var1[18]);
  t924 = -0.930418*t814;
  t937 = 0. + t924;
  t939 = 0.366501*t814;
  t941 = 0. + t939;
  t866 = 0.930418*t814;
  t883 = 0. + t866;
  t821 = -0.366501*t814;
  t822 = 0. + t821;
  t845 = -0.134322983001*t842;
  t851 = 1. + t845;
  t956 = -0.04500040093286238*t842;
  t957 = -0.07877663122399998*t937;
  t961 = 0.031030906668*t941;
  t963 = 0. + t956 + t957 + t961;
  t977 = 1.296332362046933e-7*var1[18];
  t980 = -0.07877668146182712*t842;
  t981 = -0.045000372235*t883;
  t993 = t977 + t980 + t981;
  t1010 = 3.2909349868922137e-7*var1[18];
  t1015 = 0.03103092645718495*t842;
  t1020 = -0.045000372235*t822;
  t1021 = t1010 + t1015 + t1020;
  t972 = t963*t118;
  t1001 = -1.*t993*t407;
  t1023 = -1.*t1021*t522;
  t1027 = 0. + t461 + t478 + t972 + t481 + t1001 + t1023;
  t888 = -0.8656776547239999*t842;
  t892 = 1. + t888;
  t1095 = t110*t963*t59;
  t1103 = t993*t492;
  t1105 = t1021*t541;
  t1108 = 0. + var1[1] + t1095 + t414 + t449 + t1103 + t1105;
  t1038 = t110*t822*t59;
  t1061 = 0.340999127418*t842*t492;
  t1066 = t851*t541;
  t1074 = t1038 + t1061 + t1066;
  t1121 = t110*t883*t59;
  t1129 = t892*t492;
  t1131 = 0.340999127418*t842*t541;
  t1133 = t1121 + t1129 + t1131;
  t901 = -1.000000637725*t842;
  t906 = 1. + t901;
  t833 = t55*t110*t822;
  t844 = 0.340999127418*t842*t372;
  t852 = t851*t392;
  t856 = t833 + t844 + t852;
  t1078 = -1.*t822*t118;
  t1085 = 0.340999127418*t842*t407;
  t1092 = t851*t522;
  t1093 = t1078 + t1085 + t1092;
  t1261 = -1.*t963*t118;
  t1265 = t993*t407;
  t1266 = t1021*t522;
  t1267 = 0. + var1[2] + t599 + t1261 + t608 + t1265 + t1266;
  t885 = t55*t110*t883;
  t896 = t892*t372;
  t897 = 0.340999127418*t842*t392;
  t898 = t885 + t896 + t897;
  t1144 = -1.*t883*t118;
  t1147 = t892*t407;
  t1151 = 0.340999127418*t842*t522;
  t1157 = t1144 + t1147 + t1151;
  t1284 = -1.*t55*t110*t963;
  t1285 = -1.*t993*t372;
  t1288 = -1.*t1021*t392;
  t1292 = 0. + t32 + t1284 + t572 + t574 + t1285 + t1288;
  t1358 = t55*t110*t963;
  t1359 = t993*t372;
  t1364 = t1021*t392;
  t1366 = 0. + var1[0] + t1358 + t705 + t706 + t1359 + t1364;
  t1368 = -1.*t110*t963*t59;
  t1370 = -1.*t993*t492;
  t1379 = -1.*t1021*t541;
  t1390 = 0. + t675 + t1368 + t678 + t699 + t1370 + t1379;
  t1449 = Sin(var1[19]);
  t912 = t906*t55*t110;
  t938 = t937*t372;
  t952 = t941*t392;
  t953 = t912 + t938 + t952;
  t1482 = Cos(var1[19]);
  t1483 = -1.*t1482;
  t1486 = 1. + t1483;
  t1531 = -0.8656776547239999*t1486;
  t1547 = 1. + t1531;
  t1557 = -0.930418*t1449;
  t1560 = 0. + t1557;
  t1335 = -1.*t906*t118;
  t1337 = t937*t407;
  t1341 = t941*t522;
  t1356 = t1335 + t1337 + t1341;
  t1591 = -0.366501*t1449;
  t1592 = 0. + t1591;
  t1467 = 0.366501*t1449;
  t1471 = 0. + t1467;
  t1455 = 0.930418*t1449;
  t1458 = 0. + t1455;
  t1217 = t906*t110*t59;
  t1225 = t937*t492;
  t1234 = t941*t541;
  t1248 = t1217 + t1225 + t1234;
  t1624 = -1.296332362046933e-7*var1[19];
  t1625 = -0.14128592423750855*t1486;
  t1636 = -0.045000372235*t1560;
  t1638 = t1624 + t1625 + t1636;
  t1648 = 3.2909349868922137e-7*var1[19];
  t1668 = -0.055653945343889656*t1486;
  t1672 = -0.045000372235*t1592;
  t1682 = t1648 + t1668 + t1672;
  t1687 = -0.04500040093286238*t1486;
  t1688 = -0.055653909852*t1471;
  t1696 = -0.141285834136*t1458;
  t1701 = 0. + t1687 + t1688 + t1696;
  t1580 = -0.134322983001*t1486;
  t1581 = 1. + t1580;
  t1639 = t1638*t1074;
  t1685 = t1682*t1133;
  t1707 = t1701*t1248;
  t1722 = 0. + var1[1] + t1095 + t414 + t449 + t1103 + t1105 + t1639 + t1685 + t1707;
  t1725 = -1.*t1638*t1093;
  t1727 = -1.*t1682*t1157;
  t1729 = -1.*t1701*t1356;
  t1733 = 0. + t461 + t478 + t972 + t481 + t1001 + t1023 + t1725 + t1727 + t1729;
  t1492 = -1.000000637725*t1486;
  t1496 = 1. + t1492;
  t1735 = t1547*t1074;
  t1739 = -0.340999127418*t1486*t1133;
  t1742 = t1560*t1248;
  t1745 = t1735 + t1739 + t1742;
  t1785 = -0.340999127418*t1486*t1074;
  t1791 = t1581*t1133;
  t1794 = t1592*t1248;
  t1804 = t1785 + t1791 + t1794;
  t1617 = t1547*t1093;
  t1618 = -0.340999127418*t1486*t1157;
  t1620 = t1560*t1356;
  t1621 = t1617 + t1618 + t1620;
  t1549 = t1547*t856;
  t1554 = -0.340999127418*t1486*t898;
  t1565 = t1560*t953;
  t1573 = t1549 + t1554 + t1565;
  t1758 = -0.340999127418*t1486*t1093;
  t1768 = t1581*t1157;
  t1772 = t1592*t1356;
  t1777 = t1758 + t1768 + t1772;
  t1861 = -1.*t1638*t856;
  t1862 = -1.*t1682*t898;
  t1867 = -1.*t1701*t953;
  t1871 = 0. + t32 + t1284 + t572 + t574 + t1285 + t1288 + t1861 + t1862 + t1867;
  t1878 = t1638*t1093;
  t1885 = t1682*t1157;
  t1890 = t1701*t1356;
  t1891 = 0. + var1[2] + t599 + t1261 + t608 + t1265 + t1266 + t1878 + t1885 + t1890;
  t1578 = -0.340999127418*t1486*t856;
  t1582 = t1581*t898;
  t1601 = t1592*t953;
  t1603 = t1578 + t1582 + t1601;
  t1950 = -1.*t1638*t1074;
  t1966 = -1.*t1682*t1133;
  t1973 = -1.*t1701*t1248;
  t1974 = 0. + t675 + t1368 + t678 + t699 + t1370 + t1379 + t1950 + t1966 + t1973;
  t1979 = t1638*t856;
  t1980 = t1682*t898;
  t1981 = t1701*t953;
  t1982 = 0. + var1[0] + t1358 + t705 + t706 + t1359 + t1364 + t1979 + t1980 + t1981;
  t1466 = t1458*t856;
  t1478 = t1471*t898;
  t1513 = t1496*t953;
  t1519 = t1466 + t1478 + t1513;
  t2049 = Cos(var1[20]);
  t2064 = -1.*t2049;
  t2065 = 1. + t2064;
  t2039 = Sin(var1[20]);
  t2155 = -0.930418*t2039;
  t2167 = 0. + t2155;
  t2178 = -0.366501*t2039;
  t2189 = 0. + t2178;
  t1930 = t1458*t1093;
  t1933 = t1471*t1157;
  t1935 = t1496*t1356;
  t1937 = t1930 + t1933 + t1935;
  t2094 = 0.930418*t2039;
  t2095 = 0. + t2094;
  t2041 = 0.366501*t2039;
  t2046 = 0. + t2041;
  t1822 = t1458*t1074;
  t1823 = t1471*t1133;
  t1832 = t1496*t1248;
  t1842 = t1822 + t1823 + t1832;
  t2070 = -0.134322983001*t2065;
  t2078 = 1. + t2070;
  t2202 = 0.039853038461262744*t2065;
  t2211 = -0.22023459268999998*t2167;
  t2213 = -0.086752619205*t2189;
  t2218 = 0. + t2202 + t2211 + t2213;
  t2224 = 6.295460977284962e-8*var1[20];
  t2225 = -0.22023473313910558*t2065;
  t2229 = 0.039853013046*t2095;
  t2232 = t2224 + t2225 + t2229;
  t2239 = -1.5981976069815686e-7*var1[20];
  t2241 = -0.08675267452931407*t2065;
  t2242 = 0.039853013046*t2046;
  t2253 = t2239 + t2241 + t2242;
  t2219 = -1.*t2218*t1937;
  t2238 = -1.*t2232*t1621;
  t2259 = -1.*t2253*t1777;
  t2267 = 0. + t461 + t478 + t972 + t481 + t1001 + t1023 + t1725 + t1727 + t1729 + t2219 + t2238 + t2259;
  t2103 = -0.8656776547239999*t2065;
  t2106 = 1. + t2103;
  t2317 = t2218*t1842;
  t2320 = t2232*t1745;
  t2324 = t2253*t1804;
  t2325 = 0. + var1[1] + t1095 + t414 + t449 + t1103 + t1105 + t1639 + t1685 + t1707 + t2317 + t2320 + t2324;
  t2271 = t2046*t1842;
  t2275 = -0.340999127418*t2065*t1745;
  t2282 = t2078*t1804;
  t2284 = t2271 + t2275 + t2282;
  t2331 = t2095*t1842;
  t2332 = t2106*t1745;
  t2336 = -0.340999127418*t2065*t1804;
  t2339 = t2331 + t2332 + t2336;
  t2130 = -1.000000637725*t2065;
  t2150 = 1. + t2130;
  t2048 = t2046*t1519;
  t2068 = -0.340999127418*t2065*t1573;
  t2083 = t2078*t1603;
  t2087 = t2048 + t2068 + t2083;
  t2295 = t2046*t1937;
  t2297 = -0.340999127418*t2065*t1621;
  t2301 = t2078*t1777;
  t2302 = t2295 + t2297 + t2301;
  t2374 = t2218*t1937;
  t2382 = t2232*t1621;
  t2393 = t2253*t1777;
  t2397 = 0. + var1[2] + t599 + t1261 + t608 + t1265 + t1266 + t1878 + t1885 + t1890 + t2374 + t2382 + t2393;
  t2099 = t2095*t1519;
  t2110 = t2106*t1573;
  t2112 = -0.340999127418*t2065*t1603;
  t2120 = t2099 + t2110 + t2112;
  t2344 = t2095*t1937;
  t2345 = t2106*t1621;
  t2349 = -0.340999127418*t2065*t1777;
  t2352 = t2344 + t2345 + t2349;
  t2407 = -1.*t2218*t1519;
  t2409 = -1.*t2232*t1573;
  t2411 = -1.*t2253*t1603;
  t2416 = 0. + t32 + t1284 + t572 + t574 + t1285 + t1288 + t1861 + t1862 + t1867 + t2407 + t2409 + t2411;
  t2483 = t2218*t1519;
  t2485 = t2232*t1573;
  t2491 = t2253*t1603;
  t2492 = 0. + var1[0] + t1358 + t705 + t706 + t1359 + t1364 + t1979 + t1980 + t1981 + t2483 + t2485 + t2491;
  t2494 = -1.*t2218*t1842;
  t2500 = -1.*t2232*t1745;
  t2501 = -1.*t2253*t1804;
  t2502 = 0. + t675 + t1368 + t678 + t699 + t1370 + t1379 + t1950 + t1966 + t1973 + t2494 + t2500 + t2501;
  t2573 = Sin(var1[21]);
  t2151 = t2150*t1519;
  t2173 = t2167*t1573;
  t2196 = t2189*t1603;
  t2197 = t2151 + t2173 + t2196;
  t2607 = Cos(var1[21]);
  t2612 = -1.*t2607;
  t2614 = 1. + t2612;
  t2632 = -0.134322983001*t2614;
  t2633 = 1. + t2632;
  t2642 = 0.366501*t2573;
  t2645 = 0. + t2642;
  t2456 = t2150*t1937;
  t2457 = t2167*t1621;
  t2458 = t2189*t1777;
  t2475 = t2456 + t2457 + t2458;
  t2661 = 0.930418*t2573;
  t2662 = 0. + t2661;
  t2582 = -0.930418*t2573;
  t2594 = 0. + t2582;
  t2574 = -0.366501*t2573;
  t2577 = 0. + t2574;
  t2364 = t2150*t1842;
  t2367 = t2167*t1745;
  t2368 = t2189*t1804;
  t2369 = t2364 + t2367 + t2368;
  t2679 = 5.7930615939377813e-8*var1[21];
  t2681 = -0.23261833304643187*t2614;
  t2683 = -0.262809976934*t2645;
  t2684 = t2679 + t2681 + t2683;
  t2695 = -2.281945176511838e-8*var1[21];
  t2698 = -0.5905366811997648*t2614;
  t2705 = -0.262809976934*t2662;
  t2708 = t2695 + t2698 + t2705;
  t2715 = -0.26281014453449253*t2614;
  t2716 = -0.5905363046000001*t2594;
  t2719 = -0.23261818470000004*t2577;
  t2721 = 0. + t2715 + t2716 + t2719;
  t2657 = -0.8656776547239999*t2614;
  t2658 = 1. + t2657;
  t2693 = t2684*t2284;
  t2713 = t2708*t2339;
  t2723 = t2721*t2369;
  t2725 = 0. + var1[1] + t1095 + t414 + t449 + t1103 + t1105 + t1639 + t1685 + t1707 + t2317 + t2320 + t2324 + t2693 + t2713 + t2723;
  t2729 = -1.*t2684*t2302;
  t2733 = -1.*t2708*t2352;
  t2736 = -1.*t2721*t2475;
  t2738 = 0. + t461 + t478 + t972 + t481 + t1001 + t1023 + t1725 + t1727 + t1729 + t2219 + t2238 + t2259 + t2729 + t2733 + t2736;
  t2617 = -1.000000637725*t2614;
  t2618 = 1. + t2617;
  t2739 = t2633*t2284;
  t2740 = -0.340999127418*t2614*t2339;
  t2743 = t2645*t2369;
  t2745 = t2739 + t2740 + t2743;
  t2774 = -0.340999127418*t2614*t2284;
  t2777 = t2658*t2339;
  t2782 = t2662*t2369;
  t2785 = t2774 + t2777 + t2782;
  t2668 = t2633*t2302;
  t2669 = -0.340999127418*t2614*t2352;
  t2674 = t2645*t2475;
  t2676 = t2668 + t2669 + t2674;
  t2640 = t2633*t2087;
  t2641 = -0.340999127418*t2614*t2120;
  t2646 = t2645*t2197;
  t2651 = t2640 + t2641 + t2646;
  t2761 = -0.340999127418*t2614*t2302;
  t2762 = t2658*t2352;
  t2764 = t2662*t2475;
  t2769 = t2761 + t2762 + t2764;
  t2819 = -1.*t2684*t2087;
  t2822 = -1.*t2708*t2120;
  t2824 = -1.*t2721*t2197;
  t2825 = 0. + t32 + t1284 + t572 + t574 + t1285 + t1288 + t1861 + t1862 + t1867 + t2407 + t2409 + t2411 + t2819 + t2822 + t2824;
  t2827 = t2684*t2302;
  t2830 = t2708*t2352;
  t2838 = t2721*t2475;
  t2840 = 0. + var1[2] + t599 + t1261 + t608 + t1265 + t1266 + t1878 + t1885 + t1890 + t2374 + t2382 + t2393 + t2827 + t2830 + t2838;
  t2655 = -0.340999127418*t2614*t2087;
  t2660 = t2658*t2120;
  t2663 = t2662*t2197;
  t2666 = t2655 + t2660 + t2663;
  t2898 = -1.*t2684*t2284;
  t2899 = -1.*t2708*t2339;
  t2902 = -1.*t2721*t2369;
  t2903 = 0. + t675 + t1368 + t678 + t699 + t1370 + t1379 + t1950 + t1966 + t1973 + t2494 + t2500 + t2501 + t2898 + t2899 + t2902;
  t2928 = t2684*t2087;
  t2929 = t2708*t2120;
  t2931 = t2721*t2197;
  t2933 = 0. + var1[0] + t1358 + t705 + t706 + t1359 + t1364 + t1979 + t1980 + t1981 + t2483 + t2485 + t2491 + t2928 + t2929 + t2931;
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
  p_output1[24]=-1.*t55*var1[2];
  p_output1[25]=-1.*t59*var1[2];
  p_output1[26]=t55*var1[0] + t59*var1[1];
  p_output1[27]=-1.*t59;
  p_output1[28]=t55;
  p_output1[29]=0;
  p_output1[30]=-1.*t118*var1[1] - 1.*t110*t59*var1[2];
  p_output1[31]=t118*var1[0] + t110*t55*var1[2];
  p_output1[32]=t110*t59*var1[0] - 1.*t110*t55*var1[1];
  p_output1[33]=t110*t55;
  p_output1[34]=t110*t59;
  p_output1[35]=-1.*t118;
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
  p_output1[102]=-0.091*t186 + t118*var1[1] + t110*t59*var1[2];
  p_output1[103]=-0.091*t236 - 1.*t118*var1[0] - 1.*t110*t55*var1[2];
  p_output1[104]=-0.091*t110*t172 - 1.*t110*t59*var1[0] + t110*t55*var1[1];
  p_output1[105]=0. - 1.*t110*t55;
  p_output1[106]=0. - 1.*t110*t59;
  p_output1[107]=0. + t118;
  p_output1[108]=-0.041869*t372 + 0.016493*t392 - 0.366501*(t407*t450 + t485*t492) - 0.930418*(t450*t522 + t485*t541) + 0.084668*t110*t55;
  p_output1[109]=-0.041869*t492 + 0.016493*t541 + 0.084668*t110*t59 - 0.366501*(t407*t576 + t372*t612) - 0.930418*(t522*t576 + t392*t612);
  p_output1[110]=-0.084668*t118 - 0.041869*t407 + 0.016493*t522 - 0.366501*(t372*t700 + t492*t707) - 0.930418*(t392*t700 + t541*t707);
  p_output1[111]=0. - 0.366501*t372 - 0.930418*t392;
  p_output1[112]=0. - 0.366501*t492 - 0.930418*t541;
  p_output1[113]=0. - 0.366501*t407 - 0.930418*t522;
  p_output1[114]=0.366501*(t1027*t1074 + t1093*t1108) - 0.930418*(t1027*t1133 + t1108*t1157) + 0.041869*t856 + 0.016493*t898 - 0.151852*t953;
  p_output1[115]=0.041869*t1074 + 0.016493*t1133 - 0.151852*t1248 + 0.366501*(t1093*t1292 + t1267*t856) - 0.930418*(t1157*t1292 + t1267*t898);
  p_output1[116]=0.041869*t1093 + 0.016493*t1157 - 0.151852*t1356 + 0.366501*(t1074*t1366 + t1390*t856) - 0.930418*(t1133*t1366 + t1390*t898);
  p_output1[117]=0. + 0.366501*t856 - 0.930418*t898;
  p_output1[118]=0. + 0.366501*t1074 - 0.930418*t1133;
  p_output1[119]=0. + 0.366501*t1093 - 0.930418*t1157;
  p_output1[120]=0.236705*t1519 + 0.03708*t1573 + 0.014606*t1603 - 0.366501*(t1621*t1722 + t1733*t1745) + 0.930418*(t1722*t1777 + t1733*t1804);
  p_output1[121]=0.03708*t1745 + 0.014606*t1804 + 0.236705*t1842 - 0.366501*(t1621*t1871 + t1573*t1891) + 0.930418*(t1777*t1871 + t1603*t1891);
  p_output1[122]=0.03708*t1621 + 0.014606*t1777 + 0.236705*t1937 - 0.366501*(t1573*t1974 + t1745*t1982) + 0.930418*(t1603*t1974 + t1804*t1982);
  p_output1[123]=0. - 0.366501*t1573 + 0.930418*t1603;
  p_output1[124]=0. - 0.366501*t1745 + 0.930418*t1804;
  p_output1[125]=0. - 0.366501*t1621 + 0.930418*t1777;
  p_output1[126]=-0.09632*t2087 - 0.244523*t2120 + 0.6347*t2197 + 0.930418*(t2267*t2284 + t2302*t2325) - 0.366501*(t2267*t2339 + t2325*t2352);
  p_output1[127]=-0.09632*t2284 - 0.244523*t2339 + 0.6347*t2369 + 0.930418*(t2087*t2397 + t2302*t2416) - 0.366501*(t2120*t2397 + t2352*t2416);
  p_output1[128]=-0.09632*t2302 - 0.244523*t2352 + 0.6347*t2475 + 0.930418*(t2284*t2492 + t2087*t2502) - 0.366501*(t2339*t2492 + t2120*t2502);
  p_output1[129]=0. + 0.930418*t2087 - 0.366501*t2120;
  p_output1[130]=0. + 0.930418*t2284 - 0.366501*t2339;
  p_output1[131]=0. + 0.930418*t2302 - 0.366501*t2352;
  p_output1[132]=0.884829*(t2087*t2577 + t2120*t2594 + t2197*t2618) + 0.022722*t2651 + 0.057683*t2666 + 0.930418*(t2676*t2725 + t2738*t2745) - 0.366501*(t2725*t2769 + t2738*t2785);
  p_output1[133]=0.884829*(t2284*t2577 + t2339*t2594 + t2369*t2618) + 0.022722*t2745 + 0.057683*t2785 + 0.930418*(t2676*t2825 + t2651*t2840) - 0.366501*(t2769*t2825 + t2666*t2840);
  p_output1[134]=0.884829*(t2302*t2577 + t2352*t2594 + t2475*t2618) + 0.022722*t2676 + 0.057683*t2769 + 0.930418*(t2651*t2903 + t2745*t2933) - 0.366501*(t2666*t2903 + t2785*t2933);
  p_output1[135]=0. + 0.930418*t2651 - 0.366501*t2666;
  p_output1[136]=0. + 0.930418*t2745 - 0.366501*t2785;
  p_output1[137]=0. + 0.930418*t2676 - 0.366501*t2769;
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



void Js_right_toe_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

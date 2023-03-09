/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:45:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shin_to_tarsus_right_src.h"

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
  double t159;
  double t301;
  double t318;
  double t311;
  double t328;
  double t279;
  double t285;
  double t287;
  double t342;
  double t316;
  double t331;
  double t332;
  double t293;
  double t343;
  double t344;
  double t348;
  double t142;
  double t167;
  double t171;
  double t334;
  double t370;
  double t379;
  double t434;
  double t444;
  double t450;
  double t586;
  double t618;
  double t632;
  double t174;
  double t228;
  double t247;
  double t381;
  double t382;
  double t429;
  double t468;
  double t487;
  double t493;
  double t496;
  double t498;
  double t540;
  double t565;
  double t570;
  double t574;
  double t579;
  double t649;
  double t650;
  double t652;
  double t656;
  double t669;
  double t678;
  double t681;
  double t694;
  double t698;
  double t704;
  double t742;
  double t744;
  double t745;
  double t7;
  double t86;
  double t144;
  double t146;
  double t489;
  double t490;
  double t491;
  double t584;
  double t637;
  double t643;
  double t708;
  double t715;
  double t747;
  double t816;
  double t823;
  double t833;
  double t835;
  double t841;
  double t843;
  double t856;
  double t895;
  double t902;
  double t910;
  double t917;
  double t921;
  double t926;
  double t932;
  double t936;
  double t1135;
  double t1154;
  double t1158;
  double t113;
  double t134;
  double t720;
  double t877;
  double t882;
  double t883;
  double t942;
  double t991;
  double t1045;
  double t1056;
  double t1057;
  double t1065;
  double t1080;
  double t1097;
  double t1104;
  double t1115;
  double t1189;
  double t1197;
  double t1199;
  double t1202;
  double t1207;
  double t1214;
  double t1218;
  double t1230;
  double t1257;
  double t1268;
  double t20;
  double t56;
  double t1566;
  double t1581;
  double t1584;
  double t1594;
  double t1598;
  double t1603;
  double t1589;
  double t1607;
  double t1608;
  double t1628;
  double t1630;
  double t1640;
  double t1565;
  double t1616;
  double t1642;
  double t1643;
  double t1646;
  double t1652;
  double t1656;
  double t1678;
  double t1694;
  double t1706;
  double t1709;
  double t1716;
  double t1008;
  double t1028;
  double t1645;
  double t1681;
  double t1721;
  double t1764;
  double t1774;
  double t1775;
  double t1807;
  double t1814;
  double t1818;
  double t1836;
  double t1847;
  double t1857;
  double t1163;
  double t1182;
  double t1299;
  double t1300;
  double t1765;
  double t1816;
  double t1861;
  double t1869;
  double t1881;
  double t1883;
  double t1884;
  double t1902;
  double t1335;
  double t1354;
  double t1948;
  double t1981;
  double t1982;
  double t1984;
  double t1467;
  double t1486;
  double t1491;
  double t1516;
  double t2045;
  double t2049;
  double t2056;
  double t2069;
  double t2076;
  double t2088;
  double t2037;
  double t2059;
  double t2091;
  double t2094;
  double t2108;
  double t2111;
  double t2114;
  double t2117;
  double t2125;
  double t2132;
  double t2160;
  double t2168;
  double t2102;
  double t2118;
  double t2177;
  double t2178;
  double t2198;
  double t2206;
  double t2209;
  double t2219;
  double t2232;
  double t2239;
  double t2257;
  double t2259;
  double t2190;
  double t2225;
  double t2262;
  double t2266;
  double t2271;
  double t2282;
  double t2285;
  double t2288;
  double t2322;
  double t2323;
  double t2337;
  double t2343;
  double t1000;
  double t1116;
  double t1272;
  double t1274;
  double t1316;
  double t1330;
  double t1355;
  double t1374;
  double t1395;
  double t1489;
  double t1522;
  double t1525;
  double t1877;
  double t1923;
  double t1991;
  double t1992;
  double t1996;
  double t1998;
  double t1999;
  double t2000;
  double t2017;
  double t2020;
  double t2025;
  double t2029;
  double t2270;
  double t2301;
  double t2359;
  double t2376;
  double t2382;
  double t2384;
  double t2402;
  double t2411;
  double t2414;
  double t2416;
  double t2417;
  double t2418;
  double t2528;
  double t2532;
  double t2533;
  double t2543;
  double t2560;
  double t2564;
  double t2576;
  double t2578;
  double t2584;
  double t2587;
  double t2600;
  double t2618;
  double t2619;
  double t2621;
  double t2646;
  double t2660;
  double t2663;
  double t2670;
  double t2675;
  double t2678;
  double t2688;
  double t2697;
  double t2707;
  double t2719;
  double t2721;
  double t2730;
  double t2732;
  double t2734;
  double t2736;
  double t2743;
  double t2752;
  double t2755;
  double t2758;
  double t2764;
  double t2768;
  double t2772;
  double t2773;
  double t2783;
  double t2788;
  double t2790;
  double t2791;
  double t2792;
  double t2807;
  double t2816;
  double t2819;
  double t2820;
  double t2831;
  double t2833;
  double t2838;
  double t2839;
  double t2850;
  double t2853;
  double t2854;
  double t2860;
  t159 = Cos(var1[3]);
  t301 = Cos(var1[5]);
  t318 = Sin(var1[3]);
  t311 = Sin(var1[4]);
  t328 = Sin(var1[5]);
  t279 = Cos(var1[18]);
  t285 = -1.*t279;
  t287 = 1. + t285;
  t342 = Cos(var1[17]);
  t316 = t159*t301*t311;
  t331 = t318*t328;
  t332 = t316 + t331;
  t293 = Sin(var1[17]);
  t343 = -1.*t301*t318;
  t344 = t159*t311*t328;
  t348 = t343 + t344;
  t142 = Sin(var1[19]);
  t167 = Cos(var1[4]);
  t171 = Sin(var1[18]);
  t334 = -1.*t293*t332;
  t370 = t342*t348;
  t379 = t334 + t370;
  t434 = t342*t332;
  t444 = t293*t348;
  t450 = t434 + t444;
  t586 = Cos(var1[19]);
  t618 = -1.*t586;
  t632 = 1. + t618;
  t174 = -0.366501*t171;
  t228 = 0. + t174;
  t247 = t159*t167*t228;
  t381 = 0.340999127418*t287*t379;
  t382 = -0.134322983001*t287;
  t429 = 1. + t382;
  t468 = t429*t450;
  t487 = t247 + t381 + t468;
  t493 = 0.930418*t171;
  t496 = 0. + t493;
  t498 = t159*t167*t496;
  t540 = -0.8656776547239999*t287;
  t565 = 1. + t540;
  t570 = t565*t379;
  t574 = 0.340999127418*t287*t450;
  t579 = t498 + t570 + t574;
  t649 = -1.000000637725*t287;
  t650 = 1. + t649;
  t652 = t650*t159*t167;
  t656 = -0.930418*t171;
  t669 = 0. + t656;
  t678 = t669*t379;
  t681 = 0.366501*t171;
  t694 = 0. + t681;
  t698 = t694*t450;
  t704 = t652 + t678 + t698;
  t742 = Cos(var1[20]);
  t744 = -1.*t742;
  t745 = 1. + t744;
  t7 = Sin(var1[21]);
  t86 = Sin(var1[20]);
  t144 = 0.930418*t142;
  t146 = 0. + t144;
  t489 = t146*t487;
  t490 = 0.366501*t142;
  t491 = 0. + t490;
  t584 = t491*t579;
  t637 = -1.000000637725*t632;
  t643 = 1. + t637;
  t708 = t643*t704;
  t715 = t489 + t584 + t708;
  t747 = -0.8656776547239999*t632;
  t816 = 1. + t747;
  t823 = t816*t487;
  t833 = -0.340999127418*t632*t579;
  t835 = -0.930418*t142;
  t841 = 0. + t835;
  t843 = t841*t704;
  t856 = t823 + t833 + t843;
  t895 = -0.340999127418*t632*t487;
  t902 = -0.134322983001*t632;
  t910 = 1. + t902;
  t917 = t910*t579;
  t921 = -0.366501*t142;
  t926 = 0. + t921;
  t932 = t926*t704;
  t936 = t895 + t917 + t932;
  t1135 = Cos(var1[21]);
  t1154 = -1.*t1135;
  t1158 = 1. + t1154;
  t113 = 0.366501*t86;
  t134 = 0. + t113;
  t720 = t134*t715;
  t877 = -0.340999127418*t745*t856;
  t882 = -0.134322983001*t745;
  t883 = 1. + t882;
  t942 = t883*t936;
  t991 = t720 + t877 + t942;
  t1045 = 0.930418*t86;
  t1056 = 0. + t1045;
  t1057 = t1056*t715;
  t1065 = -0.8656776547239999*t745;
  t1080 = 1. + t1065;
  t1097 = t1080*t856;
  t1104 = -0.340999127418*t745*t936;
  t1115 = t1057 + t1097 + t1104;
  t1189 = -1.000000637725*t745;
  t1197 = 1. + t1189;
  t1199 = t1197*t715;
  t1202 = -0.930418*t86;
  t1207 = 0. + t1202;
  t1214 = t1207*t856;
  t1218 = -0.366501*t86;
  t1230 = 0. + t1218;
  t1257 = t1230*t936;
  t1268 = t1199 + t1214 + t1257;
  t20 = -0.366501*t7;
  t56 = 0. + t20;
  t1566 = t301*t318*t311;
  t1581 = -1.*t159*t328;
  t1584 = t1566 + t1581;
  t1594 = t159*t301;
  t1598 = t318*t311*t328;
  t1603 = t1594 + t1598;
  t1589 = -1.*t293*t1584;
  t1607 = t342*t1603;
  t1608 = t1589 + t1607;
  t1628 = t342*t1584;
  t1630 = t293*t1603;
  t1640 = t1628 + t1630;
  t1565 = t167*t228*t318;
  t1616 = 0.340999127418*t287*t1608;
  t1642 = t429*t1640;
  t1643 = t1565 + t1616 + t1642;
  t1646 = t167*t496*t318;
  t1652 = t565*t1608;
  t1656 = 0.340999127418*t287*t1640;
  t1678 = t1646 + t1652 + t1656;
  t1694 = t650*t167*t318;
  t1706 = t669*t1608;
  t1709 = t694*t1640;
  t1716 = t1694 + t1706 + t1709;
  t1008 = -0.930418*t7;
  t1028 = 0. + t1008;
  t1645 = t146*t1643;
  t1681 = t491*t1678;
  t1721 = t643*t1716;
  t1764 = t1645 + t1681 + t1721;
  t1774 = t816*t1643;
  t1775 = -0.340999127418*t632*t1678;
  t1807 = t841*t1716;
  t1814 = t1774 + t1775 + t1807;
  t1818 = -0.340999127418*t632*t1643;
  t1836 = t910*t1678;
  t1847 = t926*t1716;
  t1857 = t1818 + t1836 + t1847;
  t1163 = -1.000000637725*t1158;
  t1182 = 1. + t1163;
  t1299 = -0.134322983001*t1158;
  t1300 = 1. + t1299;
  t1765 = t134*t1764;
  t1816 = -0.340999127418*t745*t1814;
  t1861 = t883*t1857;
  t1869 = t1765 + t1816 + t1861;
  t1881 = t1056*t1764;
  t1883 = t1080*t1814;
  t1884 = -0.340999127418*t745*t1857;
  t1902 = t1881 + t1883 + t1884;
  t1335 = 0.366501*t7;
  t1354 = 0. + t1335;
  t1948 = t1197*t1764;
  t1981 = t1207*t1814;
  t1982 = t1230*t1857;
  t1984 = t1948 + t1981 + t1982;
  t1467 = -0.8656776547239999*t1158;
  t1486 = 1. + t1467;
  t1491 = 0.930418*t7;
  t1516 = 0. + t1491;
  t2045 = -1.*t167*t301*t293;
  t2049 = t342*t167*t328;
  t2056 = t2045 + t2049;
  t2069 = t342*t167*t301;
  t2076 = t167*t293*t328;
  t2088 = t2069 + t2076;
  t2037 = -1.*t228*t311;
  t2059 = 0.340999127418*t287*t2056;
  t2091 = t429*t2088;
  t2094 = t2037 + t2059 + t2091;
  t2108 = -1.*t496*t311;
  t2111 = t565*t2056;
  t2114 = 0.340999127418*t287*t2088;
  t2117 = t2108 + t2111 + t2114;
  t2125 = -1.*t650*t311;
  t2132 = t669*t2056;
  t2160 = t694*t2088;
  t2168 = t2125 + t2132 + t2160;
  t2102 = t146*t2094;
  t2118 = t491*t2117;
  t2177 = t643*t2168;
  t2178 = t2102 + t2118 + t2177;
  t2198 = t816*t2094;
  t2206 = -0.340999127418*t632*t2117;
  t2209 = t841*t2168;
  t2219 = t2198 + t2206 + t2209;
  t2232 = -0.340999127418*t632*t2094;
  t2239 = t910*t2117;
  t2257 = t926*t2168;
  t2259 = t2232 + t2239 + t2257;
  t2190 = t134*t2178;
  t2225 = -0.340999127418*t745*t2219;
  t2262 = t883*t2259;
  t2266 = t2190 + t2225 + t2262;
  t2271 = t1056*t2178;
  t2282 = t1080*t2219;
  t2285 = -0.340999127418*t745*t2259;
  t2288 = t2271 + t2282 + t2285;
  t2322 = t1197*t2178;
  t2323 = t1207*t2219;
  t2337 = t1230*t2259;
  t2343 = t2322 + t2323 + t2337;
  t1000 = t56*t991;
  t1116 = t1028*t1115;
  t1272 = t1182*t1268;
  t1274 = t1000 + t1116 + t1272;
  t1316 = t1300*t991;
  t1330 = -0.340999127418*t1158*t1115;
  t1355 = t1354*t1268;
  t1374 = t1316 + t1330 + t1355;
  t1395 = -0.340999127418*t1158*t991;
  t1489 = t1486*t1115;
  t1522 = t1516*t1268;
  t1525 = t1395 + t1489 + t1522;
  t1877 = t56*t1869;
  t1923 = t1028*t1902;
  t1991 = t1182*t1984;
  t1992 = t1877 + t1923 + t1991;
  t1996 = t1300*t1869;
  t1998 = -0.340999127418*t1158*t1902;
  t1999 = t1354*t1984;
  t2000 = t1996 + t1998 + t1999;
  t2017 = -0.340999127418*t1158*t1869;
  t2020 = t1486*t1902;
  t2025 = t1516*t1984;
  t2029 = t2017 + t2020 + t2025;
  t2270 = t56*t2266;
  t2301 = t1028*t2288;
  t2359 = t1182*t2343;
  t2376 = t2270 + t2301 + t2359;
  t2382 = t1300*t2266;
  t2384 = -0.340999127418*t1158*t2288;
  t2402 = t1354*t2343;
  t2411 = t2382 + t2384 + t2402;
  t2414 = -0.340999127418*t1158*t2266;
  t2416 = t1486*t2288;
  t2417 = t1516*t2343;
  t2418 = t2414 + t2416 + t2417;
  t2528 = -0.04500040093286238*t287;
  t2532 = -0.07877663122399998*t669;
  t2533 = 0.031030906668*t694;
  t2543 = 0. + t2528 + t2532 + t2533;
  t2560 = -0.091*t293;
  t2564 = 0. + t2560;
  t2576 = -1.*t342;
  t2578 = 1. + t2576;
  t2584 = -0.091*t2578;
  t2587 = 0. + t2584;
  t2600 = 1.296332362046933e-7*var1[18];
  t2618 = -0.07877668146182712*t287;
  t2619 = -0.045000372235*t496;
  t2621 = t2600 + t2618 + t2619;
  t2646 = 3.2909349868922137e-7*var1[18];
  t2660 = 0.03103092645718495*t287;
  t2663 = -0.045000372235*t228;
  t2670 = t2646 + t2660 + t2663;
  t2675 = -1.296332362046933e-7*var1[19];
  t2678 = -0.14128592423750855*t632;
  t2688 = -0.045000372235*t841;
  t2697 = t2675 + t2678 + t2688;
  t2707 = 3.2909349868922137e-7*var1[19];
  t2719 = -0.055653945343889656*t632;
  t2721 = -0.045000372235*t926;
  t2730 = t2707 + t2719 + t2721;
  t2732 = -0.04500040093286238*t632;
  t2734 = -0.055653909852*t491;
  t2736 = -0.141285834136*t146;
  t2743 = 0. + t2732 + t2734 + t2736;
  t2752 = 0.039853038461262744*t745;
  t2755 = -0.22023459268999998*t1207;
  t2758 = -0.086752619205*t1230;
  t2764 = 0. + t2752 + t2755 + t2758;
  t2768 = 6.295460977284962e-8*var1[20];
  t2772 = -0.22023473313910558*t745;
  t2773 = 0.039853013046*t1056;
  t2783 = t2768 + t2772 + t2773;
  t2788 = -1.5981976069815686e-7*var1[20];
  t2790 = -0.08675267452931407*t745;
  t2791 = 0.039853013046*t134;
  t2792 = t2788 + t2790 + t2791;
  t2807 = 5.7930615939377813e-8*var1[21];
  t2816 = -0.23261833304643187*t1158;
  t2819 = -0.262809976934*t1354;
  t2820 = t2807 + t2816 + t2819;
  t2831 = -2.281945176511838e-8*var1[21];
  t2833 = -0.5905366811997648*t1158;
  t2838 = -0.262809976934*t1516;
  t2839 = t2831 + t2833 + t2838;
  t2850 = -0.26281014453449253*t1158;
  t2853 = -0.5905363046000001*t1028;
  t2854 = -0.23261818470000004*t56;
  t2860 = 0. + t2850 + t2853 + t2854;
  p_output1[0]=0.848048*t1274 - 0.194216*t1374 - 0.493047*t1525;
  p_output1[1]=0.848048*t1992 - 0.194216*t2000 - 0.493047*t2029;
  p_output1[2]=0.848048*t2376 - 0.194216*t2411 - 0.493047*t2418;
  p_output1[3]=0.;
  p_output1[4]=-0.529919*t1274 - 0.310811*t1374 - 0.789039*t1525;
  p_output1[5]=-0.529919*t1992 - 0.310811*t2000 - 0.789039*t2029;
  p_output1[6]=-0.529919*t2376 - 0.310811*t2411 - 0.789039*t2418;
  p_output1[7]=0.;
  p_output1[8]=0.930418*t1374 - 0.366501*t1525;
  p_output1[9]=0.930418*t2000 - 0.366501*t2029;
  p_output1[10]=0.930418*t2411 - 0.366501*t2418;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.26281*t1274 - 0.310929*t1374 - 0.559688*t1525 + t159*t167*t2543 + t1115*t2839 + t1268*t2860 + t2564*t332 + t2587*t348 + t2621*t379 + t2670*t450 + t2697*t487 + t2730*t579 + t2743*t704 + t2764*t715 + t2783*t856 + t2792*t936 + t2820*t991 + var1[0];
  p_output1[13]=0. - 0.26281*t1992 - 0.310929*t2000 - 0.559688*t2029 + t1584*t2564 + t1603*t2587 + t1608*t2621 + t1640*t2670 + t1643*t2697 + t1678*t2730 + t1716*t2743 + t1764*t2764 + t1814*t2783 + t1857*t2792 + t1869*t2820 + t1902*t2839 + t1984*t2860 + t167*t2543*t318 + var1[1];
  p_output1[14]=0. - 0.26281*t2376 - 0.310929*t2411 - 0.559688*t2418 + t2056*t2621 + t2088*t2670 + t2094*t2697 + t2117*t2730 + t2168*t2743 + t2178*t2764 + t2219*t2783 + t2259*t2792 + t2266*t2820 + t2288*t2839 + t2343*t2860 + t167*t2564*t301 - 1.*t2543*t311 + t167*t2587*t328 + var1[2];
  p_output1[15]=1.;
}



void T_shin_to_tarsus_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
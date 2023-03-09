/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_elbow_src.h"

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
  double t204;
  double t311;
  double t328;
  double t323;
  double t345;
  double t270;
  double t271;
  double t297;
  double t382;
  double t326;
  double t353;
  double t360;
  double t310;
  double t432;
  double t433;
  double t435;
  double t64;
  double t67;
  double t95;
  double t131;
  double t236;
  double t240;
  double t368;
  double t437;
  double t454;
  double t474;
  double t477;
  double t479;
  double t259;
  double t262;
  double t265;
  double t460;
  double t462;
  double t470;
  double t480;
  double t483;
  double t535;
  double t536;
  double t537;
  double t547;
  double t554;
  double t564;
  double t572;
  double t584;
  double t98;
  double t609;
  double t634;
  double t641;
  double t646;
  double t651;
  double t659;
  double t694;
  double t703;
  double t712;
  double t713;
  double t753;
  double t774;
  double t801;
  double t832;
  double t497;
  double t8;
  double t134;
  double t170;
  double t486;
  double t499;
  double t533;
  double t587;
  double t602;
  double t608;
  double t716;
  double t722;
  double t813;
  double t816;
  double t824;
  double t847;
  double t849;
  double t920;
  double t926;
  double t928;
  double t936;
  double t950;
  double t1005;
  double t1010;
  double t1011;
  double t1014;
  double t1018;
  double t1019;
  double t1022;
  double t1024;
  double t1025;
  double t1028;
  double t16;
  double t22;
  double t1192;
  double t1196;
  double t1204;
  double t1238;
  double t1239;
  double t1258;
  double t1216;
  double t1261;
  double t1266;
  double t1289;
  double t1303;
  double t1306;
  double t1189;
  double t1276;
  double t1316;
  double t1317;
  double t1323;
  double t1324;
  double t1329;
  double t1352;
  double t1372;
  double t1377;
  double t1383;
  double t1387;
  double t972;
  double t1003;
  double t1050;
  double t1053;
  double t1319;
  double t1358;
  double t1403;
  double t1415;
  double t1079;
  double t1093;
  double t1433;
  double t1452;
  double t1481;
  double t1487;
  double t1504;
  double t1511;
  double t1530;
  double t1532;
  double t1114;
  double t1115;
  double t1132;
  double t1136;
  double t1143;
  double t1151;
  double t1621;
  double t1624;
  double t1627;
  double t1668;
  double t1671;
  double t1679;
  double t1618;
  double t1656;
  double t1689;
  double t1695;
  double t1698;
  double t1702;
  double t1719;
  double t1762;
  double t1777;
  double t1782;
  double t1787;
  double t1793;
  double t1697;
  double t1764;
  double t1794;
  double t1805;
  double t1827;
  double t1828;
  double t1838;
  double t1849;
  double t1898;
  double t1915;
  double t1941;
  double t1950;
  double t751;
  double t969;
  double t1031;
  double t1032;
  double t1066;
  double t1094;
  double t1095;
  double t1100;
  double t1123;
  double t1141;
  double t1153;
  double t1170;
  double t1422;
  double t1497;
  double t1541;
  double t1555;
  double t1578;
  double t1581;
  double t1583;
  double t1586;
  double t1592;
  double t1595;
  double t1596;
  double t1601;
  double t1825;
  double t1874;
  double t1961;
  double t1996;
  double t2007;
  double t2024;
  double t2025;
  double t2026;
  double t2039;
  double t2040;
  double t2043;
  double t2044;
  double t2272;
  double t2282;
  double t2447;
  double t2534;
  double t2466;
  double t2224;
  double t2227;
  double t2242;
  double t2249;
  double t2289;
  double t2297;
  double t2299;
  double t2304;
  double t2307;
  double t2316;
  double t2341;
  double t2350;
  double t2368;
  double t2369;
  double t2386;
  double t2393;
  double t2402;
  double t2405;
  double t2415;
  double t2437;
  double t2451;
  double t2458;
  double t2467;
  double t2493;
  double t2498;
  double t2503;
  double t2532;
  double t2549;
  double t2552;
  double t2556;
  double t2557;
  double t2558;
  double t2569;
  double t2570;
  double t2581;
  double t2584;
  double t2587;
  double t2593;
  double t2605;
  double t2617;
  double t2624;
  double t2637;
  double t2638;
  double t2650;
  double t2654;
  double t2683;
  double t2687;
  double t2705;
  double t2708;
  double t2710;
  double t2713;
  t204 = Cos(var1[3]);
  t311 = Cos(var1[5]);
  t328 = Sin(var1[3]);
  t323 = Sin(var1[4]);
  t345 = Sin(var1[5]);
  t270 = Cos(var1[25]);
  t271 = -1.*t270;
  t297 = 1. + t271;
  t382 = Cos(var1[24]);
  t326 = t204*t311*t323;
  t353 = t328*t345;
  t360 = t326 + t353;
  t310 = Sin(var1[24]);
  t432 = -1.*t311*t328;
  t433 = t204*t323*t345;
  t435 = t432 + t433;
  t64 = Cos(var1[26]);
  t67 = -1.*t64;
  t95 = 1. + t67;
  t131 = Sin(var1[26]);
  t236 = Cos(var1[4]);
  t240 = Sin(var1[25]);
  t368 = -1.*t310*t360;
  t437 = t382*t435;
  t454 = t368 + t437;
  t474 = t382*t360;
  t477 = t310*t435;
  t479 = t474 + t477;
  t259 = -0.994522*t240;
  t262 = 0. + t259;
  t265 = t204*t236*t262;
  t460 = -0.103955395616*t297*t454;
  t462 = -0.9890740084840001*t297;
  t470 = 1. + t462;
  t480 = t470*t479;
  t483 = t265 + t460 + t480;
  t535 = -0.104528*t240;
  t536 = 0. + t535;
  t537 = t204*t236*t536;
  t547 = -0.010926102783999999*t297;
  t554 = 1. + t547;
  t564 = t554*t454;
  t572 = -0.103955395616*t297*t479;
  t584 = t537 + t564 + t572;
  t98 = -0.49726168403800003*t95;
  t609 = -1.0000001112680001*t297;
  t634 = 1. + t609;
  t641 = t634*t204*t236;
  t646 = 0.104528*t240;
  t651 = 0. + t646;
  t659 = t651*t454;
  t694 = 0.994522*t240;
  t703 = 0. + t694;
  t712 = t703*t479;
  t713 = t641 + t659 + t712;
  t753 = Cos(var1[27]);
  t774 = -1.*t753;
  t801 = 1. + t774;
  t832 = 0.051978134642000004*t95;
  t497 = -0.05226439969100001*t95;
  t8 = Sin(var1[27]);
  t134 = 0.073913*t131;
  t170 = t98 + t134;
  t486 = t170*t483;
  t499 = -0.703234*t131;
  t533 = t497 + t499;
  t587 = t533*t584;
  t602 = -0.500001190325*t95;
  t608 = 1. + t602;
  t716 = t608*t713;
  t722 = t486 + t587 + t716;
  t813 = -0.5054634410180001*t95;
  t816 = 1. + t813;
  t824 = t816*t483;
  t847 = -0.707107*t131;
  t849 = t832 + t847;
  t920 = t849*t584;
  t926 = -0.073913*t131;
  t928 = t98 + t926;
  t936 = t928*t713;
  t950 = t824 + t920 + t936;
  t1005 = 0.707107*t131;
  t1010 = t832 + t1005;
  t1011 = t1010*t483;
  t1014 = -0.9945383682050002*t95;
  t1018 = 1. + t1014;
  t1019 = t1018*t584;
  t1022 = 0.703234*t131;
  t1024 = t497 + t1022;
  t1025 = t1024*t713;
  t1028 = t1011 + t1019 + t1025;
  t16 = -0.104528*t8;
  t22 = 0. + t16;
  t1192 = t311*t328*t323;
  t1196 = -1.*t204*t345;
  t1204 = t1192 + t1196;
  t1238 = t204*t311;
  t1239 = t328*t323*t345;
  t1258 = t1238 + t1239;
  t1216 = -1.*t310*t1204;
  t1261 = t382*t1258;
  t1266 = t1216 + t1261;
  t1289 = t382*t1204;
  t1303 = t310*t1258;
  t1306 = t1289 + t1303;
  t1189 = t236*t262*t328;
  t1276 = -0.103955395616*t297*t1266;
  t1316 = t470*t1306;
  t1317 = t1189 + t1276 + t1316;
  t1323 = t236*t536*t328;
  t1324 = t554*t1266;
  t1329 = -0.103955395616*t297*t1306;
  t1352 = t1323 + t1324 + t1329;
  t1372 = t634*t236*t328;
  t1377 = t651*t1266;
  t1383 = t703*t1306;
  t1387 = t1372 + t1377 + t1383;
  t972 = -0.010926102783999999*t801;
  t1003 = 1. + t972;
  t1050 = -0.994522*t8;
  t1053 = 0. + t1050;
  t1319 = t170*t1317;
  t1358 = t533*t1352;
  t1403 = t608*t1387;
  t1415 = t1319 + t1358 + t1403;
  t1079 = -0.9890740084840001*t801;
  t1093 = 1. + t1079;
  t1433 = t816*t1317;
  t1452 = t849*t1352;
  t1481 = t928*t1387;
  t1487 = t1433 + t1452 + t1481;
  t1504 = t1010*t1317;
  t1511 = t1018*t1352;
  t1530 = t1024*t1387;
  t1532 = t1504 + t1511 + t1530;
  t1114 = -1.0000001112680001*t801;
  t1115 = 1. + t1114;
  t1132 = 0.994522*t8;
  t1136 = 0. + t1132;
  t1143 = 0.104528*t8;
  t1151 = 0. + t1143;
  t1621 = -1.*t236*t311*t310;
  t1624 = t382*t236*t345;
  t1627 = t1621 + t1624;
  t1668 = t382*t236*t311;
  t1671 = t236*t310*t345;
  t1679 = t1668 + t1671;
  t1618 = -1.*t262*t323;
  t1656 = -0.103955395616*t297*t1627;
  t1689 = t470*t1679;
  t1695 = t1618 + t1656 + t1689;
  t1698 = -1.*t536*t323;
  t1702 = t554*t1627;
  t1719 = -0.103955395616*t297*t1679;
  t1762 = t1698 + t1702 + t1719;
  t1777 = -1.*t634*t323;
  t1782 = t651*t1627;
  t1787 = t703*t1679;
  t1793 = t1777 + t1782 + t1787;
  t1697 = t170*t1695;
  t1764 = t533*t1762;
  t1794 = t608*t1793;
  t1805 = t1697 + t1764 + t1794;
  t1827 = t816*t1695;
  t1828 = t849*t1762;
  t1838 = t928*t1793;
  t1849 = t1827 + t1828 + t1838;
  t1898 = t1010*t1695;
  t1915 = t1018*t1762;
  t1941 = t1024*t1793;
  t1950 = t1898 + t1915 + t1941;
  t751 = t22*t722;
  t969 = -0.103955395616*t801*t950;
  t1031 = t1003*t1028;
  t1032 = t751 + t969 + t1031;
  t1066 = t1053*t722;
  t1094 = t1093*t950;
  t1095 = -0.103955395616*t801*t1028;
  t1100 = t1066 + t1094 + t1095;
  t1123 = t1115*t722;
  t1141 = t1136*t950;
  t1153 = t1151*t1028;
  t1170 = t1123 + t1141 + t1153;
  t1422 = t22*t1415;
  t1497 = -0.103955395616*t801*t1487;
  t1541 = t1003*t1532;
  t1555 = t1422 + t1497 + t1541;
  t1578 = t1053*t1415;
  t1581 = t1093*t1487;
  t1583 = -0.103955395616*t801*t1532;
  t1586 = t1578 + t1581 + t1583;
  t1592 = t1115*t1415;
  t1595 = t1136*t1487;
  t1596 = t1151*t1532;
  t1601 = t1592 + t1595 + t1596;
  t1825 = t22*t1805;
  t1874 = -0.103955395616*t801*t1849;
  t1961 = t1003*t1950;
  t1996 = t1825 + t1874 + t1961;
  t2007 = t1053*t1805;
  t2024 = t1093*t1849;
  t2025 = -0.103955395616*t801*t1950;
  t2026 = t2007 + t2024 + t2025;
  t2039 = t1115*t1805;
  t2040 = t1136*t1849;
  t2043 = t1151*t1950;
  t2044 = t2039 + t2040 + t2043;
  t2272 = -1.*t382;
  t2282 = 1. + t2272;
  t2447 = -0.051978134642000004*t95;
  t2534 = 0.05226439969100001*t95;
  t2466 = 0.49726168403800003*t95;
  t2224 = -0.056500534356700764*t297;
  t2227 = 0.040271188976*t651;
  t2242 = 0.38315650737400003*t703;
  t2249 = 0. + t2224 + t2227 + t2242;
  t2289 = 0.4*t2282;
  t2297 = -0.12*t310;
  t2299 = 0. + t2289 + t2297;
  t2304 = -0.12*t2282;
  t2307 = -0.4*t310;
  t2316 = 0. + t2304 + t2307;
  t2341 = 1.1345904784751044e-7*var1[25];
  t2350 = 0.04027119345689465*t297;
  t2368 = -0.05650052807*t536;
  t2369 = t2341 + t2350 + t2368;
  t2386 = -1.1924972351948546e-8*var1[25];
  t2393 = 0.38315655000705834*t297;
  t2402 = -0.05650052807*t262;
  t2405 = t2386 + t2393 + t2402;
  t2415 = 1.5601527583902087e-7*var1[26];
  t2437 = 0.09582494577057615*t95;
  t2451 = t2447 + t847;
  t2458 = -0.231098203479*t2451;
  t2467 = t2466 + t926;
  t2493 = 0.164383620275*t2467;
  t2498 = t2415 + t2437 + t2458 + t2493;
  t2503 = 1.639789470231751e-8*var1[26];
  t2532 = -0.22983603018311177*t95;
  t2549 = t2534 + t1022;
  t2552 = 0.164383620275*t2549;
  t2556 = t2447 + t1005;
  t2557 = 0.18957839082800002*t2556;
  t2558 = t2503 + t2532 + t2552 + t2557;
  t2569 = -1.568745163810375e-7*var1[26];
  t2570 = 0.08219200580743281*t95;
  t2581 = t2534 + t499;
  t2584 = -0.231098203479*t2581;
  t2587 = t2466 + t134;
  t2593 = 0.18957839082800002*t2587;
  t2605 = t2569 + t2570 + t2584 + t2593;
  t2617 = 0.19098732144477495*t801;
  t2624 = 0.014401763312*t1151;
  t2637 = 0.137024246638*t1136;
  t2638 = 0. + t2617 + t2624 + t2637;
  t2650 = 5.06291820800569e-8*var1[27];
  t2654 = 0.13702426188441388*t801;
  t2683 = 0.190987300194*t1053;
  t2687 = t2650 + t2654 + t2683;
  t2705 = -4.817066759205414e-7*var1[27];
  t2708 = 0.0144017649144554*t801;
  t2710 = 0.190987300194*t22;
  t2713 = t2705 + t2708 + t2710;
  p_output1[0]=0.040001*t1032 + 0.380588*t1100 + 0.92388*t1170;
  p_output1[1]=0.040001*t1555 + 0.380588*t1586 + 0.92388*t1601;
  p_output1[2]=0.040001*t1996 + 0.380588*t2026 + 0.92388*t2044;
  p_output1[3]=0.;
  p_output1[4]=0.096572*t1032 + 0.918819*t1100 - 0.382684*t1170;
  p_output1[5]=0.096572*t1555 + 0.918819*t1586 - 0.382684*t1601;
  p_output1[6]=0.096572*t1996 + 0.918819*t2026 - 0.382684*t2044;
  p_output1[7]=0.;
  p_output1[8]=-0.994522*t1032 + 0.104528*t1100;
  p_output1[9]=-0.994522*t1555 + 0.104528*t1586;
  p_output1[10]=-0.994522*t1996 + 0.104528*t2026;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.250125*t1032 + 0.206868*t1100 + 0.290567*t1170 + t204*t2249*t236 + t1028*t2713 + t2299*t360 + t2316*t435 + t2369*t454 + t2405*t479 + t2498*t483 + t2558*t584 + t2605*t713 + t2638*t722 + t2687*t950 + var1[0];
  p_output1[13]=0. - 0.250125*t1555 + 0.206868*t1586 + 0.290567*t1601 + t1204*t2299 + t1258*t2316 + t1266*t2369 + t1306*t2405 + t1317*t2498 + t1352*t2558 + t1387*t2605 + t1415*t2638 + t1487*t2687 + t1532*t2713 + t2249*t236*t328 + var1[1];
  p_output1[14]=0. - 0.250125*t1996 + 0.206868*t2026 + 0.290567*t2044 + t1627*t2369 + t1679*t2405 + t1695*t2498 + t1762*t2558 + t1793*t2605 + t1805*t2638 + t1849*t2687 + t1950*t2713 + t2299*t236*t311 - 1.*t2249*t323 + t2316*t236*t345 + var1[2];
  p_output1[15]=1.;
}



void T_right_elbow_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

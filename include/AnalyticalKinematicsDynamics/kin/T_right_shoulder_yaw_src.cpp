/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_shoulder_yaw_src.h"

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
  double t220;
  double t405;
  double t419;
  double t412;
  double t421;
  double t361;
  double t367;
  double t372;
  double t445;
  double t417;
  double t430;
  double t432;
  double t400;
  double t447;
  double t486;
  double t493;
  double t80;
  double t85;
  double t117;
  double t149;
  double t283;
  double t290;
  double t433;
  double t497;
  double t499;
  double t582;
  double t596;
  double t599;
  double t330;
  double t335;
  double t345;
  double t520;
  double t548;
  double t579;
  double t606;
  double t608;
  double t698;
  double t711;
  double t734;
  double t736;
  double t758;
  double t762;
  double t767;
  double t768;
  double t127;
  double t823;
  double t829;
  double t861;
  double t866;
  double t870;
  double t887;
  double t889;
  double t928;
  double t963;
  double t978;
  double t1148;
  double t655;
  double t154;
  double t168;
  double t1423;
  double t1440;
  double t1450;
  double t1495;
  double t1521;
  double t1524;
  double t658;
  double t666;
  double t1451;
  double t1536;
  double t1538;
  double t1543;
  double t1563;
  double t1577;
  double t786;
  double t804;
  double t1101;
  double t1107;
  double t1403;
  double t1539;
  double t1586;
  double t1587;
  double t1149;
  double t1155;
  double t1633;
  double t1634;
  double t1644;
  double t1645;
  double t1206;
  double t1209;
  double t1668;
  double t1670;
  double t1684;
  double t1712;
  double t1244;
  double t1271;
  double t1276;
  double t1289;
  double t1344;
  double t1348;
  double t1857;
  double t1859;
  double t1866;
  double t1873;
  double t1874;
  double t1875;
  double t1845;
  double t1867;
  double t1882;
  double t1897;
  double t1905;
  double t1913;
  double t1929;
  double t1954;
  double t1972;
  double t1984;
  double t1996;
  double t2018;
  double t1117;
  double t1195;
  double t1214;
  double t1232;
  double t1273;
  double t1336;
  double t1352;
  double t1387;
  double t1745;
  double t1749;
  double t1756;
  double t1758;
  double t1762;
  double t1793;
  double t1796;
  double t1797;
  double t2029;
  double t2047;
  double t2085;
  double t2098;
  double t2147;
  double t2168;
  double t2175;
  double t2189;
  double t641;
  double t774;
  double t1017;
  double t1059;
  double t1085;
  double t1619;
  double t1647;
  double t1713;
  double t1714;
  double t1720;
  double t1899;
  double t1963;
  double t2020;
  double t2021;
  double t2028;
  double t2495;
  double t2502;
  double t2764;
  double t2831;
  double t2783;
  double t2446;
  double t2447;
  double t2467;
  double t2475;
  double t2510;
  double t2512;
  double t2519;
  double t2531;
  double t2545;
  double t2553;
  double t2557;
  double t2558;
  double t2564;
  double t2608;
  double t2628;
  double t2659;
  double t2672;
  double t2713;
  double t2744;
  double t2757;
  double t2770;
  double t2775;
  double t2788;
  double t2802;
  double t2807;
  double t2820;
  double t2821;
  double t2871;
  double t2873;
  double t2884;
  double t2893;
  double t2899;
  double t2913;
  double t2928;
  double t2933;
  double t2938;
  double t2942;
  double t2943;
  double t2987;
  t220 = Cos(var1[3]);
  t405 = Cos(var1[5]);
  t419 = Sin(var1[3]);
  t412 = Sin(var1[4]);
  t421 = Sin(var1[5]);
  t361 = Cos(var1[25]);
  t367 = -1.*t361;
  t372 = 1. + t367;
  t445 = Cos(var1[24]);
  t417 = t220*t405*t412;
  t430 = t419*t421;
  t432 = t417 + t430;
  t400 = Sin(var1[24]);
  t447 = -1.*t405*t419;
  t486 = t220*t412*t421;
  t493 = t447 + t486;
  t80 = Cos(var1[26]);
  t85 = -1.*t80;
  t117 = 1. + t85;
  t149 = Sin(var1[26]);
  t283 = Cos(var1[4]);
  t290 = Sin(var1[25]);
  t433 = -1.*t400*t432;
  t497 = t445*t493;
  t499 = t433 + t497;
  t582 = t445*t432;
  t596 = t400*t493;
  t599 = t582 + t596;
  t330 = -0.994522*t290;
  t335 = 0. + t330;
  t345 = t220*t283*t335;
  t520 = -0.103955395616*t372*t499;
  t548 = -0.9890740084840001*t372;
  t579 = 1. + t548;
  t606 = t579*t599;
  t608 = t345 + t520 + t606;
  t698 = -0.104528*t290;
  t711 = 0. + t698;
  t734 = t220*t283*t711;
  t736 = -0.010926102783999999*t372;
  t758 = 1. + t736;
  t762 = t758*t499;
  t767 = -0.103955395616*t372*t599;
  t768 = t734 + t762 + t767;
  t127 = -0.49726168403800003*t117;
  t823 = -1.0000001112680001*t372;
  t829 = 1. + t823;
  t861 = t829*t220*t283;
  t866 = 0.104528*t290;
  t870 = 0. + t866;
  t887 = t870*t499;
  t889 = 0.994522*t290;
  t928 = 0. + t889;
  t963 = t928*t599;
  t978 = t861 + t887 + t963;
  t1148 = 0.051978134642000004*t117;
  t655 = -0.05226439969100001*t117;
  t154 = 0.073913*t149;
  t168 = t127 + t154;
  t1423 = t405*t419*t412;
  t1440 = -1.*t220*t421;
  t1450 = t1423 + t1440;
  t1495 = t220*t405;
  t1521 = t419*t412*t421;
  t1524 = t1495 + t1521;
  t658 = -0.703234*t149;
  t666 = t655 + t658;
  t1451 = -1.*t400*t1450;
  t1536 = t445*t1524;
  t1538 = t1451 + t1536;
  t1543 = t445*t1450;
  t1563 = t400*t1524;
  t1577 = t1543 + t1563;
  t786 = -0.500001190325*t117;
  t804 = 1. + t786;
  t1101 = -0.5054634410180001*t117;
  t1107 = 1. + t1101;
  t1403 = t283*t335*t419;
  t1539 = -0.103955395616*t372*t1538;
  t1586 = t579*t1577;
  t1587 = t1403 + t1539 + t1586;
  t1149 = -0.707107*t149;
  t1155 = t1148 + t1149;
  t1633 = t283*t711*t419;
  t1634 = t758*t1538;
  t1644 = -0.103955395616*t372*t1577;
  t1645 = t1633 + t1634 + t1644;
  t1206 = -0.073913*t149;
  t1209 = t127 + t1206;
  t1668 = t829*t283*t419;
  t1670 = t870*t1538;
  t1684 = t928*t1577;
  t1712 = t1668 + t1670 + t1684;
  t1244 = 0.707107*t149;
  t1271 = t1148 + t1244;
  t1276 = -0.9945383682050002*t117;
  t1289 = 1. + t1276;
  t1344 = 0.703234*t149;
  t1348 = t655 + t1344;
  t1857 = -1.*t283*t405*t400;
  t1859 = t445*t283*t421;
  t1866 = t1857 + t1859;
  t1873 = t445*t283*t405;
  t1874 = t283*t400*t421;
  t1875 = t1873 + t1874;
  t1845 = -1.*t335*t412;
  t1867 = -0.103955395616*t372*t1866;
  t1882 = t579*t1875;
  t1897 = t1845 + t1867 + t1882;
  t1905 = -1.*t711*t412;
  t1913 = t758*t1866;
  t1929 = -0.103955395616*t372*t1875;
  t1954 = t1905 + t1913 + t1929;
  t1972 = -1.*t829*t412;
  t1984 = t870*t1866;
  t1996 = t928*t1875;
  t2018 = t1972 + t1984 + t1996;
  t1117 = t1107*t608;
  t1195 = t1155*t768;
  t1214 = t1209*t978;
  t1232 = t1117 + t1195 + t1214;
  t1273 = t1271*t608;
  t1336 = t1289*t768;
  t1352 = t1348*t978;
  t1387 = t1273 + t1336 + t1352;
  t1745 = t1107*t1587;
  t1749 = t1155*t1645;
  t1756 = t1209*t1712;
  t1758 = t1745 + t1749 + t1756;
  t1762 = t1271*t1587;
  t1793 = t1289*t1645;
  t1796 = t1348*t1712;
  t1797 = t1762 + t1793 + t1796;
  t2029 = t1107*t1897;
  t2047 = t1155*t1954;
  t2085 = t1209*t2018;
  t2098 = t2029 + t2047 + t2085;
  t2147 = t1271*t1897;
  t2168 = t1289*t1954;
  t2175 = t1348*t2018;
  t2189 = t2147 + t2168 + t2175;
  t641 = t168*t608;
  t774 = t666*t768;
  t1017 = t804*t978;
  t1059 = t641 + t774 + t1017;
  t1085 = 0.707107*t1059;
  t1619 = t168*t1587;
  t1647 = t666*t1645;
  t1713 = t804*t1712;
  t1714 = t1619 + t1647 + t1713;
  t1720 = 0.707107*t1714;
  t1899 = t168*t1897;
  t1963 = t666*t1954;
  t2020 = t804*t2018;
  t2021 = t1899 + t1963 + t2020;
  t2028 = 0.707107*t2021;
  t2495 = -1.*t445;
  t2502 = 1. + t2495;
  t2764 = -0.051978134642000004*t117;
  t2831 = 0.05226439969100001*t117;
  t2783 = 0.49726168403800003*t117;
  t2446 = -0.056500534356700764*t372;
  t2447 = 0.040271188976*t870;
  t2467 = 0.38315650737400003*t928;
  t2475 = 0. + t2446 + t2447 + t2467;
  t2510 = 0.4*t2502;
  t2512 = -0.12*t400;
  t2519 = 0. + t2510 + t2512;
  t2531 = -0.12*t2502;
  t2545 = -0.4*t400;
  t2553 = 0. + t2531 + t2545;
  t2557 = 1.1345904784751044e-7*var1[25];
  t2558 = 0.04027119345689465*t372;
  t2564 = -0.05650052807*t711;
  t2608 = t2557 + t2558 + t2564;
  t2628 = -1.1924972351948546e-8*var1[25];
  t2659 = 0.38315655000705834*t372;
  t2672 = -0.05650052807*t335;
  t2713 = t2628 + t2659 + t2672;
  t2744 = 1.5601527583902087e-7*var1[26];
  t2757 = 0.09582494577057615*t117;
  t2770 = t2764 + t1149;
  t2775 = -0.231098203479*t2770;
  t2788 = t2783 + t1206;
  t2802 = 0.164383620275*t2788;
  t2807 = t2744 + t2757 + t2775 + t2802;
  t2820 = 1.639789470231751e-8*var1[26];
  t2821 = -0.22983603018311177*t117;
  t2871 = t2831 + t1344;
  t2873 = 0.164383620275*t2871;
  t2884 = t2764 + t1244;
  t2893 = 0.18957839082800002*t2884;
  t2899 = t2820 + t2821 + t2873 + t2893;
  t2913 = -1.568745163810375e-7*var1[26];
  t2928 = 0.08219200580743281*t117;
  t2933 = t2831 + t658;
  t2938 = -0.231098203479*t2933;
  t2942 = t2783 + t154;
  t2943 = 0.18957839082800002*t2942;
  t2987 = t2913 + t2928 + t2938 + t2943;
  p_output1[0]=t1085 + 0.703234*t1232 + 0.073913*t1387;
  p_output1[1]=t1720 + 0.703234*t1758 + 0.073913*t1797;
  p_output1[2]=t2028 + 0.703234*t2098 + 0.073913*t2189;
  p_output1[3]=0.;
  p_output1[4]=0.104528*t1232 - 0.994522*t1387;
  p_output1[5]=0.104528*t1758 - 0.994522*t1797;
  p_output1[6]=0.104528*t2098 - 0.994522*t2189;
  p_output1[7]=0.;
  p_output1[8]=t1085 - 0.703234*t1232 - 0.073913*t1387;
  p_output1[9]=t1720 - 0.703234*t1758 - 0.073913*t1797;
  p_output1[10]=t2028 - 0.703234*t2098 - 0.073913*t2189;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.140811*t1059 + 0.213182*t1232 - 0.230568*t1387 + t220*t2475*t283 + t2519*t432 + t2553*t493 + t2608*t499 + t2713*t599 + t2807*t608 + t2899*t768 + t2987*t978 + var1[0];
  p_output1[13]=0. + 0.140811*t1714 + 0.213182*t1758 - 0.230568*t1797 + t1450*t2519 + t1524*t2553 + t1538*t2608 + t1577*t2713 + t1587*t2807 + t1645*t2899 + t1712*t2987 + t2475*t283*t419 + var1[1];
  p_output1[14]=0. + 0.140811*t2021 + 0.213182*t2098 - 0.230568*t2189 + t1866*t2608 + t1875*t2713 + t1897*t2807 + t1954*t2899 + t2018*t2987 + t2519*t283*t405 - 1.*t2475*t412 + t2553*t283*t421 + var1[2];
  p_output1[15]=1.;
}



void T_right_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

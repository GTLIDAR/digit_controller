/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shoulder_yaw_joint_right_src.h"

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
  double t198;
  double t370;
  double t412;
  double t382;
  double t440;
  double t290;
  double t358;
  double t366;
  double t521;
  double t404;
  double t483;
  double t485;
  double t367;
  double t542;
  double t551;
  double t565;
  double t79;
  double t81;
  double t84;
  double t112;
  double t209;
  double t245;
  double t490;
  double t598;
  double t622;
  double t643;
  double t644;
  double t653;
  double t252;
  double t253;
  double t288;
  double t624;
  double t626;
  double t628;
  double t656;
  double t657;
  double t756;
  double t790;
  double t808;
  double t815;
  double t832;
  double t835;
  double t874;
  double t914;
  double t86;
  double t978;
  double t987;
  double t989;
  double t1010;
  double t1016;
  double t1023;
  double t1031;
  double t1071;
  double t1081;
  double t1082;
  double t1176;
  double t732;
  double t129;
  double t139;
  double t1431;
  double t1456;
  double t1457;
  double t1474;
  double t1477;
  double t1480;
  double t743;
  double t752;
  double t1469;
  double t1511;
  double t1512;
  double t1521;
  double t1534;
  double t1541;
  double t954;
  double t960;
  double t1145;
  double t1147;
  double t1423;
  double t1516;
  double t1556;
  double t1576;
  double t1177;
  double t1213;
  double t1597;
  double t1603;
  double t1605;
  double t1608;
  double t1222;
  double t1226;
  double t1642;
  double t1644;
  double t1659;
  double t1661;
  double t1325;
  double t1334;
  double t1337;
  double t1339;
  double t1348;
  double t1349;
  double t1798;
  double t1803;
  double t1808;
  double t1850;
  double t1887;
  double t1894;
  double t1796;
  double t1837;
  double t1895;
  double t1917;
  double t1929;
  double t1930;
  double t1953;
  double t1986;
  double t2025;
  double t2027;
  double t2033;
  double t2036;
  double t1157;
  double t1218;
  double t1239;
  double t1289;
  double t1335;
  double t1345;
  double t1390;
  double t1407;
  double t1692;
  double t1708;
  double t1720;
  double t1723;
  double t1732;
  double t1740;
  double t1754;
  double t1765;
  double t2055;
  double t2057;
  double t2113;
  double t2155;
  double t2168;
  double t2170;
  double t2172;
  double t2179;
  double t658;
  double t932;
  double t1131;
  double t1132;
  double t1144;
  double t1592;
  double t1632;
  double t1666;
  double t1667;
  double t1687;
  double t1918;
  double t2001;
  double t2037;
  double t2039;
  double t2054;
  double t2481;
  double t2484;
  double t2657;
  double t2750;
  double t2672;
  double t2459;
  double t2473;
  double t2477;
  double t2478;
  double t2487;
  double t2505;
  double t2522;
  double t2527;
  double t2555;
  double t2560;
  double t2566;
  double t2576;
  double t2598;
  double t2610;
  double t2619;
  double t2623;
  double t2640;
  double t2644;
  double t2653;
  double t2654;
  double t2664;
  double t2665;
  double t2694;
  double t2701;
  double t2708;
  double t2743;
  double t2749;
  double t2759;
  double t2771;
  double t2776;
  double t2778;
  double t2779;
  double t2791;
  double t2806;
  double t2821;
  double t2834;
  double t2842;
  double t2846;
  double t2849;
  t198 = Cos(var1[3]);
  t370 = Cos(var1[5]);
  t412 = Sin(var1[3]);
  t382 = Sin(var1[4]);
  t440 = Sin(var1[5]);
  t290 = Cos(var1[25]);
  t358 = -1.*t290;
  t366 = 1. + t358;
  t521 = Cos(var1[24]);
  t404 = t198*t370*t382;
  t483 = t412*t440;
  t485 = t404 + t483;
  t367 = Sin(var1[24]);
  t542 = -1.*t370*t412;
  t551 = t198*t382*t440;
  t565 = t542 + t551;
  t79 = Cos(var1[26]);
  t81 = -1.*t79;
  t84 = 1. + t81;
  t112 = Sin(var1[26]);
  t209 = Cos(var1[4]);
  t245 = Sin(var1[25]);
  t490 = -1.*t367*t485;
  t598 = t521*t565;
  t622 = t490 + t598;
  t643 = t521*t485;
  t644 = t367*t565;
  t653 = t643 + t644;
  t252 = -0.994522*t245;
  t253 = 0. + t252;
  t288 = t198*t209*t253;
  t624 = -0.103955395616*t366*t622;
  t626 = -0.9890740084840001*t366;
  t628 = 1. + t626;
  t656 = t628*t653;
  t657 = t288 + t624 + t656;
  t756 = -0.104528*t245;
  t790 = 0. + t756;
  t808 = t198*t209*t790;
  t815 = -0.010926102783999999*t366;
  t832 = 1. + t815;
  t835 = t832*t622;
  t874 = -0.103955395616*t366*t653;
  t914 = t808 + t835 + t874;
  t86 = -0.49726168403800003*t84;
  t978 = -1.0000001112680001*t366;
  t987 = 1. + t978;
  t989 = t987*t198*t209;
  t1010 = 0.104528*t245;
  t1016 = 0. + t1010;
  t1023 = t1016*t622;
  t1031 = 0.994522*t245;
  t1071 = 0. + t1031;
  t1081 = t1071*t653;
  t1082 = t989 + t1023 + t1081;
  t1176 = 0.051978134642000004*t84;
  t732 = -0.05226439969100001*t84;
  t129 = 0.073913*t112;
  t139 = t86 + t129;
  t1431 = t370*t412*t382;
  t1456 = -1.*t198*t440;
  t1457 = t1431 + t1456;
  t1474 = t198*t370;
  t1477 = t412*t382*t440;
  t1480 = t1474 + t1477;
  t743 = -0.703234*t112;
  t752 = t732 + t743;
  t1469 = -1.*t367*t1457;
  t1511 = t521*t1480;
  t1512 = t1469 + t1511;
  t1521 = t521*t1457;
  t1534 = t367*t1480;
  t1541 = t1521 + t1534;
  t954 = -0.500001190325*t84;
  t960 = 1. + t954;
  t1145 = -0.5054634410180001*t84;
  t1147 = 1. + t1145;
  t1423 = t209*t253*t412;
  t1516 = -0.103955395616*t366*t1512;
  t1556 = t628*t1541;
  t1576 = t1423 + t1516 + t1556;
  t1177 = -0.707107*t112;
  t1213 = t1176 + t1177;
  t1597 = t209*t790*t412;
  t1603 = t832*t1512;
  t1605 = -0.103955395616*t366*t1541;
  t1608 = t1597 + t1603 + t1605;
  t1222 = -0.073913*t112;
  t1226 = t86 + t1222;
  t1642 = t987*t209*t412;
  t1644 = t1016*t1512;
  t1659 = t1071*t1541;
  t1661 = t1642 + t1644 + t1659;
  t1325 = 0.707107*t112;
  t1334 = t1176 + t1325;
  t1337 = -0.9945383682050002*t84;
  t1339 = 1. + t1337;
  t1348 = 0.703234*t112;
  t1349 = t732 + t1348;
  t1798 = -1.*t209*t370*t367;
  t1803 = t521*t209*t440;
  t1808 = t1798 + t1803;
  t1850 = t521*t209*t370;
  t1887 = t209*t367*t440;
  t1894 = t1850 + t1887;
  t1796 = -1.*t253*t382;
  t1837 = -0.103955395616*t366*t1808;
  t1895 = t628*t1894;
  t1917 = t1796 + t1837 + t1895;
  t1929 = -1.*t790*t382;
  t1930 = t832*t1808;
  t1953 = -0.103955395616*t366*t1894;
  t1986 = t1929 + t1930 + t1953;
  t2025 = -1.*t987*t382;
  t2027 = t1016*t1808;
  t2033 = t1071*t1894;
  t2036 = t2025 + t2027 + t2033;
  t1157 = t1147*t657;
  t1218 = t1213*t914;
  t1239 = t1226*t1082;
  t1289 = t1157 + t1218 + t1239;
  t1335 = t1334*t657;
  t1345 = t1339*t914;
  t1390 = t1349*t1082;
  t1407 = t1335 + t1345 + t1390;
  t1692 = t1147*t1576;
  t1708 = t1213*t1608;
  t1720 = t1226*t1661;
  t1723 = t1692 + t1708 + t1720;
  t1732 = t1334*t1576;
  t1740 = t1339*t1608;
  t1754 = t1349*t1661;
  t1765 = t1732 + t1740 + t1754;
  t2055 = t1147*t1917;
  t2057 = t1213*t1986;
  t2113 = t1226*t2036;
  t2155 = t2055 + t2057 + t2113;
  t2168 = t1334*t1917;
  t2170 = t1339*t1986;
  t2172 = t1349*t2036;
  t2179 = t2168 + t2170 + t2172;
  t658 = t139*t657;
  t932 = t752*t914;
  t1131 = t960*t1082;
  t1132 = t658 + t932 + t1131;
  t1144 = 0.707107*t1132;
  t1592 = t139*t1576;
  t1632 = t752*t1608;
  t1666 = t960*t1661;
  t1667 = t1592 + t1632 + t1666;
  t1687 = 0.707107*t1667;
  t1918 = t139*t1917;
  t2001 = t752*t1986;
  t2037 = t960*t2036;
  t2039 = t1918 + t2001 + t2037;
  t2054 = 0.707107*t2039;
  t2481 = -1.*t521;
  t2484 = 1. + t2481;
  t2657 = -0.051978134642000004*t84;
  t2750 = 0.05226439969100001*t84;
  t2672 = 0.49726168403800003*t84;
  t2459 = -0.056500534356700764*t366;
  t2473 = 0.040271188976*t1016;
  t2477 = 0.38315650737400003*t1071;
  t2478 = 0. + t2459 + t2473 + t2477;
  t2487 = 0.4*t2484;
  t2505 = -0.12*t367;
  t2522 = 0. + t2487 + t2505;
  t2527 = -0.12*t2484;
  t2555 = -0.4*t367;
  t2560 = 0. + t2527 + t2555;
  t2566 = 1.1345904784751044e-7*var1[25];
  t2576 = 0.04027119345689465*t366;
  t2598 = -0.05650052807*t790;
  t2610 = t2566 + t2576 + t2598;
  t2619 = -1.1924972351948546e-8*var1[25];
  t2623 = 0.38315655000705834*t366;
  t2640 = -0.05650052807*t253;
  t2644 = t2619 + t2623 + t2640;
  t2653 = 1.5601527583902087e-7*var1[26];
  t2654 = 0.09582494577057615*t84;
  t2664 = t2657 + t1177;
  t2665 = -0.231098203479*t2664;
  t2694 = t2672 + t1222;
  t2701 = 0.164383620275*t2694;
  t2708 = t2653 + t2654 + t2665 + t2701;
  t2743 = 1.639789470231751e-8*var1[26];
  t2749 = -0.22983603018311177*t84;
  t2759 = t2750 + t1348;
  t2771 = 0.164383620275*t2759;
  t2776 = t2657 + t1325;
  t2778 = 0.18957839082800002*t2776;
  t2779 = t2743 + t2749 + t2771 + t2778;
  t2791 = -1.568745163810375e-7*var1[26];
  t2806 = 0.08219200580743281*t84;
  t2821 = t2750 + t743;
  t2834 = -0.231098203479*t2821;
  t2842 = t2672 + t129;
  t2846 = 0.18957839082800002*t2842;
  t2849 = t2791 + t2806 + t2834 + t2846;
  p_output1[0]=t1144 + 0.703234*t1289 + 0.073913*t1407;
  p_output1[1]=t1687 + 0.703234*t1723 + 0.073913*t1765;
  p_output1[2]=t2054 + 0.703234*t2155 + 0.073913*t2179;
  p_output1[3]=0.;
  p_output1[4]=0.104528*t1289 - 0.994522*t1407;
  p_output1[5]=0.104528*t1723 - 0.994522*t1765;
  p_output1[6]=0.104528*t2155 - 0.994522*t2179;
  p_output1[7]=0.;
  p_output1[8]=t1144 - 0.703234*t1289 - 0.073913*t1407;
  p_output1[9]=t1687 - 0.703234*t1723 - 0.073913*t1765;
  p_output1[10]=t2054 - 0.703234*t2155 - 0.073913*t2179;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.060173*t1132 + 0.293218*t1289 - 0.220205*t1407 + t198*t209*t2478 + t1082*t2849 + t2522*t485 + t2560*t565 + t2610*t622 + t2644*t653 + t2708*t657 + t2779*t914 + var1[0];
  p_output1[13]=0. + 0.060173*t1667 + 0.293218*t1723 - 0.220205*t1765 + t1457*t2522 + t1480*t2560 + t1512*t2610 + t1541*t2644 + t1576*t2708 + t1608*t2779 + t1661*t2849 + t209*t2478*t412 + var1[1];
  p_output1[14]=0. + 0.060173*t2039 + 0.293218*t2155 - 0.220205*t2179 + t1808*t2610 + t1894*t2644 + t1917*t2708 + t1986*t2779 + t2036*t2849 + t209*t2522*t370 - 1.*t2478*t382 + t209*t2560*t440 + var1[2];
  p_output1[15]=1.;
}



void T_shoulder_yaw_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_elbow_joint_left_src.h"

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
  double t58;
  double t84;
  double t148;
  double t156;
  double t314;
  double t329;
  double t328;
  double t337;
  double t343;
  double t359;
  double t366;
  double t379;
  double t603;
  double t590;
  double t697;
  double t698;
  double t410;
  double t417;
  double t420;
  double t432;
  double t434;
  double t442;
  double t708;
  double t712;
  double t727;
  double t737;
  double t747;
  double t748;
  double t841;
  double t848;
  double t853;
  double t671;
  double t733;
  double t750;
  double t757;
  double t762;
  double t763;
  double t774;
  double t891;
  double t908;
  double t909;
  double t597;
  double t607;
  double t613;
  double t806;
  double t819;
  double t824;
  double t29;
  double t875;
  double t879;
  double t881;
  double t1021;
  double t1026;
  double t1029;
  double t980;
  double t1007;
  double t1009;
  double t621;
  double t659;
  double t662;
  double t1191;
  double t1202;
  double t1234;
  double t1243;
  double t1150;
  double t1151;
  double t1174;
  double t1431;
  double t1433;
  double t1440;
  double t1398;
  double t1565;
  double t1569;
  double t1558;
  double t1560;
  double t1475;
  double t1477;
  double t1401;
  double t1408;
  double t1458;
  double t1459;
  double t1589;
  double t1593;
  double t1594;
  double t1601;
  double t1612;
  double t1614;
  double t1623;
  double t1644;
  double t1652;
  double t1654;
  double t1664;
  double t1666;
  double t1606;
  double t1651;
  double t1672;
  double t1677;
  double t1487;
  double t1497;
  double t1712;
  double t1717;
  double t1720;
  double t1733;
  double t1543;
  double t1554;
  double t1680;
  double t1683;
  double t1684;
  double t1686;
  double t1790;
  double t1793;
  double t1803;
  double t1805;
  double t1895;
  double t1897;
  double t1908;
  double t1910;
  double t1415;
  double t1456;
  double t1464;
  double t1472;
  double t1689;
  double t1697;
  double t1708;
  double t1709;
  double t1950;
  double t1961;
  double t1964;
  double t1967;
  double t1485;
  double t1506;
  double t1529;
  double t1533;
  double t1829;
  double t1831;
  double t1843;
  double t1857;
  double t1983;
  double t1990;
  double t1992;
  double t2000;
  double t1881;
  double t1882;
  double t1884;
  double t1886;
  double t1556;
  double t1561;
  double t1576;
  double t1581;
  double t2111;
  double t2124;
  double t2126;
  double t2127;
  double t2132;
  double t2139;
  double t2140;
  double t2142;
  double t2346;
  double t2367;
  double t2396;
  double t2412;
  double t2406;
  double t2500;
  double t2429;
  double t2482;
  double t2495;
  double t2501;
  double t2506;
  double t2515;
  double t2533;
  double t2582;
  double t2672;
  double t2551;
  double t2793;
  double t2431;
  double t2710;
  double t2415;
  double t2663;
  double t2670;
  double t2686;
  double t2705;
  double t2726;
  double t2777;
  double t2780;
  double t2784;
  double t2787;
  double t2796;
  double t2811;
  double t2824;
  double t2827;
  double t2829;
  double t2833;
  double t2837;
  double t2840;
  double t2847;
  double t2850;
  double t2862;
  double t2866;
  double t2566;
  double t2577;
  double t2579;
  double t2602;
  double t2782;
  double t2831;
  double t2899;
  double t2900;
  double t2902;
  double t2904;
  double t2911;
  double t2912;
  double t2420;
  double t2437;
  double t2452;
  double t2459;
  double t2914;
  double t2916;
  double t2918;
  double t2919;
  double t2995;
  double t3007;
  double t3019;
  double t3024;
  double t2631;
  double t2647;
  double t2649;
  double t2654;
  double t2498;
  double t2510;
  double t2535;
  double t2542;
  double t2957;
  double t2962;
  double t2981;
  double t2987;
  double t3104;
  double t3113;
  double t3119;
  double t3123;
  double t3150;
  double t3155;
  double t3169;
  double t3177;
  double t2573;
  double t2581;
  double t2603;
  double t2622;
  double t3249;
  double t3255;
  double t3257;
  double t3258;
  double t3268;
  double t3272;
  double t3277;
  double t3283;
  t58 = Cos(var1[3]);
  t84 = Sin(var1[3]);
  t148 = Cos(var1[4]);
  t156 = Sin(var1[4]);
  t314 = Cos(var1[5]);
  t329 = Sin(var1[5]);
  t328 = t58*t314*t156;
  t337 = t84*t329;
  t343 = t328 + t337;
  t359 = -1.*t314*t84;
  t366 = t58*t156*t329;
  t379 = t359 + t366;
  t603 = Cos(var1[13]);
  t590 = Sin(var1[13]);
  t697 = -1.*t603;
  t698 = 1. + t697;
  t410 = t314*t84*t156;
  t417 = -1.*t58*t329;
  t420 = t410 + t417;
  t432 = t58*t314;
  t434 = t84*t156*t329;
  t442 = t432 + t434;
  t708 = 0.4*t698;
  t712 = 0.12*t590;
  t727 = 0. + t708 + t712;
  t737 = 0.12*t698;
  t747 = -0.4*t590;
  t748 = 0. + t737 + t747;
  t841 = t727*t420;
  t848 = t748*t442;
  t853 = 0. + var1[1] + t841 + t848;
  t671 = -1.*var1[2];
  t733 = -1.*t148*t314*t727;
  t750 = -1.*t148*t748*t329;
  t757 = 0. + t671 + t733 + t750;
  t762 = -1.*t590*t420;
  t763 = t603*t442;
  t774 = t762 + t763;
  t891 = t603*t420;
  t908 = t590*t442;
  t909 = t891 + t908;
  t597 = -1.*t590*t343;
  t607 = t603*t379;
  t613 = t597 + t607;
  t806 = -1.*t148*t314*t590;
  t819 = t603*t148*t329;
  t824 = t806 + t819;
  t29 = -1.*var1[0];
  t875 = t603*t148*t314;
  t879 = t148*t590*t329;
  t881 = t875 + t879;
  t1021 = -1.*t727*t343;
  t1026 = -1.*t748*t379;
  t1029 = 0. + t29 + t1021 + t1026;
  t980 = t148*t314*t727;
  t1007 = t148*t748*t329;
  t1009 = 0. + var1[2] + t980 + t1007;
  t621 = t603*t343;
  t659 = t590*t379;
  t662 = t621 + t659;
  t1191 = -1.*var1[1];
  t1202 = -1.*t727*t420;
  t1234 = -1.*t748*t442;
  t1243 = 0. + t1191 + t1202 + t1234;
  t1150 = t727*t343;
  t1151 = t748*t379;
  t1174 = 0. + var1[0] + t1150 + t1151;
  t1431 = Cos(var1[14]);
  t1433 = -1.*t1431;
  t1440 = 1. + t1433;
  t1398 = Sin(var1[14]);
  t1565 = -0.994522*t1398;
  t1569 = 0. + t1565;
  t1558 = 0.104528*t1398;
  t1560 = 0. + t1558;
  t1475 = -0.104528*t1398;
  t1477 = 0. + t1475;
  t1401 = 0.994522*t1398;
  t1408 = 0. + t1401;
  t1458 = -0.9890740084840001*t1440;
  t1459 = 1. + t1458;
  t1589 = -0.056500534356700764*t1440;
  t1593 = 0.38315650737400003*t1569;
  t1594 = -0.040271188976*t1560;
  t1601 = 0. + t1589 + t1593 + t1594;
  t1612 = 1.1345904784751044e-7*var1[14];
  t1614 = -0.04027119345689465*t1440;
  t1623 = -0.05650052807*t1477;
  t1644 = t1612 + t1614 + t1623;
  t1652 = 1.1924972351948546e-8*var1[14];
  t1654 = 0.38315655000705834*t1440;
  t1664 = -0.05650052807*t1408;
  t1666 = t1652 + t1654 + t1664;
  t1606 = t1601*t156;
  t1651 = -1.*t1644*t824;
  t1672 = -1.*t1666*t881;
  t1677 = 0. + t671 + t733 + t1606 + t750 + t1651 + t1672;
  t1487 = -0.010926102783999999*t1440;
  t1497 = 1. + t1487;
  t1712 = t148*t1601*t84;
  t1717 = t1644*t774;
  t1720 = t1666*t909;
  t1733 = 0. + var1[1] + t1712 + t841 + t848 + t1717 + t1720;
  t1543 = -1.0000001112680001*t1440;
  t1554 = 1. + t1543;
  t1680 = t148*t1408*t84;
  t1683 = 0.103955395616*t1440*t774;
  t1684 = t1459*t909;
  t1686 = t1680 + t1683 + t1684;
  t1790 = t148*t1477*t84;
  t1793 = t1497*t774;
  t1803 = 0.103955395616*t1440*t909;
  t1805 = t1790 + t1793 + t1803;
  t1895 = t1554*t148*t84;
  t1897 = t1560*t774;
  t1908 = t1569*t909;
  t1910 = t1895 + t1897 + t1908;
  t1415 = t58*t148*t1408;
  t1456 = 0.103955395616*t1440*t613;
  t1464 = t1459*t662;
  t1472 = t1415 + t1456 + t1464;
  t1689 = -1.*t1408*t156;
  t1697 = 0.103955395616*t1440*t824;
  t1708 = t1459*t881;
  t1709 = t1689 + t1697 + t1708;
  t1950 = -1.*t1601*t156;
  t1961 = t1644*t824;
  t1964 = t1666*t881;
  t1967 = 0. + var1[2] + t980 + t1950 + t1007 + t1961 + t1964;
  t1485 = t58*t148*t1477;
  t1506 = t1497*t613;
  t1529 = 0.103955395616*t1440*t662;
  t1533 = t1485 + t1506 + t1529;
  t1829 = -1.*t1477*t156;
  t1831 = t1497*t824;
  t1843 = 0.103955395616*t1440*t881;
  t1857 = t1829 + t1831 + t1843;
  t1983 = -1.*t58*t148*t1601;
  t1990 = -1.*t1644*t613;
  t1992 = -1.*t1666*t662;
  t2000 = 0. + t29 + t1983 + t1021 + t1026 + t1990 + t1992;
  t1881 = -1.*t1554*t156;
  t1882 = t1560*t824;
  t1884 = t1569*t881;
  t1886 = t1881 + t1882 + t1884;
  t1556 = t1554*t58*t148;
  t1561 = t1560*t613;
  t1576 = t1569*t662;
  t1581 = t1556 + t1561 + t1576;
  t2111 = t58*t148*t1601;
  t2124 = t1644*t613;
  t2126 = t1666*t662;
  t2127 = 0. + var1[0] + t2111 + t1150 + t1151 + t2124 + t2126;
  t2132 = -1.*t148*t1601*t84;
  t2139 = -1.*t1644*t774;
  t2140 = -1.*t1666*t909;
  t2142 = 0. + t1191 + t2132 + t1202 + t1234 + t2139 + t2140;
  t2346 = Cos(var1[15]);
  t2367 = -1.*t2346;
  t2396 = 1. + t2367;
  t2412 = Sin(var1[15]);
  t2406 = -0.49726168403800003*t2396;
  t2500 = -0.051978134642000004*t2396;
  t2429 = 0.05226439969100001*t2396;
  t2482 = -0.5054634410180001*t2396;
  t2495 = 1. + t2482;
  t2501 = -0.707107*t2412;
  t2506 = t2500 + t2501;
  t2515 = 0.073913*t2412;
  t2533 = t2406 + t2515;
  t2582 = 0.703234*t2412;
  t2672 = 0.051978134642000004*t2396;
  t2551 = 0.707107*t2412;
  t2793 = -0.05226439969100001*t2396;
  t2431 = -0.703234*t2412;
  t2710 = 0.49726168403800003*t2396;
  t2415 = -0.073913*t2412;
  t2663 = -1.5601527583902087e-7*var1[15];
  t2670 = 0.09582494577057615*t2396;
  t2686 = t2672 + t2501;
  t2705 = 0.231098203479*t2686;
  t2726 = t2710 + t2515;
  t2777 = 0.164383620275*t2726;
  t2780 = t2663 + t2670 + t2705 + t2777;
  t2784 = 1.639789470231751e-8*var1[15];
  t2787 = 0.22983603018311177*t2396;
  t2796 = t2793 + t2582;
  t2811 = 0.164383620275*t2796;
  t2824 = t2672 + t2551;
  t2827 = 0.18957839082800002*t2824;
  t2829 = t2784 + t2787 + t2811 + t2827;
  t2833 = 1.568745163810375e-7*var1[15];
  t2837 = 0.08219200580743281*t2396;
  t2840 = t2793 + t2431;
  t2847 = 0.231098203479*t2840;
  t2850 = t2710 + t2415;
  t2862 = 0.18957839082800002*t2850;
  t2866 = t2833 + t2837 + t2847 + t2862;
  t2566 = t2500 + t2551;
  t2577 = -0.9945383682050002*t2396;
  t2579 = 1. + t2577;
  t2602 = t2429 + t2582;
  t2782 = t2780*t1686;
  t2831 = t2829*t1805;
  t2899 = t2866*t1910;
  t2900 = 0. + var1[1] + t1712 + t841 + t848 + t1717 + t1720 + t2782 + t2831 + t2899;
  t2902 = -1.*t2780*t1709;
  t2904 = -1.*t2829*t1857;
  t2911 = -1.*t2866*t1886;
  t2912 = 0. + t671 + t733 + t1606 + t750 + t1651 + t1672 + t2902 + t2904 + t2911;
  t2420 = t2406 + t2415;
  t2437 = t2429 + t2431;
  t2452 = -0.500001190325*t2396;
  t2459 = 1. + t2452;
  t2914 = t2495*t1686;
  t2916 = t2506*t1805;
  t2918 = t2533*t1910;
  t2919 = t2914 + t2916 + t2918;
  t2995 = t2566*t1686;
  t3007 = t2579*t1805;
  t3019 = t2602*t1910;
  t3024 = t2995 + t3007 + t3019;
  t2631 = t2495*t1709;
  t2647 = t2506*t1857;
  t2649 = t2533*t1886;
  t2654 = t2631 + t2647 + t2649;
  t2498 = t2495*t1472;
  t2510 = t2506*t1533;
  t2535 = t2533*t1581;
  t2542 = t2498 + t2510 + t2535;
  t2957 = t2566*t1709;
  t2962 = t2579*t1857;
  t2981 = t2602*t1886;
  t2987 = t2957 + t2962 + t2981;
  t3104 = -1.*t2780*t1472;
  t3113 = -1.*t2829*t1533;
  t3119 = -1.*t2866*t1581;
  t3123 = 0. + t29 + t1983 + t1021 + t1026 + t1990 + t1992 + t3104 + t3113 + t3119;
  t3150 = t2780*t1709;
  t3155 = t2829*t1857;
  t3169 = t2866*t1886;
  t3177 = 0. + var1[2] + t980 + t1950 + t1007 + t1961 + t1964 + t3150 + t3155 + t3169;
  t2573 = t2566*t1472;
  t2581 = t2579*t1533;
  t2603 = t2602*t1581;
  t2622 = t2573 + t2581 + t2603;
  t3249 = -1.*t2780*t1686;
  t3255 = -1.*t2829*t1805;
  t3257 = -1.*t2866*t1910;
  t3258 = 0. + t1191 + t2132 + t1202 + t1234 + t2139 + t2140 + t3249 + t3255 + t3257;
  t3268 = t2780*t1472;
  t3272 = t2829*t1533;
  t3277 = t2866*t1581;
  t3283 = 0. + var1[0] + t2111 + t1150 + t1151 + t2124 + t2126 + t3268 + t3272 + t3277;
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
  p_output1[19]=t29;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t58*var1[2];
  p_output1[25]=-1.*t84*var1[2];
  p_output1[26]=t58*var1[0] + t84*var1[1];
  p_output1[27]=-1.*t84;
  p_output1[28]=t58;
  p_output1[29]=0;
  p_output1[30]=-1.*t156*var1[1] - 1.*t148*t84*var1[2];
  p_output1[31]=t156*var1[0] + t148*t58*var1[2];
  p_output1[32]=t148*t84*var1[0] - 1.*t148*t58*var1[1];
  p_output1[33]=t148*t58;
  p_output1[34]=t148*t84;
  p_output1[35]=-1.*t156;
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
  p_output1[78]=0.12*t343 - 0.4*t379 + t156*var1[1] + t148*t84*var1[2];
  p_output1[79]=0.12*t420 - 0.4*t442 - 1.*t156*var1[0] - 1.*t148*t58*var1[2];
  p_output1[80]=0.12*t148*t314 - 0.4*t148*t329 - 1.*t148*t84*var1[0] + t148*t58*var1[1];
  p_output1[81]=0. - 1.*t148*t58;
  p_output1[82]=0. - 1.*t148*t84;
  p_output1[83]=0. + t156;
  p_output1[84]=-0.385267*t148*t58 + 0.005906*t613 - 0.056191*t662 + 0.994522*(t757*t774 + t824*t853) + 0.104528*(t853*t881 + t757*t909);
  p_output1[85]=0.005906*t774 + 0.994522*(t1009*t613 + t1029*t824) - 0.385267*t148*t84 + 0.104528*(t1009*t662 + t1029*t881) - 0.056191*t909;
  p_output1[86]=0.385267*t156 + 0.994522*(t1243*t613 + t1174*t774) + 0.005906*t824 - 0.056191*t881 + 0.104528*(t1243*t662 + t1174*t909);
  p_output1[87]=0. + 0.994522*t613 + 0.104528*t662;
  p_output1[88]=0. + 0.994522*t774 + 0.104528*t909;
  p_output1[89]=0. + 0.994522*t824 + 0.104528*t881;
  p_output1[90]=-0.151261*t1472 + 0.249652*t1533 - 0.176528*t1581 - 0.703234*(t1677*t1686 + t1709*t1733) + 0.073913*(t1677*t1805 + t1733*t1857) + 0.707107*(t1733*t1886 + t1677*t1910);
  p_output1[91]=-0.151261*t1686 + 0.249652*t1805 - 0.176528*t1910 - 0.703234*(t1472*t1967 + t1709*t2000) + 0.073913*(t1533*t1967 + t1857*t2000) + 0.707107*(t1581*t1967 + t1886*t2000);
  p_output1[92]=-0.151261*t1709 + 0.249652*t1857 - 0.176528*t1886 - 0.703234*(t1686*t2127 + t1472*t2142) + 0.073913*(t1805*t2127 + t1533*t2142) + 0.707107*(t1910*t2127 + t1581*t2142);
  p_output1[93]=0. - 0.703234*t1472 + 0.073913*t1533 + 0.707107*t1581;
  p_output1[94]=0. - 0.703234*t1686 + 0.073913*t1805 + 0.707107*t1910;
  p_output1[95]=0. - 0.703234*t1709 + 0.073913*t1857 + 0.707107*t1886;
  p_output1[96]=-0.137779*(t1472*t2420 + t1533*t2437 + t1581*t2459) + 0.189941*t2542 - 0.019964*t2622 + 0.104528*(t2654*t2900 + t2912*t2919) + 0.994522*(t2900*t2987 + t2912*t3024);
  p_output1[97]=-0.137779*(t1686*t2420 + t1805*t2437 + t1910*t2459) + 0.189941*t2919 - 0.019964*t3024 + 0.104528*(t2654*t3123 + t2542*t3177) + 0.994522*(t2987*t3123 + t2622*t3177);
  p_output1[98]=-0.137779*(t1709*t2420 + t1857*t2437 + t1886*t2459) + 0.189941*t2654 - 0.019964*t2987 + 0.104528*(t2542*t3258 + t2919*t3283) + 0.994522*(t2622*t3258 + t3024*t3283);
  p_output1[99]=0. + 0.104528*t2542 + 0.994522*t2622;
  p_output1[100]=0. + 0.104528*t2919 + 0.994522*t3024;
  p_output1[101]=0. + 0.104528*t2654 + 0.994522*t2987;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
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



void Js_elbow_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

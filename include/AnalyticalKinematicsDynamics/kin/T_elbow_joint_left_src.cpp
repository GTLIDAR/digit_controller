/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_elbow_joint_left_src.h"

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
  double t193;
  double t347;
  double t403;
  double t399;
  double t407;
  double t304;
  double t325;
  double t338;
  double t429;
  double t402;
  double t410;
  double t414;
  double t345;
  double t455;
  double t457;
  double t461;
  double t76;
  double t141;
  double t153;
  double t160;
  double t216;
  double t235;
  double t416;
  double t466;
  double t492;
  double t512;
  double t513;
  double t514;
  double t287;
  double t294;
  double t296;
  double t495;
  double t504;
  double t510;
  double t516;
  double t522;
  double t586;
  double t591;
  double t594;
  double t596;
  double t607;
  double t621;
  double t622;
  double t632;
  double t159;
  double t706;
  double t708;
  double t712;
  double t749;
  double t751;
  double t767;
  double t768;
  double t773;
  double t775;
  double t789;
  double t835;
  double t839;
  double t844;
  double t875;
  double t531;
  double t7;
  double t165;
  double t182;
  double t527;
  double t576;
  double t580;
  double t664;
  double t693;
  double t696;
  double t822;
  double t827;
  double t857;
  double t858;
  double t865;
  double t906;
  double t911;
  double t915;
  double t935;
  double t939;
  double t949;
  double t950;
  double t983;
  double t993;
  double t1009;
  double t1011;
  double t1027;
  double t1028;
  double t1038;
  double t1040;
  double t1041;
  double t1043;
  double t52;
  double t60;
  double t1256;
  double t1259;
  double t1264;
  double t1284;
  double t1287;
  double t1293;
  double t1283;
  double t1306;
  double t1317;
  double t1332;
  double t1336;
  double t1343;
  double t1253;
  double t1327;
  double t1360;
  double t1370;
  double t1388;
  double t1395;
  double t1396;
  double t1397;
  double t1441;
  double t1448;
  double t1455;
  double t1464;
  double t974;
  double t977;
  double t1061;
  double t1072;
  double t1383;
  double t1401;
  double t1474;
  double t1476;
  double t1080;
  double t1087;
  double t1525;
  double t1527;
  double t1531;
  double t1532;
  double t1552;
  double t1565;
  double t1568;
  double t1574;
  double t1128;
  double t1133;
  double t1149;
  double t1169;
  double t1185;
  double t1212;
  double t1734;
  double t1747;
  double t1748;
  double t1756;
  double t1776;
  double t1783;
  double t1720;
  double t1754;
  double t1788;
  double t1792;
  double t1847;
  double t1848;
  double t1858;
  double t1868;
  double t1874;
  double t1875;
  double t1882;
  double t1915;
  double t1800;
  double t1869;
  double t1919;
  double t1933;
  double t1961;
  double t1973;
  double t1982;
  double t1986;
  double t1994;
  double t2000;
  double t2009;
  double t2016;
  double t828;
  double t961;
  double t1044;
  double t1046;
  double t1079;
  double t1088;
  double t1092;
  double t1098;
  double t1137;
  double t1171;
  double t1222;
  double t1235;
  double t1502;
  double t1549;
  double t1576;
  double t1589;
  double t1606;
  double t1610;
  double t1611;
  double t1614;
  double t1652;
  double t1673;
  double t1680;
  double t1683;
  double t1957;
  double t1993;
  double t2044;
  double t2061;
  double t2079;
  double t2080;
  double t2090;
  double t2091;
  double t2105;
  double t2115;
  double t2120;
  double t2126;
  double t2406;
  double t2412;
  double t2630;
  double t2706;
  double t2665;
  double t2339;
  double t2340;
  double t2342;
  double t2379;
  double t2419;
  double t2429;
  double t2433;
  double t2449;
  double t2469;
  double t2497;
  double t2506;
  double t2510;
  double t2538;
  double t2566;
  double t2569;
  double t2573;
  double t2587;
  double t2598;
  double t2620;
  double t2625;
  double t2631;
  double t2638;
  double t2672;
  double t2674;
  double t2686;
  double t2697;
  double t2702;
  double t2712;
  double t2718;
  double t2719;
  double t2726;
  double t2733;
  double t2743;
  double t2747;
  double t2769;
  double t2786;
  double t2788;
  double t2811;
  double t2812;
  double t2827;
  double t2838;
  double t2849;
  double t2851;
  double t2900;
  double t2916;
  double t2919;
  double t2924;
  double t2936;
  double t2940;
  double t2946;
  double t2947;
  t193 = Cos(var1[3]);
  t347 = Cos(var1[5]);
  t403 = Sin(var1[3]);
  t399 = Sin(var1[4]);
  t407 = Sin(var1[5]);
  t304 = Cos(var1[14]);
  t325 = -1.*t304;
  t338 = 1. + t325;
  t429 = Cos(var1[13]);
  t402 = t193*t347*t399;
  t410 = t403*t407;
  t414 = t402 + t410;
  t345 = Sin(var1[13]);
  t455 = -1.*t347*t403;
  t457 = t193*t399*t407;
  t461 = t455 + t457;
  t76 = Cos(var1[15]);
  t141 = -1.*t76;
  t153 = 1. + t141;
  t160 = Sin(var1[15]);
  t216 = Cos(var1[4]);
  t235 = Sin(var1[14]);
  t416 = -1.*t345*t414;
  t466 = t429*t461;
  t492 = t416 + t466;
  t512 = t429*t414;
  t513 = t345*t461;
  t514 = t512 + t513;
  t287 = 0.994522*t235;
  t294 = 0. + t287;
  t296 = t193*t216*t294;
  t495 = 0.103955395616*t338*t492;
  t504 = -0.9890740084840001*t338;
  t510 = 1. + t504;
  t516 = t510*t514;
  t522 = t296 + t495 + t516;
  t586 = -0.104528*t235;
  t591 = 0. + t586;
  t594 = t193*t216*t591;
  t596 = -0.010926102783999999*t338;
  t607 = 1. + t596;
  t621 = t607*t492;
  t622 = 0.103955395616*t338*t514;
  t632 = t594 + t621 + t622;
  t159 = -0.49726168403800003*t153;
  t706 = -1.0000001112680001*t338;
  t708 = 1. + t706;
  t712 = t708*t193*t216;
  t749 = 0.104528*t235;
  t751 = 0. + t749;
  t767 = t751*t492;
  t768 = -0.994522*t235;
  t773 = 0. + t768;
  t775 = t773*t514;
  t789 = t712 + t767 + t775;
  t835 = Cos(var1[16]);
  t839 = -1.*t835;
  t844 = 1. + t839;
  t875 = -0.051978134642000004*t153;
  t531 = 0.05226439969100001*t153;
  t7 = Sin(var1[16]);
  t165 = -0.073913*t160;
  t182 = t159 + t165;
  t527 = t182*t522;
  t576 = -0.703234*t160;
  t580 = t531 + t576;
  t664 = t580*t632;
  t693 = -0.500001190325*t153;
  t696 = 1. + t693;
  t822 = t696*t789;
  t827 = t527 + t664 + t822;
  t857 = -0.5054634410180001*t153;
  t858 = 1. + t857;
  t865 = t858*t522;
  t906 = -0.707107*t160;
  t911 = t875 + t906;
  t915 = t911*t632;
  t935 = 0.073913*t160;
  t939 = t159 + t935;
  t949 = t939*t789;
  t950 = t865 + t915 + t949;
  t983 = 0.707107*t160;
  t993 = t875 + t983;
  t1009 = t993*t522;
  t1011 = -0.9945383682050002*t153;
  t1027 = 1. + t1011;
  t1028 = t1027*t632;
  t1038 = 0.703234*t160;
  t1040 = t531 + t1038;
  t1041 = t1040*t789;
  t1043 = t1009 + t1028 + t1041;
  t52 = -0.104528*t7;
  t60 = 0. + t52;
  t1256 = t347*t403*t399;
  t1259 = -1.*t193*t407;
  t1264 = t1256 + t1259;
  t1284 = t193*t347;
  t1287 = t403*t399*t407;
  t1293 = t1284 + t1287;
  t1283 = -1.*t345*t1264;
  t1306 = t429*t1293;
  t1317 = t1283 + t1306;
  t1332 = t429*t1264;
  t1336 = t345*t1293;
  t1343 = t1332 + t1336;
  t1253 = t216*t294*t403;
  t1327 = 0.103955395616*t338*t1317;
  t1360 = t510*t1343;
  t1370 = t1253 + t1327 + t1360;
  t1388 = t216*t591*t403;
  t1395 = t607*t1317;
  t1396 = 0.103955395616*t338*t1343;
  t1397 = t1388 + t1395 + t1396;
  t1441 = t708*t216*t403;
  t1448 = t751*t1317;
  t1455 = t773*t1343;
  t1464 = t1441 + t1448 + t1455;
  t974 = -0.010926102783999999*t844;
  t977 = 1. + t974;
  t1061 = 0.994522*t7;
  t1072 = 0. + t1061;
  t1383 = t182*t1370;
  t1401 = t580*t1397;
  t1474 = t696*t1464;
  t1476 = t1383 + t1401 + t1474;
  t1080 = -0.9890740084840001*t844;
  t1087 = 1. + t1080;
  t1525 = t858*t1370;
  t1527 = t911*t1397;
  t1531 = t939*t1464;
  t1532 = t1525 + t1527 + t1531;
  t1552 = t993*t1370;
  t1565 = t1027*t1397;
  t1568 = t1040*t1464;
  t1574 = t1552 + t1565 + t1568;
  t1128 = -1.0000001112680001*t844;
  t1133 = 1. + t1128;
  t1149 = -0.994522*t7;
  t1169 = 0. + t1149;
  t1185 = 0.104528*t7;
  t1212 = 0. + t1185;
  t1734 = -1.*t216*t347*t345;
  t1747 = t429*t216*t407;
  t1748 = t1734 + t1747;
  t1756 = t429*t216*t347;
  t1776 = t216*t345*t407;
  t1783 = t1756 + t1776;
  t1720 = -1.*t294*t399;
  t1754 = 0.103955395616*t338*t1748;
  t1788 = t510*t1783;
  t1792 = t1720 + t1754 + t1788;
  t1847 = -1.*t591*t399;
  t1848 = t607*t1748;
  t1858 = 0.103955395616*t338*t1783;
  t1868 = t1847 + t1848 + t1858;
  t1874 = -1.*t708*t399;
  t1875 = t751*t1748;
  t1882 = t773*t1783;
  t1915 = t1874 + t1875 + t1882;
  t1800 = t182*t1792;
  t1869 = t580*t1868;
  t1919 = t696*t1915;
  t1933 = t1800 + t1869 + t1919;
  t1961 = t858*t1792;
  t1973 = t911*t1868;
  t1982 = t939*t1915;
  t1986 = t1961 + t1973 + t1982;
  t1994 = t993*t1792;
  t2000 = t1027*t1868;
  t2009 = t1040*t1915;
  t2016 = t1994 + t2000 + t2009;
  t828 = t60*t827;
  t961 = 0.103955395616*t844*t950;
  t1044 = t977*t1043;
  t1046 = t828 + t961 + t1044;
  t1079 = t1072*t827;
  t1088 = t1087*t950;
  t1092 = 0.103955395616*t844*t1043;
  t1098 = t1079 + t1088 + t1092;
  t1137 = t1133*t827;
  t1171 = t1169*t950;
  t1222 = t1212*t1043;
  t1235 = t1137 + t1171 + t1222;
  t1502 = t60*t1476;
  t1549 = 0.103955395616*t844*t1532;
  t1576 = t977*t1574;
  t1589 = t1502 + t1549 + t1576;
  t1606 = t1072*t1476;
  t1610 = t1087*t1532;
  t1611 = 0.103955395616*t844*t1574;
  t1614 = t1606 + t1610 + t1611;
  t1652 = t1133*t1476;
  t1673 = t1169*t1532;
  t1680 = t1212*t1574;
  t1683 = t1652 + t1673 + t1680;
  t1957 = t60*t1933;
  t1993 = 0.103955395616*t844*t1986;
  t2044 = t977*t2016;
  t2061 = t1957 + t1993 + t2044;
  t2079 = t1072*t1933;
  t2080 = t1087*t1986;
  t2090 = 0.103955395616*t844*t2016;
  t2091 = t2079 + t2080 + t2090;
  t2105 = t1133*t1933;
  t2115 = t1169*t1986;
  t2120 = t1212*t2016;
  t2126 = t2105 + t2115 + t2120;
  t2406 = -1.*t429;
  t2412 = 1. + t2406;
  t2630 = 0.051978134642000004*t153;
  t2706 = -0.05226439969100001*t153;
  t2665 = 0.49726168403800003*t153;
  t2339 = -0.056500534356700764*t338;
  t2340 = 0.38315650737400003*t773;
  t2342 = -0.040271188976*t751;
  t2379 = 0. + t2339 + t2340 + t2342;
  t2419 = 0.4*t2412;
  t2429 = 0.12*t345;
  t2433 = 0. + t2419 + t2429;
  t2449 = 0.12*t2412;
  t2469 = -0.4*t345;
  t2497 = 0. + t2449 + t2469;
  t2506 = 1.1345904784751044e-7*var1[14];
  t2510 = -0.04027119345689465*t338;
  t2538 = -0.05650052807*t591;
  t2566 = t2506 + t2510 + t2538;
  t2569 = 1.1924972351948546e-8*var1[14];
  t2573 = 0.38315655000705834*t338;
  t2587 = -0.05650052807*t294;
  t2598 = t2569 + t2573 + t2587;
  t2620 = -1.5601527583902087e-7*var1[15];
  t2625 = 0.09582494577057615*t153;
  t2631 = t2630 + t906;
  t2638 = 0.231098203479*t2631;
  t2672 = t2665 + t935;
  t2674 = 0.164383620275*t2672;
  t2686 = t2620 + t2625 + t2638 + t2674;
  t2697 = 1.639789470231751e-8*var1[15];
  t2702 = 0.22983603018311177*t153;
  t2712 = t2706 + t1038;
  t2718 = 0.164383620275*t2712;
  t2719 = t2630 + t983;
  t2726 = 0.18957839082800002*t2719;
  t2733 = t2697 + t2702 + t2718 + t2726;
  t2743 = 1.568745163810375e-7*var1[15];
  t2747 = 0.08219200580743281*t153;
  t2769 = t2706 + t576;
  t2786 = 0.231098203479*t2769;
  t2788 = t2665 + t165;
  t2811 = 0.18957839082800002*t2788;
  t2812 = t2743 + t2747 + t2786 + t2811;
  t2827 = 0.19098732144477495*t844;
  t2838 = 0.137024246638*t1169;
  t2849 = -0.014401763312*t1212;
  t2851 = 0. + t2827 + t2838 + t2849;
  t2900 = -5.06291820800569e-8*var1[16];
  t2916 = 0.13702426188441388*t844;
  t2919 = 0.190987300194*t1072;
  t2924 = t2900 + t2916 + t2919;
  t2936 = -4.817066759205414e-7*var1[16];
  t2940 = -0.0144017649144554*t844;
  t2946 = 0.190987300194*t60;
  t2947 = t2936 + t2940 + t2946;
  p_output1[0]=-0.040001*t1046 + 0.380588*t1098 + 0.92388*t1235;
  p_output1[1]=-0.040001*t1589 + 0.380588*t1614 + 0.92388*t1683;
  p_output1[2]=-0.040001*t2061 + 0.380588*t2091 + 0.92388*t2126;
  p_output1[3]=0.;
  p_output1[4]=0.096572*t1046 - 0.918819*t1098 + 0.382684*t1235;
  p_output1[5]=0.096572*t1589 - 0.918819*t1614 + 0.382684*t1683;
  p_output1[6]=0.096572*t2061 - 0.918819*t2091 + 0.382684*t2126;
  p_output1[7]=0.;
  p_output1[8]=0.994522*t1046 + 0.104528*t1098;
  p_output1[9]=0.994522*t1589 + 0.104528*t1614;
  p_output1[10]=0.994522*t2061 + 0.104528*t2091;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.272168*t1046 + 0.167144*t1098 + 0.190987*t1235 + t193*t216*t2379 + t1043*t2947 + t2433*t414 + t2497*t461 + t2566*t492 + t2598*t514 + t2686*t522 + t2733*t632 + t2812*t789 + t2851*t827 + t2924*t950 + var1[0];
  p_output1[13]=0. + 0.272168*t1589 + 0.167144*t1614 + 0.190987*t1683 + t1264*t2433 + t1293*t2497 + t1317*t2566 + t1343*t2598 + t1370*t2686 + t1397*t2733 + t1464*t2812 + t1476*t2851 + t1532*t2924 + t1574*t2947 + t216*t2379*t403 + var1[1];
  p_output1[14]=0. + 0.272168*t2061 + 0.167144*t2091 + 0.190987*t2126 + t1748*t2566 + t1783*t2598 + t1792*t2686 + t1868*t2733 + t1915*t2812 + t1933*t2851 + t1986*t2924 + t2016*t2947 + t216*t2433*t347 - 1.*t2379*t399 + t216*t2497*t407 + var1[2];
  p_output1[15]=1.;
}



void T_elbow_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

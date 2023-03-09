/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_shoulder_yaw_src.h"

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
  double t311;
  double t431;
  double t489;
  double t432;
  double t499;
  double t381;
  double t408;
  double t418;
  double t532;
  double t458;
  double t508;
  double t517;
  double t419;
  double t555;
  double t576;
  double t580;
  double t145;
  double t175;
  double t177;
  double t211;
  double t339;
  double t362;
  double t525;
  double t632;
  double t639;
  double t677;
  double t678;
  double t681;
  double t365;
  double t369;
  double t376;
  double t652;
  double t656;
  double t659;
  double t682;
  double t697;
  double t766;
  double t767;
  double t779;
  double t791;
  double t827;
  double t829;
  double t839;
  double t865;
  double t189;
  double t943;
  double t950;
  double t959;
  double t961;
  double t967;
  double t972;
  double t977;
  double t980;
  double t1023;
  double t1059;
  double t1118;
  double t747;
  double t214;
  double t223;
  double t1345;
  double t1361;
  double t1368;
  double t1378;
  double t1387;
  double t1388;
  double t763;
  double t765;
  double t1370;
  double t1400;
  double t1408;
  double t1421;
  double t1422;
  double t1428;
  double t915;
  double t940;
  double t1091;
  double t1100;
  double t1329;
  double t1419;
  double t1430;
  double t1459;
  double t1123;
  double t1156;
  double t1482;
  double t1492;
  double t1522;
  double t1531;
  double t1168;
  double t1169;
  double t1548;
  double t1557;
  double t1598;
  double t1627;
  double t1211;
  double t1216;
  double t1246;
  double t1249;
  double t1294;
  double t1299;
  double t1827;
  double t1836;
  double t1845;
  double t1867;
  double t1874;
  double t1875;
  double t1821;
  double t1857;
  double t1876;
  double t1890;
  double t1906;
  double t1913;
  double t1934;
  double t1943;
  double t1968;
  double t1979;
  double t2018;
  double t2022;
  double t1108;
  double t1158;
  double t1185;
  double t1188;
  double t1218;
  double t1258;
  double t1306;
  double t1308;
  double t1706;
  double t1715;
  double t1730;
  double t1732;
  double t1741;
  double t1744;
  double t1757;
  double t1772;
  double t2113;
  double t2118;
  double t2132;
  double t2135;
  double t2152;
  double t2154;
  double t2155;
  double t2162;
  double t711;
  double t880;
  double t1063;
  double t1069;
  double t1080;
  double t1479;
  double t1544;
  double t1628;
  double t1652;
  double t1659;
  double t1901;
  double t1944;
  double t2081;
  double t2082;
  double t2108;
  double t2597;
  double t2603;
  double t2847;
  double t2936;
  double t2884;
  double t2475;
  double t2482;
  double t2495;
  double t2549;
  double t2606;
  double t2616;
  double t2619;
  double t2632;
  double t2658;
  double t2659;
  double t2663;
  double t2665;
  double t2671;
  double t2676;
  double t2726;
  double t2755;
  double t2762;
  double t2777;
  double t2787;
  double t2825;
  double t2859;
  double t2878;
  double t2896;
  double t2901;
  double t2902;
  double t2907;
  double t2935;
  double t2974;
  double t2976;
  double t3012;
  double t3035;
  double t3047;
  double t3066;
  double t3105;
  double t3110;
  double t3121;
  double t3122;
  double t3137;
  double t3152;
  t311 = Cos(var1[3]);
  t431 = Cos(var1[5]);
  t489 = Sin(var1[3]);
  t432 = Sin(var1[4]);
  t499 = Sin(var1[5]);
  t381 = Cos(var1[14]);
  t408 = -1.*t381;
  t418 = 1. + t408;
  t532 = Cos(var1[13]);
  t458 = t311*t431*t432;
  t508 = t489*t499;
  t517 = t458 + t508;
  t419 = Sin(var1[13]);
  t555 = -1.*t431*t489;
  t576 = t311*t432*t499;
  t580 = t555 + t576;
  t145 = Cos(var1[15]);
  t175 = -1.*t145;
  t177 = 1. + t175;
  t211 = Sin(var1[15]);
  t339 = Cos(var1[4]);
  t362 = Sin(var1[14]);
  t525 = -1.*t419*t517;
  t632 = t532*t580;
  t639 = t525 + t632;
  t677 = t532*t517;
  t678 = t419*t580;
  t681 = t677 + t678;
  t365 = 0.994522*t362;
  t369 = 0. + t365;
  t376 = t311*t339*t369;
  t652 = 0.103955395616*t418*t639;
  t656 = -0.9890740084840001*t418;
  t659 = 1. + t656;
  t682 = t659*t681;
  t697 = t376 + t652 + t682;
  t766 = -0.104528*t362;
  t767 = 0. + t766;
  t779 = t311*t339*t767;
  t791 = -0.010926102783999999*t418;
  t827 = 1. + t791;
  t829 = t827*t639;
  t839 = 0.103955395616*t418*t681;
  t865 = t779 + t829 + t839;
  t189 = -0.49726168403800003*t177;
  t943 = -1.0000001112680001*t418;
  t950 = 1. + t943;
  t959 = t950*t311*t339;
  t961 = 0.104528*t362;
  t967 = 0. + t961;
  t972 = t967*t639;
  t977 = -0.994522*t362;
  t980 = 0. + t977;
  t1023 = t980*t681;
  t1059 = t959 + t972 + t1023;
  t1118 = -0.051978134642000004*t177;
  t747 = 0.05226439969100001*t177;
  t214 = -0.073913*t211;
  t223 = t189 + t214;
  t1345 = t431*t489*t432;
  t1361 = -1.*t311*t499;
  t1368 = t1345 + t1361;
  t1378 = t311*t431;
  t1387 = t489*t432*t499;
  t1388 = t1378 + t1387;
  t763 = -0.703234*t211;
  t765 = t747 + t763;
  t1370 = -1.*t419*t1368;
  t1400 = t532*t1388;
  t1408 = t1370 + t1400;
  t1421 = t532*t1368;
  t1422 = t419*t1388;
  t1428 = t1421 + t1422;
  t915 = -0.500001190325*t177;
  t940 = 1. + t915;
  t1091 = -0.5054634410180001*t177;
  t1100 = 1. + t1091;
  t1329 = t339*t369*t489;
  t1419 = 0.103955395616*t418*t1408;
  t1430 = t659*t1428;
  t1459 = t1329 + t1419 + t1430;
  t1123 = -0.707107*t211;
  t1156 = t1118 + t1123;
  t1482 = t339*t767*t489;
  t1492 = t827*t1408;
  t1522 = 0.103955395616*t418*t1428;
  t1531 = t1482 + t1492 + t1522;
  t1168 = 0.073913*t211;
  t1169 = t189 + t1168;
  t1548 = t950*t339*t489;
  t1557 = t967*t1408;
  t1598 = t980*t1428;
  t1627 = t1548 + t1557 + t1598;
  t1211 = 0.707107*t211;
  t1216 = t1118 + t1211;
  t1246 = -0.9945383682050002*t177;
  t1249 = 1. + t1246;
  t1294 = 0.703234*t211;
  t1299 = t747 + t1294;
  t1827 = -1.*t339*t431*t419;
  t1836 = t532*t339*t499;
  t1845 = t1827 + t1836;
  t1867 = t532*t339*t431;
  t1874 = t339*t419*t499;
  t1875 = t1867 + t1874;
  t1821 = -1.*t369*t432;
  t1857 = 0.103955395616*t418*t1845;
  t1876 = t659*t1875;
  t1890 = t1821 + t1857 + t1876;
  t1906 = -1.*t767*t432;
  t1913 = t827*t1845;
  t1934 = 0.103955395616*t418*t1875;
  t1943 = t1906 + t1913 + t1934;
  t1968 = -1.*t950*t432;
  t1979 = t967*t1845;
  t2018 = t980*t1875;
  t2022 = t1968 + t1979 + t2018;
  t1108 = t1100*t697;
  t1158 = t1156*t865;
  t1185 = t1169*t1059;
  t1188 = t1108 + t1158 + t1185;
  t1218 = t1216*t697;
  t1258 = t1249*t865;
  t1306 = t1299*t1059;
  t1308 = t1218 + t1258 + t1306;
  t1706 = t1100*t1459;
  t1715 = t1156*t1531;
  t1730 = t1169*t1627;
  t1732 = t1706 + t1715 + t1730;
  t1741 = t1216*t1459;
  t1744 = t1249*t1531;
  t1757 = t1299*t1627;
  t1772 = t1741 + t1744 + t1757;
  t2113 = t1100*t1890;
  t2118 = t1156*t1943;
  t2132 = t1169*t2022;
  t2135 = t2113 + t2118 + t2132;
  t2152 = t1216*t1890;
  t2154 = t1249*t1943;
  t2155 = t1299*t2022;
  t2162 = t2152 + t2154 + t2155;
  t711 = t223*t697;
  t880 = t765*t865;
  t1063 = t940*t1059;
  t1069 = t711 + t880 + t1063;
  t1080 = 0.707107*t1069;
  t1479 = t223*t1459;
  t1544 = t765*t1531;
  t1628 = t940*t1627;
  t1652 = t1479 + t1544 + t1628;
  t1659 = 0.707107*t1652;
  t1901 = t223*t1890;
  t1944 = t765*t1943;
  t2081 = t940*t2022;
  t2082 = t1901 + t1944 + t2081;
  t2108 = 0.707107*t2082;
  t2597 = -1.*t532;
  t2603 = 1. + t2597;
  t2847 = 0.051978134642000004*t177;
  t2936 = -0.05226439969100001*t177;
  t2884 = 0.49726168403800003*t177;
  t2475 = -0.056500534356700764*t418;
  t2482 = 0.38315650737400003*t980;
  t2495 = -0.040271188976*t967;
  t2549 = 0. + t2475 + t2482 + t2495;
  t2606 = 0.4*t2603;
  t2616 = 0.12*t419;
  t2619 = 0. + t2606 + t2616;
  t2632 = 0.12*t2603;
  t2658 = -0.4*t419;
  t2659 = 0. + t2632 + t2658;
  t2663 = 1.1345904784751044e-7*var1[14];
  t2665 = -0.04027119345689465*t418;
  t2671 = -0.05650052807*t767;
  t2676 = t2663 + t2665 + t2671;
  t2726 = 1.1924972351948546e-8*var1[14];
  t2755 = 0.38315655000705834*t418;
  t2762 = -0.05650052807*t369;
  t2777 = t2726 + t2755 + t2762;
  t2787 = -1.5601527583902087e-7*var1[15];
  t2825 = 0.09582494577057615*t177;
  t2859 = t2847 + t1123;
  t2878 = 0.231098203479*t2859;
  t2896 = t2884 + t1168;
  t2901 = 0.164383620275*t2896;
  t2902 = t2787 + t2825 + t2878 + t2901;
  t2907 = 1.639789470231751e-8*var1[15];
  t2935 = 0.22983603018311177*t177;
  t2974 = t2936 + t1294;
  t2976 = 0.164383620275*t2974;
  t3012 = t2847 + t1211;
  t3035 = 0.18957839082800002*t3012;
  t3047 = t2907 + t2935 + t2976 + t3035;
  t3066 = 1.568745163810375e-7*var1[15];
  t3105 = 0.08219200580743281*t177;
  t3110 = t2936 + t763;
  t3121 = 0.231098203479*t3110;
  t3122 = t2884 + t214;
  t3137 = 0.18957839082800002*t3122;
  t3152 = t3066 + t3105 + t3121 + t3137;
  p_output1[0]=t1080 + 0.703234*t1188 - 0.073913*t1308;
  p_output1[1]=t1659 + 0.703234*t1732 - 0.073913*t1772;
  p_output1[2]=t2108 + 0.703234*t2135 - 0.073913*t2162;
  p_output1[3]=0.;
  p_output1[4]=-0.104528*t1188 - 0.994522*t1308;
  p_output1[5]=-0.104528*t1732 - 0.994522*t1772;
  p_output1[6]=-0.104528*t2135 - 0.994522*t2162;
  p_output1[7]=0.;
  p_output1[8]=t1080 - 0.703234*t1188 + 0.073913*t1308;
  p_output1[9]=t1659 - 0.703234*t1732 + 0.073913*t1772;
  p_output1[10]=t2108 - 0.703234*t2135 + 0.073913*t2162;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.140811*t1069 + 0.213182*t1188 + 0.230568*t1308 + t1059*t3152 + t2549*t311*t339 + t2619*t517 + t2659*t580 + t2676*t639 + t2777*t681 + t2902*t697 + t3047*t865 + var1[0];
  p_output1[13]=0. + 0.140811*t1652 + 0.213182*t1732 + 0.230568*t1772 + t1368*t2619 + t1388*t2659 + t1408*t2676 + t1428*t2777 + t1459*t2902 + t1531*t3047 + t1627*t3152 + t2549*t339*t489 + var1[1];
  p_output1[14]=0. + 0.140811*t2082 + 0.213182*t2135 + 0.230568*t2162 + t1845*t2676 + t1875*t2777 + t1890*t2902 + t1943*t3047 + t2022*t3152 + t2619*t339*t431 - 1.*t2549*t432 + t2659*t339*t499 + var1[2];
  p_output1[15]=1.;
}



void T_left_shoulder_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

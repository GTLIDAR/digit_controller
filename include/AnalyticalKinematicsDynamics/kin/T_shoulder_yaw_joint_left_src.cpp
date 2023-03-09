/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shoulder_yaw_joint_left_src.h"

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
  double t228;
  double t491;
  double t512;
  double t494;
  double t515;
  double t392;
  double t424;
  double t464;
  double t584;
  double t505;
  double t518;
  double t548;
  double t472;
  double t595;
  double t615;
  double t616;
  double t162;
  double t176;
  double t181;
  double t213;
  double t277;
  double t324;
  double t558;
  double t631;
  double t645;
  double t685;
  double t695;
  double t703;
  double t372;
  double t376;
  double t387;
  double t654;
  double t665;
  double t666;
  double t724;
  double t754;
  double t816;
  double t821;
  double t836;
  double t839;
  double t844;
  double t869;
  double t877;
  double t898;
  double t182;
  double t936;
  double t989;
  double t1052;
  double t1076;
  double t1101;
  double t1122;
  double t1134;
  double t1153;
  double t1192;
  double t1205;
  double t1256;
  double t779;
  double t217;
  double t223;
  double t1476;
  double t1486;
  double t1499;
  double t1525;
  double t1527;
  double t1531;
  double t786;
  double t808;
  double t1520;
  double t1536;
  double t1541;
  double t1580;
  double t1584;
  double t1589;
  double t921;
  double t923;
  double t1238;
  double t1248;
  double t1468;
  double t1573;
  double t1590;
  double t1597;
  double t1264;
  double t1275;
  double t1603;
  double t1613;
  double t1617;
  double t1624;
  double t1293;
  double t1299;
  double t1685;
  double t1692;
  double t1701;
  double t1706;
  double t1348;
  double t1366;
  double t1408;
  double t1413;
  double t1420;
  double t1422;
  double t1948;
  double t1966;
  double t1974;
  double t2077;
  double t2084;
  double t2097;
  double t1924;
  double t1984;
  double t2141;
  double t2172;
  double t2246;
  double t2257;
  double t2263;
  double t2265;
  double t2278;
  double t2284;
  double t2289;
  double t2299;
  double t1250;
  double t1286;
  double t1300;
  double t1305;
  double t1372;
  double t1417;
  double t1426;
  double t1431;
  double t1782;
  double t1806;
  double t1807;
  double t1835;
  double t1844;
  double t1862;
  double t1877;
  double t1880;
  double t2345;
  double t2388;
  double t2401;
  double t2405;
  double t2454;
  double t2462;
  double t2470;
  double t2486;
  double t764;
  double t912;
  double t1209;
  double t1214;
  double t1231;
  double t1599;
  double t1642;
  double t1729;
  double t1748;
  double t1761;
  double t2237;
  double t2271;
  double t2310;
  double t2314;
  double t2319;
  double t2776;
  double t2816;
  double t3018;
  double t3078;
  double t3034;
  double t2724;
  double t2736;
  double t2747;
  double t2767;
  double t2822;
  double t2824;
  double t2827;
  double t2842;
  double t2860;
  double t2866;
  double t2874;
  double t2907;
  double t2923;
  double t2929;
  double t2959;
  double t2960;
  double t2967;
  double t2968;
  double t2984;
  double t3000;
  double t3020;
  double t3032;
  double t3040;
  double t3048;
  double t3059;
  double t3072;
  double t3073;
  double t3080;
  double t3082;
  double t3099;
  double t3102;
  double t3106;
  double t3115;
  double t3140;
  double t3145;
  double t3147;
  double t3162;
  double t3163;
  double t3176;
  t228 = Cos(var1[3]);
  t491 = Cos(var1[5]);
  t512 = Sin(var1[3]);
  t494 = Sin(var1[4]);
  t515 = Sin(var1[5]);
  t392 = Cos(var1[14]);
  t424 = -1.*t392;
  t464 = 1. + t424;
  t584 = Cos(var1[13]);
  t505 = t228*t491*t494;
  t518 = t512*t515;
  t548 = t505 + t518;
  t472 = Sin(var1[13]);
  t595 = -1.*t491*t512;
  t615 = t228*t494*t515;
  t616 = t595 + t615;
  t162 = Cos(var1[15]);
  t176 = -1.*t162;
  t181 = 1. + t176;
  t213 = Sin(var1[15]);
  t277 = Cos(var1[4]);
  t324 = Sin(var1[14]);
  t558 = -1.*t472*t548;
  t631 = t584*t616;
  t645 = t558 + t631;
  t685 = t584*t548;
  t695 = t472*t616;
  t703 = t685 + t695;
  t372 = 0.994522*t324;
  t376 = 0. + t372;
  t387 = t228*t277*t376;
  t654 = 0.103955395616*t464*t645;
  t665 = -0.9890740084840001*t464;
  t666 = 1. + t665;
  t724 = t666*t703;
  t754 = t387 + t654 + t724;
  t816 = -0.104528*t324;
  t821 = 0. + t816;
  t836 = t228*t277*t821;
  t839 = -0.010926102783999999*t464;
  t844 = 1. + t839;
  t869 = t844*t645;
  t877 = 0.103955395616*t464*t703;
  t898 = t836 + t869 + t877;
  t182 = -0.49726168403800003*t181;
  t936 = -1.0000001112680001*t464;
  t989 = 1. + t936;
  t1052 = t989*t228*t277;
  t1076 = 0.104528*t324;
  t1101 = 0. + t1076;
  t1122 = t1101*t645;
  t1134 = -0.994522*t324;
  t1153 = 0. + t1134;
  t1192 = t1153*t703;
  t1205 = t1052 + t1122 + t1192;
  t1256 = -0.051978134642000004*t181;
  t779 = 0.05226439969100001*t181;
  t217 = -0.073913*t213;
  t223 = t182 + t217;
  t1476 = t491*t512*t494;
  t1486 = -1.*t228*t515;
  t1499 = t1476 + t1486;
  t1525 = t228*t491;
  t1527 = t512*t494*t515;
  t1531 = t1525 + t1527;
  t786 = -0.703234*t213;
  t808 = t779 + t786;
  t1520 = -1.*t472*t1499;
  t1536 = t584*t1531;
  t1541 = t1520 + t1536;
  t1580 = t584*t1499;
  t1584 = t472*t1531;
  t1589 = t1580 + t1584;
  t921 = -0.500001190325*t181;
  t923 = 1. + t921;
  t1238 = -0.5054634410180001*t181;
  t1248 = 1. + t1238;
  t1468 = t277*t376*t512;
  t1573 = 0.103955395616*t464*t1541;
  t1590 = t666*t1589;
  t1597 = t1468 + t1573 + t1590;
  t1264 = -0.707107*t213;
  t1275 = t1256 + t1264;
  t1603 = t277*t821*t512;
  t1613 = t844*t1541;
  t1617 = 0.103955395616*t464*t1589;
  t1624 = t1603 + t1613 + t1617;
  t1293 = 0.073913*t213;
  t1299 = t182 + t1293;
  t1685 = t989*t277*t512;
  t1692 = t1101*t1541;
  t1701 = t1153*t1589;
  t1706 = t1685 + t1692 + t1701;
  t1348 = 0.707107*t213;
  t1366 = t1256 + t1348;
  t1408 = -0.9945383682050002*t181;
  t1413 = 1. + t1408;
  t1420 = 0.703234*t213;
  t1422 = t779 + t1420;
  t1948 = -1.*t277*t491*t472;
  t1966 = t584*t277*t515;
  t1974 = t1948 + t1966;
  t2077 = t584*t277*t491;
  t2084 = t277*t472*t515;
  t2097 = t2077 + t2084;
  t1924 = -1.*t376*t494;
  t1984 = 0.103955395616*t464*t1974;
  t2141 = t666*t2097;
  t2172 = t1924 + t1984 + t2141;
  t2246 = -1.*t821*t494;
  t2257 = t844*t1974;
  t2263 = 0.103955395616*t464*t2097;
  t2265 = t2246 + t2257 + t2263;
  t2278 = -1.*t989*t494;
  t2284 = t1101*t1974;
  t2289 = t1153*t2097;
  t2299 = t2278 + t2284 + t2289;
  t1250 = t1248*t754;
  t1286 = t1275*t898;
  t1300 = t1299*t1205;
  t1305 = t1250 + t1286 + t1300;
  t1372 = t1366*t754;
  t1417 = t1413*t898;
  t1426 = t1422*t1205;
  t1431 = t1372 + t1417 + t1426;
  t1782 = t1248*t1597;
  t1806 = t1275*t1624;
  t1807 = t1299*t1706;
  t1835 = t1782 + t1806 + t1807;
  t1844 = t1366*t1597;
  t1862 = t1413*t1624;
  t1877 = t1422*t1706;
  t1880 = t1844 + t1862 + t1877;
  t2345 = t1248*t2172;
  t2388 = t1275*t2265;
  t2401 = t1299*t2299;
  t2405 = t2345 + t2388 + t2401;
  t2454 = t1366*t2172;
  t2462 = t1413*t2265;
  t2470 = t1422*t2299;
  t2486 = t2454 + t2462 + t2470;
  t764 = t223*t754;
  t912 = t808*t898;
  t1209 = t923*t1205;
  t1214 = t764 + t912 + t1209;
  t1231 = 0.707107*t1214;
  t1599 = t223*t1597;
  t1642 = t808*t1624;
  t1729 = t923*t1706;
  t1748 = t1599 + t1642 + t1729;
  t1761 = 0.707107*t1748;
  t2237 = t223*t2172;
  t2271 = t808*t2265;
  t2310 = t923*t2299;
  t2314 = t2237 + t2271 + t2310;
  t2319 = 0.707107*t2314;
  t2776 = -1.*t584;
  t2816 = 1. + t2776;
  t3018 = 0.051978134642000004*t181;
  t3078 = -0.05226439969100001*t181;
  t3034 = 0.49726168403800003*t181;
  t2724 = -0.056500534356700764*t464;
  t2736 = 0.38315650737400003*t1153;
  t2747 = -0.040271188976*t1101;
  t2767 = 0. + t2724 + t2736 + t2747;
  t2822 = 0.4*t2816;
  t2824 = 0.12*t472;
  t2827 = 0. + t2822 + t2824;
  t2842 = 0.12*t2816;
  t2860 = -0.4*t472;
  t2866 = 0. + t2842 + t2860;
  t2874 = 1.1345904784751044e-7*var1[14];
  t2907 = -0.04027119345689465*t464;
  t2923 = -0.05650052807*t821;
  t2929 = t2874 + t2907 + t2923;
  t2959 = 1.1924972351948546e-8*var1[14];
  t2960 = 0.38315655000705834*t464;
  t2967 = -0.05650052807*t376;
  t2968 = t2959 + t2960 + t2967;
  t2984 = -1.5601527583902087e-7*var1[15];
  t3000 = 0.09582494577057615*t181;
  t3020 = t3018 + t1264;
  t3032 = 0.231098203479*t3020;
  t3040 = t3034 + t1293;
  t3048 = 0.164383620275*t3040;
  t3059 = t2984 + t3000 + t3032 + t3048;
  t3072 = 1.639789470231751e-8*var1[15];
  t3073 = 0.22983603018311177*t181;
  t3080 = t3078 + t1420;
  t3082 = 0.164383620275*t3080;
  t3099 = t3018 + t1348;
  t3102 = 0.18957839082800002*t3099;
  t3106 = t3072 + t3073 + t3082 + t3102;
  t3115 = 1.568745163810375e-7*var1[15];
  t3140 = 0.08219200580743281*t181;
  t3145 = t3078 + t786;
  t3147 = 0.231098203479*t3145;
  t3162 = t3034 + t217;
  t3163 = 0.18957839082800002*t3162;
  t3176 = t3115 + t3140 + t3147 + t3163;
  p_output1[0]=t1231 + 0.703234*t1305 - 0.073913*t1431;
  p_output1[1]=t1761 + 0.703234*t1835 - 0.073913*t1880;
  p_output1[2]=t2319 + 0.703234*t2405 - 0.073913*t2486;
  p_output1[3]=0.;
  p_output1[4]=-0.104528*t1305 - 0.994522*t1431;
  p_output1[5]=-0.104528*t1835 - 0.994522*t1880;
  p_output1[6]=-0.104528*t2405 - 0.994522*t2486;
  p_output1[7]=0.;
  p_output1[8]=t1231 - 0.703234*t1305 + 0.073913*t1431;
  p_output1[9]=t1761 - 0.703234*t1835 + 0.073913*t1880;
  p_output1[10]=t2319 - 0.703234*t2405 + 0.073913*t2486;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.060173*t1214 + 0.293218*t1305 + 0.220205*t1431 + t228*t2767*t277 + t1205*t3176 + t2827*t548 + t2866*t616 + t2929*t645 + t2968*t703 + t3059*t754 + t3106*t898 + var1[0];
  p_output1[13]=0. + 0.060173*t1748 + 0.293218*t1835 + 0.220205*t1880 + t1499*t2827 + t1531*t2866 + t1541*t2929 + t1589*t2968 + t1597*t3059 + t1624*t3106 + t1706*t3176 + t2767*t277*t512 + var1[1];
  p_output1[14]=0. + 0.060173*t2314 + 0.293218*t2405 + 0.220205*t2486 + t1974*t2929 + t2097*t2968 + t2172*t3059 + t2265*t3106 + t2299*t3176 + t277*t2827*t491 - 1.*t2767*t494 + t277*t2866*t515 + var1[2];
  p_output1[15]=1.;
}



void T_shoulder_yaw_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

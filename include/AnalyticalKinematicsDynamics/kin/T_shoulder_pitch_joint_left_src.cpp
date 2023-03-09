/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shoulder_pitch_joint_left_src.h"

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
  double t104;
  double t496;
  double t607;
  double t502;
  double t659;
  double t377;
  double t413;
  double t487;
  double t719;
  double t512;
  double t671;
  double t685;
  double t489;
  double t733;
  double t737;
  double t772;
  double t108;
  double t226;
  double t703;
  double t811;
  double t842;
  double t879;
  double t880;
  double t890;
  double t281;
  double t298;
  double t851;
  double t852;
  double t1294;
  double t1299;
  double t1309;
  double t1329;
  double t1332;
  double t1337;
  double t910;
  double t924;
  double t979;
  double t989;
  double t1312;
  double t1343;
  double t1353;
  double t1412;
  double t1457;
  double t1473;
  double t1082;
  double t1154;
  double t1164;
  double t1204;
  double t1224;
  double t1263;
  double t1862;
  double t1864;
  double t1870;
  double t1892;
  double t1894;
  double t1907;
  double t349;
  double t848;
  double t895;
  double t900;
  double t908;
  double t932;
  double t991;
  double t1011;
  double t1063;
  double t1076;
  double t1155;
  double t1219;
  double t1268;
  double t1269;
  double t1292;
  double t1400;
  double t1483;
  double t1495;
  double t1559;
  double t1596;
  double t1599;
  double t1673;
  double t1706;
  double t1726;
  double t1733;
  double t1808;
  double t1821;
  double t1837;
  double t1856;
  double t1889;
  double t1918;
  double t1919;
  double t1925;
  double t1940;
  double t1942;
  double t1944;
  double t1945;
  double t1949;
  double t1952;
  double t1985;
  double t2022;
  double t2029;
  double t2299;
  double t2310;
  double t2211;
  double t2230;
  double t2269;
  double t2272;
  double t2324;
  double t2334;
  double t2342;
  double t2373;
  double t2433;
  double t2435;
  double t2443;
  double t2449;
  double t2452;
  double t2461;
  double t2470;
  double t2497;
  double t2501;
  double t2520;
  t104 = Cos(var1[3]);
  t496 = Cos(var1[5]);
  t607 = Sin(var1[3]);
  t502 = Sin(var1[4]);
  t659 = Sin(var1[5]);
  t377 = Cos(var1[14]);
  t413 = -1.*t377;
  t487 = 1. + t413;
  t719 = Cos(var1[13]);
  t512 = t104*t496*t502;
  t671 = t607*t659;
  t685 = t512 + t671;
  t489 = Sin(var1[13]);
  t733 = -1.*t496*t607;
  t737 = t104*t502*t659;
  t772 = t733 + t737;
  t108 = Cos(var1[4]);
  t226 = Sin(var1[14]);
  t703 = -1.*t489*t685;
  t811 = t719*t772;
  t842 = t703 + t811;
  t879 = t719*t685;
  t880 = t489*t772;
  t890 = t879 + t880;
  t281 = 0.994522*t226;
  t298 = 0. + t281;
  t851 = -0.9890740084840001*t487;
  t852 = 1. + t851;
  t1294 = t496*t607*t502;
  t1299 = -1.*t104*t659;
  t1309 = t1294 + t1299;
  t1329 = t104*t496;
  t1332 = t607*t502*t659;
  t1337 = t1329 + t1332;
  t910 = -0.104528*t226;
  t924 = 0. + t910;
  t979 = -0.010926102783999999*t487;
  t989 = 1. + t979;
  t1312 = -1.*t489*t1309;
  t1343 = t719*t1337;
  t1353 = t1312 + t1343;
  t1412 = t719*t1309;
  t1457 = t489*t1337;
  t1473 = t1412 + t1457;
  t1082 = -1.0000001112680001*t487;
  t1154 = 1. + t1082;
  t1164 = 0.104528*t226;
  t1204 = 0. + t1164;
  t1224 = -0.994522*t226;
  t1263 = 0. + t1224;
  t1862 = -1.*t108*t496*t489;
  t1864 = t719*t108*t659;
  t1870 = t1862 + t1864;
  t1892 = t719*t108*t496;
  t1894 = t108*t489*t659;
  t1907 = t1892 + t1894;
  t349 = t104*t108*t298;
  t848 = 0.103955395616*t487*t842;
  t895 = t852*t890;
  t900 = t349 + t848 + t895;
  t908 = 0.703234*t900;
  t932 = t104*t108*t924;
  t991 = t989*t842;
  t1011 = 0.103955395616*t487*t890;
  t1063 = t932 + t991 + t1011;
  t1076 = -0.073913*t1063;
  t1155 = t1154*t104*t108;
  t1219 = t1204*t842;
  t1268 = t1263*t890;
  t1269 = t1155 + t1219 + t1268;
  t1292 = t108*t298*t607;
  t1400 = 0.103955395616*t487*t1353;
  t1483 = t852*t1473;
  t1495 = t1292 + t1400 + t1483;
  t1559 = 0.703234*t1495;
  t1596 = t108*t924*t607;
  t1599 = t989*t1353;
  t1673 = 0.103955395616*t487*t1473;
  t1706 = t1596 + t1599 + t1673;
  t1726 = -0.073913*t1706;
  t1733 = t1154*t108*t607;
  t1808 = t1204*t1353;
  t1821 = t1263*t1473;
  t1837 = t1733 + t1808 + t1821;
  t1856 = -1.*t298*t502;
  t1889 = 0.103955395616*t487*t1870;
  t1918 = t852*t1907;
  t1919 = t1856 + t1889 + t1918;
  t1925 = 0.703234*t1919;
  t1940 = -1.*t924*t502;
  t1942 = t989*t1870;
  t1944 = 0.103955395616*t487*t1907;
  t1945 = t1940 + t1942 + t1944;
  t1949 = -0.073913*t1945;
  t1952 = -1.*t1154*t502;
  t1985 = t1204*t1870;
  t2022 = t1263*t1907;
  t2029 = t1952 + t1985 + t2022;
  t2299 = -1.*t719;
  t2310 = 1. + t2299;
  t2211 = -0.056500534356700764*t487;
  t2230 = 0.38315650737400003*t1263;
  t2269 = -0.040271188976*t1204;
  t2272 = 0. + t2211 + t2230 + t2269;
  t2324 = 0.4*t2310;
  t2334 = 0.12*t489;
  t2342 = 0. + t2324 + t2334;
  t2373 = 0.12*t2310;
  t2433 = -0.4*t489;
  t2435 = 0. + t2373 + t2433;
  t2443 = 1.1345904784751044e-7*var1[14];
  t2449 = -0.04027119345689465*t487;
  t2452 = -0.05650052807*t924;
  t2461 = t2443 + t2449 + t2452;
  t2470 = 1.1924972351948546e-8*var1[14];
  t2497 = 0.38315655000705834*t487;
  t2501 = -0.05650052807*t298;
  t2520 = t2470 + t2497 + t2501;
  p_output1[0]=t1076 + 0.707107*t1269 + t908;
  p_output1[1]=t1559 + t1726 + 0.707107*t1837;
  p_output1[2]=t1925 + t1949 + 0.707107*t2029;
  p_output1[3]=0.;
  p_output1[4]=t1076 - 0.707107*t1269 + t908;
  p_output1[5]=t1559 + t1726 - 0.707107*t1837;
  p_output1[6]=t1925 + t1949 - 0.707107*t2029;
  p_output1[7]=0.;
  p_output1[8]=-0.994522*t1063 - 0.104528*t900;
  p_output1[9]=-0.104528*t1495 - 0.994522*t1706;
  p_output1[10]=-0.104528*t1919 - 0.994522*t1945;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.108558*t1063 - 0.0565*t1269 + t104*t108*t2272 + t2342*t685 + t2435*t772 + t2461*t842 + t2520*t890 + 0.398799*t900 + var1[0];
  p_output1[13]=0. + 0.398799*t1495 + 0.108558*t1706 - 0.0565*t1837 + t1309*t2342 + t1337*t2435 + t1353*t2461 + t1473*t2520 + t108*t2272*t607 + var1[1];
  p_output1[14]=0. + 0.398799*t1919 + 0.108558*t1945 - 0.0565*t2029 + t1870*t2461 + t1907*t2520 + t108*t2342*t496 - 1.*t2272*t502 + t108*t2435*t659 + var1[2];
  p_output1[15]=1.;
}



void T_shoulder_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

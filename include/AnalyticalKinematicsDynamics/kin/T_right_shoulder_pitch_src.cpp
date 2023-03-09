/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_right_shoulder_pitch_src.h"

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
  double t23;
  double t358;
  double t398;
  double t377;
  double t410;
  double t287;
  double t339;
  double t354;
  double t506;
  double t382;
  double t457;
  double t463;
  double t355;
  double t509;
  double t525;
  double t554;
  double t31;
  double t49;
  double t468;
  double t561;
  double t576;
  double t700;
  double t723;
  double t728;
  double t111;
  double t134;
  double t654;
  double t682;
  double t1159;
  double t1166;
  double t1184;
  double t1192;
  double t1220;
  double t1230;
  double t835;
  double t848;
  double t867;
  double t899;
  double t1186;
  double t1235;
  double t1251;
  double t1339;
  double t1378;
  double t1387;
  double t1009;
  double t1015;
  double t1018;
  double t1034;
  double t1045;
  double t1052;
  double t1604;
  double t1606;
  double t1614;
  double t1618;
  double t1622;
  double t1626;
  double t262;
  double t577;
  double t730;
  double t758;
  double t861;
  double t919;
  double t933;
  double t937;
  double t1016;
  double t1036;
  double t1063;
  double t1087;
  double t1105;
  double t1156;
  double t1283;
  double t1394;
  double t1428;
  double t1475;
  double t1487;
  double t1488;
  double t1489;
  double t1505;
  double t1520;
  double t1524;
  double t1528;
  double t1584;
  double t1601;
  double t1615;
  double t1657;
  double t1680;
  double t1711;
  double t1718;
  double t1757;
  double t1783;
  double t1805;
  double t1851;
  double t1857;
  double t1958;
  double t1968;
  double t2191;
  double t2214;
  double t2144;
  double t2158;
  double t2163;
  double t2170;
  double t2215;
  double t2269;
  double t2287;
  double t2311;
  double t2316;
  double t2324;
  double t2346;
  double t2347;
  double t2349;
  double t2355;
  double t2367;
  double t2395;
  double t2397;
  double t2426;
  t23 = Cos(var1[3]);
  t358 = Cos(var1[5]);
  t398 = Sin(var1[3]);
  t377 = Sin(var1[4]);
  t410 = Sin(var1[5]);
  t287 = Cos(var1[25]);
  t339 = -1.*t287;
  t354 = 1. + t339;
  t506 = Cos(var1[24]);
  t382 = t23*t358*t377;
  t457 = t398*t410;
  t463 = t382 + t457;
  t355 = Sin(var1[24]);
  t509 = -1.*t358*t398;
  t525 = t23*t377*t410;
  t554 = t509 + t525;
  t31 = Cos(var1[4]);
  t49 = Sin(var1[25]);
  t468 = -1.*t355*t463;
  t561 = t506*t554;
  t576 = t468 + t561;
  t700 = t506*t463;
  t723 = t355*t554;
  t728 = t700 + t723;
  t111 = -0.994522*t49;
  t134 = 0. + t111;
  t654 = -0.9890740084840001*t354;
  t682 = 1. + t654;
  t1159 = t358*t398*t377;
  t1166 = -1.*t23*t410;
  t1184 = t1159 + t1166;
  t1192 = t23*t358;
  t1220 = t398*t377*t410;
  t1230 = t1192 + t1220;
  t835 = -0.104528*t49;
  t848 = 0. + t835;
  t867 = -0.010926102783999999*t354;
  t899 = 1. + t867;
  t1186 = -1.*t355*t1184;
  t1235 = t506*t1230;
  t1251 = t1186 + t1235;
  t1339 = t506*t1184;
  t1378 = t355*t1230;
  t1387 = t1339 + t1378;
  t1009 = -1.0000001112680001*t354;
  t1015 = 1. + t1009;
  t1018 = 0.104528*t49;
  t1034 = 0. + t1018;
  t1045 = 0.994522*t49;
  t1052 = 0. + t1045;
  t1604 = -1.*t31*t358*t355;
  t1606 = t506*t31*t410;
  t1614 = t1604 + t1606;
  t1618 = t506*t31*t358;
  t1622 = t31*t355*t410;
  t1626 = t1618 + t1622;
  t262 = t23*t31*t134;
  t577 = -0.103955395616*t354*t576;
  t730 = t682*t728;
  t758 = t262 + t577 + t730;
  t861 = t23*t31*t848;
  t919 = t899*t576;
  t933 = -0.103955395616*t354*t728;
  t937 = t861 + t919 + t933;
  t1016 = t1015*t23*t31;
  t1036 = t1034*t576;
  t1063 = t1052*t728;
  t1087 = t1016 + t1036 + t1063;
  t1105 = 0.707107*t1087;
  t1156 = t31*t134*t398;
  t1283 = -0.103955395616*t354*t1251;
  t1394 = t682*t1387;
  t1428 = t1156 + t1283 + t1394;
  t1475 = t31*t848*t398;
  t1487 = t899*t1251;
  t1488 = -0.103955395616*t354*t1387;
  t1489 = t1475 + t1487 + t1488;
  t1505 = t1015*t31*t398;
  t1520 = t1034*t1251;
  t1524 = t1052*t1387;
  t1528 = t1505 + t1520 + t1524;
  t1584 = 0.707107*t1528;
  t1601 = -1.*t134*t377;
  t1615 = -0.103955395616*t354*t1614;
  t1657 = t682*t1626;
  t1680 = t1601 + t1615 + t1657;
  t1711 = -1.*t848*t377;
  t1718 = t899*t1614;
  t1757 = -0.103955395616*t354*t1626;
  t1783 = t1711 + t1718 + t1757;
  t1805 = -1.*t1015*t377;
  t1851 = t1034*t1614;
  t1857 = t1052*t1626;
  t1958 = t1805 + t1851 + t1857;
  t1968 = 0.707107*t1958;
  t2191 = -1.*t506;
  t2214 = 1. + t2191;
  t2144 = -0.056500534356700764*t354;
  t2158 = 0.040271188976*t1034;
  t2163 = 0.38315650737400003*t1052;
  t2170 = 0. + t2144 + t2158 + t2163;
  t2215 = 0.4*t2214;
  t2269 = -0.12*t355;
  t2287 = 0. + t2215 + t2269;
  t2311 = -0.12*t2214;
  t2316 = -0.4*t355;
  t2324 = 0. + t2311 + t2316;
  t2346 = 1.1345904784751044e-7*var1[25];
  t2347 = 0.04027119345689465*t354;
  t2349 = -0.05650052807*t848;
  t2355 = t2346 + t2347 + t2349;
  t2367 = -1.1924972351948546e-8*var1[25];
  t2395 = 0.38315655000705834*t354;
  t2397 = -0.05650052807*t134;
  t2426 = t2367 + t2395 + t2397;
  p_output1[0]=t1105 + 0.703234*t758 + 0.073913*t937;
  p_output1[1]=0.703234*t1428 + 0.073913*t1489 + t1584;
  p_output1[2]=0.703234*t1680 + 0.073913*t1783 + t1968;
  p_output1[3]=0.;
  p_output1[4]=t1105 - 0.703234*t758 - 0.073913*t937;
  p_output1[5]=-0.703234*t1428 - 0.073913*t1489 + t1584;
  p_output1[6]=-0.703234*t1680 - 0.073913*t1783 + t1968;
  p_output1[7]=0.;
  p_output1[8]=-0.104528*t758 + 0.994522*t937;
  p_output1[9]=-0.104528*t1428 + 0.994522*t1489;
  p_output1[10]=-0.104528*t1680 + 0.994522*t1783;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.012773*t1087 + t2170*t23*t31 + t2287*t463 + t2324*t554 + t2355*t576 + t2426*t728 + 0.362968*t758 - 0.18652*t937 + var1[0];
  p_output1[13]=0. + 0.362968*t1428 - 0.18652*t1489 - 0.012773*t1528 + t1184*t2287 + t1230*t2324 + t1251*t2355 + t1387*t2426 + t2170*t31*t398 + var1[1];
  p_output1[14]=0. + 0.362968*t1680 - 0.18652*t1783 - 0.012773*t1958 + t1614*t2355 + t1626*t2426 + t2287*t31*t358 - 1.*t2170*t377 + t2324*t31*t410 + var1[2];
  p_output1[15]=1.;
}



void T_right_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

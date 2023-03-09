/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_left_shoulder_pitch_src.h"

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
  double t91;
  double t522;
  double t592;
  double t536;
  double t617;
  double t452;
  double t482;
  double t502;
  double t650;
  double t558;
  double t638;
  double t643;
  double t516;
  double t725;
  double t732;
  double t734;
  double t246;
  double t256;
  double t644;
  double t747;
  double t784;
  double t822;
  double t825;
  double t829;
  double t282;
  double t344;
  double t808;
  double t816;
  double t1269;
  double t1293;
  double t1334;
  double t1346;
  double t1420;
  double t1445;
  double t849;
  double t862;
  double t914;
  double t927;
  double t1342;
  double t1470;
  double t1481;
  double t1525;
  double t1545;
  double t1548;
  double t1028;
  double t1031;
  double t1078;
  double t1083;
  double t1125;
  double t1189;
  double t1737;
  double t1741;
  double t1752;
  double t1817;
  double t1819;
  double t1828;
  double t385;
  double t785;
  double t830;
  double t831;
  double t842;
  double t893;
  double t973;
  double t975;
  double t1000;
  double t1009;
  double t1068;
  double t1111;
  double t1194;
  double t1204;
  double t1256;
  double t1517;
  double t1592;
  double t1596;
  double t1603;
  double t1608;
  double t1624;
  double t1639;
  double t1647;
  double t1648;
  double t1654;
  double t1666;
  double t1699;
  double t1705;
  double t1733;
  double t1797;
  double t1831;
  double t1841;
  double t1843;
  double t1853;
  double t1855;
  double t1884;
  double t1890;
  double t1892;
  double t1893;
  double t1938;
  double t1969;
  double t1986;
  double t2269;
  double t2315;
  double t2231;
  double t2232;
  double t2240;
  double t2242;
  double t2320;
  double t2337;
  double t2341;
  double t2352;
  double t2358;
  double t2372;
  double t2376;
  double t2422;
  double t2424;
  double t2434;
  double t2440;
  double t2448;
  double t2493;
  double t2495;
  t91 = Cos(var1[3]);
  t522 = Cos(var1[5]);
  t592 = Sin(var1[3]);
  t536 = Sin(var1[4]);
  t617 = Sin(var1[5]);
  t452 = Cos(var1[14]);
  t482 = -1.*t452;
  t502 = 1. + t482;
  t650 = Cos(var1[13]);
  t558 = t91*t522*t536;
  t638 = t592*t617;
  t643 = t558 + t638;
  t516 = Sin(var1[13]);
  t725 = -1.*t522*t592;
  t732 = t91*t536*t617;
  t734 = t725 + t732;
  t246 = Cos(var1[4]);
  t256 = Sin(var1[14]);
  t644 = -1.*t516*t643;
  t747 = t650*t734;
  t784 = t644 + t747;
  t822 = t650*t643;
  t825 = t516*t734;
  t829 = t822 + t825;
  t282 = 0.994522*t256;
  t344 = 0. + t282;
  t808 = -0.9890740084840001*t502;
  t816 = 1. + t808;
  t1269 = t522*t592*t536;
  t1293 = -1.*t91*t617;
  t1334 = t1269 + t1293;
  t1346 = t91*t522;
  t1420 = t592*t536*t617;
  t1445 = t1346 + t1420;
  t849 = -0.104528*t256;
  t862 = 0. + t849;
  t914 = -0.010926102783999999*t502;
  t927 = 1. + t914;
  t1342 = -1.*t516*t1334;
  t1470 = t650*t1445;
  t1481 = t1342 + t1470;
  t1525 = t650*t1334;
  t1545 = t516*t1445;
  t1548 = t1525 + t1545;
  t1028 = -1.0000001112680001*t502;
  t1031 = 1. + t1028;
  t1078 = 0.104528*t256;
  t1083 = 0. + t1078;
  t1125 = -0.994522*t256;
  t1189 = 0. + t1125;
  t1737 = -1.*t246*t522*t516;
  t1741 = t650*t246*t617;
  t1752 = t1737 + t1741;
  t1817 = t650*t246*t522;
  t1819 = t246*t516*t617;
  t1828 = t1817 + t1819;
  t385 = t91*t246*t344;
  t785 = 0.103955395616*t502*t784;
  t830 = t816*t829;
  t831 = t385 + t785 + t830;
  t842 = 0.703234*t831;
  t893 = t91*t246*t862;
  t973 = t927*t784;
  t975 = 0.103955395616*t502*t829;
  t1000 = t893 + t973 + t975;
  t1009 = -0.073913*t1000;
  t1068 = t1031*t91*t246;
  t1111 = t1083*t784;
  t1194 = t1189*t829;
  t1204 = t1068 + t1111 + t1194;
  t1256 = t246*t344*t592;
  t1517 = 0.103955395616*t502*t1481;
  t1592 = t816*t1548;
  t1596 = t1256 + t1517 + t1592;
  t1603 = 0.703234*t1596;
  t1608 = t246*t862*t592;
  t1624 = t927*t1481;
  t1639 = 0.103955395616*t502*t1548;
  t1647 = t1608 + t1624 + t1639;
  t1648 = -0.073913*t1647;
  t1654 = t1031*t246*t592;
  t1666 = t1083*t1481;
  t1699 = t1189*t1548;
  t1705 = t1654 + t1666 + t1699;
  t1733 = -1.*t344*t536;
  t1797 = 0.103955395616*t502*t1752;
  t1831 = t816*t1828;
  t1841 = t1733 + t1797 + t1831;
  t1843 = 0.703234*t1841;
  t1853 = -1.*t862*t536;
  t1855 = t927*t1752;
  t1884 = 0.103955395616*t502*t1828;
  t1890 = t1853 + t1855 + t1884;
  t1892 = -0.073913*t1890;
  t1893 = -1.*t1031*t536;
  t1938 = t1083*t1752;
  t1969 = t1189*t1828;
  t1986 = t1893 + t1938 + t1969;
  t2269 = -1.*t650;
  t2315 = 1. + t2269;
  t2231 = -0.056500534356700764*t502;
  t2232 = 0.38315650737400003*t1189;
  t2240 = -0.040271188976*t1083;
  t2242 = 0. + t2231 + t2232 + t2240;
  t2320 = 0.4*t2315;
  t2337 = 0.12*t516;
  t2341 = 0. + t2320 + t2337;
  t2352 = 0.12*t2315;
  t2358 = -0.4*t516;
  t2372 = 0. + t2352 + t2358;
  t2376 = 1.1345904784751044e-7*var1[14];
  t2422 = -0.04027119345689465*t502;
  t2424 = -0.05650052807*t862;
  t2434 = t2376 + t2422 + t2424;
  t2440 = 1.1924972351948546e-8*var1[14];
  t2448 = 0.38315655000705834*t502;
  t2493 = -0.05650052807*t344;
  t2495 = t2440 + t2448 + t2493;
  p_output1[0]=t1009 + 0.707107*t1204 + t842;
  p_output1[1]=t1603 + t1648 + 0.707107*t1705;
  p_output1[2]=t1843 + t1892 + 0.707107*t1986;
  p_output1[3]=0.;
  p_output1[4]=t1009 - 0.707107*t1204 + t842;
  p_output1[5]=t1603 + t1648 - 0.707107*t1705;
  p_output1[6]=t1843 + t1892 - 0.707107*t1986;
  p_output1[7]=0.;
  p_output1[8]=-0.994522*t1000 - 0.104528*t831;
  p_output1[9]=-0.104528*t1596 - 0.994522*t1647;
  p_output1[10]=-0.104528*t1841 - 0.994522*t1890;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.18652*t1000 - 0.012773*t1204 + t2341*t643 + t2372*t734 + t2434*t784 + t2495*t829 + 0.362968*t831 + t2242*t246*t91 + var1[0];
  p_output1[13]=0. + 0.362968*t1596 + 0.18652*t1647 - 0.012773*t1705 + t1334*t2341 + t1445*t2372 + t1481*t2434 + t1548*t2495 + t2242*t246*t592 + var1[1];
  p_output1[14]=0. + 0.362968*t1841 + 0.18652*t1890 - 0.012773*t1986 + t1752*t2434 + t1828*t2495 + t2341*t246*t522 - 1.*t2242*t536 + t2372*t246*t617 + var1[2];
  p_output1[15]=1.;
}



void T_left_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

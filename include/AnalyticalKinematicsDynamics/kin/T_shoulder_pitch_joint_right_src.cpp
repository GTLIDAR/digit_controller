/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_shoulder_pitch_joint_right_src.h"

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
  double t16;
  double t423;
  double t494;
  double t460;
  double t511;
  double t400;
  double t406;
  double t413;
  double t528;
  double t464;
  double t517;
  double t520;
  double t415;
  double t562;
  double t573;
  double t575;
  double t98;
  double t121;
  double t525;
  double t583;
  double t611;
  double t664;
  double t670;
  double t687;
  double t174;
  double t289;
  double t620;
  double t663;
  double t1024;
  double t1038;
  double t1043;
  double t1116;
  double t1125;
  double t1127;
  double t715;
  double t717;
  double t803;
  double t809;
  double t1095;
  double t1144;
  double t1148;
  double t1160;
  double t1290;
  double t1299;
  double t828;
  double t829;
  double t925;
  double t927;
  double t940;
  double t943;
  double t1514;
  double t1526;
  double t1534;
  double t1552;
  double t1566;
  double t1567;
  double t321;
  double t615;
  double t702;
  double t707;
  double t801;
  double t810;
  double t814;
  double t817;
  double t871;
  double t933;
  double t962;
  double t974;
  double t977;
  double t1013;
  double t1154;
  double t1317;
  double t1326;
  double t1342;
  double t1354;
  double t1413;
  double t1431;
  double t1455;
  double t1462;
  double t1467;
  double t1496;
  double t1498;
  double t1507;
  double t1540;
  double t1575;
  double t1589;
  double t1600;
  double t1659;
  double t1687;
  double t1704;
  double t1715;
  double t1724;
  double t1757;
  double t1783;
  double t1789;
  double t1994;
  double t2042;
  double t1961;
  double t1963;
  double t1970;
  double t1978;
  double t2064;
  double t2068;
  double t2090;
  double t2093;
  double t2094;
  double t2096;
  double t2105;
  double t2106;
  double t2114;
  double t2117;
  double t2145;
  double t2150;
  double t2178;
  double t2184;
  t16 = Cos(var1[3]);
  t423 = Cos(var1[5]);
  t494 = Sin(var1[3]);
  t460 = Sin(var1[4]);
  t511 = Sin(var1[5]);
  t400 = Cos(var1[25]);
  t406 = -1.*t400;
  t413 = 1. + t406;
  t528 = Cos(var1[24]);
  t464 = t16*t423*t460;
  t517 = t494*t511;
  t520 = t464 + t517;
  t415 = Sin(var1[24]);
  t562 = -1.*t423*t494;
  t573 = t16*t460*t511;
  t575 = t562 + t573;
  t98 = Cos(var1[4]);
  t121 = Sin(var1[25]);
  t525 = -1.*t415*t520;
  t583 = t528*t575;
  t611 = t525 + t583;
  t664 = t528*t520;
  t670 = t415*t575;
  t687 = t664 + t670;
  t174 = -0.994522*t121;
  t289 = 0. + t174;
  t620 = -0.9890740084840001*t413;
  t663 = 1. + t620;
  t1024 = t423*t494*t460;
  t1038 = -1.*t16*t511;
  t1043 = t1024 + t1038;
  t1116 = t16*t423;
  t1125 = t494*t460*t511;
  t1127 = t1116 + t1125;
  t715 = -0.104528*t121;
  t717 = 0. + t715;
  t803 = -0.010926102783999999*t413;
  t809 = 1. + t803;
  t1095 = -1.*t415*t1043;
  t1144 = t528*t1127;
  t1148 = t1095 + t1144;
  t1160 = t528*t1043;
  t1290 = t415*t1127;
  t1299 = t1160 + t1290;
  t828 = -1.0000001112680001*t413;
  t829 = 1. + t828;
  t925 = 0.104528*t121;
  t927 = 0. + t925;
  t940 = 0.994522*t121;
  t943 = 0. + t940;
  t1514 = -1.*t98*t423*t415;
  t1526 = t528*t98*t511;
  t1534 = t1514 + t1526;
  t1552 = t528*t98*t423;
  t1566 = t98*t415*t511;
  t1567 = t1552 + t1566;
  t321 = t16*t98*t289;
  t615 = -0.103955395616*t413*t611;
  t702 = t663*t687;
  t707 = t321 + t615 + t702;
  t801 = t16*t98*t717;
  t810 = t809*t611;
  t814 = -0.103955395616*t413*t687;
  t817 = t801 + t810 + t814;
  t871 = t829*t16*t98;
  t933 = t927*t611;
  t962 = t943*t687;
  t974 = t871 + t933 + t962;
  t977 = 0.707107*t974;
  t1013 = t98*t289*t494;
  t1154 = -0.103955395616*t413*t1148;
  t1317 = t663*t1299;
  t1326 = t1013 + t1154 + t1317;
  t1342 = t98*t717*t494;
  t1354 = t809*t1148;
  t1413 = -0.103955395616*t413*t1299;
  t1431 = t1342 + t1354 + t1413;
  t1455 = t829*t98*t494;
  t1462 = t927*t1148;
  t1467 = t943*t1299;
  t1496 = t1455 + t1462 + t1467;
  t1498 = 0.707107*t1496;
  t1507 = -1.*t289*t460;
  t1540 = -0.103955395616*t413*t1534;
  t1575 = t663*t1567;
  t1589 = t1507 + t1540 + t1575;
  t1600 = -1.*t717*t460;
  t1659 = t809*t1534;
  t1687 = -0.103955395616*t413*t1567;
  t1704 = t1600 + t1659 + t1687;
  t1715 = -1.*t829*t460;
  t1724 = t927*t1534;
  t1757 = t943*t1567;
  t1783 = t1715 + t1724 + t1757;
  t1789 = 0.707107*t1783;
  t1994 = -1.*t528;
  t2042 = 1. + t1994;
  t1961 = -0.056500534356700764*t413;
  t1963 = 0.040271188976*t927;
  t1970 = 0.38315650737400003*t943;
  t1978 = 0. + t1961 + t1963 + t1970;
  t2064 = 0.4*t2042;
  t2068 = -0.12*t415;
  t2090 = 0. + t2064 + t2068;
  t2093 = -0.12*t2042;
  t2094 = -0.4*t415;
  t2096 = 0. + t2093 + t2094;
  t2105 = 1.1345904784751044e-7*var1[25];
  t2106 = 0.04027119345689465*t413;
  t2114 = -0.05650052807*t717;
  t2117 = t2105 + t2106 + t2114;
  t2145 = -1.1924972351948546e-8*var1[25];
  t2150 = 0.38315655000705834*t413;
  t2178 = -0.05650052807*t289;
  t2184 = t2145 + t2150 + t2178;
  p_output1[0]=0.703234*t707 + 0.073913*t817 + t977;
  p_output1[1]=0.703234*t1326 + 0.073913*t1431 + t1498;
  p_output1[2]=0.703234*t1589 + 0.073913*t1704 + t1789;
  p_output1[3]=0.;
  p_output1[4]=-0.703234*t707 - 0.073913*t817 + t977;
  p_output1[5]=-0.703234*t1326 - 0.073913*t1431 + t1498;
  p_output1[6]=-0.703234*t1589 - 0.073913*t1704 + t1789;
  p_output1[7]=0.;
  p_output1[8]=-0.104528*t707 + 0.994522*t817;
  p_output1[9]=-0.104528*t1326 + 0.994522*t1431;
  p_output1[10]=-0.104528*t1589 + 0.994522*t1704;
  p_output1[11]=0.;
  p_output1[12]=0. + t2090*t520 + t2096*t575 + t2117*t611 + t2184*t687 + 0.398799*t707 - 0.108558*t817 - 0.0565*t974 + t16*t1978*t98 + var1[0];
  p_output1[13]=0. + 0.398799*t1326 - 0.108558*t1431 - 0.0565*t1496 + t1043*t2090 + t1127*t2096 + t1148*t2117 + t1299*t2184 + t1978*t494*t98 + var1[1];
  p_output1[14]=0. + 0.398799*t1589 - 0.108558*t1704 - 0.0565*t1783 + t1534*t2117 + t1567*t2184 - 1.*t1978*t460 + t2090*t423*t98 + t2096*t511*t98 + var1[2];
  p_output1[15]=1.;
}



void T_shoulder_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

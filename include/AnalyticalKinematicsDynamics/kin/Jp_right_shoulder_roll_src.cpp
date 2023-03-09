/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_right_shoulder_roll_src.h"

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
  double t571;
  double t681;
  double t729;
  double t962;
  double t1217;
  double t1545;
  double t1332;
  double t1336;
  double t1558;
  double t1530;
  double t1607;
  double t1609;
  double t1710;
  double t1711;
  double t1745;
  double t570;
  double t984;
  double t1316;
  double t1320;
  double t1682;
  double t1691;
  double t1699;
  double t2170;
  double t2171;
  double t2173;
  double t2226;
  double t2227;
  double t2240;
  double t3514;
  double t3524;
  double t3590;
  double t2320;
  double t3713;
  double t3728;
  double t3729;
  double t1872;
  double t2289;
  double t2298;
  double t2306;
  double t3917;
  double t3931;
  double t3938;
  double t3957;
  double t3966;
  double t4054;
  double t4065;
  double t4103;
  t571 = Sin(var1[3]);
  t681 = Cos(var1[24]);
  t729 = -1.*t681;
  t962 = 1. + t729;
  t1217 = Sin(var1[24]);
  t1545 = Cos(var1[3]);
  t1332 = Cos(var1[5]);
  t1336 = Sin(var1[4]);
  t1558 = Sin(var1[5]);
  t1530 = -1.*t1332*t571*t1336;
  t1607 = t1545*t1558;
  t1609 = t1530 + t1607;
  t1710 = -1.*t1545*t1332;
  t1711 = -1.*t571*t1336*t1558;
  t1745 = t1710 + t1711;
  t570 = Cos(var1[4]);
  t984 = 0.4*t962;
  t1316 = -0.12*t1217;
  t1320 = 0. + t984 + t1316;
  t1682 = -0.12*t962;
  t1691 = -0.4*t1217;
  t1699 = 0. + t1682 + t1691;
  t2170 = t1545*t1332*t1336;
  t2171 = t571*t1558;
  t2173 = t2170 + t2171;
  t2226 = -1.*t1332*t571;
  t2227 = t1545*t1336*t1558;
  t2240 = t2226 + t2227;
  t3514 = t1332*t571;
  t3524 = -1.*t1545*t1336*t1558;
  t3590 = t3514 + t3524;
  t2320 = t681*t2173;
  t3713 = t1332*t571*t1336;
  t3728 = -1.*t1545*t1558;
  t3729 = t3713 + t3728;
  t1872 = t681*t1745;
  t2289 = -1.*t1217*t2173;
  t2298 = t681*t2240;
  t2306 = t2289 + t2298;
  t3917 = -0.12*t681;
  t3931 = 0.4*t1217;
  t3938 = t3917 + t3931;
  t3957 = -0.4*t681;
  t3966 = t3957 + t1316;
  t4054 = t1545*t1332;
  t4065 = t571*t1336*t1558;
  t4103 = t4054 + t4065;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1320*t1609 + t1699*t1745 - 0.11689*(-1.*t1217*t1609 + t1872) + 0.02441*t570*t571 + 0.400559*(t1217*t1745 + t1609*t681);
  p_output1[10]=t1320*t2173 + t1699*t2240 - 0.11689*t2306 + 0.400559*(t1217*t2240 + t2320) - 0.02441*t1545*t570;
  p_output1[11]=0;
  p_output1[12]=0.02441*t1336*t1545 + t1320*t1332*t1545*t570 + t1545*t1558*t1699*t570 + 0.400559*(t1217*t1545*t1558*t570 + t1332*t1545*t570*t681) - 0.11689*(-1.*t1217*t1332*t1545*t570 + t1545*t1558*t570*t681);
  p_output1[13]=0.02441*t1336*t571 + t1320*t1332*t570*t571 + t1558*t1699*t570*t571 + 0.400559*(t1217*t1558*t570*t571 + t1332*t570*t571*t681) - 0.11689*(-1.*t1217*t1332*t570*t571 + t1558*t570*t571*t681);
  p_output1[14]=-1.*t1320*t1332*t1336 - 1.*t1336*t1558*t1699 + 0.02441*t570 + 0.400559*(-1.*t1217*t1336*t1558 - 1.*t1332*t1336*t681) - 0.11689*(t1217*t1332*t1336 - 1.*t1336*t1558*t681);
  p_output1[15]=t1699*t2173 + t1320*t3590 - 0.11689*(t2320 - 1.*t1217*t3590) + 0.400559*(t1217*t2173 + t3590*t681);
  p_output1[16]=t1320*t1745 + t1699*t3729 + 0.400559*(t1872 + t1217*t3729) - 0.11689*(-1.*t1217*t1745 + t3729*t681);
  p_output1[17]=-1.*t1320*t1558*t570 + t1332*t1699*t570 - 0.11689*(t1217*t1558*t570 + t1332*t570*t681) + 0.400559*(t1217*t1332*t570 - 1.*t1558*t570*t681);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
  p_output1[72]=0.400559*t2306 + t2173*t3938 + t2240*t3966 - 0.11689*(-1.*t1217*t2240 - 1.*t2173*t681);
  p_output1[73]=t3729*t3938 + t3966*t4103 - 0.11689*(-1.*t1217*t4103 - 1.*t3729*t681) + 0.400559*(-1.*t1217*t3729 + t4103*t681);
  p_output1[74]=t1332*t3938*t570 + t1558*t3966*t570 - 0.11689*(-1.*t1217*t1558*t570 - 1.*t1332*t570*t681) + 0.400559*(-1.*t1217*t1332*t570 + t1558*t570*t681);
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jp_right_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

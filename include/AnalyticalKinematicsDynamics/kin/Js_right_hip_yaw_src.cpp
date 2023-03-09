/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_right_hip_yaw_src.h"

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
  double t160;
  double t275;
  double t365;
  double t373;
  double t578;
  double t629;
  double t583;
  double t649;
  double t650;
  double t1113;
  double t1056;
  double t1197;
  double t1210;
  double t1214;
  double t728;
  double t729;
  double t730;
  double t1378;
  double t1383;
  double t1391;
  double t1400;
  double t1402;
  double t1405;
  double t1412;
  double t1413;
  double t1415;
  double t1386;
  double t1423;
  double t1424;
  double t1461;
  double t1468;
  double t1473;
  double t1477;
  double t1478;
  double t1487;
  double t1498;
  double t1542;
  double t1545;
  double t1621;
  double t1316;
  double t1336;
  double t1351;
  double t99;
  double t1092;
  double t1239;
  double t1256;
  double t1530;
  double t1532;
  double t1533;
  double t1733;
  double t1734;
  double t1740;
  double t1768;
  double t1777;
  double t1805;
  double t1302;
  double t1306;
  double t1309;
  double t1986;
  double t1996;
  double t2003;
  double t2013;
  double t2033;
  double t2050;
  double t2084;
  t160 = Cos(var1[3]);
  t275 = Sin(var1[3]);
  t365 = Cos(var1[4]);
  t373 = Sin(var1[4]);
  t578 = Cos(var1[5]);
  t629 = Sin(var1[5]);
  t583 = t160*t578*t373;
  t649 = t275*t629;
  t650 = t583 + t649;
  t1113 = Cos(var1[17]);
  t1056 = Sin(var1[17]);
  t1197 = -1.*t578*t275;
  t1210 = t160*t373*t629;
  t1214 = t1197 + t1210;
  t728 = t578*t275*t373;
  t729 = -1.*t160*t629;
  t730 = t728 + t729;
  t1378 = -0.091*t1056;
  t1383 = 0. + t1378;
  t1391 = -1.*t1113;
  t1400 = 1. + t1391;
  t1402 = -0.091*t1400;
  t1405 = 0. + t1402;
  t1412 = t160*t578;
  t1413 = t275*t373*t629;
  t1415 = t1412 + t1413;
  t1386 = t1383*t730;
  t1423 = t1405*t1415;
  t1424 = 0. + var1[1] + t1386 + t1423;
  t1461 = -1.*var1[2];
  t1468 = -1.*t365*t578*t1383;
  t1473 = -1.*t1405*t365*t629;
  t1477 = 0. + t1461 + t1468 + t1473;
  t1478 = -1.*t1056*t730;
  t1487 = t1113*t1415;
  t1498 = t1478 + t1487;
  t1542 = t1113*t730;
  t1545 = t1056*t1415;
  t1621 = t1542 + t1545;
  t1316 = -1.*t365*t578*t1056;
  t1336 = t1113*t365*t629;
  t1351 = t1316 + t1336;
  t99 = -1.*var1[0];
  t1092 = -1.*t1056*t650;
  t1239 = t1113*t1214;
  t1256 = t1092 + t1239;
  t1530 = t1113*t365*t578;
  t1532 = t365*t1056*t629;
  t1533 = t1530 + t1532;
  t1733 = -1.*t1383*t650;
  t1734 = -1.*t1405*t1214;
  t1740 = 0. + t99 + t1733 + t1734;
  t1768 = t365*t578*t1383;
  t1777 = t1405*t365*t629;
  t1805 = 0. + var1[2] + t1768 + t1777;
  t1302 = t1113*t650;
  t1306 = t1056*t1214;
  t1309 = t1302 + t1306;
  t1986 = -1.*var1[1];
  t1996 = -1.*t1383*t730;
  t2003 = -1.*t1405*t1415;
  t2013 = 0. + t1986 + t1996 + t2003;
  t2033 = t1383*t650;
  t2050 = t1405*t1214;
  t2084 = 0. + var1[0] + t2033 + t2050;
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
  p_output1[19]=t99;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t160*var1[2];
  p_output1[25]=-1.*t275*var1[2];
  p_output1[26]=t160*var1[0] + t275*var1[1];
  p_output1[27]=-1.*t275;
  p_output1[28]=t160;
  p_output1[29]=0;
  p_output1[30]=-1.*t373*var1[1] - 1.*t275*t365*var1[2];
  p_output1[31]=t373*var1[0] + t160*t365*var1[2];
  p_output1[32]=t275*t365*var1[0] - 1.*t160*t365*var1[1];
  p_output1[33]=t160*t365;
  p_output1[34]=t275*t365;
  p_output1[35]=-1.*t373;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=-0.091*t650 + t373*var1[1] + t275*t365*var1[2];
  p_output1[103]=-0.091*t730 - 1.*t373*var1[0] - 1.*t160*t365*var1[2];
  p_output1[104]=-0.091*t365*t578 - 1.*t275*t365*var1[0] + t160*t365*var1[1];
  p_output1[105]=0. - 1.*t160*t365;
  p_output1[106]=0. - 1.*t275*t365;
  p_output1[107]=0. + t373;
  p_output1[108]=-0.041869*t1256 + 0.016493*t1309 - 0.366501*(t1351*t1424 + t1477*t1498) - 0.930418*(t1424*t1533 + t1477*t1621) + 0.084668*t160*t365;
  p_output1[109]=-0.041869*t1498 + 0.016493*t1621 - 0.366501*(t1351*t1740 + t1256*t1805) - 0.930418*(t1533*t1740 + t1309*t1805) + 0.084668*t275*t365;
  p_output1[110]=-0.041869*t1351 + 0.016493*t1533 - 0.366501*(t1256*t2013 + t1498*t2084) - 0.930418*(t1309*t2013 + t1621*t2084) - 0.084668*t373;
  p_output1[111]=0. - 0.366501*t1256 - 0.930418*t1309;
  p_output1[112]=0. - 0.366501*t1498 - 0.930418*t1621;
  p_output1[113]=0. - 0.366501*t1351 - 0.930418*t1533;
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



void Js_right_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

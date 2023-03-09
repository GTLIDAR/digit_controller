/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_hip_rotation_right_src.h"

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
  double t186;
  double t202;
  double t375;
  double t385;
  double t647;
  double t690;
  double t657;
  double t706;
  double t778;
  double t1206;
  double t1183;
  double t1292;
  double t1340;
  double t1352;
  double t825;
  double t868;
  double t873;
  double t1491;
  double t1494;
  double t1551;
  double t1558;
  double t1573;
  double t1583;
  double t1590;
  double t1598;
  double t1634;
  double t1516;
  double t1661;
  double t1663;
  double t1723;
  double t1730;
  double t1754;
  double t1776;
  double t1789;
  double t1851;
  double t1854;
  double t2000;
  double t2014;
  double t2033;
  double t1479;
  double t1485;
  double t1489;
  double t117;
  double t1199;
  double t1355;
  double t1367;
  double t1924;
  double t1940;
  double t1944;
  double t2157;
  double t2197;
  double t2201;
  double t2241;
  double t2256;
  double t2287;
  double t1399;
  double t1449;
  double t1459;
  double t2392;
  double t2395;
  double t2398;
  double t2400;
  double t2432;
  double t2453;
  double t2462;
  t186 = Cos(var1[3]);
  t202 = Sin(var1[3]);
  t375 = Cos(var1[4]);
  t385 = Sin(var1[4]);
  t647 = Cos(var1[5]);
  t690 = Sin(var1[5]);
  t657 = t186*t647*t385;
  t706 = t202*t690;
  t778 = t657 + t706;
  t1206 = Cos(var1[17]);
  t1183 = Sin(var1[17]);
  t1292 = -1.*t647*t202;
  t1340 = t186*t385*t690;
  t1352 = t1292 + t1340;
  t825 = t647*t202*t385;
  t868 = -1.*t186*t690;
  t873 = t825 + t868;
  t1491 = -0.091*t1183;
  t1494 = 0. + t1491;
  t1551 = -1.*t1206;
  t1558 = 1. + t1551;
  t1573 = -0.091*t1558;
  t1583 = 0. + t1573;
  t1590 = t186*t647;
  t1598 = t202*t385*t690;
  t1634 = t1590 + t1598;
  t1516 = t1494*t873;
  t1661 = t1583*t1634;
  t1663 = 0. + var1[1] + t1516 + t1661;
  t1723 = -1.*var1[2];
  t1730 = -1.*t375*t647*t1494;
  t1754 = -1.*t1583*t375*t690;
  t1776 = 0. + t1723 + t1730 + t1754;
  t1789 = -1.*t1183*t873;
  t1851 = t1206*t1634;
  t1854 = t1789 + t1851;
  t2000 = t1206*t873;
  t2014 = t1183*t1634;
  t2033 = t2000 + t2014;
  t1479 = -1.*t375*t647*t1183;
  t1485 = t1206*t375*t690;
  t1489 = t1479 + t1485;
  t117 = -1.*var1[0];
  t1199 = -1.*t1183*t778;
  t1355 = t1206*t1352;
  t1367 = t1199 + t1355;
  t1924 = t1206*t375*t647;
  t1940 = t375*t1183*t690;
  t1944 = t1924 + t1940;
  t2157 = -1.*t1494*t778;
  t2197 = -1.*t1583*t1352;
  t2201 = 0. + t117 + t2157 + t2197;
  t2241 = t375*t647*t1494;
  t2256 = t1583*t375*t690;
  t2287 = 0. + var1[2] + t2241 + t2256;
  t1399 = t1206*t778;
  t1449 = t1183*t1352;
  t1459 = t1399 + t1449;
  t2392 = -1.*var1[1];
  t2395 = -1.*t1494*t873;
  t2398 = -1.*t1583*t1634;
  t2400 = 0. + t2392 + t2395 + t2398;
  t2432 = t1494*t778;
  t2453 = t1583*t1352;
  t2462 = 0. + var1[0] + t2432 + t2453;
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
  p_output1[19]=t117;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t186*var1[2];
  p_output1[25]=-1.*t202*var1[2];
  p_output1[26]=t186*var1[0] + t202*var1[1];
  p_output1[27]=-1.*t202;
  p_output1[28]=t186;
  p_output1[29]=0;
  p_output1[30]=-1.*t385*var1[1] - 1.*t202*t375*var1[2];
  p_output1[31]=t385*var1[0] + t186*t375*var1[2];
  p_output1[32]=t202*t375*var1[0] - 1.*t186*t375*var1[1];
  p_output1[33]=t186*t375;
  p_output1[34]=t202*t375;
  p_output1[35]=-1.*t385;
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
  p_output1[102]=-0.091*t778 + t385*var1[1] + t202*t375*var1[2];
  p_output1[103]=-0.091*t873 - 1.*t385*var1[0] - 1.*t186*t375*var1[2];
  p_output1[104]=-0.091*t375*t647 - 1.*t202*t375*var1[0] + t186*t375*var1[1];
  p_output1[105]=0. - 1.*t186*t375;
  p_output1[106]=0. - 1.*t202*t375;
  p_output1[107]=0. + t385;
  p_output1[108]=-0.041869*t1367 + 0.016493*t1459 - 0.366501*(t1489*t1663 + t1776*t1854) - 0.930418*(t1663*t1944 + t1776*t2033) + 0.084668*t186*t375;
  p_output1[109]=-0.041869*t1854 + 0.016493*t2033 - 0.366501*(t1489*t2201 + t1367*t2287) - 0.930418*(t1944*t2201 + t1459*t2287) + 0.084668*t202*t375;
  p_output1[110]=-0.041869*t1489 + 0.016493*t1944 - 0.366501*(t1367*t2400 + t1854*t2462) - 0.930418*(t1459*t2400 + t2033*t2462) - 0.084668*t385;
  p_output1[111]=0. - 0.366501*t1367 - 0.930418*t1459;
  p_output1[112]=0. - 0.366501*t1854 - 0.930418*t2033;
  p_output1[113]=0. - 0.366501*t1489 - 0.930418*t1944;
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



void Js_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_left_hip_roll_src.h"

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
  double t861;
  double t994;
  double t827;
  double t1115;
  double t264;
  double t934;
  double t1319;
  double t1376;
  double t1457;
  double t1469;
  double t1798;
  double t1804;
  double t209;
  double t367;
  double t667;
  double t694;
  double t733;
  double t1973;
  double t2125;
  double t4046;
  double t4088;
  double t4178;
  double t4312;
  double t4320;
  double t4330;
  double t4501;
  double t4506;
  double t4510;
  double t4360;
  double t2286;
  double t4569;
  double t4570;
  double t4596;
  double t4344;
  double t4347;
  double t4355;
  double t4752;
  double t4753;
  double t4757;
  t228 = Sin(var1[3]);
  t861 = Cos(var1[5]);
  t994 = Sin(var1[4]);
  t827 = Cos(var1[3]);
  t1115 = Sin(var1[5]);
  t264 = Cos(var1[6]);
  t934 = -1.*t827*t861;
  t1319 = -1.*t228*t994*t1115;
  t1376 = t934 + t1319;
  t1457 = -1.*t861*t228*t994;
  t1469 = t827*t1115;
  t1798 = t1457 + t1469;
  t1804 = Sin(var1[6]);
  t209 = Cos(var1[4]);
  t367 = -1.*t264;
  t667 = 1. + t367;
  t694 = 0.091*t667;
  t733 = 0. + t694;
  t1973 = 0.091*t1804;
  t2125 = 0. + t1973;
  t4046 = -1.*t861*t228;
  t4088 = t827*t994*t1115;
  t4178 = t4046 + t4088;
  t4312 = t827*t861*t994;
  t4320 = t228*t1115;
  t4330 = t4312 + t4320;
  t4501 = t861*t228;
  t4506 = -1.*t827*t994*t1115;
  t4510 = t4501 + t4506;
  t4360 = t264*t4330;
  t2286 = t264*t1376;
  t4569 = t861*t228*t994;
  t4570 = -1.*t827*t1115;
  t4596 = t4569 + t4570;
  t4344 = t264*t4178;
  t4347 = -1.*t4330*t1804;
  t4355 = t4344 + t4347;
  t4752 = t827*t861;
  t4753 = t228*t994*t1115;
  t4757 = t4752 + t4753;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1798*t2125 + 0.03244*t209*t228 + 0.091945*(-1.*t1798*t1804 + t2286) - 0.001745*(t1376*t1804 + t1798*t264) + t1376*t733;
  p_output1[10]=t2125*t4330 + 0.091945*t4355 - 0.001745*(t1804*t4178 + t4360) + t4178*t733 - 0.03244*t209*t827;
  p_output1[11]=0;
  p_output1[12]=t1115*t209*t733*t827 + t209*t2125*t827*t861 + 0.091945*(t1115*t209*t264*t827 - 1.*t1804*t209*t827*t861) - 0.001745*(t1115*t1804*t209*t827 + t209*t264*t827*t861) + 0.03244*t827*t994;
  p_output1[13]=t1115*t209*t228*t733 + t209*t2125*t228*t861 + 0.091945*(t1115*t209*t228*t264 - 1.*t1804*t209*t228*t861) - 0.001745*(t1115*t1804*t209*t228 + t209*t228*t264*t861) + 0.03244*t228*t994;
  p_output1[14]=0.03244*t209 - 1.*t1115*t733*t994 - 1.*t2125*t861*t994 + 0.091945*(-1.*t1115*t264*t994 + t1804*t861*t994) - 0.001745*(-1.*t1115*t1804*t994 - 1.*t264*t861*t994);
  p_output1[15]=t2125*t4510 + 0.091945*(t4360 - 1.*t1804*t4510) - 0.001745*(t1804*t4330 + t264*t4510) + t4330*t733;
  p_output1[16]=t1376*t2125 - 0.001745*(t2286 + t1804*t4596) + 0.091945*(-1.*t1376*t1804 + t264*t4596) + t4596*t733;
  p_output1[17]=-1.*t1115*t209*t2125 + t209*t733*t861 - 0.001745*(-1.*t1115*t209*t264 + t1804*t209*t861) + 0.091945*(t1115*t1804*t209 + t209*t264*t861);
  p_output1[18]=0.091*t1804*t4178 + 0.091*t264*t4330 + 0.091945*(-1.*t1804*t4178 - 1.*t264*t4330) - 0.001745*t4355;
  p_output1[19]=0.091*t264*t4596 + 0.091*t1804*t4757 + 0.091945*(-1.*t264*t4596 - 1.*t1804*t4757) - 0.001745*(-1.*t1804*t4596 + t264*t4757);
  p_output1[20]=0.091*t1115*t1804*t209 + 0.091*t209*t264*t861 - 0.001745*(t1115*t209*t264 - 1.*t1804*t209*t861) + 0.091945*(-1.*t1115*t1804*t209 - 1.*t209*t264*t861);
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
}



void Jp_left_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

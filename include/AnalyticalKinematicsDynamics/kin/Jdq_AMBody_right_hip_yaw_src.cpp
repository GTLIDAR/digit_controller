/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_hip_yaw_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2561;
  double t2709;
  double t2562;
  double t2628;
  double t2285;
  double t2725;
  double t2751;
  double t1760;
  double t2081;
  double t2266;
  double t413;
  double t435;
  double t779;
  double t4838;
  double t4949;
  double t4963;
  double t4969;
  double t4988;
  double t4518;
  double t4532;
  double t4600;
  double t4626;
  double t4634;
  double t3576;
  double t5534;
  double t5550;
  double t5385;
  double t5442;
  double t5448;
  double t4430;
  double t4438;
  double t4491;
  double t4504;
  double t4699;
  double t5097;
  double t5099;
  double t5131;
  double t5149;
  double t5188;
  double t5195;
  double t5201;
  double t5235;
  double t5236;
  double t5246;
  double t5286;
  double t5289;
  double t5291;
  double t5374;
  double t5511;
  double t5574;
  double t5590;
  double t5592;
  double t5597;
  double t5604;
  double t5614;
  double t5615;
  double t5632;
  double t5633;
  double t5658;
  double t2887;
  double t3248;
  double t3347;
  double t2684;
  double t2762;
  double t2799;
  double t5747;
  double t5749;
  double t5752;
  double t5766;
  double t5786;
  double t5789;
  double t1070;
  double t1755;
  double t5866;
  double t5869;
  double t5870;
  double t5876;
  double t5885;
  double t5889;
  t2561 = Sin(var1[18]);
  t2709 = Sin(var1[17]);
  t2562 = -0.366501*t2561;
  t2628 = 0. + t2562;
  t2285 = Cos(var1[17]);
  t2725 = 0.930418*t2561;
  t2751 = 0. + t2725;
  t1760 = Sin(var1[4]);
  t2081 = Cos(var1[4]);
  t2266 = Cos(var1[5]);
  t413 = Cos(var1[18]);
  t435 = -1.*t413;
  t779 = 1. + t435;
  t4838 = -0.8656776547239999*t779;
  t4949 = 1. + t4838;
  t4963 = -0.366501*t4949;
  t4969 = -0.3172717261340007*t779;
  t4988 = t4963 + t4969;
  t4518 = -0.134322983001*t779;
  t4532 = 1. + t4518;
  t4600 = -0.930418*t4532;
  t4626 = -0.12497652119782442*t779;
  t4634 = t4600 + t4626;
  t3576 = Sin(var1[5]);
  t5534 = 0.930418*t4949;
  t5550 = t5534 + t4626;
  t5385 = -0.366501*t4532;
  t5442 = 0.3172717261340007*t779;
  t5448 = t5385 + t5442;
  t4430 = -0.930418*t2628;
  t4438 = -0.366501*t2751;
  t4491 = 0. + t4430 + t4438;
  t4504 = -1.*t4491*t1760;
  t4699 = t2285*t4634;
  t5097 = -1.*t4988*t2709;
  t5099 = 0. + t4699 + t5097;
  t5131 = t2266*t5099;
  t5149 = t2285*t4988;
  t5188 = t4634*t2709;
  t5195 = 0. + t5149 + t5188;
  t5201 = t5195*t3576;
  t5235 = 0. + t5131 + t5201;
  t5236 = t2081*t5235;
  t5246 = 0. + t4504 + t5236;
  t5286 = -0.366501*t2628;
  t5289 = 0.930418*t2751;
  t5291 = 0. + t5286 + t5289;
  t5374 = -1.*t5291*t1760;
  t5511 = t2285*t5448;
  t5574 = -1.*t5550*t2709;
  t5590 = 0. + t5511 + t5574;
  t5592 = t2266*t5590;
  t5597 = t2285*t5550;
  t5604 = t5448*t2709;
  t5614 = 0. + t5597 + t5604;
  t5615 = t5614*t3576;
  t5632 = 0. + t5592 + t5615;
  t5633 = t2081*t5632;
  t5658 = 0. + t5374 + t5633;
  t2887 = t2709*t2628;
  t3248 = t2285*t2751;
  t3347 = t2887 + t3248;
  t2684 = t2285*t2628;
  t2762 = -1.*t2709*t2751;
  t2799 = t2684 + t2762;
  t5747 = t2266*t5195;
  t5749 = -1.*t5099*t3576;
  t5752 = 0. + t5747 + t5749;
  t5766 = t2266*t5614;
  t5786 = -1.*t5590*t3576;
  t5789 = 0. + t5766 + t5786;
  t1070 = 1.000000637725*t779;
  t1755 = -1. + t1070;
  t5866 = 0.366501*t2628;
  t5869 = -0.930418*t2751;
  t5870 = 0. + t5866 + t5869;
  t5876 = 0.930418*t2628;
  t5885 = 0.366501*t2751;
  t5889 = 0. + t5876 + t5885;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00163*(-1.*t1755*t1760 + t2081*(t2266*t2799 + t3347*t3576));
  p_output1[10]=-0.00005*t5246 + 0.00193*t5658;
  p_output1[11]=0.00077*t5246 - 0.00005*t5658;
  p_output1[12]=0.00163*(t2266*t3347 - 1.*t2799*t3576);
  p_output1[13]=-0.00005*t5752 + 0.00193*t5789;
  p_output1[14]=0.00077*t5752 - 0.00005*t5789;
  p_output1[15]=0.00163*t1755;
  p_output1[16]=-0.00005*t4491 + 0.00193*t5291;
  p_output1[17]=0.00077*t4491 - 0.00005*t5291;
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
  p_output1[51]=0.00163*(1. - 1.000000637725*t779);
  p_output1[52]=0.00193*t5870 - 0.00005*t5889;
  p_output1[53]=-0.00005*t5870 + 0.00077*t5889;
  p_output1[54]=0;
  p_output1[55]=-0.00005000003188625;
  p_output1[56]=0.0007700004910482499;
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



void Jdq_AMBody_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

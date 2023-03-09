/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_hip_yaw_src.h"

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
  double t2218;
  double t2640;
  double t2222;
  double t2538;
  double t2194;
  double t2942;
  double t2969;
  double t2091;
  double t2120;
  double t450;
  double t836;
  double t1108;
  double t3308;
  double t4924;
  double t5047;
  double t5150;
  double t5267;
  double t5300;
  double t4242;
  double t4558;
  double t4595;
  double t4612;
  double t4807;
  double t1960;
  double t5688;
  double t5703;
  double t5711;
  double t5628;
  double t5641;
  double t4903;
  double t5335;
  double t5404;
  double t5426;
  double t5431;
  double t5451;
  double t5459;
  double t5466;
  double t5488;
  double t5507;
  double t5531;
  double t5536;
  double t5560;
  double t5592;
  double t5597;
  double t5672;
  double t5739;
  double t5740;
  double t5742;
  double t5757;
  double t5763;
  double t5792;
  double t5795;
  double t5810;
  double t5814;
  double t5815;
  double t5817;
  double t5820;
  double t5830;
  double t5842;
  double t2544;
  double t3104;
  double t3122;
  double t3572;
  double t3626;
  double t3677;
  double t6011;
  double t6017;
  double t6038;
  double t6127;
  double t6135;
  double t6149;
  double t1617;
  double t1950;
  double t6269;
  double t6270;
  double t6279;
  double t6293;
  double t6297;
  double t6300;
  t2218 = Sin(var1[7]);
  t2640 = Cos(var1[6]);
  t2222 = 0.366501*t2218;
  t2538 = 0. + t2222;
  t2194 = Sin(var1[6]);
  t2942 = 0.930418*t2218;
  t2969 = 0. + t2942;
  t2091 = Cos(var1[4]);
  t2120 = Sin(var1[5]);
  t450 = Cos(var1[7]);
  t836 = -1.*t450;
  t1108 = 1. + t836;
  t3308 = Cos(var1[5]);
  t4924 = -0.134322983001*t1108;
  t5047 = 1. + t4924;
  t5150 = -0.930418*t5047;
  t5267 = -0.12497652119782442*t1108;
  t5300 = t5150 + t5267;
  t4242 = -0.8656776547239999*t1108;
  t4558 = 1. + t4242;
  t4595 = 0.366501*t4558;
  t4612 = 0.3172717261340007*t1108;
  t4807 = t4595 + t4612;
  t1960 = Sin(var1[4]);
  t5688 = 0.366501*t5047;
  t5703 = -0.3172717261340007*t1108;
  t5711 = t5688 + t5703;
  t5628 = 0.930418*t4558;
  t5641 = t5628 + t5267;
  t4903 = t2640*t4807;
  t5335 = t5300*t2194;
  t5404 = 0. + t4903 + t5335;
  t5426 = t2120*t5404;
  t5431 = t2640*t5300;
  t5451 = -1.*t4807*t2194;
  t5459 = 0. + t5431 + t5451;
  t5466 = t3308*t5459;
  t5488 = 0. + t5426 + t5466;
  t5507 = t2091*t5488;
  t5531 = -0.930418*t2538;
  t5536 = 0.366501*t2969;
  t5560 = 0. + t5531 + t5536;
  t5592 = -1.*t1960*t5560;
  t5597 = 0. + t5507 + t5592;
  t5672 = t2640*t5641;
  t5739 = t5711*t2194;
  t5740 = 0. + t5672 + t5739;
  t5742 = t2120*t5740;
  t5757 = t2640*t5711;
  t5763 = -1.*t5641*t2194;
  t5792 = 0. + t5757 + t5763;
  t5795 = t3308*t5792;
  t5810 = 0. + t5742 + t5795;
  t5814 = t2091*t5810;
  t5815 = 0.366501*t2538;
  t5817 = 0.930418*t2969;
  t5820 = 0. + t5815 + t5817;
  t5830 = -1.*t1960*t5820;
  t5842 = 0. + t5814 + t5830;
  t2544 = t2194*t2538;
  t3104 = t2640*t2969;
  t3122 = t2544 + t3104;
  t3572 = t2640*t2538;
  t3626 = -1.*t2194*t2969;
  t3677 = t3572 + t3626;
  t6011 = t3308*t5740;
  t6017 = -1.*t2120*t5792;
  t6038 = 0. + t6011 + t6017;
  t6127 = t3308*t5404;
  t6135 = -1.*t2120*t5459;
  t6149 = 0. + t6127 + t6135;
  t1617 = 1.000000637725*t1108;
  t1950 = -1. + t1617;
  t6269 = -0.366501*t2538;
  t6270 = -0.930418*t2969;
  t6279 = 0. + t6269 + t6270;
  t6293 = 0.930418*t2538;
  t6297 = -0.366501*t2969;
  t6300 = 0. + t6293 + t6297;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00163*(-1.*t1950*t1960 + t2091*(t2120*t3122 + t3308*t3677));
  p_output1[10]=0.00005*t5597 + 0.00193*t5842;
  p_output1[11]=0.00077*t5597 + 0.00005*t5842;
  p_output1[12]=0.00163*(t3122*t3308 - 1.*t2120*t3677);
  p_output1[13]=0.00193*t6038 + 0.00005*t6149;
  p_output1[14]=0.00005*t6038 + 0.00077*t6149;
  p_output1[15]=0.00163*t1950;
  p_output1[16]=0.00005*t5560 + 0.00193*t5820;
  p_output1[17]=0.00077*t5560 + 0.00005*t5820;
  p_output1[18]=0.00163*(1. - 1.000000637725*t1108);
  p_output1[19]=0.00193*t6279 + 0.00005*t6300;
  p_output1[20]=0.00005*t6279 + 0.00077*t6300;
  p_output1[21]=0;
  p_output1[22]=0.00005000003188625;
  p_output1[23]=0.0007700004910482499;
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



void Jdq_AMBody_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

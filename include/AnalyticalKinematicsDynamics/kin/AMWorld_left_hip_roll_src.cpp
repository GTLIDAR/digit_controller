/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_left_hip_roll_src.h"

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
  double t1776;
  double t3043;
  double t3460;
  double t4166;
  double t3412;
  double t3766;
  double t3857;
  double t2575;
  double t4358;
  double t4375;
  double t4488;
  double t4914;
  double t4964;
  double t4993;
  double t4128;
  double t94;
  double t1901;
  double t5200;
  double t5261;
  double t5264;
  double t5273;
  double t5203;
  double t5213;
  double t5241;
  double t1787;
  double t1948;
  double t1988;
  double t2017;
  double t4507;
  double t4555;
  double t4559;
  double t4575;
  double t4703;
  double t4719;
  double t4746;
  double t4758;
  double t4763;
  double t4815;
  double t5253;
  double t5281;
  double t5301;
  double t5306;
  double t5313;
  double t5316;
  double t2094;
  double t4817;
  double t4860;
  double t4998;
  double t5002;
  double t5025;
  double t5035;
  double t5043;
  double t5083;
  double t5152;
  double t5158;
  double t5165;
  double t5179;
  double t5407;
  double t5410;
  double t5411;
  double t5398;
  double t5399;
  double t5401;
  double t5325;
  double t5330;
  double t5332;
  double t5406;
  double t5416;
  double t5424;
  double t5431;
  double t5439;
  double t5455;
  double t5510;
  double t5512;
  double t5513;
  double t5520;
  double t5522;
  double t5527;
  t1776 = Cos(var1[4]);
  t3043 = Cos(var1[6]);
  t3460 = Sin(var1[6]);
  t4166 = Sin(var1[5]);
  t3412 = 0.930418*t3043;
  t3766 = 0.366501*t3460;
  t3857 = t3412 + t3766;
  t2575 = Cos(var1[5]);
  t4358 = -0.366501*t3043;
  t4375 = 0.930418*t3460;
  t4488 = t4358 + t4375;
  t4914 = 0.366501*t3043;
  t4964 = -0.930418*t3460;
  t4993 = t4914 + t4964;
  t4128 = t2575*t3857;
  t94 = Cos(var1[3]);
  t1901 = Sin(var1[4]);
  t5200 = Sin(var1[3]);
  t5261 = t94*t2575*t1901;
  t5264 = t5200*t4166;
  t5273 = t5261 + t5264;
  t5203 = -1.*t2575*t5200;
  t5213 = t94*t1901*t4166;
  t5241 = t5203 + t5213;
  t1787 = -1.*var2[5];
  t1948 = 0. + t1901;
  t1988 = var2[3]*t1948;
  t2017 = 0. + t1787 + var2[6] + t1988;
  t4507 = t4166*t4488;
  t4555 = 0. + t4128 + t4507;
  t4559 = t1776*t4555;
  t4575 = 0. + t4559;
  t4703 = var2[3]*t4575;
  t4719 = -1.*t4166*t3857;
  t4746 = t2575*t4488;
  t4758 = 0. + t4719 + t4746;
  t4763 = var2[4]*t4758;
  t4815 = 0. + t4703 + t4763;
  t5253 = t3043*t5241;
  t5281 = -1.*t5273*t3460;
  t5301 = t5253 + t5281;
  t5306 = t3043*t5273;
  t5313 = t5241*t3460;
  t5316 = t5306 + t5313;
  t2094 = 0.00077*t2017;
  t4817 = 0.00001*t4815;
  t4860 = t2094 + t4817;
  t4998 = t2575*t4993;
  t5002 = t4166*t3857;
  t5025 = 0. + t4998 + t5002;
  t5035 = t1776*t5025;
  t5043 = 0. + t5035;
  t5083 = var2[3]*t5043;
  t5152 = -1.*t4166*t4993;
  t5158 = 0. + t5152 + t4128;
  t5165 = var2[4]*t5158;
  t5179 = 0. + t5083 + t5165;
  t5407 = t2575*t5200*t1901;
  t5410 = -1.*t94*t4166;
  t5411 = t5407 + t5410;
  t5398 = t94*t2575;
  t5399 = t5200*t1901*t4166;
  t5401 = t5398 + t5399;
  t5325 = 0.00001*t2017;
  t5330 = 0.00102*t4815;
  t5332 = t5325 + t5330;
  t5406 = t3043*t5401;
  t5416 = -1.*t5411*t3460;
  t5424 = t5406 + t5416;
  t5431 = t3043*t5411;
  t5439 = t5401*t3460;
  t5455 = t5431 + t5439;
  t5510 = t1776*t3043*t4166;
  t5512 = -1.*t1776*t2575*t3460;
  t5513 = t5510 + t5512;
  t5520 = t1776*t2575*t3043;
  t5522 = t1776*t4166*t3460;
  t5527 = t5520 + t5522;
  p_output1[0]=0.00115*t5179*(0.930418*t5301 + 0.366501*t5316) + (-0.366501*t5301 + 0.930418*t5316)*t5332 - 1.*t1776*t4860*t94;
  p_output1[1]=-1.*t1776*t4860*t5200 + 0.00115*t5179*(0.930418*t5424 + 0.366501*t5455) + t5332*(-0.366501*t5424 + 0.930418*t5455);
  p_output1[2]=t1901*t4860 + 0.00115*t5179*(0.930418*t5513 + 0.366501*t5527) + t5332*(-0.366501*t5513 + 0.930418*t5527);
}



void AMWorld_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

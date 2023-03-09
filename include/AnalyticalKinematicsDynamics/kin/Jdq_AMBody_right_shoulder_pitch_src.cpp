/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_shoulder_pitch_src.h"

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
  double t1402;
  double t1070;
  double t1137;
  double t1226;
  double t3341;
  double t2935;
  double t2948;
  double t3038;
  double t3187;
  double t3189;
  double t3281;
  double t3286;
  double t3291;
  double t2898;
  double t3363;
  double t3411;
  double t3584;
  double t3623;
  double t3674;
  double t3712;
  double t3785;
  double t3805;
  double t1325;
  double t1376;
  double t1390;
  double t1569;
  double t1975;
  double t2053;
  double t2259;
  double t2533;
  double t2680;
  double t2827;
  double t4439;
  double t4482;
  double t4533;
  double t4572;
  double t4599;
  double t4605;
  double t4110;
  double t5047;
  double t5061;
  double t5062;
  double t4972;
  double t4980;
  double t5013;
  double t2001;
  double t2260;
  double t2261;
  double t2566;
  double t3321;
  double t3959;
  double t4000;
  double t4011;
  double t4037;
  double t4049;
  double t4094;
  double t4163;
  double t4171;
  double t4183;
  double t4190;
  double t4374;
  double t4380;
  double t4408;
  double t4414;
  double t4549;
  double t4615;
  double t4680;
  double t4682;
  double t4751;
  double t4766;
  double t4794;
  double t4797;
  double t4798;
  double t4819;
  double t4849;
  double t4884;
  double t4924;
  double t4932;
  double t4943;
  double t5046;
  double t5123;
  double t5126;
  double t5138;
  double t5152;
  double t5164;
  double t5166;
  double t5167;
  double t5168;
  double t5176;
  double t5197;
  double t5313;
  double t5314;
  double t5323;
  double t5395;
  double t5403;
  double t5422;
  double t5460;
  double t5461;
  double t5466;
  double t5700;
  double t5706;
  double t5742;
  double t5757;
  double t5765;
  double t5772;
  t1402 = Sin(var1[25]);
  t1070 = Cos(var1[25]);
  t1137 = -1.*t1070;
  t1226 = 1. + t1137;
  t3341 = Cos(var1[24]);
  t2935 = -0.010926102783999999*t1226;
  t2948 = 1. + t2935;
  t3038 = 0.073913*t2948;
  t3187 = -0.07310496868062215*t1226;
  t3189 = 0.104528*t1402;
  t3281 = 0. + t3189;
  t3286 = 0.707107*t3281;
  t3291 = t3038 + t3187 + t3286;
  t2898 = Sin(var1[24]);
  t3363 = -0.9890740084840001*t1226;
  t3411 = 1. + t3363;
  t3584 = 0.703234*t3411;
  t3623 = -0.007683655156165408*t1226;
  t3674 = 0.994522*t1402;
  t3712 = 0. + t3674;
  t3785 = 0.707107*t3712;
  t3805 = t3584 + t3623 + t3785;
  t1325 = -1.0000001112680001*t1226;
  t1376 = 1. + t1325;
  t1390 = 0.707107*t1376;
  t1569 = -0.994522*t1402;
  t1975 = 0. + t1569;
  t2053 = -0.104528*t1402;
  t2259 = 0. + t2053;
  t2533 = Sin(var1[4]);
  t2680 = Cos(var1[4]);
  t2827 = Cos(var1[5]);
  t4439 = -0.073913*t2948;
  t4482 = 0.07310496868062215*t1226;
  t4533 = t4439 + t4482 + t3286;
  t4572 = -0.703234*t3411;
  t4599 = 0.007683655156165408*t1226;
  t4605 = t4572 + t4599 + t3785;
  t4110 = Sin(var1[5]);
  t5047 = 0.994522*t2948;
  t5061 = 0.010866249592949247*t1226;
  t5062 = t5047 + t5061;
  t4972 = -0.104528*t3411;
  t4980 = -0.10338592795881554*t1226;
  t5013 = t4972 + t4980;
  t2001 = 0.703234*t1975;
  t2260 = 0.073913*t2259;
  t2261 = 0. + t1390 + t2001 + t2260;
  t2566 = -1.*t2261*t2533;
  t3321 = -1.*t2898*t3291;
  t3959 = t3341*t3805;
  t4000 = 0. + t3321 + t3959;
  t4011 = t2827*t4000;
  t4037 = t3341*t3291;
  t4049 = t2898*t3805;
  t4094 = 0. + t4037 + t4049;
  t4163 = t4094*t4110;
  t4171 = 0. + t4011 + t4163;
  t4183 = t2680*t4171;
  t4190 = 0. + t2566 + t4183;
  t4374 = -0.703234*t1975;
  t4380 = -0.073913*t2259;
  t4408 = 0. + t1390 + t4374 + t4380;
  t4414 = -1.*t4408*t2533;
  t4549 = -1.*t2898*t4533;
  t4615 = t3341*t4605;
  t4680 = 0. + t4549 + t4615;
  t4682 = t2827*t4680;
  t4751 = t3341*t4533;
  t4766 = t2898*t4605;
  t4794 = 0. + t4751 + t4766;
  t4797 = t4794*t4110;
  t4798 = 0. + t4682 + t4797;
  t4819 = t2680*t4798;
  t4849 = 0. + t4414 + t4819;
  t4884 = -0.104528*t1975;
  t4924 = 0.994522*t2259;
  t4932 = 0. + t4884 + t4924;
  t4943 = -1.*t4932*t2533;
  t5046 = t3341*t5013;
  t5123 = -1.*t5062*t2898;
  t5126 = 0. + t5046 + t5123;
  t5138 = t2827*t5126;
  t5152 = t3341*t5062;
  t5164 = t5013*t2898;
  t5166 = 0. + t5152 + t5164;
  t5167 = t5166*t4110;
  t5168 = 0. + t5138 + t5167;
  t5176 = t2680*t5168;
  t5197 = 0. + t4943 + t5176;
  t5313 = t2827*t4094;
  t5314 = -1.*t4000*t4110;
  t5323 = 0. + t5313 + t5314;
  t5395 = t2827*t4794;
  t5403 = -1.*t4680*t4110;
  t5422 = 0. + t5395 + t5403;
  t5460 = t2827*t5166;
  t5461 = -1.*t5126*t4110;
  t5466 = 0. + t5460 + t5461;
  t5700 = -0.707107*t1376;
  t5706 = 0. + t5700 + t4374 + t4380;
  t5742 = 0. + t5700 + t2001 + t2260;
  t5757 = 0.104528*t1975;
  t5765 = -0.994522*t2259;
  t5772 = 0. + t5757 + t5765;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00676*t4190 + 0.00001*t4849;
  p_output1[10]=0.00001*t4190 + 0.00209*t4849 + 0.00205*t5197;
  p_output1[11]=0.00205*t4849 + 0.00578*t5197;
  p_output1[12]=0.00676*t5323 + 0.00001*t5422;
  p_output1[13]=0.00001*t5323 + 0.00209*t5422 + 0.00205*t5466;
  p_output1[14]=0.00205*t5422 + 0.00578*t5466;
  p_output1[15]=0.00676*t2261 + 0.00001*t4408;
  p_output1[16]=0.00001*t2261 + 0.00209*t4408 + 0.00205*t4932;
  p_output1[17]=0.00205*t4408 + 0.00578*t4932;
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
  p_output1[72]=0.00676*t5706 + 0.00001*t5742;
  p_output1[73]=0.00001*t5706 + 0.00209*t5742 + 0.00205*t5772;
  p_output1[74]=0.00205*t5742 + 0.00578*t5772;
  p_output1[75]=-3.1119795000297823e-9;
  p_output1[76]=-0.0020499992691486806;
  p_output1[77]=-0.0057799996980093405;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jdq_AMBody_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

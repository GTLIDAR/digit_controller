/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_shoulder_yaw_src.h"

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
  double t124;
  double t276;
  double t312;
  double t625;
  double t795;
  double t26;
  double t1870;
  double t601;
  double t1229;
  double t1295;
  double t1327;
  double t342;
  double t357;
  double t443;
  double t689;
  double t696;
  double t749;
  double t947;
  double t1055;
  double t1147;
  double t1159;
  double t1424;
  double t1655;
  double t1768;
  double t1904;
  double t1929;
  double t1945;
  double t1948;
  double t1963;
  double t1992;
  double t2166;
  double t2235;
  double t2314;
  double t2354;
  double t2359;
  double t2366;
  double t2367;
  double t2378;
  double t2430;
  double t2435;
  double t2436;
  double t3050;
  double t2719;
  double t2723;
  double t2728;
  double t2745;
  double t2826;
  double t2860;
  double t2930;
  double t2934;
  double t2711;
  double t3232;
  double t3289;
  double t3298;
  double t3355;
  double t3368;
  double t3387;
  double t3429;
  double t3431;
  double t52;
  double t106;
  double t1352;
  double t1395;
  double t2221;
  double t2224;
  double t2564;
  double t2653;
  double t2670;
  double t3807;
  double t3808;
  double t3814;
  double t3868;
  double t3880;
  double t3881;
  double t3923;
  double t3936;
  double t3973;
  double t4155;
  double t4168;
  double t4226;
  double t4327;
  double t4334;
  double t4339;
  double t4356;
  double t4370;
  double t3708;
  double t4576;
  double t4581;
  double t4593;
  double t4602;
  double t4604;
  double t4619;
  double t4628;
  double t4691;
  double t4693;
  double t4871;
  double t4912;
  double t4922;
  double t4934;
  double t4950;
  double t4955;
  double t4957;
  double t4964;
  double t3852;
  double t3899;
  double t3976;
  double t4057;
  double t4134;
  double t4331;
  double t4392;
  double t4402;
  double t4455;
  double t4456;
  double t4463;
  double t4482;
  double t4498;
  double t4499;
  double t4511;
  double t4516;
  double t4595;
  double t4620;
  double t4758;
  double t4762;
  double t4834;
  double t4940;
  double t4973;
  double t4975;
  double t4977;
  double t4978;
  double t4979;
  double t4984;
  double t4996;
  double t5021;
  double t5036;
  double t5052;
  double t3683;
  double t3704;
  double t3707;
  double t3008;
  double t3432;
  double t3516;
  double t5135;
  double t5147;
  double t5159;
  double t5184;
  double t5193;
  double t5205;
  double t1163;
  double t2187;
  double t2542;
  double t2545;
  double t5335;
  double t5345;
  double t5348;
  double t5349;
  double t5364;
  double t5402;
  double t5426;
  double t5436;
  double t5495;
  double t5496;
  double t5499;
  double t5517;
  double t5528;
  double t5530;
  t124 = Cos(var1[15]);
  t276 = -1.*t124;
  t312 = 1. + t276;
  t625 = Sin(var1[15]);
  t795 = 0.05226439969100001*t312;
  t26 = Sin(var1[14]);
  t1870 = -0.49726168403800003*t312;
  t601 = -0.051978134642000004*t312;
  t1229 = Cos(var1[14]);
  t1295 = -1.*t1229;
  t1327 = 1. + t1295;
  t342 = -0.9945383682050002*t312;
  t357 = 1. + t342;
  t443 = -0.073913*t357;
  t689 = -0.707107*t625;
  t696 = t601 + t689;
  t749 = 0.703234*t696;
  t947 = -0.703234*t625;
  t1055 = t795 + t947;
  t1147 = 0.707107*t1055;
  t1159 = t443 + t749 + t1147;
  t1424 = -0.500001190325*t312;
  t1655 = 1. + t1424;
  t1768 = 0.707107*t1655;
  t1904 = 0.073913*t625;
  t1929 = t1870 + t1904;
  t1945 = 0.703234*t1929;
  t1948 = 0.703234*t625;
  t1963 = t795 + t1948;
  t1992 = -0.073913*t1963;
  t2166 = t1768 + t1945 + t1992;
  t2235 = -0.5054634410180001*t312;
  t2314 = 1. + t2235;
  t2354 = 0.703234*t2314;
  t2359 = -0.073913*t625;
  t2366 = t1870 + t2359;
  t2367 = 0.707107*t2366;
  t2378 = 0.707107*t625;
  t2430 = t601 + t2378;
  t2435 = -0.073913*t2430;
  t2436 = t2354 + t2367 + t2435;
  t3050 = Sin(var1[13]);
  t2719 = 0.103955395616*t1327*t1159;
  t2723 = -0.994522*t26;
  t2728 = 0. + t2723;
  t2745 = t2728*t2166;
  t2826 = -0.9890740084840001*t1327;
  t2860 = 1. + t2826;
  t2930 = t2860*t2436;
  t2934 = 0. + t2719 + t2745 + t2930;
  t2711 = Cos(var1[13]);
  t3232 = -0.010926102783999999*t1327;
  t3289 = 1. + t3232;
  t3298 = t3289*t1159;
  t3355 = 0.104528*t26;
  t3368 = 0. + t3355;
  t3387 = t3368*t2166;
  t3429 = 0.103955395616*t1327*t2436;
  t3431 = 0. + t3298 + t3387 + t3429;
  t52 = -0.104528*t26;
  t106 = 0. + t52;
  t1352 = -1.0000001112680001*t1327;
  t1395 = 1. + t1352;
  t2221 = 0.994522*t26;
  t2224 = 0. + t2221;
  t2564 = Sin(var1[4]);
  t2653 = Cos(var1[4]);
  t2670 = Cos(var1[5]);
  t3807 = -0.994522*t357;
  t3808 = -0.104528*t696;
  t3814 = t3807 + t3808;
  t3868 = -0.104528*t1929;
  t3880 = -0.994522*t1963;
  t3881 = t3868 + t3880;
  t3923 = -0.104528*t2314;
  t3936 = -0.994522*t2430;
  t3973 = t3923 + t3936;
  t4155 = 0.103955395616*t1327*t3814;
  t4168 = t2728*t3881;
  t4226 = t2860*t3973;
  t4327 = 0. + t4155 + t4168 + t4226;
  t4334 = t3289*t3814;
  t4339 = t3368*t3881;
  t4356 = 0.103955395616*t1327*t3973;
  t4370 = 0. + t4334 + t4339 + t4356;
  t3708 = Sin(var1[5]);
  t4576 = 0.073913*t357;
  t4581 = -0.703234*t696;
  t4593 = t4576 + t4581 + t1147;
  t4602 = -0.703234*t1929;
  t4604 = 0.073913*t1963;
  t4619 = t1768 + t4602 + t4604;
  t4628 = -0.703234*t2314;
  t4691 = 0.073913*t2430;
  t4693 = t4628 + t2367 + t4691;
  t4871 = 0.103955395616*t1327*t4593;
  t4912 = t2728*t4619;
  t4922 = t2860*t4693;
  t4934 = 0. + t4871 + t4912 + t4922;
  t4950 = t3289*t4593;
  t4955 = t3368*t4619;
  t4957 = 0.103955395616*t1327*t4693;
  t4964 = 0. + t4950 + t4955 + t4957;
  t3852 = t106*t3814;
  t3899 = t1395*t3881;
  t3976 = t2224*t3973;
  t4057 = 0. + t3852 + t3899 + t3976;
  t4134 = -1.*t4057*t2564;
  t4331 = t2711*t4327;
  t4392 = -1.*t3050*t4370;
  t4402 = 0. + t4331 + t4392;
  t4455 = t2670*t4402;
  t4456 = t3050*t4327;
  t4463 = t2711*t4370;
  t4482 = 0. + t4456 + t4463;
  t4498 = t4482*t3708;
  t4499 = 0. + t4455 + t4498;
  t4511 = t2653*t4499;
  t4516 = 0. + t4134 + t4511;
  t4595 = t106*t4593;
  t4620 = t1395*t4619;
  t4758 = t2224*t4693;
  t4762 = 0. + t4595 + t4620 + t4758;
  t4834 = -1.*t4762*t2564;
  t4940 = t2711*t4934;
  t4973 = -1.*t3050*t4964;
  t4975 = 0. + t4940 + t4973;
  t4977 = t2670*t4975;
  t4978 = t3050*t4934;
  t4979 = t2711*t4964;
  t4984 = 0. + t4978 + t4979;
  t4996 = t4984*t3708;
  t5021 = 0. + t4977 + t4996;
  t5036 = t2653*t5021;
  t5052 = 0. + t4834 + t5036;
  t3683 = t3050*t2934;
  t3704 = t2711*t3431;
  t3707 = 0. + t3683 + t3704;
  t3008 = t2711*t2934;
  t3432 = -1.*t3050*t3431;
  t3516 = 0. + t3008 + t3432;
  t5135 = t2670*t4482;
  t5147 = -1.*t4402*t3708;
  t5159 = 0. + t5135 + t5147;
  t5184 = t2670*t4984;
  t5193 = -1.*t4975*t3708;
  t5205 = 0. + t5184 + t5193;
  t1163 = t106*t1159;
  t2187 = t1395*t2166;
  t2542 = t2224*t2436;
  t2545 = 0. + t1163 + t2187 + t2542;
  t5335 = -1.*t106*t3814;
  t5345 = -1.*t1395*t3881;
  t5348 = -1.*t2224*t3973;
  t5349 = 0. + t5335 + t5345 + t5348;
  t5364 = -1.*t106*t4593;
  t5402 = -1.*t1395*t4619;
  t5426 = -1.*t2224*t4693;
  t5436 = 0. + t5364 + t5402 + t5426;
  t5495 = 0.994522*t3814;
  t5496 = 0.104528*t3973;
  t5499 = 0. + t5495 + t5496;
  t5517 = 0.994522*t4593;
  t5528 = 0.104528*t4693;
  t5530 = 0. + t5517 + t5528;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00697*(0. - 1.*t2545*t2564 + t2653*(0. + t2670*t3516 + t3707*t3708));
  p_output1[10]=0.007*t4516 + 0.00002*t5052;
  p_output1[11]=0.00002*t4516 + 0.00067*t5052;
  p_output1[12]=0.00697*(0. + t2670*t3707 - 1.*t3516*t3708);
  p_output1[13]=0.007*t5159 + 0.00002*t5205;
  p_output1[14]=0.00002*t5159 + 0.00067*t5205;
  p_output1[15]=0.00697*t2545;
  p_output1[16]=0.007*t4057 + 0.00002*t4762;
  p_output1[17]=0.00002*t4057 + 0.00067*t4762;
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
  p_output1[39]=0.00697*(0. - 1.*t106*t1159 - 1.*t1395*t2166 - 1.*t2224*t2436);
  p_output1[40]=0.007*t5349 + 0.00002*t5436;
  p_output1[41]=0.00002*t5349 + 0.00067*t5436;
  p_output1[42]=0.00697*(0. + 0.994522*t1159 + 0.104528*t2436);
  p_output1[43]=0.007*t5499 + 0.00002*t5530;
  p_output1[44]=0.00002*t5499 + 0.00067*t5530;
  p_output1[45]=-6.139705719830357e-9;
  p_output1[46]=0.000019996802757479972;
  p_output1[47]=0.0006700009956279001;
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



void Jdq_AMBody_left_shoulder_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

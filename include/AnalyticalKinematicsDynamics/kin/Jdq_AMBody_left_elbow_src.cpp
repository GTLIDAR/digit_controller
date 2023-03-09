/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_left_elbow_src.h"

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
  double t1200;
  double t1304;
  double t1328;
  double t766;
  double t780;
  double t1054;
  double t1072;
  double t1537;
  double t1340;
  double t1425;
  double t1430;
  double t1463;
  double t1591;
  double t1603;
  double t1605;
  double t1606;
  double t1824;
  double t1831;
  double t1837;
  double t1845;
  double t1857;
  double t1867;
  double t1915;
  double t1990;
  double t1651;
  double t2149;
  double t2225;
  double t2229;
  double t2238;
  double t2271;
  double t2295;
  double t2329;
  double t2334;
  double t2379;
  double t2386;
  double t2448;
  double t2569;
  double t1071;
  double t1127;
  double t1137;
  double t1608;
  double t1753;
  double t1806;
  double t2089;
  double t2113;
  double t2115;
  double t2397;
  double t2419;
  double t295;
  double t473;
  double t681;
  double t2570;
  double t2643;
  double t2655;
  double t2659;
  double t2696;
  double t2711;
  double t2739;
  double t2768;
  double t2776;
  double t2782;
  double t2873;
  double t2885;
  double t2944;
  double t2992;
  double t3003;
  double t3045;
  double t3060;
  double t3088;
  double t3155;
  double t3166;
  double t3806;
  double t3493;
  double t3514;
  double t3573;
  double t3582;
  double t3694;
  double t3730;
  double t3751;
  double t3765;
  double t3376;
  double t3807;
  double t3809;
  double t3810;
  double t3818;
  double t3819;
  double t3828;
  double t3830;
  double t3833;
  double t754;
  double t765;
  double t2563;
  double t2565;
  double t3982;
  double t4035;
  double t4068;
  double t3928;
  double t3938;
  double t3964;
  double t4073;
  double t4076;
  double t4094;
  double t2862;
  double t2870;
  double t3278;
  double t3317;
  double t3333;
  double t3978;
  double t4072;
  double t4109;
  double t4110;
  double t4127;
  double t4131;
  double t4153;
  double t4160;
  double t4167;
  double t4179;
  double t4181;
  double t4185;
  double t4233;
  double t4243;
  double t4267;
  double t4272;
  double t4287;
  double t4289;
  double t4309;
  double t4322;
  double t3886;
  double t4475;
  double t4486;
  double t4487;
  double t4490;
  double t4535;
  double t4541;
  double t4542;
  double t4546;
  double t4589;
  double t4593;
  double t4597;
  double t4650;
  double t4520;
  double t4588;
  double t4661;
  double t4685;
  double t4707;
  double t4708;
  double t4713;
  double t4717;
  double t4722;
  double t4725;
  double t4740;
  double t4741;
  double t4777;
  double t4780;
  double t4787;
  double t4789;
  double t4796;
  double t4810;
  double t4823;
  double t4852;
  double t2428;
  double t2783;
  double t3208;
  double t3251;
  double t3310;
  double t3800;
  double t3835;
  double t3853;
  double t3854;
  double t3863;
  double t3868;
  double t3872;
  double t3889;
  double t3910;
  double t3916;
  double t3922;
  double t4118;
  double t4162;
  double t4206;
  double t4226;
  double t4230;
  double t4282;
  double t4334;
  double t4350;
  double t4372;
  double t4376;
  double t4378;
  double t4388;
  double t4401;
  double t4416;
  double t4454;
  double t4455;
  double t4698;
  double t4719;
  double t4742;
  double t4749;
  double t4774;
  double t4795;
  double t4854;
  double t4858;
  double t4886;
  double t4887;
  double t4892;
  double t4907;
  double t4910;
  double t4912;
  double t4913;
  double t4915;
  double t4943;
  double t4958;
  double t4959;
  double t4962;
  double t4979;
  double t4980;
  double t5024;
  double t5065;
  double t5069;
  double t5172;
  double t5177;
  double t5185;
  double t5186;
  double t5192;
  double t5195;
  double t5196;
  double t5206;
  double t5215;
  double t5216;
  double t5231;
  double t5248;
  double t5303;
  double t5309;
  double t5311;
  double t5316;
  double t5327;
  double t5343;
  double t5352;
  double t5354;
  double t5363;
  double t5400;
  double t5414;
  double t5416;
  double t5421;
  double t5428;
  double t5434;
  double t5439;
  double t5446;
  double t5452;
  double t5453;
  double t5458;
  double t5473;
  t1200 = Cos(var1[16]);
  t1304 = -1.*t1200;
  t1328 = 1. + t1304;
  t766 = Cos(var1[15]);
  t780 = -1.*t766;
  t1054 = 1. + t780;
  t1072 = Sin(var1[15]);
  t1537 = Sin(var1[16]);
  t1340 = -0.9890740084840001*t1328;
  t1425 = 1. + t1340;
  t1430 = -0.918819*t1425;
  t1463 = 0.010039180465428352*t1328;
  t1591 = -0.994522*t1537;
  t1603 = 0. + t1591;
  t1605 = 0.382684*t1603;
  t1606 = t1430 + t1463 + t1605;
  t1824 = -0.010926102783999999*t1328;
  t1831 = 1. + t1824;
  t1837 = 0.096572*t1831;
  t1845 = -0.0955161926444975*t1328;
  t1857 = 0.104528*t1537;
  t1867 = 0. + t1857;
  t1915 = 0.382684*t1867;
  t1990 = t1837 + t1845 + t1915;
  t1651 = 0.05226439969100001*t1054;
  t2149 = -1.0000001112680001*t1328;
  t2225 = 1. + t2149;
  t2229 = 0.382684*t2225;
  t2238 = -0.104528*t1537;
  t2271 = 0. + t2238;
  t2295 = 0.096572*t2271;
  t2329 = 0.994522*t1537;
  t2334 = 0. + t2329;
  t2379 = -0.918819*t2334;
  t2386 = t2229 + t2295 + t2379;
  t2448 = Sin(var1[14]);
  t2569 = -0.051978134642000004*t1054;
  t1071 = -0.49726168403800003*t1054;
  t1127 = 0.073913*t1072;
  t1137 = t1071 + t1127;
  t1608 = t1137*t1606;
  t1753 = 0.703234*t1072;
  t1806 = t1651 + t1753;
  t2089 = t1806*t1990;
  t2113 = -0.500001190325*t1054;
  t2115 = 1. + t2113;
  t2397 = t2115*t2386;
  t2419 = 0. + t1608 + t2089 + t2397;
  t295 = Cos(var1[14]);
  t473 = -1.*t295;
  t681 = 1. + t473;
  t2570 = -0.707107*t1072;
  t2643 = t2569 + t2570;
  t2655 = t2643*t1606;
  t2659 = -0.9945383682050002*t1054;
  t2696 = 1. + t2659;
  t2711 = t2696*t1990;
  t2739 = -0.703234*t1072;
  t2768 = t1651 + t2739;
  t2776 = t2768*t2386;
  t2782 = 0. + t2655 + t2711 + t2776;
  t2873 = -0.5054634410180001*t1054;
  t2885 = 1. + t2873;
  t2944 = t2885*t1606;
  t2992 = 0.707107*t1072;
  t3003 = t2569 + t2992;
  t3045 = t3003*t1990;
  t3060 = -0.073913*t1072;
  t3088 = t1071 + t3060;
  t3155 = t3088*t2386;
  t3166 = 0. + t2944 + t3045 + t3155;
  t3806 = Sin(var1[13]);
  t3493 = -0.994522*t2448;
  t3514 = 0. + t3493;
  t3573 = t3514*t2419;
  t3582 = 0.103955395616*t681*t2782;
  t3694 = -0.9890740084840001*t681;
  t3730 = 1. + t3694;
  t3751 = t3730*t3166;
  t3765 = 0. + t3573 + t3582 + t3751;
  t3376 = Cos(var1[13]);
  t3807 = 0.104528*t2448;
  t3809 = 0. + t3807;
  t3810 = t3809*t2419;
  t3818 = -0.010926102783999999*t681;
  t3819 = 1. + t3818;
  t3828 = t3819*t2782;
  t3830 = 0.103955395616*t681*t3166;
  t3833 = 0. + t3810 + t3828 + t3830;
  t754 = -1.0000001112680001*t681;
  t765 = 1. + t754;
  t2563 = -0.104528*t2448;
  t2565 = 0. + t2563;
  t3982 = 0.994522*t1831;
  t4035 = 0.010866249592949247*t1328;
  t4068 = t3982 + t4035;
  t3928 = 0.104528*t1425;
  t3938 = 0.10338592795881554*t1328;
  t3964 = t3928 + t3938;
  t4073 = 0.994522*t2271;
  t4076 = 0.104528*t2334;
  t4094 = t4073 + t4076;
  t2862 = 0.994522*t2448;
  t2870 = 0. + t2862;
  t3278 = Sin(var1[4]);
  t3317 = Cos(var1[4]);
  t3333 = Cos(var1[5]);
  t3978 = t3964*t1137;
  t4072 = t4068*t1806;
  t4109 = t2115*t4094;
  t4110 = 0. + t3978 + t4072 + t4109;
  t4127 = t2696*t4068;
  t4131 = t3964*t2643;
  t4153 = t2768*t4094;
  t4160 = 0. + t4127 + t4131 + t4153;
  t4167 = t2885*t3964;
  t4179 = t4068*t3003;
  t4181 = t3088*t4094;
  t4185 = 0. + t4167 + t4179 + t4181;
  t4233 = t3514*t4110;
  t4243 = 0.103955395616*t681*t4160;
  t4267 = t3730*t4185;
  t4272 = 0. + t4233 + t4243 + t4267;
  t4287 = t3809*t4110;
  t4289 = t3819*t4160;
  t4309 = 0.103955395616*t681*t4185;
  t4322 = 0. + t4287 + t4289 + t4309;
  t3886 = Sin(var1[5]);
  t4475 = 0.380588*t1425;
  t4486 = -0.004158319780035616*t1328;
  t4487 = 0.92388*t1603;
  t4490 = t4475 + t4486 + t4487;
  t4535 = -0.040001*t1831;
  t4541 = 0.0395641761067022*t1328;
  t4542 = 0.92388*t1867;
  t4546 = t4535 + t4541 + t4542;
  t4589 = 0.92388*t2225;
  t4593 = -0.040001*t2271;
  t4597 = 0.380588*t2334;
  t4650 = t4589 + t4593 + t4597;
  t4520 = t1137*t4490;
  t4588 = t1806*t4546;
  t4661 = t2115*t4650;
  t4685 = 0. + t4520 + t4588 + t4661;
  t4707 = t2643*t4490;
  t4708 = t2696*t4546;
  t4713 = t2768*t4650;
  t4717 = 0. + t4707 + t4708 + t4713;
  t4722 = t2885*t4490;
  t4725 = t3003*t4546;
  t4740 = t3088*t4650;
  t4741 = 0. + t4722 + t4725 + t4740;
  t4777 = t3514*t4685;
  t4780 = 0.103955395616*t681*t4717;
  t4787 = t3730*t4741;
  t4789 = 0. + t4777 + t4780 + t4787;
  t4796 = t3809*t4685;
  t4810 = t3819*t4717;
  t4823 = 0.103955395616*t681*t4741;
  t4852 = 0. + t4796 + t4810 + t4823;
  t2428 = t765*t2419;
  t2783 = t2565*t2782;
  t3208 = t2870*t3166;
  t3251 = 0. + t2428 + t2783 + t3208;
  t3310 = -1.*t3251*t3278;
  t3800 = t3376*t3765;
  t3835 = -1.*t3806*t3833;
  t3853 = 0. + t3800 + t3835;
  t3854 = t3333*t3853;
  t3863 = t3806*t3765;
  t3868 = t3376*t3833;
  t3872 = 0. + t3863 + t3868;
  t3889 = t3872*t3886;
  t3910 = 0. + t3854 + t3889;
  t3916 = t3317*t3910;
  t3922 = 0. + t3310 + t3916;
  t4118 = t765*t4110;
  t4162 = t2565*t4160;
  t4206 = t2870*t4185;
  t4226 = 0. + t4118 + t4162 + t4206;
  t4230 = -1.*t4226*t3278;
  t4282 = t3376*t4272;
  t4334 = -1.*t3806*t4322;
  t4350 = 0. + t4282 + t4334;
  t4372 = t3333*t4350;
  t4376 = t3806*t4272;
  t4378 = t3376*t4322;
  t4388 = 0. + t4376 + t4378;
  t4401 = t4388*t3886;
  t4416 = 0. + t4372 + t4401;
  t4454 = t3317*t4416;
  t4455 = 0. + t4230 + t4454;
  t4698 = t765*t4685;
  t4719 = t2565*t4717;
  t4742 = t2870*t4741;
  t4749 = 0. + t4698 + t4719 + t4742;
  t4774 = -1.*t4749*t3278;
  t4795 = t3376*t4789;
  t4854 = -1.*t3806*t4852;
  t4858 = 0. + t4795 + t4854;
  t4886 = t3333*t4858;
  t4887 = t3806*t4789;
  t4892 = t3376*t4852;
  t4907 = 0. + t4887 + t4892;
  t4910 = t4907*t3886;
  t4912 = 0. + t4886 + t4910;
  t4913 = t3317*t4912;
  t4915 = 0. + t4774 + t4913;
  t4943 = t3333*t3872;
  t4958 = -1.*t3853*t3886;
  t4959 = 0. + t4943 + t4958;
  t4962 = t3333*t4388;
  t4979 = -1.*t4350*t3886;
  t4980 = 0. + t4962 + t4979;
  t5024 = t3333*t4907;
  t5065 = -1.*t4858*t3886;
  t5069 = 0. + t5024 + t5065;
  t5172 = -1.*t765*t2419;
  t5177 = -1.*t2565*t2782;
  t5185 = -1.*t2870*t3166;
  t5186 = 0. + t5172 + t5177 + t5185;
  t5192 = -1.*t765*t4110;
  t5195 = -1.*t2565*t4160;
  t5196 = -1.*t2870*t4185;
  t5206 = 0. + t5192 + t5195 + t5196;
  t5215 = -1.*t765*t4685;
  t5216 = -1.*t2565*t4717;
  t5231 = -1.*t2870*t4741;
  t5248 = 0. + t5215 + t5216 + t5231;
  t5303 = 0.994522*t2782;
  t5309 = 0.104528*t3166;
  t5311 = 0. + t5303 + t5309;
  t5316 = 0.994522*t4160;
  t5327 = 0.104528*t4185;
  t5343 = 0. + t5316 + t5327;
  t5352 = 0.994522*t4717;
  t5354 = 0.104528*t4741;
  t5363 = 0. + t5352 + t5354;
  t5400 = -0.703234*t1606;
  t5414 = 0.073913*t1990;
  t5416 = 0.707107*t2386;
  t5421 = 0. + t5400 + t5414 + t5416;
  t5428 = 0.073913*t4068;
  t5434 = -0.703234*t3964;
  t5439 = 0.707107*t4094;
  t5446 = 0. + t5428 + t5434 + t5439;
  t5452 = -0.703234*t4490;
  t5453 = 0.073913*t4546;
  t5458 = 0.707107*t4650;
  t5473 = 0. + t5452 + t5453 + t5458;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00003*t3922 + 0.0014*t4455 + 0.00048*t4915;
  p_output1[10]=0.00956*t3922 + 0.00002*t4455 + 0.00003*t4915;
  p_output1[11]=0.00002*t3922 - 0.00001*t4455 + 0.0014*t4915;
  p_output1[12]=0.00003*t4959 + 0.0014*t4980 + 0.00048*t5069;
  p_output1[13]=0.00956*t4959 + 0.00002*t4980 + 0.00003*t5069;
  p_output1[14]=0.00002*t4959 - 0.00001*t4980 + 0.0014*t5069;
  p_output1[15]=0.00003*t3251 + 0.0014*t4226 + 0.00048*t4749;
  p_output1[16]=0.00956*t3251 + 0.00002*t4226 + 0.00003*t4749;
  p_output1[17]=0.00002*t3251 - 0.00001*t4226 + 0.0014*t4749;
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
  p_output1[39]=0.00003*t5186 + 0.0014*t5206 + 0.00048*t5248;
  p_output1[40]=0.00956*t5186 + 0.00002*t5206 + 0.00003*t5248;
  p_output1[41]=0.00002*t5186 - 0.00001*t5206 + 0.0014*t5248;
  p_output1[42]=0.00003*t5311 + 0.0014*t5343 + 0.00048*t5363;
  p_output1[43]=0.00956*t5311 + 0.00002*t5343 + 0.00003*t5363;
  p_output1[44]=0.00002*t5311 - 0.00001*t5343 + 0.0014*t5363;
  p_output1[45]=0.00003*t5421 + 0.0014*t5446 + 0.00048*t5473;
  p_output1[46]=0.00956*t5421 + 0.00002*t5446 + 0.00003*t5473;
  p_output1[47]=0.00002*t5421 - 0.00001*t5446 + 0.0014*t5473;
  p_output1[48]=0.0014000002851719201;
  p_output1[49]=0.000020006377476740062;
  p_output1[50]=-9.999668670840007e-6;
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



void Jdq_AMBody_left_elbow_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

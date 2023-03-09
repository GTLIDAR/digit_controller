/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_left_shoulder_pitch_src.h"

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
  double t286;
  double t378;
  double t717;
  double t966;
  double t990;
  double t2295;
  double t2533;
  double t2656;
  double t1684;
  double t3573;
  double t3582;
  double t3639;
  double t3655;
  double t3677;
  double t2888;
  double t3039;
  double t3071;
  double t3295;
  double t3480;
  double t3891;
  double t727;
  double t1219;
  double t1354;
  double t1589;
  double t3985;
  double t4023;
  double t4061;
  double t3492;
  double t3949;
  double t3952;
  double t4068;
  double t4807;
  double t4812;
  double t5140;
  double t5145;
  double t5168;
  double t5170;
  double t5174;
  double t5177;
  double t5216;
  double t5279;
  double t5284;
  double t5298;
  double t5331;
  double t5336;
  double t4987;
  double t5003;
  double t5033;
  double t5047;
  double t4357;
  double t4374;
  double t5398;
  double t5469;
  double t5517;
  double t5196;
  double t5342;
  double t5347;
  double t5683;
  double t5730;
  double t5697;
  double t5755;
  double t5781;
  double t5799;
  double t5812;
  double t5816;
  double t5788;
  double t5825;
  double t5826;
  double t5843;
  double t5851;
  double t5866;
  double t64;
  double t1357;
  double t1439;
  double t1442;
  double t1457;
  double t1524;
  double t3953;
  double t4094;
  double t4179;
  double t4308;
  double t4370;
  double t4488;
  double t4582;
  double t4600;
  double t4615;
  double t4626;
  double t4666;
  double t4671;
  double t4679;
  double t4832;
  double t4838;
  double t4842;
  double t4924;
  double t4949;
  double t5068;
  double t5359;
  double t5530;
  double t5546;
  double t5549;
  double t5550;
  double t5554;
  double t5585;
  double t5593;
  double t5616;
  double t5635;
  double t5644;
  double t5653;
  double t6039;
  double t6048;
  double t6116;
  double t6130;
  double t6034;
  double t6153;
  double t6154;
  double t6155;
  double t6081;
  double t6133;
  double t6135;
  double t5685;
  double t5834;
  double t5870;
  double t5899;
  double t5924;
  double t5937;
  double t5945;
  double t5959;
  double t6023;
  double t6028;
  double t6035;
  double t6151;
  double t6156;
  double t6164;
  double t6167;
  double t6168;
  double t6169;
  double t6172;
  double t6173;
  double t6176;
  double t6179;
  double t6194;
  double t6195;
  double t6202;
  double t6220;
  double t6222;
  double t6234;
  double t6235;
  double t6243;
  double t4675;
  double t5657;
  double t5664;
  double t6286;
  double t6296;
  double t6298;
  double t6303;
  double t6304;
  double t6306;
  double t6300;
  double t6308;
  double t6309;
  double t6314;
  double t6316;
  double t6321;
  double t5997;
  double t6009;
  double t6196;
  double t6201;
  double t6285;
  double t6312;
  double t6322;
  double t6346;
  double t6350;
  double t6355;
  double t6356;
  double t6363;
  double t6270;
  double t6271;
  double t6274;
  double t6381;
  double t6382;
  double t6395;
  double t6397;
  double t6399;
  double t6401;
  double t6419;
  double t6421;
  double t6429;
  double t6451;
  double t6454;
  double t6456;
  double t6418;
  double t6446;
  double t6458;
  double t6459;
  double t6462;
  double t6463;
  double t6464;
  double t6466;
  double t6473;
  double t6476;
  double t6477;
  double t6478;
  double t6486;
  double t6487;
  t286 = Sin(var1[14]);
  t378 = -0.104528*t286;
  t717 = 0. + t378;
  t966 = 0.994522*t286;
  t990 = 0. + t966;
  t2295 = Cos(var1[14]);
  t2533 = -1.*t2295;
  t2656 = 1. + t2533;
  t1684 = Cos(var1[13]);
  t3573 = -0.9890740084840001*t2656;
  t3582 = 1. + t3573;
  t3639 = -0.104528*t3582;
  t3655 = -0.10338592795881554*t2656;
  t3677 = t3639 + t3655;
  t2888 = -0.010926102783999999*t2656;
  t3039 = 1. + t2888;
  t3071 = -0.994522*t3039;
  t3295 = -0.010866249592949247*t2656;
  t3480 = t3071 + t3295;
  t3891 = Sin(var1[13]);
  t727 = -0.994522*t717;
  t1219 = -0.104528*t990;
  t1354 = 0. + t727 + t1219;
  t1589 = Cos(var1[5]);
  t3985 = t1684*t3677;
  t4023 = -1.*t3480*t3891;
  t4061 = 0. + t3985 + t4023;
  t3492 = t1684*t3480;
  t3949 = t3677*t3891;
  t3952 = 0. + t3492 + t3949;
  t4068 = Sin(var1[5]);
  t4807 = -1.0000001112680001*t2656;
  t4812 = 1. + t4807;
  t5140 = 0.703234*t3582;
  t5145 = -0.007683655156165408*t2656;
  t5168 = -0.994522*t286;
  t5170 = 0. + t5168;
  t5174 = -0.707107*t5170;
  t5177 = t5140 + t5145 + t5174;
  t5216 = -0.073913*t3039;
  t5279 = 0.07310496868062215*t2656;
  t5284 = 0.104528*t286;
  t5298 = 0. + t5284;
  t5331 = -0.707107*t5298;
  t5336 = t5216 + t5279 + t5331;
  t4987 = -0.707107*t4812;
  t5003 = -0.073913*t717;
  t5033 = 0.703234*t990;
  t5047 = 0. + t4987 + t5003 + t5033;
  t4357 = Sin(var1[4]);
  t4374 = Cos(var1[4]);
  t5398 = t1684*t5177;
  t5469 = -1.*t3891*t5336;
  t5517 = 0. + t5398 + t5469;
  t5196 = t3891*t5177;
  t5342 = t1684*t5336;
  t5347 = 0. + t5196 + t5342;
  t5683 = Cos(var1[3]);
  t5730 = Sin(var1[3]);
  t5697 = t5683*t1589*t4357;
  t5755 = t5730*t4068;
  t5781 = t5697 + t5755;
  t5799 = -1.*t1589*t5730;
  t5812 = t5683*t4357*t4068;
  t5816 = t5799 + t5812;
  t5788 = -1.*t3891*t5781;
  t5825 = t1684*t5816;
  t5826 = t5788 + t5825;
  t5843 = t1684*t5781;
  t5851 = t3891*t5816;
  t5866 = t5843 + t5851;
  t64 = -1.0000001112680001*var2[14];
  t1357 = var2[5]*t1354;
  t1439 = 0.994522*t717;
  t1442 = 0.104528*t990;
  t1457 = 0. + t1439 + t1442;
  t1524 = var2[13]*t1457;
  t3953 = t1589*t3952;
  t4094 = -1.*t4061*t4068;
  t4179 = 0. + t3953 + t4094;
  t4308 = var2[4]*t4179;
  t4370 = -1.*t1354*t4357;
  t4488 = t1589*t4061;
  t4582 = t3952*t4068;
  t4600 = 0. + t4488 + t4582;
  t4615 = t4374*t4600;
  t4626 = 0. + t4370 + t4615;
  t4666 = var2[3]*t4626;
  t4671 = t64 + t1357 + t1524 + t4308 + t4666;
  t4679 = -4.610340000044122e-7*var2[14];
  t4832 = 0.707107*t4812;
  t4838 = 0.073913*t717;
  t4842 = -0.703234*t990;
  t4924 = 0. + t4832 + t4838 + t4842;
  t4949 = var2[13]*t4924;
  t5068 = var2[5]*t5047;
  t5359 = t1589*t5347;
  t5530 = -1.*t5517*t4068;
  t5546 = 0. + t5359 + t5530;
  t5549 = var2[4]*t5546;
  t5550 = -1.*t5047*t4357;
  t5554 = t1589*t5517;
  t5585 = t5347*t4068;
  t5593 = 0. + t5554 + t5585;
  t5616 = t4374*t5593;
  t5635 = 0. + t5550 + t5616;
  t5644 = var2[3]*t5635;
  t5653 = t4679 + t4949 + t5068 + t5549 + t5644;
  t6039 = 0.707107*t5170;
  t6048 = t5140 + t5145 + t6039;
  t6116 = 0.707107*t5298;
  t6130 = t5216 + t5279 + t6116;
  t6034 = 0. + t4832 + t5003 + t5033;
  t6153 = t1684*t6048;
  t6154 = -1.*t3891*t6130;
  t6155 = 0. + t6153 + t6154;
  t6081 = t3891*t6048;
  t6133 = t1684*t6130;
  t6135 = 0. + t6081 + t6133;
  t5685 = t5683*t4374*t990;
  t5834 = 0.103955395616*t2656*t5826;
  t5870 = t3582*t5866;
  t5899 = t5685 + t5834 + t5870;
  t5924 = t5683*t4374*t717;
  t5937 = t3039*t5826;
  t5945 = 0.103955395616*t2656*t5866;
  t5959 = t5924 + t5937 + t5945;
  t6023 = 0. + t4987 + t4838 + t4842;
  t6028 = var2[13]*t6023;
  t6035 = var2[5]*t6034;
  t6151 = t1589*t6135;
  t6156 = -1.*t6155*t4068;
  t6164 = 0. + t6151 + t6156;
  t6167 = var2[4]*t6164;
  t6168 = -1.*t6034*t4357;
  t6169 = t1589*t6155;
  t6172 = t6135*t4068;
  t6173 = 0. + t6169 + t6172;
  t6176 = t4374*t6173;
  t6179 = 0. + t6168 + t6176;
  t6194 = var2[3]*t6179;
  t6195 = t4679 + t6028 + t6035 + t6167 + t6194;
  t6202 = 0.703234*t5899;
  t6220 = -0.073913*t5959;
  t6222 = t4812*t5683*t4374;
  t6234 = t5298*t5826;
  t6235 = t5170*t5866;
  t6243 = t6222 + t6234 + t6235;
  t4675 = 0.00578*t4671;
  t5657 = -0.00205*t5653;
  t5664 = t4675 + t5657;
  t6286 = t1589*t5730*t4357;
  t6296 = -1.*t5683*t4068;
  t6298 = t6286 + t6296;
  t6303 = t5683*t1589;
  t6304 = t5730*t4357*t4068;
  t6306 = t6303 + t6304;
  t6300 = -1.*t3891*t6298;
  t6308 = t1684*t6306;
  t6309 = t6300 + t6308;
  t6314 = t1684*t6298;
  t6316 = t3891*t6306;
  t6321 = t6314 + t6316;
  t5997 = -0.00205*t4671;
  t6009 = 0.00209*t5653;
  t6196 = -0.00001*t6195;
  t6201 = t5997 + t6009 + t6196;
  t6285 = t4374*t990*t5730;
  t6312 = 0.103955395616*t2656*t6309;
  t6322 = t3582*t6321;
  t6346 = t6285 + t6312 + t6322;
  t6350 = t4374*t717*t5730;
  t6355 = t3039*t6309;
  t6356 = 0.103955395616*t2656*t6321;
  t6363 = t6350 + t6355 + t6356;
  t6270 = -0.00001*t5653;
  t6271 = 0.00676*t6195;
  t6274 = t6270 + t6271;
  t6381 = 0.703234*t6346;
  t6382 = -0.073913*t6363;
  t6395 = t4812*t4374*t5730;
  t6397 = t5298*t6309;
  t6399 = t5170*t6321;
  t6401 = t6395 + t6397 + t6399;
  t6419 = -1.*t4374*t1589*t3891;
  t6421 = t1684*t4374*t4068;
  t6429 = t6419 + t6421;
  t6451 = t1684*t4374*t1589;
  t6454 = t4374*t3891*t4068;
  t6456 = t6451 + t6454;
  t6418 = -1.*t990*t4357;
  t6446 = 0.103955395616*t2656*t6429;
  t6458 = t3582*t6456;
  t6459 = t6418 + t6446 + t6458;
  t6462 = -1.*t717*t4357;
  t6463 = t3039*t6429;
  t6464 = 0.103955395616*t2656*t6456;
  t6466 = t6462 + t6463 + t6464;
  t6473 = 0.703234*t6459;
  t6476 = -0.073913*t6466;
  t6477 = -1.*t4812*t4357;
  t6478 = t5298*t6429;
  t6486 = t5170*t6456;
  t6487 = t6477 + t6478 + t6486;
  p_output1[0]=t5664*(-0.104528*t5899 - 0.994522*t5959) + t6201*(t6202 + t6220 - 0.707107*t6243) + (t6202 + t6220 + 0.707107*t6243)*t6274;
  p_output1[1]=t5664*(-0.104528*t6346 - 0.994522*t6363) + t6201*(t6381 + t6382 - 0.707107*t6401) + t6274*(t6381 + t6382 + 0.707107*t6401);
  p_output1[2]=t5664*(-0.104528*t6459 - 0.994522*t6466) + t6201*(t6473 + t6476 - 0.707107*t6487) + t6274*(t6473 + t6476 + 0.707107*t6487);
}



void AMWorld_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_left_shoulder_pitch_src.h"

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
  double t176;
  double t1138;
  double t946;
  double t986;
  double t1037;
  double t1640;
  double t1190;
  double t1340;
  double t1646;
  double t181;
  double t820;
  double t1507;
  double t1726;
  double t2174;
  double t2305;
  double t2434;
  double t2448;
  double t3113;
  double t2677;
  double t2714;
  double t3016;
  double t3115;
  double t3125;
  double t3158;
  double t3161;
  double t3169;
  double t2267;
  double t2273;
  double t3147;
  double t3233;
  double t3256;
  double t3274;
  double t3288;
  double t3291;
  double t2925;
  double t2963;
  double t2829;
  double t2838;
  double t3585;
  double t3587;
  double t3631;
  double t3541;
  double t3637;
  double t3638;
  double t3651;
  double t3675;
  double t3680;
  double t3804;
  double t3831;
  double t695;
  double t724;
  double t4096;
  double t4103;
  double t4111;
  double t4125;
  double t4137;
  double t4148;
  double t2493;
  double t2516;
  double t4114;
  double t4150;
  double t4153;
  double t4170;
  double t4182;
  double t4183;
  double t2787;
  double t2794;
  double t4367;
  double t4369;
  double t4375;
  double t4389;
  double t4390;
  double t4405;
  double t3643;
  double t4641;
  double t4653;
  double t4661;
  double t4675;
  double t4678;
  double t4692;
  double t4716;
  double t4722;
  double t4862;
  double t4865;
  double t4873;
  double t4861;
  double t4874;
  double t4891;
  double t4913;
  double t4915;
  double t4922;
  double t5037;
  double t5041;
  double t5190;
  double t5196;
  double t5200;
  double t5203;
  double t5236;
  double t5258;
  double t5365;
  double t5385;
  double t5388;
  double t5430;
  double t5431;
  double t5432;
  double t5728;
  double t5731;
  double t5735;
  double t5744;
  double t5746;
  double t5747;
  double t920;
  double t2219;
  double t2455;
  double t2458;
  double t2476;
  double t2633;
  double t2738;
  double t2743;
  double t2765;
  double t2770;
  double t2808;
  double t2923;
  double t2964;
  double t2965;
  double t3270;
  double t3297;
  double t3309;
  double t3328;
  double t3330;
  double t3349;
  double t3378;
  double t3380;
  double t3381;
  double t3384;
  double t3422;
  double t3691;
  double t3703;
  double t3706;
  double t3709;
  double t3710;
  double t3716;
  double t3717;
  double t3721;
  double t3722;
  double t3731;
  double t3802;
  double t3803;
  double t3832;
  double t3855;
  double t3874;
  double t3877;
  double t3893;
  double t3914;
  double t3921;
  double t3922;
  double t3928;
  double t3934;
  double t3962;
  double t4020;
  double t4092;
  double t4162;
  double t4190;
  double t4191;
  double t4192;
  double t4206;
  double t4213;
  double t4238;
  double t4256;
  double t4294;
  double t4309;
  double t4313;
  double t4314;
  double t4315;
  double t4350;
  double t4385;
  double t4408;
  double t4409;
  double t4418;
  double t4419;
  double t4422;
  double t4427;
  double t4434;
  double t4436;
  double t4440;
  double t4443;
  double t4447;
  double t4449;
  double t4473;
  double t4476;
  double t4480;
  double t4495;
  double t4496;
  double t4514;
  double t4515;
  double t4531;
  double t4555;
  double t4576;
  double t4579;
  double t4584;
  double t4585;
  double t4679;
  double t4729;
  double t4739;
  double t4751;
  double t4803;
  double t4807;
  double t4812;
  double t4813;
  double t4824;
  double t4829;
  double t4836;
  double t4892;
  double t4923;
  double t4924;
  double t4933;
  double t4940;
  double t4948;
  double t4951;
  double t4959;
  double t4964;
  double t4971;
  double t4973;
  double t5012;
  double t5033;
  double t5056;
  double t5068;
  double t5079;
  double t5093;
  double t5098;
  double t5105;
  double t5121;
  double t5125;
  double t5145;
  double t5152;
  double t5164;
  double t5174;
  double t5202;
  double t5266;
  double t5274;
  double t5275;
  double t5279;
  double t5284;
  double t5298;
  double t5319;
  double t5332;
  double t5336;
  double t5342;
  double t5428;
  double t5435;
  double t5437;
  double t5446;
  double t5448;
  double t5451;
  double t5454;
  double t5517;
  double t5520;
  double t5521;
  double t5549;
  double t5574;
  double t5575;
  double t5593;
  double t5604;
  double t5621;
  double t5628;
  double t5630;
  double t5641;
  double t5644;
  double t5653;
  double t5657;
  double t5683;
  double t5685;
  double t5692;
  double t5723;
  double t5739;
  double t5749;
  double t5752;
  double t5755;
  double t5773;
  double t5777;
  double t5781;
  double t5799;
  double t5820;
  double t5822;
  double t5825;
  double t5834;
  double t5851;
  t176 = Cos(var1[3]);
  t1138 = Cos(var1[4]);
  t946 = Cos(var1[14]);
  t986 = -1.*t946;
  t1037 = 1. + t986;
  t1640 = Cos(var1[13]);
  t1190 = Cos(var1[5]);
  t1340 = Sin(var1[13]);
  t1646 = Sin(var1[5]);
  t181 = Sin(var1[14]);
  t820 = Sin(var1[4]);
  t1507 = -1.*t176*t1138*t1190*t1340;
  t1726 = t1640*t176*t1138*t1646;
  t2174 = t1507 + t1726;
  t2305 = t1640*t176*t1138*t1190;
  t2434 = t176*t1138*t1340*t1646;
  t2448 = t2305 + t2434;
  t3113 = Sin(var1[3]);
  t2677 = -0.010926102783999999*t1037;
  t2714 = 1. + t2677;
  t3016 = t176*t1190*t820;
  t3115 = t3113*t1646;
  t3125 = t3016 + t3115;
  t3158 = t1190*t3113;
  t3161 = -1.*t176*t820*t1646;
  t3169 = t3158 + t3161;
  t2267 = -0.9890740084840001*t1037;
  t2273 = 1. + t2267;
  t3147 = t1340*t3125;
  t3233 = t1640*t3169;
  t3256 = t3147 + t3233;
  t3274 = t1640*t3125;
  t3288 = -1.*t1340*t3169;
  t3291 = t3274 + t3288;
  t2925 = -0.994522*t181;
  t2963 = 0. + t2925;
  t2829 = 0.104528*t181;
  t2838 = 0. + t2829;
  t3585 = -1.*t1190*t3113;
  t3587 = t176*t820*t1646;
  t3631 = t3585 + t3587;
  t3541 = -1.*t1340*t3125;
  t3637 = t1640*t3631;
  t3638 = t3541 + t3637;
  t3651 = -1.*t1640*t3125;
  t3675 = -1.*t1340*t3631;
  t3680 = t3651 + t3675;
  t3804 = t1340*t3631;
  t3831 = t3274 + t3804;
  t695 = 0.994522*t181;
  t724 = 0. + t695;
  t4096 = -1.*t1190*t3113*t820;
  t4103 = t176*t1646;
  t4111 = t4096 + t4103;
  t4125 = -1.*t176*t1190;
  t4137 = -1.*t3113*t820*t1646;
  t4148 = t4125 + t4137;
  t2493 = -0.104528*t181;
  t2516 = 0. + t2493;
  t4114 = -1.*t1340*t4111;
  t4150 = t1640*t4148;
  t4153 = t4114 + t4150;
  t4170 = t1640*t4111;
  t4182 = t1340*t4148;
  t4183 = t4170 + t4182;
  t2787 = -1.0000001112680001*t1037;
  t2794 = 1. + t2787;
  t4367 = -1.*t1138*t1190*t1340*t3113;
  t4369 = t1640*t1138*t3113*t1646;
  t4375 = t4367 + t4369;
  t4389 = t1640*t1138*t1190*t3113;
  t4390 = t1138*t1340*t3113*t1646;
  t4405 = t4389 + t4390;
  t3643 = 0.103955395616*t1037*t3638;
  t4641 = t1190*t3113*t820;
  t4653 = -1.*t176*t1646;
  t4661 = t4641 + t4653;
  t4675 = t1340*t4661;
  t4678 = t4675 + t4150;
  t4692 = t1640*t4661;
  t4716 = -1.*t1340*t4148;
  t4722 = t4692 + t4716;
  t4862 = t176*t1190;
  t4865 = t3113*t820*t1646;
  t4873 = t4862 + t4865;
  t4861 = -1.*t1340*t4661;
  t4874 = t1640*t4873;
  t4891 = t4861 + t4874;
  t4913 = -1.*t1640*t4661;
  t4915 = -1.*t1340*t4873;
  t4922 = t4913 + t4915;
  t5037 = t1340*t4873;
  t5041 = t4692 + t5037;
  t5190 = -1.*t1138*t1190*t1340;
  t5196 = t1640*t1138*t1646;
  t5200 = t5190 + t5196;
  t5203 = -1.*t1640*t1138*t1190;
  t5236 = -1.*t1138*t1340*t1646;
  t5258 = t5203 + t5236;
  t5365 = t1138*t1190*t1340;
  t5385 = -1.*t1640*t1138*t1646;
  t5388 = t5365 + t5385;
  t5430 = t1640*t1138*t1190;
  t5431 = t1138*t1340*t1646;
  t5432 = t5430 + t5431;
  t5728 = t1190*t1340*t820;
  t5731 = -1.*t1640*t820*t1646;
  t5735 = t5728 + t5731;
  t5744 = -1.*t1640*t1190*t820;
  t5746 = -1.*t1340*t820*t1646;
  t5747 = t5744 + t5746;
  t920 = -1.*t176*t724*t820;
  t2219 = 0.103955395616*t1037*t2174;
  t2455 = t2273*t2448;
  t2458 = t920 + t2219 + t2455;
  t2476 = 0.703234*t2458;
  t2633 = -1.*t176*t2516*t820;
  t2738 = t2714*t2174;
  t2743 = 0.103955395616*t1037*t2448;
  t2765 = t2633 + t2738 + t2743;
  t2770 = -0.073913*t2765;
  t2808 = -1.*t2794*t176*t820;
  t2923 = t2838*t2174;
  t2964 = t2963*t2448;
  t2965 = t2808 + t2923 + t2964;
  t3270 = 0.103955395616*t1037*t3256;
  t3297 = t2714*t3291;
  t3309 = t3270 + t3297;
  t3328 = -0.073913*t3309;
  t3330 = t2273*t3256;
  t3349 = 0.103955395616*t1037*t3291;
  t3378 = t3330 + t3349;
  t3380 = 0.703234*t3378;
  t3381 = t2963*t3256;
  t3384 = t2838*t3291;
  t3422 = t3381 + t3384;
  t3691 = t2714*t3680;
  t3703 = t3643 + t3691;
  t3706 = -0.073913*t3703;
  t3709 = t2273*t3638;
  t3710 = 0.103955395616*t1037*t3680;
  t3716 = t3709 + t3710;
  t3717 = 0.703234*t3716;
  t3721 = t2963*t3638;
  t3722 = t2838*t3680;
  t3731 = t3721 + t3722;
  t3802 = -1.0000001112680001*t176*t1138*t181;
  t3803 = 0.104528*t946*t3638;
  t3832 = -0.994522*t946*t3831;
  t3855 = t3802 + t3803 + t3832;
  t3874 = 0.994522*t946*t176*t1138;
  t3877 = 0.103955395616*t181*t3638;
  t3893 = -0.9890740084840001*t181*t3831;
  t3914 = t3874 + t3877 + t3893;
  t3921 = 0.703234*t3914;
  t3922 = -0.104528*t946*t176*t1138;
  t3928 = -0.010926102783999999*t181*t3638;
  t3934 = 0.103955395616*t181*t3831;
  t3962 = t3922 + t3928 + t3934;
  t4020 = -0.073913*t3962;
  t4092 = -1.*t1138*t724*t3113;
  t4162 = 0.103955395616*t1037*t4153;
  t4190 = t2273*t4183;
  t4191 = t4092 + t4162 + t4190;
  t4192 = 0.703234*t4191;
  t4206 = -1.*t1138*t2516*t3113;
  t4213 = t2714*t4153;
  t4238 = 0.103955395616*t1037*t4183;
  t4256 = t4206 + t4213 + t4238;
  t4294 = -0.073913*t4256;
  t4309 = -1.*t2794*t1138*t3113;
  t4313 = t2838*t4153;
  t4314 = t2963*t4183;
  t4315 = t4309 + t4313 + t4314;
  t4350 = -1.*t724*t3113*t820;
  t4385 = 0.103955395616*t1037*t4375;
  t4408 = t2273*t4405;
  t4409 = t4350 + t4385 + t4408;
  t4418 = 0.703234*t4409;
  t4419 = -1.*t2516*t3113*t820;
  t4422 = t2714*t4375;
  t4427 = 0.103955395616*t1037*t4405;
  t4434 = t4419 + t4422 + t4427;
  t4436 = -0.073913*t4434;
  t4440 = -1.*t2794*t3113*t820;
  t4443 = t2838*t4375;
  t4447 = t2963*t4405;
  t4449 = t4440 + t4443 + t4447;
  t4473 = t176*t1138*t724;
  t4476 = t2273*t3831;
  t4480 = t4473 + t3643 + t4476;
  t4495 = 0.703234*t4480;
  t4496 = t176*t1138*t2516;
  t4514 = t2714*t3638;
  t4515 = 0.103955395616*t1037*t3831;
  t4531 = t4496 + t4514 + t4515;
  t4555 = -0.073913*t4531;
  t4576 = t2794*t176*t1138;
  t4579 = t2838*t3638;
  t4584 = t2963*t3831;
  t4585 = t4576 + t4579 + t4584;
  t4679 = 0.103955395616*t1037*t4678;
  t4729 = t2714*t4722;
  t4739 = t4679 + t4729;
  t4751 = -0.073913*t4739;
  t4803 = t2273*t4678;
  t4807 = 0.103955395616*t1037*t4722;
  t4812 = t4803 + t4807;
  t4813 = 0.703234*t4812;
  t4824 = t2963*t4678;
  t4829 = t2838*t4722;
  t4836 = t4824 + t4829;
  t4892 = 0.103955395616*t1037*t4891;
  t4923 = t2714*t4922;
  t4924 = t4892 + t4923;
  t4933 = -0.073913*t4924;
  t4940 = t2273*t4891;
  t4948 = 0.103955395616*t1037*t4922;
  t4951 = t4940 + t4948;
  t4959 = 0.703234*t4951;
  t4964 = t2963*t4891;
  t4971 = t2838*t4922;
  t4973 = t4964 + t4971;
  t5012 = -1.0000001112680001*t1138*t181*t3113;
  t5033 = 0.104528*t946*t4891;
  t5056 = -0.994522*t946*t5041;
  t5068 = t5012 + t5033 + t5056;
  t5079 = 0.994522*t946*t1138*t3113;
  t5093 = 0.103955395616*t181*t4891;
  t5098 = -0.9890740084840001*t181*t5041;
  t5105 = t5079 + t5093 + t5098;
  t5121 = 0.703234*t5105;
  t5125 = -0.104528*t946*t1138*t3113;
  t5145 = -0.010926102783999999*t181*t4891;
  t5152 = 0.103955395616*t181*t5041;
  t5164 = t5125 + t5145 + t5152;
  t5174 = -0.073913*t5164;
  t5202 = 0.103955395616*t1037*t5200;
  t5266 = t2714*t5258;
  t5274 = t5202 + t5266;
  t5275 = -0.073913*t5274;
  t5279 = t2273*t5200;
  t5284 = 0.103955395616*t1037*t5258;
  t5298 = t5279 + t5284;
  t5319 = 0.703234*t5298;
  t5332 = t2963*t5200;
  t5336 = t2838*t5258;
  t5342 = t5332 + t5336;
  t5428 = 0.103955395616*t1037*t5388;
  t5435 = t2714*t5432;
  t5437 = t5428 + t5435;
  t5446 = -0.073913*t5437;
  t5448 = t2273*t5388;
  t5451 = 0.103955395616*t1037*t5432;
  t5454 = t5448 + t5451;
  t5517 = 0.703234*t5454;
  t5520 = t2963*t5388;
  t5521 = t2838*t5432;
  t5549 = t5520 + t5521;
  t5574 = 1.0000001112680001*t181*t820;
  t5575 = 0.104528*t946*t5200;
  t5593 = -0.994522*t946*t5432;
  t5604 = t5574 + t5575 + t5593;
  t5621 = -0.994522*t946*t820;
  t5628 = 0.103955395616*t181*t5200;
  t5630 = -0.9890740084840001*t181*t5432;
  t5641 = t5621 + t5628 + t5630;
  t5644 = 0.703234*t5641;
  t5653 = 0.104528*t946*t820;
  t5657 = -0.010926102783999999*t181*t5200;
  t5683 = 0.103955395616*t181*t5432;
  t5685 = t5653 + t5657 + t5683;
  t5692 = -0.073913*t5685;
  t5723 = -1.*t1138*t724;
  t5739 = 0.103955395616*t1037*t5735;
  t5749 = t2273*t5747;
  t5752 = t5723 + t5739 + t5749;
  t5755 = 0.703234*t5752;
  t5773 = -1.*t1138*t2516;
  t5777 = t2714*t5735;
  t5781 = 0.103955395616*t1037*t5747;
  t5799 = t5773 + t5777 + t5781;
  t5820 = -0.073913*t5799;
  t5822 = -1.*t2794*t1138;
  t5825 = t2838*t5735;
  t5834 = t2963*t5747;
  t5851 = t5822 + t5825 + t5834;
  p_output1[0]=(t4192 + t4294 + 0.707107*t4315)*var2[3] + (t2476 + t2770 + 0.707107*t2965)*var2[4] + (t3328 + t3380 + 0.707107*t3422)*var2[5] + (t3706 + t3717 + 0.707107*t3731)*var2[13] + (0.707107*t3855 + t3921 + t4020)*var2[14];
  p_output1[1]=(t4495 + t4555 + 0.707107*t4585)*var2[3] + (t4418 + t4436 + 0.707107*t4449)*var2[4] + (t4751 + t4813 + 0.707107*t4836)*var2[5] + (t4933 + t4959 + 0.707107*t4973)*var2[13] + (0.707107*t5068 + t5121 + t5174)*var2[14];
  p_output1[2]=(t5755 + t5820 + 0.707107*t5851)*var2[4] + (t5446 + t5517 + 0.707107*t5549)*var2[5] + (t5275 + t5319 + 0.707107*t5342)*var2[13] + (0.707107*t5604 + t5644 + t5692)*var2[14];
  p_output1[3]=(t4192 + t4294 - 0.707107*t4315)*var2[3] + (t2476 + t2770 - 0.707107*t2965)*var2[4] + (t3328 + t3380 - 0.707107*t3422)*var2[5] + (t3706 + t3717 - 0.707107*t3731)*var2[13] + (-0.707107*t3855 + t3921 + t4020)*var2[14];
  p_output1[4]=(t4495 + t4555 - 0.707107*t4585)*var2[3] + (t4418 + t4436 - 0.707107*t4449)*var2[4] + (t4751 + t4813 - 0.707107*t4836)*var2[5] + (t4933 + t4959 - 0.707107*t4973)*var2[13] + (-0.707107*t5068 + t5121 + t5174)*var2[14];
  p_output1[5]=(t5755 + t5820 - 0.707107*t5851)*var2[4] + (t5446 + t5517 - 0.707107*t5549)*var2[5] + (t5275 + t5319 - 0.707107*t5342)*var2[13] + (-0.707107*t5604 + t5644 + t5692)*var2[14];
  p_output1[6]=(-0.104528*t4191 - 0.994522*t4256)*var2[3] + (-0.104528*t2458 - 0.994522*t2765)*var2[4] + (-0.994522*t3309 - 0.104528*t3378)*var2[5] + (-0.994522*t3703 - 0.104528*t3716)*var2[13] + (-0.104528*t3914 - 0.994522*t3962)*var2[14];
  p_output1[7]=(-0.104528*t4480 - 0.994522*t4531)*var2[3] + (-0.104528*t4409 - 0.994522*t4434)*var2[4] + (-0.994522*t4739 - 0.104528*t4812)*var2[5] + (-0.994522*t4924 - 0.104528*t4951)*var2[13] + (-0.104528*t5105 - 0.994522*t5164)*var2[14];
  p_output1[8]=(-0.104528*t5752 - 0.994522*t5799)*var2[4] + (-0.994522*t5437 - 0.104528*t5454)*var2[5] + (-0.994522*t5274 - 0.104528*t5298)*var2[13] + (-0.104528*t5641 - 0.994522*t5685)*var2[14];
}



void dR_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

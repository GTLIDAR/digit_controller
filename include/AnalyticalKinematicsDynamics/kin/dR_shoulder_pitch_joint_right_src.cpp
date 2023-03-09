/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_shoulder_pitch_joint_right_src.h"

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
  double t161;
  double t1577;
  double t1203;
  double t1211;
  double t1356;
  double t1959;
  double t1788;
  double t1925;
  double t1968;
  double t222;
  double t1120;
  double t1945;
  double t2095;
  double t2132;
  double t2361;
  double t2396;
  double t2404;
  double t3006;
  double t2519;
  double t2540;
  double t2996;
  double t3083;
  double t3088;
  double t3157;
  double t3180;
  double t3216;
  double t2199;
  double t2360;
  double t3128;
  double t3236;
  double t3245;
  double t3278;
  double t3279;
  double t3280;
  double t2861;
  double t2866;
  double t2831;
  double t2847;
  double t3457;
  double t3469;
  double t3474;
  double t3452;
  double t3542;
  double t3575;
  double t3605;
  double t3627;
  double t3629;
  double t3757;
  double t3768;
  double t476;
  double t566;
  double t4017;
  double t4021;
  double t4032;
  double t4040;
  double t4043;
  double t4048;
  double t2441;
  double t2446;
  double t4038;
  double t4058;
  double t4066;
  double t4103;
  double t4104;
  double t4115;
  double t2799;
  double t2814;
  double t4368;
  double t4373;
  double t4377;
  double t4401;
  double t4422;
  double t4423;
  double t3588;
  double t4771;
  double t4779;
  double t4783;
  double t4789;
  double t4807;
  double t4867;
  double t4868;
  double t4892;
  double t5063;
  double t5088;
  double t5100;
  double t5054;
  double t5108;
  double t5110;
  double t5112;
  double t5119;
  double t5122;
  double t5231;
  double t5232;
  double t5353;
  double t5359;
  double t5360;
  double t5379;
  double t5402;
  double t5410;
  double t5485;
  double t5488;
  double t5490;
  double t5500;
  double t5501;
  double t5513;
  double t5640;
  double t5643;
  double t5650;
  double t5654;
  double t5657;
  double t5661;
  double t1151;
  double t2197;
  double t2408;
  double t2429;
  double t2449;
  double t2557;
  double t2639;
  double t2662;
  double t2819;
  double t2853;
  double t2885;
  double t2892;
  double t2956;
  double t3256;
  double t3286;
  double t3294;
  double t3301;
  double t3302;
  double t3316;
  double t3358;
  double t3389;
  double t3397;
  double t3398;
  double t3634;
  double t3635;
  double t3690;
  double t3692;
  double t3704;
  double t3718;
  double t3731;
  double t3736;
  double t3737;
  double t3749;
  double t3756;
  double t3794;
  double t3795;
  double t3801;
  double t3816;
  double t3836;
  double t3837;
  double t3840;
  double t3845;
  double t3871;
  double t3884;
  double t3887;
  double t4004;
  double t4085;
  double t4155;
  double t4163;
  double t4183;
  double t4187;
  double t4228;
  double t4272;
  double t4287;
  double t4313;
  double t4315;
  double t4320;
  double t4321;
  double t4362;
  double t4391;
  double t4427;
  double t4428;
  double t4451;
  double t4459;
  double t4473;
  double t4475;
  double t4482;
  double t4503;
  double t4526;
  double t4529;
  double t4544;
  double t4585;
  double t4590;
  double t4601;
  double t4613;
  double t4620;
  double t4634;
  double t4650;
  double t4689;
  double t4701;
  double t4714;
  double t4716;
  double t4736;
  double t4818;
  double t4897;
  double t4919;
  double t4926;
  double t4977;
  double t4989;
  double t5001;
  double t5025;
  double t5035;
  double t5045;
  double t5111;
  double t5132;
  double t5133;
  double t5146;
  double t5148;
  double t5150;
  double t5157;
  double t5159;
  double t5171;
  double t5189;
  double t5205;
  double t5209;
  double t5250;
  double t5256;
  double t5259;
  double t5274;
  double t5289;
  double t5290;
  double t5295;
  double t5304;
  double t5305;
  double t5306;
  double t5308;
  double t5378;
  double t5414;
  double t5420;
  double t5429;
  double t5431;
  double t5439;
  double t5447;
  double t5455;
  double t5458;
  double t5467;
  double t5496;
  double t5517;
  double t5521;
  double t5527;
  double t5542;
  double t5544;
  double t5547;
  double t5553;
  double t5555;
  double t5557;
  double t5573;
  double t5586;
  double t5587;
  double t5588;
  double t5593;
  double t5600;
  double t5607;
  double t5613;
  double t5615;
  double t5628;
  double t5629;
  double t5630;
  double t5631;
  double t5639;
  double t5652;
  double t5665;
  double t5667;
  double t5678;
  double t5682;
  double t5684;
  double t5685;
  double t5705;
  double t5719;
  double t5721;
  double t5734;
  double t5741;
  t161 = Cos(var1[3]);
  t1577 = Cos(var1[4]);
  t1203 = Cos(var1[25]);
  t1211 = -1.*t1203;
  t1356 = 1. + t1211;
  t1959 = Cos(var1[24]);
  t1788 = Cos(var1[5]);
  t1925 = Sin(var1[24]);
  t1968 = Sin(var1[5]);
  t222 = Sin(var1[25]);
  t1120 = Sin(var1[4]);
  t1945 = -1.*t161*t1577*t1788*t1925;
  t2095 = t1959*t161*t1577*t1968;
  t2132 = t1945 + t2095;
  t2361 = t1959*t161*t1577*t1788;
  t2396 = t161*t1577*t1925*t1968;
  t2404 = t2361 + t2396;
  t3006 = Sin(var1[3]);
  t2519 = -0.010926102783999999*t1356;
  t2540 = 1. + t2519;
  t2996 = t161*t1788*t1120;
  t3083 = t3006*t1968;
  t3088 = t2996 + t3083;
  t3157 = t1788*t3006;
  t3180 = -1.*t161*t1120*t1968;
  t3216 = t3157 + t3180;
  t2199 = -0.9890740084840001*t1356;
  t2360 = 1. + t2199;
  t3128 = t1925*t3088;
  t3236 = t1959*t3216;
  t3245 = t3128 + t3236;
  t3278 = t1959*t3088;
  t3279 = -1.*t1925*t3216;
  t3280 = t3278 + t3279;
  t2861 = 0.994522*t222;
  t2866 = 0. + t2861;
  t2831 = 0.104528*t222;
  t2847 = 0. + t2831;
  t3457 = -1.*t1788*t3006;
  t3469 = t161*t1120*t1968;
  t3474 = t3457 + t3469;
  t3452 = -1.*t1925*t3088;
  t3542 = t1959*t3474;
  t3575 = t3452 + t3542;
  t3605 = -1.*t1959*t3088;
  t3627 = -1.*t1925*t3474;
  t3629 = t3605 + t3627;
  t3757 = t1925*t3474;
  t3768 = t3278 + t3757;
  t476 = -0.994522*t222;
  t566 = 0. + t476;
  t4017 = -1.*t1788*t3006*t1120;
  t4021 = t161*t1968;
  t4032 = t4017 + t4021;
  t4040 = -1.*t161*t1788;
  t4043 = -1.*t3006*t1120*t1968;
  t4048 = t4040 + t4043;
  t2441 = -0.104528*t222;
  t2446 = 0. + t2441;
  t4038 = -1.*t1925*t4032;
  t4058 = t1959*t4048;
  t4066 = t4038 + t4058;
  t4103 = t1959*t4032;
  t4104 = t1925*t4048;
  t4115 = t4103 + t4104;
  t2799 = -1.0000001112680001*t1356;
  t2814 = 1. + t2799;
  t4368 = -1.*t1577*t1788*t1925*t3006;
  t4373 = t1959*t1577*t3006*t1968;
  t4377 = t4368 + t4373;
  t4401 = t1959*t1577*t1788*t3006;
  t4422 = t1577*t1925*t3006*t1968;
  t4423 = t4401 + t4422;
  t3588 = -0.103955395616*t1356*t3575;
  t4771 = t1788*t3006*t1120;
  t4779 = -1.*t161*t1968;
  t4783 = t4771 + t4779;
  t4789 = t1925*t4783;
  t4807 = t4789 + t4058;
  t4867 = t1959*t4783;
  t4868 = -1.*t1925*t4048;
  t4892 = t4867 + t4868;
  t5063 = t161*t1788;
  t5088 = t3006*t1120*t1968;
  t5100 = t5063 + t5088;
  t5054 = -1.*t1925*t4783;
  t5108 = t1959*t5100;
  t5110 = t5054 + t5108;
  t5112 = -1.*t1959*t4783;
  t5119 = -1.*t1925*t5100;
  t5122 = t5112 + t5119;
  t5231 = t1925*t5100;
  t5232 = t4867 + t5231;
  t5353 = -1.*t1577*t1788*t1925;
  t5359 = t1959*t1577*t1968;
  t5360 = t5353 + t5359;
  t5379 = -1.*t1959*t1577*t1788;
  t5402 = -1.*t1577*t1925*t1968;
  t5410 = t5379 + t5402;
  t5485 = t1577*t1788*t1925;
  t5488 = -1.*t1959*t1577*t1968;
  t5490 = t5485 + t5488;
  t5500 = t1959*t1577*t1788;
  t5501 = t1577*t1925*t1968;
  t5513 = t5500 + t5501;
  t5640 = t1788*t1925*t1120;
  t5643 = -1.*t1959*t1120*t1968;
  t5650 = t5640 + t5643;
  t5654 = -1.*t1959*t1788*t1120;
  t5657 = -1.*t1925*t1120*t1968;
  t5661 = t5654 + t5657;
  t1151 = -1.*t161*t566*t1120;
  t2197 = -0.103955395616*t1356*t2132;
  t2408 = t2360*t2404;
  t2429 = t1151 + t2197 + t2408;
  t2449 = -1.*t161*t2446*t1120;
  t2557 = t2540*t2132;
  t2639 = -0.103955395616*t1356*t2404;
  t2662 = t2449 + t2557 + t2639;
  t2819 = -1.*t2814*t161*t1120;
  t2853 = t2847*t2132;
  t2885 = t2866*t2404;
  t2892 = t2819 + t2853 + t2885;
  t2956 = 0.707107*t2892;
  t3256 = -0.103955395616*t1356*t3245;
  t3286 = t2540*t3280;
  t3294 = t3256 + t3286;
  t3301 = t2360*t3245;
  t3302 = -0.103955395616*t1356*t3280;
  t3316 = t3301 + t3302;
  t3358 = t2866*t3245;
  t3389 = t2847*t3280;
  t3397 = t3358 + t3389;
  t3398 = 0.707107*t3397;
  t3634 = t2540*t3629;
  t3635 = t3588 + t3634;
  t3690 = t2360*t3575;
  t3692 = -0.103955395616*t1356*t3629;
  t3704 = t3690 + t3692;
  t3718 = t2866*t3575;
  t3731 = t2847*t3629;
  t3736 = t3718 + t3731;
  t3737 = 0.707107*t3736;
  t3749 = -1.0000001112680001*t161*t1577*t222;
  t3756 = 0.104528*t1203*t3575;
  t3794 = 0.994522*t1203*t3768;
  t3795 = t3749 + t3756 + t3794;
  t3801 = 0.707107*t3795;
  t3816 = -0.994522*t1203*t161*t1577;
  t3836 = -0.103955395616*t222*t3575;
  t3837 = -0.9890740084840001*t222*t3768;
  t3840 = t3816 + t3836 + t3837;
  t3845 = -0.104528*t1203*t161*t1577;
  t3871 = -0.010926102783999999*t222*t3575;
  t3884 = -0.103955395616*t222*t3768;
  t3887 = t3845 + t3871 + t3884;
  t4004 = -1.*t1577*t566*t3006;
  t4085 = -0.103955395616*t1356*t4066;
  t4155 = t2360*t4115;
  t4163 = t4004 + t4085 + t4155;
  t4183 = -1.*t1577*t2446*t3006;
  t4187 = t2540*t4066;
  t4228 = -0.103955395616*t1356*t4115;
  t4272 = t4183 + t4187 + t4228;
  t4287 = -1.*t2814*t1577*t3006;
  t4313 = t2847*t4066;
  t4315 = t2866*t4115;
  t4320 = t4287 + t4313 + t4315;
  t4321 = 0.707107*t4320;
  t4362 = -1.*t566*t3006*t1120;
  t4391 = -0.103955395616*t1356*t4377;
  t4427 = t2360*t4423;
  t4428 = t4362 + t4391 + t4427;
  t4451 = -1.*t2446*t3006*t1120;
  t4459 = t2540*t4377;
  t4473 = -0.103955395616*t1356*t4423;
  t4475 = t4451 + t4459 + t4473;
  t4482 = -1.*t2814*t3006*t1120;
  t4503 = t2847*t4377;
  t4526 = t2866*t4423;
  t4529 = t4482 + t4503 + t4526;
  t4544 = 0.707107*t4529;
  t4585 = t161*t1577*t566;
  t4590 = t2360*t3768;
  t4601 = t4585 + t3588 + t4590;
  t4613 = t161*t1577*t2446;
  t4620 = t2540*t3575;
  t4634 = -0.103955395616*t1356*t3768;
  t4650 = t4613 + t4620 + t4634;
  t4689 = t2814*t161*t1577;
  t4701 = t2847*t3575;
  t4714 = t2866*t3768;
  t4716 = t4689 + t4701 + t4714;
  t4736 = 0.707107*t4716;
  t4818 = -0.103955395616*t1356*t4807;
  t4897 = t2540*t4892;
  t4919 = t4818 + t4897;
  t4926 = t2360*t4807;
  t4977 = -0.103955395616*t1356*t4892;
  t4989 = t4926 + t4977;
  t5001 = t2866*t4807;
  t5025 = t2847*t4892;
  t5035 = t5001 + t5025;
  t5045 = 0.707107*t5035;
  t5111 = -0.103955395616*t1356*t5110;
  t5132 = t2540*t5122;
  t5133 = t5111 + t5132;
  t5146 = t2360*t5110;
  t5148 = -0.103955395616*t1356*t5122;
  t5150 = t5146 + t5148;
  t5157 = t2866*t5110;
  t5159 = t2847*t5122;
  t5171 = t5157 + t5159;
  t5189 = 0.707107*t5171;
  t5205 = -1.0000001112680001*t1577*t222*t3006;
  t5209 = 0.104528*t1203*t5110;
  t5250 = 0.994522*t1203*t5232;
  t5256 = t5205 + t5209 + t5250;
  t5259 = 0.707107*t5256;
  t5274 = -0.994522*t1203*t1577*t3006;
  t5289 = -0.103955395616*t222*t5110;
  t5290 = -0.9890740084840001*t222*t5232;
  t5295 = t5274 + t5289 + t5290;
  t5304 = -0.104528*t1203*t1577*t3006;
  t5305 = -0.010926102783999999*t222*t5110;
  t5306 = -0.103955395616*t222*t5232;
  t5308 = t5304 + t5305 + t5306;
  t5378 = -0.103955395616*t1356*t5360;
  t5414 = t2540*t5410;
  t5420 = t5378 + t5414;
  t5429 = t2360*t5360;
  t5431 = -0.103955395616*t1356*t5410;
  t5439 = t5429 + t5431;
  t5447 = t2866*t5360;
  t5455 = t2847*t5410;
  t5458 = t5447 + t5455;
  t5467 = 0.707107*t5458;
  t5496 = -0.103955395616*t1356*t5490;
  t5517 = t2540*t5513;
  t5521 = t5496 + t5517;
  t5527 = t2360*t5490;
  t5542 = -0.103955395616*t1356*t5513;
  t5544 = t5527 + t5542;
  t5547 = t2866*t5490;
  t5553 = t2847*t5513;
  t5555 = t5547 + t5553;
  t5557 = 0.707107*t5555;
  t5573 = 1.0000001112680001*t222*t1120;
  t5586 = 0.104528*t1203*t5360;
  t5587 = 0.994522*t1203*t5513;
  t5588 = t5573 + t5586 + t5587;
  t5593 = 0.707107*t5588;
  t5600 = 0.994522*t1203*t1120;
  t5607 = -0.103955395616*t222*t5360;
  t5613 = -0.9890740084840001*t222*t5513;
  t5615 = t5600 + t5607 + t5613;
  t5628 = 0.104528*t1203*t1120;
  t5629 = -0.010926102783999999*t222*t5360;
  t5630 = -0.103955395616*t222*t5513;
  t5631 = t5628 + t5629 + t5630;
  t5639 = -1.*t1577*t566;
  t5652 = -0.103955395616*t1356*t5650;
  t5665 = t2360*t5661;
  t5667 = t5639 + t5652 + t5665;
  t5678 = -1.*t1577*t2446;
  t5682 = t2540*t5650;
  t5684 = -0.103955395616*t1356*t5661;
  t5685 = t5678 + t5682 + t5684;
  t5705 = -1.*t2814*t1577;
  t5719 = t2847*t5650;
  t5721 = t2866*t5661;
  t5734 = t5705 + t5719 + t5721;
  t5741 = 0.707107*t5734;
  p_output1[0]=(0.703234*t4163 + 0.073913*t4272 + t4321)*var2[3] + (0.703234*t2429 + 0.073913*t2662 + t2956)*var2[4] + (0.073913*t3294 + 0.703234*t3316 + t3398)*var2[5] + (0.073913*t3635 + 0.703234*t3704 + t3737)*var2[24] + (t3801 + 0.703234*t3840 + 0.073913*t3887)*var2[25];
  p_output1[1]=(0.703234*t4601 + 0.073913*t4650 + t4736)*var2[3] + (0.703234*t4428 + 0.073913*t4475 + t4544)*var2[4] + (0.073913*t4919 + 0.703234*t4989 + t5045)*var2[5] + (0.073913*t5133 + 0.703234*t5150 + t5189)*var2[24] + (t5259 + 0.703234*t5295 + 0.073913*t5308)*var2[25];
  p_output1[2]=(0.703234*t5667 + 0.073913*t5685 + t5741)*var2[4] + (0.073913*t5521 + 0.703234*t5544 + t5557)*var2[5] + (0.073913*t5420 + 0.703234*t5439 + t5467)*var2[24] + (t5593 + 0.703234*t5615 + 0.073913*t5631)*var2[25];
  p_output1[3]=(-0.703234*t4163 - 0.073913*t4272 + t4321)*var2[3] + (-0.703234*t2429 - 0.073913*t2662 + t2956)*var2[4] + (-0.073913*t3294 - 0.703234*t3316 + t3398)*var2[5] + (-0.073913*t3635 - 0.703234*t3704 + t3737)*var2[24] + (t3801 - 0.703234*t3840 - 0.073913*t3887)*var2[25];
  p_output1[4]=(-0.703234*t4601 - 0.073913*t4650 + t4736)*var2[3] + (-0.703234*t4428 - 0.073913*t4475 + t4544)*var2[4] + (-0.073913*t4919 - 0.703234*t4989 + t5045)*var2[5] + (-0.073913*t5133 - 0.703234*t5150 + t5189)*var2[24] + (t5259 - 0.703234*t5295 - 0.073913*t5308)*var2[25];
  p_output1[5]=(-0.703234*t5667 - 0.073913*t5685 + t5741)*var2[4] + (-0.073913*t5521 - 0.703234*t5544 + t5557)*var2[5] + (-0.073913*t5420 - 0.703234*t5439 + t5467)*var2[24] + (t5593 - 0.703234*t5615 - 0.073913*t5631)*var2[25];
  p_output1[6]=(-0.104528*t4163 + 0.994522*t4272)*var2[3] + (-0.104528*t2429 + 0.994522*t2662)*var2[4] + (0.994522*t3294 - 0.104528*t3316)*var2[5] + (0.994522*t3635 - 0.104528*t3704)*var2[24] + (-0.104528*t3840 + 0.994522*t3887)*var2[25];
  p_output1[7]=(-0.104528*t4601 + 0.994522*t4650)*var2[3] + (-0.104528*t4428 + 0.994522*t4475)*var2[4] + (0.994522*t4919 - 0.104528*t4989)*var2[5] + (0.994522*t5133 - 0.104528*t5150)*var2[24] + (-0.104528*t5295 + 0.994522*t5308)*var2[25];
  p_output1[8]=(-0.104528*t5667 + 0.994522*t5685)*var2[4] + (0.994522*t5521 - 0.104528*t5544)*var2[5] + (0.994522*t5420 - 0.104528*t5439)*var2[24] + (-0.104528*t5615 + 0.994522*t5631)*var2[25];
}



void dR_shoulder_pitch_joint_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

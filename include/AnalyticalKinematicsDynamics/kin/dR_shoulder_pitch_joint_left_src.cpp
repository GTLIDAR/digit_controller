/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_shoulder_pitch_joint_left_src.h"

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
  double t28;
  double t1567;
  double t1097;
  double t1168;
  double t1211;
  double t2253;
  double t1647;
  double t2208;
  double t2255;
  double t548;
  double t704;
  double t2210;
  double t2280;
  double t2292;
  double t2585;
  double t2592;
  double t2618;
  double t3385;
  double t2919;
  double t2995;
  double t3370;
  double t3403;
  double t3407;
  double t3436;
  double t3442;
  double t3453;
  double t2551;
  double t2566;
  double t3411;
  double t3459;
  double t3465;
  double t3506;
  double t3534;
  double t3542;
  double t3221;
  double t3237;
  double t3112;
  double t3141;
  double t3804;
  double t3808;
  double t3820;
  double t3796;
  double t3828;
  double t3835;
  double t3858;
  double t3866;
  double t3868;
  double t4070;
  double t4076;
  double t656;
  double t677;
  double t4356;
  double t4372;
  double t4376;
  double t4414;
  double t4418;
  double t4437;
  double t2795;
  double t2801;
  double t4388;
  double t4464;
  double t4465;
  double t4497;
  double t4513;
  double t4514;
  double t3055;
  double t3068;
  double t4741;
  double t4772;
  double t4781;
  double t4818;
  double t4837;
  double t4841;
  double t3836;
  double t5145;
  double t5171;
  double t5206;
  double t5209;
  double t5211;
  double t5250;
  double t5257;
  double t5262;
  double t5359;
  double t5366;
  double t5368;
  double t5357;
  double t5372;
  double t5376;
  double t5382;
  double t5408;
  double t5425;
  double t5496;
  double t5497;
  double t5609;
  double t5618;
  double t5619;
  double t5628;
  double t5632;
  double t5633;
  double t5683;
  double t5684;
  double t5686;
  double t5700;
  double t5705;
  double t5706;
  double t5841;
  double t5843;
  double t5844;
  double t5850;
  double t5853;
  double t5854;
  double t1072;
  double t2549;
  double t2664;
  double t2714;
  double t2789;
  double t2893;
  double t2997;
  double t3010;
  double t3023;
  double t3037;
  double t3069;
  double t3156;
  double t3260;
  double t3288;
  double t3470;
  double t3553;
  double t3558;
  double t3559;
  double t3576;
  double t3628;
  double t3638;
  double t3664;
  double t3733;
  double t3737;
  double t3763;
  double t3878;
  double t3883;
  double t3884;
  double t3916;
  double t3920;
  double t3929;
  double t3941;
  double t3949;
  double t3957;
  double t4016;
  double t4063;
  double t4064;
  double t4085;
  double t4111;
  double t4196;
  double t4208;
  double t4242;
  double t4255;
  double t4276;
  double t4277;
  double t4279;
  double t4289;
  double t4299;
  double t4309;
  double t4352;
  double t4468;
  double t4522;
  double t4544;
  double t4575;
  double t4579;
  double t4596;
  double t4598;
  double t4637;
  double t4641;
  double t4665;
  double t4667;
  double t4684;
  double t4702;
  double t4738;
  double t4784;
  double t4843;
  double t4857;
  double t4874;
  double t4893;
  double t4919;
  double t4925;
  double t4929;
  double t4932;
  double t4938;
  double t4939;
  double t4946;
  double t4949;
  double t5005;
  double t5037;
  double t5054;
  double t5056;
  double t5078;
  double t5096;
  double t5097;
  double t5098;
  double t5104;
  double t5111;
  double t5116;
  double t5119;
  double t5120;
  double t5233;
  double t5265;
  double t5268;
  double t5269;
  double t5277;
  double t5280;
  double t5296;
  double t5310;
  double t5316;
  double t5319;
  double t5329;
  double t5379;
  double t5427;
  double t5432;
  double t5435;
  double t5443;
  double t5445;
  double t5452;
  double t5463;
  double t5464;
  double t5468;
  double t5473;
  double t5487;
  double t5489;
  double t5523;
  double t5529;
  double t5549;
  double t5550;
  double t5552;
  double t5554;
  double t5568;
  double t5570;
  double t5576;
  double t5579;
  double t5591;
  double t5597;
  double t5626;
  double t5635;
  double t5656;
  double t5657;
  double t5659;
  double t5660;
  double t5661;
  double t5663;
  double t5665;
  double t5667;
  double t5669;
  double t5691;
  double t5707;
  double t5710;
  double t5714;
  double t5720;
  double t5724;
  double t5728;
  double t5740;
  double t5741;
  double t5742;
  double t5743;
  double t5769;
  double t5778;
  double t5781;
  double t5796;
  double t5800;
  double t5803;
  double t5805;
  double t5806;
  double t5811;
  double t5820;
  double t5822;
  double t5823;
  double t5825;
  double t5826;
  double t5837;
  double t5846;
  double t5856;
  double t5857;
  double t5859;
  double t5867;
  double t5877;
  double t5878;
  double t5879;
  double t5882;
  double t5886;
  double t5889;
  double t5891;
  double t5902;
  t28 = Cos(var1[3]);
  t1567 = Cos(var1[4]);
  t1097 = Cos(var1[14]);
  t1168 = -1.*t1097;
  t1211 = 1. + t1168;
  t2253 = Cos(var1[13]);
  t1647 = Cos(var1[5]);
  t2208 = Sin(var1[13]);
  t2255 = Sin(var1[5]);
  t548 = Sin(var1[14]);
  t704 = Sin(var1[4]);
  t2210 = -1.*t28*t1567*t1647*t2208;
  t2280 = t2253*t28*t1567*t2255;
  t2292 = t2210 + t2280;
  t2585 = t2253*t28*t1567*t1647;
  t2592 = t28*t1567*t2208*t2255;
  t2618 = t2585 + t2592;
  t3385 = Sin(var1[3]);
  t2919 = -0.010926102783999999*t1211;
  t2995 = 1. + t2919;
  t3370 = t28*t1647*t704;
  t3403 = t3385*t2255;
  t3407 = t3370 + t3403;
  t3436 = t1647*t3385;
  t3442 = -1.*t28*t704*t2255;
  t3453 = t3436 + t3442;
  t2551 = -0.9890740084840001*t1211;
  t2566 = 1. + t2551;
  t3411 = t2208*t3407;
  t3459 = t2253*t3453;
  t3465 = t3411 + t3459;
  t3506 = t2253*t3407;
  t3534 = -1.*t2208*t3453;
  t3542 = t3506 + t3534;
  t3221 = -0.994522*t548;
  t3237 = 0. + t3221;
  t3112 = 0.104528*t548;
  t3141 = 0. + t3112;
  t3804 = -1.*t1647*t3385;
  t3808 = t28*t704*t2255;
  t3820 = t3804 + t3808;
  t3796 = -1.*t2208*t3407;
  t3828 = t2253*t3820;
  t3835 = t3796 + t3828;
  t3858 = -1.*t2253*t3407;
  t3866 = -1.*t2208*t3820;
  t3868 = t3858 + t3866;
  t4070 = t2208*t3820;
  t4076 = t3506 + t4070;
  t656 = 0.994522*t548;
  t677 = 0. + t656;
  t4356 = -1.*t1647*t3385*t704;
  t4372 = t28*t2255;
  t4376 = t4356 + t4372;
  t4414 = -1.*t28*t1647;
  t4418 = -1.*t3385*t704*t2255;
  t4437 = t4414 + t4418;
  t2795 = -0.104528*t548;
  t2801 = 0. + t2795;
  t4388 = -1.*t2208*t4376;
  t4464 = t2253*t4437;
  t4465 = t4388 + t4464;
  t4497 = t2253*t4376;
  t4513 = t2208*t4437;
  t4514 = t4497 + t4513;
  t3055 = -1.0000001112680001*t1211;
  t3068 = 1. + t3055;
  t4741 = -1.*t1567*t1647*t2208*t3385;
  t4772 = t2253*t1567*t3385*t2255;
  t4781 = t4741 + t4772;
  t4818 = t2253*t1567*t1647*t3385;
  t4837 = t1567*t2208*t3385*t2255;
  t4841 = t4818 + t4837;
  t3836 = 0.103955395616*t1211*t3835;
  t5145 = t1647*t3385*t704;
  t5171 = -1.*t28*t2255;
  t5206 = t5145 + t5171;
  t5209 = t2208*t5206;
  t5211 = t5209 + t4464;
  t5250 = t2253*t5206;
  t5257 = -1.*t2208*t4437;
  t5262 = t5250 + t5257;
  t5359 = t28*t1647;
  t5366 = t3385*t704*t2255;
  t5368 = t5359 + t5366;
  t5357 = -1.*t2208*t5206;
  t5372 = t2253*t5368;
  t5376 = t5357 + t5372;
  t5382 = -1.*t2253*t5206;
  t5408 = -1.*t2208*t5368;
  t5425 = t5382 + t5408;
  t5496 = t2208*t5368;
  t5497 = t5250 + t5496;
  t5609 = -1.*t1567*t1647*t2208;
  t5618 = t2253*t1567*t2255;
  t5619 = t5609 + t5618;
  t5628 = -1.*t2253*t1567*t1647;
  t5632 = -1.*t1567*t2208*t2255;
  t5633 = t5628 + t5632;
  t5683 = t1567*t1647*t2208;
  t5684 = -1.*t2253*t1567*t2255;
  t5686 = t5683 + t5684;
  t5700 = t2253*t1567*t1647;
  t5705 = t1567*t2208*t2255;
  t5706 = t5700 + t5705;
  t5841 = t1647*t2208*t704;
  t5843 = -1.*t2253*t704*t2255;
  t5844 = t5841 + t5843;
  t5850 = -1.*t2253*t1647*t704;
  t5853 = -1.*t2208*t704*t2255;
  t5854 = t5850 + t5853;
  t1072 = -1.*t28*t677*t704;
  t2549 = 0.103955395616*t1211*t2292;
  t2664 = t2566*t2618;
  t2714 = t1072 + t2549 + t2664;
  t2789 = 0.703234*t2714;
  t2893 = -1.*t28*t2801*t704;
  t2997 = t2995*t2292;
  t3010 = 0.103955395616*t1211*t2618;
  t3023 = t2893 + t2997 + t3010;
  t3037 = -0.073913*t3023;
  t3069 = -1.*t3068*t28*t704;
  t3156 = t3141*t2292;
  t3260 = t3237*t2618;
  t3288 = t3069 + t3156 + t3260;
  t3470 = 0.103955395616*t1211*t3465;
  t3553 = t2995*t3542;
  t3558 = t3470 + t3553;
  t3559 = -0.073913*t3558;
  t3576 = t2566*t3465;
  t3628 = 0.103955395616*t1211*t3542;
  t3638 = t3576 + t3628;
  t3664 = 0.703234*t3638;
  t3733 = t3237*t3465;
  t3737 = t3141*t3542;
  t3763 = t3733 + t3737;
  t3878 = t2995*t3868;
  t3883 = t3836 + t3878;
  t3884 = -0.073913*t3883;
  t3916 = t2566*t3835;
  t3920 = 0.103955395616*t1211*t3868;
  t3929 = t3916 + t3920;
  t3941 = 0.703234*t3929;
  t3949 = t3237*t3835;
  t3957 = t3141*t3868;
  t4016 = t3949 + t3957;
  t4063 = -1.0000001112680001*t28*t1567*t548;
  t4064 = 0.104528*t1097*t3835;
  t4085 = -0.994522*t1097*t4076;
  t4111 = t4063 + t4064 + t4085;
  t4196 = 0.994522*t1097*t28*t1567;
  t4208 = 0.103955395616*t548*t3835;
  t4242 = -0.9890740084840001*t548*t4076;
  t4255 = t4196 + t4208 + t4242;
  t4276 = 0.703234*t4255;
  t4277 = -0.104528*t1097*t28*t1567;
  t4279 = -0.010926102783999999*t548*t3835;
  t4289 = 0.103955395616*t548*t4076;
  t4299 = t4277 + t4279 + t4289;
  t4309 = -0.073913*t4299;
  t4352 = -1.*t1567*t677*t3385;
  t4468 = 0.103955395616*t1211*t4465;
  t4522 = t2566*t4514;
  t4544 = t4352 + t4468 + t4522;
  t4575 = 0.703234*t4544;
  t4579 = -1.*t1567*t2801*t3385;
  t4596 = t2995*t4465;
  t4598 = 0.103955395616*t1211*t4514;
  t4637 = t4579 + t4596 + t4598;
  t4641 = -0.073913*t4637;
  t4665 = -1.*t3068*t1567*t3385;
  t4667 = t3141*t4465;
  t4684 = t3237*t4514;
  t4702 = t4665 + t4667 + t4684;
  t4738 = -1.*t677*t3385*t704;
  t4784 = 0.103955395616*t1211*t4781;
  t4843 = t2566*t4841;
  t4857 = t4738 + t4784 + t4843;
  t4874 = 0.703234*t4857;
  t4893 = -1.*t2801*t3385*t704;
  t4919 = t2995*t4781;
  t4925 = 0.103955395616*t1211*t4841;
  t4929 = t4893 + t4919 + t4925;
  t4932 = -0.073913*t4929;
  t4938 = -1.*t3068*t3385*t704;
  t4939 = t3141*t4781;
  t4946 = t3237*t4841;
  t4949 = t4938 + t4939 + t4946;
  t5005 = t28*t1567*t677;
  t5037 = t2566*t4076;
  t5054 = t5005 + t3836 + t5037;
  t5056 = 0.703234*t5054;
  t5078 = t28*t1567*t2801;
  t5096 = t2995*t3835;
  t5097 = 0.103955395616*t1211*t4076;
  t5098 = t5078 + t5096 + t5097;
  t5104 = -0.073913*t5098;
  t5111 = t3068*t28*t1567;
  t5116 = t3141*t3835;
  t5119 = t3237*t4076;
  t5120 = t5111 + t5116 + t5119;
  t5233 = 0.103955395616*t1211*t5211;
  t5265 = t2995*t5262;
  t5268 = t5233 + t5265;
  t5269 = -0.073913*t5268;
  t5277 = t2566*t5211;
  t5280 = 0.103955395616*t1211*t5262;
  t5296 = t5277 + t5280;
  t5310 = 0.703234*t5296;
  t5316 = t3237*t5211;
  t5319 = t3141*t5262;
  t5329 = t5316 + t5319;
  t5379 = 0.103955395616*t1211*t5376;
  t5427 = t2995*t5425;
  t5432 = t5379 + t5427;
  t5435 = -0.073913*t5432;
  t5443 = t2566*t5376;
  t5445 = 0.103955395616*t1211*t5425;
  t5452 = t5443 + t5445;
  t5463 = 0.703234*t5452;
  t5464 = t3237*t5376;
  t5468 = t3141*t5425;
  t5473 = t5464 + t5468;
  t5487 = -1.0000001112680001*t1567*t548*t3385;
  t5489 = 0.104528*t1097*t5376;
  t5523 = -0.994522*t1097*t5497;
  t5529 = t5487 + t5489 + t5523;
  t5549 = 0.994522*t1097*t1567*t3385;
  t5550 = 0.103955395616*t548*t5376;
  t5552 = -0.9890740084840001*t548*t5497;
  t5554 = t5549 + t5550 + t5552;
  t5568 = 0.703234*t5554;
  t5570 = -0.104528*t1097*t1567*t3385;
  t5576 = -0.010926102783999999*t548*t5376;
  t5579 = 0.103955395616*t548*t5497;
  t5591 = t5570 + t5576 + t5579;
  t5597 = -0.073913*t5591;
  t5626 = 0.103955395616*t1211*t5619;
  t5635 = t2995*t5633;
  t5656 = t5626 + t5635;
  t5657 = -0.073913*t5656;
  t5659 = t2566*t5619;
  t5660 = 0.103955395616*t1211*t5633;
  t5661 = t5659 + t5660;
  t5663 = 0.703234*t5661;
  t5665 = t3237*t5619;
  t5667 = t3141*t5633;
  t5669 = t5665 + t5667;
  t5691 = 0.103955395616*t1211*t5686;
  t5707 = t2995*t5706;
  t5710 = t5691 + t5707;
  t5714 = -0.073913*t5710;
  t5720 = t2566*t5686;
  t5724 = 0.103955395616*t1211*t5706;
  t5728 = t5720 + t5724;
  t5740 = 0.703234*t5728;
  t5741 = t3237*t5686;
  t5742 = t3141*t5706;
  t5743 = t5741 + t5742;
  t5769 = 1.0000001112680001*t548*t704;
  t5778 = 0.104528*t1097*t5619;
  t5781 = -0.994522*t1097*t5706;
  t5796 = t5769 + t5778 + t5781;
  t5800 = -0.994522*t1097*t704;
  t5803 = 0.103955395616*t548*t5619;
  t5805 = -0.9890740084840001*t548*t5706;
  t5806 = t5800 + t5803 + t5805;
  t5811 = 0.703234*t5806;
  t5820 = 0.104528*t1097*t704;
  t5822 = -0.010926102783999999*t548*t5619;
  t5823 = 0.103955395616*t548*t5706;
  t5825 = t5820 + t5822 + t5823;
  t5826 = -0.073913*t5825;
  t5837 = -1.*t1567*t677;
  t5846 = 0.103955395616*t1211*t5844;
  t5856 = t2566*t5854;
  t5857 = t5837 + t5846 + t5856;
  t5859 = 0.703234*t5857;
  t5867 = -1.*t1567*t2801;
  t5877 = t2995*t5844;
  t5878 = 0.103955395616*t1211*t5854;
  t5879 = t5867 + t5877 + t5878;
  t5882 = -0.073913*t5879;
  t5886 = -1.*t3068*t1567;
  t5889 = t3141*t5844;
  t5891 = t3237*t5854;
  t5902 = t5886 + t5889 + t5891;
  p_output1[0]=(t4575 + t4641 + 0.707107*t4702)*var2[3] + (t2789 + t3037 + 0.707107*t3288)*var2[4] + (t3559 + t3664 + 0.707107*t3763)*var2[5] + (t3884 + t3941 + 0.707107*t4016)*var2[13] + (0.707107*t4111 + t4276 + t4309)*var2[14];
  p_output1[1]=(t5056 + t5104 + 0.707107*t5120)*var2[3] + (t4874 + t4932 + 0.707107*t4949)*var2[4] + (t5269 + t5310 + 0.707107*t5329)*var2[5] + (t5435 + t5463 + 0.707107*t5473)*var2[13] + (0.707107*t5529 + t5568 + t5597)*var2[14];
  p_output1[2]=(t5859 + t5882 + 0.707107*t5902)*var2[4] + (t5714 + t5740 + 0.707107*t5743)*var2[5] + (t5657 + t5663 + 0.707107*t5669)*var2[13] + (0.707107*t5796 + t5811 + t5826)*var2[14];
  p_output1[3]=(t4575 + t4641 - 0.707107*t4702)*var2[3] + (t2789 + t3037 - 0.707107*t3288)*var2[4] + (t3559 + t3664 - 0.707107*t3763)*var2[5] + (t3884 + t3941 - 0.707107*t4016)*var2[13] + (-0.707107*t4111 + t4276 + t4309)*var2[14];
  p_output1[4]=(t5056 + t5104 - 0.707107*t5120)*var2[3] + (t4874 + t4932 - 0.707107*t4949)*var2[4] + (t5269 + t5310 - 0.707107*t5329)*var2[5] + (t5435 + t5463 - 0.707107*t5473)*var2[13] + (-0.707107*t5529 + t5568 + t5597)*var2[14];
  p_output1[5]=(t5859 + t5882 - 0.707107*t5902)*var2[4] + (t5714 + t5740 - 0.707107*t5743)*var2[5] + (t5657 + t5663 - 0.707107*t5669)*var2[13] + (-0.707107*t5796 + t5811 + t5826)*var2[14];
  p_output1[6]=(-0.104528*t4544 - 0.994522*t4637)*var2[3] + (-0.104528*t2714 - 0.994522*t3023)*var2[4] + (-0.994522*t3558 - 0.104528*t3638)*var2[5] + (-0.994522*t3883 - 0.104528*t3929)*var2[13] + (-0.104528*t4255 - 0.994522*t4299)*var2[14];
  p_output1[7]=(-0.104528*t5054 - 0.994522*t5098)*var2[3] + (-0.104528*t4857 - 0.994522*t4929)*var2[4] + (-0.994522*t5268 - 0.104528*t5296)*var2[5] + (-0.994522*t5432 - 0.104528*t5452)*var2[13] + (-0.104528*t5554 - 0.994522*t5591)*var2[14];
  p_output1[8]=(-0.104528*t5857 - 0.994522*t5879)*var2[4] + (-0.994522*t5710 - 0.104528*t5728)*var2[5] + (-0.994522*t5656 - 0.104528*t5661)*var2[13] + (-0.104528*t5806 - 0.994522*t5825)*var2[14];
}



void dR_shoulder_pitch_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

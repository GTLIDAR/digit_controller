/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:34:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_shin_to_tarsus_left_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1246;
  double t1305;
  double t1349;
  double t1445;
  double t1151;
  double t1171;
  double t1231;
  double t356;
  double t500;
  double t653;
  double t1367;
  double t1374;
  double t1432;
  double t1441;
  double t1511;
  double t1529;
  double t1543;
  double t1577;
  double t1686;
  double t1731;
  double t1829;
  double t1831;
  double t1836;
  double t1850;
  double t1861;
  double t1880;
  double t1881;
  double t1887;
  double t1907;
  double t2082;
  double t2118;
  double t2162;
  double t2174;
  double t2182;
  double t2206;
  double t2262;
  double t2278;
  double t330;
  double t333;
  double t348;
  double t1627;
  double t1701;
  double t1718;
  double t2018;
  double t2022;
  double t2044;
  double t2280;
  double t2318;
  double t2476;
  double t2480;
  double t2495;
  double t2516;
  double t2519;
  double t2522;
  double t2558;
  double t2566;
  double t2575;
  double t2599;
  double t2602;
  double t2647;
  double t2807;
  double t2879;
  double t2900;
  double t2949;
  double t2991;
  double t2998;
  double t3048;
  double t1062;
  double t1125;
  double t2467;
  double t2570;
  double t3057;
  double t3063;
  double t3066;
  double t3072;
  double t3229;
  double t3235;
  double t3273;
  double t3276;
  double t3283;
  double t3293;
  double t3296;
  double t3298;
  double t3301;
  double t3378;
  double t3391;
  double t3423;
  double t3442;
  double t3444;
  double t3447;
  double t3469;
  double t3510;
  double t3535;
  double t3538;
  double t3592;
  double t3073;
  double t3145;
  double t3227;
  double t3299;
  double t3308;
  double t3356;
  double t3543;
  double t3550;
  double t297;
  double t3600;
  double t3637;
  double t3684;
  double t3701;
  double t3725;
  double t3729;
  double t3732;
  double t3765;
  double t3902;
  double t3552;
  double t3783;
  double t3784;
  double t271;
  double t3945;
  double t3947;
  double t3959;
  double t261;
  double t4313;
  double t4333;
  double t4337;
  double t4343;
  double t4374;
  double t4384;
  double t4387;
  double t4406;
  double t4420;
  double t4488;
  double t4497;
  double t4536;
  double t4356;
  double t4408;
  double t4539;
  double t4540;
  double t4555;
  double t4562;
  double t4573;
  double t4592;
  double t4610;
  double t4611;
  double t4612;
  double t4617;
  double t4549;
  double t4608;
  double t4624;
  double t4626;
  double t4646;
  double t4664;
  double t4679;
  double t4680;
  double t4706;
  double t4718;
  double t4719;
  double t4726;
  double t4634;
  double t4685;
  double t4728;
  double t4732;
  double t4761;
  double t4765;
  double t4781;
  double t4782;
  double t3991;
  double t3998;
  double t4755;
  double t4783;
  double t4785;
  double t4827;
  double t4835;
  double t4844;
  double t4099;
  double t4100;
  double t4110;
  double t4114;
  double t4138;
  double t4187;
  double t4203;
  double t5005;
  double t5006;
  double t5011;
  double t5030;
  double t5040;
  double t5042;
  double t5046;
  double t5048;
  double t5057;
  double t5023;
  double t5043;
  double t5069;
  double t5102;
  double t5113;
  double t5114;
  double t5121;
  double t5125;
  double t5134;
  double t5145;
  double t5161;
  double t5162;
  double t5108;
  double t5133;
  double t5165;
  double t5168;
  double t5172;
  double t5186;
  double t5187;
  double t5202;
  double t5211;
  double t5215;
  double t5216;
  double t5217;
  double t5169;
  double t5210;
  double t5227;
  double t5229;
  double t5233;
  double t5234;
  double t5235;
  double t5240;
  double t5232;
  double t5241;
  double t5247;
  double t5262;
  double t5276;
  double t5294;
  double t3814;
  double t3964;
  double t3972;
  double t3999;
  double t4044;
  double t4050;
  double t4078;
  double t4112;
  double t4169;
  double t4250;
  double t4255;
  double t4270;
  double t4280;
  double t4815;
  double t4848;
  double t4864;
  double t4881;
  double t4886;
  double t4909;
  double t4913;
  double t4919;
  double t4945;
  double t4967;
  double t4969;
  double t4971;
  double t4989;
  double t5255;
  double t5295;
  double t5306;
  double t5314;
  double t5324;
  double t5334;
  double t5335;
  double t5336;
  double t5338;
  double t5341;
  double t5350;
  double t5358;
  double t5360;
  double t5499;
  double t5504;
  double t5507;
  double t5510;
  double t5517;
  double t5520;
  double t5522;
  double t5533;
  double t5536;
  double t5544;
  double t5548;
  double t5552;
  double t5555;
  double t5569;
  double t5573;
  double t5575;
  double t5578;
  double t5580;
  double t5586;
  double t5487;
  double t5488;
  double t5490;
  double t5521;
  double t5558;
  double t5599;
  double t5602;
  double t5609;
  double t5611;
  double t5618;
  double t5628;
  double t5629;
  double t5641;
  double t5642;
  double t5651;
  double t5657;
  double t5669;
  double t5670;
  double t5676;
  double t5677;
  double t5679;
  double t5481;
  double t5484;
  double t5608;
  double t5646;
  double t5649;
  double t5682;
  double t5683;
  double t5704;
  double t5708;
  double t5709;
  double t5719;
  double t5726;
  double t5728;
  double t5742;
  double t5748;
  double t5755;
  double t5759;
  double t5762;
  double t5764;
  double t5765;
  double t5780;
  double t5469;
  double t5477;
  double t5478;
  double t5699;
  double t5744;
  double t5781;
  double t5785;
  double t5798;
  double t5802;
  double t5808;
  double t5810;
  double t5811;
  double t5813;
  double t5831;
  double t5468;
  double t5790;
  double t5843;
  double t5847;
  double t5877;
  double t5886;
  double t5906;
  double t5924;
  double t5933;
  double t5949;
  double t5979;
  double t5987;
  double t6004;
  double t6012;
  double t6013;
  double t6014;
  double t6020;
  double t6023;
  double t6030;
  double t6038;
  double t5433;
  double t5434;
  double t5444;
  double t5458;
  double t5463;
  double t5464;
  double t5865;
  double t5955;
  double t5960;
  double t6009;
  double t6044;
  double t6064;
  double t6077;
  double t6081;
  double t6082;
  double t5419;
  double t5420;
  double t5423;
  double t6136;
  double t5961;
  double t6203;
  double t6158;
  double t6332;
  double t6254;
  double t6381;
  double t6364;
  double t6428;
  double t6413;
  double t6456;
  double t6442;
  double t6815;
  double t6842;
  double t6844;
  double t6845;
  double t6859;
  double t6861;
  double t6863;
  double t6864;
  double t6915;
  double t6919;
  double t6922;
  double t6923;
  double t6925;
  double t6929;
  double t6936;
  double t6938;
  double t6989;
  double t6996;
  double t7005;
  double t7006;
  double t7014;
  double t7022;
  double t7025;
  double t7026;
  double t7172;
  double t7176;
  double t7179;
  double t7195;
  double t7201;
  double t7203;
  double t7205;
  double t7213;
  double t7279;
  double t7281;
  double t7282;
  double t7298;
  double t7306;
  double t7311;
  double t7314;
  double t7325;
  double t7368;
  double t7369;
  double t7370;
  double t7377;
  double t7380;
  double t7402;
  double t7403;
  double t7405;
  double t7589;
  double t7597;
  double t7599;
  double t7605;
  double t7612;
  double t7614;
  double t7630;
  double t7631;
  double t7705;
  double t7707;
  double t7716;
  double t7717;
  double t7733;
  double t7736;
  double t7737;
  double t7740;
  double t7792;
  double t7793;
  double t7794;
  double t7810;
  double t7815;
  double t7825;
  double t7832;
  double t7836;
  t1246 = Cos(var1[10]);
  t1305 = -1.*t1246;
  t1349 = 1. + t1305;
  t1445 = Sin(var1[10]);
  t1151 = Cos(var1[9]);
  t1171 = -1.*t1151;
  t1231 = 1. + t1171;
  t356 = Cos(var1[8]);
  t500 = -1.*t356;
  t653 = 1. + t500;
  t1367 = -0.134322983001*t1349;
  t1374 = 1. + t1367;
  t1432 = 0.194216*t1374;
  t1441 = -0.16812859677606265*t1349;
  t1511 = -0.366501*t1445;
  t1529 = 0. + t1511;
  t1543 = 0.848048*t1529;
  t1577 = t1432 + t1441 + t1543;
  t1686 = Sin(var1[9]);
  t1731 = -1.000000637725*t1349;
  t1829 = 1. + t1731;
  t1831 = 0.848048*t1829;
  t1836 = -0.930418*t1445;
  t1850 = 0. + t1836;
  t1861 = -0.493047*t1850;
  t1880 = 0.366501*t1445;
  t1881 = 0. + t1880;
  t1887 = 0.194216*t1881;
  t1907 = t1831 + t1861 + t1887;
  t2082 = -0.8656776547239999*t1349;
  t2118 = 1. + t2082;
  t2162 = -0.493047*t2118;
  t2174 = 0.06622748653061429*t1349;
  t2182 = 0.930418*t1445;
  t2206 = 0. + t2182;
  t2262 = 0.848048*t2206;
  t2278 = t2162 + t2174 + t2262;
  t330 = Cos(var1[7]);
  t333 = -1.*t330;
  t348 = 1. + t333;
  t1627 = 0.340999127418*t1231*t1577;
  t1701 = 0.930418*t1686;
  t1718 = 0. + t1701;
  t2018 = t1718*t1907;
  t2022 = -0.8656776547239999*t1231;
  t2044 = 1. + t2022;
  t2280 = t2044*t2278;
  t2318 = 0. + t1627 + t2018 + t2280;
  t2476 = -0.134322983001*t1231;
  t2480 = 1. + t2476;
  t2495 = t2480*t1577;
  t2516 = -0.366501*t1686;
  t2519 = 0. + t2516;
  t2522 = t2519*t1907;
  t2558 = 0.340999127418*t1231*t2278;
  t2566 = 0. + t2495 + t2522 + t2558;
  t2575 = 0.366501*t1686;
  t2599 = 0. + t2575;
  t2602 = t2599*t1577;
  t2647 = -1.000000637725*t1231;
  t2807 = 1. + t2647;
  t2879 = t2807*t1907;
  t2900 = -0.930418*t1686;
  t2949 = 0. + t2900;
  t2991 = t2949*t2278;
  t2998 = 0. + t2602 + t2879 + t2991;
  t3048 = Sin(var1[8]);
  t1062 = -0.8656776547239999*t653;
  t1125 = 1. + t1062;
  t2467 = t1125*t2318;
  t2570 = 0.340999127418*t653*t2566;
  t3057 = -0.930418*t3048;
  t3063 = 0. + t3057;
  t3066 = t2998*t3063;
  t3072 = 0. + t2467 + t2570 + t3066;
  t3229 = 0.340999127418*t653*t2318;
  t3235 = -0.134322983001*t653;
  t3273 = 1. + t3235;
  t3276 = t3273*t2566;
  t3283 = 0.366501*t3048;
  t3293 = 0. + t3283;
  t3296 = t2998*t3293;
  t3298 = 0. + t3229 + t3276 + t3296;
  t3301 = Sin(var1[7]);
  t3378 = -1.000000637725*t653;
  t3391 = 1. + t3378;
  t3423 = t3391*t2998;
  t3442 = -0.366501*t3048;
  t3444 = 0. + t3442;
  t3447 = t2566*t3444;
  t3469 = 0.930418*t3048;
  t3510 = 0. + t3469;
  t3535 = t2318*t3510;
  t3538 = 0. + t3423 + t3447 + t3535;
  t3592 = Cos(var1[6]);
  t3073 = -0.340999127418*t348*t3072;
  t3145 = -0.8656776547239999*t348;
  t3227 = 1. + t3145;
  t3299 = t3227*t3298;
  t3308 = -0.930418*t3301;
  t3356 = 0. + t3308;
  t3543 = t3356*t3538;
  t3550 = 0. + t3073 + t3299 + t3543;
  t297 = Sin(var1[6]);
  t3600 = -0.134322983001*t348;
  t3637 = 1. + t3600;
  t3684 = t3637*t3072;
  t3701 = -0.340999127418*t348*t3298;
  t3725 = -0.366501*t3301;
  t3729 = 0. + t3725;
  t3732 = t3729*t3538;
  t3765 = 0. + t3684 + t3701 + t3732;
  t3902 = Cos(var1[5]);
  t3552 = -1.*t297*t3550;
  t3783 = t3592*t3765;
  t3784 = 0. + t3552 + t3783;
  t271 = Sin(var1[5]);
  t3945 = t3592*t3550;
  t3947 = t297*t3765;
  t3959 = 0. + t3945 + t3947;
  t261 = Sin(var1[3]);
  t4313 = -0.310811*t1374;
  t4333 = 0.2690616104987713*t1349;
  t4337 = 0.529919*t1529;
  t4343 = t4313 + t4333 + t4337;
  t4374 = 0.529919*t1829;
  t4384 = 0.789039*t1850;
  t4387 = -0.310811*t1881;
  t4406 = t4374 + t4384 + t4387;
  t4420 = 0.789039*t2118;
  t4488 = -0.105986279791916*t1349;
  t4497 = 0.529919*t2206;
  t4536 = t4420 + t4488 + t4497;
  t4356 = 0.340999127418*t1231*t4343;
  t4408 = t1718*t4406;
  t4539 = t2044*t4536;
  t4540 = 0. + t4356 + t4408 + t4539;
  t4555 = t2480*t4343;
  t4562 = t2519*t4406;
  t4573 = 0.340999127418*t1231*t4536;
  t4592 = 0. + t4555 + t4562 + t4573;
  t4610 = t2599*t4343;
  t4611 = t2807*t4406;
  t4612 = t2949*t4536;
  t4617 = 0. + t4610 + t4611 + t4612;
  t4549 = t1125*t4540;
  t4608 = 0.340999127418*t653*t4592;
  t4624 = t4617*t3063;
  t4626 = 0. + t4549 + t4608 + t4624;
  t4646 = 0.340999127418*t653*t4540;
  t4664 = t3273*t4592;
  t4679 = t4617*t3293;
  t4680 = 0. + t4646 + t4664 + t4679;
  t4706 = t3391*t4617;
  t4718 = t4592*t3444;
  t4719 = t4540*t3510;
  t4726 = 0. + t4706 + t4718 + t4719;
  t4634 = -0.340999127418*t348*t4626;
  t4685 = t3227*t4680;
  t4728 = t3356*t4726;
  t4732 = 0. + t4634 + t4685 + t4728;
  t4761 = t3637*t4626;
  t4765 = -0.340999127418*t348*t4680;
  t4781 = t3729*t4726;
  t4782 = 0. + t4761 + t4765 + t4781;
  t3991 = Cos(var1[3]);
  t3998 = Sin(var1[4]);
  t4755 = -1.*t297*t4732;
  t4783 = t3592*t4782;
  t4785 = 0. + t4755 + t4783;
  t4827 = t3592*t4732;
  t4835 = t297*t4782;
  t4844 = 0. + t4827 + t4835;
  t4099 = Cos(var1[4]);
  t4100 = 0.366501*t3301;
  t4110 = 0. + t4100;
  t4114 = 0.930418*t3301;
  t4138 = 0. + t4114;
  t4187 = -1.000000637725*t348;
  t4203 = 1. + t4187;
  t5005 = -0.366501*t2118;
  t5006 = -0.3172717261340007*t1349;
  t5011 = t5005 + t5006;
  t5030 = -0.930418*t1374;
  t5040 = -0.12497652119782442*t1349;
  t5042 = t5030 + t5040;
  t5046 = -0.366501*t1850;
  t5048 = -0.930418*t1881;
  t5057 = t5046 + t5048;
  t5023 = 0.340999127418*t1231*t5011;
  t5043 = t2480*t5042;
  t5069 = t2519*t5057;
  t5102 = 0. + t5023 + t5043 + t5069;
  t5113 = t2044*t5011;
  t5114 = 0.340999127418*t1231*t5042;
  t5121 = t1718*t5057;
  t5125 = 0. + t5113 + t5114 + t5121;
  t5134 = t5011*t2949;
  t5145 = t5042*t2599;
  t5161 = t2807*t5057;
  t5162 = 0. + t5134 + t5145 + t5161;
  t5108 = 0.340999127418*t653*t5102;
  t5133 = t1125*t5125;
  t5165 = t5162*t3063;
  t5168 = 0. + t5108 + t5133 + t5165;
  t5172 = t3273*t5102;
  t5186 = 0.340999127418*t653*t5125;
  t5187 = t5162*t3293;
  t5202 = 0. + t5172 + t5186 + t5187;
  t5211 = t3391*t5162;
  t5215 = t5102*t3444;
  t5216 = t5125*t3510;
  t5217 = 0. + t5211 + t5215 + t5216;
  t5169 = -0.340999127418*t348*t5168;
  t5210 = t3227*t5202;
  t5227 = t3356*t5217;
  t5229 = 0. + t5169 + t5210 + t5227;
  t5233 = t3637*t5168;
  t5234 = -0.340999127418*t348*t5202;
  t5235 = t3729*t5217;
  t5240 = 0. + t5233 + t5234 + t5235;
  t5232 = -1.*t297*t5229;
  t5241 = t3592*t5240;
  t5247 = 0. + t5232 + t5241;
  t5262 = t3592*t5229;
  t5276 = t297*t5240;
  t5294 = 0. + t5262 + t5276;
  t3814 = -1.*t271*t3784;
  t3964 = t3902*t3959;
  t3972 = 0. + t3814 + t3964;
  t3999 = t3902*t3784;
  t4044 = t271*t3959;
  t4050 = 0. + t3999 + t4044;
  t4078 = t3998*t4050;
  t4112 = t4110*t3072;
  t4169 = t4138*t3298;
  t4250 = t4203*t3538;
  t4255 = 0. + t4112 + t4169 + t4250;
  t4270 = t4099*t4255;
  t4280 = 0. + t4078 + t4270;
  t4815 = -1.*t271*t4785;
  t4848 = t3902*t4844;
  t4864 = 0. + t4815 + t4848;
  t4881 = t3902*t4785;
  t4886 = t271*t4844;
  t4909 = 0. + t4881 + t4886;
  t4913 = t3998*t4909;
  t4919 = t4110*t4626;
  t4945 = t4138*t4680;
  t4967 = t4203*t4726;
  t4969 = 0. + t4919 + t4945 + t4967;
  t4971 = t4099*t4969;
  t4989 = 0. + t4913 + t4971;
  t5255 = -1.*t271*t5247;
  t5295 = t3902*t5294;
  t5306 = 0. + t5255 + t5295;
  t5314 = t3902*t5247;
  t5324 = t271*t5294;
  t5334 = 0. + t5314 + t5324;
  t5335 = t3998*t5334;
  t5336 = t4110*t5168;
  t5338 = t4138*t5202;
  t5341 = t4203*t5217;
  t5350 = 0. + t5336 + t5338 + t5341;
  t5358 = t4099*t5350;
  t5360 = 0. + t5335 + t5358;
  t5499 = 5.7930615939377813e-8*var1[10];
  t5504 = 0.310929*t1374;
  t5507 = 0.041765213420106306*t1349;
  t5510 = -0.26281*t1529;
  t5517 = -0.262809976934*t1881;
  t5520 = t5499 + t5504 + t5507 + t5510 + t5517;
  t5522 = -0.26281*t1829;
  t5533 = -0.26281014453449253*t1349;
  t5536 = -0.559688*t1850;
  t5544 = 0.23261818470000004*t1529;
  t5548 = 0.310929*t1881;
  t5552 = -0.5905363046000001*t2206;
  t5555 = 0. + t5522 + t5533 + t5536 + t5544 + t5548 + t5552;
  t5569 = 2.281945176511838e-8*var1[10];
  t5573 = -0.559688*t2118;
  t5575 = -0.48451016351081344*t1349;
  t5578 = -0.262809976934*t1850;
  t5580 = -0.26281*t2206;
  t5586 = t5569 + t5573 + t5575 + t5578 + t5580;
  t5487 = -6.295460977284962e-8*var1[9];
  t5488 = -0.22023473313910558*t1231;
  t5490 = 0.039853013046*t2949;
  t5521 = 0.340999127418*t1231*t5520;
  t5558 = t1718*t5555;
  t5599 = t2044*t5586;
  t5602 = t5487 + t5488 + t5490 + t5521 + t5558 + t5599;
  t5609 = -1.5981976069815686e-7*var1[9];
  t5611 = 0.08675267452931407*t1231;
  t5618 = 0.039853013046*t2599;
  t5628 = t2480*t5520;
  t5629 = t2519*t5555;
  t5641 = 0.340999127418*t1231*t5586;
  t5642 = t5609 + t5611 + t5618 + t5628 + t5629 + t5641;
  t5651 = 0.039853038461262744*t1231;
  t5657 = 0.086752619205*t2519;
  t5669 = -0.22023459268999998*t1718;
  t5670 = t2599*t5520;
  t5676 = t2807*t5555;
  t5677 = t2949*t5586;
  t5679 = 0. + t5651 + t5657 + t5669 + t5670 + t5676 + t5677;
  t5481 = 3.2909349868922137e-7*var1[8];
  t5484 = 0.055653945343889656*t653;
  t5608 = 0.340999127418*t653*t5602;
  t5646 = t3273*t5642;
  t5649 = -0.045000372235*t3444;
  t5682 = t5679*t3293;
  t5683 = t5481 + t5484 + t5608 + t5646 + t5649 + t5682;
  t5704 = 1.296332362046933e-7*var1[8];
  t5708 = -0.14128592423750855*t653;
  t5709 = t1125*t5602;
  t5719 = 0.340999127418*t653*t5642;
  t5726 = t5679*t3063;
  t5728 = -0.045000372235*t3510;
  t5742 = t5704 + t5708 + t5709 + t5719 + t5726 + t5728;
  t5748 = -0.04500040093286238*t653;
  t5755 = t3391*t5679;
  t5759 = -0.141285834136*t3063;
  t5762 = t5642*t3444;
  t5764 = 0.055653909852*t3293;
  t5765 = t5602*t3510;
  t5780 = 0. + t5748 + t5755 + t5759 + t5762 + t5764 + t5765;
  t5469 = 1.296332362046933e-7*var1[7];
  t5477 = 0.07877668146182712*t348;
  t5478 = -0.045000372235*t4138;
  t5699 = t3227*t5683;
  t5744 = -0.340999127418*t348*t5742;
  t5781 = t3356*t5780;
  t5785 = t5469 + t5477 + t5478 + t5699 + t5744 + t5781;
  t5798 = -3.2909349868922137e-7*var1[7];
  t5802 = 0.03103092645718495*t348;
  t5808 = -0.045000372235*t4110;
  t5810 = -0.340999127418*t348*t5683;
  t5811 = t3637*t5742;
  t5813 = t3729*t5780;
  t5831 = t5798 + t5802 + t5808 + t5810 + t5811 + t5813;
  t5468 = 0.091*t297;
  t5790 = -1.*t297*t5785;
  t5843 = t3592*t5831;
  t5847 = 0. + t5468 + t5790 + t5843;
  t5877 = -1.*t3592;
  t5886 = 1. + t5877;
  t5906 = 0.091*t5886;
  t5924 = t3592*t5785;
  t5933 = t297*t5831;
  t5949 = 0. + t5906 + t5924 + t5933;
  t5979 = t3902*t5847;
  t5987 = t271*t5949;
  t6004 = 0. + t5979 + t5987;
  t6012 = -0.04500040093286238*t348;
  t6013 = 0.07877663122399998*t3356;
  t6014 = 0.031030906668*t3729;
  t6020 = t4138*t5683;
  t6023 = t4110*t5742;
  t6030 = t4203*t5780;
  t6038 = 0. + t6012 + t6013 + t6014 + t6020 + t6023 + t6030;
  t5433 = t4099*t4909;
  t5434 = -1.*t3998*t4969;
  t5444 = 0. + t5433 + t5434;
  t5458 = t4099*t5334;
  t5463 = -1.*t3998*t5350;
  t5464 = 0. + t5458 + t5463;
  t5865 = -1.*t271*t5847;
  t5955 = t3902*t5949;
  t5960 = 0. + t5865 + t5955;
  t6009 = t3998*t6004;
  t6044 = t4099*t6038;
  t6064 = 0. + t6009 + t6044;
  t6077 = t4099*t6004;
  t6081 = -1.*t3998*t6038;
  t6082 = 0. + t6077 + t6081;
  t5419 = t4099*t4050;
  t5420 = -1.*t3998*t4255;
  t5423 = 0. + t5419 + t5420;
  t6136 = t5306*t5960;
  t5961 = -1.*t5960*t4864;
  t6203 = -1.*t5306*t5960;
  t6158 = t5960*t3972;
  t6332 = t5960*t4864;
  t6254 = -1.*t5960*t3972;
  t6381 = -1.*t6038*t4969;
  t6364 = t5350*t6038;
  t6428 = t6038*t4255;
  t6413 = -1.*t5350*t6038;
  t6456 = -1.*t6038*t4255;
  t6442 = t6038*t4969;
  t6815 = -1.*t5683*t4680;
  t6842 = -1.*t4626*t5742;
  t6844 = -1.*t5780*t4726;
  t6845 = t6815 + t6842 + t6844;
  t6859 = t5202*t5683;
  t6861 = t5168*t5742;
  t6863 = t5217*t5780;
  t6864 = t6859 + t6861 + t6863;
  t6915 = t5683*t3298;
  t6919 = t3072*t5742;
  t6922 = t5780*t3538;
  t6923 = t6915 + t6919 + t6922;
  t6925 = -1.*t5202*t5683;
  t6929 = -1.*t5168*t5742;
  t6936 = -1.*t5217*t5780;
  t6938 = t6925 + t6929 + t6936;
  t6989 = -1.*t5683*t3298;
  t6996 = -1.*t3072*t5742;
  t7005 = -1.*t5780*t3538;
  t7006 = t6989 + t6996 + t7005;
  t7014 = t5683*t4680;
  t7022 = t4626*t5742;
  t7025 = t5780*t4726;
  t7026 = t7014 + t7022 + t7025;
  t7172 = -1.*t5602*t4540;
  t7176 = -1.*t5642*t4592;
  t7179 = -1.*t5679*t4617;
  t7195 = t7172 + t7176 + t7179;
  t7201 = t5125*t5602;
  t7203 = t5102*t5642;
  t7205 = t5162*t5679;
  t7213 = t7201 + t7203 + t7205;
  t7279 = t5602*t2318;
  t7281 = t5642*t2566;
  t7282 = t5679*t2998;
  t7298 = t7279 + t7281 + t7282;
  t7306 = -1.*t5125*t5602;
  t7311 = -1.*t5102*t5642;
  t7314 = -1.*t5162*t5679;
  t7325 = t7306 + t7311 + t7314;
  t7368 = -1.*t5602*t2318;
  t7369 = -1.*t5642*t2566;
  t7370 = -1.*t5679*t2998;
  t7377 = t7368 + t7369 + t7370;
  t7380 = t5602*t4540;
  t7402 = t5642*t4592;
  t7403 = t5679*t4617;
  t7405 = t7380 + t7402 + t7403;
  t7589 = -1.*t4343*t5520;
  t7597 = -1.*t4406*t5555;
  t7599 = -1.*t5586*t4536;
  t7605 = t7589 + t7597 + t7599;
  t7612 = t5042*t5520;
  t7614 = t5057*t5555;
  t7630 = t5011*t5586;
  t7631 = t7612 + t7614 + t7630;
  t7705 = t1577*t5520;
  t7707 = t1907*t5555;
  t7716 = t5586*t2278;
  t7717 = t7705 + t7707 + t7716;
  t7733 = -1.*t5042*t5520;
  t7736 = -1.*t5057*t5555;
  t7737 = -1.*t5011*t5586;
  t7740 = t7733 + t7736 + t7737;
  t7792 = -1.*t1577*t5520;
  t7793 = -1.*t1907*t5555;
  t7794 = -1.*t5586*t2278;
  t7810 = t7792 + t7793 + t7794;
  t7815 = t4343*t5520;
  t7825 = t4406*t5555;
  t7832 = t5586*t4536;
  t7836 = t7815 + t7825 + t7832;
  p_output1[0]=0. - 1.*t261*t3972 + t3991*t4280;
  p_output1[1]=0. - 1.*t261*t4864 + t3991*t4989;
  p_output1[2]=0. - 1.*t261*t5306 + t3991*t5360;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t3972*t3991 + t261*t4280;
  p_output1[7]=0. + t3991*t4864 + t261*t4989;
  p_output1[8]=0. + t3991*t5306 + t261*t5360;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5423;
  p_output1[13]=t5444;
  p_output1[14]=t5464;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5464*(t5961 - 1.*t4989*t6064 - 1.*t5444*t6082) + t5444*(t5360*t6064 + t5464*t6082 + t6136);
  p_output1[19]=t5464*(t4280*t6064 + t5423*t6082 + t6158) + t5423*(-1.*t5360*t6064 - 1.*t5464*t6082 + t6203);
  p_output1[20]=t5444*(-1.*t4280*t6064 - 1.*t5423*t6082 + t6254) + t5423*(t4989*t6064 + t5444*t6082 + t6332);
  p_output1[21]=t5423;
  p_output1[22]=t5444;
  p_output1[23]=t5464;
  p_output1[24]=t4864*(t5334*t6004 + t6136 + t6364) + t5306*(t5961 - 1.*t4909*t6004 + t6381);
  p_output1[25]=t3972*(-1.*t5334*t6004 + t6203 + t6413) + t5306*(t4050*t6004 + t6158 + t6428);
  p_output1[26]=t3972*(t4909*t6004 + t6332 + t6442) + t4864*(-1.*t4050*t6004 + t6254 + t6456);
  p_output1[27]=t3972;
  p_output1[28]=t4864;
  p_output1[29]=t5306;
  p_output1[30]=t4969*(t5247*t5847 + t5294*t5949 + t6364) + t5350*(-1.*t4785*t5847 - 1.*t4844*t5949 + t6381);
  p_output1[31]=t4255*(-1.*t5247*t5847 - 1.*t5294*t5949 + t6413) + t5350*(t3784*t5847 + t3959*t5949 + t6428);
  p_output1[32]=t4255*(t4785*t5847 + t4844*t5949 + t6442) + t4969*(-1.*t3784*t5847 - 1.*t3959*t5949 + t6456);
  p_output1[33]=t4255;
  p_output1[34]=t4969;
  p_output1[35]=t5350;
  p_output1[36]=0.091*t3765 - 1.*t4969*(t5229*t5785 + t5240*t5831 + t6364) - 1.*t5350*(-1.*t4732*t5785 - 1.*t4782*t5831 + t6381);
  p_output1[37]=0.091*t4782 - 1.*t4255*(-1.*t5229*t5785 - 1.*t5240*t5831 + t6413) - 1.*t5350*(t3550*t5785 + t3765*t5831 + t6428);
  p_output1[38]=0.091*t5240 - 1.*t4255*(t4732*t5785 + t4782*t5831 + t6442) - 1.*t4969*(-1.*t3550*t5785 - 1.*t3765*t5831 + t6456);
  p_output1[39]=0. - 1.*t3072*t4110 - 1.*t3298*t4138 - 1.*t3538*t4203;
  p_output1[40]=0. - 1.*t4110*t4626 - 1.*t4138*t4680 - 1.*t4203*t4726;
  p_output1[41]=0. - 1.*t4110*t5168 - 1.*t4138*t5202 - 1.*t4203*t5217;
  p_output1[42]=-0.016493*t3072 - 0.041869*t3298 - 0.084668*t3538 - 0.930418*(t5168*t6845 + t4626*t6864) + 0.366501*(t5202*t6845 + t4680*t6864);
  p_output1[43]=-0.016493*t4626 - 0.041869*t4680 - 0.084668*t4726 - 0.930418*(t5168*t6923 + t3072*t6938) + 0.366501*(t5202*t6923 + t3298*t6938);
  p_output1[44]=-0.016493*t5168 - 0.041869*t5202 - 0.084668*t5217 - 0.930418*(t4626*t7006 + t3072*t7026) + 0.366501*(t4680*t7006 + t3298*t7026);
  p_output1[45]=0. - 0.930418*t3072 + 0.366501*t3298;
  p_output1[46]=0. - 0.930418*t4626 + 0.366501*t4680;
  p_output1[47]=0. - 0.930418*t5168 + 0.366501*t5202;
  p_output1[48]=-0.041869*t2318 + 0.016493*t2566 + 0.151852*t2998 + 0.366501*(t5125*t7195 + t4540*t7213) + 0.930418*(t5102*t7195 + t4592*t7213);
  p_output1[49]=-0.041869*t4540 + 0.016493*t4592 + 0.151852*t4617 + 0.366501*(t5125*t7298 + t2318*t7325) + 0.930418*(t5102*t7298 + t2566*t7325);
  p_output1[50]=0.016493*t5102 - 0.041869*t5125 + 0.151852*t5162 + 0.366501*(t4540*t7377 + t2318*t7405) + 0.930418*(t4592*t7377 + t2566*t7405);
  p_output1[51]=0. + 0.366501*t2318 + 0.930418*t2566;
  p_output1[52]=0. + 0.366501*t4540 + 0.930418*t4592;
  p_output1[53]=0. + 0.930418*t5102 + 0.366501*t5125;
  p_output1[54]=0.014606*t1577 - 0.236705*t1907 - 0.03708*t2278 - 0.930418*(t5042*t7605 + t4343*t7631) - 0.366501*(t5011*t7605 + t4536*t7631);
  p_output1[55]=0.014606*t4343 - 0.236705*t4406 - 0.03708*t4536 - 0.930418*(t5042*t7717 + t1577*t7740) - 0.366501*(t5011*t7717 + t2278*t7740);
  p_output1[56]=-0.03708*t5011 + 0.014606*t5042 - 0.236705*t5057 - 0.930418*(t4343*t7810 + t1577*t7836) - 0.366501*(t4536*t7810 + t2278*t7836);
  p_output1[57]=0. - 0.930418*t1577 - 0.366501*t2278;
  p_output1[58]=0. - 0.930418*t4343 - 0.366501*t4536;
  p_output1[59]=0. - 0.366501*t5011 - 0.930418*t5042;
  p_output1[60]=-7.226368466117794e-8;
  p_output1[61]=3.7624803722255407e-7;
  p_output1[62]=-2.3240511536071207e-7;
  p_output1[63]=1.5625900004478943e-7;
  p_output1[64]=5.664589999843095e-7;
  p_output1[65]=1.000000637725;
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Jb_shin_to_tarsus_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

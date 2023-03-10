/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_right_hip_pitch_src.h"

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
  double t175;
  double t1645;
  double t1450;
  double t1465;
  double t1467;
  double t1855;
  double t1652;
  double t1660;
  double t1946;
  double t7;
  double t177;
  double t1100;
  double t1810;
  double t2026;
  double t2204;
  double t2295;
  double t2300;
  double t2310;
  double t3029;
  double t3076;
  double t3105;
  double t361;
  double t450;
  double t1124;
  double t2208;
  double t2209;
  double t2223;
  double t2401;
  double t2465;
  double t2582;
  double t2669;
  double t2680;
  double t2742;
  double t2787;
  double t2797;
  double t2801;
  double t2802;
  double t3120;
  double t3124;
  double t3131;
  double t3133;
  double t3141;
  double t3170;
  double t3171;
  double t3174;
  double t3176;
  double t3177;
  double t2535;
  double t2542;
  double t3426;
  double t3423;
  double t3437;
  double t3448;
  double t3467;
  double t3471;
  double t3479;
  double t14;
  double t46;
  double t3461;
  double t3484;
  double t3490;
  double t3499;
  double t3500;
  double t3507;
  double t3118;
  double t3119;
  double t3492;
  double t3508;
  double t3514;
  double t3205;
  double t3216;
  double t3536;
  double t3537;
  double t3548;
  double t3228;
  double t3234;
  double t3558;
  double t3568;
  double t3574;
  double t3279;
  double t3304;
  double t3338;
  double t3344;
  double t3847;
  double t3849;
  double t3851;
  double t3836;
  double t3856;
  double t3868;
  double t3880;
  double t3886;
  double t3891;
  double t3872;
  double t3892;
  double t3893;
  double t3900;
  double t3901;
  double t3902;
  double t3907;
  double t3908;
  double t3912;
  double t4046;
  double t4055;
  double t4044;
  double t4058;
  double t4071;
  double t4077;
  double t4085;
  double t4088;
  double t4093;
  double t4111;
  double t4113;
  double t4130;
  double t4142;
  double t4236;
  double t4237;
  double t4238;
  double t4249;
  double t4254;
  double t4263;
  double t4264;
  double t4265;
  double t4269;
  double t4272;
  double t4276;
  double t4279;
  double t4442;
  double t4473;
  double t4481;
  double t4486;
  double t4492;
  double t4493;
  double t4483;
  double t4495;
  double t4496;
  double t4511;
  double t4512;
  double t4513;
  double t4439;
  double t4510;
  double t4514;
  double t4516;
  double t4522;
  double t4524;
  double t4526;
  double t4527;
  double t4550;
  double t4555;
  double t4556;
  double t4573;
  double t4639;
  double t4640;
  double t4641;
  double t4645;
  double t4647;
  double t4651;
  double t4630;
  double t4642;
  double t4656;
  double t4659;
  double t4662;
  double t4663;
  double t4666;
  double t4670;
  double t4678;
  double t4690;
  double t4692;
  double t4694;
  double t4820;
  double t4822;
  double t4823;
  double t4825;
  double t4826;
  double t4833;
  double t4836;
  double t4839;
  double t4829;
  double t4844;
  double t4847;
  double t4853;
  double t4854;
  double t4862;
  double t4866;
  double t4879;
  double t4880;
  double t5017;
  double t5026;
  double t5032;
  double t5016;
  double t5051;
  double t5064;
  double t5075;
  double t5079;
  double t5081;
  double t5070;
  double t5083;
  double t5090;
  double t5107;
  double t5109;
  double t5114;
  double t5130;
  double t5134;
  double t5139;
  double t5291;
  double t5301;
  double t5284;
  double t5304;
  double t5306;
  double t5310;
  double t5318;
  double t5324;
  double t5329;
  double t5340;
  double t5342;
  double t5345;
  double t5356;
  double t5425;
  double t5427;
  double t5432;
  double t5433;
  double t5444;
  double t5445;
  double t5449;
  double t5450;
  double t5461;
  double t5462;
  double t5466;
  double t5480;
  double t5568;
  double t5585;
  double t5588;
  double t5595;
  double t5603;
  double t5606;
  double t5593;
  double t5616;
  double t5634;
  double t5644;
  double t5648;
  double t5665;
  double t5682;
  double t5685;
  double t5686;
  double t5798;
  double t5802;
  double t5807;
  double t5826;
  double t5830;
  double t5835;
  double t5823;
  double t5853;
  double t5858;
  double t5865;
  double t5887;
  double t5889;
  double t5905;
  double t5909;
  double t5916;
  double t6003;
  double t6004;
  double t6014;
  double t6025;
  double t6026;
  double t6027;
  double t6039;
  double t6045;
  double t6051;
  double t6055;
  double t6137;
  double t6143;
  double t6156;
  double t6163;
  double t6172;
  double t6175;
  double t6184;
  double t6199;
  double t6205;
  double t6217;
  double t6220;
  double t6224;
  double t6294;
  double t6295;
  double t6302;
  double t6314;
  double t6317;
  double t6320;
  double t6284;
  double t6304;
  double t6321;
  double t6325;
  double t6340;
  double t6344;
  double t6349;
  double t6355;
  double t6363;
  double t6367;
  double t6368;
  double t6371;
  double t2516;
  double t3004;
  double t3190;
  double t3191;
  double t3222;
  double t3226;
  double t3260;
  double t3269;
  double t3271;
  double t3278;
  double t3330;
  double t3392;
  double t3396;
  double t3409;
  double t3515;
  double t3551;
  double t3577;
  double t3578;
  double t3620;
  double t3623;
  double t3634;
  double t3639;
  double t3651;
  double t3710;
  double t3748;
  double t3764;
  double t3779;
  double t3781;
  double t3899;
  double t3903;
  double t3917;
  double t3930;
  double t3940;
  double t3941;
  double t3952;
  double t3954;
  double t3991;
  double t3992;
  double t3996;
  double t4007;
  double t4025;
  double t4033;
  double t4072;
  double t4097;
  double t4161;
  double t4172;
  double t4173;
  double t4177;
  double t4182;
  double t4185;
  double t4188;
  double t4192;
  double t4195;
  double t4200;
  double t4201;
  double t4212;
  double t4250;
  double t4267;
  double t4283;
  double t4293;
  double t4294;
  double t4296;
  double t4338;
  double t4361;
  double t4365;
  double t4371;
  double t4376;
  double t4391;
  double t4396;
  double t4406;
  double t4519;
  double t4528;
  double t4574;
  double t4578;
  double t4586;
  double t4594;
  double t4599;
  double t4604;
  double t4608;
  double t4615;
  double t4616;
  double t4617;
  double t4619;
  double t4622;
  double t4661;
  double t4675;
  double t4695;
  double t4697;
  double t4709;
  double t4711;
  double t4717;
  double t4720;
  double t4721;
  double t4722;
  double t4724;
  double t4726;
  double t4727;
  double t4732;
  double t4749;
  double t4752;
  double t4755;
  double t4758;
  double t4764;
  double t4771;
  double t4774;
  double t4777;
  double t4783;
  double t4787;
  double t4796;
  double t4797;
  double t4808;
  double t4811;
  double t4848;
  double t4864;
  double t4881;
  double t4883;
  double t4925;
  double t4928;
  double t4935;
  double t4958;
  double t4970;
  double t4975;
  double t4978;
  double t4979;
  double t4992;
  double t5004;
  double t5101;
  double t5119;
  double t5147;
  double t5157;
  double t5172;
  double t5179;
  double t5182;
  double t5193;
  double t5199;
  double t5221;
  double t5227;
  double t5263;
  double t5265;
  double t5267;
  double t5309;
  double t5336;
  double t5363;
  double t5366;
  double t5367;
  double t5370;
  double t5374;
  double t5382;
  double t5390;
  double t5391;
  double t5393;
  double t5396;
  double t5398;
  double t5402;
  double t5439;
  double t5456;
  double t5484;
  double t5486;
  double t5491;
  double t5493;
  double t5495;
  double t5498;
  double t5505;
  double t5508;
  double t5512;
  double t5525;
  double t5530;
  double t5542;
  double t5638;
  double t5669;
  double t5687;
  double t5698;
  double t5710;
  double t5713;
  double t5732;
  double t5735;
  double t5738;
  double t5754;
  double t5758;
  double t5761;
  double t5782;
  double t5785;
  double t5859;
  double t5892;
  double t5930;
  double t5934;
  double t5940;
  double t5944;
  double t5949;
  double t5952;
  double t5961;
  double t5968;
  double t5970;
  double t5979;
  double t5985;
  double t5987;
  double t6023;
  double t6037;
  double t6063;
  double t6065;
  double t6067;
  double t6071;
  double t6084;
  double t6095;
  double t6099;
  double t6103;
  double t6108;
  double t6109;
  double t6115;
  double t6121;
  double t6168;
  double t6202;
  double t6226;
  double t6230;
  double t6234;
  double t6248;
  double t6258;
  double t6262;
  double t6263;
  double t6264;
  double t6270;
  double t6271;
  double t6275;
  double t6276;
  double t6338;
  double t6360;
  double t6379;
  double t6381;
  double t6394;
  double t6396;
  double t6398;
  double t6401;
  double t6402;
  double t6407;
  double t6408;
  double t6410;
  double t6422;
  double t6423;
  t175 = Cos(var1[3]);
  t1645 = Cos(var1[4]);
  t1450 = Cos(var1[18]);
  t1465 = -1.*t1450;
  t1467 = 1. + t1465;
  t1855 = Cos(var1[17]);
  t1652 = Cos(var1[5]);
  t1660 = Sin(var1[17]);
  t1946 = Sin(var1[5]);
  t7 = Sin(var1[19]);
  t177 = Sin(var1[18]);
  t1100 = Sin(var1[4]);
  t1810 = -1.*t175*t1645*t1652*t1660;
  t2026 = t1855*t175*t1645*t1946;
  t2204 = t1810 + t2026;
  t2295 = t1855*t175*t1645*t1652;
  t2300 = t175*t1645*t1660*t1946;
  t2310 = t2295 + t2300;
  t3029 = Cos(var1[19]);
  t3076 = -1.*t3029;
  t3105 = 1. + t3076;
  t361 = -0.366501*t177;
  t450 = 0. + t361;
  t1124 = -1.*t175*t450*t1100;
  t2208 = 0.340999127418*t1467*t2204;
  t2209 = -0.134322983001*t1467;
  t2223 = 1. + t2209;
  t2401 = t2223*t2310;
  t2465 = t1124 + t2208 + t2401;
  t2582 = 0.930418*t177;
  t2669 = 0. + t2582;
  t2680 = -1.*t175*t2669*t1100;
  t2742 = -0.8656776547239999*t1467;
  t2787 = 1. + t2742;
  t2797 = t2787*t2204;
  t2801 = 0.340999127418*t1467*t2310;
  t2802 = t2680 + t2797 + t2801;
  t3120 = -1.000000637725*t1467;
  t3124 = 1. + t3120;
  t3131 = -1.*t3124*t175*t1100;
  t3133 = -0.930418*t177;
  t3141 = 0. + t3133;
  t3170 = t3141*t2204;
  t3171 = 0.366501*t177;
  t3174 = 0. + t3171;
  t3176 = t3174*t2310;
  t3177 = t3131 + t3170 + t3176;
  t2535 = 0.366501*t7;
  t2542 = 0. + t2535;
  t3426 = Sin(var1[3]);
  t3423 = t175*t1652*t1100;
  t3437 = t3426*t1946;
  t3448 = t3423 + t3437;
  t3467 = t1652*t3426;
  t3471 = -1.*t175*t1100*t1946;
  t3479 = t3467 + t3471;
  t14 = 0.930418*t7;
  t46 = 0. + t14;
  t3461 = t1660*t3448;
  t3484 = t1855*t3479;
  t3490 = t3461 + t3484;
  t3499 = t1855*t3448;
  t3500 = -1.*t1660*t3479;
  t3507 = t3499 + t3500;
  t3118 = -1.000000637725*t3105;
  t3119 = 1. + t3118;
  t3492 = 0.340999127418*t1467*t3490;
  t3508 = t2787*t3507;
  t3514 = t3492 + t3508;
  t3205 = -0.8656776547239999*t3105;
  t3216 = 1. + t3205;
  t3536 = t2223*t3490;
  t3537 = 0.340999127418*t1467*t3507;
  t3548 = t3536 + t3537;
  t3228 = -0.930418*t7;
  t3234 = 0. + t3228;
  t3558 = t3174*t3490;
  t3568 = t3141*t3507;
  t3574 = t3558 + t3568;
  t3279 = -0.134322983001*t3105;
  t3304 = 1. + t3279;
  t3338 = -0.366501*t7;
  t3344 = 0. + t3338;
  t3847 = -1.*t1652*t3426;
  t3849 = t175*t1100*t1946;
  t3851 = t3847 + t3849;
  t3836 = -1.*t1660*t3448;
  t3856 = t1855*t3851;
  t3868 = t3836 + t3856;
  t3880 = -1.*t1855*t3448;
  t3886 = -1.*t1660*t3851;
  t3891 = t3880 + t3886;
  t3872 = 0.340999127418*t1467*t3868;
  t3892 = t2787*t3891;
  t3893 = t3872 + t3892;
  t3900 = t2223*t3868;
  t3901 = 0.340999127418*t1467*t3891;
  t3902 = t3900 + t3901;
  t3907 = t3174*t3868;
  t3908 = t3141*t3891;
  t3912 = t3907 + t3908;
  t4046 = t1660*t3851;
  t4055 = t3499 + t4046;
  t4044 = t175*t1645*t450;
  t4058 = t2223*t4055;
  t4071 = t4044 + t3872 + t4058;
  t4077 = t175*t1645*t2669;
  t4085 = t2787*t3868;
  t4088 = 0.340999127418*t1467*t4055;
  t4093 = t4077 + t4085 + t4088;
  t4111 = t3124*t175*t1645;
  t4113 = t3141*t3868;
  t4130 = t3174*t4055;
  t4142 = t4111 + t4113 + t4130;
  t4236 = -1.000000637725*t175*t1645*t177;
  t4237 = -0.930418*t1450*t3868;
  t4238 = 0.366501*t1450*t4055;
  t4249 = t4236 + t4237 + t4238;
  t4254 = -0.366501*t1450*t175*t1645;
  t4263 = 0.340999127418*t177*t3868;
  t4264 = -0.134322983001*t177*t4055;
  t4265 = t4254 + t4263 + t4264;
  t4269 = 0.930418*t1450*t175*t1645;
  t4272 = -0.8656776547239999*t177*t3868;
  t4276 = 0.340999127418*t177*t4055;
  t4279 = t4269 + t4272 + t4276;
  t4442 = -1.*t1652*t3426*t1100;
  t4473 = t175*t1946;
  t4481 = t4442 + t4473;
  t4486 = -1.*t175*t1652;
  t4492 = -1.*t3426*t1100*t1946;
  t4493 = t4486 + t4492;
  t4483 = -1.*t1660*t4481;
  t4495 = t1855*t4493;
  t4496 = t4483 + t4495;
  t4511 = t1855*t4481;
  t4512 = t1660*t4493;
  t4513 = t4511 + t4512;
  t4439 = -1.*t1645*t450*t3426;
  t4510 = 0.340999127418*t1467*t4496;
  t4514 = t2223*t4513;
  t4516 = t4439 + t4510 + t4514;
  t4522 = -1.*t1645*t2669*t3426;
  t4524 = t2787*t4496;
  t4526 = 0.340999127418*t1467*t4513;
  t4527 = t4522 + t4524 + t4526;
  t4550 = -1.*t3124*t1645*t3426;
  t4555 = t3141*t4496;
  t4556 = t3174*t4513;
  t4573 = t4550 + t4555 + t4556;
  t4639 = -1.*t1645*t1652*t1660*t3426;
  t4640 = t1855*t1645*t3426*t1946;
  t4641 = t4639 + t4640;
  t4645 = t1855*t1645*t1652*t3426;
  t4647 = t1645*t1660*t3426*t1946;
  t4651 = t4645 + t4647;
  t4630 = -1.*t450*t3426*t1100;
  t4642 = 0.340999127418*t1467*t4641;
  t4656 = t2223*t4651;
  t4659 = t4630 + t4642 + t4656;
  t4662 = -1.*t2669*t3426*t1100;
  t4663 = t2787*t4641;
  t4666 = 0.340999127418*t1467*t4651;
  t4670 = t4662 + t4663 + t4666;
  t4678 = -1.*t3124*t3426*t1100;
  t4690 = t3141*t4641;
  t4692 = t3174*t4651;
  t4694 = t4678 + t4690 + t4692;
  t4820 = t1652*t3426*t1100;
  t4822 = -1.*t175*t1946;
  t4823 = t4820 + t4822;
  t4825 = t1660*t4823;
  t4826 = t4825 + t4495;
  t4833 = t1855*t4823;
  t4836 = -1.*t1660*t4493;
  t4839 = t4833 + t4836;
  t4829 = 0.340999127418*t1467*t4826;
  t4844 = t2787*t4839;
  t4847 = t4829 + t4844;
  t4853 = t2223*t4826;
  t4854 = 0.340999127418*t1467*t4839;
  t4862 = t4853 + t4854;
  t4866 = t3174*t4826;
  t4879 = t3141*t4839;
  t4880 = t4866 + t4879;
  t5017 = t175*t1652;
  t5026 = t3426*t1100*t1946;
  t5032 = t5017 + t5026;
  t5016 = -1.*t1660*t4823;
  t5051 = t1855*t5032;
  t5064 = t5016 + t5051;
  t5075 = -1.*t1855*t4823;
  t5079 = -1.*t1660*t5032;
  t5081 = t5075 + t5079;
  t5070 = 0.340999127418*t1467*t5064;
  t5083 = t2787*t5081;
  t5090 = t5070 + t5083;
  t5107 = t2223*t5064;
  t5109 = 0.340999127418*t1467*t5081;
  t5114 = t5107 + t5109;
  t5130 = t3174*t5064;
  t5134 = t3141*t5081;
  t5139 = t5130 + t5134;
  t5291 = t1660*t5032;
  t5301 = t4833 + t5291;
  t5284 = t1645*t450*t3426;
  t5304 = t2223*t5301;
  t5306 = t5284 + t5070 + t5304;
  t5310 = t1645*t2669*t3426;
  t5318 = t2787*t5064;
  t5324 = 0.340999127418*t1467*t5301;
  t5329 = t5310 + t5318 + t5324;
  t5340 = t3124*t1645*t3426;
  t5342 = t3141*t5064;
  t5345 = t3174*t5301;
  t5356 = t5340 + t5342 + t5345;
  t5425 = -1.000000637725*t1645*t177*t3426;
  t5427 = -0.930418*t1450*t5064;
  t5432 = 0.366501*t1450*t5301;
  t5433 = t5425 + t5427 + t5432;
  t5444 = -0.366501*t1450*t1645*t3426;
  t5445 = 0.340999127418*t177*t5064;
  t5449 = -0.134322983001*t177*t5301;
  t5450 = t5444 + t5445 + t5449;
  t5461 = 0.930418*t1450*t1645*t3426;
  t5462 = -0.8656776547239999*t177*t5064;
  t5466 = 0.340999127418*t177*t5301;
  t5480 = t5461 + t5462 + t5466;
  t5568 = -1.*t1645*t1652*t1660;
  t5585 = t1855*t1645*t1946;
  t5588 = t5568 + t5585;
  t5595 = -1.*t1855*t1645*t1652;
  t5603 = -1.*t1645*t1660*t1946;
  t5606 = t5595 + t5603;
  t5593 = 0.340999127418*t1467*t5588;
  t5616 = t2787*t5606;
  t5634 = t5593 + t5616;
  t5644 = t2223*t5588;
  t5648 = 0.340999127418*t1467*t5606;
  t5665 = t5644 + t5648;
  t5682 = t3174*t5588;
  t5685 = t3141*t5606;
  t5686 = t5682 + t5685;
  t5798 = t1645*t1652*t1660;
  t5802 = -1.*t1855*t1645*t1946;
  t5807 = t5798 + t5802;
  t5826 = t1855*t1645*t1652;
  t5830 = t1645*t1660*t1946;
  t5835 = t5826 + t5830;
  t5823 = 0.340999127418*t1467*t5807;
  t5853 = t2787*t5835;
  t5858 = t5823 + t5853;
  t5865 = t2223*t5807;
  t5887 = 0.340999127418*t1467*t5835;
  t5889 = t5865 + t5887;
  t5905 = t3174*t5807;
  t5909 = t3141*t5835;
  t5916 = t5905 + t5909;
  t6003 = -1.*t450*t1100;
  t6004 = t2223*t5835;
  t6014 = t6003 + t5593 + t6004;
  t6025 = -1.*t2669*t1100;
  t6026 = t2787*t5588;
  t6027 = t6025 + t6026 + t5887;
  t6039 = -1.*t3124*t1100;
  t6045 = t3141*t5588;
  t6051 = t3174*t5835;
  t6055 = t6039 + t6045 + t6051;
  t6137 = 1.000000637725*t177*t1100;
  t6143 = -0.930418*t1450*t5588;
  t6156 = 0.366501*t1450*t5835;
  t6163 = t6137 + t6143 + t6156;
  t6172 = 0.366501*t1450*t1100;
  t6175 = 0.340999127418*t177*t5588;
  t6184 = -0.134322983001*t177*t5835;
  t6199 = t6172 + t6175 + t6184;
  t6205 = -0.930418*t1450*t1100;
  t6217 = -0.8656776547239999*t177*t5588;
  t6220 = 0.340999127418*t177*t5835;
  t6224 = t6205 + t6217 + t6220;
  t6294 = t1652*t1660*t1100;
  t6295 = -1.*t1855*t1100*t1946;
  t6302 = t6294 + t6295;
  t6314 = -1.*t1855*t1652*t1100;
  t6317 = -1.*t1660*t1100*t1946;
  t6320 = t6314 + t6317;
  t6284 = -1.*t1645*t450;
  t6304 = 0.340999127418*t1467*t6302;
  t6321 = t2223*t6320;
  t6325 = t6284 + t6304 + t6321;
  t6340 = -1.*t1645*t2669;
  t6344 = t2787*t6302;
  t6349 = 0.340999127418*t1467*t6320;
  t6355 = t6340 + t6344 + t6349;
  t6363 = -1.*t3124*t1645;
  t6367 = t3141*t6302;
  t6368 = t3174*t6320;
  t6371 = t6363 + t6367 + t6368;
  t2516 = t46*t2465;
  t3004 = t2542*t2802;
  t3190 = t3119*t3177;
  t3191 = t2516 + t3004 + t3190;
  t3222 = t3216*t2465;
  t3226 = -0.340999127418*t3105*t2802;
  t3260 = t3234*t3177;
  t3269 = t3222 + t3226 + t3260;
  t3271 = -0.657905*t3269;
  t3278 = -0.340999127418*t3105*t2465;
  t3330 = t3304*t2802;
  t3392 = t3344*t3177;
  t3396 = t3278 + t3330 + t3392;
  t3409 = -0.259155*t3396;
  t3515 = t2542*t3514;
  t3551 = t46*t3548;
  t3577 = t3119*t3574;
  t3578 = t3515 + t3551 + t3577;
  t3620 = -0.340999127418*t3105*t3514;
  t3623 = t3216*t3548;
  t3634 = t3234*t3574;
  t3639 = t3620 + t3623 + t3634;
  t3651 = -0.657905*t3639;
  t3710 = t3304*t3514;
  t3748 = -0.340999127418*t3105*t3548;
  t3764 = t3344*t3574;
  t3779 = t3710 + t3748 + t3764;
  t3781 = -0.259155*t3779;
  t3899 = t2542*t3893;
  t3903 = t46*t3902;
  t3917 = t3119*t3912;
  t3930 = t3899 + t3903 + t3917;
  t3940 = -0.340999127418*t3105*t3893;
  t3941 = t3216*t3902;
  t3952 = t3234*t3912;
  t3954 = t3940 + t3941 + t3952;
  t3991 = -0.657905*t3954;
  t3992 = t3304*t3893;
  t3996 = -0.340999127418*t3105*t3902;
  t4007 = t3344*t3912;
  t4025 = t3992 + t3996 + t4007;
  t4033 = -0.259155*t4025;
  t4072 = -0.8656776547239999*t7*t4071;
  t4097 = -0.340999127418*t7*t4093;
  t4161 = -0.930418*t3029*t4142;
  t4172 = t4072 + t4097 + t4161;
  t4173 = -0.657905*t4172;
  t4177 = -0.340999127418*t7*t4071;
  t4182 = -0.134322983001*t7*t4093;
  t4185 = -0.366501*t3029*t4142;
  t4188 = t4177 + t4182 + t4185;
  t4192 = -0.259155*t4188;
  t4195 = 0.930418*t3029*t4071;
  t4200 = 0.366501*t3029*t4093;
  t4201 = -1.000000637725*t7*t4142;
  t4212 = t4195 + t4200 + t4201;
  t4250 = t3344*t4249;
  t4267 = -0.340999127418*t3105*t4265;
  t4283 = t3304*t4279;
  t4293 = t4250 + t4267 + t4283;
  t4294 = -0.259155*t4293;
  t4296 = t3234*t4249;
  t4338 = t3216*t4265;
  t4361 = -0.340999127418*t3105*t4279;
  t4365 = t4296 + t4338 + t4361;
  t4371 = -0.657905*t4365;
  t4376 = t3119*t4249;
  t4391 = t46*t4265;
  t4396 = t2542*t4279;
  t4406 = t4376 + t4391 + t4396;
  t4519 = t46*t4516;
  t4528 = t2542*t4527;
  t4574 = t3119*t4573;
  t4578 = t4519 + t4528 + t4574;
  t4586 = t3216*t4516;
  t4594 = -0.340999127418*t3105*t4527;
  t4599 = t3234*t4573;
  t4604 = t4586 + t4594 + t4599;
  t4608 = -0.657905*t4604;
  t4615 = -0.340999127418*t3105*t4516;
  t4616 = t3304*t4527;
  t4617 = t3344*t4573;
  t4619 = t4615 + t4616 + t4617;
  t4622 = -0.259155*t4619;
  t4661 = t46*t4659;
  t4675 = t2542*t4670;
  t4695 = t3119*t4694;
  t4697 = t4661 + t4675 + t4695;
  t4709 = t3216*t4659;
  t4711 = -0.340999127418*t3105*t4670;
  t4717 = t3234*t4694;
  t4720 = t4709 + t4711 + t4717;
  t4721 = -0.657905*t4720;
  t4722 = -0.340999127418*t3105*t4659;
  t4724 = t3304*t4670;
  t4726 = t3344*t4694;
  t4727 = t4722 + t4724 + t4726;
  t4732 = -0.259155*t4727;
  t4749 = t46*t4071;
  t4752 = t2542*t4093;
  t4755 = t3119*t4142;
  t4758 = t4749 + t4752 + t4755;
  t4764 = t3216*t4071;
  t4771 = -0.340999127418*t3105*t4093;
  t4774 = t3234*t4142;
  t4777 = t4764 + t4771 + t4774;
  t4783 = -0.657905*t4777;
  t4787 = -0.340999127418*t3105*t4071;
  t4796 = t3304*t4093;
  t4797 = t3344*t4142;
  t4808 = t4787 + t4796 + t4797;
  t4811 = -0.259155*t4808;
  t4848 = t2542*t4847;
  t4864 = t46*t4862;
  t4881 = t3119*t4880;
  t4883 = t4848 + t4864 + t4881;
  t4925 = -0.340999127418*t3105*t4847;
  t4928 = t3216*t4862;
  t4935 = t3234*t4880;
  t4958 = t4925 + t4928 + t4935;
  t4970 = -0.657905*t4958;
  t4975 = t3304*t4847;
  t4978 = -0.340999127418*t3105*t4862;
  t4979 = t3344*t4880;
  t4992 = t4975 + t4978 + t4979;
  t5004 = -0.259155*t4992;
  t5101 = t2542*t5090;
  t5119 = t46*t5114;
  t5147 = t3119*t5139;
  t5157 = t5101 + t5119 + t5147;
  t5172 = -0.340999127418*t3105*t5090;
  t5179 = t3216*t5114;
  t5182 = t3234*t5139;
  t5193 = t5172 + t5179 + t5182;
  t5199 = -0.657905*t5193;
  t5221 = t3304*t5090;
  t5227 = -0.340999127418*t3105*t5114;
  t5263 = t3344*t5139;
  t5265 = t5221 + t5227 + t5263;
  t5267 = -0.259155*t5265;
  t5309 = -0.8656776547239999*t7*t5306;
  t5336 = -0.340999127418*t7*t5329;
  t5363 = -0.930418*t3029*t5356;
  t5366 = t5309 + t5336 + t5363;
  t5367 = -0.657905*t5366;
  t5370 = -0.340999127418*t7*t5306;
  t5374 = -0.134322983001*t7*t5329;
  t5382 = -0.366501*t3029*t5356;
  t5390 = t5370 + t5374 + t5382;
  t5391 = -0.259155*t5390;
  t5393 = 0.930418*t3029*t5306;
  t5396 = 0.366501*t3029*t5329;
  t5398 = -1.000000637725*t7*t5356;
  t5402 = t5393 + t5396 + t5398;
  t5439 = t3344*t5433;
  t5456 = -0.340999127418*t3105*t5450;
  t5484 = t3304*t5480;
  t5486 = t5439 + t5456 + t5484;
  t5491 = -0.259155*t5486;
  t5493 = t3234*t5433;
  t5495 = t3216*t5450;
  t5498 = -0.340999127418*t3105*t5480;
  t5505 = t5493 + t5495 + t5498;
  t5508 = -0.657905*t5505;
  t5512 = t3119*t5433;
  t5525 = t46*t5450;
  t5530 = t2542*t5480;
  t5542 = t5512 + t5525 + t5530;
  t5638 = t2542*t5634;
  t5669 = t46*t5665;
  t5687 = t3119*t5686;
  t5698 = t5638 + t5669 + t5687;
  t5710 = -0.340999127418*t3105*t5634;
  t5713 = t3216*t5665;
  t5732 = t3234*t5686;
  t5735 = t5710 + t5713 + t5732;
  t5738 = -0.657905*t5735;
  t5754 = t3304*t5634;
  t5758 = -0.340999127418*t3105*t5665;
  t5761 = t3344*t5686;
  t5782 = t5754 + t5758 + t5761;
  t5785 = -0.259155*t5782;
  t5859 = t2542*t5858;
  t5892 = t46*t5889;
  t5930 = t3119*t5916;
  t5934 = t5859 + t5892 + t5930;
  t5940 = -0.340999127418*t3105*t5858;
  t5944 = t3216*t5889;
  t5949 = t3234*t5916;
  t5952 = t5940 + t5944 + t5949;
  t5961 = -0.657905*t5952;
  t5968 = t3304*t5858;
  t5970 = -0.340999127418*t3105*t5889;
  t5979 = t3344*t5916;
  t5985 = t5968 + t5970 + t5979;
  t5987 = -0.259155*t5985;
  t6023 = -0.8656776547239999*t7*t6014;
  t6037 = -0.340999127418*t7*t6027;
  t6063 = -0.930418*t3029*t6055;
  t6065 = t6023 + t6037 + t6063;
  t6067 = -0.657905*t6065;
  t6071 = -0.340999127418*t7*t6014;
  t6084 = -0.134322983001*t7*t6027;
  t6095 = -0.366501*t3029*t6055;
  t6099 = t6071 + t6084 + t6095;
  t6103 = -0.259155*t6099;
  t6108 = 0.930418*t3029*t6014;
  t6109 = 0.366501*t3029*t6027;
  t6115 = -1.000000637725*t7*t6055;
  t6121 = t6108 + t6109 + t6115;
  t6168 = t3344*t6163;
  t6202 = -0.340999127418*t3105*t6199;
  t6226 = t3304*t6224;
  t6230 = t6168 + t6202 + t6226;
  t6234 = -0.259155*t6230;
  t6248 = t3234*t6163;
  t6258 = t3216*t6199;
  t6262 = -0.340999127418*t3105*t6224;
  t6263 = t6248 + t6258 + t6262;
  t6264 = -0.657905*t6263;
  t6270 = t3119*t6163;
  t6271 = t46*t6199;
  t6275 = t2542*t6224;
  t6276 = t6270 + t6271 + t6275;
  t6338 = t46*t6325;
  t6360 = t2542*t6355;
  t6379 = t3119*t6371;
  t6381 = t6338 + t6360 + t6379;
  t6394 = t3216*t6325;
  t6396 = -0.340999127418*t3105*t6355;
  t6398 = t3234*t6371;
  t6401 = t6394 + t6396 + t6398;
  t6402 = -0.657905*t6401;
  t6407 = -0.340999127418*t3105*t6325;
  t6408 = t3304*t6355;
  t6410 = t3344*t6371;
  t6422 = t6407 + t6408 + t6410;
  t6423 = -0.259155*t6422;
  p_output1[0]=(0.707107*t4578 + t4608 + t4622)*var2[3] + (0.707107*t3191 + t3271 + t3409)*var2[4] + (0.707107*t3578 + t3651 + t3781)*var2[5] + (0.707107*t3930 + t3991 + t4033)*var2[17] + (t4294 + t4371 + 0.707107*t4406)*var2[18] + (t4173 + t4192 + 0.707107*t4212)*var2[19];
  p_output1[1]=(0.707107*t4758 + t4783 + t4811)*var2[3] + (0.707107*t4697 + t4721 + t4732)*var2[4] + (0.707107*t4883 + t4970 + t5004)*var2[5] + (0.707107*t5157 + t5199 + t5267)*var2[17] + (t5491 + t5508 + 0.707107*t5542)*var2[18] + (t5367 + t5391 + 0.707107*t5402)*var2[19];
  p_output1[2]=(0.707107*t6381 + t6402 + t6423)*var2[4] + (0.707107*t5934 + t5961 + t5987)*var2[5] + (0.707107*t5698 + t5738 + t5785)*var2[17] + (t6234 + t6264 + 0.707107*t6276)*var2[18] + (t6067 + t6103 + 0.707107*t6121)*var2[19];
  p_output1[3]=(-0.707107*t4578 + t4608 + t4622)*var2[3] + (-0.707107*t3191 + t3271 + t3409)*var2[4] + (-0.707107*t3578 + t3651 + t3781)*var2[5] + (-0.707107*t3930 + t3991 + t4033)*var2[17] + (t4294 + t4371 - 0.707107*t4406)*var2[18] + (t4173 + t4192 - 0.707107*t4212)*var2[19];
  p_output1[4]=(-0.707107*t4758 + t4783 + t4811)*var2[3] + (-0.707107*t4697 + t4721 + t4732)*var2[4] + (-0.707107*t4883 + t4970 + t5004)*var2[5] + (-0.707107*t5157 + t5199 + t5267)*var2[17] + (t5491 + t5508 - 0.707107*t5542)*var2[18] + (t5367 + t5391 - 0.707107*t5402)*var2[19];
  p_output1[5]=(-0.707107*t6381 + t6402 + t6423)*var2[4] + (-0.707107*t5934 + t5961 + t5987)*var2[5] + (-0.707107*t5698 + t5738 + t5785)*var2[17] + (t6234 + t6264 - 0.707107*t6276)*var2[18] + (t6067 + t6103 - 0.707107*t6121)*var2[19];
  p_output1[6]=(-0.366501*t4604 + 0.930418*t4619)*var2[3] + (-0.366501*t3269 + 0.930418*t3396)*var2[4] + (-0.366501*t3639 + 0.930418*t3779)*var2[5] + (-0.366501*t3954 + 0.930418*t4025)*var2[17] + (0.930418*t4293 - 0.366501*t4365)*var2[18] + (-0.366501*t4172 + 0.930418*t4188)*var2[19];
  p_output1[7]=(-0.366501*t4777 + 0.930418*t4808)*var2[3] + (-0.366501*t4720 + 0.930418*t4727)*var2[4] + (-0.366501*t4958 + 0.930418*t4992)*var2[5] + (-0.366501*t5193 + 0.930418*t5265)*var2[17] + (0.930418*t5486 - 0.366501*t5505)*var2[18] + (-0.366501*t5366 + 0.930418*t5390)*var2[19];
  p_output1[8]=(-0.366501*t6401 + 0.930418*t6422)*var2[4] + (-0.366501*t5952 + 0.930418*t5985)*var2[5] + (-0.366501*t5735 + 0.930418*t5782)*var2[17] + (0.930418*t6230 - 0.366501*t6263)*var2[18] + (-0.366501*t6065 + 0.930418*t6099)*var2[19];
}



void dR_right_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:42:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_toe_roll_joint_left_src.h"

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
  double t671;
  double t701;
  double t707;
  double t827;
  double t590;
  double t607;
  double t659;
  double t822;
  double t540;
  double t709;
  double t718;
  double t799;
  double t832;
  double t871;
  double t908;
  double t952;
  double t981;
  double t1038;
  double t1053;
  double t1081;
  double t1103;
  double t1106;
  double t1116;
  double t1136;
  double t1137;
  double t1151;
  double t1207;
  double t1214;
  double t1236;
  double t1238;
  double t1310;
  double t1324;
  double t1353;
  double t1956;
  double t1970;
  double t1979;
  double t973;
  double t1003;
  double t1019;
  double t1172;
  double t1173;
  double t1196;
  double t1372;
  double t1392;
  double t1514;
  double t1532;
  double t1626;
  double t1705;
  double t1746;
  double t1756;
  double t1786;
  double t1855;
  double t2034;
  double t2062;
  double t2079;
  double t2083;
  double t2095;
  double t2109;
  double t2137;
  double t2142;
  double t2179;
  double t2220;
  double t2286;
  double t2309;
  double t2333;
  double t333;
  double t339;
  double t348;
  double t471;
  double t546;
  double t569;
  double t1428;
  double t1430;
  double t1484;
  double t1935;
  double t1981;
  double t2030;
  double t2233;
  double t2238;
  double t2343;
  double t2349;
  double t2354;
  double t2378;
  double t2403;
  double t2416;
  double t2426;
  double t2504;
  double t2516;
  double t2577;
  double t2602;
  double t2613;
  double t2641;
  double t2675;
  double t2684;
  double t2747;
  double t133;
  double t247;
  double t327;
  double t476;
  double t498;
  double t2247;
  double t2506;
  double t2510;
  double t2511;
  double t2750;
  double t2752;
  double t2778;
  double t2841;
  double t2849;
  double t2886;
  double t2921;
  double t2944;
  double t2955;
  double t2959;
  double t2973;
  double t2978;
  double t3042;
  double t3064;
  double t3074;
  double t3076;
  double t3087;
  double t3106;
  double t3119;
  double t3121;
  double t3148;
  double t389;
  double t418;
  double t2760;
  double t2962;
  double t3159;
  double t3173;
  double t3179;
  double t3189;
  double t3235;
  double t3277;
  double t3337;
  double t3342;
  double t3346;
  double t3374;
  double t3380;
  double t3382;
  double t3461;
  double t3469;
  double t3472;
  double t3474;
  double t3548;
  double t3569;
  double t3572;
  double t3574;
  double t3577;
  double t3665;
  double t3692;
  double t3756;
  double t3196;
  double t3200;
  double t3215;
  double t3392;
  double t3462;
  double t3463;
  double t3708;
  double t3751;
  double t89;
  double t3765;
  double t3768;
  double t3776;
  double t3777;
  double t3824;
  double t3828;
  double t3872;
  double t3892;
  double t3925;
  double t3752;
  double t3906;
  double t3920;
  double t77;
  double t3940;
  double t3955;
  double t3960;
  double t72;
  double t4223;
  double t4226;
  double t4229;
  double t4237;
  double t4251;
  double t4252;
  double t4258;
  double t4264;
  double t4270;
  double t4289;
  double t4300;
  double t4303;
  double t4326;
  double t4327;
  double t4333;
  double t4336;
  double t4337;
  double t4340;
  double t4255;
  double t4320;
  double t4343;
  double t4348;
  double t4356;
  double t4359;
  double t4361;
  double t4362;
  double t4365;
  double t4373;
  double t4375;
  double t4390;
  double t4351;
  double t4363;
  double t4393;
  double t4399;
  double t4404;
  double t4405;
  double t4410;
  double t4414;
  double t4430;
  double t4436;
  double t4445;
  double t4446;
  double t4400;
  double t4416;
  double t4447;
  double t4455;
  double t4489;
  double t4494;
  double t4497;
  double t4498;
  double t4504;
  double t4506;
  double t4507;
  double t4508;
  double t4475;
  double t4500;
  double t4514;
  double t4525;
  double t4541;
  double t4543;
  double t4546;
  double t4547;
  double t4554;
  double t4576;
  double t4582;
  double t4586;
  double t4527;
  double t4552;
  double t4589;
  double t4601;
  double t4606;
  double t4615;
  double t4620;
  double t4622;
  double t4035;
  double t4038;
  double t4604;
  double t4627;
  double t4631;
  double t4634;
  double t4636;
  double t4641;
  double t4087;
  double t4088;
  double t4091;
  double t4130;
  double t4148;
  double t4154;
  double t4165;
  double t4695;
  double t4697;
  double t4701;
  double t4706;
  double t4713;
  double t4715;
  double t4717;
  double t4718;
  double t4724;
  double t4725;
  double t4730;
  double t4732;
  double t4709;
  double t4720;
  double t4734;
  double t4735;
  double t4739;
  double t4740;
  double t4742;
  double t4747;
  double t4753;
  double t4755;
  double t4765;
  double t4766;
  double t4736;
  double t4751;
  double t4768;
  double t4769;
  double t4782;
  double t4786;
  double t4787;
  double t4789;
  double t4796;
  double t4804;
  double t4805;
  double t4812;
  double t4778;
  double t4792;
  double t4819;
  double t4824;
  double t4827;
  double t4833;
  double t4834;
  double t4838;
  double t4846;
  double t4849;
  double t4857;
  double t4860;
  double t4825;
  double t4845;
  double t4866;
  double t4884;
  double t4933;
  double t4935;
  double t4939;
  double t4949;
  double t4951;
  double t4953;
  double t4958;
  double t4961;
  double t4912;
  double t4950;
  double t4965;
  double t4966;
  double t4980;
  double t4995;
  double t5015;
  double t5030;
  double t4968;
  double t5032;
  double t5035;
  double t5043;
  double t5045;
  double t5046;
  double t3921;
  double t3978;
  double t4007;
  double t4042;
  double t4049;
  double t4052;
  double t4084;
  double t4094;
  double t4151;
  double t4200;
  double t4202;
  double t4205;
  double t4209;
  double t4633;
  double t4643;
  double t4648;
  double t4650;
  double t4653;
  double t4659;
  double t4667;
  double t4673;
  double t4675;
  double t4676;
  double t4679;
  double t4683;
  double t4684;
  double t5041;
  double t5047;
  double t5048;
  double t5053;
  double t5054;
  double t5056;
  double t5059;
  double t5062;
  double t5063;
  double t5068;
  double t5069;
  double t5072;
  double t5074;
  double t5197;
  double t5202;
  double t5228;
  double t5188;
  double t5190;
  double t5191;
  double t5192;
  double t5196;
  double t5200;
  double t5201;
  double t5206;
  double t5209;
  double t5211;
  double t5215;
  double t5217;
  double t5226;
  double t5234;
  double t5235;
  double t5239;
  double t5240;
  double t5241;
  double t5246;
  double t5255;
  double t5261;
  double t5267;
  double t5268;
  double t5271;
  double t5275;
  double t5277;
  double t5279;
  double t5280;
  double t5288;
  double t5290;
  double t5184;
  double t5185;
  double t5187;
  double t5212;
  double t5259;
  double t5291;
  double t5292;
  double t5296;
  double t5298;
  double t5301;
  double t5309;
  double t5312;
  double t5313;
  double t5314;
  double t5326;
  double t5327;
  double t5330;
  double t5335;
  double t5336;
  double t5338;
  double t5340;
  double t5177;
  double t5182;
  double t5183;
  double t5295;
  double t5324;
  double t5345;
  double t5346;
  double t5350;
  double t5354;
  double t5359;
  double t5362;
  double t5364;
  double t5370;
  double t5372;
  double t5386;
  double t5388;
  double t5390;
  double t5392;
  double t5400;
  double t5402;
  double t5405;
  double t5165;
  double t5168;
  double t5175;
  double t5348;
  double t5377;
  double t5407;
  double t5409;
  double t5419;
  double t5421;
  double t5427;
  double t5430;
  double t5434;
  double t5435;
  double t5441;
  double t5447;
  double t5451;
  double t5452;
  double t5454;
  double t5455;
  double t5460;
  double t5462;
  double t5159;
  double t5160;
  double t5418;
  double t5442;
  double t5444;
  double t5465;
  double t5480;
  double t5489;
  double t5491;
  double t5494;
  double t5511;
  double t5515;
  double t5519;
  double t5520;
  double t5527;
  double t5533;
  double t5535;
  double t5540;
  double t5542;
  double t5545;
  double t5546;
  double t5152;
  double t5154;
  double t5157;
  double t5484;
  double t5523;
  double t5550;
  double t5551;
  double t5560;
  double t5562;
  double t5564;
  double t5568;
  double t5578;
  double t5579;
  double t5585;
  double t5149;
  double t5557;
  double t5588;
  double t5591;
  double t5601;
  double t5605;
  double t5611;
  double t5612;
  double t5614;
  double t5618;
  double t5140;
  double t5143;
  double t5148;
  double t5625;
  double t5627;
  double t5628;
  double t5635;
  double t5637;
  double t5641;
  double t5646;
  double t5647;
  double t5650;
  double t5651;
  double t5135;
  double t5136;
  double t5138;
  double t5599;
  double t5620;
  double t5621;
  double t5633;
  double t5654;
  double t5656;
  double t5663;
  double t5666;
  double t5667;
  double t5128;
  double t5130;
  double t5134;
  double t5674;
  double t5622;
  double t5691;
  double t5684;
  double t5716;
  double t5703;
  double t5754;
  double t5745;
  double t5781;
  double t5772;
  double t5799;
  double t5789;
  double t6085;
  double t6097;
  double t6100;
  double t6101;
  double t6104;
  double t6106;
  double t6110;
  double t6111;
  double t6147;
  double t6149;
  double t6153;
  double t6154;
  double t6157;
  double t6159;
  double t6160;
  double t6161;
  double t6206;
  double t6209;
  double t6210;
  double t6212;
  double t6219;
  double t6225;
  double t6229;
  double t6231;
  double t6295;
  double t6303;
  double t6304;
  double t6307;
  double t6311;
  double t6312;
  double t6326;
  double t6329;
  double t6373;
  double t6380;
  double t6385;
  double t6388;
  double t6393;
  double t6399;
  double t6404;
  double t6405;
  double t6436;
  double t6442;
  double t6443;
  double t6445;
  double t6449;
  double t6450;
  double t6456;
  double t6458;
  double t6538;
  double t6541;
  double t6543;
  double t6544;
  double t6549;
  double t6555;
  double t6565;
  double t6567;
  double t6614;
  double t6617;
  double t6618;
  double t6621;
  double t6626;
  double t6627;
  double t6628;
  double t6631;
  double t6668;
  double t6669;
  double t6673;
  double t6676;
  double t6691;
  double t6692;
  double t6698;
  double t6699;
  double t6762;
  double t6764;
  double t6769;
  double t6770;
  double t6781;
  double t6782;
  double t6783;
  double t6784;
  double t6806;
  double t6809;
  double t6811;
  double t6812;
  double t6815;
  double t6816;
  double t6817;
  double t6818;
  double t6860;
  double t6861;
  double t6862;
  double t6863;
  double t6866;
  double t6868;
  double t6870;
  double t6871;
  double t6927;
  double t6928;
  double t6929;
  double t6933;
  double t6935;
  double t6937;
  double t6938;
  double t6940;
  double t6981;
  double t6982;
  double t6984;
  double t6987;
  double t6969;
  double t6970;
  double t6971;
  double t6973;
  double t7046;
  double t7050;
  double t7051;
  double t7054;
  double t7030;
  double t7034;
  double t7035;
  double t7039;
  t671 = Cos(var1[12]);
  t701 = -1.*t671;
  t707 = 1. + t701;
  t827 = Sin(var1[12]);
  t590 = Cos(var1[11]);
  t607 = -1.*t590;
  t659 = 1. + t607;
  t822 = -0.120666640478*t707;
  t540 = Sin(var1[10]);
  t709 = -0.952469601425*t707;
  t718 = 1. + t709;
  t799 = 0.930418*t718;
  t832 = -0.803828*t827;
  t871 = t822 + t832;
  t908 = 0.366501*t871;
  t952 = t799 + t908;
  t981 = Sin(var1[11]);
  t1038 = -0.175248972904*t707;
  t1053 = -0.553471*t827;
  t1081 = t1038 + t1053;
  t1103 = 0.930418*t1081;
  t1106 = 0.444895486988*t707;
  t1116 = -0.218018*t827;
  t1136 = t1106 + t1116;
  t1137 = 0.366501*t1136;
  t1151 = t1103 + t1137;
  t1207 = -0.693671301908*t707;
  t1214 = 1. + t1207;
  t1236 = 0.366501*t1214;
  t1238 = 0.803828*t827;
  t1310 = t822 + t1238;
  t1324 = 0.930418*t1310;
  t1353 = t1236 + t1324;
  t1956 = Cos(var1[10]);
  t1970 = -1.*t1956;
  t1979 = 1. + t1970;
  t973 = 0.340999127418*t659*t952;
  t1003 = 0.930418*t981;
  t1019 = 0. + t1003;
  t1172 = t1019*t1151;
  t1173 = -0.8656776547239999*t659;
  t1196 = 1. + t1173;
  t1372 = t1196*t1353;
  t1392 = 0. + t973 + t1172 + t1372;
  t1514 = -0.134322983001*t659;
  t1532 = 1. + t1514;
  t1626 = t1532*t952;
  t1705 = -0.366501*t981;
  t1746 = 0. + t1705;
  t1756 = t1746*t1151;
  t1786 = 0.340999127418*t659*t1353;
  t1855 = 0. + t1626 + t1756 + t1786;
  t2034 = 0.366501*t981;
  t2062 = 0. + t2034;
  t2079 = t2062*t952;
  t2083 = -1.000000637725*t659;
  t2095 = 1. + t2083;
  t2109 = t2095*t1151;
  t2137 = -0.930418*t981;
  t2142 = 0. + t2137;
  t2179 = t2142*t1353;
  t2220 = 0. + t2079 + t2109 + t2179;
  t2286 = Cos(var1[9]);
  t2309 = -1.*t2286;
  t2333 = 1. + t2309;
  t333 = Cos(var1[8]);
  t339 = -1.*t333;
  t348 = 1. + t339;
  t471 = Sin(var1[9]);
  t546 = -0.930418*t540;
  t569 = 0. + t546;
  t1428 = t569*t1392;
  t1430 = 0.366501*t540;
  t1484 = 0. + t1430;
  t1935 = t1484*t1855;
  t1981 = -1.000000637725*t1979;
  t2030 = 1. + t1981;
  t2233 = t2030*t2220;
  t2238 = 0. + t1428 + t1935 + t2233;
  t2343 = 0.340999127418*t1979*t1392;
  t2349 = -0.134322983001*t1979;
  t2354 = 1. + t2349;
  t2378 = t2354*t1855;
  t2403 = -0.366501*t540;
  t2416 = 0. + t2403;
  t2426 = t2416*t2220;
  t2504 = 0. + t2343 + t2378 + t2426;
  t2516 = -0.8656776547239999*t1979;
  t2577 = 1. + t2516;
  t2602 = t2577*t1392;
  t2613 = 0.340999127418*t1979*t1855;
  t2641 = 0.930418*t540;
  t2675 = 0. + t2641;
  t2684 = t2675*t2220;
  t2747 = 0. + t2602 + t2613 + t2684;
  t133 = Cos(var1[7]);
  t247 = -1.*t133;
  t327 = 1. + t247;
  t476 = 0.930418*t471;
  t498 = 0. + t476;
  t2247 = t498*t2238;
  t2506 = 0.340999127418*t2333*t2504;
  t2510 = -0.8656776547239999*t2333;
  t2511 = 1. + t2510;
  t2750 = t2511*t2747;
  t2752 = 0. + t2247 + t2506 + t2750;
  t2778 = -0.366501*t471;
  t2841 = 0. + t2778;
  t2849 = t2841*t2238;
  t2886 = -0.134322983001*t2333;
  t2921 = 1. + t2886;
  t2944 = t2921*t2504;
  t2955 = 0.340999127418*t2333*t2747;
  t2959 = 0. + t2849 + t2944 + t2955;
  t2973 = -1.000000637725*t2333;
  t2978 = 1. + t2973;
  t3042 = t2978*t2238;
  t3064 = 0.366501*t471;
  t3074 = 0. + t3064;
  t3076 = t3074*t2504;
  t3087 = -0.930418*t471;
  t3106 = 0. + t3087;
  t3119 = t3106*t2747;
  t3121 = 0. + t3042 + t3076 + t3119;
  t3148 = Sin(var1[8]);
  t389 = -0.8656776547239999*t348;
  t418 = 1. + t389;
  t2760 = t418*t2752;
  t2962 = 0.340999127418*t348*t2959;
  t3159 = -0.930418*t3148;
  t3173 = 0. + t3159;
  t3179 = t3121*t3173;
  t3189 = 0. + t2760 + t2962 + t3179;
  t3235 = 0.340999127418*t348*t2752;
  t3277 = -0.134322983001*t348;
  t3337 = 1. + t3277;
  t3342 = t3337*t2959;
  t3346 = 0.366501*t3148;
  t3374 = 0. + t3346;
  t3380 = t3121*t3374;
  t3382 = 0. + t3235 + t3342 + t3380;
  t3461 = Sin(var1[7]);
  t3469 = -1.000000637725*t348;
  t3472 = 1. + t3469;
  t3474 = t3472*t3121;
  t3548 = -0.366501*t3148;
  t3569 = 0. + t3548;
  t3572 = t2959*t3569;
  t3574 = 0.930418*t3148;
  t3577 = 0. + t3574;
  t3665 = t2752*t3577;
  t3692 = 0. + t3474 + t3572 + t3665;
  t3756 = Cos(var1[6]);
  t3196 = -0.340999127418*t327*t3189;
  t3200 = -0.8656776547239999*t327;
  t3215 = 1. + t3200;
  t3392 = t3215*t3382;
  t3462 = -0.930418*t3461;
  t3463 = 0. + t3462;
  t3708 = t3463*t3692;
  t3751 = 0. + t3196 + t3392 + t3708;
  t89 = Sin(var1[6]);
  t3765 = -0.134322983001*t327;
  t3768 = 1. + t3765;
  t3776 = t3768*t3189;
  t3777 = -0.340999127418*t327*t3382;
  t3824 = -0.366501*t3461;
  t3828 = 0. + t3824;
  t3872 = t3828*t3692;
  t3892 = 0. + t3776 + t3777 + t3872;
  t3925 = Cos(var1[5]);
  t3752 = -1.*t89*t3751;
  t3906 = t3756*t3892;
  t3920 = 0. + t3752 + t3906;
  t77 = Sin(var1[5]);
  t3940 = t3756*t3751;
  t3955 = t89*t3892;
  t3960 = 0. + t3940 + t3955;
  t72 = Sin(var1[3]);
  t4223 = -0.353861996165*t707;
  t4226 = 1. + t4223;
  t4229 = -0.594863*t4226;
  t4237 = -0.294604*t1081;
  t4251 = 0.747896*t1136;
  t4252 = t4229 + t4237 + t4251;
  t4258 = -0.294604*t718;
  t4264 = 0.747896*t871;
  t4270 = 0.553471*t827;
  t4289 = t1038 + t4270;
  t4300 = -0.594863*t4289;
  t4303 = t4258 + t4264 + t4300;
  t4326 = 0.747896*t1214;
  t4327 = 0.218018*t827;
  t4333 = t1106 + t4327;
  t4336 = -0.594863*t4333;
  t4337 = -0.294604*t1310;
  t4340 = t4326 + t4336 + t4337;
  t4255 = t1019*t4252;
  t4320 = 0.340999127418*t659*t4303;
  t4343 = t1196*t4340;
  t4348 = 0. + t4255 + t4320 + t4343;
  t4356 = t1746*t4252;
  t4359 = t1532*t4303;
  t4361 = 0.340999127418*t659*t4340;
  t4362 = 0. + t4356 + t4359 + t4361;
  t4365 = t2095*t4252;
  t4373 = t2062*t4303;
  t4375 = t2142*t4340;
  t4390 = 0. + t4365 + t4373 + t4375;
  t4351 = t569*t4348;
  t4363 = t1484*t4362;
  t4393 = t2030*t4390;
  t4399 = 0. + t4351 + t4363 + t4393;
  t4404 = 0.340999127418*t1979*t4348;
  t4405 = t2354*t4362;
  t4410 = t2416*t4390;
  t4414 = 0. + t4404 + t4405 + t4410;
  t4430 = t2577*t4348;
  t4436 = 0.340999127418*t1979*t4362;
  t4445 = t2675*t4390;
  t4446 = 0. + t4430 + t4436 + t4445;
  t4400 = t498*t4399;
  t4416 = 0.340999127418*t2333*t4414;
  t4447 = t2511*t4446;
  t4455 = 0. + t4400 + t4416 + t4447;
  t4489 = t2841*t4399;
  t4494 = t2921*t4414;
  t4497 = 0.340999127418*t2333*t4446;
  t4498 = 0. + t4489 + t4494 + t4497;
  t4504 = t2978*t4399;
  t4506 = t3074*t4414;
  t4507 = t3106*t4446;
  t4508 = 0. + t4504 + t4506 + t4507;
  t4475 = t418*t4455;
  t4500 = 0.340999127418*t348*t4498;
  t4514 = t4508*t3173;
  t4525 = 0. + t4475 + t4500 + t4514;
  t4541 = 0.340999127418*t348*t4455;
  t4543 = t3337*t4498;
  t4546 = t4508*t3374;
  t4547 = 0. + t4541 + t4543 + t4546;
  t4554 = t3472*t4508;
  t4576 = t4498*t3569;
  t4582 = t4455*t3577;
  t4586 = 0. + t4554 + t4576 + t4582;
  t4527 = -0.340999127418*t327*t4525;
  t4552 = t3215*t4547;
  t4589 = t3463*t4586;
  t4601 = 0. + t4527 + t4552 + t4589;
  t4606 = t3768*t4525;
  t4615 = -0.340999127418*t327*t4547;
  t4620 = t3828*t4586;
  t4622 = 0. + t4606 + t4615 + t4620;
  t4035 = Cos(var1[3]);
  t4038 = Sin(var1[4]);
  t4604 = -1.*t89*t4601;
  t4627 = t3756*t4622;
  t4631 = 0. + t4604 + t4627;
  t4634 = t3756*t4601;
  t4636 = t89*t4622;
  t4641 = 0. + t4634 + t4636;
  t4087 = Cos(var1[4]);
  t4088 = 0.366501*t3461;
  t4091 = 0. + t4088;
  t4130 = 0.930418*t3461;
  t4148 = 0. + t4130;
  t4154 = -1.000000637725*t327;
  t4165 = 1. + t4154;
  t4695 = 0.803828*t4226;
  t4697 = -0.218018*t1081;
  t4701 = 0.553471*t1136;
  t4706 = t4695 + t4697 + t4701;
  t4713 = -0.218018*t718;
  t4715 = 0.553471*t871;
  t4717 = 0.803828*t4289;
  t4718 = t4713 + t4715 + t4717;
  t4724 = 0.553471*t1214;
  t4725 = 0.803828*t4333;
  t4730 = -0.218018*t1310;
  t4732 = t4724 + t4725 + t4730;
  t4709 = t1019*t4706;
  t4720 = 0.340999127418*t659*t4718;
  t4734 = t1196*t4732;
  t4735 = 0. + t4709 + t4720 + t4734;
  t4739 = t1746*t4706;
  t4740 = t1532*t4718;
  t4742 = 0.340999127418*t659*t4732;
  t4747 = 0. + t4739 + t4740 + t4742;
  t4753 = t2095*t4706;
  t4755 = t2062*t4718;
  t4765 = t2142*t4732;
  t4766 = 0. + t4753 + t4755 + t4765;
  t4736 = t569*t4735;
  t4751 = t1484*t4747;
  t4768 = t2030*t4766;
  t4769 = 0. + t4736 + t4751 + t4768;
  t4782 = 0.340999127418*t1979*t4735;
  t4786 = t2354*t4747;
  t4787 = t2416*t4766;
  t4789 = 0. + t4782 + t4786 + t4787;
  t4796 = t2577*t4735;
  t4804 = 0.340999127418*t1979*t4747;
  t4805 = t2675*t4766;
  t4812 = 0. + t4796 + t4804 + t4805;
  t4778 = t498*t4769;
  t4792 = 0.340999127418*t2333*t4789;
  t4819 = t2511*t4812;
  t4824 = 0. + t4778 + t4792 + t4819;
  t4827 = t2841*t4769;
  t4833 = t2921*t4789;
  t4834 = 0.340999127418*t2333*t4812;
  t4838 = 0. + t4827 + t4833 + t4834;
  t4846 = t2978*t4769;
  t4849 = t3074*t4789;
  t4857 = t3106*t4812;
  t4860 = 0. + t4846 + t4849 + t4857;
  t4825 = t418*t4824;
  t4845 = 0.340999127418*t348*t4838;
  t4866 = t4860*t3173;
  t4884 = 0. + t4825 + t4845 + t4866;
  t4933 = 0.340999127418*t348*t4824;
  t4935 = t3337*t4838;
  t4939 = t4860*t3374;
  t4949 = 0. + t4933 + t4935 + t4939;
  t4951 = t3472*t4860;
  t4953 = t4838*t3569;
  t4958 = t4824*t3577;
  t4961 = 0. + t4951 + t4953 + t4958;
  t4912 = -0.340999127418*t327*t4884;
  t4950 = t3215*t4949;
  t4965 = t3463*t4961;
  t4966 = 0. + t4912 + t4950 + t4965;
  t4980 = t3768*t4884;
  t4995 = -0.340999127418*t327*t4949;
  t5015 = t3828*t4961;
  t5030 = 0. + t4980 + t4995 + t5015;
  t4968 = -1.*t89*t4966;
  t5032 = t3756*t5030;
  t5035 = 0. + t4968 + t5032;
  t5043 = t3756*t4966;
  t5045 = t89*t5030;
  t5046 = 0. + t5043 + t5045;
  t3921 = -1.*t77*t3920;
  t3978 = t3925*t3960;
  t4007 = 0. + t3921 + t3978;
  t4042 = t3925*t3920;
  t4049 = t77*t3960;
  t4052 = 0. + t4042 + t4049;
  t4084 = t4038*t4052;
  t4094 = t4091*t3189;
  t4151 = t4148*t3382;
  t4200 = t4165*t3692;
  t4202 = 0. + t4094 + t4151 + t4200;
  t4205 = t4087*t4202;
  t4209 = 0. + t4084 + t4205;
  t4633 = -1.*t77*t4631;
  t4643 = t3925*t4641;
  t4648 = 0. + t4633 + t4643;
  t4650 = t3925*t4631;
  t4653 = t77*t4641;
  t4659 = 0. + t4650 + t4653;
  t4667 = t4038*t4659;
  t4673 = t4091*t4525;
  t4675 = t4148*t4547;
  t4676 = t4165*t4586;
  t4679 = 0. + t4673 + t4675 + t4676;
  t4683 = t4087*t4679;
  t4684 = 0. + t4667 + t4683;
  t5041 = -1.*t77*t5035;
  t5047 = t3925*t5046;
  t5048 = 0. + t5041 + t5047;
  t5053 = t3925*t5035;
  t5054 = t77*t5046;
  t5056 = 0. + t5053 + t5054;
  t5059 = t4038*t5056;
  t5062 = t4091*t4884;
  t5063 = t4148*t4949;
  t5068 = t4165*t4961;
  t5069 = 0. + t5062 + t5063 + t5068;
  t5072 = t4087*t5069;
  t5074 = 0. + t5059 + t5072;
  t5197 = -0.444895486988*t707;
  t5202 = 0.175248972904*t707;
  t5228 = 0.120666640478*t707;
  t5188 = -1.0464152525368286e-7*var1[12];
  t5190 = 0.061997*t4226;
  t5191 = 0.15748087543254813*t707;
  t5192 = 0.402602*t1081;
  t5196 = -0.792413*t1136;
  t5200 = t5197 + t4327;
  t5201 = -0.5286755231320001*t5200;
  t5206 = t5202 + t4270;
  t5209 = 0.29871295412*t5206;
  t5211 = t5188 + t5190 + t5191 + t5192 + t5196 + t5201 + t5209;
  t5215 = -7.20503013377005e-8*var1[12];
  t5217 = -0.792413*t1214;
  t5226 = -0.3667270384178674*t707;
  t5234 = t5228 + t832;
  t5235 = 0.29871295412*t5234;
  t5239 = t5197 + t1116;
  t5240 = 0.44503472296900004*t5239;
  t5241 = 0.061997*t4333;
  t5246 = 0.402602*t1310;
  t5255 = t5215 + t5217 + t5226 + t5235 + t5240 + t5241 + t5246;
  t5261 = 2.838136523330542e-8*var1[12];
  t5267 = 0.402602*t718;
  t5268 = 0.2845150083511607*t707;
  t5271 = -0.792413*t871;
  t5275 = t5202 + t1053;
  t5277 = 0.44503472296900004*t5275;
  t5279 = 0.061997*t4289;
  t5280 = t5228 + t1238;
  t5288 = -0.5286755231320001*t5280;
  t5290 = t5261 + t5267 + t5268 + t5271 + t5277 + t5279 + t5288;
  t5184 = 7.500378623168247e-8*var1[11];
  t5185 = 0.32429092013729516*t659;
  t5187 = 0.061996937216*t2062;
  t5212 = t1746*t5211;
  t5259 = 0.340999127418*t659*t5255;
  t5291 = t1532*t5290;
  t5292 = t5184 + t5185 + t5187 + t5212 + t5259 + t5291;
  t5296 = 2.95447451120871e-8*var1[11];
  t5298 = -0.8232613535360118*t659;
  t5301 = 0.061996937216*t2142;
  t5309 = t1019*t5211;
  t5312 = t1196*t5255;
  t5313 = 0.340999127418*t659*t5290;
  t5314 = t5296 + t5298 + t5301 + t5309 + t5312 + t5313;
  t5326 = 0.06199697675299678*t659;
  t5327 = 0.324290713329*t1746;
  t5330 = -0.823260828522*t1019;
  t5335 = t2095*t5211;
  t5336 = t2142*t5255;
  t5338 = t2062*t5290;
  t5340 = 0. + t5326 + t5327 + t5330 + t5335 + t5336 + t5338;
  t5177 = -0.26281014453449253*t1979;
  t5182 = 0.23261818470000004*t2416;
  t5183 = -0.5905363046000001*t2675;
  t5295 = t1484*t5292;
  t5324 = t569*t5314;
  t5345 = t2030*t5340;
  t5346 = 0. + t5177 + t5182 + t5183 + t5295 + t5324 + t5345;
  t5350 = 5.7930615939377813e-8*var1[10];
  t5354 = 0.23261833304643187*t1979;
  t5359 = -0.262809976934*t1484;
  t5362 = t2354*t5292;
  t5364 = 0.340999127418*t1979*t5314;
  t5370 = t2416*t5340;
  t5372 = t5350 + t5354 + t5359 + t5362 + t5364 + t5370;
  t5386 = 2.281945176511838e-8*var1[10];
  t5388 = -0.5905366811997648*t1979;
  t5390 = -0.262809976934*t569;
  t5392 = 0.340999127418*t1979*t5292;
  t5400 = t2577*t5314;
  t5402 = t2675*t5340;
  t5405 = t5386 + t5388 + t5390 + t5392 + t5400 + t5402;
  t5165 = -6.295460977284962e-8*var1[9];
  t5168 = -0.22023473313910558*t2333;
  t5175 = 0.039853013046*t3106;
  t5348 = t498*t5346;
  t5377 = 0.340999127418*t2333*t5372;
  t5407 = t2511*t5405;
  t5409 = t5165 + t5168 + t5175 + t5348 + t5377 + t5407;
  t5419 = -1.5981976069815686e-7*var1[9];
  t5421 = 0.08675267452931407*t2333;
  t5427 = 0.039853013046*t3074;
  t5430 = t2841*t5346;
  t5434 = t2921*t5372;
  t5435 = 0.340999127418*t2333*t5405;
  t5441 = t5419 + t5421 + t5427 + t5430 + t5434 + t5435;
  t5447 = 0.039853038461262744*t2333;
  t5451 = 0.086752619205*t2841;
  t5452 = -0.22023459268999998*t498;
  t5454 = t2978*t5346;
  t5455 = t3074*t5372;
  t5460 = t3106*t5405;
  t5462 = 0. + t5447 + t5451 + t5452 + t5454 + t5455 + t5460;
  t5159 = 3.2909349868922137e-7*var1[8];
  t5160 = 0.055653945343889656*t348;
  t5418 = 0.340999127418*t348*t5409;
  t5442 = t3337*t5441;
  t5444 = -0.045000372235*t3569;
  t5465 = t5462*t3374;
  t5480 = t5159 + t5160 + t5418 + t5442 + t5444 + t5465;
  t5489 = 1.296332362046933e-7*var1[8];
  t5491 = -0.14128592423750855*t348;
  t5494 = t418*t5409;
  t5511 = 0.340999127418*t348*t5441;
  t5515 = t5462*t3173;
  t5519 = -0.045000372235*t3577;
  t5520 = t5489 + t5491 + t5494 + t5511 + t5515 + t5519;
  t5527 = -0.04500040093286238*t348;
  t5533 = t3472*t5462;
  t5535 = -0.141285834136*t3173;
  t5540 = t5441*t3569;
  t5542 = 0.055653909852*t3374;
  t5545 = t5409*t3577;
  t5546 = 0. + t5527 + t5533 + t5535 + t5540 + t5542 + t5545;
  t5152 = 1.296332362046933e-7*var1[7];
  t5154 = 0.07877668146182712*t327;
  t5157 = -0.045000372235*t4148;
  t5484 = t3215*t5480;
  t5523 = -0.340999127418*t327*t5520;
  t5550 = t3463*t5546;
  t5551 = t5152 + t5154 + t5157 + t5484 + t5523 + t5550;
  t5560 = -3.2909349868922137e-7*var1[7];
  t5562 = 0.03103092645718495*t327;
  t5564 = -0.045000372235*t4091;
  t5568 = -0.340999127418*t327*t5480;
  t5578 = t3768*t5520;
  t5579 = t3828*t5546;
  t5585 = t5560 + t5562 + t5564 + t5568 + t5578 + t5579;
  t5149 = 0.091*t89;
  t5557 = -1.*t89*t5551;
  t5588 = t3756*t5585;
  t5591 = 0. + t5149 + t5557 + t5588;
  t5601 = -1.*t3756;
  t5605 = 1. + t5601;
  t5611 = 0.091*t5605;
  t5612 = t3756*t5551;
  t5614 = t89*t5585;
  t5618 = 0. + t5611 + t5612 + t5614;
  t5140 = t4087*t5056;
  t5143 = -1.*t4038*t5069;
  t5148 = 0. + t5140 + t5143;
  t5625 = t3925*t5591;
  t5627 = t77*t5618;
  t5628 = 0. + t5625 + t5627;
  t5635 = -0.04500040093286238*t327;
  t5637 = 0.07877663122399998*t3463;
  t5641 = 0.031030906668*t3828;
  t5646 = t4148*t5480;
  t5647 = t4091*t5520;
  t5650 = t4165*t5546;
  t5651 = 0. + t5635 + t5637 + t5641 + t5646 + t5647 + t5650;
  t5135 = t4087*t4659;
  t5136 = -1.*t4038*t4679;
  t5138 = 0. + t5135 + t5136;
  t5599 = -1.*t77*t5591;
  t5620 = t3925*t5618;
  t5621 = 0. + t5599 + t5620;
  t5633 = t4038*t5628;
  t5654 = t4087*t5651;
  t5656 = 0. + t5633 + t5654;
  t5663 = t4087*t5628;
  t5666 = -1.*t4038*t5651;
  t5667 = 0. + t5663 + t5666;
  t5128 = t4087*t4052;
  t5130 = -1.*t4038*t4202;
  t5134 = 0. + t5128 + t5130;
  t5674 = -1.*t4648*t5621;
  t5622 = t5048*t5621;
  t5691 = -1.*t5048*t5621;
  t5684 = t4007*t5621;
  t5716 = t4648*t5621;
  t5703 = -1.*t4007*t5621;
  t5754 = t5069*t5651;
  t5745 = -1.*t4679*t5651;
  t5781 = t4202*t5651;
  t5772 = -1.*t5069*t5651;
  t5799 = -1.*t4202*t5651;
  t5789 = t4679*t5651;
  t6085 = t4949*t5480;
  t6097 = t4884*t5520;
  t6100 = t4961*t5546;
  t6101 = t6085 + t6097 + t6100;
  t6104 = -1.*t4547*t5480;
  t6106 = -1.*t4525*t5520;
  t6110 = -1.*t4586*t5546;
  t6111 = t6104 + t6106 + t6110;
  t6147 = t3382*t5480;
  t6149 = t3189*t5520;
  t6153 = t3692*t5546;
  t6154 = t6147 + t6149 + t6153;
  t6157 = -1.*t4949*t5480;
  t6159 = -1.*t4884*t5520;
  t6160 = -1.*t4961*t5546;
  t6161 = t6157 + t6159 + t6160;
  t6206 = -1.*t3382*t5480;
  t6209 = -1.*t3189*t5520;
  t6210 = -1.*t3692*t5546;
  t6212 = t6206 + t6209 + t6210;
  t6219 = t4547*t5480;
  t6225 = t4525*t5520;
  t6229 = t4586*t5546;
  t6231 = t6219 + t6225 + t6229;
  t6295 = t4824*t5409;
  t6303 = t4838*t5441;
  t6304 = t4860*t5462;
  t6307 = t6295 + t6303 + t6304;
  t6311 = -1.*t4455*t5409;
  t6312 = -1.*t4498*t5441;
  t6326 = -1.*t4508*t5462;
  t6329 = t6311 + t6312 + t6326;
  t6373 = t2752*t5409;
  t6380 = t2959*t5441;
  t6385 = t3121*t5462;
  t6388 = t6373 + t6380 + t6385;
  t6393 = -1.*t4824*t5409;
  t6399 = -1.*t4838*t5441;
  t6404 = -1.*t4860*t5462;
  t6405 = t6393 + t6399 + t6404;
  t6436 = -1.*t2752*t5409;
  t6442 = -1.*t2959*t5441;
  t6443 = -1.*t3121*t5462;
  t6445 = t6436 + t6442 + t6443;
  t6449 = t4455*t5409;
  t6450 = t4498*t5441;
  t6456 = t4508*t5462;
  t6458 = t6449 + t6450 + t6456;
  t6538 = t4769*t5346;
  t6541 = t4789*t5372;
  t6543 = t4812*t5405;
  t6544 = t6538 + t6541 + t6543;
  t6549 = -1.*t4399*t5346;
  t6555 = -1.*t4414*t5372;
  t6565 = -1.*t4446*t5405;
  t6567 = t6549 + t6555 + t6565;
  t6614 = t2238*t5346;
  t6617 = t2504*t5372;
  t6618 = t2747*t5405;
  t6621 = t6614 + t6617 + t6618;
  t6626 = -1.*t4769*t5346;
  t6627 = -1.*t4789*t5372;
  t6628 = -1.*t4812*t5405;
  t6631 = t6626 + t6627 + t6628;
  t6668 = -1.*t2238*t5346;
  t6669 = -1.*t2504*t5372;
  t6673 = -1.*t2747*t5405;
  t6676 = t6668 + t6669 + t6673;
  t6691 = t4399*t5346;
  t6692 = t4414*t5372;
  t6698 = t4446*t5405;
  t6699 = t6691 + t6692 + t6698;
  t6762 = t4747*t5292;
  t6764 = t4735*t5314;
  t6769 = t4766*t5340;
  t6770 = t6762 + t6764 + t6769;
  t6781 = -1.*t4362*t5292;
  t6782 = -1.*t4348*t5314;
  t6783 = -1.*t4390*t5340;
  t6784 = t6781 + t6782 + t6783;
  t6806 = t1855*t5292;
  t6809 = t1392*t5314;
  t6811 = t2220*t5340;
  t6812 = t6806 + t6809 + t6811;
  t6815 = -1.*t4747*t5292;
  t6816 = -1.*t4735*t5314;
  t6817 = -1.*t4766*t5340;
  t6818 = t6815 + t6816 + t6817;
  t6860 = -1.*t1855*t5292;
  t6861 = -1.*t1392*t5314;
  t6862 = -1.*t2220*t5340;
  t6863 = t6860 + t6861 + t6862;
  t6866 = t4362*t5292;
  t6868 = t4348*t5314;
  t6870 = t4390*t5340;
  t6871 = t6866 + t6868 + t6870;
  t6927 = t4706*t5211;
  t6928 = t4732*t5255;
  t6929 = t4718*t5290;
  t6933 = t6927 + t6928 + t6929;
  t6935 = -1.*t4252*t5211;
  t6937 = -1.*t4340*t5255;
  t6938 = -1.*t4303*t5290;
  t6940 = t6935 + t6937 + t6938;
  t6981 = t1151*t5211;
  t6982 = t5255*t1353;
  t6984 = t952*t5290;
  t6987 = t6981 + t6982 + t6984;
  t6969 = -1.*t4706*t5211;
  t6970 = -1.*t4732*t5255;
  t6971 = -1.*t4718*t5290;
  t6973 = t6969 + t6970 + t6971;
  t7046 = -1.*t1151*t5211;
  t7050 = -1.*t5255*t1353;
  t7051 = -1.*t952*t5290;
  t7054 = t7046 + t7050 + t7051;
  t7030 = t4252*t5211;
  t7034 = t4340*t5255;
  t7035 = t4303*t5290;
  t7039 = t7030 + t7034 + t7035;
  p_output1[0]=0. + t4035*t4209 - 1.*t4007*t72;
  p_output1[1]=0. + t4035*t4684 - 1.*t4648*t72;
  p_output1[2]=0. + t4035*t5074 - 1.*t5048*t72;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t4007*t4035 + t4209*t72;
  p_output1[7]=0. + t4035*t4648 + t4684*t72;
  p_output1[8]=0. + t4035*t5048 + t5074*t72;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5134;
  p_output1[13]=t5138;
  p_output1[14]=t5148;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5138*(t5622 + t5074*t5656 + t5148*t5667) + t5148*(-1.*t4684*t5656 - 1.*t5138*t5667 + t5674);
  p_output1[19]=t5148*(t4209*t5656 + t5134*t5667 + t5684) + t5134*(-1.*t5074*t5656 - 1.*t5148*t5667 + t5691);
  p_output1[20]=t5138*(-1.*t4209*t5656 - 1.*t5134*t5667 + t5703) + t5134*(t4684*t5656 + t5138*t5667 + t5716);
  p_output1[21]=t5134;
  p_output1[22]=t5138;
  p_output1[23]=t5148;
  p_output1[24]=t5048*(-1.*t4659*t5628 + t5674 + t5745) + t4648*(t5622 + t5056*t5628 + t5754);
  p_output1[25]=t4007*(-1.*t5056*t5628 + t5691 + t5772) + t5048*(t4052*t5628 + t5684 + t5781);
  p_output1[26]=t4007*(t4659*t5628 + t5716 + t5789) + t4648*(-1.*t4052*t5628 + t5703 + t5799);
  p_output1[27]=t4007;
  p_output1[28]=t4648;
  p_output1[29]=t5048;
  p_output1[30]=t5069*(-1.*t4631*t5591 - 1.*t4641*t5618 + t5745) + t4679*(t5035*t5591 + t5046*t5618 + t5754);
  p_output1[31]=t4202*(-1.*t5035*t5591 - 1.*t5046*t5618 + t5772) + t5069*(t3920*t5591 + t3960*t5618 + t5781);
  p_output1[32]=t4202*(t4631*t5591 + t4641*t5618 + t5789) + t4679*(-1.*t3920*t5591 - 1.*t3960*t5618 + t5799);
  p_output1[33]=t4202;
  p_output1[34]=t4679;
  p_output1[35]=t5069;
  p_output1[36]=0.091*t3892 - 1.*t5069*(-1.*t4601*t5551 - 1.*t4622*t5585 + t5745) - 1.*t4679*(t4966*t5551 + t5030*t5585 + t5754);
  p_output1[37]=0.091*t4622 - 1.*t4202*(-1.*t4966*t5551 - 1.*t5030*t5585 + t5772) - 1.*t5069*(t3751*t5551 + t3892*t5585 + t5781);
  p_output1[38]=0.091*t5030 - 1.*t4202*(t4601*t5551 + t4622*t5585 + t5789) - 1.*t4679*(-1.*t3751*t5551 - 1.*t3892*t5585 + t5799);
  p_output1[39]=0. - 1.*t3189*t4091 - 1.*t3382*t4148 - 1.*t3692*t4165;
  p_output1[40]=0. - 1.*t4091*t4525 - 1.*t4148*t4547 - 1.*t4165*t4586;
  p_output1[41]=0. - 1.*t4091*t4884 - 1.*t4148*t4949 - 1.*t4165*t4961;
  p_output1[42]=-0.016493*t3189 - 0.041869*t3382 - 0.084668*t3692 - 0.930418*(t4525*t6101 + t4884*t6111) + 0.366501*(t4547*t6101 + t4949*t6111);
  p_output1[43]=-0.016493*t4525 - 0.041869*t4547 - 0.084668*t4586 - 0.930418*(t4884*t6154 + t3189*t6161) + 0.366501*(t4949*t6154 + t3382*t6161);
  p_output1[44]=-0.016493*t4884 - 0.041869*t4949 - 0.084668*t4961 - 0.930418*(t4525*t6212 + t3189*t6231) + 0.366501*(t4547*t6212 + t3382*t6231);
  p_output1[45]=0. - 0.930418*t3189 + 0.366501*t3382;
  p_output1[46]=0. - 0.930418*t4525 + 0.366501*t4547;
  p_output1[47]=0. - 0.930418*t4884 + 0.366501*t4949;
  p_output1[48]=-0.041869*t2752 + 0.016493*t2959 + 0.151852*t3121 + 0.366501*(t4455*t6307 + t4824*t6329) + 0.930418*(t4498*t6307 + t4838*t6329);
  p_output1[49]=-0.041869*t4455 + 0.016493*t4498 + 0.151852*t4508 + 0.366501*(t4824*t6388 + t2752*t6405) + 0.930418*(t4838*t6388 + t2959*t6405);
  p_output1[50]=-0.041869*t4824 + 0.016493*t4838 + 0.151852*t4860 + 0.366501*(t4455*t6445 + t2752*t6458) + 0.930418*(t4498*t6445 + t2959*t6458);
  p_output1[51]=0. + 0.366501*t2752 + 0.930418*t2959;
  p_output1[52]=0. + 0.366501*t4455 + 0.930418*t4498;
  p_output1[53]=0. + 0.366501*t4824 + 0.930418*t4838;
  p_output1[54]=-0.236705*t2238 + 0.014606*t2504 - 0.03708*t2747 - 0.930418*(t4414*t6544 + t4789*t6567) - 0.366501*(t4446*t6544 + t4812*t6567);
  p_output1[55]=-0.236705*t4399 + 0.014606*t4414 - 0.03708*t4446 - 0.930418*(t4789*t6621 + t2504*t6631) - 0.366501*(t4812*t6621 + t2747*t6631);
  p_output1[56]=-0.236705*t4769 + 0.014606*t4789 - 0.03708*t4812 - 0.930418*(t4414*t6676 + t2504*t6699) - 0.366501*(t4446*t6676 + t2747*t6699);
  p_output1[57]=0. - 0.930418*t2504 - 0.366501*t2747;
  p_output1[58]=0. - 0.930418*t4414 - 0.366501*t4446;
  p_output1[59]=0. - 0.930418*t4789 - 0.366501*t4812;
  p_output1[60]=0.244523*t1392 - 0.09632*t1855 - 0.6347*t2220 - 0.366501*(t4348*t6770 + t4735*t6784) - 0.930418*(t4362*t6770 + t4747*t6784);
  p_output1[61]=0.244523*t4348 - 0.09632*t4362 - 0.6347*t4390 - 0.366501*(t4735*t6812 + t1392*t6818) - 0.930418*(t4747*t6812 + t1855*t6818);
  p_output1[62]=0.244523*t4735 - 0.09632*t4747 - 0.6347*t4766 - 0.366501*(t4348*t6863 + t1392*t6871) - 0.930418*(t4362*t6863 + t1855*t6871);
  p_output1[63]=0. - 0.366501*t1392 - 0.930418*t1855;
  p_output1[64]=0. - 0.366501*t4348 - 0.930418*t4362;
  p_output1[65]=0. - 0.366501*t4735 - 0.930418*t4747;
  p_output1[66]=-0.884829*t1151 - 0.057683*t1353 - 0.930418*(t4303*t6933 + t4718*t6940) - 0.366501*(t4340*t6933 + t4732*t6940) + 0.022722*t952;
  p_output1[67]=-0.884829*t4252 + 0.022722*t4303 - 0.057683*t4340 - 0.366501*(t1353*t6973 + t4732*t6987) - 0.930418*(t4718*t6987 + t6973*t952);
  p_output1[68]=-0.884829*t4706 + 0.022722*t4718 - 0.057683*t4732 - 0.366501*(t1353*t7039 + t4340*t7054) - 0.930418*(t4303*t7054 + t7039*t952);
  p_output1[69]=0. - 0.366501*t1353 - 0.930418*t952;
  p_output1[70]=0. - 0.930418*t4303 - 0.366501*t4340;
  p_output1[71]=0. - 0.930418*t4718 - 0.366501*t4732;
  p_output1[72]=1.4054567047602773e-6;
  p_output1[73]=3.9816458022312595e-7;
  p_output1[74]=1.185756548505168e-9;
  p_output1[75]=-1.9655299995924302e-7;
  p_output1[76]=1.8632400006213246e-7;
  p_output1[77]=1.000001449749;
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



void Jb_toe_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
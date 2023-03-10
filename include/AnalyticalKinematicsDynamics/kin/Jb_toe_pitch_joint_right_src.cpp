/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:46:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_toe_pitch_joint_right_src.h"

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
  double t409;
  double t413;
  double t437;
  double t284;
  double t511;
  double t863;
  double t872;
  double t891;
  double t451;
  double t459;
  double t472;
  double t501;
  double t523;
  double t568;
  double t647;
  double t683;
  double t740;
  double t753;
  double t784;
  double t792;
  double t799;
  double t820;
  double t837;
  double t849;
  double t954;
  double t958;
  double t982;
  double t985;
  double t986;
  double t1042;
  double t1082;
  double t1168;
  double t1185;
  double t1223;
  double t1276;
  double t1278;
  double t1289;
  double t175;
  double t248;
  double t290;
  double t349;
  double t684;
  double t692;
  double t737;
  double t850;
  double t912;
  double t951;
  double t1228;
  double t1249;
  double t1294;
  double t1296;
  double t1301;
  double t1308;
  double t1325;
  double t1327;
  double t1328;
  double t1351;
  double t1498;
  double t1512;
  double t1553;
  double t1578;
  double t1586;
  double t1591;
  double t1606;
  double t1611;
  double t1899;
  double t1901;
  double t1938;
  double t281;
  double t283;
  double t1275;
  double t1428;
  double t1437;
  double t1456;
  double t1618;
  double t1619;
  double t1784;
  double t1797;
  double t1808;
  double t1810;
  double t1813;
  double t1820;
  double t1823;
  double t1858;
  double t2038;
  double t2053;
  double t2081;
  double t2087;
  double t2116;
  double t2133;
  double t2135;
  double t2153;
  double t2172;
  double t2183;
  double t2224;
  double t2230;
  double t2236;
  double t106;
  double t182;
  double t225;
  double t1638;
  double t1654;
  double t1664;
  double t1876;
  double t1985;
  double t2010;
  double t2200;
  double t2203;
  double t2237;
  double t2242;
  double t2260;
  double t2272;
  double t2333;
  double t2351;
  double t2363;
  double t2415;
  double t2455;
  double t2473;
  double t2480;
  double t2481;
  double t2536;
  double t2615;
  double t2628;
  double t2713;
  double t2769;
  double t126;
  double t163;
  double t2215;
  double t2445;
  double t2447;
  double t2452;
  double t2715;
  double t2717;
  double t104;
  double t2786;
  double t2811;
  double t2857;
  double t2878;
  double t2886;
  double t2887;
  double t2905;
  double t2911;
  double t46;
  double t2948;
  double t2991;
  double t3001;
  double t2741;
  double t2914;
  double t2915;
  double t3046;
  double t31;
  double t3524;
  double t3536;
  double t3553;
  double t3562;
  double t3590;
  double t3595;
  double t3610;
  double t3616;
  double t3634;
  double t3635;
  double t3667;
  double t3670;
  double t3573;
  double t3631;
  double t3677;
  double t3682;
  double t3700;
  double t3734;
  double t3736;
  double t3737;
  double t3819;
  double t3820;
  double t3833;
  double t3840;
  double t3683;
  double t3769;
  double t3863;
  double t3919;
  double t3938;
  double t3946;
  double t3954;
  double t3964;
  double t3989;
  double t4014;
  double t4044;
  double t4051;
  double t3926;
  double t3987;
  double t4061;
  double t4068;
  double t4077;
  double t4115;
  double t4118;
  double t4125;
  double t4139;
  double t4151;
  double t4159;
  double t4173;
  double t4076;
  double t4138;
  double t4199;
  double t4201;
  double t4280;
  double t4284;
  double t4287;
  double t4288;
  double t3123;
  double t3142;
  double t3168;
  double t3173;
  double t3210;
  double t3373;
  double t3377;
  double t3391;
  double t3416;
  double t4332;
  double t4344;
  double t4345;
  double t4235;
  double t4289;
  double t4325;
  double t4549;
  double t4550;
  double t4571;
  double t4494;
  double t4513;
  double t4522;
  double t4604;
  double t4606;
  double t4612;
  double t4532;
  double t4573;
  double t4629;
  double t4630;
  double t4655;
  double t4683;
  double t4711;
  double t4714;
  double t4732;
  double t4737;
  double t4739;
  double t4744;
  double t4652;
  double t4723;
  double t4754;
  double t4762;
  double t4813;
  double t4817;
  double t4819;
  double t4821;
  double t4836;
  double t4840;
  double t4851;
  double t4854;
  double t4768;
  double t4833;
  double t4863;
  double t4872;
  double t4883;
  double t4891;
  double t4899;
  double t4901;
  double t4909;
  double t4912;
  double t4925;
  double t4927;
  double t4881;
  double t4906;
  double t4934;
  double t4950;
  double t4959;
  double t4962;
  double t4969;
  double t4970;
  double t4981;
  double t4984;
  double t4986;
  double t4958;
  double t4971;
  double t4973;
  double t2931;
  double t3087;
  double t3111;
  double t3185;
  double t3376;
  double t3394;
  double t3402;
  double t3408;
  double t3434;
  double t3451;
  double t3463;
  double t3474;
  double t3503;
  double t4330;
  double t4381;
  double t4388;
  double t4407;
  double t4409;
  double t4417;
  double t4423;
  double t4429;
  double t4430;
  double t4435;
  double t4447;
  double t4458;
  double t4468;
  double t4975;
  double t4987;
  double t4991;
  double t5000;
  double t5001;
  double t5002;
  double t5003;
  double t5004;
  double t5008;
  double t5015;
  double t5022;
  double t5034;
  double t5048;
  double t5141;
  double t5152;
  double t5158;
  double t5219;
  double t5221;
  double t5223;
  double t5226;
  double t5228;
  double t5235;
  double t5244;
  double t5245;
  double t5249;
  double t5251;
  double t5252;
  double t5255;
  double t5262;
  double t5267;
  double t5268;
  double t5271;
  double t5273;
  double t5282;
  double t5285;
  double t5210;
  double t5213;
  double t5214;
  double t5238;
  double t5265;
  double t5287;
  double t5288;
  double t5292;
  double t5301;
  double t5302;
  double t5308;
  double t5313;
  double t5314;
  double t5315;
  double t5317;
  double t5320;
  double t5322;
  double t5324;
  double t5332;
  double t5337;
  double t5339;
  double t5180;
  double t5182;
  double t5205;
  double t5291;
  double t5316;
  double t5341;
  double t5342;
  double t5356;
  double t5362;
  double t5369;
  double t5370;
  double t5371;
  double t5373;
  double t5377;
  double t5384;
  double t5387;
  double t5396;
  double t5405;
  double t5407;
  double t5409;
  double t5429;
  double t5174;
  double t5177;
  double t5178;
  double t5352;
  double t5380;
  double t5432;
  double t5433;
  double t5443;
  double t5444;
  double t5452;
  double t5455;
  double t5458;
  double t5461;
  double t5463;
  double t5474;
  double t5477;
  double t5481;
  double t5487;
  double t5489;
  double t5491;
  double t5492;
  double t5168;
  double t5169;
  double t5172;
  double t5440;
  double t5471;
  double t5494;
  double t5497;
  double t5502;
  double t5503;
  double t5511;
  double t5514;
  double t5515;
  double t5523;
  double t5527;
  double t5131;
  double t5139;
  double t5140;
  double t5537;
  double t5540;
  double t5543;
  double t5549;
  double t5160;
  double t5163;
  double t5166;
  double t5501;
  double t5530;
  double t5533;
  double t5559;
  double t5565;
  double t5566;
  double t5567;
  double t5575;
  double t5581;
  double t5583;
  double t5601;
  double t5602;
  double t5603;
  double t5536;
  double t5555;
  double t5556;
  double t5584;
  double t5614;
  double t5622;
  double t5628;
  double t5639;
  double t5642;
  double t5114;
  double t5116;
  double t5128;
  double t5558;
  double t5649;
  double t5669;
  double t5680;
  double t5691;
  double t5704;
  double t5732;
  double t5724;
  double t5756;
  double t5743;
  double t5780;
  double t5765;
  double t6027;
  double t6031;
  double t6033;
  double t6036;
  double t6041;
  double t6043;
  double t6044;
  double t6047;
  double t6076;
  double t6078;
  double t6079;
  double t6080;
  double t6083;
  double t6084;
  double t6088;
  double t6089;
  double t6138;
  double t6141;
  double t6142;
  double t6143;
  double t6157;
  double t6158;
  double t6160;
  double t6170;
  double t6211;
  double t6212;
  double t6221;
  double t6222;
  double t6224;
  double t6225;
  double t6233;
  double t6234;
  double t6262;
  double t6266;
  double t6267;
  double t6268;
  double t6276;
  double t6279;
  double t6281;
  double t6298;
  double t6338;
  double t6346;
  double t6350;
  double t6352;
  double t6357;
  double t6358;
  double t6359;
  double t6360;
  double t6415;
  double t6416;
  double t6418;
  double t6420;
  double t6427;
  double t6428;
  double t6430;
  double t6434;
  double t6481;
  double t6505;
  double t6506;
  double t6509;
  double t6515;
  double t6516;
  double t6521;
  double t6523;
  double t6568;
  double t6570;
  double t6574;
  double t6577;
  double t6579;
  double t6580;
  double t6581;
  double t6582;
  double t6656;
  double t6659;
  double t6660;
  double t6662;
  double t6668;
  double t6671;
  double t6674;
  double t6678;
  double t6709;
  double t6712;
  double t6726;
  double t6733;
  double t6751;
  double t6753;
  double t6754;
  double t6757;
  double t6805;
  double t6807;
  double t6808;
  double t6812;
  double t6815;
  double t6816;
  double t6817;
  double t6819;
  t409 = Cos(var1[22]);
  t413 = -1.*t409;
  t437 = 1. + t413;
  t284 = Sin(var1[21]);
  t511 = Sin(var1[22]);
  t863 = Cos(var1[21]);
  t872 = -1.*t863;
  t891 = 1. + t872;
  t451 = -0.8656776547239999*t437;
  t459 = 1. + t451;
  t472 = 0.553471*t459;
  t501 = -0.07434394776141752*t437;
  t523 = -0.930418*t511;
  t568 = 0. + t523;
  t647 = 0.803828*t568;
  t683 = t472 + t501 + t647;
  t740 = -0.134322983001*t437;
  t753 = 1. + t740;
  t784 = 0.218018*t753;
  t792 = -0.18873312805116788*t437;
  t799 = -0.366501*t511;
  t820 = 0. + t799;
  t837 = 0.803828*t820;
  t849 = t784 + t792 + t837;
  t954 = -1.000000637725*t437;
  t958 = 1. + t954;
  t982 = 0.803828*t958;
  t985 = 0.366501*t511;
  t986 = 0. + t985;
  t1042 = 0.218018*t986;
  t1082 = 0.930418*t511;
  t1168 = 0. + t1082;
  t1185 = 0.553471*t1168;
  t1223 = t982 + t1042 + t1185;
  t1276 = Cos(var1[20]);
  t1278 = -1.*t1276;
  t1289 = 1. + t1278;
  t175 = Sin(var1[19]);
  t248 = Sin(var1[20]);
  t290 = 0.930418*t284;
  t349 = 0. + t290;
  t684 = t349*t683;
  t692 = 0.366501*t284;
  t737 = 0. + t692;
  t850 = t737*t849;
  t912 = -1.000000637725*t891;
  t951 = 1. + t912;
  t1228 = t951*t1223;
  t1249 = 0. + t684 + t850 + t1228;
  t1294 = -0.8656776547239999*t891;
  t1296 = 1. + t1294;
  t1301 = t1296*t683;
  t1308 = -0.340999127418*t891*t849;
  t1325 = -0.930418*t284;
  t1327 = 0. + t1325;
  t1328 = t1327*t1223;
  t1351 = 0. + t1301 + t1308 + t1328;
  t1498 = -0.340999127418*t891*t683;
  t1512 = -0.134322983001*t891;
  t1553 = 1. + t1512;
  t1578 = t1553*t849;
  t1586 = -0.366501*t284;
  t1591 = 0. + t1586;
  t1606 = t1591*t1223;
  t1611 = 0. + t1498 + t1578 + t1606;
  t1899 = Cos(var1[19]);
  t1901 = -1.*t1899;
  t1938 = 1. + t1901;
  t281 = -0.366501*t248;
  t283 = 0. + t281;
  t1275 = t283*t1249;
  t1428 = -0.340999127418*t1289*t1351;
  t1437 = -0.134322983001*t1289;
  t1456 = 1. + t1437;
  t1618 = t1456*t1611;
  t1619 = 0. + t1275 + t1428 + t1618;
  t1784 = -0.930418*t248;
  t1797 = 0. + t1784;
  t1808 = t1797*t1249;
  t1810 = -0.8656776547239999*t1289;
  t1813 = 1. + t1810;
  t1820 = t1813*t1351;
  t1823 = -0.340999127418*t1289*t1611;
  t1858 = 0. + t1808 + t1820 + t1823;
  t2038 = -1.000000637725*t1289;
  t2053 = 1. + t2038;
  t2081 = t2053*t1249;
  t2087 = 0.930418*t248;
  t2116 = 0. + t2087;
  t2133 = t2116*t1351;
  t2135 = 0.366501*t248;
  t2153 = 0. + t2135;
  t2172 = t2153*t1611;
  t2183 = 0. + t2081 + t2133 + t2172;
  t2224 = Cos(var1[18]);
  t2230 = -1.*t2224;
  t2236 = 1. + t2230;
  t106 = Sin(var1[18]);
  t182 = -0.366501*t175;
  t225 = 0. + t182;
  t1638 = t225*t1619;
  t1654 = -0.930418*t175;
  t1664 = 0. + t1654;
  t1876 = t1664*t1858;
  t1985 = -1.000000637725*t1938;
  t2010 = 1. + t1985;
  t2200 = t2010*t2183;
  t2203 = 0. + t1638 + t1876 + t2200;
  t2237 = -0.134322983001*t1938;
  t2242 = 1. + t2237;
  t2260 = t2242*t1619;
  t2272 = -0.340999127418*t1938*t1858;
  t2333 = 0.366501*t175;
  t2351 = 0. + t2333;
  t2363 = t2351*t2183;
  t2415 = 0. + t2260 + t2272 + t2363;
  t2455 = -0.340999127418*t1938*t1619;
  t2473 = -0.8656776547239999*t1938;
  t2480 = 1. + t2473;
  t2481 = t2480*t1858;
  t2536 = 0.930418*t175;
  t2615 = 0. + t2536;
  t2628 = t2615*t2183;
  t2713 = 0. + t2455 + t2481 + t2628;
  t2769 = Cos(var1[17]);
  t126 = 0.366501*t106;
  t163 = 0. + t126;
  t2215 = t163*t2203;
  t2445 = 0.340999127418*t2236*t2415;
  t2447 = -0.134322983001*t2236;
  t2452 = 1. + t2447;
  t2715 = t2452*t2713;
  t2717 = 0. + t2215 + t2445 + t2715;
  t104 = Sin(var1[17]);
  t2786 = -0.930418*t106;
  t2811 = 0. + t2786;
  t2857 = t2811*t2203;
  t2878 = -0.8656776547239999*t2236;
  t2886 = 1. + t2878;
  t2887 = t2886*t2415;
  t2905 = 0.340999127418*t2236*t2713;
  t2911 = 0. + t2857 + t2887 + t2905;
  t46 = Cos(var1[5]);
  t2948 = t2769*t2717;
  t2991 = -1.*t104*t2911;
  t3001 = 0. + t2948 + t2991;
  t2741 = t104*t2717;
  t2914 = t2769*t2911;
  t2915 = 0. + t2741 + t2914;
  t3046 = Sin(var1[5]);
  t31 = Sin(var1[3]);
  t3524 = -0.747896*t459;
  t3536 = 0.10045970693385246*t437;
  t3553 = 0.594863*t568;
  t3562 = t3524 + t3536 + t3553;
  t3590 = -0.294604*t753;
  t3595 = 0.2550318833994125*t437;
  t3610 = 0.594863*t820;
  t3616 = t3590 + t3595 + t3610;
  t3634 = 0.594863*t958;
  t3635 = -0.294604*t986;
  t3667 = -0.747896*t1168;
  t3670 = t3634 + t3635 + t3667;
  t3573 = t349*t3562;
  t3631 = t737*t3616;
  t3677 = t951*t3670;
  t3682 = 0. + t3573 + t3631 + t3677;
  t3700 = t1296*t3562;
  t3734 = -0.340999127418*t891*t3616;
  t3736 = t1327*t3670;
  t3737 = 0. + t3700 + t3734 + t3736;
  t3819 = -0.340999127418*t891*t3562;
  t3820 = t1553*t3616;
  t3833 = t1591*t3670;
  t3840 = 0. + t3819 + t3820 + t3833;
  t3683 = t283*t3682;
  t3769 = -0.340999127418*t1289*t3737;
  t3863 = t1456*t3840;
  t3919 = 0. + t3683 + t3769 + t3863;
  t3938 = t1797*t3682;
  t3946 = t1813*t3737;
  t3954 = -0.340999127418*t1289*t3840;
  t3964 = 0. + t3938 + t3946 + t3954;
  t3989 = t2053*t3682;
  t4014 = t2116*t3737;
  t4044 = t2153*t3840;
  t4051 = 0. + t3989 + t4014 + t4044;
  t3926 = t225*t3919;
  t3987 = t1664*t3964;
  t4061 = t2010*t4051;
  t4068 = 0. + t3926 + t3987 + t4061;
  t4077 = t2242*t3919;
  t4115 = -0.340999127418*t1938*t3964;
  t4118 = t2351*t4051;
  t4125 = 0. + t4077 + t4115 + t4118;
  t4139 = -0.340999127418*t1938*t3919;
  t4151 = t2480*t3964;
  t4159 = t2615*t4051;
  t4173 = 0. + t4139 + t4151 + t4159;
  t4076 = t163*t4068;
  t4138 = 0.340999127418*t2236*t4125;
  t4199 = t2452*t4173;
  t4201 = 0. + t4076 + t4138 + t4199;
  t4280 = t2811*t4068;
  t4284 = t2886*t4125;
  t4287 = 0.340999127418*t2236*t4173;
  t4288 = 0. + t4280 + t4284 + t4287;
  t3123 = Cos(var1[3]);
  t3142 = Cos(var1[4]);
  t3168 = -1.000000637725*t2236;
  t3173 = 1. + t3168;
  t3210 = 0.930418*t106;
  t3373 = 0. + t3210;
  t3377 = -0.366501*t106;
  t3391 = 0. + t3377;
  t3416 = Sin(var1[4]);
  t4332 = t2769*t4201;
  t4344 = -1.*t104*t4288;
  t4345 = 0. + t4332 + t4344;
  t4235 = t104*t4201;
  t4289 = t2769*t4288;
  t4325 = 0. + t4235 + t4289;
  t4549 = -0.366501*t459;
  t4550 = -0.3172717261340007*t437;
  t4571 = t4549 + t4550;
  t4494 = 0.930418*t753;
  t4513 = 0.12497652119782442*t437;
  t4522 = t4494 + t4513;
  t4604 = 0.930418*t986;
  t4606 = -0.366501*t1168;
  t4612 = t4604 + t4606;
  t4532 = t4522*t737;
  t4573 = t4571*t349;
  t4629 = t951*t4612;
  t4630 = 0. + t4532 + t4573 + t4629;
  t4655 = t1296*t4571;
  t4683 = -0.340999127418*t891*t4522;
  t4711 = t1327*t4612;
  t4714 = 0. + t4655 + t4683 + t4711;
  t4732 = -0.340999127418*t891*t4571;
  t4737 = t1553*t4522;
  t4739 = t1591*t4612;
  t4744 = 0. + t4732 + t4737 + t4739;
  t4652 = t283*t4630;
  t4723 = -0.340999127418*t1289*t4714;
  t4754 = t1456*t4744;
  t4762 = 0. + t4652 + t4723 + t4754;
  t4813 = t1797*t4630;
  t4817 = t1813*t4714;
  t4819 = -0.340999127418*t1289*t4744;
  t4821 = 0. + t4813 + t4817 + t4819;
  t4836 = t2053*t4630;
  t4840 = t2116*t4714;
  t4851 = t2153*t4744;
  t4854 = 0. + t4836 + t4840 + t4851;
  t4768 = t225*t4762;
  t4833 = t1664*t4821;
  t4863 = t2010*t4854;
  t4872 = 0. + t4768 + t4833 + t4863;
  t4883 = t2242*t4762;
  t4891 = -0.340999127418*t1938*t4821;
  t4899 = t2351*t4854;
  t4901 = 0. + t4883 + t4891 + t4899;
  t4909 = -0.340999127418*t1938*t4762;
  t4912 = t2480*t4821;
  t4925 = t2615*t4854;
  t4927 = 0. + t4909 + t4912 + t4925;
  t4881 = t163*t4872;
  t4906 = 0.340999127418*t2236*t4901;
  t4934 = t2452*t4927;
  t4950 = 0. + t4881 + t4906 + t4934;
  t4959 = t2811*t4872;
  t4962 = t2886*t4901;
  t4969 = 0.340999127418*t2236*t4927;
  t4970 = 0. + t4959 + t4962 + t4969;
  t4981 = t2769*t4950;
  t4984 = -1.*t104*t4970;
  t4986 = 0. + t4981 + t4984;
  t4958 = t104*t4950;
  t4971 = t2769*t4970;
  t4973 = 0. + t4958 + t4971;
  t2931 = t46*t2915;
  t3087 = -1.*t3001*t3046;
  t3111 = 0. + t2931 + t3087;
  t3185 = t3173*t2203;
  t3376 = t3373*t2415;
  t3394 = t3391*t2713;
  t3402 = 0. + t3185 + t3376 + t3394;
  t3408 = t3142*t3402;
  t3434 = t46*t3001;
  t3451 = t2915*t3046;
  t3463 = 0. + t3434 + t3451;
  t3474 = t3416*t3463;
  t3503 = 0. + t3408 + t3474;
  t4330 = t46*t4325;
  t4381 = -1.*t4345*t3046;
  t4388 = 0. + t4330 + t4381;
  t4407 = t3173*t4068;
  t4409 = t3373*t4125;
  t4417 = t3391*t4173;
  t4423 = 0. + t4407 + t4409 + t4417;
  t4429 = t3142*t4423;
  t4430 = t46*t4345;
  t4435 = t4325*t3046;
  t4447 = 0. + t4430 + t4435;
  t4458 = t3416*t4447;
  t4468 = 0. + t4429 + t4458;
  t4975 = t46*t4973;
  t4987 = -1.*t4986*t3046;
  t4991 = 0. + t4975 + t4987;
  t5000 = t3173*t4872;
  t5001 = t3373*t4901;
  t5002 = t3391*t4927;
  t5003 = 0. + t5000 + t5001 + t5002;
  t5004 = t3142*t5003;
  t5008 = t46*t4986;
  t5015 = t4973*t3046;
  t5022 = 0. + t5008 + t5015;
  t5034 = t3416*t5022;
  t5048 = 0. + t5004 + t5034;
  t5141 = -1.*t5003*t3416;
  t5152 = t3142*t5022;
  t5158 = 0. + t5141 + t5152;
  t5219 = 7.500378623168247e-8*var1[22];
  t5221 = -0.402602*t753;
  t5223 = -0.054078778582615505*t437;
  t5226 = 0.061997*t820;
  t5228 = 0.061996937216*t986;
  t5235 = t5219 + t5221 + t5223 + t5226 + t5228;
  t5244 = 0.061997*t958;
  t5245 = 0.06199697675299678*t437;
  t5249 = -0.823260828522*t568;
  t5251 = -0.324290713329*t820;
  t5252 = -0.402602*t986;
  t5255 = -0.792413*t1168;
  t5262 = 0. + t5244 + t5245 + t5249 + t5251 + t5252 + t5255;
  t5267 = -2.95447451120871e-8*var1[22];
  t5268 = -0.792413*t459;
  t5271 = -0.6859744228392701*t437;
  t5273 = 0.061997*t568;
  t5282 = 0.061996937216*t1168;
  t5285 = t5267 + t5268 + t5271 + t5273 + t5282;
  t5210 = -2.281945176511838e-8*var1[21];
  t5213 = -0.5905366811997648*t891;
  t5214 = -0.262809976934*t349;
  t5238 = -0.340999127418*t891*t5235;
  t5265 = t1327*t5262;
  t5287 = t1296*t5285;
  t5288 = t5210 + t5213 + t5214 + t5238 + t5265 + t5287;
  t5292 = 5.7930615939377813e-8*var1[21];
  t5301 = -0.23261833304643187*t891;
  t5302 = -0.262809976934*t737;
  t5308 = t1553*t5235;
  t5313 = t1591*t5262;
  t5314 = -0.340999127418*t891*t5285;
  t5315 = t5292 + t5301 + t5302 + t5308 + t5313 + t5314;
  t5317 = -0.26281014453449253*t891;
  t5320 = -0.5905363046000001*t1327;
  t5322 = -0.23261818470000004*t1591;
  t5324 = t737*t5235;
  t5332 = t951*t5262;
  t5337 = t349*t5285;
  t5339 = 0. + t5317 + t5320 + t5322 + t5324 + t5332 + t5337;
  t5180 = 0.039853038461262744*t1289;
  t5182 = -0.22023459268999998*t1797;
  t5205 = -0.086752619205*t283;
  t5291 = t2116*t5288;
  t5316 = t2153*t5315;
  t5341 = t2053*t5339;
  t5342 = 0. + t5180 + t5182 + t5205 + t5291 + t5316 + t5341;
  t5356 = 6.295460977284962e-8*var1[20];
  t5362 = -0.22023473313910558*t1289;
  t5369 = 0.039853013046*t2116;
  t5370 = t1813*t5288;
  t5371 = -0.340999127418*t1289*t5315;
  t5373 = t1797*t5339;
  t5377 = t5356 + t5362 + t5369 + t5370 + t5371 + t5373;
  t5384 = -1.5981976069815686e-7*var1[20];
  t5387 = -0.08675267452931407*t1289;
  t5396 = 0.039853013046*t2153;
  t5405 = -0.340999127418*t1289*t5288;
  t5407 = t1456*t5315;
  t5409 = t283*t5339;
  t5429 = t5384 + t5387 + t5396 + t5405 + t5407 + t5409;
  t5174 = 3.2909349868922137e-7*var1[19];
  t5177 = -0.055653945343889656*t1938;
  t5178 = -0.045000372235*t225;
  t5352 = t2351*t5342;
  t5380 = -0.340999127418*t1938*t5377;
  t5432 = t2242*t5429;
  t5433 = t5174 + t5177 + t5178 + t5352 + t5380 + t5432;
  t5443 = -1.296332362046933e-7*var1[19];
  t5444 = -0.14128592423750855*t1938;
  t5452 = -0.045000372235*t1664;
  t5455 = t2615*t5342;
  t5458 = t2480*t5377;
  t5461 = -0.340999127418*t1938*t5429;
  t5463 = t5443 + t5444 + t5452 + t5455 + t5458 + t5461;
  t5474 = -0.04500040093286238*t1938;
  t5477 = -0.055653909852*t2351;
  t5481 = -0.141285834136*t2615;
  t5487 = t2010*t5342;
  t5489 = t1664*t5377;
  t5491 = t225*t5429;
  t5492 = 0. + t5474 + t5477 + t5481 + t5487 + t5489 + t5491;
  t5168 = 1.296332362046933e-7*var1[18];
  t5169 = -0.07877668146182712*t2236;
  t5172 = -0.045000372235*t3373;
  t5440 = t2886*t5433;
  t5471 = 0.340999127418*t2236*t5463;
  t5494 = t2811*t5492;
  t5497 = t5168 + t5169 + t5172 + t5440 + t5471 + t5494;
  t5502 = 3.2909349868922137e-7*var1[18];
  t5503 = 0.03103092645718495*t2236;
  t5511 = -0.045000372235*t3391;
  t5514 = 0.340999127418*t2236*t5433;
  t5515 = t2452*t5463;
  t5523 = t163*t5492;
  t5527 = t5502 + t5503 + t5511 + t5514 + t5515 + t5523;
  t5131 = -1.*t4423*t3416;
  t5139 = t3142*t4447;
  t5140 = 0. + t5131 + t5139;
  t5537 = -0.091*t104;
  t5540 = -1.*t104*t5497;
  t5543 = t2769*t5527;
  t5549 = 0. + t5537 + t5540 + t5543;
  t5160 = -1.*t2769;
  t5163 = 1. + t5160;
  t5166 = -0.091*t5163;
  t5501 = t2769*t5497;
  t5530 = t104*t5527;
  t5533 = 0. + t5166 + t5501 + t5530;
  t5559 = -0.04500040093286238*t2236;
  t5565 = -0.07877663122399998*t2811;
  t5566 = 0.031030906668*t163;
  t5567 = t3373*t5433;
  t5575 = t3391*t5463;
  t5581 = t3173*t5492;
  t5583 = 0. + t5559 + t5565 + t5566 + t5567 + t5575 + t5581;
  t5601 = t46*t5549;
  t5602 = t5533*t3046;
  t5603 = 0. + t5601 + t5602;
  t5536 = t46*t5533;
  t5555 = -1.*t5549*t3046;
  t5556 = 0. + t5536 + t5555;
  t5584 = -1.*t5583*t3416;
  t5614 = t3142*t5603;
  t5622 = 0. + t5584 + t5614;
  t5628 = t3142*t5583;
  t5639 = t3416*t5603;
  t5642 = 0. + t5628 + t5639;
  t5114 = -1.*t3402*t3416;
  t5116 = t3142*t3463;
  t5128 = 0. + t5114 + t5116;
  t5558 = -1.*t4388*t5556;
  t5649 = t4991*t5556;
  t5669 = -1.*t4991*t5556;
  t5680 = t5556*t3111;
  t5691 = t4388*t5556;
  t5704 = -1.*t5556*t3111;
  t5732 = t5003*t5583;
  t5724 = -1.*t4423*t5583;
  t5756 = t5583*t3402;
  t5743 = -1.*t5003*t5583;
  t5780 = -1.*t5583*t3402;
  t5765 = t4423*t5583;
  t6027 = t4901*t5433;
  t6031 = t4927*t5463;
  t6033 = t4872*t5492;
  t6036 = t6027 + t6031 + t6033;
  t6041 = -1.*t4125*t5433;
  t6043 = -1.*t4173*t5463;
  t6044 = -1.*t4068*t5492;
  t6047 = t6041 + t6043 + t6044;
  t6076 = t5492*t2203;
  t6078 = t5433*t2415;
  t6079 = t5463*t2713;
  t6080 = t6076 + t6078 + t6079;
  t6083 = -1.*t4901*t5433;
  t6084 = -1.*t4927*t5463;
  t6088 = -1.*t4872*t5492;
  t6089 = t6083 + t6084 + t6088;
  t6138 = -1.*t5492*t2203;
  t6141 = -1.*t5433*t2415;
  t6142 = -1.*t5463*t2713;
  t6143 = t6138 + t6141 + t6142;
  t6157 = t4125*t5433;
  t6158 = t4173*t5463;
  t6160 = t4068*t5492;
  t6170 = t6157 + t6158 + t6160;
  t6211 = t4854*t5342;
  t6212 = t4821*t5377;
  t6221 = t4762*t5429;
  t6222 = t6211 + t6212 + t6221;
  t6224 = -1.*t4051*t5342;
  t6225 = -1.*t3964*t5377;
  t6233 = -1.*t3919*t5429;
  t6234 = t6224 + t6225 + t6233;
  t6262 = t5429*t1619;
  t6266 = t5377*t1858;
  t6267 = t5342*t2183;
  t6268 = t6262 + t6266 + t6267;
  t6276 = -1.*t4854*t5342;
  t6279 = -1.*t4821*t5377;
  t6281 = -1.*t4762*t5429;
  t6298 = t6276 + t6279 + t6281;
  t6338 = -1.*t5429*t1619;
  t6346 = -1.*t5377*t1858;
  t6350 = -1.*t5342*t2183;
  t6352 = t6338 + t6346 + t6350;
  t6357 = t4051*t5342;
  t6358 = t3964*t5377;
  t6359 = t3919*t5429;
  t6360 = t6357 + t6358 + t6359;
  t6415 = t4714*t5288;
  t6416 = t4744*t5315;
  t6418 = t4630*t5339;
  t6420 = t6415 + t6416 + t6418;
  t6427 = -1.*t3737*t5288;
  t6428 = -1.*t3840*t5315;
  t6430 = -1.*t3682*t5339;
  t6434 = t6427 + t6428 + t6430;
  t6481 = t5339*t1249;
  t6505 = t5288*t1351;
  t6506 = t5315*t1611;
  t6509 = t6481 + t6505 + t6506;
  t6515 = -1.*t4714*t5288;
  t6516 = -1.*t4744*t5315;
  t6521 = -1.*t4630*t5339;
  t6523 = t6515 + t6516 + t6521;
  t6568 = -1.*t5339*t1249;
  t6570 = -1.*t5288*t1351;
  t6574 = -1.*t5315*t1611;
  t6577 = t6568 + t6570 + t6574;
  t6579 = t3737*t5288;
  t6580 = t3840*t5315;
  t6581 = t3682*t5339;
  t6582 = t6579 + t6580 + t6581;
  t6656 = -1.*t3616*t5235;
  t6659 = -1.*t5262*t3670;
  t6660 = -1.*t3562*t5285;
  t6662 = t6656 + t6659 + t6660;
  t6668 = t4522*t5235;
  t6671 = t5262*t4612;
  t6674 = t4571*t5285;
  t6678 = t6668 + t6671 + t6674;
  t6709 = t849*t5235;
  t6712 = t683*t5285;
  t6726 = t5262*t1223;
  t6733 = t6709 + t6712 + t6726;
  t6751 = -1.*t4522*t5235;
  t6753 = -1.*t5262*t4612;
  t6754 = -1.*t4571*t5285;
  t6757 = t6751 + t6753 + t6754;
  t6805 = -1.*t849*t5235;
  t6807 = -1.*t683*t5285;
  t6808 = -1.*t5262*t1223;
  t6812 = t6805 + t6807 + t6808;
  t6815 = t3616*t5235;
  t6816 = t5262*t3670;
  t6817 = t3562*t5285;
  t6819 = t6815 + t6816 + t6817;
  p_output1[0]=0. - 1.*t31*t3111 + t3123*t3503;
  p_output1[1]=0. - 1.*t31*t4388 + t3123*t4468;
  p_output1[2]=0. - 1.*t31*t4991 + t3123*t5048;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t3111*t3123 + t31*t3503;
  p_output1[7]=0. + t3123*t4388 + t31*t4468;
  p_output1[8]=0. + t3123*t4991 + t31*t5048;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5128;
  p_output1[13]=t5140;
  p_output1[14]=t5158;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5158*(t5558 - 1.*t5140*t5622 - 1.*t4468*t5642) + t5140*(t5158*t5622 + t5048*t5642 + t5649);
  p_output1[19]=t5128*(-1.*t5158*t5622 - 1.*t5048*t5642 + t5669) + t5158*(t5128*t5622 + t3503*t5642 + t5680);
  p_output1[20]=t5128*(t5140*t5622 + t4468*t5642 + t5691) + t5140*(-1.*t5128*t5622 - 1.*t3503*t5642 + t5704);
  p_output1[21]=t5128;
  p_output1[22]=t5140;
  p_output1[23]=t5158;
  p_output1[24]=t4991*(t5558 - 1.*t4447*t5603 + t5724) + t4388*(t5022*t5603 + t5649 + t5732);
  p_output1[25]=t3111*(-1.*t5022*t5603 + t5669 + t5743) + t4991*(t3463*t5603 + t5680 + t5756);
  p_output1[26]=t3111*(t4447*t5603 + t5691 + t5765) + t4388*(-1.*t3463*t5603 + t5704 + t5780);
  p_output1[27]=t3111;
  p_output1[28]=t4388;
  p_output1[29]=t4991;
  p_output1[30]=t5003*(-1.*t4325*t5533 - 1.*t4345*t5549 + t5724) + t4423*(t4973*t5533 + t4986*t5549 + t5732);
  p_output1[31]=t3402*(-1.*t4973*t5533 - 1.*t4986*t5549 + t5743) + t5003*(t2915*t5533 + t3001*t5549 + t5756);
  p_output1[32]=t3402*(t4325*t5533 + t4345*t5549 + t5765) + t4423*(-1.*t2915*t5533 - 1.*t3001*t5549 + t5780);
  p_output1[33]=t3402;
  p_output1[34]=t4423;
  p_output1[35]=t5003;
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
  p_output1[102]=-0.091*t2717 - 1.*t5003*(-1.*t4288*t5497 - 1.*t4201*t5527 + t5724) - 1.*t4423*(t4970*t5497 + t4950*t5527 + t5732);
  p_output1[103]=-0.091*t4201 - 1.*t3402*(-1.*t4970*t5497 - 1.*t4950*t5527 + t5743) - 1.*t5003*(t2911*t5497 + t2717*t5527 + t5756);
  p_output1[104]=-0.091*t4950 - 1.*t3402*(t4288*t5497 + t4201*t5527 + t5765) - 1.*t4423*(-1.*t2911*t5497 - 1.*t2717*t5527 + t5780);
  p_output1[105]=0. - 1.*t2203*t3173 - 1.*t2415*t3373 - 1.*t2713*t3391;
  p_output1[106]=0. - 1.*t3173*t4068 - 1.*t3373*t4125 - 1.*t3391*t4173;
  p_output1[107]=0. - 1.*t3173*t4872 - 1.*t3373*t4901 - 1.*t3391*t4927;
  p_output1[108]=0.084668*t2203 - 0.041869*t2415 + 0.016493*t2713 - 0.366501*(t4125*t6036 + t4901*t6047) - 0.930418*(t4173*t6036 + t4927*t6047);
  p_output1[109]=0.084668*t4068 - 0.041869*t4125 + 0.016493*t4173 - 0.366501*(t4901*t6080 + t2415*t6089) - 0.930418*(t4927*t6080 + t2713*t6089);
  p_output1[110]=0.084668*t4872 - 0.041869*t4901 + 0.016493*t4927 - 0.366501*(t4125*t6143 + t2415*t6170) - 0.930418*(t4173*t6143 + t2713*t6170);
  p_output1[111]=0. - 0.366501*t2415 - 0.930418*t2713;
  p_output1[112]=0. - 0.366501*t4125 - 0.930418*t4173;
  p_output1[113]=0. - 0.366501*t4901 - 0.930418*t4927;
  p_output1[114]=0.016493*t1619 + 0.041869*t1858 - 0.151852*t2183 - 0.930418*(t3919*t6222 + t4762*t6234) + 0.366501*(t3964*t6222 + t4821*t6234);
  p_output1[115]=0.016493*t3919 + 0.041869*t3964 - 0.151852*t4051 - 0.930418*(t4762*t6268 + t1619*t6298) + 0.366501*(t4821*t6268 + t1858*t6298);
  p_output1[116]=0.016493*t4762 + 0.041869*t4821 - 0.151852*t4854 - 0.930418*(t3919*t6352 + t1619*t6360) + 0.366501*(t3964*t6352 + t1858*t6360);
  p_output1[117]=0. - 0.930418*t1619 + 0.366501*t1858;
  p_output1[118]=0. - 0.930418*t3919 + 0.366501*t3964;
  p_output1[119]=0. - 0.930418*t4762 + 0.366501*t4821;
  p_output1[120]=0.236705*t1249 + 0.03708*t1351 + 0.014606*t1611 - 0.366501*(t3737*t6420 + t4714*t6434) + 0.930418*(t3840*t6420 + t4744*t6434);
  p_output1[121]=0.236705*t3682 + 0.03708*t3737 + 0.014606*t3840 - 0.366501*(t4714*t6509 + t1351*t6523) + 0.930418*(t4744*t6509 + t1611*t6523);
  p_output1[122]=0.236705*t4630 + 0.03708*t4714 + 0.014606*t4744 - 0.366501*(t3737*t6577 + t1351*t6582) + 0.930418*(t3840*t6577 + t1611*t6582);
  p_output1[123]=0. - 0.366501*t1351 + 0.930418*t1611;
  p_output1[124]=0. - 0.366501*t3737 + 0.930418*t3840;
  p_output1[125]=0. - 0.366501*t4714 + 0.930418*t4744;
  p_output1[126]=0.6347*t1223 - 0.366501*(t4571*t6662 + t3562*t6678) + 0.930418*(t4522*t6662 + t3616*t6678) - 0.244523*t683 - 0.09632*t849;
  p_output1[127]=-0.244523*t3562 - 0.09632*t3616 + 0.6347*t3670 - 0.366501*(t4571*t6733 + t6757*t683) + 0.930418*(t4522*t6733 + t6757*t849);
  p_output1[128]=-0.09632*t4522 - 0.244523*t4571 + 0.6347*t4612 - 0.366501*(t3562*t6812 + t6819*t683) + 0.930418*(t3616*t6812 + t6819*t849);
  p_output1[129]=0. - 0.366501*t683 + 0.930418*t849;
  p_output1[130]=0. - 0.366501*t3562 + 0.930418*t3616;
  p_output1[131]=0. + 0.930418*t4522 - 0.366501*t4571;
  p_output1[132]=-8.534920010877523e-7;
  p_output1[133]=-3.0481544369131974e-7;
  p_output1[134]=1.16833815115569e-7;
  p_output1[135]=1.9655299995924302e-7;
  p_output1[136]=-2.3257599990333944e-7;
  p_output1[137]=1.000000637725;
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



void Jb_toe_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

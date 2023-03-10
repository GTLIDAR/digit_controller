/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_left_hip_pitch_src.h"

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
  double t1278;
  double t1953;
  double t2022;
  double t787;
  double t790;
  double t965;
  double t2407;
  double t2194;
  double t2294;
  double t2357;
  double t2405;
  double t2441;
  double t2510;
  double t2571;
  double t2616;
  double t2898;
  double t2900;
  double t2904;
  double t2950;
  double t2969;
  double t3053;
  double t3102;
  double t3156;
  double t3214;
  double t3365;
  double t3377;
  double t3400;
  double t3439;
  double t3471;
  double t3481;
  double t3491;
  double t3524;
  double t3542;
  double t3692;
  double t3764;
  double t2633;
  double t2634;
  double t2726;
  double t3168;
  double t3241;
  double t3249;
  double t3694;
  double t3703;
  double t644;
  double t3817;
  double t3825;
  double t3832;
  double t3844;
  double t3866;
  double t3879;
  double t3936;
  double t3972;
  double t303;
  double t377;
  double t4424;
  double t4463;
  double t4464;
  double t4472;
  double t4493;
  double t4502;
  double t4527;
  double t4540;
  double t4559;
  double t4105;
  double t4465;
  double t4511;
  double t4560;
  double t4563;
  double t4575;
  double t4584;
  double t4588;
  double t4596;
  double t4272;
  double t4290;
  double t4303;
  double t4317;
  double t4323;
  double t4361;
  double t4369;
  double t4780;
  double t4789;
  double t4791;
  double t4795;
  double t4799;
  double t4801;
  double t4807;
  double t4815;
  double t4825;
  double t4793;
  double t4803;
  double t4827;
  double t4846;
  double t4887;
  double t4971;
  double t4973;
  double t4976;
  double t3737;
  double t4017;
  double t4018;
  double t4033;
  double t4118;
  double t4134;
  double t4166;
  double t4222;
  double t4260;
  double t4264;
  double t4304;
  double t4345;
  double t4378;
  double t4398;
  double t4403;
  double t4404;
  double t4564;
  double t4601;
  double t4605;
  double t4619;
  double t4621;
  double t4633;
  double t4642;
  double t4646;
  double t4651;
  double t4671;
  double t4673;
  double t4676;
  double t4712;
  double t4724;
  double t4748;
  double t4756;
  double t4877;
  double t4981;
  double t5004;
  double t5005;
  double t5007;
  double t5016;
  double t5035;
  double t5049;
  double t5050;
  double t5068;
  double t5079;
  double t5084;
  double t5092;
  double t5107;
  double t5112;
  double t5120;
  double t5200;
  double t5209;
  double t5227;
  double t5235;
  double t5239;
  double t5242;
  double t5246;
  double t5249;
  double t5266;
  double t5270;
  double t5278;
  double t5283;
  double t5300;
  double t5306;
  double t5309;
  double t5310;
  double t5317;
  double t5323;
  double t5339;
  double t5344;
  double t5349;
  double t5353;
  double t5376;
  double t5391;
  double t5395;
  double t5396;
  double t5408;
  double t5495;
  double t5498;
  double t5501;
  double t5503;
  double t5570;
  double t5578;
  double t5580;
  double t5581;
  double t5657;
  double t5659;
  double t5668;
  double t5670;
  double t5496;
  double t5509;
  double t5516;
  double t5527;
  double t5537;
  double t5544;
  double t5546;
  double t5550;
  double t5561;
  double t5576;
  double t5586;
  double t5588;
  double t5591;
  double t5596;
  double t5602;
  double t5611;
  double t5635;
  double t5641;
  double t5658;
  double t5673;
  double t5675;
  double t5683;
  double t5684;
  double t5685;
  double t5686;
  double t5702;
  double t5704;
  double t5776;
  double t5781;
  double t5782;
  double t5783;
  double t5785;
  double t5786;
  double t5796;
  double t5797;
  double t5784;
  double t5815;
  double t5820;
  double t5828;
  double t5830;
  double t5833;
  double t5862;
  double t5866;
  double t5867;
  double t5875;
  double t5955;
  double t5963;
  double t5966;
  double t5978;
  double t5983;
  double t5986;
  double t5988;
  double t5989;
  double t5981;
  double t5993;
  double t5994;
  double t5996;
  double t5999;
  double t6004;
  double t6065;
  double t6066;
  double t6090;
  double t6091;
  double t6190;
  double t6213;
  double t6214;
  double t6220;
  double t6232;
  double t6239;
  double t6242;
  double t6246;
  double t6221;
  double t6251;
  double t6259;
  double t6265;
  double t6274;
  double t6276;
  double t6316;
  double t6318;
  double t6322;
  double t6325;
  double t5825;
  double t5837;
  double t5840;
  double t5841;
  double t5842;
  double t5843;
  double t5849;
  double t5851;
  double t5876;
  double t5892;
  double t5903;
  double t5904;
  double t5907;
  double t5929;
  double t5934;
  double t5941;
  double t5942;
  double t5943;
  double t5995;
  double t6009;
  double t6015;
  double t6021;
  double t6023;
  double t6033;
  double t6039;
  double t6042;
  double t6095;
  double t6117;
  double t6118;
  double t6122;
  double t6152;
  double t6159;
  double t6169;
  double t6171;
  double t6173;
  double t6176;
  double t6262;
  double t6279;
  double t6289;
  double t6294;
  double t6301;
  double t6304;
  double t6306;
  double t6309;
  double t6332;
  double t6333;
  double t6342;
  double t6352;
  double t6359;
  double t6363;
  double t6379;
  double t6393;
  double t6407;
  double t6413;
  double t6475;
  double t6484;
  double t6488;
  double t6507;
  double t6515;
  double t6517;
  double t6555;
  double t6568;
  double t6577;
  double t6506;
  double t6530;
  double t6586;
  double t6590;
  double t6612;
  double t6621;
  double t6623;
  double t6625;
  double t6597;
  double t6626;
  double t6628;
  double t6634;
  double t6644;
  double t6649;
  double t6715;
  double t6728;
  double t6734;
  double t6739;
  double t6878;
  double t6879;
  double t6889;
  double t6890;
  double t6913;
  double t6916;
  double t6884;
  double t6904;
  double t6936;
  double t6938;
  double t6954;
  double t6957;
  double t6961;
  double t6965;
  double t6944;
  double t6967;
  double t6970;
  double t6973;
  double t6981;
  double t6982;
  double t7013;
  double t7014;
  double t7015;
  double t7017;
  double t7151;
  double t7155;
  double t7161;
  double t7171;
  double t7176;
  double t7180;
  double t7118;
  double t7119;
  double t7128;
  double t7166;
  double t7181;
  double t7182;
  double t7188;
  double t7192;
  double t7198;
  double t6630;
  double t6654;
  double t6663;
  double t6673;
  double t6674;
  double t6686;
  double t6690;
  double t6703;
  double t6753;
  double t6754;
  double t6763;
  double t6765;
  double t6771;
  double t6789;
  double t6796;
  double t6800;
  double t6802;
  double t6808;
  double t6827;
  double t6829;
  double t6832;
  double t6845;
  double t6971;
  double t6989;
  double t6992;
  double t6995;
  double t6996;
  double t7006;
  double t7009;
  double t7011;
  double t7024;
  double t7025;
  double t7026;
  double t7029;
  double t7034;
  double t7036;
  double t7043;
  double t7045;
  double t7055;
  double t7059;
  double t7068;
  double t7074;
  double t7078;
  double t7080;
  double t7090;
  double t7100;
  double t7110;
  double t7113;
  double t7115;
  double t7142;
  double t7183;
  double t7210;
  double t7213;
  double t7231;
  double t7233;
  double t7236;
  double t7239;
  double t7244;
  double t7245;
  double t7256;
  double t7266;
  double t7274;
  t1278 = Cos(var1[8]);
  t1953 = -1.*t1278;
  t2022 = 1. + t1953;
  t787 = Cos(var1[7]);
  t790 = -1.*t787;
  t965 = 1. + t790;
  t2407 = Sin(var1[8]);
  t2194 = -0.8656776547239999*t2022;
  t2294 = 1. + t2194;
  t2357 = -0.657905*t2294;
  t2405 = 0.0883716288660118*t2022;
  t2441 = -0.930418*t2407;
  t2510 = 0. + t2441;
  t2571 = 0.707107*t2510;
  t2616 = t2357 + t2405 + t2571;
  t2898 = -0.134322983001*t2022;
  t2900 = 1. + t2898;
  t2904 = 0.259155*t2900;
  t2950 = -0.22434503092393926*t2022;
  t2969 = 0.366501*t2407;
  t3053 = 0. + t2969;
  t3102 = 0.707107*t3053;
  t3156 = t2904 + t2950 + t3102;
  t3214 = Sin(var1[7]);
  t3365 = -1.000000637725*t2022;
  t3377 = 1. + t3365;
  t3400 = 0.707107*t3377;
  t3439 = -0.366501*t2407;
  t3471 = 0. + t3439;
  t3481 = 0.259155*t3471;
  t3491 = 0.930418*t2407;
  t3524 = 0. + t3491;
  t3542 = -0.657905*t3524;
  t3692 = t3400 + t3481 + t3542;
  t3764 = Cos(var1[6]);
  t2633 = -0.340999127418*t965*t2616;
  t2634 = -0.8656776547239999*t965;
  t2726 = 1. + t2634;
  t3168 = t2726*t3156;
  t3241 = -0.930418*t3214;
  t3249 = 0. + t3241;
  t3694 = t3249*t3692;
  t3703 = 0. + t2633 + t3168 + t3694;
  t644 = Sin(var1[6]);
  t3817 = -0.134322983001*t965;
  t3825 = 1. + t3817;
  t3832 = t3825*t2616;
  t3844 = -0.340999127418*t965*t3156;
  t3866 = -0.366501*t3214;
  t3879 = 0. + t3866;
  t3936 = t3879*t3692;
  t3972 = 0. + t3832 + t3844 + t3936;
  t303 = Sin(var1[4]);
  t377 = Cos(var1[5]);
  t4424 = -0.366501*t2294;
  t4463 = -0.3172717261340007*t2022;
  t4464 = t4424 + t4463;
  t4472 = -0.930418*t2900;
  t4493 = -0.12497652119782442*t2022;
  t4502 = t4472 + t4493;
  t4527 = -0.930418*t3471;
  t4540 = -0.366501*t3524;
  t4559 = t4527 + t4540;
  t4105 = Sin(var1[5]);
  t4465 = -0.340999127418*t965*t4464;
  t4511 = t2726*t4502;
  t4560 = t3249*t4559;
  t4563 = 0. + t4465 + t4511 + t4560;
  t4575 = t3825*t4464;
  t4584 = -0.340999127418*t965*t4502;
  t4588 = t3879*t4559;
  t4596 = 0. + t4575 + t4584 + t4588;
  t4272 = Cos(var1[4]);
  t4290 = 0.366501*t3214;
  t4303 = 0. + t4290;
  t4317 = 0.930418*t3214;
  t4323 = 0. + t4317;
  t4361 = -1.000000637725*t965;
  t4369 = 1. + t4361;
  t4780 = 0.657905*t2294;
  t4789 = -0.0883716288660118*t2022;
  t4791 = t4780 + t4789 + t2571;
  t4795 = -0.259155*t2900;
  t4799 = 0.22434503092393926*t2022;
  t4801 = t4795 + t4799 + t3102;
  t4807 = -0.259155*t3471;
  t4815 = 0.657905*t3524;
  t4825 = t3400 + t4807 + t4815;
  t4793 = -0.340999127418*t965*t4791;
  t4803 = t2726*t4801;
  t4827 = t3249*t4825;
  t4846 = 0. + t4793 + t4803 + t4827;
  t4887 = t3825*t4791;
  t4971 = -0.340999127418*t965*t4801;
  t4973 = t3879*t4825;
  t4976 = 0. + t4887 + t4971 + t4973;
  t3737 = -1.*t644*t3703;
  t4017 = t3764*t3972;
  t4018 = 0. + t3737 + t4017;
  t4033 = t377*t4018;
  t4118 = t3764*t3703;
  t4134 = t644*t3972;
  t4166 = 0. + t4118 + t4134;
  t4222 = t4105*t4166;
  t4260 = 0. + t4033 + t4222;
  t4264 = -1.*t303*t4260;
  t4304 = t4303*t2616;
  t4345 = t4323*t3156;
  t4378 = t4369*t3692;
  t4398 = 0. + t4304 + t4345 + t4378;
  t4403 = -1.*t4272*t4398;
  t4404 = t4264 + t4403;
  t4564 = -1.*t644*t4563;
  t4601 = t3764*t4596;
  t4605 = 0. + t4564 + t4601;
  t4619 = t377*t4605;
  t4621 = t3764*t4563;
  t4633 = t644*t4596;
  t4642 = 0. + t4621 + t4633;
  t4646 = t4105*t4642;
  t4651 = 0. + t4619 + t4646;
  t4671 = -1.*t303*t4651;
  t4673 = t4464*t4303;
  t4676 = t4502*t4323;
  t4712 = t4369*t4559;
  t4724 = 0. + t4673 + t4676 + t4712;
  t4748 = -1.*t4272*t4724;
  t4756 = t4671 + t4748;
  t4877 = -1.*t644*t4846;
  t4981 = t3764*t4976;
  t5004 = 0. + t4877 + t4981;
  t5005 = t377*t5004;
  t5007 = t3764*t4846;
  t5016 = t644*t4976;
  t5035 = 0. + t5007 + t5016;
  t5049 = t4105*t5035;
  t5050 = 0. + t5005 + t5049;
  t5068 = -1.*t303*t5050;
  t5079 = t4303*t4791;
  t5084 = t4323*t4801;
  t5092 = t4369*t4825;
  t5107 = 0. + t5079 + t5084 + t5092;
  t5112 = -1.*t4272*t5107;
  t5120 = t5068 + t5112;
  t5200 = -1.*t4105*t4018;
  t5209 = t377*t4166;
  t5227 = t5200 + t5209;
  t5235 = var2[3]*t4272*t5227;
  t5239 = -1.*t377*t4018;
  t5242 = -1.*t4105*t4166;
  t5246 = t5239 + t5242;
  t5249 = var2[4]*t5246;
  t5266 = t5235 + t5249;
  t5270 = -1.*t4105*t4605;
  t5278 = t377*t4642;
  t5283 = t5270 + t5278;
  t5300 = var2[3]*t4272*t5283;
  t5306 = -1.*t377*t4605;
  t5309 = -1.*t4105*t4642;
  t5310 = t5306 + t5309;
  t5317 = var2[4]*t5310;
  t5323 = t5300 + t5317;
  t5339 = -1.*t4105*t5004;
  t5344 = t377*t5035;
  t5349 = t5339 + t5344;
  t5353 = var2[3]*t4272*t5349;
  t5376 = -1.*t377*t5004;
  t5391 = -1.*t4105*t5035;
  t5395 = t5376 + t5391;
  t5396 = var2[4]*t5395;
  t5408 = t5353 + t5396;
  t5495 = t3737 + t4017;
  t5498 = -1.*t3764*t3703;
  t5501 = -1.*t644*t3972;
  t5503 = t5498 + t5501;
  t5570 = t4564 + t4601;
  t5578 = -1.*t3764*t4563;
  t5580 = -1.*t644*t4596;
  t5581 = t5578 + t5580;
  t5657 = t4877 + t4981;
  t5659 = -1.*t3764*t4846;
  t5668 = -1.*t644*t4976;
  t5670 = t5659 + t5668;
  t5496 = t4105*t5495;
  t5509 = t377*t5503;
  t5516 = t5496 + t5509;
  t5527 = var2[3]*t4272*t5516;
  t5537 = t377*t5495;
  t5544 = -1.*t4105*t5503;
  t5546 = t5537 + t5544;
  t5550 = var2[4]*t5546;
  t5561 = t5527 + t5550;
  t5576 = t4105*t5570;
  t5586 = t377*t5581;
  t5588 = t5576 + t5586;
  t5591 = var2[3]*t4272*t5588;
  t5596 = t377*t5570;
  t5602 = -1.*t4105*t5581;
  t5611 = t5596 + t5602;
  t5635 = var2[4]*t5611;
  t5641 = t5591 + t5635;
  t5658 = t4105*t5657;
  t5673 = t377*t5670;
  t5675 = t5658 + t5673;
  t5683 = var2[3]*t4272*t5675;
  t5684 = t377*t5657;
  t5685 = -1.*t4105*t5670;
  t5686 = t5684 + t5685;
  t5702 = var2[4]*t5686;
  t5704 = t5683 + t5702;
  t5776 = -0.340999127418*t3214*t2616;
  t5781 = -0.8656776547239999*t3214*t3156;
  t5782 = -0.930418*t787*t3692;
  t5783 = t5776 + t5781 + t5782;
  t5785 = -0.134322983001*t3214*t2616;
  t5786 = -0.340999127418*t3214*t3156;
  t5796 = -0.366501*t787*t3692;
  t5797 = t5785 + t5786 + t5796;
  t5784 = -1.*t644*t5783;
  t5815 = t3764*t5797;
  t5820 = t5784 + t5815;
  t5828 = t3764*t5783;
  t5830 = t644*t5797;
  t5833 = t5828 + t5830;
  t5862 = 0.366501*t787*t2616;
  t5866 = 0.930418*t787*t3156;
  t5867 = -1.000000637725*t3214*t3692;
  t5875 = t5862 + t5866 + t5867;
  t5955 = -0.340999127418*t4464*t3214;
  t5963 = -0.8656776547239999*t4502*t3214;
  t5966 = -0.930418*t787*t4559;
  t5978 = t5955 + t5963 + t5966;
  t5983 = -0.134322983001*t4464*t3214;
  t5986 = -0.340999127418*t4502*t3214;
  t5988 = -0.366501*t787*t4559;
  t5989 = t5983 + t5986 + t5988;
  t5981 = -1.*t644*t5978;
  t5993 = t3764*t5989;
  t5994 = t5981 + t5993;
  t5996 = t3764*t5978;
  t5999 = t644*t5989;
  t6004 = t5996 + t5999;
  t6065 = 0.366501*t787*t4464;
  t6066 = 0.930418*t787*t4502;
  t6090 = -1.000000637725*t3214*t4559;
  t6091 = t6065 + t6066 + t6090;
  t6190 = -0.340999127418*t3214*t4791;
  t6213 = -0.8656776547239999*t3214*t4801;
  t6214 = -0.930418*t787*t4825;
  t6220 = t6190 + t6213 + t6214;
  t6232 = -0.134322983001*t3214*t4791;
  t6239 = -0.340999127418*t3214*t4801;
  t6242 = -0.366501*t787*t4825;
  t6246 = t6232 + t6239 + t6242;
  t6221 = -1.*t644*t6220;
  t6251 = t3764*t6246;
  t6259 = t6221 + t6251;
  t6265 = t3764*t6220;
  t6274 = t644*t6246;
  t6276 = t6265 + t6274;
  t6316 = 0.366501*t787*t4791;
  t6318 = 0.930418*t787*t4801;
  t6322 = -1.000000637725*t3214*t4825;
  t6325 = t6316 + t6318 + t6322;
  t5825 = -1.*t4105*t5820;
  t5837 = t377*t5833;
  t5840 = t5825 + t5837;
  t5841 = var2[4]*t5840;
  t5842 = t377*t5820;
  t5843 = t4105*t5833;
  t5849 = t5842 + t5843;
  t5851 = t4272*t5849;
  t5876 = -1.*t303*t5875;
  t5892 = t5851 + t5876;
  t5903 = var2[3]*t5892;
  t5904 = var2[5]*t5875;
  t5907 = -0.366501*t787*t2616;
  t5929 = -0.930418*t787*t3156;
  t5934 = 1.000000637725*t3214*t3692;
  t5941 = t5907 + t5929 + t5934;
  t5942 = var2[6]*t5941;
  t5943 = t5841 + t5903 + t5904 + t5942;
  t5995 = -1.*t4105*t5994;
  t6009 = t377*t6004;
  t6015 = t5995 + t6009;
  t6021 = var2[4]*t6015;
  t6023 = t377*t5994;
  t6033 = t4105*t6004;
  t6039 = t6023 + t6033;
  t6042 = t4272*t6039;
  t6095 = -1.*t303*t6091;
  t6117 = t6042 + t6095;
  t6118 = var2[3]*t6117;
  t6122 = var2[5]*t6091;
  t6152 = -0.366501*t787*t4464;
  t6159 = -0.930418*t787*t4502;
  t6169 = 1.000000637725*t3214*t4559;
  t6171 = t6152 + t6159 + t6169;
  t6173 = var2[6]*t6171;
  t6176 = t6021 + t6118 + t6122 + t6173;
  t6262 = -1.*t4105*t6259;
  t6279 = t377*t6276;
  t6289 = t6262 + t6279;
  t6294 = var2[4]*t6289;
  t6301 = t377*t6259;
  t6304 = t4105*t6276;
  t6306 = t6301 + t6304;
  t6309 = t4272*t6306;
  t6332 = -1.*t303*t6325;
  t6333 = t6309 + t6332;
  t6342 = var2[3]*t6333;
  t6352 = var2[5]*t6325;
  t6359 = -0.366501*t787*t4791;
  t6363 = -0.930418*t787*t4801;
  t6379 = 1.000000637725*t3214*t4825;
  t6393 = t6359 + t6363 + t6379;
  t6407 = var2[6]*t6393;
  t6413 = t6294 + t6342 + t6352 + t6407;
  t6475 = 0.7071072209449999*t1278;
  t6484 = -0.7071074509398115*t2407;
  t6488 = t6475 + t6484;
  t6507 = -0.6579050807260001*t1278;
  t6515 = -0.6579052862972049*t2407;
  t6517 = t6507 + t6515;
  t6555 = 0.25915542260700003*t1278;
  t6568 = 0.25915550358356343*t2407;
  t6577 = t6555 + t6568;
  t6506 = t3249*t6488;
  t6530 = -0.340999127418*t965*t6517;
  t6586 = t2726*t6577;
  t6590 = t6506 + t6530 + t6586;
  t6612 = t3879*t6488;
  t6621 = t3825*t6517;
  t6623 = -0.340999127418*t965*t6577;
  t6625 = t6612 + t6621 + t6623;
  t6597 = -1.*t644*t6590;
  t6626 = t3764*t6625;
  t6628 = t6597 + t6626;
  t6634 = t3764*t6590;
  t6644 = t644*t6625;
  t6649 = t6634 + t6644;
  t6715 = t4369*t6488;
  t6728 = t4303*t6517;
  t6734 = t4323*t6577;
  t6739 = t6715 + t6728 + t6734;
  t6878 = -0.7071072209449999*t1278;
  t6879 = t6878 + t6484;
  t6889 = -0.25915550358356343*t2407;
  t6890 = t6555 + t6889;
  t6913 = 0.6579052862972049*t2407;
  t6916 = t6507 + t6913;
  t6884 = t3879*t6879;
  t6904 = -0.340999127418*t965*t6890;
  t6936 = t3825*t6916;
  t6938 = t6884 + t6904 + t6936;
  t6954 = t3249*t6879;
  t6957 = t2726*t6890;
  t6961 = -0.340999127418*t965*t6916;
  t6965 = t6954 + t6957 + t6961;
  t6944 = t644*t6938;
  t6967 = t3764*t6965;
  t6970 = t6944 + t6967;
  t6973 = t3764*t6938;
  t6981 = -1.*t644*t6965;
  t6982 = t6973 + t6981;
  t7013 = t4369*t6879;
  t7014 = t4323*t6890;
  t7015 = t4303*t6916;
  t7017 = t7013 + t7014 + t7015;
  t7151 = 1.3877787807814457e-17*t2726*t2407;
  t7155 = -1.8929254131827554e-17*t965*t2407;
  t7161 = 0. + t7151 + t7155;
  t7171 = 5.551115123125783e-17*t3825*t2407;
  t7176 = -4.7323135329568886e-18*t965*t2407;
  t7180 = 0. + t7171 + t7176;
  t7118 = 5.551115123125783e-17*t4303*t2407;
  t7119 = 1.3877787807814457e-17*t4323*t2407;
  t7128 = 0. + t7118 + t7119;
  t7166 = -1.*t644*t7161;
  t7181 = t3764*t7180;
  t7182 = t7166 + t7181;
  t7188 = t3764*t7161;
  t7192 = t644*t7180;
  t7198 = t7188 + t7192;
  t6630 = -1.*t4105*t6628;
  t6654 = t377*t6649;
  t6663 = t6630 + t6654;
  t6673 = var2[4]*t6663;
  t6674 = t377*t6628;
  t6686 = t4105*t6649;
  t6690 = t6674 + t6686;
  t6703 = t4272*t6690;
  t6753 = -1.*t303*t6739;
  t6754 = t6703 + t6753;
  t6763 = var2[3]*t6754;
  t6765 = -0.930418*t6517;
  t6771 = 0.366501*t6577;
  t6789 = t6765 + t6771;
  t6796 = var2[7]*t6789;
  t6800 = -1.*t4369*t6488;
  t6802 = -1.*t4303*t6517;
  t6808 = -1.*t4323*t6577;
  t6827 = t6800 + t6802 + t6808;
  t6829 = var2[6]*t6827;
  t6832 = var2[5]*t6739;
  t6845 = t6673 + t6763 + t6796 + t6829 + t6832;
  t6971 = t377*t6970;
  t6989 = -1.*t4105*t6982;
  t6992 = t6971 + t6989;
  t6995 = var2[4]*t6992;
  t6996 = t4105*t6970;
  t7006 = t377*t6982;
  t7009 = t6996 + t7006;
  t7011 = t4272*t7009;
  t7024 = -1.*t303*t7017;
  t7025 = t7011 + t7024;
  t7026 = var2[3]*t7025;
  t7029 = 0.366501*t6890;
  t7034 = -0.930418*t6916;
  t7036 = t7029 + t7034;
  t7043 = var2[7]*t7036;
  t7045 = -1.*t4369*t6879;
  t7055 = -1.*t4323*t6890;
  t7059 = -1.*t4303*t6916;
  t7068 = t7045 + t7055 + t7059;
  t7074 = var2[6]*t7068;
  t7078 = var2[5]*t7017;
  t7080 = t6995 + t7026 + t7043 + t7074 + t7078;
  t7090 = -4.656235119693264e-17*var2[7]*t2407;
  t7100 = -5.551115123125783e-17*t4303*t2407;
  t7110 = -1.3877787807814457e-17*t4323*t2407;
  t7113 = 0. + t7100 + t7110;
  t7115 = var2[6]*t7113;
  t7142 = var2[5]*t7128;
  t7183 = -1.*t4105*t7182;
  t7210 = t377*t7198;
  t7213 = t7183 + t7210;
  t7231 = var2[4]*t7213;
  t7233 = -1.*t303*t7128;
  t7236 = t377*t7182;
  t7239 = t4105*t7198;
  t7244 = t7236 + t7239;
  t7245 = t4272*t7244;
  t7256 = t7233 + t7245;
  t7266 = var2[3]*t7256;
  t7274 = t7090 + t7115 + t7142 + t7231 + t7266;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.01153*t4404*var2[3] + 0.00015*t4756*var2[3] - 0.00017*t5120*var2[3];
  p_output1[13]=-0.00017*t4404*var2[3] + 0.00018*t4756*var2[3] + 0.03335*t5120*var2[3];
  p_output1[14]=0.00015*t4404*var2[3] + 0.03396*t4756*var2[3] + 0.00018*t5120*var2[3];
  p_output1[15]=0.01153*t5266 + 0.00015*t5323 - 0.00017*t5408;
  p_output1[16]=-0.00017*t5266 + 0.00018*t5323 + 0.03335*t5408;
  p_output1[17]=0.00015*t5266 + 0.03396*t5323 + 0.00018*t5408;
  p_output1[18]=0.01153*t5561 + 0.00015*t5641 - 0.00017*t5704;
  p_output1[19]=-0.00017*t5561 + 0.00018*t5641 + 0.03335*t5704;
  p_output1[20]=0.00015*t5561 + 0.03396*t5641 + 0.00018*t5704;
  p_output1[21]=0.01153*t5943 + 0.00015*t6176 - 0.00017*t6413;
  p_output1[22]=-0.00017*t5943 + 0.00018*t6176 + 0.03335*t6413;
  p_output1[23]=0.00015*t5943 + 0.03396*t6176 + 0.00018*t6413;
  p_output1[24]=-0.00017*t6845 + 0.01153*t7080 + 0.00015*t7274;
  p_output1[25]=0.03335*t6845 - 0.00017*t7080 + 0.00018*t7274;
  p_output1[26]=0.00018*t6845 + 0.00015*t7080 + 0.03396*t7274;
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
}



void Jq_AMBody_left_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

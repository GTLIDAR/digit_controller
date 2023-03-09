/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_right_hip_pitch_src.h"

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
  double t317;
  double t476;
  double t648;
  double t776;
  double t802;
  double t810;
  double t1023;
  double t1072;
  double t1312;
  double t1342;
  double t1388;
  double t1451;
  double t1475;
  double t1798;
  double t2958;
  double t1805;
  double t1882;
  double t2047;
  double t2092;
  double t2642;
  double t2872;
  double t2881;
  double t2886;
  double t2935;
  double t2963;
  double t3034;
  double t3061;
  double t3385;
  double t3469;
  double t3542;
  double t3545;
  double t4374;
  double t4079;
  double t4099;
  double t4236;
  double t4294;
  double t4296;
  double t4316;
  double t4337;
  double t4339;
  double t4065;
  double t4380;
  double t4402;
  double t4449;
  double t4472;
  double t4482;
  double t4537;
  double t4543;
  double t4647;
  double t3746;
  double t3907;
  double t3912;
  double t3966;
  double t4058;
  double t4732;
  double t4752;
  double t4756;
  double t4340;
  double t4652;
  double t4726;
  double t4774;
  double t5119;
  double t5130;
  double t5132;
  double t5235;
  double t5258;
  double t5263;
  double t5268;
  double t5306;
  double t5309;
  double t5316;
  double t5336;
  double t5350;
  double t5393;
  double t5394;
  double t5398;
  double t5411;
  double t5419;
  double t5425;
  double t5562;
  double t5580;
  double t5606;
  double t5610;
  double t5621;
  double t5633;
  double t5634;
  double t5636;
  double t5512;
  double t5530;
  double t5542;
  double t5549;
  double t4844;
  double t4879;
  double t5698;
  double t5699;
  double t5710;
  double t5615;
  double t5686;
  double t5687;
  double t5093;
  double t5909;
  double t5934;
  double t5944;
  double t5949;
  double t5968;
  double t5973;
  double t6045;
  double t6051;
  double t6055;
  double t6063;
  double t6074;
  double t6080;
  double t6081;
  double t6100;
  double t6004;
  double t6006;
  double t6011;
  double t6029;
  double t6156;
  double t6157;
  double t6158;
  double t6065;
  double t6125;
  double t6136;
  double t6244;
  double t6274;
  double t6271;
  double t6281;
  double t6282;
  double t6289;
  double t6301;
  double t6302;
  double t6283;
  double t6304;
  double t6316;
  double t6322;
  double t6323;
  double t6328;
  double t6251;
  double t6321;
  double t6334;
  double t6337;
  double t6366;
  double t6372;
  double t6377;
  double t6387;
  double t6393;
  double t6407;
  double t6410;
  double t6421;
  double t54;
  double t1290;
  double t1492;
  double t1494;
  double t1495;
  double t1999;
  double t2463;
  double t3649;
  double t3687;
  double t3711;
  double t3999;
  double t4727;
  double t4779;
  double t4814;
  double t4839;
  double t4862;
  double t4942;
  double t4970;
  double t4974;
  double t4975;
  double t4992;
  double t5003;
  double t5082;
  double t5264;
  double t5366;
  double t5370;
  double t5391;
  double t5445;
  double t5456;
  double t5462;
  double t5491;
  double t5508;
  double t5561;
  double t5689;
  double t5713;
  double t5721;
  double t5727;
  double t5754;
  double t5758;
  double t5789;
  double t5791;
  double t5795;
  double t5859;
  double t5868;
  double t5892;
  double t5938;
  double t5961;
  double t5964;
  double t5967;
  double t5982;
  double t5985;
  double t5987;
  double t5989;
  double t5996;
  double t6034;
  double t6143;
  double t6159;
  double t6163;
  double t6166;
  double t6168;
  double t6172;
  double t6183;
  double t6193;
  double t6199;
  double t6220;
  double t6224;
  double t6225;
  double t6351;
  double t6389;
  double t6422;
  double t6423;
  double t6428;
  double t6431;
  double t6434;
  double t6441;
  double t6450;
  double t6457;
  double t6473;
  double t6480;
  double t6529;
  double t6540;
  double t5084;
  double t5899;
  double t6230;
  double t6233;
  double t6677;
  double t6685;
  double t6698;
  double t6713;
  double t6718;
  double t6732;
  double t6711;
  double t6744;
  double t6752;
  double t6754;
  double t6765;
  double t6780;
  double t6669;
  double t6753;
  double t6788;
  double t6792;
  double t6812;
  double t6818;
  double t6826;
  double t6837;
  double t6851;
  double t6870;
  double t6873;
  double t6890;
  double t6580;
  double t6588;
  double t6602;
  double t6606;
  double t6803;
  double t6844;
  double t6893;
  double t6898;
  double t6900;
  double t6902;
  double t6905;
  double t6907;
  double t6909;
  double t6913;
  double t6915;
  double t6916;
  double t6918;
  double t6920;
  double t6617;
  double t6618;
  double t6625;
  double t6628;
  double t6959;
  double t6961;
  double t6977;
  double t6991;
  double t6993;
  double t6994;
  double t6956;
  double t6982;
  double t6995;
  double t6999;
  double t7007;
  double t7009;
  double t7010;
  double t7015;
  double t7019;
  double t7021;
  double t7029;
  double t7033;
  double t7004;
  double t7018;
  double t7038;
  double t7040;
  double t7050;
  double t7051;
  double t7053;
  double t7060;
  double t7066;
  double t7081;
  double t7083;
  double t7085;
  double t7094;
  double t7098;
  t317 = Cos(var1[19]);
  t476 = -1.*t317;
  t648 = 1. + t476;
  t776 = -0.8656776547239999*t648;
  t802 = 1. + t776;
  t810 = -0.366501*t802;
  t1023 = -0.3172717261340007*t648;
  t1072 = t810 + t1023;
  t1312 = -0.134322983001*t648;
  t1342 = 1. + t1312;
  t1388 = 0.930418*t1342;
  t1451 = 0.12497652119782442*t648;
  t1475 = t1388 + t1451;
  t1798 = Sin(var1[18]);
  t2958 = Sin(var1[19]);
  t1805 = -0.366501*t1798;
  t1882 = 0. + t1805;
  t2047 = 0.930418*t1798;
  t2092 = 0. + t2047;
  t2642 = Cos(var1[18]);
  t2872 = -1.*t2642;
  t2881 = 1. + t2872;
  t2886 = -1.000000637725*t2881;
  t2935 = 1. + t2886;
  t2963 = -0.930418*t2958;
  t3034 = 0. + t2963;
  t3061 = -0.366501*t3034;
  t3385 = -0.366501*t2958;
  t3469 = 0. + t3385;
  t3542 = 0.930418*t3469;
  t3545 = t3061 + t3542;
  t4374 = Sin(var1[17]);
  t4079 = 0.340999127418*t2881*t1072;
  t4099 = -0.8656776547239999*t2881;
  t4236 = 1. + t4099;
  t4294 = t4236*t1475;
  t4296 = -0.930418*t1798;
  t4316 = 0. + t4296;
  t4337 = t4316*t3545;
  t4339 = 0. + t4079 + t4294 + t4337;
  t4065 = Cos(var1[17]);
  t4380 = -0.134322983001*t2881;
  t4402 = 1. + t4380;
  t4449 = t4402*t1072;
  t4472 = 0.340999127418*t2881*t1475;
  t4482 = 0.366501*t1798;
  t4537 = 0. + t4482;
  t4543 = t4537*t3545;
  t4647 = 0. + t4449 + t4472 + t4543;
  t3746 = t1072*t1882;
  t3907 = t1475*t2092;
  t3912 = t2935*t3545;
  t3966 = 0. + t3746 + t3907 + t3912;
  t4058 = Cos(var1[5]);
  t4732 = -1.*t4374*t4339;
  t4752 = t4065*t4647;
  t4756 = 0. + t4732 + t4752;
  t4340 = t4065*t4339;
  t4652 = t4374*t4647;
  t4726 = 0. + t4340 + t4652;
  t4774 = Sin(var1[5]);
  t5119 = -0.259155*t1342;
  t5130 = 0.22434503092393926*t648;
  t5132 = 0.366501*t2958;
  t5235 = 0. + t5132;
  t5258 = -0.707107*t5235;
  t5263 = t5119 + t5130 + t5258;
  t5268 = -0.657905*t802;
  t5306 = 0.0883716288660118*t648;
  t5309 = 0.930418*t2958;
  t5316 = 0. + t5309;
  t5336 = -0.707107*t5316;
  t5350 = t5268 + t5306 + t5336;
  t5393 = -1.000000637725*t648;
  t5394 = 1. + t5393;
  t5398 = -0.707107*t5394;
  t5411 = -0.657905*t3034;
  t5419 = -0.259155*t3469;
  t5425 = t5398 + t5411 + t5419;
  t5562 = t4537*t5425;
  t5580 = 0.340999127418*t2881*t5263;
  t5606 = t4402*t5350;
  t5610 = 0. + t5562 + t5580 + t5606;
  t5621 = t4316*t5425;
  t5633 = t4236*t5263;
  t5634 = 0.340999127418*t2881*t5350;
  t5636 = 0. + t5621 + t5633 + t5634;
  t5512 = t2935*t5425;
  t5530 = t2092*t5263;
  t5542 = t1882*t5350;
  t5549 = 0. + t5512 + t5530 + t5542;
  t4844 = Sin(var1[4]);
  t4879 = Cos(var1[4]);
  t5698 = t4065*t5610;
  t5699 = -1.*t4374*t5636;
  t5710 = 0. + t5698 + t5699;
  t5615 = t4374*t5610;
  t5686 = t4065*t5636;
  t5687 = 0. + t5615 + t5686;
  t5093 = -3.6361499999859603e-7*var2[19];
  t5909 = 0.707107*t5235;
  t5934 = t5119 + t5130 + t5909;
  t5944 = 0.707107*t5316;
  t5949 = t5268 + t5306 + t5944;
  t5968 = 0.707107*t5394;
  t5973 = t5968 + t5411 + t5419;
  t6045 = t4537*t5973;
  t6051 = 0.340999127418*t2881*t5934;
  t6055 = t4402*t5949;
  t6063 = 0. + t6045 + t6051 + t6055;
  t6074 = t4316*t5973;
  t6080 = t4236*t5934;
  t6081 = 0.340999127418*t2881*t5949;
  t6100 = 0. + t6074 + t6080 + t6081;
  t6004 = t2935*t5973;
  t6006 = t2092*t5934;
  t6011 = t1882*t5949;
  t6029 = 0. + t6004 + t6006 + t6011;
  t6156 = t4065*t6063;
  t6157 = -1.*t4374*t6100;
  t6158 = 0. + t6156 + t6157;
  t6065 = t4374*t6063;
  t6125 = t4065*t6100;
  t6136 = 0. + t6065 + t6125;
  t6244 = Cos(var1[3]);
  t6274 = Sin(var1[3]);
  t6271 = t6244*t4058*t4844;
  t6281 = t6274*t4774;
  t6282 = t6271 + t6281;
  t6289 = -1.*t4058*t6274;
  t6301 = t6244*t4844*t4774;
  t6302 = t6289 + t6301;
  t6283 = -1.*t4374*t6282;
  t6304 = t4065*t6302;
  t6316 = t6283 + t6304;
  t6322 = t4065*t6282;
  t6323 = t4374*t6302;
  t6328 = t6322 + t6323;
  t6251 = t6244*t4879*t1882;
  t6321 = 0.340999127418*t2881*t6316;
  t6334 = t4402*t6328;
  t6337 = t6251 + t6321 + t6334;
  t6366 = t6244*t4879*t2092;
  t6372 = t4236*t6316;
  t6377 = 0.340999127418*t2881*t6328;
  t6387 = t6366 + t6372 + t6377;
  t6393 = t2935*t6244*t4879;
  t6407 = t4316*t6316;
  t6410 = t4537*t6328;
  t6421 = t6393 + t6407 + t6410;
  t54 = -1.000000637725*var2[19];
  t1290 = -0.930418*t1072;
  t1492 = -0.366501*t1475;
  t1494 = 0. + t1290 + t1492;
  t1495 = var2[18]*t1494;
  t1999 = -1.*t1072*t1882;
  t2463 = -1.*t1475*t2092;
  t3649 = -1.*t2935*t3545;
  t3687 = 0. + t1999 + t2463 + t3649;
  t3711 = var2[17]*t3687;
  t3999 = var2[5]*t3966;
  t4727 = t4058*t4726;
  t4779 = -1.*t4756*t4774;
  t4814 = 0. + t4727 + t4779;
  t4839 = var2[4]*t4814;
  t4862 = -1.*t3966*t4844;
  t4942 = t4058*t4756;
  t4970 = t4726*t4774;
  t4974 = 0. + t4942 + t4970;
  t4975 = t4879*t4974;
  t4992 = 0. + t4862 + t4975;
  t5003 = var2[3]*t4992;
  t5082 = t54 + t1495 + t3711 + t3999 + t4839 + t5003;
  t5264 = -0.366501*t5263;
  t5366 = -0.930418*t5350;
  t5370 = 0. + t5264 + t5366;
  t5391 = var2[18]*t5370;
  t5445 = -1.*t2935*t5425;
  t5456 = -1.*t2092*t5263;
  t5462 = -1.*t1882*t5350;
  t5491 = 0. + t5445 + t5456 + t5462;
  t5508 = var2[17]*t5491;
  t5561 = var2[5]*t5549;
  t5689 = t4058*t5687;
  t5713 = -1.*t5710*t4774;
  t5721 = 0. + t5689 + t5713;
  t5727 = var2[4]*t5721;
  t5754 = -1.*t5549*t4844;
  t5758 = t4058*t5710;
  t5789 = t5687*t4774;
  t5791 = 0. + t5758 + t5789;
  t5795 = t4879*t5791;
  t5859 = 0. + t5754 + t5795;
  t5868 = var2[3]*t5859;
  t5892 = t5093 + t5391 + t5508 + t5561 + t5727 + t5868;
  t5938 = -0.366501*t5934;
  t5961 = -0.930418*t5949;
  t5964 = 0. + t5938 + t5961;
  t5967 = var2[18]*t5964;
  t5982 = -1.*t2935*t5973;
  t5985 = -1.*t2092*t5934;
  t5987 = -1.*t1882*t5949;
  t5989 = 0. + t5982 + t5985 + t5987;
  t5996 = var2[17]*t5989;
  t6034 = var2[5]*t6029;
  t6143 = t4058*t6136;
  t6159 = -1.*t6158*t4774;
  t6163 = 0. + t6143 + t6159;
  t6166 = var2[4]*t6163;
  t6168 = -1.*t6029*t4844;
  t6172 = t4058*t6158;
  t6183 = t6136*t4774;
  t6193 = 0. + t6172 + t6183;
  t6199 = t4879*t6193;
  t6220 = 0. + t6168 + t6199;
  t6224 = var2[3]*t6220;
  t6225 = t5093 + t5967 + t5996 + t6034 + t6166 + t6224;
  t6351 = t5316*t6337;
  t6389 = t5235*t6387;
  t6422 = t5394*t6421;
  t6423 = t6351 + t6389 + t6422;
  t6428 = t802*t6337;
  t6431 = -0.340999127418*t648*t6387;
  t6434 = t3034*t6421;
  t6441 = t6428 + t6431 + t6434;
  t6450 = -0.657905*t6441;
  t6457 = -0.340999127418*t648*t6337;
  t6473 = t1342*t6387;
  t6480 = t3469*t6421;
  t6529 = t6457 + t6473 + t6480;
  t6540 = -0.259155*t6529;
  t5084 = -0.00018*t5082;
  t5899 = 0.03335*t5892;
  t6230 = 0.00017*t6225;
  t6233 = t5084 + t5899 + t6230;
  t6677 = t4058*t6274*t4844;
  t6685 = -1.*t6244*t4774;
  t6698 = t6677 + t6685;
  t6713 = t6244*t4058;
  t6718 = t6274*t4844*t4774;
  t6732 = t6713 + t6718;
  t6711 = -1.*t4374*t6698;
  t6744 = t4065*t6732;
  t6752 = t6711 + t6744;
  t6754 = t4065*t6698;
  t6765 = t4374*t6732;
  t6780 = t6754 + t6765;
  t6669 = t4879*t1882*t6274;
  t6753 = 0.340999127418*t2881*t6752;
  t6788 = t4402*t6780;
  t6792 = t6669 + t6753 + t6788;
  t6812 = t4879*t2092*t6274;
  t6818 = t4236*t6752;
  t6826 = 0.340999127418*t2881*t6780;
  t6837 = t6812 + t6818 + t6826;
  t6851 = t2935*t4879*t6274;
  t6870 = t4316*t6752;
  t6873 = t4537*t6780;
  t6890 = t6851 + t6870 + t6873;
  t6580 = 0.00015*t5082;
  t6588 = 0.00017*t5892;
  t6602 = 0.01153*t6225;
  t6606 = t6580 + t6588 + t6602;
  t6803 = t5316*t6792;
  t6844 = t5235*t6837;
  t6893 = t5394*t6890;
  t6898 = t6803 + t6844 + t6893;
  t6900 = t802*t6792;
  t6902 = -0.340999127418*t648*t6837;
  t6905 = t3034*t6890;
  t6907 = t6900 + t6902 + t6905;
  t6909 = -0.657905*t6907;
  t6913 = -0.340999127418*t648*t6792;
  t6915 = t1342*t6837;
  t6916 = t3469*t6890;
  t6918 = t6913 + t6915 + t6916;
  t6920 = -0.259155*t6918;
  t6617 = 0.03396*t5082;
  t6618 = -0.00018*t5892;
  t6625 = 0.00015*t6225;
  t6628 = t6617 + t6618 + t6625;
  t6959 = -1.*t4879*t4058*t4374;
  t6961 = t4065*t4879*t4774;
  t6977 = t6959 + t6961;
  t6991 = t4065*t4879*t4058;
  t6993 = t4879*t4374*t4774;
  t6994 = t6991 + t6993;
  t6956 = -1.*t1882*t4844;
  t6982 = 0.340999127418*t2881*t6977;
  t6995 = t4402*t6994;
  t6999 = t6956 + t6982 + t6995;
  t7007 = -1.*t2092*t4844;
  t7009 = t4236*t6977;
  t7010 = 0.340999127418*t2881*t6994;
  t7015 = t7007 + t7009 + t7010;
  t7019 = -1.*t2935*t4844;
  t7021 = t4316*t6977;
  t7029 = t4537*t6994;
  t7033 = t7019 + t7021 + t7029;
  t7004 = t802*t6999;
  t7018 = -0.340999127418*t648*t7015;
  t7038 = t3034*t7033;
  t7040 = t7004 + t7018 + t7038;
  t7050 = -0.340999127418*t648*t6999;
  t7051 = t1342*t7015;
  t7053 = t3469*t7033;
  t7060 = t7050 + t7051 + t7053;
  t7066 = t5316*t6999;
  t7081 = t5235*t7015;
  t7083 = t5394*t7033;
  t7085 = t7066 + t7081 + t7083;
  t7094 = -0.657905*t7040;
  t7098 = -0.259155*t7060;
  p_output1[0]=t6233*(-0.707107*t6423 + t6450 + t6540) + (0.707107*t6423 + t6450 + t6540)*t6606 + (-0.366501*t6441 + 0.930418*t6529)*t6628;
  p_output1[1]=t6628*(-0.366501*t6907 + 0.930418*t6918) + t6233*(-0.707107*t6898 + t6909 + t6920) + t6606*(0.707107*t6898 + t6909 + t6920);
  p_output1[2]=t6628*(-0.366501*t7040 + 0.930418*t7060) + t6233*(-0.707107*t7085 + t7094 + t7098) + t6606*(0.707107*t7085 + t7094 + t7098);
}



void AMWorld_right_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
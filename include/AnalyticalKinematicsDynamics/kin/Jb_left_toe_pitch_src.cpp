/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:59:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_left_toe_pitch_src.h"

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
  double t616;
  double t667;
  double t680;
  double t932;
  double t566;
  double t604;
  double t607;
  double t435;
  double t482;
  double t512;
  double t739;
  double t769;
  double t778;
  double t834;
  double t974;
  double t977;
  double t1124;
  double t1129;
  double t1167;
  double t1192;
  double t1232;
  double t1264;
  double t1275;
  double t1279;
  double t1306;
  double t1320;
  double t1398;
  double t1421;
  double t1442;
  double t1470;
  double t1517;
  double t1529;
  double t1586;
  double t1615;
  double t1630;
  double t1638;
  double t1645;
  double t375;
  double t387;
  double t420;
  double t1131;
  double t1177;
  double t1183;
  double t1453;
  double t1460;
  double t1462;
  double t1653;
  double t1773;
  double t1815;
  double t1823;
  double t1847;
  double t1859;
  double t1863;
  double t1900;
  double t1917;
  double t1934;
  double t1985;
  double t2021;
  double t2029;
  double t2050;
  double t2062;
  double t2065;
  double t2073;
  double t2106;
  double t2113;
  double t2126;
  double t2139;
  double t265;
  double t316;
  double t366;
  double t1785;
  double t1791;
  double t1803;
  double t1983;
  double t1995;
  double t1999;
  double t2162;
  double t2174;
  double t2211;
  double t2227;
  double t2250;
  double t2260;
  double t2273;
  double t2299;
  double t2301;
  double t2352;
  double t2393;
  double t2420;
  double t2425;
  double t2437;
  double t2447;
  double t2457;
  double t2475;
  double t2485;
  double t2493;
  double t2498;
  double t2517;
  double t2177;
  double t2178;
  double t2195;
  double t2361;
  double t2559;
  double t2572;
  double t2599;
  double t2622;
  double t2654;
  double t2680;
  double t2683;
  double t2709;
  double t2710;
  double t2718;
  double t2727;
  double t2728;
  double t2852;
  double t2883;
  double t3034;
  double t3040;
  double t3072;
  double t3087;
  double t3093;
  double t3112;
  double t3133;
  double t3145;
  double t3148;
  double t3342;
  double t2634;
  double t2651;
  double t2653;
  double t2799;
  double t2856;
  double t2865;
  double t3214;
  double t3292;
  double t188;
  double t3397;
  double t3425;
  double t3436;
  double t3466;
  double t3467;
  double t3475;
  double t3529;
  double t3550;
  double t3686;
  double t3339;
  double t3594;
  double t3617;
  double t171;
  double t3696;
  double t3697;
  double t3704;
  double t134;
  double t4237;
  double t4247;
  double t4307;
  double t4310;
  double t4369;
  double t4375;
  double t4394;
  double t4398;
  double t4461;
  double t4516;
  double t4528;
  double t4529;
  double t4312;
  double t4429;
  double t4531;
  double t4552;
  double t4599;
  double t4639;
  double t4640;
  double t4661;
  double t4689;
  double t4697;
  double t4709;
  double t4716;
  double t4597;
  double t4681;
  double t4720;
  double t4723;
  double t4741;
  double t4786;
  double t4823;
  double t4835;
  double t4882;
  double t4883;
  double t4885;
  double t4887;
  double t4737;
  double t4868;
  double t4888;
  double t4892;
  double t4903;
  double t4918;
  double t4937;
  double t4998;
  double t5018;
  double t5029;
  double t5036;
  double t5052;
  double t4899;
  double t5001;
  double t5068;
  double t5073;
  double t5084;
  double t5090;
  double t5105;
  double t5118;
  double t3796;
  double t3847;
  double t5081;
  double t5134;
  double t5141;
  double t5157;
  double t5159;
  double t5161;
  double t3916;
  double t3968;
  double t3977;
  double t4000;
  double t4053;
  double t4142;
  double t4167;
  double t5309;
  double t5311;
  double t5325;
  double t5345;
  double t5356;
  double t5357;
  double t5361;
  double t5371;
  double t5373;
  double t5337;
  double t5360;
  double t5376;
  double t5377;
  double t5398;
  double t5401;
  double t5404;
  double t5405;
  double t5410;
  double t5416;
  double t5417;
  double t5424;
  double t5392;
  double t5408;
  double t5425;
  double t5435;
  double t5458;
  double t5467;
  double t5481;
  double t5483;
  double t5503;
  double t5504;
  double t5518;
  double t5526;
  double t5445;
  double t5497;
  double t5534;
  double t5538;
  double t5555;
  double t5559;
  double t5576;
  double t5581;
  double t5597;
  double t5604;
  double t5606;
  double t5612;
  double t5542;
  double t5589;
  double t5613;
  double t5619;
  double t5623;
  double t5631;
  double t5634;
  double t5635;
  double t5622;
  double t5636;
  double t5641;
  double t5659;
  double t5662;
  double t5673;
  double t3650;
  double t3742;
  double t3744;
  double t3849;
  double t3857;
  double t3860;
  double t3865;
  double t3999;
  double t4125;
  double t4175;
  double t4183;
  double t4188;
  double t4198;
  double t5150;
  double t5172;
  double t5175;
  double t5206;
  double t5244;
  double t5248;
  double t5253;
  double t5257;
  double t5267;
  double t5278;
  double t5279;
  double t5282;
  double t5285;
  double t5645;
  double t5685;
  double t5700;
  double t5717;
  double t5731;
  double t5753;
  double t5781;
  double t5785;
  double t5791;
  double t5804;
  double t5807;
  double t5817;
  double t5824;
  double t5985;
  double t5988;
  double t5992;
  double t5993;
  double t5997;
  double t5998;
  double t6009;
  double t6011;
  double t6012;
  double t6017;
  double t6018;
  double t6019;
  double t6020;
  double t6035;
  double t6040;
  double t6048;
  double t6049;
  double t6054;
  double t6057;
  double t5966;
  double t5967;
  double t5969;
  double t6007;
  double t6027;
  double t6063;
  double t6067;
  double t6070;
  double t6077;
  double t6087;
  double t6096;
  double t6098;
  double t6101;
  double t6102;
  double t6107;
  double t6111;
  double t6114;
  double t6116;
  double t6119;
  double t6124;
  double t6131;
  double t5952;
  double t5953;
  double t5954;
  double t6068;
  double t6103;
  double t6133;
  double t6141;
  double t6168;
  double t6170;
  double t6178;
  double t6179;
  double t6180;
  double t6185;
  double t6226;
  double t6258;
  double t6259;
  double t6266;
  double t6270;
  double t6276;
  double t6285;
  double t6286;
  double t5922;
  double t5934;
  double t6149;
  double t6238;
  double t6254;
  double t6287;
  double t6293;
  double t6296;
  double t6300;
  double t6307;
  double t6309;
  double t6311;
  double t6325;
  double t6327;
  double t6343;
  double t6348;
  double t6353;
  double t6355;
  double t6359;
  double t6360;
  double t6366;
  double t5911;
  double t5912;
  double t5913;
  double t6295;
  double t6330;
  double t6380;
  double t6387;
  double t6397;
  double t6411;
  double t6418;
  double t6422;
  double t6431;
  double t6437;
  double t6445;
  double t5910;
  double t6390;
  double t6446;
  double t6448;
  double t6451;
  double t6455;
  double t6460;
  double t6462;
  double t6468;
  double t6471;
  double t5886;
  double t5890;
  double t5891;
  double t6481;
  double t6482;
  double t6485;
  double t6498;
  double t6505;
  double t6512;
  double t6518;
  double t6519;
  double t6521;
  double t6523;
  double t5892;
  double t5902;
  double t5903;
  double t6450;
  double t6472;
  double t6473;
  double t6494;
  double t6536;
  double t6541;
  double t6544;
  double t6551;
  double t6552;
  double t5872;
  double t5873;
  double t5885;
  double t6570;
  double t6474;
  double t6595;
  double t6589;
  double t6621;
  double t6606;
  double t6712;
  double t6658;
  double t6740;
  double t6724;
  double t6767;
  double t6755;
  double t7069;
  double t7070;
  double t7079;
  double t7082;
  double t7093;
  double t7101;
  double t7104;
  double t7108;
  double t7140;
  double t7142;
  double t7145;
  double t7147;
  double t7154;
  double t7155;
  double t7156;
  double t7157;
  double t7202;
  double t7203;
  double t7220;
  double t7228;
  double t7240;
  double t7243;
  double t7250;
  double t7260;
  double t7315;
  double t7322;
  double t7323;
  double t7324;
  double t7328;
  double t7335;
  double t7337;
  double t7341;
  double t7356;
  double t7358;
  double t7362;
  double t7364;
  double t7374;
  double t7375;
  double t7376;
  double t7383;
  double t7422;
  double t7423;
  double t7429;
  double t7430;
  double t7433;
  double t7434;
  double t7439;
  double t7441;
  double t7505;
  double t7506;
  double t7512;
  double t7514;
  double t7516;
  double t7517;
  double t7523;
  double t7524;
  double t7547;
  double t7549;
  double t7550;
  double t7552;
  double t7560;
  double t7561;
  double t7562;
  double t7564;
  double t7599;
  double t7600;
  double t7606;
  double t7607;
  double t7612;
  double t7615;
  double t7619;
  double t7620;
  double t7672;
  double t7674;
  double t7676;
  double t7677;
  double t7685;
  double t7689;
  double t7691;
  double t7692;
  double t7714;
  double t7716;
  double t7718;
  double t7721;
  double t7723;
  double t7724;
  double t7725;
  double t7726;
  double t7744;
  double t7746;
  double t7747;
  double t7748;
  double t7751;
  double t7752;
  double t7755;
  double t7756;
  t616 = Cos(var1[11]);
  t667 = -1.*t616;
  t680 = 1. + t667;
  t932 = Sin(var1[11]);
  t566 = Cos(var1[10]);
  t604 = -1.*t566;
  t607 = 1. + t604;
  t435 = Cos(var1[9]);
  t482 = -1.*t435;
  t512 = 1. + t482;
  t739 = -0.134322983001*t680;
  t769 = 1. + t739;
  t778 = -0.218018*t769;
  t834 = 0.18873312805116788*t680;
  t974 = -0.366501*t932;
  t977 = 0. + t974;
  t1124 = 0.803828*t977;
  t1129 = t778 + t834 + t1124;
  t1167 = Sin(var1[10]);
  t1192 = -1.000000637725*t680;
  t1232 = 1. + t1192;
  t1264 = 0.803828*t1232;
  t1275 = -0.930418*t932;
  t1279 = 0. + t1275;
  t1306 = 0.553471*t1279;
  t1320 = 0.366501*t932;
  t1398 = 0. + t1320;
  t1421 = -0.218018*t1398;
  t1442 = t1264 + t1306 + t1421;
  t1470 = -0.8656776547239999*t680;
  t1517 = 1. + t1470;
  t1529 = 0.553471*t1517;
  t1586 = -0.07434394776141752*t680;
  t1615 = 0.930418*t932;
  t1630 = 0. + t1615;
  t1638 = 0.803828*t1630;
  t1645 = t1529 + t1586 + t1638;
  t375 = Cos(var1[8]);
  t387 = -1.*t375;
  t420 = 1. + t387;
  t1131 = 0.340999127418*t607*t1129;
  t1177 = 0.930418*t1167;
  t1183 = 0. + t1177;
  t1453 = t1183*t1442;
  t1460 = -0.8656776547239999*t607;
  t1462 = 1. + t1460;
  t1653 = t1462*t1645;
  t1773 = 0. + t1131 + t1453 + t1653;
  t1815 = -0.134322983001*t607;
  t1823 = 1. + t1815;
  t1847 = t1823*t1129;
  t1859 = -0.366501*t1167;
  t1863 = 0. + t1859;
  t1900 = t1863*t1442;
  t1917 = 0.340999127418*t607*t1645;
  t1934 = 0. + t1847 + t1900 + t1917;
  t1985 = Sin(var1[9]);
  t2021 = 0.366501*t1167;
  t2029 = 0. + t2021;
  t2050 = t2029*t1129;
  t2062 = -1.000000637725*t607;
  t2065 = 1. + t2062;
  t2073 = t2065*t1442;
  t2106 = -0.930418*t1167;
  t2113 = 0. + t2106;
  t2126 = t2113*t1645;
  t2139 = 0. + t2050 + t2073 + t2126;
  t265 = Cos(var1[7]);
  t316 = -1.*t265;
  t366 = 1. + t316;
  t1785 = 0.340999127418*t512*t1773;
  t1791 = -0.134322983001*t512;
  t1803 = 1. + t1791;
  t1983 = t1803*t1934;
  t1995 = -0.366501*t1985;
  t1999 = 0. + t1995;
  t2162 = t1999*t2139;
  t2174 = 0. + t1785 + t1983 + t2162;
  t2211 = -0.8656776547239999*t512;
  t2227 = 1. + t2211;
  t2250 = t2227*t1773;
  t2260 = 0.340999127418*t512*t1934;
  t2273 = 0.930418*t1985;
  t2299 = 0. + t2273;
  t2301 = t2299*t2139;
  t2352 = 0. + t2250 + t2260 + t2301;
  t2393 = -0.930418*t1985;
  t2420 = 0. + t2393;
  t2425 = t2420*t1773;
  t2437 = 0.366501*t1985;
  t2447 = 0. + t2437;
  t2457 = t2447*t1934;
  t2475 = -1.000000637725*t512;
  t2485 = 1. + t2475;
  t2493 = t2485*t2139;
  t2498 = 0. + t2425 + t2457 + t2493;
  t2517 = Sin(var1[8]);
  t2177 = 0.340999127418*t420*t2174;
  t2178 = -0.8656776547239999*t420;
  t2195 = 1. + t2178;
  t2361 = t2195*t2352;
  t2559 = -0.930418*t2517;
  t2572 = 0. + t2559;
  t2599 = t2498*t2572;
  t2622 = 0. + t2177 + t2361 + t2599;
  t2654 = -0.134322983001*t420;
  t2680 = 1. + t2654;
  t2683 = t2680*t2174;
  t2709 = 0.340999127418*t420*t2352;
  t2710 = 0.366501*t2517;
  t2718 = 0. + t2710;
  t2727 = t2498*t2718;
  t2728 = 0. + t2683 + t2709 + t2727;
  t2852 = Sin(var1[7]);
  t2883 = -1.000000637725*t420;
  t3034 = 1. + t2883;
  t3040 = t3034*t2498;
  t3072 = -0.366501*t2517;
  t3087 = 0. + t3072;
  t3093 = t2174*t3087;
  t3112 = 0.930418*t2517;
  t3133 = 0. + t3112;
  t3145 = t2352*t3133;
  t3148 = 0. + t3040 + t3093 + t3145;
  t3342 = Cos(var1[6]);
  t2634 = -0.340999127418*t366*t2622;
  t2651 = -0.8656776547239999*t366;
  t2653 = 1. + t2651;
  t2799 = t2653*t2728;
  t2856 = -0.930418*t2852;
  t2865 = 0. + t2856;
  t3214 = t2865*t3148;
  t3292 = 0. + t2634 + t2799 + t3214;
  t188 = Sin(var1[6]);
  t3397 = -0.134322983001*t366;
  t3425 = 1. + t3397;
  t3436 = t3425*t2622;
  t3466 = -0.340999127418*t366*t2728;
  t3467 = -0.366501*t2852;
  t3475 = 0. + t3467;
  t3529 = t3475*t3148;
  t3550 = 0. + t3436 + t3466 + t3529;
  t3686 = Cos(var1[5]);
  t3339 = -1.*t188*t3292;
  t3594 = t3342*t3550;
  t3617 = 0. + t3339 + t3594;
  t171 = Sin(var1[5]);
  t3696 = t3342*t3292;
  t3697 = t188*t3550;
  t3704 = 0. + t3696 + t3697;
  t134 = Sin(var1[3]);
  t4237 = -0.294604*t769;
  t4247 = 0.2550318833994125*t680;
  t4307 = -0.594863*t977;
  t4310 = t4237 + t4247 + t4307;
  t4369 = -0.594863*t1232;
  t4375 = 0.747896*t1279;
  t4394 = -0.294604*t1398;
  t4398 = t4369 + t4375 + t4394;
  t4461 = 0.747896*t1517;
  t4516 = -0.10045970693385246*t680;
  t4528 = -0.594863*t1630;
  t4529 = t4461 + t4516 + t4528;
  t4312 = 0.340999127418*t607*t4310;
  t4429 = t1183*t4398;
  t4531 = t1462*t4529;
  t4552 = 0. + t4312 + t4429 + t4531;
  t4599 = t1823*t4310;
  t4639 = t1863*t4398;
  t4640 = 0.340999127418*t607*t4529;
  t4661 = 0. + t4599 + t4639 + t4640;
  t4689 = t2029*t4310;
  t4697 = t2065*t4398;
  t4709 = t2113*t4529;
  t4716 = 0. + t4689 + t4697 + t4709;
  t4597 = 0.340999127418*t512*t4552;
  t4681 = t1803*t4661;
  t4720 = t1999*t4716;
  t4723 = 0. + t4597 + t4681 + t4720;
  t4741 = t2227*t4552;
  t4786 = 0.340999127418*t512*t4661;
  t4823 = t2299*t4716;
  t4835 = 0. + t4741 + t4786 + t4823;
  t4882 = t2420*t4552;
  t4883 = t2447*t4661;
  t4885 = t2485*t4716;
  t4887 = 0. + t4882 + t4883 + t4885;
  t4737 = 0.340999127418*t420*t4723;
  t4868 = t2195*t4835;
  t4888 = t4887*t2572;
  t4892 = 0. + t4737 + t4868 + t4888;
  t4903 = t2680*t4723;
  t4918 = 0.340999127418*t420*t4835;
  t4937 = t4887*t2718;
  t4998 = 0. + t4903 + t4918 + t4937;
  t5018 = t3034*t4887;
  t5029 = t4723*t3087;
  t5036 = t4835*t3133;
  t5052 = 0. + t5018 + t5029 + t5036;
  t4899 = -0.340999127418*t366*t4892;
  t5001 = t2653*t4998;
  t5068 = t2865*t5052;
  t5073 = 0. + t4899 + t5001 + t5068;
  t5084 = t3425*t4892;
  t5090 = -0.340999127418*t366*t4998;
  t5105 = t3475*t5052;
  t5118 = 0. + t5084 + t5090 + t5105;
  t3796 = Cos(var1[3]);
  t3847 = Sin(var1[4]);
  t5081 = -1.*t188*t5073;
  t5134 = t3342*t5118;
  t5141 = 0. + t5081 + t5134;
  t5157 = t3342*t5073;
  t5159 = t188*t5118;
  t5161 = 0. + t5157 + t5159;
  t3916 = Cos(var1[4]);
  t3968 = 0.366501*t2852;
  t3977 = 0. + t3968;
  t4000 = 0.930418*t2852;
  t4053 = 0. + t4000;
  t4142 = -1.000000637725*t366;
  t4167 = 1. + t4142;
  t5309 = -0.366501*t1517;
  t5311 = -0.3172717261340007*t680;
  t5325 = t5309 + t5311;
  t5345 = -0.930418*t769;
  t5356 = -0.12497652119782442*t680;
  t5357 = t5345 + t5356;
  t5361 = -0.366501*t1279;
  t5371 = -0.930418*t1398;
  t5373 = t5361 + t5371;
  t5337 = t5325*t2113;
  t5360 = t5357*t2029;
  t5376 = t2065*t5373;
  t5377 = 0. + t5337 + t5360 + t5376;
  t5398 = 0.340999127418*t607*t5325;
  t5401 = t1823*t5357;
  t5404 = t1863*t5373;
  t5405 = 0. + t5398 + t5401 + t5404;
  t5410 = t1462*t5325;
  t5416 = 0.340999127418*t607*t5357;
  t5417 = t1183*t5373;
  t5424 = 0. + t5410 + t5416 + t5417;
  t5392 = t2299*t5377;
  t5408 = 0.340999127418*t512*t5405;
  t5425 = t2227*t5424;
  t5435 = 0. + t5392 + t5408 + t5425;
  t5458 = t1999*t5377;
  t5467 = t1803*t5405;
  t5481 = 0.340999127418*t512*t5424;
  t5483 = 0. + t5458 + t5467 + t5481;
  t5503 = t2485*t5377;
  t5504 = t2447*t5405;
  t5518 = t2420*t5424;
  t5526 = 0. + t5503 + t5504 + t5518;
  t5445 = t2195*t5435;
  t5497 = 0.340999127418*t420*t5483;
  t5534 = t5526*t2572;
  t5538 = 0. + t5445 + t5497 + t5534;
  t5555 = 0.340999127418*t420*t5435;
  t5559 = t2680*t5483;
  t5576 = t5526*t2718;
  t5581 = 0. + t5555 + t5559 + t5576;
  t5597 = t3034*t5526;
  t5604 = t5483*t3087;
  t5606 = t5435*t3133;
  t5612 = 0. + t5597 + t5604 + t5606;
  t5542 = -0.340999127418*t366*t5538;
  t5589 = t2653*t5581;
  t5613 = t2865*t5612;
  t5619 = 0. + t5542 + t5589 + t5613;
  t5623 = t3425*t5538;
  t5631 = -0.340999127418*t366*t5581;
  t5634 = t3475*t5612;
  t5635 = 0. + t5623 + t5631 + t5634;
  t5622 = -1.*t188*t5619;
  t5636 = t3342*t5635;
  t5641 = 0. + t5622 + t5636;
  t5659 = t3342*t5619;
  t5662 = t188*t5635;
  t5673 = 0. + t5659 + t5662;
  t3650 = -1.*t171*t3617;
  t3742 = t3686*t3704;
  t3744 = 0. + t3650 + t3742;
  t3849 = t3686*t3617;
  t3857 = t171*t3704;
  t3860 = 0. + t3849 + t3857;
  t3865 = t3847*t3860;
  t3999 = t3977*t2622;
  t4125 = t4053*t2728;
  t4175 = t4167*t3148;
  t4183 = 0. + t3999 + t4125 + t4175;
  t4188 = t3916*t4183;
  t4198 = 0. + t3865 + t4188;
  t5150 = -1.*t171*t5141;
  t5172 = t3686*t5161;
  t5175 = 0. + t5150 + t5172;
  t5206 = t3686*t5141;
  t5244 = t171*t5161;
  t5248 = 0. + t5206 + t5244;
  t5253 = t3847*t5248;
  t5257 = t3977*t4892;
  t5267 = t4053*t4998;
  t5278 = t4167*t5052;
  t5279 = 0. + t5257 + t5267 + t5278;
  t5282 = t3916*t5279;
  t5285 = 0. + t5253 + t5282;
  t5645 = -1.*t171*t5641;
  t5685 = t3686*t5673;
  t5700 = 0. + t5645 + t5685;
  t5717 = t3686*t5641;
  t5731 = t171*t5673;
  t5753 = 0. + t5717 + t5731;
  t5781 = t3847*t5753;
  t5785 = t3977*t5538;
  t5791 = t4053*t5581;
  t5804 = t4167*t5612;
  t5807 = 0. + t5785 + t5791 + t5804;
  t5817 = t3916*t5807;
  t5824 = 0. + t5781 + t5817;
  t5985 = 7.500378623168247e-8*var1[11];
  t5988 = 0.402633*t769;
  t5992 = 0.05405252164980434*t680;
  t5993 = 0.061884*t977;
  t5997 = 0.061996937216*t1398;
  t5998 = t5985 + t5988 + t5992 + t5993 + t5997;
  t6009 = 0.061884*t1232;
  t6011 = 0.06199697675299678*t680;
  t6012 = -0.79249*t1279;
  t6017 = 0.324290713329*t977;
  t6018 = 0.402633*t1398;
  t6019 = -0.823260828522*t1630;
  t6020 = 0. + t6009 + t6011 + t6012 + t6017 + t6018 + t6019;
  t6035 = 2.95447451120871e-8*var1[11];
  t6040 = -0.79249*t1517;
  t6048 = -0.6859638518663203*t680;
  t6049 = 0.061996937216*t1279;
  t6054 = 0.061884*t1630;
  t6057 = t6035 + t6040 + t6048 + t6049 + t6054;
  t5966 = 2.281945176511838e-8*var1[10];
  t5967 = -0.5905366811997648*t607;
  t5969 = -0.262809976934*t2113;
  t6007 = 0.340999127418*t607*t5998;
  t6027 = t1183*t6020;
  t6063 = t1462*t6057;
  t6067 = t5966 + t5967 + t5969 + t6007 + t6027 + t6063;
  t6070 = 5.7930615939377813e-8*var1[10];
  t6077 = 0.23261833304643187*t607;
  t6087 = -0.262809976934*t2029;
  t6096 = t1823*t5998;
  t6098 = t1863*t6020;
  t6101 = 0.340999127418*t607*t6057;
  t6102 = t6070 + t6077 + t6087 + t6096 + t6098 + t6101;
  t6107 = -0.26281014453449253*t607;
  t6111 = 0.23261818470000004*t1863;
  t6114 = -0.5905363046000001*t1183;
  t6116 = t2029*t5998;
  t6119 = t2065*t6020;
  t6124 = t2113*t6057;
  t6131 = 0. + t6107 + t6111 + t6114 + t6116 + t6119 + t6124;
  t5952 = -1.5981976069815686e-7*var1[9];
  t5953 = 0.08675267452931407*t512;
  t5954 = 0.039853013046*t2447;
  t6068 = 0.340999127418*t512*t6067;
  t6103 = t1803*t6102;
  t6133 = t1999*t6131;
  t6141 = t5952 + t5953 + t5954 + t6068 + t6103 + t6133;
  t6168 = -6.295460977284962e-8*var1[9];
  t6170 = -0.22023473313910558*t512;
  t6178 = 0.039853013046*t2420;
  t6179 = t2227*t6067;
  t6180 = 0.340999127418*t512*t6102;
  t6185 = t2299*t6131;
  t6226 = t6168 + t6170 + t6178 + t6179 + t6180 + t6185;
  t6258 = 0.039853038461262744*t512;
  t6259 = 0.086752619205*t1999;
  t6266 = -0.22023459268999998*t2299;
  t6270 = t2420*t6067;
  t6276 = t2447*t6102;
  t6285 = t2485*t6131;
  t6286 = 0. + t6258 + t6259 + t6266 + t6270 + t6276 + t6285;
  t5922 = 3.2909349868922137e-7*var1[8];
  t5934 = 0.055653945343889656*t420;
  t6149 = t2680*t6141;
  t6238 = 0.340999127418*t420*t6226;
  t6254 = -0.045000372235*t3087;
  t6287 = t6286*t2718;
  t6293 = t5922 + t5934 + t6149 + t6238 + t6254 + t6287;
  t6296 = 1.296332362046933e-7*var1[8];
  t6300 = -0.14128592423750855*t420;
  t6307 = 0.340999127418*t420*t6141;
  t6309 = t2195*t6226;
  t6311 = t6286*t2572;
  t6325 = -0.045000372235*t3133;
  t6327 = t6296 + t6300 + t6307 + t6309 + t6311 + t6325;
  t6343 = -0.04500040093286238*t420;
  t6348 = t3034*t6286;
  t6353 = -0.141285834136*t2572;
  t6355 = t6141*t3087;
  t6359 = 0.055653909852*t2718;
  t6360 = t6226*t3133;
  t6366 = 0. + t6343 + t6348 + t6353 + t6355 + t6359 + t6360;
  t5911 = 1.296332362046933e-7*var1[7];
  t5912 = 0.07877668146182712*t366;
  t5913 = -0.045000372235*t4053;
  t6295 = t2653*t6293;
  t6330 = -0.340999127418*t366*t6327;
  t6380 = t2865*t6366;
  t6387 = t5911 + t5912 + t5913 + t6295 + t6330 + t6380;
  t6397 = -3.2909349868922137e-7*var1[7];
  t6411 = 0.03103092645718495*t366;
  t6418 = -0.045000372235*t3977;
  t6422 = -0.340999127418*t366*t6293;
  t6431 = t3425*t6327;
  t6437 = t3475*t6366;
  t6445 = t6397 + t6411 + t6418 + t6422 + t6431 + t6437;
  t5910 = 0.091*t188;
  t6390 = -1.*t188*t6387;
  t6446 = t3342*t6445;
  t6448 = 0. + t5910 + t6390 + t6446;
  t6451 = -1.*t3342;
  t6455 = 1. + t6451;
  t6460 = 0.091*t6455;
  t6462 = t3342*t6387;
  t6468 = t188*t6445;
  t6471 = 0. + t6460 + t6462 + t6468;
  t5886 = t3916*t5248;
  t5890 = -1.*t3847*t5279;
  t5891 = 0. + t5886 + t5890;
  t6481 = t3686*t6448;
  t6482 = t171*t6471;
  t6485 = 0. + t6481 + t6482;
  t6498 = -0.04500040093286238*t366;
  t6505 = 0.07877663122399998*t2865;
  t6512 = 0.031030906668*t3475;
  t6518 = t4053*t6293;
  t6519 = t3977*t6327;
  t6521 = t4167*t6366;
  t6523 = 0. + t6498 + t6505 + t6512 + t6518 + t6519 + t6521;
  t5892 = t3916*t5753;
  t5902 = -1.*t3847*t5807;
  t5903 = 0. + t5892 + t5902;
  t6450 = -1.*t171*t6448;
  t6472 = t3686*t6471;
  t6473 = 0. + t6450 + t6472;
  t6494 = t3847*t6485;
  t6536 = t3916*t6523;
  t6541 = 0. + t6494 + t6536;
  t6544 = t3916*t6485;
  t6551 = -1.*t3847*t6523;
  t6552 = 0. + t6544 + t6551;
  t5872 = t3916*t3860;
  t5873 = -1.*t3847*t4183;
  t5885 = 0. + t5872 + t5873;
  t6570 = t5700*t6473;
  t6474 = -1.*t5175*t6473;
  t6595 = -1.*t5700*t6473;
  t6589 = t6473*t3744;
  t6621 = t5175*t6473;
  t6606 = -1.*t6473*t3744;
  t6712 = -1.*t5279*t6523;
  t6658 = t5807*t6523;
  t6740 = t6523*t4183;
  t6724 = -1.*t5807*t6523;
  t6767 = -1.*t6523*t4183;
  t6755 = t5279*t6523;
  t7069 = -1.*t4998*t6293;
  t7070 = -1.*t4892*t6327;
  t7079 = -1.*t5052*t6366;
  t7082 = t7069 + t7070 + t7079;
  t7093 = t5581*t6293;
  t7101 = t5538*t6327;
  t7104 = t5612*t6366;
  t7108 = t7093 + t7101 + t7104;
  t7140 = t6293*t2728;
  t7142 = t2622*t6327;
  t7145 = t6366*t3148;
  t7147 = t7140 + t7142 + t7145;
  t7154 = -1.*t5581*t6293;
  t7155 = -1.*t5538*t6327;
  t7156 = -1.*t5612*t6366;
  t7157 = t7154 + t7155 + t7156;
  t7202 = -1.*t6293*t2728;
  t7203 = -1.*t2622*t6327;
  t7220 = -1.*t6366*t3148;
  t7228 = t7202 + t7203 + t7220;
  t7240 = t4998*t6293;
  t7243 = t4892*t6327;
  t7250 = t5052*t6366;
  t7260 = t7240 + t7243 + t7250;
  t7315 = -1.*t4887*t6286;
  t7322 = -1.*t4723*t6141;
  t7323 = -1.*t4835*t6226;
  t7324 = t7315 + t7322 + t7323;
  t7328 = t5526*t6286;
  t7335 = t5483*t6141;
  t7337 = t5435*t6226;
  t7341 = t7328 + t7335 + t7337;
  t7356 = t6286*t2498;
  t7358 = t6141*t2174;
  t7362 = t6226*t2352;
  t7364 = t7356 + t7358 + t7362;
  t7374 = -1.*t5526*t6286;
  t7375 = -1.*t5483*t6141;
  t7376 = -1.*t5435*t6226;
  t7383 = t7374 + t7375 + t7376;
  t7422 = -1.*t6286*t2498;
  t7423 = -1.*t6141*t2174;
  t7429 = -1.*t6226*t2352;
  t7430 = t7422 + t7423 + t7429;
  t7433 = t4887*t6286;
  t7434 = t4723*t6141;
  t7439 = t4835*t6226;
  t7441 = t7433 + t7434 + t7439;
  t7505 = -1.*t4552*t6067;
  t7506 = -1.*t4661*t6102;
  t7512 = -1.*t4716*t6131;
  t7514 = t7505 + t7506 + t7512;
  t7516 = t5424*t6067;
  t7517 = t5405*t6102;
  t7523 = t5377*t6131;
  t7524 = t7516 + t7517 + t7523;
  t7547 = t6067*t1773;
  t7549 = t6102*t1934;
  t7550 = t6131*t2139;
  t7552 = t7547 + t7549 + t7550;
  t7560 = -1.*t5424*t6067;
  t7561 = -1.*t5405*t6102;
  t7562 = -1.*t5377*t6131;
  t7564 = t7560 + t7561 + t7562;
  t7599 = -1.*t6067*t1773;
  t7600 = -1.*t6102*t1934;
  t7606 = -1.*t6131*t2139;
  t7607 = t7599 + t7600 + t7606;
  t7612 = t4552*t6067;
  t7615 = t4661*t6102;
  t7619 = t4716*t6131;
  t7620 = t7612 + t7615 + t7619;
  t7672 = -1.*t4310*t5998;
  t7674 = -1.*t4398*t6020;
  t7676 = -1.*t4529*t6057;
  t7677 = t7672 + t7674 + t7676;
  t7685 = t5357*t5998;
  t7689 = t5373*t6020;
  t7691 = t5325*t6057;
  t7692 = t7685 + t7689 + t7691;
  t7714 = t1129*t5998;
  t7716 = t1442*t6020;
  t7718 = t6057*t1645;
  t7721 = t7714 + t7716 + t7718;
  t7723 = -1.*t5357*t5998;
  t7724 = -1.*t5373*t6020;
  t7725 = -1.*t5325*t6057;
  t7726 = t7723 + t7724 + t7725;
  t7744 = -1.*t1129*t5998;
  t7746 = -1.*t1442*t6020;
  t7747 = -1.*t6057*t1645;
  t7748 = t7744 + t7746 + t7747;
  t7751 = t4310*t5998;
  t7752 = t4398*t6020;
  t7755 = t4529*t6057;
  t7756 = t7751 + t7752 + t7755;
  p_output1[0]=0. - 1.*t134*t3744 + t3796*t4198;
  p_output1[1]=0. - 1.*t134*t5175 + t3796*t5285;
  p_output1[2]=0. - 1.*t134*t5700 + t3796*t5824;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t3744*t3796 + t134*t4198;
  p_output1[7]=0. + t3796*t5175 + t134*t5285;
  p_output1[8]=0. + t3796*t5700 + t134*t5824;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5885;
  p_output1[13]=t5891;
  p_output1[14]=t5903;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5903*(t6474 - 1.*t5285*t6541 - 1.*t5891*t6552) + t5891*(t5824*t6541 + t5903*t6552 + t6570);
  p_output1[19]=t5903*(t4198*t6541 + t5885*t6552 + t6589) + t5885*(-1.*t5824*t6541 - 1.*t5903*t6552 + t6595);
  p_output1[20]=t5891*(-1.*t4198*t6541 - 1.*t5885*t6552 + t6606) + t5885*(t5285*t6541 + t5891*t6552 + t6621);
  p_output1[21]=t5885;
  p_output1[22]=t5891;
  p_output1[23]=t5903;
  p_output1[24]=t5175*(t5753*t6485 + t6570 + t6658) + t5700*(t6474 - 1.*t5248*t6485 + t6712);
  p_output1[25]=t3744*(-1.*t5753*t6485 + t6595 + t6724) + t5700*(t3860*t6485 + t6589 + t6740);
  p_output1[26]=t3744*(t5248*t6485 + t6621 + t6755) + t5175*(-1.*t3860*t6485 + t6606 + t6767);
  p_output1[27]=t3744;
  p_output1[28]=t5175;
  p_output1[29]=t5700;
  p_output1[30]=t5279*(t5641*t6448 + t5673*t6471 + t6658) + t5807*(-1.*t5141*t6448 - 1.*t5161*t6471 + t6712);
  p_output1[31]=t4183*(-1.*t5641*t6448 - 1.*t5673*t6471 + t6724) + t5807*(t3617*t6448 + t3704*t6471 + t6740);
  p_output1[32]=t4183*(t5141*t6448 + t5161*t6471 + t6755) + t5279*(-1.*t3617*t6448 - 1.*t3704*t6471 + t6767);
  p_output1[33]=t4183;
  p_output1[34]=t5279;
  p_output1[35]=t5807;
  p_output1[36]=0.091*t3550 - 1.*t5279*(t5619*t6387 + t5635*t6445 + t6658) - 1.*t5807*(-1.*t5073*t6387 - 1.*t5118*t6445 + t6712);
  p_output1[37]=0.091*t5118 - 1.*t4183*(-1.*t5619*t6387 - 1.*t5635*t6445 + t6724) - 1.*t5807*(t3292*t6387 + t3550*t6445 + t6740);
  p_output1[38]=0.091*t5635 - 1.*t4183*(t5073*t6387 + t5118*t6445 + t6755) - 1.*t5279*(-1.*t3292*t6387 - 1.*t3550*t6445 + t6767);
  p_output1[39]=0. - 1.*t2622*t3977 - 1.*t2728*t4053 - 1.*t3148*t4167;
  p_output1[40]=0. - 1.*t3977*t4892 - 1.*t4053*t4998 - 1.*t4167*t5052;
  p_output1[41]=0. - 1.*t3977*t5538 - 1.*t4053*t5581 - 1.*t4167*t5612;
  p_output1[42]=-0.016493*t2622 - 0.041869*t2728 - 0.084668*t3148 - 0.930418*(t5538*t7082 + t4892*t7108) + 0.366501*(t5581*t7082 + t4998*t7108);
  p_output1[43]=-0.016493*t4892 - 0.041869*t4998 - 0.084668*t5052 - 0.930418*(t5538*t7147 + t2622*t7157) + 0.366501*(t5581*t7147 + t2728*t7157);
  p_output1[44]=-0.016493*t5538 - 0.041869*t5581 - 0.084668*t5612 - 0.930418*(t4892*t7228 + t2622*t7260) + 0.366501*(t4998*t7228 + t2728*t7260);
  p_output1[45]=0. - 0.930418*t2622 + 0.366501*t2728;
  p_output1[46]=0. - 0.930418*t4892 + 0.366501*t4998;
  p_output1[47]=0. - 0.930418*t5538 + 0.366501*t5581;
  p_output1[48]=0.016493*t2174 - 0.041869*t2352 + 0.151852*t2498 + 0.930418*(t5483*t7324 + t4723*t7341) + 0.366501*(t5435*t7324 + t4835*t7341);
  p_output1[49]=0.016493*t4723 - 0.041869*t4835 + 0.151852*t4887 + 0.930418*(t5483*t7364 + t2174*t7383) + 0.366501*(t5435*t7364 + t2352*t7383);
  p_output1[50]=-0.041869*t5435 + 0.016493*t5483 + 0.151852*t5526 + 0.930418*(t4723*t7430 + t2174*t7441) + 0.366501*(t4835*t7430 + t2352*t7441);
  p_output1[51]=0. + 0.930418*t2174 + 0.366501*t2352;
  p_output1[52]=0. + 0.930418*t4723 + 0.366501*t4835;
  p_output1[53]=0. + 0.366501*t5435 + 0.930418*t5483;
  p_output1[54]=-0.03708*t1773 + 0.014606*t1934 - 0.236705*t2139 - 0.366501*(t5424*t7514 + t4552*t7524) - 0.930418*(t5405*t7514 + t4661*t7524);
  p_output1[55]=-0.03708*t4552 + 0.014606*t4661 - 0.236705*t4716 - 0.366501*(t5424*t7552 + t1773*t7564) - 0.930418*(t5405*t7552 + t1934*t7564);
  p_output1[56]=-0.236705*t5377 + 0.014606*t5405 - 0.03708*t5424 - 0.366501*(t4552*t7607 + t1773*t7620) - 0.930418*(t4661*t7607 + t1934*t7620);
  p_output1[57]=0. - 0.366501*t1773 - 0.930418*t1934;
  p_output1[58]=0. - 0.366501*t4552 - 0.930418*t4661;
  p_output1[59]=0. - 0.930418*t5405 - 0.366501*t5424;
  p_output1[60]=-0.09632*t1129 - 0.6347*t1442 + 0.244523*t1645 - 0.930418*(t5357*t7677 + t4310*t7692) - 0.366501*(t5325*t7677 + t4529*t7692);
  p_output1[61]=-0.09632*t4310 - 0.6347*t4398 + 0.244523*t4529 - 0.930418*(t5357*t7721 + t1129*t7726) - 0.366501*(t5325*t7721 + t1645*t7726);
  p_output1[62]=0.244523*t5325 - 0.09632*t5357 - 0.6347*t5373 - 0.930418*(t4310*t7748 + t1129*t7756) - 0.366501*(t4529*t7748 + t1645*t7756);
  p_output1[63]=0. - 0.930418*t1129 - 0.366501*t1645;
  p_output1[64]=0. - 0.930418*t4310 - 0.366501*t4529;
  p_output1[65]=0. - 0.366501*t5325 - 0.930418*t5357;
  p_output1[66]=3.546885382343934e-7;
  p_output1[67]=-0.0001405132937357806;
  p_output1[68]=-1.1680110796608023e-7;
  p_output1[69]=1.9655299995924302e-7;
  p_output1[70]=2.3257599990333944e-7;
  p_output1[71]=1.000000637725;
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



void Jb_left_toe_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

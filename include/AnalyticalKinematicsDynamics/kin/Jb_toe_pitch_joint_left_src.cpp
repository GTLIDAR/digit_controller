/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:35:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_toe_pitch_joint_left_src.h"

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
  double t565;
  double t582;
  double t614;
  double t727;
  double t419;
  double t425;
  double t526;
  double t331;
  double t383;
  double t398;
  double t709;
  double t712;
  double t713;
  double t724;
  double t736;
  double t755;
  double t764;
  double t780;
  double t842;
  double t958;
  double t1000;
  double t1016;
  double t1046;
  double t1060;
  double t1087;
  double t1088;
  double t1095;
  double t1109;
  double t1121;
  double t1141;
  double t1158;
  double t1172;
  double t1184;
  double t1230;
  double t1236;
  double t1282;
  double t1322;
  double t233;
  double t245;
  double t254;
  double t811;
  double t894;
  double t897;
  double t1130;
  double t1132;
  double t1134;
  double t1323;
  double t1333;
  double t1407;
  double t1472;
  double t1534;
  double t1597;
  double t1638;
  double t1645;
  double t1646;
  double t1649;
  double t1678;
  double t1722;
  double t1734;
  double t1739;
  double t1742;
  double t1747;
  double t1766;
  double t1825;
  double t1826;
  double t1865;
  double t1873;
  double t193;
  double t209;
  double t227;
  double t1343;
  double t1366;
  double t1404;
  double t1658;
  double t1688;
  double t1710;
  double t1876;
  double t1878;
  double t1961;
  double t2009;
  double t2013;
  double t2017;
  double t2020;
  double t2022;
  double t2059;
  double t2076;
  double t2106;
  double t2118;
  double t2120;
  double t2128;
  double t2134;
  double t2165;
  double t2169;
  double t2185;
  double t2249;
  double t2250;
  double t2259;
  double t1900;
  double t1957;
  double t1958;
  double t2082;
  double t2282;
  double t2284;
  double t2285;
  double t2291;
  double t2333;
  double t2354;
  double t2376;
  double t2385;
  double t2400;
  double t2413;
  double t2469;
  double t2474;
  double t2507;
  double t2533;
  double t2535;
  double t2540;
  double t2565;
  double t2583;
  double t2646;
  double t2653;
  double t2661;
  double t2676;
  double t2688;
  double t2763;
  double t2302;
  double t2316;
  double t2319;
  double t2492;
  double t2521;
  double t2527;
  double t2694;
  double t2709;
  double t190;
  double t2802;
  double t2811;
  double t2842;
  double t2844;
  double t2859;
  double t2860;
  double t2888;
  double t2896;
  double t3089;
  double t2753;
  double t2907;
  double t2941;
  double t80;
  double t3107;
  double t3113;
  double t3197;
  double t21;
  double t3708;
  double t3737;
  double t3742;
  double t3746;
  double t3767;
  double t3783;
  double t3787;
  double t3795;
  double t3831;
  double t3834;
  double t3844;
  double t3848;
  double t3753;
  double t3803;
  double t3851;
  double t3867;
  double t3878;
  double t3881;
  double t3898;
  double t3905;
  double t3929;
  double t3943;
  double t3958;
  double t3972;
  double t3868;
  double t3926;
  double t3994;
  double t3995;
  double t4021;
  double t4028;
  double t4036;
  double t4040;
  double t4052;
  double t4060;
  double t4061;
  double t4063;
  double t4009;
  double t4050;
  double t4067;
  double t4095;
  double t4113;
  double t4116;
  double t4126;
  double t4166;
  double t4182;
  double t4186;
  double t4191;
  double t4195;
  double t4106;
  double t4174;
  double t4202;
  double t4204;
  double t4232;
  double t4250;
  double t4269;
  double t4277;
  double t3303;
  double t3305;
  double t4225;
  double t4285;
  double t4289;
  double t4302;
  double t4303;
  double t4306;
  double t3432;
  double t3433;
  double t3448;
  double t3480;
  double t3496;
  double t3569;
  double t3575;
  double t4408;
  double t4411;
  double t4415;
  double t4434;
  double t4435;
  double t4445;
  double t4459;
  double t4472;
  double t4475;
  double t4432;
  double t4451;
  double t4476;
  double t4477;
  double t4482;
  double t4483;
  double t4484;
  double t4485;
  double t4503;
  double t4515;
  double t4521;
  double t4523;
  double t4478;
  double t4500;
  double t4529;
  double t4532;
  double t4550;
  double t4564;
  double t4583;
  double t4586;
  double t4597;
  double t4599;
  double t4605;
  double t4608;
  double t4549;
  double t4592;
  double t4620;
  double t4625;
  double t4658;
  double t4670;
  double t4675;
  double t4678;
  double t4729;
  double t4734;
  double t4737;
  double t4740;
  double t4653;
  double t4691;
  double t4745;
  double t4749;
  double t4755;
  double t4758;
  double t4763;
  double t4766;
  double t4754;
  double t4767;
  double t4771;
  double t4775;
  double t4777;
  double t4779;
  double t2975;
  double t3200;
  double t3263;
  double t3341;
  double t3394;
  double t3417;
  double t3429;
  double t3464;
  double t3562;
  double t3643;
  double t3655;
  double t3672;
  double t3673;
  double t4293;
  double t4309;
  double t4311;
  double t4342;
  double t4345;
  double t4347;
  double t4352;
  double t4361;
  double t4365;
  double t4376;
  double t4379;
  double t4384;
  double t4385;
  double t4773;
  double t4780;
  double t4791;
  double t4809;
  double t4821;
  double t4823;
  double t4832;
  double t4840;
  double t4841;
  double t4847;
  double t4848;
  double t4851;
  double t4855;
  double t4991;
  double t4992;
  double t4995;
  double t4999;
  double t5001;
  double t5004;
  double t5021;
  double t5022;
  double t5024;
  double t5027;
  double t5028;
  double t5029;
  double t5033;
  double t5042;
  double t5045;
  double t5051;
  double t5057;
  double t5063;
  double t5065;
  double t4963;
  double t4971;
  double t4986;
  double t5011;
  double t5038;
  double t5069;
  double t5070;
  double t5087;
  double t5101;
  double t5105;
  double t5106;
  double t5108;
  double t5109;
  double t5111;
  double t5113;
  double t5114;
  double t5117;
  double t5118;
  double t5120;
  double t5122;
  double t5124;
  double t4956;
  double t4960;
  double t4961;
  double t5084;
  double t5112;
  double t5126;
  double t5127;
  double t5139;
  double t5151;
  double t5153;
  double t5154;
  double t5158;
  double t5160;
  double t5166;
  double t5194;
  double t5198;
  double t5201;
  double t5207;
  double t5212;
  double t5220;
  double t5221;
  double t4942;
  double t4944;
  double t5130;
  double t5173;
  double t5193;
  double t5224;
  double t5227;
  double t5236;
  double t5237;
  double t5240;
  double t5252;
  double t5254;
  double t5264;
  double t5265;
  double t5271;
  double t5273;
  double t5276;
  double t5278;
  double t5282;
  double t5284;
  double t5289;
  double t4928;
  double t4935;
  double t4940;
  double t5228;
  double t5266;
  double t5290;
  double t5300;
  double t5303;
  double t5305;
  double t5312;
  double t5315;
  double t5317;
  double t5319;
  double t5320;
  double t4927;
  double t5301;
  double t5321;
  double t5325;
  double t5332;
  double t5336;
  double t5337;
  double t5338;
  double t5340;
  double t5341;
  double t4910;
  double t4913;
  double t4918;
  double t5358;
  double t5361;
  double t5363;
  double t5371;
  double t5374;
  double t5376;
  double t5382;
  double t5383;
  double t5398;
  double t5403;
  double t4922;
  double t4923;
  double t4924;
  double t5329;
  double t5352;
  double t5354;
  double t5365;
  double t5408;
  double t5410;
  double t5426;
  double t5427;
  double t5431;
  double t4906;
  double t4907;
  double t4908;
  double t5440;
  double t5356;
  double t5469;
  double t5456;
  double t5498;
  double t5485;
  double t5543;
  double t5524;
  double t5574;
  double t5563;
  double t5604;
  double t5590;
  double t5953;
  double t5959;
  double t5962;
  double t5963;
  double t5967;
  double t5969;
  double t5971;
  double t5975;
  double t6014;
  double t6017;
  double t6019;
  double t6023;
  double t6027;
  double t6028;
  double t6035;
  double t6036;
  double t6076;
  double t6084;
  double t6088;
  double t6095;
  double t6110;
  double t6111;
  double t6120;
  double t6124;
  double t6198;
  double t6202;
  double t6208;
  double t6214;
  double t6229;
  double t6230;
  double t6234;
  double t6235;
  double t6273;
  double t6275;
  double t6276;
  double t6278;
  double t6285;
  double t6286;
  double t6287;
  double t6305;
  double t6343;
  double t6347;
  double t6355;
  double t6363;
  double t6365;
  double t6366;
  double t6369;
  double t6373;
  double t6450;
  double t6451;
  double t6454;
  double t6459;
  double t6466;
  double t6468;
  double t6470;
  double t6472;
  double t6508;
  double t6512;
  double t6514;
  double t6522;
  double t6524;
  double t6532;
  double t6533;
  double t6535;
  double t6603;
  double t6604;
  double t6609;
  double t6611;
  double t6613;
  double t6617;
  double t6619;
  double t6623;
  double t6672;
  double t6673;
  double t6676;
  double t6677;
  double t6680;
  double t6681;
  double t6682;
  double t6683;
  double t6715;
  double t6717;
  double t6719;
  double t6723;
  double t6736;
  double t6737;
  double t6740;
  double t6741;
  double t6780;
  double t6796;
  double t6797;
  double t6800;
  double t6815;
  double t6820;
  double t6821;
  double t6823;
  t565 = Cos(var1[11]);
  t582 = -1.*t565;
  t614 = 1. + t582;
  t727 = Sin(var1[11]);
  t419 = Cos(var1[10]);
  t425 = -1.*t419;
  t526 = 1. + t425;
  t331 = Cos(var1[9]);
  t383 = -1.*t331;
  t398 = 1. + t383;
  t709 = -0.134322983001*t614;
  t712 = 1. + t709;
  t713 = -0.218018*t712;
  t724 = 0.18873312805116788*t614;
  t736 = -0.366501*t727;
  t755 = 0. + t736;
  t764 = 0.803828*t755;
  t780 = t713 + t724 + t764;
  t842 = Sin(var1[10]);
  t958 = -1.000000637725*t614;
  t1000 = 1. + t958;
  t1016 = 0.803828*t1000;
  t1046 = -0.930418*t727;
  t1060 = 0. + t1046;
  t1087 = 0.553471*t1060;
  t1088 = 0.366501*t727;
  t1095 = 0. + t1088;
  t1109 = -0.218018*t1095;
  t1121 = t1016 + t1087 + t1109;
  t1141 = -0.8656776547239999*t614;
  t1158 = 1. + t1141;
  t1172 = 0.553471*t1158;
  t1184 = -0.07434394776141752*t614;
  t1230 = 0.930418*t727;
  t1236 = 0. + t1230;
  t1282 = 0.803828*t1236;
  t1322 = t1172 + t1184 + t1282;
  t233 = Cos(var1[8]);
  t245 = -1.*t233;
  t254 = 1. + t245;
  t811 = 0.340999127418*t526*t780;
  t894 = 0.930418*t842;
  t897 = 0. + t894;
  t1130 = t897*t1121;
  t1132 = -0.8656776547239999*t526;
  t1134 = 1. + t1132;
  t1323 = t1134*t1322;
  t1333 = 0. + t811 + t1130 + t1323;
  t1407 = -0.134322983001*t526;
  t1472 = 1. + t1407;
  t1534 = t1472*t780;
  t1597 = -0.366501*t842;
  t1638 = 0. + t1597;
  t1645 = t1638*t1121;
  t1646 = 0.340999127418*t526*t1322;
  t1649 = 0. + t1534 + t1645 + t1646;
  t1678 = Sin(var1[9]);
  t1722 = 0.366501*t842;
  t1734 = 0. + t1722;
  t1739 = t1734*t780;
  t1742 = -1.000000637725*t526;
  t1747 = 1. + t1742;
  t1766 = t1747*t1121;
  t1825 = -0.930418*t842;
  t1826 = 0. + t1825;
  t1865 = t1826*t1322;
  t1873 = 0. + t1739 + t1766 + t1865;
  t193 = Cos(var1[7]);
  t209 = -1.*t193;
  t227 = 1. + t209;
  t1343 = 0.340999127418*t398*t1333;
  t1366 = -0.134322983001*t398;
  t1404 = 1. + t1366;
  t1658 = t1404*t1649;
  t1688 = -0.366501*t1678;
  t1710 = 0. + t1688;
  t1876 = t1710*t1873;
  t1878 = 0. + t1343 + t1658 + t1876;
  t1961 = -0.8656776547239999*t398;
  t2009 = 1. + t1961;
  t2013 = t2009*t1333;
  t2017 = 0.340999127418*t398*t1649;
  t2020 = 0.930418*t1678;
  t2022 = 0. + t2020;
  t2059 = t2022*t1873;
  t2076 = 0. + t2013 + t2017 + t2059;
  t2106 = -0.930418*t1678;
  t2118 = 0. + t2106;
  t2120 = t2118*t1333;
  t2128 = 0.366501*t1678;
  t2134 = 0. + t2128;
  t2165 = t2134*t1649;
  t2169 = -1.000000637725*t398;
  t2185 = 1. + t2169;
  t2249 = t2185*t1873;
  t2250 = 0. + t2120 + t2165 + t2249;
  t2259 = Sin(var1[8]);
  t1900 = 0.340999127418*t254*t1878;
  t1957 = -0.8656776547239999*t254;
  t1958 = 1. + t1957;
  t2082 = t1958*t2076;
  t2282 = -0.930418*t2259;
  t2284 = 0. + t2282;
  t2285 = t2250*t2284;
  t2291 = 0. + t1900 + t2082 + t2285;
  t2333 = -0.134322983001*t254;
  t2354 = 1. + t2333;
  t2376 = t2354*t1878;
  t2385 = 0.340999127418*t254*t2076;
  t2400 = 0.366501*t2259;
  t2413 = 0. + t2400;
  t2469 = t2250*t2413;
  t2474 = 0. + t2376 + t2385 + t2469;
  t2507 = Sin(var1[7]);
  t2533 = -1.000000637725*t254;
  t2535 = 1. + t2533;
  t2540 = t2535*t2250;
  t2565 = -0.366501*t2259;
  t2583 = 0. + t2565;
  t2646 = t1878*t2583;
  t2653 = 0.930418*t2259;
  t2661 = 0. + t2653;
  t2676 = t2076*t2661;
  t2688 = 0. + t2540 + t2646 + t2676;
  t2763 = Cos(var1[6]);
  t2302 = -0.340999127418*t227*t2291;
  t2316 = -0.8656776547239999*t227;
  t2319 = 1. + t2316;
  t2492 = t2319*t2474;
  t2521 = -0.930418*t2507;
  t2527 = 0. + t2521;
  t2694 = t2527*t2688;
  t2709 = 0. + t2302 + t2492 + t2694;
  t190 = Sin(var1[6]);
  t2802 = -0.134322983001*t227;
  t2811 = 1. + t2802;
  t2842 = t2811*t2291;
  t2844 = -0.340999127418*t227*t2474;
  t2859 = -0.366501*t2507;
  t2860 = 0. + t2859;
  t2888 = t2860*t2688;
  t2896 = 0. + t2842 + t2844 + t2888;
  t3089 = Cos(var1[5]);
  t2753 = -1.*t190*t2709;
  t2907 = t2763*t2896;
  t2941 = 0. + t2753 + t2907;
  t80 = Sin(var1[5]);
  t3107 = t2763*t2709;
  t3113 = t190*t2896;
  t3197 = 0. + t3107 + t3113;
  t21 = Sin(var1[3]);
  t3708 = -0.294604*t712;
  t3737 = 0.2550318833994125*t614;
  t3742 = -0.594863*t755;
  t3746 = t3708 + t3737 + t3742;
  t3767 = -0.594863*t1000;
  t3783 = 0.747896*t1060;
  t3787 = -0.294604*t1095;
  t3795 = t3767 + t3783 + t3787;
  t3831 = 0.747896*t1158;
  t3834 = -0.10045970693385246*t614;
  t3844 = -0.594863*t1236;
  t3848 = t3831 + t3834 + t3844;
  t3753 = 0.340999127418*t526*t3746;
  t3803 = t897*t3795;
  t3851 = t1134*t3848;
  t3867 = 0. + t3753 + t3803 + t3851;
  t3878 = t1472*t3746;
  t3881 = t1638*t3795;
  t3898 = 0.340999127418*t526*t3848;
  t3905 = 0. + t3878 + t3881 + t3898;
  t3929 = t1734*t3746;
  t3943 = t1747*t3795;
  t3958 = t1826*t3848;
  t3972 = 0. + t3929 + t3943 + t3958;
  t3868 = 0.340999127418*t398*t3867;
  t3926 = t1404*t3905;
  t3994 = t1710*t3972;
  t3995 = 0. + t3868 + t3926 + t3994;
  t4021 = t2009*t3867;
  t4028 = 0.340999127418*t398*t3905;
  t4036 = t2022*t3972;
  t4040 = 0. + t4021 + t4028 + t4036;
  t4052 = t2118*t3867;
  t4060 = t2134*t3905;
  t4061 = t2185*t3972;
  t4063 = 0. + t4052 + t4060 + t4061;
  t4009 = 0.340999127418*t254*t3995;
  t4050 = t1958*t4040;
  t4067 = t4063*t2284;
  t4095 = 0. + t4009 + t4050 + t4067;
  t4113 = t2354*t3995;
  t4116 = 0.340999127418*t254*t4040;
  t4126 = t4063*t2413;
  t4166 = 0. + t4113 + t4116 + t4126;
  t4182 = t2535*t4063;
  t4186 = t3995*t2583;
  t4191 = t4040*t2661;
  t4195 = 0. + t4182 + t4186 + t4191;
  t4106 = -0.340999127418*t227*t4095;
  t4174 = t2319*t4166;
  t4202 = t2527*t4195;
  t4204 = 0. + t4106 + t4174 + t4202;
  t4232 = t2811*t4095;
  t4250 = -0.340999127418*t227*t4166;
  t4269 = t2860*t4195;
  t4277 = 0. + t4232 + t4250 + t4269;
  t3303 = Cos(var1[3]);
  t3305 = Sin(var1[4]);
  t4225 = -1.*t190*t4204;
  t4285 = t2763*t4277;
  t4289 = 0. + t4225 + t4285;
  t4302 = t2763*t4204;
  t4303 = t190*t4277;
  t4306 = 0. + t4302 + t4303;
  t3432 = Cos(var1[4]);
  t3433 = 0.366501*t2507;
  t3448 = 0. + t3433;
  t3480 = 0.930418*t2507;
  t3496 = 0. + t3480;
  t3569 = -1.000000637725*t227;
  t3575 = 1. + t3569;
  t4408 = -0.366501*t1158;
  t4411 = -0.3172717261340007*t614;
  t4415 = t4408 + t4411;
  t4434 = -0.930418*t712;
  t4435 = -0.12497652119782442*t614;
  t4445 = t4434 + t4435;
  t4459 = -0.366501*t1060;
  t4472 = -0.930418*t1095;
  t4475 = t4459 + t4472;
  t4432 = t4415*t1826;
  t4451 = t4445*t1734;
  t4476 = t1747*t4475;
  t4477 = 0. + t4432 + t4451 + t4476;
  t4482 = 0.340999127418*t526*t4415;
  t4483 = t1472*t4445;
  t4484 = t1638*t4475;
  t4485 = 0. + t4482 + t4483 + t4484;
  t4503 = t1134*t4415;
  t4515 = 0.340999127418*t526*t4445;
  t4521 = t897*t4475;
  t4523 = 0. + t4503 + t4515 + t4521;
  t4478 = t2022*t4477;
  t4500 = 0.340999127418*t398*t4485;
  t4529 = t2009*t4523;
  t4532 = 0. + t4478 + t4500 + t4529;
  t4550 = t1710*t4477;
  t4564 = t1404*t4485;
  t4583 = 0.340999127418*t398*t4523;
  t4586 = 0. + t4550 + t4564 + t4583;
  t4597 = t2185*t4477;
  t4599 = t2134*t4485;
  t4605 = t2118*t4523;
  t4608 = 0. + t4597 + t4599 + t4605;
  t4549 = t1958*t4532;
  t4592 = 0.340999127418*t254*t4586;
  t4620 = t4608*t2284;
  t4625 = 0. + t4549 + t4592 + t4620;
  t4658 = 0.340999127418*t254*t4532;
  t4670 = t2354*t4586;
  t4675 = t4608*t2413;
  t4678 = 0. + t4658 + t4670 + t4675;
  t4729 = t2535*t4608;
  t4734 = t4586*t2583;
  t4737 = t4532*t2661;
  t4740 = 0. + t4729 + t4734 + t4737;
  t4653 = -0.340999127418*t227*t4625;
  t4691 = t2319*t4678;
  t4745 = t2527*t4740;
  t4749 = 0. + t4653 + t4691 + t4745;
  t4755 = t2811*t4625;
  t4758 = -0.340999127418*t227*t4678;
  t4763 = t2860*t4740;
  t4766 = 0. + t4755 + t4758 + t4763;
  t4754 = -1.*t190*t4749;
  t4767 = t2763*t4766;
  t4771 = 0. + t4754 + t4767;
  t4775 = t2763*t4749;
  t4777 = t190*t4766;
  t4779 = 0. + t4775 + t4777;
  t2975 = -1.*t80*t2941;
  t3200 = t3089*t3197;
  t3263 = 0. + t2975 + t3200;
  t3341 = t3089*t2941;
  t3394 = t80*t3197;
  t3417 = 0. + t3341 + t3394;
  t3429 = t3305*t3417;
  t3464 = t3448*t2291;
  t3562 = t3496*t2474;
  t3643 = t3575*t2688;
  t3655 = 0. + t3464 + t3562 + t3643;
  t3672 = t3432*t3655;
  t3673 = 0. + t3429 + t3672;
  t4293 = -1.*t80*t4289;
  t4309 = t3089*t4306;
  t4311 = 0. + t4293 + t4309;
  t4342 = t3089*t4289;
  t4345 = t80*t4306;
  t4347 = 0. + t4342 + t4345;
  t4352 = t3305*t4347;
  t4361 = t3448*t4095;
  t4365 = t3496*t4166;
  t4376 = t3575*t4195;
  t4379 = 0. + t4361 + t4365 + t4376;
  t4384 = t3432*t4379;
  t4385 = 0. + t4352 + t4384;
  t4773 = -1.*t80*t4771;
  t4780 = t3089*t4779;
  t4791 = 0. + t4773 + t4780;
  t4809 = t3089*t4771;
  t4821 = t80*t4779;
  t4823 = 0. + t4809 + t4821;
  t4832 = t3305*t4823;
  t4840 = t3448*t4625;
  t4841 = t3496*t4678;
  t4847 = t3575*t4740;
  t4848 = 0. + t4840 + t4841 + t4847;
  t4851 = t3432*t4848;
  t4855 = 0. + t4832 + t4851;
  t4991 = 7.500378623168247e-8*var1[11];
  t4992 = 0.402602*t712;
  t4995 = 0.054078778582615505*t614;
  t4999 = 0.061997*t755;
  t5001 = 0.061996937216*t1095;
  t5004 = t4991 + t4992 + t4995 + t4999 + t5001;
  t5021 = 0.061997*t1000;
  t5022 = 0.06199697675299678*t614;
  t5024 = -0.792413*t1060;
  t5027 = 0.324290713329*t755;
  t5028 = 0.402602*t1095;
  t5029 = -0.823260828522*t1236;
  t5033 = 0. + t5021 + t5022 + t5024 + t5027 + t5028 + t5029;
  t5042 = 2.95447451120871e-8*var1[11];
  t5045 = -0.792413*t1158;
  t5051 = -0.6859744228392701*t614;
  t5057 = 0.061996937216*t1060;
  t5063 = 0.061997*t1236;
  t5065 = t5042 + t5045 + t5051 + t5057 + t5063;
  t4963 = 2.281945176511838e-8*var1[10];
  t4971 = -0.5905366811997648*t526;
  t4986 = -0.262809976934*t1826;
  t5011 = 0.340999127418*t526*t5004;
  t5038 = t897*t5033;
  t5069 = t1134*t5065;
  t5070 = t4963 + t4971 + t4986 + t5011 + t5038 + t5069;
  t5087 = 5.7930615939377813e-8*var1[10];
  t5101 = 0.23261833304643187*t526;
  t5105 = -0.262809976934*t1734;
  t5106 = t1472*t5004;
  t5108 = t1638*t5033;
  t5109 = 0.340999127418*t526*t5065;
  t5111 = t5087 + t5101 + t5105 + t5106 + t5108 + t5109;
  t5113 = -0.26281014453449253*t526;
  t5114 = 0.23261818470000004*t1638;
  t5117 = -0.5905363046000001*t897;
  t5118 = t1734*t5004;
  t5120 = t1747*t5033;
  t5122 = t1826*t5065;
  t5124 = 0. + t5113 + t5114 + t5117 + t5118 + t5120 + t5122;
  t4956 = -1.5981976069815686e-7*var1[9];
  t4960 = 0.08675267452931407*t398;
  t4961 = 0.039853013046*t2134;
  t5084 = 0.340999127418*t398*t5070;
  t5112 = t1404*t5111;
  t5126 = t1710*t5124;
  t5127 = t4956 + t4960 + t4961 + t5084 + t5112 + t5126;
  t5139 = -6.295460977284962e-8*var1[9];
  t5151 = -0.22023473313910558*t398;
  t5153 = 0.039853013046*t2118;
  t5154 = t2009*t5070;
  t5158 = 0.340999127418*t398*t5111;
  t5160 = t2022*t5124;
  t5166 = t5139 + t5151 + t5153 + t5154 + t5158 + t5160;
  t5194 = 0.039853038461262744*t398;
  t5198 = 0.086752619205*t1710;
  t5201 = -0.22023459268999998*t2022;
  t5207 = t2118*t5070;
  t5212 = t2134*t5111;
  t5220 = t2185*t5124;
  t5221 = 0. + t5194 + t5198 + t5201 + t5207 + t5212 + t5220;
  t4942 = 3.2909349868922137e-7*var1[8];
  t4944 = 0.055653945343889656*t254;
  t5130 = t2354*t5127;
  t5173 = 0.340999127418*t254*t5166;
  t5193 = -0.045000372235*t2583;
  t5224 = t5221*t2413;
  t5227 = t4942 + t4944 + t5130 + t5173 + t5193 + t5224;
  t5236 = 1.296332362046933e-7*var1[8];
  t5237 = -0.14128592423750855*t254;
  t5240 = 0.340999127418*t254*t5127;
  t5252 = t1958*t5166;
  t5254 = t5221*t2284;
  t5264 = -0.045000372235*t2661;
  t5265 = t5236 + t5237 + t5240 + t5252 + t5254 + t5264;
  t5271 = -0.04500040093286238*t254;
  t5273 = t2535*t5221;
  t5276 = -0.141285834136*t2284;
  t5278 = t5127*t2583;
  t5282 = 0.055653909852*t2413;
  t5284 = t5166*t2661;
  t5289 = 0. + t5271 + t5273 + t5276 + t5278 + t5282 + t5284;
  t4928 = 1.296332362046933e-7*var1[7];
  t4935 = 0.07877668146182712*t227;
  t4940 = -0.045000372235*t3496;
  t5228 = t2319*t5227;
  t5266 = -0.340999127418*t227*t5265;
  t5290 = t2527*t5289;
  t5300 = t4928 + t4935 + t4940 + t5228 + t5266 + t5290;
  t5303 = -3.2909349868922137e-7*var1[7];
  t5305 = 0.03103092645718495*t227;
  t5312 = -0.045000372235*t3448;
  t5315 = -0.340999127418*t227*t5227;
  t5317 = t2811*t5265;
  t5319 = t2860*t5289;
  t5320 = t5303 + t5305 + t5312 + t5315 + t5317 + t5319;
  t4927 = 0.091*t190;
  t5301 = -1.*t190*t5300;
  t5321 = t2763*t5320;
  t5325 = 0. + t4927 + t5301 + t5321;
  t5332 = -1.*t2763;
  t5336 = 1. + t5332;
  t5337 = 0.091*t5336;
  t5338 = t2763*t5300;
  t5340 = t190*t5320;
  t5341 = 0. + t5337 + t5338 + t5340;
  t4910 = t3432*t4347;
  t4913 = -1.*t3305*t4379;
  t4918 = 0. + t4910 + t4913;
  t5358 = t3089*t5325;
  t5361 = t80*t5341;
  t5363 = 0. + t5358 + t5361;
  t5371 = -0.04500040093286238*t227;
  t5374 = 0.07877663122399998*t2527;
  t5376 = 0.031030906668*t2860;
  t5382 = t3496*t5227;
  t5383 = t3448*t5265;
  t5398 = t3575*t5289;
  t5403 = 0. + t5371 + t5374 + t5376 + t5382 + t5383 + t5398;
  t4922 = t3432*t4823;
  t4923 = -1.*t3305*t4848;
  t4924 = 0. + t4922 + t4923;
  t5329 = -1.*t80*t5325;
  t5352 = t3089*t5341;
  t5354 = 0. + t5329 + t5352;
  t5365 = t3305*t5363;
  t5408 = t3432*t5403;
  t5410 = 0. + t5365 + t5408;
  t5426 = t3432*t5363;
  t5427 = -1.*t3305*t5403;
  t5431 = 0. + t5426 + t5427;
  t4906 = t3432*t3417;
  t4907 = -1.*t3305*t3655;
  t4908 = 0. + t4906 + t4907;
  t5440 = t4791*t5354;
  t5356 = -1.*t4311*t5354;
  t5469 = -1.*t4791*t5354;
  t5456 = t5354*t3263;
  t5498 = t4311*t5354;
  t5485 = -1.*t5354*t3263;
  t5543 = -1.*t4379*t5403;
  t5524 = t4848*t5403;
  t5574 = t5403*t3655;
  t5563 = -1.*t4848*t5403;
  t5604 = -1.*t5403*t3655;
  t5590 = t4379*t5403;
  t5953 = -1.*t4166*t5227;
  t5959 = -1.*t4095*t5265;
  t5962 = -1.*t4195*t5289;
  t5963 = t5953 + t5959 + t5962;
  t5967 = t4678*t5227;
  t5969 = t4625*t5265;
  t5971 = t4740*t5289;
  t5975 = t5967 + t5969 + t5971;
  t6014 = t5227*t2474;
  t6017 = t2291*t5265;
  t6019 = t5289*t2688;
  t6023 = t6014 + t6017 + t6019;
  t6027 = -1.*t4678*t5227;
  t6028 = -1.*t4625*t5265;
  t6035 = -1.*t4740*t5289;
  t6036 = t6027 + t6028 + t6035;
  t6076 = -1.*t5227*t2474;
  t6084 = -1.*t2291*t5265;
  t6088 = -1.*t5289*t2688;
  t6095 = t6076 + t6084 + t6088;
  t6110 = t4166*t5227;
  t6111 = t4095*t5265;
  t6120 = t4195*t5289;
  t6124 = t6110 + t6111 + t6120;
  t6198 = -1.*t4063*t5221;
  t6202 = -1.*t3995*t5127;
  t6208 = -1.*t4040*t5166;
  t6214 = t6198 + t6202 + t6208;
  t6229 = t4608*t5221;
  t6230 = t4586*t5127;
  t6234 = t4532*t5166;
  t6235 = t6229 + t6230 + t6234;
  t6273 = t5221*t2250;
  t6275 = t5127*t1878;
  t6276 = t5166*t2076;
  t6278 = t6273 + t6275 + t6276;
  t6285 = -1.*t4608*t5221;
  t6286 = -1.*t4586*t5127;
  t6287 = -1.*t4532*t5166;
  t6305 = t6285 + t6286 + t6287;
  t6343 = -1.*t5221*t2250;
  t6347 = -1.*t5127*t1878;
  t6355 = -1.*t5166*t2076;
  t6363 = t6343 + t6347 + t6355;
  t6365 = t4063*t5221;
  t6366 = t3995*t5127;
  t6369 = t4040*t5166;
  t6373 = t6365 + t6366 + t6369;
  t6450 = -1.*t3867*t5070;
  t6451 = -1.*t3905*t5111;
  t6454 = -1.*t3972*t5124;
  t6459 = t6450 + t6451 + t6454;
  t6466 = t4523*t5070;
  t6468 = t4485*t5111;
  t6470 = t4477*t5124;
  t6472 = t6466 + t6468 + t6470;
  t6508 = t5070*t1333;
  t6512 = t5111*t1649;
  t6514 = t5124*t1873;
  t6522 = t6508 + t6512 + t6514;
  t6524 = -1.*t4523*t5070;
  t6532 = -1.*t4485*t5111;
  t6533 = -1.*t4477*t5124;
  t6535 = t6524 + t6532 + t6533;
  t6603 = -1.*t5070*t1333;
  t6604 = -1.*t5111*t1649;
  t6609 = -1.*t5124*t1873;
  t6611 = t6603 + t6604 + t6609;
  t6613 = t3867*t5070;
  t6617 = t3905*t5111;
  t6619 = t3972*t5124;
  t6623 = t6613 + t6617 + t6619;
  t6672 = -1.*t3746*t5004;
  t6673 = -1.*t3795*t5033;
  t6676 = -1.*t3848*t5065;
  t6677 = t6672 + t6673 + t6676;
  t6680 = t4445*t5004;
  t6681 = t4475*t5033;
  t6682 = t4415*t5065;
  t6683 = t6680 + t6681 + t6682;
  t6715 = t780*t5004;
  t6717 = t1121*t5033;
  t6719 = t5065*t1322;
  t6723 = t6715 + t6717 + t6719;
  t6736 = -1.*t4445*t5004;
  t6737 = -1.*t4475*t5033;
  t6740 = -1.*t4415*t5065;
  t6741 = t6736 + t6737 + t6740;
  t6780 = -1.*t780*t5004;
  t6796 = -1.*t1121*t5033;
  t6797 = -1.*t5065*t1322;
  t6800 = t6780 + t6796 + t6797;
  t6815 = t3746*t5004;
  t6820 = t3795*t5033;
  t6821 = t3848*t5065;
  t6823 = t6815 + t6820 + t6821;
  p_output1[0]=0. - 1.*t21*t3263 + t3303*t3673;
  p_output1[1]=0. - 1.*t21*t4311 + t3303*t4385;
  p_output1[2]=0. - 1.*t21*t4791 + t3303*t4855;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t3263*t3303 + t21*t3673;
  p_output1[7]=0. + t3303*t4311 + t21*t4385;
  p_output1[8]=0. + t3303*t4791 + t21*t4855;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4908;
  p_output1[13]=t4918;
  p_output1[14]=t4924;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4924*(t5356 - 1.*t4385*t5410 - 1.*t4918*t5431) + t4918*(t4855*t5410 + t4924*t5431 + t5440);
  p_output1[19]=t4924*(t3673*t5410 + t4908*t5431 + t5456) + t4908*(-1.*t4855*t5410 - 1.*t4924*t5431 + t5469);
  p_output1[20]=t4918*(-1.*t3673*t5410 - 1.*t4908*t5431 + t5485) + t4908*(t4385*t5410 + t4918*t5431 + t5498);
  p_output1[21]=t4908;
  p_output1[22]=t4918;
  p_output1[23]=t4924;
  p_output1[24]=t4311*(t4823*t5363 + t5440 + t5524) + t4791*(t5356 - 1.*t4347*t5363 + t5543);
  p_output1[25]=t3263*(-1.*t4823*t5363 + t5469 + t5563) + t4791*(t3417*t5363 + t5456 + t5574);
  p_output1[26]=t3263*(t4347*t5363 + t5498 + t5590) + t4311*(-1.*t3417*t5363 + t5485 + t5604);
  p_output1[27]=t3263;
  p_output1[28]=t4311;
  p_output1[29]=t4791;
  p_output1[30]=t4379*(t4771*t5325 + t4779*t5341 + t5524) + t4848*(-1.*t4289*t5325 - 1.*t4306*t5341 + t5543);
  p_output1[31]=t3655*(-1.*t4771*t5325 - 1.*t4779*t5341 + t5563) + t4848*(t2941*t5325 + t3197*t5341 + t5574);
  p_output1[32]=t3655*(t4289*t5325 + t4306*t5341 + t5590) + t4379*(-1.*t2941*t5325 - 1.*t3197*t5341 + t5604);
  p_output1[33]=t3655;
  p_output1[34]=t4379;
  p_output1[35]=t4848;
  p_output1[36]=0.091*t2896 - 1.*t4379*(t4749*t5300 + t4766*t5320 + t5524) - 1.*t4848*(-1.*t4204*t5300 - 1.*t4277*t5320 + t5543);
  p_output1[37]=0.091*t4277 - 1.*t3655*(-1.*t4749*t5300 - 1.*t4766*t5320 + t5563) - 1.*t4848*(t2709*t5300 + t2896*t5320 + t5574);
  p_output1[38]=0.091*t4766 - 1.*t3655*(t4204*t5300 + t4277*t5320 + t5590) - 1.*t4379*(-1.*t2709*t5300 - 1.*t2896*t5320 + t5604);
  p_output1[39]=0. - 1.*t2291*t3448 - 1.*t2474*t3496 - 1.*t2688*t3575;
  p_output1[40]=0. - 1.*t3448*t4095 - 1.*t3496*t4166 - 1.*t3575*t4195;
  p_output1[41]=0. - 1.*t3448*t4625 - 1.*t3496*t4678 - 1.*t3575*t4740;
  p_output1[42]=-0.016493*t2291 - 0.041869*t2474 - 0.084668*t2688 - 0.930418*(t4625*t5963 + t4095*t5975) + 0.366501*(t4678*t5963 + t4166*t5975);
  p_output1[43]=-0.016493*t4095 - 0.041869*t4166 - 0.084668*t4195 - 0.930418*(t4625*t6023 + t2291*t6036) + 0.366501*(t4678*t6023 + t2474*t6036);
  p_output1[44]=-0.016493*t4625 - 0.041869*t4678 - 0.084668*t4740 - 0.930418*(t4095*t6095 + t2291*t6124) + 0.366501*(t4166*t6095 + t2474*t6124);
  p_output1[45]=0. - 0.930418*t2291 + 0.366501*t2474;
  p_output1[46]=0. - 0.930418*t4095 + 0.366501*t4166;
  p_output1[47]=0. - 0.930418*t4625 + 0.366501*t4678;
  p_output1[48]=0.016493*t1878 - 0.041869*t2076 + 0.151852*t2250 + 0.930418*(t4586*t6214 + t3995*t6235) + 0.366501*(t4532*t6214 + t4040*t6235);
  p_output1[49]=0.016493*t3995 - 0.041869*t4040 + 0.151852*t4063 + 0.930418*(t4586*t6278 + t1878*t6305) + 0.366501*(t4532*t6278 + t2076*t6305);
  p_output1[50]=-0.041869*t4532 + 0.016493*t4586 + 0.151852*t4608 + 0.930418*(t3995*t6363 + t1878*t6373) + 0.366501*(t4040*t6363 + t2076*t6373);
  p_output1[51]=0. + 0.930418*t1878 + 0.366501*t2076;
  p_output1[52]=0. + 0.930418*t3995 + 0.366501*t4040;
  p_output1[53]=0. + 0.366501*t4532 + 0.930418*t4586;
  p_output1[54]=-0.03708*t1333 + 0.014606*t1649 - 0.236705*t1873 - 0.366501*(t4523*t6459 + t3867*t6472) - 0.930418*(t4485*t6459 + t3905*t6472);
  p_output1[55]=-0.03708*t3867 + 0.014606*t3905 - 0.236705*t3972 - 0.366501*(t4523*t6522 + t1333*t6535) - 0.930418*(t4485*t6522 + t1649*t6535);
  p_output1[56]=-0.236705*t4477 + 0.014606*t4485 - 0.03708*t4523 - 0.366501*(t3867*t6611 + t1333*t6623) - 0.930418*(t3905*t6611 + t1649*t6623);
  p_output1[57]=0. - 0.366501*t1333 - 0.930418*t1649;
  p_output1[58]=0. - 0.366501*t3867 - 0.930418*t3905;
  p_output1[59]=0. - 0.930418*t4485 - 0.366501*t4523;
  p_output1[60]=-0.6347*t1121 + 0.244523*t1322 - 0.930418*(t4445*t6677 + t3746*t6683) - 0.366501*(t4415*t6677 + t3848*t6683) - 0.09632*t780;
  p_output1[61]=-0.09632*t3746 - 0.6347*t3795 + 0.244523*t3848 - 0.366501*(t4415*t6723 + t1322*t6741) - 0.930418*(t4445*t6723 + t6741*t780);
  p_output1[62]=0.244523*t4415 - 0.09632*t4445 - 0.6347*t4475 - 0.366501*(t3848*t6800 + t1322*t6823) - 0.930418*(t3746*t6800 + t6823*t780);
  p_output1[63]=0. - 0.366501*t1322 - 0.930418*t780;
  p_output1[64]=0. - 0.930418*t3746 - 0.366501*t3848;
  p_output1[65]=0. - 0.366501*t4415 - 0.930418*t4445;
  p_output1[66]=8.534920010877523e-7;
  p_output1[67]=-3.0481544369131974e-7;
  p_output1[68]=-1.16833815115569e-7;
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



void Jb_toe_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
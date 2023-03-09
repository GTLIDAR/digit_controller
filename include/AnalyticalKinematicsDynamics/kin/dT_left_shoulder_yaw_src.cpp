/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_left_shoulder_yaw_src.h"

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
  double t417;
  double t837;
  double t736;
  double t754;
  double t766;
  double t1063;
  double t853;
  double t1020;
  double t1069;
  double t149;
  double t184;
  double t197;
  double t225;
  double t458;
  double t600;
  double t1051;
  double t1080;
  double t1168;
  double t1258;
  double t1267;
  double t1293;
  double t506;
  double t576;
  double t697;
  double t1169;
  double t1185;
  double t1218;
  double t1294;
  double t1299;
  double t1408;
  double t1451;
  double t1459;
  double t1475;
  double t1479;
  double t1482;
  double t1492;
  double t1522;
  double t223;
  double t1628;
  double t1652;
  double t1658;
  double t1659;
  double t1671;
  double t1699;
  double t1705;
  double t1706;
  double t1715;
  double t1741;
  double t1867;
  double t1345;
  double t1388;
  double t1400;
  double t2154;
  double t2152;
  double t2155;
  double t2162;
  double t2194;
  double t2200;
  double t2201;
  double t376;
  double t395;
  double t2193;
  double t2220;
  double t2231;
  double t2262;
  double t2280;
  double t2332;
  double t1557;
  double t1598;
  double t1874;
  double t1875;
  double t2234;
  double t2343;
  double t2349;
  double t1789;
  double t1805;
  double t2405;
  double t2434;
  double t2443;
  double t1890;
  double t1901;
  double t2475;
  double t2482;
  double t2495;
  double t2022;
  double t2072;
  double t1966;
  double t1999;
  double t2077;
  double t2108;
  double t2762;
  double t2777;
  double t2778;
  double t2755;
  double t2787;
  double t2825;
  double t2859;
  double t2868;
  double t2878;
  double t2847;
  double t2884;
  double t2885;
  double t2901;
  double t2902;
  double t2906;
  double t2936;
  double t3012;
  double t3035;
  double t3207;
  double t3213;
  double t3235;
  double t3205;
  double t3220;
  double t3228;
  double t3242;
  double t3244;
  double t3272;
  double t3274;
  double t3335;
  double t3337;
  double t3339;
  double t3342;
  double t3309;
  double t3437;
  double t3559;
  double t3563;
  double t3571;
  double t3575;
  double t3591;
  double t3592;
  double t3595;
  double t3601;
  double t3623;
  double t3630;
  double t3638;
  double t3648;
  double t3811;
  double t3818;
  double t3824;
  double t3835;
  double t3840;
  double t3863;
  double t3833;
  double t3894;
  double t3895;
  double t3912;
  double t3917;
  double t3918;
  double t3806;
  double t3911;
  double t3924;
  double t3931;
  double t3945;
  double t3948;
  double t3952;
  double t3955;
  double t3970;
  double t3978;
  double t3979;
  double t3987;
  double t4131;
  double t4137;
  double t4138;
  double t4149;
  double t4154;
  double t4155;
  double t4130;
  double t4141;
  double t4160;
  double t4176;
  double t4180;
  double t4205;
  double t4211;
  double t4213;
  double t4218;
  double t4226;
  double t4239;
  double t4242;
  double t4498;
  double t4503;
  double t4509;
  double t4512;
  double t4514;
  double t4533;
  double t4535;
  double t4556;
  double t4518;
  double t4564;
  double t4570;
  double t4578;
  double t4580;
  double t4595;
  double t4607;
  double t4610;
  double t4619;
  double t4730;
  double t4731;
  double t4734;
  double t4727;
  double t4742;
  double t4751;
  double t4754;
  double t4756;
  double t4766;
  double t4752;
  double t4768;
  double t4779;
  double t4784;
  double t4786;
  double t4790;
  double t4811;
  double t4821;
  double t4823;
  double t3232;
  double t3237;
  double t4923;
  double t4932;
  double t3303;
  double t3319;
  double t3411;
  double t3412;
  double t4922;
  double t4934;
  double t4936;
  double t4939;
  double t4941;
  double t4949;
  double t4950;
  double t3429;
  double t3439;
  double t4963;
  double t4975;
  double t4977;
  double t4978;
  double t3472;
  double t3476;
  double t3496;
  double t3497;
  double t5013;
  double t5020;
  double t5021;
  double t5023;
  double t5025;
  double t5026;
  double t5032;
  double t5034;
  double t5040;
  double t5043;
  double t5044;
  double t5054;
  double t5112;
  double t5116;
  double t5122;
  double t5127;
  double t5128;
  double t5129;
  double t5125;
  double t5130;
  double t5131;
  double t5148;
  double t5150;
  double t5153;
  double t5175;
  double t5192;
  double t5193;
  double t5332;
  double t5336;
  double t5342;
  double t5320;
  double t5343;
  double t5361;
  double t5363;
  double t5364;
  double t5392;
  double t5394;
  double t5418;
  double t5447;
  double t5452;
  double t5458;
  double t5551;
  double t5555;
  double t5556;
  double t5557;
  double t5560;
  double t5572;
  double t5578;
  double t5593;
  double t5597;
  double t5606;
  double t5607;
  double t5731;
  double t5744;
  double t5761;
  double t5771;
  double t5775;
  double t5790;
  double t5791;
  double t5797;
  double t5811;
  double t5812;
  double t5827;
  double t5830;
  double t5955;
  double t5960;
  double t5964;
  double t5969;
  double t5972;
  double t5976;
  double t5947;
  double t5966;
  double t5980;
  double t5984;
  double t5990;
  double t5991;
  double t6002;
  double t6003;
  double t6009;
  double t6016;
  double t6022;
  double t6026;
  double t1836;
  double t1876;
  double t1913;
  double t1934;
  double t2018;
  double t2073;
  double t2113;
  double t2118;
  double t2658;
  double t2659;
  double t2665;
  double t2671;
  double t2676;
  double t2685;
  double t2716;
  double t2723;
  double t3100;
  double t3105;
  double t3110;
  double t3121;
  double t3137;
  double t3152;
  double t3179;
  double t3182;
  double t3229;
  double t3277;
  double t3347;
  double t3391;
  double t3422;
  double t3424;
  double t3454;
  double t3455;
  double t3589;
  double t3612;
  double t3652;
  double t3658;
  double t3663;
  double t3664;
  double t3674;
  double t3679;
  double t4057;
  double t4063;
  double t4064;
  double t4076;
  double t4087;
  double t4092;
  double t4097;
  double t4101;
  double t4258;
  double t4260;
  double t4267;
  double t4268;
  double t4284;
  double t4285;
  double t4286;
  double t4289;
  double t4375;
  double t4377;
  double t4390;
  double t4392;
  double t4406;
  double t4446;
  double t4447;
  double t4449;
  double t4651;
  double t4664;
  double t4665;
  double t4684;
  double t4687;
  double t4691;
  double t4693;
  double t4694;
  double t4869;
  double t4876;
  double t4880;
  double t4881;
  double t4897;
  double t4898;
  double t4899;
  double t4901;
  double t4938;
  double t4955;
  double t4979;
  double t4985;
  double t4990;
  double t4993;
  double t4994;
  double t4995;
  double t5024;
  double t5037;
  double t5057;
  double t5062;
  double t5067;
  double t5069;
  double t5080;
  double t5082;
  double t5220;
  double t5224;
  double t5233;
  double t5237;
  double t5249;
  double t5269;
  double t5270;
  double t5271;
  double t5362;
  double t5414;
  double t5464;
  double t5477;
  double t5496;
  double t5497;
  double t5499;
  double t5509;
  double t5629;
  double t5633;
  double t5639;
  double t5663;
  double t5674;
  double t5680;
  double t5694;
  double t5696;
  double t5773;
  double t5809;
  double t5844;
  double t5865;
  double t5868;
  double t5869;
  double t5880;
  double t5888;
  double t6046;
  double t6051;
  double t6057;
  double t6062;
  double t6065;
  double t6066;
  double t6072;
  double t6075;
  double t1306;
  double t1548;
  double t1744;
  double t1757;
  double t1772;
  double t2396;
  double t2463;
  double t2573;
  double t2619;
  double t2632;
  double t2896;
  double t2907;
  double t3047;
  double t3059;
  double t3066;
  double t3484;
  double t3503;
  double t3524;
  double t3525;
  double t3530;
  double t3715;
  double t3740;
  double t3746;
  double t3749;
  double t3773;
  double t3944;
  double t3962;
  double t4036;
  double t4040;
  double t4054;
  double t4178;
  double t4217;
  double t4246;
  double t4248;
  double t4257;
  double t4302;
  double t4304;
  double t4343;
  double t4345;
  double t4348;
  double t4573;
  double t4603;
  double t4620;
  double t4647;
  double t4650;
  double t4783;
  double t4810;
  double t4843;
  double t4851;
  double t4858;
  double t4997;
  double t5004;
  double t5007;
  double t5008;
  double t5009;
  double t5085;
  double t5088;
  double t5090;
  double t5092;
  double t5095;
  double t5135;
  double t5173;
  double t5195;
  double t5204;
  double t5212;
  double t5514;
  double t5535;
  double t5539;
  double t5540;
  double t5542;
  double t5575;
  double t5595;
  double t5615;
  double t5616;
  double t5623;
  double t5892;
  double t5901;
  double t5903;
  double t5907;
  double t5911;
  double t5988;
  double t6006;
  double t6032;
  double t6037;
  double t6042;
  double t6983;
  double t6997;
  double t7173;
  double t7300;
  double t7226;
  double t7060;
  double t7061;
  double t7068;
  double t6999;
  double t7002;
  double t7004;
  double t7099;
  double t7108;
  double t7134;
  double t7147;
  double t7077;
  double t7080;
  double t7081;
  double t7083;
  double t7289;
  double t7294;
  double t7311;
  double t7314;
  double t7320;
  double t7321;
  double t7325;
  double t7160;
  double t7166;
  double t7195;
  double t7224;
  double t7253;
  double t7283;
  double t7286;
  double t7345;
  double t7351;
  double t7352;
  double t7356;
  double t7367;
  double t7368;
  double t7377;
  double t7582;
  double t7597;
  double t7589;
  double t7006;
  double t7044;
  double t7045;
  double t7054;
  double t7467;
  double t7476;
  double t7480;
  double t7498;
  double t7506;
  double t7586;
  double t7588;
  double t7590;
  double t7591;
  double t7592;
  double t7595;
  double t7603;
  double t7606;
  double t7607;
  double t7612;
  double t7615;
  double t7619;
  double t7630;
  double t7631;
  double t7636;
  double t7648;
  double t7649;
  double t7660;
  double t7696;
  double t7699;
  double t7700;
  double t7710;
  double t7712;
  double t7714;
  double t7717;
  double t7722;
  double t7723;
  t417 = Cos(var1[3]);
  t837 = Cos(var1[4]);
  t736 = Cos(var1[14]);
  t754 = -1.*t736;
  t766 = 1. + t754;
  t1063 = Cos(var1[13]);
  t853 = Cos(var1[5]);
  t1020 = Sin(var1[13]);
  t1069 = Sin(var1[5]);
  t149 = Cos(var1[15]);
  t184 = -1.*t149;
  t197 = 1. + t184;
  t225 = Sin(var1[15]);
  t458 = Sin(var1[14]);
  t600 = Sin(var1[4]);
  t1051 = -1.*t417*t837*t853*t1020;
  t1080 = t1063*t417*t837*t1069;
  t1168 = t1051 + t1080;
  t1258 = t1063*t417*t837*t853;
  t1267 = t417*t837*t1020*t1069;
  t1293 = t1258 + t1267;
  t506 = 0.994522*t458;
  t576 = 0. + t506;
  t697 = -1.*t417*t576*t600;
  t1169 = 0.103955395616*t766*t1168;
  t1185 = -0.9890740084840001*t766;
  t1218 = 1. + t1185;
  t1294 = t1218*t1293;
  t1299 = t697 + t1169 + t1294;
  t1408 = -0.104528*t458;
  t1451 = 0. + t1408;
  t1459 = -1.*t417*t1451*t600;
  t1475 = -0.010926102783999999*t766;
  t1479 = 1. + t1475;
  t1482 = t1479*t1168;
  t1492 = 0.103955395616*t766*t1293;
  t1522 = t1459 + t1482 + t1492;
  t223 = -0.49726168403800003*t197;
  t1628 = -1.0000001112680001*t766;
  t1652 = 1. + t1628;
  t1658 = -1.*t1652*t417*t600;
  t1659 = 0.104528*t458;
  t1671 = 0. + t1659;
  t1699 = t1671*t1168;
  t1705 = -0.994522*t458;
  t1706 = 0. + t1705;
  t1715 = t1706*t1293;
  t1741 = t1658 + t1699 + t1715;
  t1867 = -0.051978134642000004*t197;
  t1345 = 0.05226439969100001*t197;
  t1388 = -0.703234*t225;
  t1400 = t1345 + t1388;
  t2154 = Sin(var1[3]);
  t2152 = t417*t853*t600;
  t2155 = t2154*t1069;
  t2162 = t2152 + t2155;
  t2194 = t853*t2154;
  t2200 = -1.*t417*t600*t1069;
  t2201 = t2194 + t2200;
  t376 = -0.073913*t225;
  t395 = t223 + t376;
  t2193 = t1020*t2162;
  t2220 = t1063*t2201;
  t2231 = t2193 + t2220;
  t2262 = t1063*t2162;
  t2280 = -1.*t1020*t2201;
  t2332 = t2262 + t2280;
  t1557 = -0.500001190325*t197;
  t1598 = 1. + t1557;
  t1874 = -0.707107*t225;
  t1875 = t1867 + t1874;
  t2234 = 0.103955395616*t766*t2231;
  t2343 = t1479*t2332;
  t2349 = t2234 + t2343;
  t1789 = -0.5054634410180001*t197;
  t1805 = 1. + t1789;
  t2405 = t1218*t2231;
  t2434 = 0.103955395616*t766*t2332;
  t2443 = t2405 + t2434;
  t1890 = 0.073913*t225;
  t1901 = t223 + t1890;
  t2475 = t1706*t2231;
  t2482 = t1671*t2332;
  t2495 = t2475 + t2482;
  t2022 = -0.9945383682050002*t197;
  t2072 = 1. + t2022;
  t1966 = 0.707107*t225;
  t1999 = t1867 + t1966;
  t2077 = 0.703234*t225;
  t2108 = t1345 + t2077;
  t2762 = -1.*t853*t2154;
  t2777 = t417*t600*t1069;
  t2778 = t2762 + t2777;
  t2755 = -1.*t1020*t2162;
  t2787 = t1063*t2778;
  t2825 = t2755 + t2787;
  t2859 = -1.*t1063*t2162;
  t2868 = -1.*t1020*t2778;
  t2878 = t2859 + t2868;
  t2847 = 0.103955395616*t766*t2825;
  t2884 = t1479*t2878;
  t2885 = t2847 + t2884;
  t2901 = t1218*t2825;
  t2902 = 0.103955395616*t766*t2878;
  t2906 = t2901 + t2902;
  t2936 = t1706*t2825;
  t3012 = t1671*t2878;
  t3035 = t2936 + t3012;
  t3207 = t1020*t2778;
  t3213 = t2262 + t3207;
  t3235 = -0.051978134642000004*t225;
  t3205 = t417*t837*t576;
  t3220 = t1218*t3213;
  t3228 = t3205 + t2847 + t3220;
  t3242 = t417*t837*t1451;
  t3244 = t1479*t2825;
  t3272 = 0.103955395616*t766*t3213;
  t3274 = t3242 + t3244 + t3272;
  t3335 = t1652*t417*t837;
  t3337 = t1671*t2825;
  t3339 = t1706*t3213;
  t3342 = t3335 + t3337 + t3339;
  t3309 = -0.49726168403800003*t225;
  t3437 = 0.05226439969100001*t225;
  t3559 = -1.0000001112680001*t417*t837*t458;
  t3563 = 0.104528*t736*t2825;
  t3571 = -0.994522*t736*t3213;
  t3575 = t3559 + t3563 + t3571;
  t3591 = 0.994522*t736*t417*t837;
  t3592 = 0.103955395616*t458*t2825;
  t3595 = -0.9890740084840001*t458*t3213;
  t3601 = t3591 + t3592 + t3595;
  t3623 = -0.104528*t736*t417*t837;
  t3630 = -0.010926102783999999*t458*t2825;
  t3638 = 0.103955395616*t458*t3213;
  t3648 = t3623 + t3630 + t3638;
  t3811 = -1.*t853*t2154*t600;
  t3818 = t417*t1069;
  t3824 = t3811 + t3818;
  t3835 = -1.*t417*t853;
  t3840 = -1.*t2154*t600*t1069;
  t3863 = t3835 + t3840;
  t3833 = -1.*t1020*t3824;
  t3894 = t1063*t3863;
  t3895 = t3833 + t3894;
  t3912 = t1063*t3824;
  t3917 = t1020*t3863;
  t3918 = t3912 + t3917;
  t3806 = -1.*t837*t576*t2154;
  t3911 = 0.103955395616*t766*t3895;
  t3924 = t1218*t3918;
  t3931 = t3806 + t3911 + t3924;
  t3945 = -1.*t837*t1451*t2154;
  t3948 = t1479*t3895;
  t3952 = 0.103955395616*t766*t3918;
  t3955 = t3945 + t3948 + t3952;
  t3970 = -1.*t1652*t837*t2154;
  t3978 = t1671*t3895;
  t3979 = t1706*t3918;
  t3987 = t3970 + t3978 + t3979;
  t4131 = -1.*t837*t853*t1020*t2154;
  t4137 = t1063*t837*t2154*t1069;
  t4138 = t4131 + t4137;
  t4149 = t1063*t837*t853*t2154;
  t4154 = t837*t1020*t2154*t1069;
  t4155 = t4149 + t4154;
  t4130 = -1.*t576*t2154*t600;
  t4141 = 0.103955395616*t766*t4138;
  t4160 = t1218*t4155;
  t4176 = t4130 + t4141 + t4160;
  t4180 = -1.*t1451*t2154*t600;
  t4205 = t1479*t4138;
  t4211 = 0.103955395616*t766*t4155;
  t4213 = t4180 + t4205 + t4211;
  t4218 = -1.*t1652*t2154*t600;
  t4226 = t1671*t4138;
  t4239 = t1706*t4155;
  t4242 = t4218 + t4226 + t4239;
  t4498 = t853*t2154*t600;
  t4503 = -1.*t417*t1069;
  t4509 = t4498 + t4503;
  t4512 = t1020*t4509;
  t4514 = t4512 + t3894;
  t4533 = t1063*t4509;
  t4535 = -1.*t1020*t3863;
  t4556 = t4533 + t4535;
  t4518 = 0.103955395616*t766*t4514;
  t4564 = t1479*t4556;
  t4570 = t4518 + t4564;
  t4578 = t1218*t4514;
  t4580 = 0.103955395616*t766*t4556;
  t4595 = t4578 + t4580;
  t4607 = t1706*t4514;
  t4610 = t1671*t4556;
  t4619 = t4607 + t4610;
  t4730 = t417*t853;
  t4731 = t2154*t600*t1069;
  t4734 = t4730 + t4731;
  t4727 = -1.*t1020*t4509;
  t4742 = t1063*t4734;
  t4751 = t4727 + t4742;
  t4754 = -1.*t1063*t4509;
  t4756 = -1.*t1020*t4734;
  t4766 = t4754 + t4756;
  t4752 = 0.103955395616*t766*t4751;
  t4768 = t1479*t4766;
  t4779 = t4752 + t4768;
  t4784 = t1218*t4751;
  t4786 = 0.103955395616*t766*t4766;
  t4790 = t4784 + t4786;
  t4811 = t1706*t4751;
  t4821 = t1671*t4766;
  t4823 = t4811 + t4821;
  t3232 = -0.707107*t149;
  t3237 = t3232 + t3235;
  t4923 = t1020*t4734;
  t4932 = t4533 + t4923;
  t3303 = 0.073913*t149;
  t3319 = t3303 + t3309;
  t3411 = 0.707107*t149;
  t3412 = t3411 + t3235;
  t4922 = t837*t576*t2154;
  t4934 = t1218*t4932;
  t4936 = t4922 + t4752 + t4934;
  t4939 = t837*t1451*t2154;
  t4941 = t1479*t4751;
  t4949 = 0.103955395616*t766*t4932;
  t4950 = t4939 + t4941 + t4949;
  t3429 = 0.703234*t149;
  t3439 = t3429 + t3437;
  t4963 = t1652*t837*t2154;
  t4975 = t1671*t4751;
  t4977 = t1706*t4932;
  t4978 = t4963 + t4975 + t4977;
  t3472 = -0.073913*t149;
  t3476 = t3472 + t3309;
  t3496 = -0.703234*t149;
  t3497 = t3496 + t3437;
  t5013 = -1.0000001112680001*t837*t458*t2154;
  t5020 = 0.104528*t736*t4751;
  t5021 = -0.994522*t736*t4932;
  t5023 = t5013 + t5020 + t5021;
  t5025 = 0.994522*t736*t837*t2154;
  t5026 = 0.103955395616*t458*t4751;
  t5032 = -0.9890740084840001*t458*t4932;
  t5034 = t5025 + t5026 + t5032;
  t5040 = -0.104528*t736*t837*t2154;
  t5043 = -0.010926102783999999*t458*t4751;
  t5044 = 0.103955395616*t458*t4932;
  t5054 = t5040 + t5043 + t5044;
  t5112 = -1.*t837*t853*t1020;
  t5116 = t1063*t837*t1069;
  t5122 = t5112 + t5116;
  t5127 = -1.*t1063*t837*t853;
  t5128 = -1.*t837*t1020*t1069;
  t5129 = t5127 + t5128;
  t5125 = 0.103955395616*t766*t5122;
  t5130 = t1479*t5129;
  t5131 = t5125 + t5130;
  t5148 = t1218*t5122;
  t5150 = 0.103955395616*t766*t5129;
  t5153 = t5148 + t5150;
  t5175 = t1706*t5122;
  t5192 = t1671*t5129;
  t5193 = t5175 + t5192;
  t5332 = t1063*t837*t853;
  t5336 = t837*t1020*t1069;
  t5342 = t5332 + t5336;
  t5320 = -1.*t576*t600;
  t5343 = t1218*t5342;
  t5361 = t5320 + t5125 + t5343;
  t5363 = -1.*t1451*t600;
  t5364 = t1479*t5122;
  t5392 = 0.103955395616*t766*t5342;
  t5394 = t5363 + t5364 + t5392;
  t5418 = -1.*t1652*t600;
  t5447 = t1671*t5122;
  t5452 = t1706*t5342;
  t5458 = t5418 + t5447 + t5452;
  t5551 = t837*t853*t1020;
  t5555 = -1.*t1063*t837*t1069;
  t5556 = t5551 + t5555;
  t5557 = 0.103955395616*t766*t5556;
  t5560 = t1479*t5342;
  t5572 = t5557 + t5560;
  t5578 = t1218*t5556;
  t5593 = t5578 + t5392;
  t5597 = t1706*t5556;
  t5606 = t1671*t5342;
  t5607 = t5597 + t5606;
  t5731 = 1.0000001112680001*t458*t600;
  t5744 = 0.104528*t736*t5122;
  t5761 = -0.994522*t736*t5342;
  t5771 = t5731 + t5744 + t5761;
  t5775 = -0.994522*t736*t600;
  t5790 = 0.103955395616*t458*t5122;
  t5791 = -0.9890740084840001*t458*t5342;
  t5797 = t5775 + t5790 + t5791;
  t5811 = 0.104528*t736*t600;
  t5812 = -0.010926102783999999*t458*t5122;
  t5827 = 0.103955395616*t458*t5342;
  t5830 = t5811 + t5812 + t5827;
  t5955 = t853*t1020*t600;
  t5960 = -1.*t1063*t600*t1069;
  t5964 = t5955 + t5960;
  t5969 = -1.*t1063*t853*t600;
  t5972 = -1.*t1020*t600*t1069;
  t5976 = t5969 + t5972;
  t5947 = -1.*t837*t576;
  t5966 = 0.103955395616*t766*t5964;
  t5980 = t1218*t5976;
  t5984 = t5947 + t5966 + t5980;
  t5990 = -1.*t837*t1451;
  t5991 = t1479*t5964;
  t6002 = 0.103955395616*t766*t5976;
  t6003 = t5990 + t5991 + t6002;
  t6009 = -1.*t1652*t837;
  t6016 = t1671*t5964;
  t6022 = t1706*t5976;
  t6026 = t6009 + t6016 + t6022;
  t1836 = t1805*t1299;
  t1876 = t1875*t1522;
  t1913 = t1901*t1741;
  t1934 = t1836 + t1876 + t1913;
  t2018 = t1999*t1299;
  t2073 = t2072*t1522;
  t2113 = t2108*t1741;
  t2118 = t2018 + t2073 + t2113;
  t2658 = t1875*t2349;
  t2659 = t1805*t2443;
  t2665 = t1901*t2495;
  t2671 = t2658 + t2659 + t2665;
  t2676 = t2072*t2349;
  t2685 = t1999*t2443;
  t2716 = t2108*t2495;
  t2723 = t2676 + t2685 + t2716;
  t3100 = t1875*t2885;
  t3105 = t1805*t2906;
  t3110 = t1901*t3035;
  t3121 = t3100 + t3105 + t3110;
  t3137 = t2072*t2885;
  t3152 = t1999*t2906;
  t3179 = t2108*t3035;
  t3182 = t3137 + t3152 + t3179;
  t3229 = -0.5054634410180001*t225*t3228;
  t3277 = t3237*t3274;
  t3347 = t3319*t3342;
  t3391 = t3229 + t3277 + t3347;
  t3422 = t3412*t3228;
  t3424 = -0.9945383682050002*t225*t3274;
  t3454 = t3439*t3342;
  t3455 = t3422 + t3424 + t3454;
  t3589 = t2108*t3575;
  t3612 = t1999*t3601;
  t3652 = t2072*t3648;
  t3658 = t3589 + t3612 + t3652;
  t3663 = t1901*t3575;
  t3664 = t1805*t3601;
  t3674 = t1875*t3648;
  t3679 = t3663 + t3664 + t3674;
  t4057 = t1805*t3931;
  t4063 = t1875*t3955;
  t4064 = t1901*t3987;
  t4076 = t4057 + t4063 + t4064;
  t4087 = t1999*t3931;
  t4092 = t2072*t3955;
  t4097 = t2108*t3987;
  t4101 = t4087 + t4092 + t4097;
  t4258 = t1805*t4176;
  t4260 = t1875*t4213;
  t4267 = t1901*t4242;
  t4268 = t4258 + t4260 + t4267;
  t4284 = t1999*t4176;
  t4285 = t2072*t4213;
  t4286 = t2108*t4242;
  t4289 = t4284 + t4285 + t4286;
  t4375 = t1805*t3228;
  t4377 = t1875*t3274;
  t4390 = t1901*t3342;
  t4392 = t4375 + t4377 + t4390;
  t4406 = t1999*t3228;
  t4446 = t2072*t3274;
  t4447 = t2108*t3342;
  t4449 = t4406 + t4446 + t4447;
  t4651 = t1875*t4570;
  t4664 = t1805*t4595;
  t4665 = t1901*t4619;
  t4684 = t4651 + t4664 + t4665;
  t4687 = t2072*t4570;
  t4691 = t1999*t4595;
  t4693 = t2108*t4619;
  t4694 = t4687 + t4691 + t4693;
  t4869 = t1875*t4779;
  t4876 = t1805*t4790;
  t4880 = t1901*t4823;
  t4881 = t4869 + t4876 + t4880;
  t4897 = t2072*t4779;
  t4898 = t1999*t4790;
  t4899 = t2108*t4823;
  t4901 = t4897 + t4898 + t4899;
  t4938 = -0.5054634410180001*t225*t4936;
  t4955 = t3237*t4950;
  t4979 = t3319*t4978;
  t4985 = t4938 + t4955 + t4979;
  t4990 = t3412*t4936;
  t4993 = -0.9945383682050002*t225*t4950;
  t4994 = t3439*t4978;
  t4995 = t4990 + t4993 + t4994;
  t5024 = t2108*t5023;
  t5037 = t1999*t5034;
  t5057 = t2072*t5054;
  t5062 = t5024 + t5037 + t5057;
  t5067 = t1901*t5023;
  t5069 = t1805*t5034;
  t5080 = t1875*t5054;
  t5082 = t5067 + t5069 + t5080;
  t5220 = t1875*t5131;
  t5224 = t1805*t5153;
  t5233 = t1901*t5193;
  t5237 = t5220 + t5224 + t5233;
  t5249 = t2072*t5131;
  t5269 = t1999*t5153;
  t5270 = t2108*t5193;
  t5271 = t5249 + t5269 + t5270;
  t5362 = -0.5054634410180001*t225*t5361;
  t5414 = t3237*t5394;
  t5464 = t3319*t5458;
  t5477 = t5362 + t5414 + t5464;
  t5496 = t3412*t5361;
  t5497 = -0.9945383682050002*t225*t5394;
  t5499 = t3439*t5458;
  t5509 = t5496 + t5497 + t5499;
  t5629 = t1875*t5572;
  t5633 = t1805*t5593;
  t5639 = t1901*t5607;
  t5663 = t5629 + t5633 + t5639;
  t5674 = t2072*t5572;
  t5680 = t1999*t5593;
  t5694 = t2108*t5607;
  t5696 = t5674 + t5680 + t5694;
  t5773 = t2108*t5771;
  t5809 = t1999*t5797;
  t5844 = t2072*t5830;
  t5865 = t5773 + t5809 + t5844;
  t5868 = t1901*t5771;
  t5869 = t1805*t5797;
  t5880 = t1875*t5830;
  t5888 = t5868 + t5869 + t5880;
  t6046 = t1805*t5984;
  t6051 = t1875*t6003;
  t6057 = t1901*t6026;
  t6062 = t6046 + t6051 + t6057;
  t6065 = t1999*t5984;
  t6066 = t2072*t6003;
  t6072 = t2108*t6026;
  t6075 = t6065 + t6066 + t6072;
  t1306 = t395*t1299;
  t1548 = t1400*t1522;
  t1744 = t1598*t1741;
  t1757 = t1306 + t1548 + t1744;
  t1772 = 0.707107*t1757;
  t2396 = t1400*t2349;
  t2463 = t395*t2443;
  t2573 = t1598*t2495;
  t2619 = t2396 + t2463 + t2573;
  t2632 = 0.707107*t2619;
  t2896 = t1400*t2885;
  t2907 = t395*t2906;
  t3047 = t1598*t3035;
  t3059 = t2896 + t2907 + t3047;
  t3066 = 0.707107*t3059;
  t3484 = t3476*t3228;
  t3503 = t3497*t3274;
  t3524 = -0.500001190325*t225*t3342;
  t3525 = t3484 + t3503 + t3524;
  t3530 = 0.707107*t3525;
  t3715 = t1598*t3575;
  t3740 = t395*t3601;
  t3746 = t1400*t3648;
  t3749 = t3715 + t3740 + t3746;
  t3773 = 0.707107*t3749;
  t3944 = t395*t3931;
  t3962 = t1400*t3955;
  t4036 = t1598*t3987;
  t4040 = t3944 + t3962 + t4036;
  t4054 = 0.707107*t4040;
  t4178 = t395*t4176;
  t4217 = t1400*t4213;
  t4246 = t1598*t4242;
  t4248 = t4178 + t4217 + t4246;
  t4257 = 0.707107*t4248;
  t4302 = t395*t3228;
  t4304 = t1400*t3274;
  t4343 = t1598*t3342;
  t4345 = t4302 + t4304 + t4343;
  t4348 = 0.707107*t4345;
  t4573 = t1400*t4570;
  t4603 = t395*t4595;
  t4620 = t1598*t4619;
  t4647 = t4573 + t4603 + t4620;
  t4650 = 0.707107*t4647;
  t4783 = t1400*t4779;
  t4810 = t395*t4790;
  t4843 = t1598*t4823;
  t4851 = t4783 + t4810 + t4843;
  t4858 = 0.707107*t4851;
  t4997 = t3476*t4936;
  t5004 = t3497*t4950;
  t5007 = -0.500001190325*t225*t4978;
  t5008 = t4997 + t5004 + t5007;
  t5009 = 0.707107*t5008;
  t5085 = t1598*t5023;
  t5088 = t395*t5034;
  t5090 = t1400*t5054;
  t5092 = t5085 + t5088 + t5090;
  t5095 = 0.707107*t5092;
  t5135 = t1400*t5131;
  t5173 = t395*t5153;
  t5195 = t1598*t5193;
  t5204 = t5135 + t5173 + t5195;
  t5212 = 0.707107*t5204;
  t5514 = t3476*t5361;
  t5535 = t3497*t5394;
  t5539 = -0.500001190325*t225*t5458;
  t5540 = t5514 + t5535 + t5539;
  t5542 = 0.707107*t5540;
  t5575 = t1400*t5572;
  t5595 = t395*t5593;
  t5615 = t1598*t5607;
  t5616 = t5575 + t5595 + t5615;
  t5623 = 0.707107*t5616;
  t5892 = t1598*t5771;
  t5901 = t395*t5797;
  t5903 = t1400*t5830;
  t5907 = t5892 + t5901 + t5903;
  t5911 = 0.707107*t5907;
  t5988 = t395*t5984;
  t6006 = t1400*t6003;
  t6032 = t1598*t6026;
  t6037 = t5988 + t6006 + t6032;
  t6042 = 0.707107*t6037;
  t6983 = -1.*t1063;
  t6997 = 1. + t6983;
  t7173 = 0.051978134642000004*t197;
  t7300 = -0.05226439969100001*t197;
  t7226 = 0.49726168403800003*t197;
  t7060 = 0.12*t6997;
  t7061 = -0.4*t1020;
  t7068 = 0. + t7060 + t7061;
  t6999 = 0.4*t6997;
  t7002 = 0.12*t1020;
  t7004 = 0. + t6999 + t7002;
  t7099 = 1.1924972351948546e-8*var1[14];
  t7108 = 0.38315655000705834*t766;
  t7134 = -0.05650052807*t576;
  t7147 = t7099 + t7108 + t7134;
  t7077 = 1.1345904784751044e-7*var1[14];
  t7080 = -0.04027119345689465*t766;
  t7081 = -0.05650052807*t1451;
  t7083 = t7077 + t7080 + t7081;
  t7289 = 1.639789470231751e-8*var1[15];
  t7294 = 0.22983603018311177*t197;
  t7311 = t7300 + t2077;
  t7314 = 0.164383620275*t7311;
  t7320 = t7173 + t1966;
  t7321 = 0.18957839082800002*t7320;
  t7325 = t7289 + t7294 + t7314 + t7321;
  t7160 = -1.5601527583902087e-7*var1[15];
  t7166 = 0.09582494577057615*t197;
  t7195 = t7173 + t1874;
  t7224 = 0.231098203479*t7195;
  t7253 = t7226 + t1890;
  t7283 = 0.164383620275*t7253;
  t7286 = t7160 + t7166 + t7224 + t7283;
  t7345 = 1.568745163810375e-7*var1[15];
  t7351 = 0.08219200580743281*t197;
  t7352 = t7300 + t1388;
  t7356 = 0.231098203479*t7352;
  t7367 = t7226 + t376;
  t7368 = 0.18957839082800002*t7367;
  t7377 = t7345 + t7351 + t7356 + t7368;
  t7582 = 0.051978134642000004*t225;
  t7597 = -0.05226439969100001*t225;
  t7589 = 0.49726168403800003*t225;
  t7006 = -0.056500534356700764*t766;
  t7044 = 0.38315650737400003*t1706;
  t7045 = -0.040271188976*t1671;
  t7054 = 0. + t7006 + t7044 + t7045;
  t7467 = 0.12*t1063;
  t7476 = 0.4*t1020;
  t7480 = t7467 + t7476;
  t7498 = -0.4*t1063;
  t7506 = t7498 + t7002;
  t7586 = t3232 + t7582;
  t7588 = 0.231098203479*t7586;
  t7590 = t3303 + t7589;
  t7591 = 0.164383620275*t7590;
  t7592 = 0.09582494577057615*t225;
  t7595 = -1.5601527583902087e-7 + t7588 + t7591 + t7592;
  t7603 = t3429 + t7597;
  t7606 = 0.164383620275*t7603;
  t7607 = t3411 + t7582;
  t7612 = 0.18957839082800002*t7607;
  t7615 = 0.22983603018311177*t225;
  t7619 = 1.639789470231751e-8 + t7606 + t7612 + t7615;
  t7630 = t3496 + t7597;
  t7631 = 0.231098203479*t7630;
  t7636 = t3472 + t7589;
  t7648 = 0.18957839082800002*t7636;
  t7649 = 0.08219200580743281*t225;
  t7660 = 1.568745163810375e-7 + t7631 + t7648 + t7649;
  t7696 = -0.3852670428678886*t736;
  t7699 = -0.056500534356700764*t458;
  t7700 = t7696 + t7699;
  t7710 = 0.0059058871981009595*t736;
  t7712 = -0.04027119345689465*t458;
  t7714 = 1.1345904784751044e-7 + t7710 + t7712;
  t7717 = -0.05619101817723254*t736;
  t7722 = 0.38315655000705834*t458;
  t7723 = 1.1924972351948546e-8 + t7717 + t7722;
  p_output1[0]=(t4054 + 0.703234*t4076 - 0.073913*t4101)*var2[3] + (t1772 + 0.703234*t1934 - 0.073913*t2118)*var2[4] + (t2632 + 0.703234*t2671 - 0.073913*t2723)*var2[5] + (t3066 + 0.703234*t3121 - 0.073913*t3182)*var2[13] + (-0.073913*t3658 + 0.703234*t3679 + t3773)*var2[14] + (0.703234*t3391 - 0.073913*t3455 + t3530)*var2[15];
  p_output1[1]=(t4348 + 0.703234*t4392 - 0.073913*t4449)*var2[3] + (t4257 + 0.703234*t4268 - 0.073913*t4289)*var2[4] + (t4650 + 0.703234*t4684 - 0.073913*t4694)*var2[5] + (t4858 + 0.703234*t4881 - 0.073913*t4901)*var2[13] + (-0.073913*t5062 + 0.703234*t5082 + t5095)*var2[14] + (0.703234*t4985 - 0.073913*t4995 + t5009)*var2[15];
  p_output1[2]=(t6042 + 0.703234*t6062 - 0.073913*t6075)*var2[4] + (t5623 + 0.703234*t5663 - 0.073913*t5696)*var2[5] + (t5212 + 0.703234*t5237 - 0.073913*t5271)*var2[13] + (-0.073913*t5865 + 0.703234*t5888 + t5911)*var2[14] + (0.703234*t5477 - 0.073913*t5509 + t5542)*var2[15];
  p_output1[3]=0;
  p_output1[4]=(-0.104528*t4076 - 0.994522*t4101)*var2[3] + (-0.104528*t1934 - 0.994522*t2118)*var2[4] + (-0.104528*t2671 - 0.994522*t2723)*var2[5] + (-0.104528*t3121 - 0.994522*t3182)*var2[13] + (-0.994522*t3658 - 0.104528*t3679)*var2[14] + (-0.104528*t3391 - 0.994522*t3455)*var2[15];
  p_output1[5]=(-0.104528*t4392 - 0.994522*t4449)*var2[3] + (-0.104528*t4268 - 0.994522*t4289)*var2[4] + (-0.104528*t4684 - 0.994522*t4694)*var2[5] + (-0.104528*t4881 - 0.994522*t4901)*var2[13] + (-0.994522*t5062 - 0.104528*t5082)*var2[14] + (-0.104528*t4985 - 0.994522*t4995)*var2[15];
  p_output1[6]=(-0.104528*t6062 - 0.994522*t6075)*var2[4] + (-0.104528*t5663 - 0.994522*t5696)*var2[5] + (-0.104528*t5237 - 0.994522*t5271)*var2[13] + (-0.994522*t5865 - 0.104528*t5888)*var2[14] + (-0.104528*t5477 - 0.994522*t5509)*var2[15];
  p_output1[7]=0;
  p_output1[8]=(t4054 - 0.703234*t4076 + 0.073913*t4101)*var2[3] + (t1772 - 0.703234*t1934 + 0.073913*t2118)*var2[4] + (t2632 - 0.703234*t2671 + 0.073913*t2723)*var2[5] + (t3066 - 0.703234*t3121 + 0.073913*t3182)*var2[13] + (0.073913*t3658 - 0.703234*t3679 + t3773)*var2[14] + (-0.703234*t3391 + 0.073913*t3455 + t3530)*var2[15];
  p_output1[9]=(t4348 - 0.703234*t4392 + 0.073913*t4449)*var2[3] + (t4257 - 0.703234*t4268 + 0.073913*t4289)*var2[4] + (t4650 - 0.703234*t4684 + 0.073913*t4694)*var2[5] + (t4858 - 0.703234*t4881 + 0.073913*t4901)*var2[13] + (0.073913*t5062 - 0.703234*t5082 + t5095)*var2[14] + (-0.703234*t4985 + 0.073913*t4995 + t5009)*var2[15];
  p_output1[10]=(t6042 - 0.703234*t6062 + 0.073913*t6075)*var2[4] + (t5623 - 0.703234*t5663 + 0.073913*t5696)*var2[5] + (t5212 - 0.703234*t5237 + 0.073913*t5271)*var2[13] + (0.073913*t5865 - 0.703234*t5888 + t5911)*var2[14] + (-0.703234*t5477 + 0.073913*t5509 + t5542)*var2[15];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.140811*t4040 + 0.213182*t4076 + 0.230568*t4101 + t3824*t7004 + t3863*t7068 + t3895*t7083 + t3918*t7147 + t3931*t7286 + t3955*t7325 + t3987*t7377 - 1.*t2154*t7054*t837)*var2[3] + (0.140811*t1757 + 0.213182*t1934 + 0.230568*t2118 - 1.*t417*t600*t7054 + t1168*t7083 + t1293*t7147 + t1299*t7286 + t1522*t7325 + t1741*t7377 + t1069*t417*t7068*t837 + t417*t7004*t837*t853)*var2[4] + (0.140811*t2619 + 0.213182*t2671 + 0.230568*t2723 + t2201*t7004 + t2162*t7068 + t2332*t7083 + t2231*t7147 + t2443*t7286 + t2349*t7325 + t2495*t7377)*var2[5] + (0.140811*t3059 + 0.213182*t3121 + 0.230568*t3182 + t2878*t7083 + t2825*t7147 + t2906*t7286 + t2885*t7325 + t3035*t7377 + t2162*t7480 + t2778*t7506)*var2[13] + (0.230568*t3658 + 0.213182*t3679 + 0.140811*t3749 + t3601*t7286 + t3648*t7325 + t3575*t7377 + t2825*t7714 + t3213*t7723 + t417*t7700*t837)*var2[14] + (0.213182*t3391 + 0.230568*t3455 + 0.140811*t3525 + t3228*t7595 + t3274*t7619 + t3342*t7660)*var2[15];
  p_output1[13]=var2[1] + (0.140811*t4345 + 0.213182*t4392 + 0.230568*t4449 + t2162*t7004 + t2778*t7068 + t2825*t7083 + t3213*t7147 + t3228*t7286 + t3274*t7325 + t3342*t7377 + t417*t7054*t837)*var2[3] + (0.140811*t4248 + 0.213182*t4268 + 0.230568*t4289 - 1.*t2154*t600*t7054 + t4138*t7083 + t4155*t7147 + t4176*t7286 + t4213*t7325 + t4242*t7377 + t1069*t2154*t7068*t837 + t2154*t7004*t837*t853)*var2[4] + (0.140811*t4647 + 0.213182*t4684 + 0.230568*t4694 + t3863*t7004 + t4509*t7068 + t4556*t7083 + t4514*t7147 + t4595*t7286 + t4570*t7325 + t4619*t7377)*var2[5] + (0.140811*t4851 + 0.213182*t4881 + 0.230568*t4901 + t4766*t7083 + t4751*t7147 + t4790*t7286 + t4779*t7325 + t4823*t7377 + t4509*t7480 + t4734*t7506)*var2[13] + (0.230568*t5062 + 0.213182*t5082 + 0.140811*t5092 + t5034*t7286 + t5054*t7325 + t5023*t7377 + t4751*t7714 + t4932*t7723 + t2154*t7700*t837)*var2[14] + (0.213182*t4985 + 0.230568*t4995 + 0.140811*t5008 + t4936*t7595 + t4950*t7619 + t4978*t7660)*var2[15];
  p_output1[14]=var2[2] + (0.140811*t6037 + 0.213182*t6062 + 0.230568*t6075 - 1.*t1069*t600*t7068 + t5964*t7083 + t5976*t7147 + t5984*t7286 + t6003*t7325 + t6026*t7377 - 1.*t7054*t837 - 1.*t600*t7004*t853)*var2[4] + (0.140811*t5616 + 0.213182*t5663 + 0.230568*t5696 + t5342*t7083 + t5556*t7147 + t5593*t7286 + t5572*t7325 + t5607*t7377 - 1.*t1069*t7004*t837 + t7068*t837*t853)*var2[5] + (0.140811*t5204 + 0.213182*t5237 + 0.230568*t5271 + t5129*t7083 + t5122*t7147 + t5153*t7286 + t5131*t7325 + t5193*t7377 + t1069*t7506*t837 + t7480*t837*t853)*var2[13] + (0.230568*t5865 + 0.213182*t5888 + 0.140811*t5907 + t5797*t7286 + t5830*t7325 + t5771*t7377 - 1.*t600*t7700 + t5122*t7714 + t5342*t7723)*var2[14] + (0.213182*t5477 + 0.230568*t5509 + 0.140811*t5540 + t5361*t7595 + t5394*t7619 + t5458*t7660)*var2[15];
  p_output1[15]=0;
}



void dT_left_shoulder_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
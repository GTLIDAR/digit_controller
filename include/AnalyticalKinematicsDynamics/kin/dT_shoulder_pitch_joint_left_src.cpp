/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_shoulder_pitch_joint_left_src.h"

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
  double t51;
  double t1073;
  double t557;
  double t667;
  double t672;
  double t1224;
  double t1077;
  double t1204;
  double t1271;
  double t53;
  double t341;
  double t1219;
  double t1294;
  double t1329;
  double t1392;
  double t1400;
  double t1495;
  double t2046;
  double t1816;
  double t1837;
  double t2045;
  double t2088;
  double t2129;
  double t2133;
  double t2148;
  double t2163;
  double t1337;
  double t1354;
  double t2132;
  double t2164;
  double t2168;
  double t2181;
  double t2192;
  double t2198;
  double t1928;
  double t1942;
  double t1894;
  double t1907;
  double t2449;
  double t2452;
  double t2461;
  double t2443;
  double t2467;
  double t2470;
  double t2501;
  double t2520;
  double t2523;
  double t2839;
  double t2841;
  double t281;
  double t288;
  double t3145;
  double t3156;
  double t3158;
  double t3177;
  double t3213;
  double t3230;
  double t1725;
  double t1726;
  double t3159;
  double t3267;
  double t3277;
  double t3304;
  double t3319;
  double t3334;
  double t1875;
  double t1889;
  double t3500;
  double t3505;
  double t3513;
  double t3534;
  double t3542;
  double t3558;
  double t2497;
  double t3878;
  double t3892;
  double t3905;
  double t3920;
  double t3929;
  double t3970;
  double t3977;
  double t3981;
  double t4137;
  double t4149;
  double t4154;
  double t4128;
  double t4162;
  double t4189;
  double t4206;
  double t4230;
  double t4242;
  double t4376;
  double t4388;
  double t4679;
  double t4680;
  double t4684;
  double t4703;
  double t4707;
  double t4709;
  double t4874;
  double t4891;
  double t4893;
  double t4925;
  double t4932;
  double t4946;
  double t5233;
  double t5247;
  double t5250;
  double t5259;
  double t5261;
  double t5262;
  double t494;
  double t1332;
  double t1498;
  double t1559;
  double t1596;
  double t1815;
  double t1850;
  double t1854;
  double t1864;
  double t1870;
  double t1892;
  double t1919;
  double t1944;
  double t1985;
  double t2173;
  double t2201;
  double t2203;
  double t2210;
  double t2282;
  double t2303;
  double t2334;
  double t2342;
  double t2357;
  double t2433;
  double t2435;
  double t2524;
  double t2549;
  double t2566;
  double t2585;
  double t2592;
  double t2618;
  double t2638;
  double t2664;
  double t2675;
  double t2696;
  double t2795;
  double t2804;
  double t2892;
  double t2893;
  double t2925;
  double t2995;
  double t3055;
  double t3069;
  double t3093;
  double t3112;
  double t3116;
  double t3117;
  double t3118;
  double t3127;
  double t3143;
  double t3288;
  double t3350;
  double t3385;
  double t3387;
  double t3389;
  double t3403;
  double t3404;
  double t3411;
  double t3412;
  double t3421;
  double t3431;
  double t3436;
  double t3442;
  double t3496;
  double t3524;
  double t3559;
  double t3568;
  double t3571;
  double t3574;
  double t3576;
  double t3601;
  double t3603;
  double t3624;
  double t3627;
  double t3628;
  double t3638;
  double t3681;
  double t3733;
  double t3737;
  double t3763;
  double t3767;
  double t3781;
  double t3786;
  double t3796;
  double t3804;
  double t3808;
  double t3820;
  double t3828;
  double t3835;
  double t3836;
  double t3957;
  double t4016;
  double t4038;
  double t4046;
  double t4052;
  double t4055;
  double t4064;
  double t4070;
  double t4076;
  double t4094;
  double t4104;
  double t4196;
  double t4255;
  double t4271;
  double t4277;
  double t4279;
  double t4289;
  double t4295;
  double t4297;
  double t4299;
  double t4309;
  double t4315;
  double t4358;
  double t4372;
  double t4464;
  double t4465;
  double t4482;
  double t4497;
  double t4513;
  double t4514;
  double t4522;
  double t4544;
  double t4579;
  double t4596;
  double t4598;
  double t4631;
  double t4702;
  double t4717;
  double t4726;
  double t4738;
  double t4741;
  double t4758;
  double t4772;
  double t4781;
  double t4818;
  double t4822;
  double t4835;
  double t4919;
  double t4949;
  double t4957;
  double t4962;
  double t4974;
  double t4977;
  double t4978;
  double t4982;
  double t5005;
  double t5036;
  double t5037;
  double t5096;
  double t5097;
  double t5098;
  double t5104;
  double t5116;
  double t5119;
  double t5120;
  double t5132;
  double t5134;
  double t5139;
  double t5145;
  double t5157;
  double t5171;
  double t5209;
  double t5228;
  double t5257;
  double t5265;
  double t5268;
  double t5269;
  double t5272;
  double t5277;
  double t5280;
  double t5296;
  double t5306;
  double t5314;
  double t5316;
  double t5318;
  double t5319;
  double t5851;
  double t5852;
  double t5878;
  double t5879;
  double t5881;
  double t5853;
  double t5854;
  double t5855;
  double t5902;
  double t5907;
  double t5908;
  double t5910;
  double t5886;
  double t5889;
  double t5891;
  double t5893;
  double t5857;
  double t5859;
  double t5867;
  double t5876;
  double t5961;
  double t5967;
  double t5968;
  double t5970;
  double t5971;
  double t6004;
  double t6006;
  double t6007;
  double t6010;
  double t6012;
  double t6013;
  double t6018;
  double t6030;
  double t6032;
  t51 = Cos(var1[3]);
  t1073 = Cos(var1[4]);
  t557 = Cos(var1[14]);
  t667 = -1.*t557;
  t672 = 1. + t667;
  t1224 = Cos(var1[13]);
  t1077 = Cos(var1[5]);
  t1204 = Sin(var1[13]);
  t1271 = Sin(var1[5]);
  t53 = Sin(var1[14]);
  t341 = Sin(var1[4]);
  t1219 = -1.*t51*t1073*t1077*t1204;
  t1294 = t1224*t51*t1073*t1271;
  t1329 = t1219 + t1294;
  t1392 = t1224*t51*t1073*t1077;
  t1400 = t51*t1073*t1204*t1271;
  t1495 = t1392 + t1400;
  t2046 = Sin(var1[3]);
  t1816 = -0.010926102783999999*t672;
  t1837 = 1. + t1816;
  t2045 = t51*t1077*t341;
  t2088 = t2046*t1271;
  t2129 = t2045 + t2088;
  t2133 = t1077*t2046;
  t2148 = -1.*t51*t341*t1271;
  t2163 = t2133 + t2148;
  t1337 = -0.9890740084840001*t672;
  t1354 = 1. + t1337;
  t2132 = t1204*t2129;
  t2164 = t1224*t2163;
  t2168 = t2132 + t2164;
  t2181 = t1224*t2129;
  t2192 = -1.*t1204*t2163;
  t2198 = t2181 + t2192;
  t1928 = -0.994522*t53;
  t1942 = 0. + t1928;
  t1894 = 0.104528*t53;
  t1907 = 0. + t1894;
  t2449 = -1.*t1077*t2046;
  t2452 = t51*t341*t1271;
  t2461 = t2449 + t2452;
  t2443 = -1.*t1204*t2129;
  t2467 = t1224*t2461;
  t2470 = t2443 + t2467;
  t2501 = -1.*t1224*t2129;
  t2520 = -1.*t1204*t2461;
  t2523 = t2501 + t2520;
  t2839 = t1204*t2461;
  t2841 = t2181 + t2839;
  t281 = 0.994522*t53;
  t288 = 0. + t281;
  t3145 = -1.*t1077*t2046*t341;
  t3156 = t51*t1271;
  t3158 = t3145 + t3156;
  t3177 = -1.*t51*t1077;
  t3213 = -1.*t2046*t341*t1271;
  t3230 = t3177 + t3213;
  t1725 = -0.104528*t53;
  t1726 = 0. + t1725;
  t3159 = -1.*t1204*t3158;
  t3267 = t1224*t3230;
  t3277 = t3159 + t3267;
  t3304 = t1224*t3158;
  t3319 = t1204*t3230;
  t3334 = t3304 + t3319;
  t1875 = -1.0000001112680001*t672;
  t1889 = 1. + t1875;
  t3500 = -1.*t1073*t1077*t1204*t2046;
  t3505 = t1224*t1073*t2046*t1271;
  t3513 = t3500 + t3505;
  t3534 = t1224*t1073*t1077*t2046;
  t3542 = t1073*t1204*t2046*t1271;
  t3558 = t3534 + t3542;
  t2497 = 0.103955395616*t672*t2470;
  t3878 = t1077*t2046*t341;
  t3892 = -1.*t51*t1271;
  t3905 = t3878 + t3892;
  t3920 = t1204*t3905;
  t3929 = t3920 + t3267;
  t3970 = t1224*t3905;
  t3977 = -1.*t1204*t3230;
  t3981 = t3970 + t3977;
  t4137 = t51*t1077;
  t4149 = t2046*t341*t1271;
  t4154 = t4137 + t4149;
  t4128 = -1.*t1204*t3905;
  t4162 = t1224*t4154;
  t4189 = t4128 + t4162;
  t4206 = -1.*t1224*t3905;
  t4230 = -1.*t1204*t4154;
  t4242 = t4206 + t4230;
  t4376 = t1204*t4154;
  t4388 = t3970 + t4376;
  t4679 = -1.*t1073*t1077*t1204;
  t4680 = t1224*t1073*t1271;
  t4684 = t4679 + t4680;
  t4703 = -1.*t1224*t1073*t1077;
  t4707 = -1.*t1073*t1204*t1271;
  t4709 = t4703 + t4707;
  t4874 = t1073*t1077*t1204;
  t4891 = -1.*t1224*t1073*t1271;
  t4893 = t4874 + t4891;
  t4925 = t1224*t1073*t1077;
  t4932 = t1073*t1204*t1271;
  t4946 = t4925 + t4932;
  t5233 = t1077*t1204*t341;
  t5247 = -1.*t1224*t341*t1271;
  t5250 = t5233 + t5247;
  t5259 = -1.*t1224*t1077*t341;
  t5261 = -1.*t1204*t341*t1271;
  t5262 = t5259 + t5261;
  t494 = -1.*t51*t288*t341;
  t1332 = 0.103955395616*t672*t1329;
  t1498 = t1354*t1495;
  t1559 = t494 + t1332 + t1498;
  t1596 = 0.703234*t1559;
  t1815 = -1.*t51*t1726*t341;
  t1850 = t1837*t1329;
  t1854 = 0.103955395616*t672*t1495;
  t1864 = t1815 + t1850 + t1854;
  t1870 = -0.073913*t1864;
  t1892 = -1.*t1889*t51*t341;
  t1919 = t1907*t1329;
  t1944 = t1942*t1495;
  t1985 = t1892 + t1919 + t1944;
  t2173 = 0.103955395616*t672*t2168;
  t2201 = t1837*t2198;
  t2203 = t2173 + t2201;
  t2210 = -0.073913*t2203;
  t2282 = t1354*t2168;
  t2303 = 0.103955395616*t672*t2198;
  t2334 = t2282 + t2303;
  t2342 = 0.703234*t2334;
  t2357 = t1942*t2168;
  t2433 = t1907*t2198;
  t2435 = t2357 + t2433;
  t2524 = t1837*t2523;
  t2549 = t2497 + t2524;
  t2566 = -0.073913*t2549;
  t2585 = t1354*t2470;
  t2592 = 0.103955395616*t672*t2523;
  t2618 = t2585 + t2592;
  t2638 = 0.703234*t2618;
  t2664 = t1942*t2470;
  t2675 = t1907*t2523;
  t2696 = t2664 + t2675;
  t2795 = -1.0000001112680001*t51*t1073*t53;
  t2804 = 0.104528*t557*t2470;
  t2892 = -0.994522*t557*t2841;
  t2893 = t2795 + t2804 + t2892;
  t2925 = 0.994522*t557*t51*t1073;
  t2995 = 0.103955395616*t53*t2470;
  t3055 = -0.9890740084840001*t53*t2841;
  t3069 = t2925 + t2995 + t3055;
  t3093 = 0.703234*t3069;
  t3112 = -0.104528*t557*t51*t1073;
  t3116 = -0.010926102783999999*t53*t2470;
  t3117 = 0.103955395616*t53*t2841;
  t3118 = t3112 + t3116 + t3117;
  t3127 = -0.073913*t3118;
  t3143 = -1.*t1073*t288*t2046;
  t3288 = 0.103955395616*t672*t3277;
  t3350 = t1354*t3334;
  t3385 = t3143 + t3288 + t3350;
  t3387 = 0.703234*t3385;
  t3389 = -1.*t1073*t1726*t2046;
  t3403 = t1837*t3277;
  t3404 = 0.103955395616*t672*t3334;
  t3411 = t3389 + t3403 + t3404;
  t3412 = -0.073913*t3411;
  t3421 = -1.*t1889*t1073*t2046;
  t3431 = t1907*t3277;
  t3436 = t1942*t3334;
  t3442 = t3421 + t3431 + t3436;
  t3496 = -1.*t288*t2046*t341;
  t3524 = 0.103955395616*t672*t3513;
  t3559 = t1354*t3558;
  t3568 = t3496 + t3524 + t3559;
  t3571 = 0.703234*t3568;
  t3574 = -1.*t1726*t2046*t341;
  t3576 = t1837*t3513;
  t3601 = 0.103955395616*t672*t3558;
  t3603 = t3574 + t3576 + t3601;
  t3624 = -0.073913*t3603;
  t3627 = -1.*t1889*t2046*t341;
  t3628 = t1907*t3513;
  t3638 = t1942*t3558;
  t3681 = t3627 + t3628 + t3638;
  t3733 = t51*t1073*t288;
  t3737 = t1354*t2841;
  t3763 = t3733 + t2497 + t3737;
  t3767 = 0.703234*t3763;
  t3781 = t51*t1073*t1726;
  t3786 = t1837*t2470;
  t3796 = 0.103955395616*t672*t2841;
  t3804 = t3781 + t3786 + t3796;
  t3808 = -0.073913*t3804;
  t3820 = t1889*t51*t1073;
  t3828 = t1907*t2470;
  t3835 = t1942*t2841;
  t3836 = t3820 + t3828 + t3835;
  t3957 = 0.103955395616*t672*t3929;
  t4016 = t1837*t3981;
  t4038 = t3957 + t4016;
  t4046 = -0.073913*t4038;
  t4052 = t1354*t3929;
  t4055 = 0.103955395616*t672*t3981;
  t4064 = t4052 + t4055;
  t4070 = 0.703234*t4064;
  t4076 = t1942*t3929;
  t4094 = t1907*t3981;
  t4104 = t4076 + t4094;
  t4196 = 0.103955395616*t672*t4189;
  t4255 = t1837*t4242;
  t4271 = t4196 + t4255;
  t4277 = -0.073913*t4271;
  t4279 = t1354*t4189;
  t4289 = 0.103955395616*t672*t4242;
  t4295 = t4279 + t4289;
  t4297 = 0.703234*t4295;
  t4299 = t1942*t4189;
  t4309 = t1907*t4242;
  t4315 = t4299 + t4309;
  t4358 = -1.0000001112680001*t1073*t53*t2046;
  t4372 = 0.104528*t557*t4189;
  t4464 = -0.994522*t557*t4388;
  t4465 = t4358 + t4372 + t4464;
  t4482 = 0.994522*t557*t1073*t2046;
  t4497 = 0.103955395616*t53*t4189;
  t4513 = -0.9890740084840001*t53*t4388;
  t4514 = t4482 + t4497 + t4513;
  t4522 = 0.703234*t4514;
  t4544 = -0.104528*t557*t1073*t2046;
  t4579 = -0.010926102783999999*t53*t4189;
  t4596 = 0.103955395616*t53*t4388;
  t4598 = t4544 + t4579 + t4596;
  t4631 = -0.073913*t4598;
  t4702 = 0.103955395616*t672*t4684;
  t4717 = t1837*t4709;
  t4726 = t4702 + t4717;
  t4738 = -0.073913*t4726;
  t4741 = t1354*t4684;
  t4758 = 0.103955395616*t672*t4709;
  t4772 = t4741 + t4758;
  t4781 = 0.703234*t4772;
  t4818 = t1942*t4684;
  t4822 = t1907*t4709;
  t4835 = t4818 + t4822;
  t4919 = 0.103955395616*t672*t4893;
  t4949 = t1837*t4946;
  t4957 = t4919 + t4949;
  t4962 = -0.073913*t4957;
  t4974 = t1354*t4893;
  t4977 = 0.103955395616*t672*t4946;
  t4978 = t4974 + t4977;
  t4982 = 0.703234*t4978;
  t5005 = t1942*t4893;
  t5036 = t1907*t4946;
  t5037 = t5005 + t5036;
  t5096 = 1.0000001112680001*t53*t341;
  t5097 = 0.104528*t557*t4684;
  t5098 = -0.994522*t557*t4946;
  t5104 = t5096 + t5097 + t5098;
  t5116 = -0.994522*t557*t341;
  t5119 = 0.103955395616*t53*t4684;
  t5120 = -0.9890740084840001*t53*t4946;
  t5132 = t5116 + t5119 + t5120;
  t5134 = 0.703234*t5132;
  t5139 = 0.104528*t557*t341;
  t5145 = -0.010926102783999999*t53*t4684;
  t5157 = 0.103955395616*t53*t4946;
  t5171 = t5139 + t5145 + t5157;
  t5209 = -0.073913*t5171;
  t5228 = -1.*t1073*t288;
  t5257 = 0.103955395616*t672*t5250;
  t5265 = t1354*t5262;
  t5268 = t5228 + t5257 + t5265;
  t5269 = 0.703234*t5268;
  t5272 = -1.*t1073*t1726;
  t5277 = t1837*t5250;
  t5280 = 0.103955395616*t672*t5262;
  t5296 = t5272 + t5277 + t5280;
  t5306 = -0.073913*t5296;
  t5314 = -1.*t1889*t1073;
  t5316 = t1907*t5250;
  t5318 = t1942*t5262;
  t5319 = t5314 + t5316 + t5318;
  t5851 = -1.*t1224;
  t5852 = 1. + t5851;
  t5878 = 0.12*t5852;
  t5879 = -0.4*t1204;
  t5881 = 0. + t5878 + t5879;
  t5853 = 0.4*t5852;
  t5854 = 0.12*t1204;
  t5855 = 0. + t5853 + t5854;
  t5902 = 1.1924972351948546e-8*var1[14];
  t5907 = 0.38315655000705834*t672;
  t5908 = -0.05650052807*t288;
  t5910 = t5902 + t5907 + t5908;
  t5886 = 1.1345904784751044e-7*var1[14];
  t5889 = -0.04027119345689465*t672;
  t5891 = -0.05650052807*t1726;
  t5893 = t5886 + t5889 + t5891;
  t5857 = -0.056500534356700764*t672;
  t5859 = 0.38315650737400003*t1942;
  t5867 = -0.040271188976*t1907;
  t5876 = 0. + t5857 + t5859 + t5867;
  t5961 = 0.12*t1224;
  t5967 = 0.4*t1204;
  t5968 = t5961 + t5967;
  t5970 = -0.4*t1224;
  t5971 = t5970 + t5854;
  t6004 = -0.3852670428678886*t557;
  t6006 = -0.056500534356700764*t53;
  t6007 = t6004 + t6006;
  t6010 = 0.0059058871981009595*t557;
  t6012 = -0.04027119345689465*t53;
  t6013 = 1.1345904784751044e-7 + t6010 + t6012;
  t6018 = -0.05619101817723254*t557;
  t6030 = 0.38315655000705834*t53;
  t6032 = 1.1924972351948546e-8 + t6018 + t6030;
  p_output1[0]=(t3387 + t3412 + 0.707107*t3442)*var2[3] + (t1596 + t1870 + 0.707107*t1985)*var2[4] + (t2210 + t2342 + 0.707107*t2435)*var2[5] + (t2566 + t2638 + 0.707107*t2696)*var2[13] + (0.707107*t2893 + t3093 + t3127)*var2[14];
  p_output1[1]=(t3767 + t3808 + 0.707107*t3836)*var2[3] + (t3571 + t3624 + 0.707107*t3681)*var2[4] + (t4046 + t4070 + 0.707107*t4104)*var2[5] + (t4277 + t4297 + 0.707107*t4315)*var2[13] + (0.707107*t4465 + t4522 + t4631)*var2[14];
  p_output1[2]=(t5269 + t5306 + 0.707107*t5319)*var2[4] + (t4962 + t4982 + 0.707107*t5037)*var2[5] + (t4738 + t4781 + 0.707107*t4835)*var2[13] + (0.707107*t5104 + t5134 + t5209)*var2[14];
  p_output1[3]=0;
  p_output1[4]=(t3387 + t3412 - 0.707107*t3442)*var2[3] + (t1596 + t1870 - 0.707107*t1985)*var2[4] + (t2210 + t2342 - 0.707107*t2435)*var2[5] + (t2566 + t2638 - 0.707107*t2696)*var2[13] + (-0.707107*t2893 + t3093 + t3127)*var2[14];
  p_output1[5]=(t3767 + t3808 - 0.707107*t3836)*var2[3] + (t3571 + t3624 - 0.707107*t3681)*var2[4] + (t4046 + t4070 - 0.707107*t4104)*var2[5] + (t4277 + t4297 - 0.707107*t4315)*var2[13] + (-0.707107*t4465 + t4522 + t4631)*var2[14];
  p_output1[6]=(t5269 + t5306 - 0.707107*t5319)*var2[4] + (t4962 + t4982 - 0.707107*t5037)*var2[5] + (t4738 + t4781 - 0.707107*t4835)*var2[13] + (-0.707107*t5104 + t5134 + t5209)*var2[14];
  p_output1[7]=0;
  p_output1[8]=(-0.104528*t3385 - 0.994522*t3411)*var2[3] + (-0.104528*t1559 - 0.994522*t1864)*var2[4] + (-0.994522*t2203 - 0.104528*t2334)*var2[5] + (-0.994522*t2549 - 0.104528*t2618)*var2[13] + (-0.104528*t3069 - 0.994522*t3118)*var2[14];
  p_output1[9]=(-0.104528*t3763 - 0.994522*t3804)*var2[3] + (-0.104528*t3568 - 0.994522*t3603)*var2[4] + (-0.994522*t4038 - 0.104528*t4064)*var2[5] + (-0.994522*t4271 - 0.104528*t4295)*var2[13] + (-0.104528*t4514 - 0.994522*t4598)*var2[14];
  p_output1[10]=(-0.104528*t5268 - 0.994522*t5296)*var2[4] + (-0.994522*t4957 - 0.104528*t4978)*var2[5] + (-0.994522*t4726 - 0.104528*t4772)*var2[13] + (-0.104528*t5132 - 0.994522*t5171)*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.398799*t3385 + 0.108558*t3411 - 0.0565*t3442 + t3158*t5855 - 1.*t1073*t2046*t5876 + t3230*t5881 + t3277*t5893 + t3334*t5910)*var2[3] + (0.398799*t1559 + 0.108558*t1864 - 0.0565*t1985 + t1073*t1077*t51*t5855 - 1.*t341*t51*t5876 + t1073*t1271*t51*t5881 + t1329*t5893 + t1495*t5910)*var2[4] + (0.108558*t2203 + 0.398799*t2334 - 0.0565*t2435 + t2163*t5855 + t2129*t5881 + t2198*t5893 + t2168*t5910)*var2[5] + (0.108558*t2549 + 0.398799*t2618 - 0.0565*t2696 + t2523*t5893 + t2470*t5910 + t2129*t5968 + t2461*t5971)*var2[13] + (-0.0565*t2893 + 0.398799*t3069 + 0.108558*t3118 + t1073*t51*t6007 + t2470*t6013 + t2841*t6032)*var2[14];
  p_output1[13]=var2[1] + (0.398799*t3763 + 0.108558*t3804 - 0.0565*t3836 + t2129*t5855 + t1073*t51*t5876 + t2461*t5881 + t2470*t5893 + t2841*t5910)*var2[3] + (0.398799*t3568 + 0.108558*t3603 - 0.0565*t3681 + t1073*t1077*t2046*t5855 - 1.*t2046*t341*t5876 + t1073*t1271*t2046*t5881 + t3513*t5893 + t3558*t5910)*var2[4] + (0.108558*t4038 + 0.398799*t4064 - 0.0565*t4104 + t3230*t5855 + t3905*t5881 + t3981*t5893 + t3929*t5910)*var2[5] + (0.108558*t4271 + 0.398799*t4295 - 0.0565*t4315 + t4242*t5893 + t4189*t5910 + t3905*t5968 + t4154*t5971)*var2[13] + (-0.0565*t4465 + 0.398799*t4514 + 0.108558*t4598 + t1073*t2046*t6007 + t4189*t6013 + t4388*t6032)*var2[14];
  p_output1[14]=var2[2] + (0.398799*t5268 + 0.108558*t5296 - 0.0565*t5319 - 1.*t1077*t341*t5855 - 1.*t1073*t5876 - 1.*t1271*t341*t5881 + t5250*t5893 + t5262*t5910)*var2[4] + (0.108558*t4957 + 0.398799*t4978 - 0.0565*t5037 - 1.*t1073*t1271*t5855 + t1073*t1077*t5881 + t4946*t5893 + t4893*t5910)*var2[5] + (0.108558*t4726 + 0.398799*t4772 - 0.0565*t4835 + t4709*t5893 + t4684*t5910 + t1073*t1077*t5968 + t1073*t1271*t5971)*var2[13] + (-0.0565*t5104 + 0.398799*t5132 + 0.108558*t5171 - 1.*t341*t6007 + t4684*t6013 + t4946*t6032)*var2[14];
  p_output1[15]=0;
}



void dT_shoulder_pitch_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
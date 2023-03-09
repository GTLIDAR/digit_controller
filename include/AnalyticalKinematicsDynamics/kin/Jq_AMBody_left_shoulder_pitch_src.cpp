/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_left_shoulder_pitch_src.h"

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
  double t966;
  double t437;
  double t441;
  double t674;
  double t2467;
  double t2197;
  double t2219;
  double t2291;
  double t2293;
  double t2305;
  double t2390;
  double t2435;
  double t2462;
  double t2103;
  double t2552;
  double t2669;
  double t2872;
  double t2907;
  double t2939;
  double t2971;
  double t2973;
  double t2995;
  double t360;
  double t680;
  double t773;
  double t1278;
  double t1415;
  double t1417;
  double t1856;
  double t1932;
  double t1935;
  double t2034;
  double t2078;
  double t3715;
  double t3724;
  double t3831;
  double t3832;
  double t3458;
  double t4445;
  double t4461;
  double t4468;
  double t4390;
  double t4405;
  double t4408;
  double t798;
  double t1979;
  double t1996;
  double t2465;
  double t3073;
  double t3233;
  double t3372;
  double t3373;
  double t3425;
  double t3428;
  double t3468;
  double t3482;
  double t3525;
  double t3565;
  double t3576;
  double t3620;
  double t3710;
  double t3804;
  double t3877;
  double t3897;
  double t3921;
  double t3994;
  double t4048;
  double t4087;
  double t4123;
  double t4170;
  double t4182;
  double t4324;
  double t4362;
  double t4368;
  double t4384;
  double t4389;
  double t4443;
  double t4471;
  double t4473;
  double t4476;
  double t4515;
  double t4531;
  double t4555;
  double t4582;
  double t4609;
  double t4616;
  double t4627;
  double t4739;
  double t4741;
  double t4803;
  double t4807;
  double t4812;
  double t4813;
  double t4836;
  double t4838;
  double t4862;
  double t4891;
  double t4897;
  double t4922;
  double t4923;
  double t4924;
  double t4948;
  double t4951;
  double t4959;
  double t4971;
  double t4975;
  double t4983;
  double t4987;
  double t5033;
  double t5037;
  double t5056;
  double t5068;
  double t5070;
  double t5098;
  double t5200;
  double t5226;
  double t5268;
  double t5184;
  double t5430;
  double t5431;
  double t5435;
  double t5348;
  double t5562;
  double t5571;
  double t5574;
  double t5553;
  double t5196;
  double t5275;
  double t5279;
  double t5284;
  double t5298;
  double t5319;
  double t5332;
  double t5336;
  double t5342;
  double t5360;
  double t5437;
  double t5446;
  double t5454;
  double t5489;
  double t5517;
  double t5520;
  double t5521;
  double t5546;
  double t5554;
  double t5575;
  double t5585;
  double t5593;
  double t5607;
  double t5628;
  double t5630;
  double t5641;
  double t5644;
  double t5788;
  double t5799;
  double t5825;
  double t5843;
  double t5851;
  double t5864;
  double t5752;
  double t5755;
  double t5777;
  double t5918;
  double t5919;
  double t5921;
  double t5834;
  double t5866;
  double t5870;
  double t5735;
  double t5730;
  double t6040;
  double t6060;
  double t6065;
  double t6071;
  double t6033;
  double t6088;
  double t6097;
  double t6109;
  double t6063;
  double t6081;
  double t6083;
  double t5747;
  double t5749;
  double t5781;
  double t5899;
  double t5942;
  double t5945;
  double t5959;
  double t5962;
  double t5963;
  double t5971;
  double t5977;
  double t5978;
  double t5979;
  double t6009;
  double t6023;
  double t6034;
  double t6035;
  double t6039;
  double t6084;
  double t6111;
  double t6116;
  double t6120;
  double t6123;
  double t6126;
  double t6130;
  double t6133;
  double t6135;
  double t6151;
  double t6153;
  double t6155;
  double t6179;
  double t6181;
  double t6172;
  double t6173;
  double t6176;
  double t6192;
  double t6194;
  double t6195;
  double t6196;
  double t6202;
  double t6207;
  double t6212;
  double t6215;
  double t6220;
  double t6222;
  t966 = Sin(var1[14]);
  t437 = Cos(var1[14]);
  t441 = -1.*t437;
  t674 = 1. + t441;
  t2467 = Sin(var1[13]);
  t2197 = -0.9890740084840001*t674;
  t2219 = 1. + t2197;
  t2291 = 0.703234*t2219;
  t2293 = -0.007683655156165408*t674;
  t2305 = -0.994522*t966;
  t2390 = 0. + t2305;
  t2435 = -0.707107*t2390;
  t2462 = t2291 + t2293 + t2435;
  t2103 = Cos(var1[13]);
  t2552 = -0.010926102783999999*t674;
  t2669 = 1. + t2552;
  t2872 = -0.073913*t2669;
  t2907 = 0.07310496868062215*t674;
  t2939 = 0.104528*t966;
  t2971 = 0. + t2939;
  t2973 = -0.707107*t2971;
  t2995 = t2872 + t2907 + t2973;
  t360 = Cos(var1[4]);
  t680 = -1.0000001112680001*t674;
  t773 = 1. + t680;
  t1278 = -0.104528*t966;
  t1415 = 0. + t1278;
  t1417 = -0.073913*t1415;
  t1856 = 0.994522*t966;
  t1932 = 0. + t1856;
  t1935 = 0.703234*t1932;
  t2034 = Sin(var1[4]);
  t2078 = Cos(var1[5]);
  t3715 = 0.707107*t2390;
  t3724 = t2291 + t2293 + t3715;
  t3831 = 0.707107*t2971;
  t3832 = t2872 + t2907 + t3831;
  t3458 = Sin(var1[5]);
  t4445 = -0.994522*t2669;
  t4461 = -0.010866249592949247*t674;
  t4468 = t4445 + t4461;
  t4390 = -0.104528*t2219;
  t4405 = -0.10338592795881554*t674;
  t4408 = t4390 + t4405;
  t798 = -0.707107*t773;
  t1979 = 0. + t798 + t1417 + t1935;
  t1996 = -1.*t360*t1979;
  t2465 = t2103*t2462;
  t3073 = -1.*t2467*t2995;
  t3233 = 0. + t2465 + t3073;
  t3372 = t2078*t3233;
  t3373 = t2467*t2462;
  t3425 = t2103*t2995;
  t3428 = 0. + t3373 + t3425;
  t3468 = t3428*t3458;
  t3482 = 0. + t3372 + t3468;
  t3525 = -1.*t2034*t3482;
  t3565 = t1996 + t3525;
  t3576 = 0.707107*t773;
  t3620 = 0. + t3576 + t1417 + t1935;
  t3710 = -1.*t360*t3620;
  t3804 = t2103*t3724;
  t3877 = -1.*t2467*t3832;
  t3897 = 0. + t3804 + t3877;
  t3921 = t2078*t3897;
  t3994 = t2467*t3724;
  t4048 = t2103*t3832;
  t4087 = 0. + t3994 + t4048;
  t4123 = t4087*t3458;
  t4170 = 0. + t3921 + t4123;
  t4182 = -1.*t2034*t4170;
  t4324 = t3710 + t4182;
  t4362 = -0.994522*t1415;
  t4368 = -0.104528*t1932;
  t4384 = 0. + t4362 + t4368;
  t4389 = -1.*t360*t4384;
  t4443 = t2103*t4408;
  t4471 = -1.*t4468*t2467;
  t4473 = 0. + t4443 + t4471;
  t4476 = t2078*t4473;
  t4515 = t2103*t4468;
  t4531 = t4408*t2467;
  t4555 = 0. + t4515 + t4531;
  t4582 = t4555*t3458;
  t4609 = 0. + t4476 + t4582;
  t4616 = -1.*t2034*t4609;
  t4627 = t4389 + t4616;
  t4739 = -1.*t2078*t3233;
  t4741 = -1.*t3428*t3458;
  t4803 = t4739 + t4741;
  t4807 = var2[4]*t4803;
  t4812 = t2078*t3428;
  t4813 = -1.*t3233*t3458;
  t4836 = t4812 + t4813;
  t4838 = var2[3]*t360*t4836;
  t4862 = t4807 + t4838;
  t4891 = -1.*t2078*t3897;
  t4897 = -1.*t4087*t3458;
  t4922 = t4891 + t4897;
  t4923 = var2[4]*t4922;
  t4924 = t2078*t4087;
  t4948 = -1.*t3897*t3458;
  t4951 = t4924 + t4948;
  t4959 = var2[3]*t360*t4951;
  t4971 = t4923 + t4959;
  t4975 = -1.*t2078*t4473;
  t4983 = -1.*t4555*t3458;
  t4987 = t4975 + t4983;
  t5033 = var2[4]*t4987;
  t5037 = t2078*t4555;
  t5056 = -1.*t4473*t3458;
  t5068 = t5037 + t5056;
  t5070 = var2[3]*t360*t5068;
  t5098 = t5033 + t5070;
  t5200 = -1.*t2467*t2462;
  t5226 = -1.*t2103*t2995;
  t5268 = t5200 + t5226;
  t5184 = t2465 + t3073;
  t5430 = -1.*t2467*t3724;
  t5431 = -1.*t2103*t3832;
  t5435 = t5430 + t5431;
  t5348 = t3804 + t3877;
  t5562 = -1.*t2103*t4468;
  t5571 = -1.*t4408*t2467;
  t5574 = t5562 + t5571;
  t5553 = t4443 + t4471;
  t5196 = t2078*t5184;
  t5275 = -1.*t5268*t3458;
  t5279 = t5196 + t5275;
  t5284 = var2[4]*t5279;
  t5298 = t2078*t5268;
  t5319 = t5184*t3458;
  t5332 = t5298 + t5319;
  t5336 = var2[3]*t360*t5332;
  t5342 = t5284 + t5336;
  t5360 = t2078*t5348;
  t5437 = -1.*t5435*t3458;
  t5446 = t5360 + t5437;
  t5454 = var2[4]*t5446;
  t5489 = t2078*t5435;
  t5517 = t5348*t3458;
  t5520 = t5489 + t5517;
  t5521 = var2[3]*t360*t5520;
  t5546 = t5454 + t5521;
  t5554 = t2078*t5553;
  t5575 = -1.*t5574*t3458;
  t5585 = t5554 + t5575;
  t5593 = var2[4]*t5585;
  t5607 = t2078*t5574;
  t5628 = t5553*t3458;
  t5630 = t5607 + t5628;
  t5641 = var2[3]*t360*t5630;
  t5644 = t5593 + t5641;
  t5788 = 0.7032334678540001*t437;
  t5799 = -0.7032341264384028*t966;
  t5825 = t5788 + t5799;
  t5843 = -0.07391248049600001*t437;
  t5851 = 0.07391254971569594*t966;
  t5864 = t5843 + t5851;
  t5752 = 0.707107662212*t437;
  t5755 = 0.7071070786783819*t966;
  t5777 = t5752 + t5755;
  t5918 = t2103*t5825;
  t5919 = -1.*t2467*t5864;
  t5921 = t5918 + t5919;
  t5834 = t2467*t5825;
  t5866 = t2103*t5864;
  t5870 = t5834 + t5866;
  t5735 = -0.7071070786783819*t966;
  t5730 = -0.707107662212*t437;
  t6040 = -0.7032334678540001*t437;
  t6060 = t6040 + t5799;
  t6065 = 0.07391248049600001*t437;
  t6071 = t6065 + t5851;
  t6033 = t5752 + t5735;
  t6088 = t2103*t6060;
  t6097 = -1.*t2467*t6071;
  t6109 = t6088 + t6097;
  t6063 = t2467*t6060;
  t6081 = t2103*t6071;
  t6083 = t6063 + t6081;
  t5747 = t5730 + t5735;
  t5749 = var2[13]*t5747;
  t5781 = var2[5]*t5777;
  t5899 = t2078*t5870;
  t5942 = -1.*t5921*t3458;
  t5945 = t5899 + t5942;
  t5959 = var2[4]*t5945;
  t5962 = -1.*t5777*t2034;
  t5963 = t2078*t5921;
  t5971 = t5870*t3458;
  t5977 = t5963 + t5971;
  t5978 = t360*t5977;
  t5979 = t5962 + t5978;
  t6009 = var2[3]*t5979;
  t6023 = t5749 + t5781 + t5959 + t6009;
  t6034 = var2[5]*t6033;
  t6035 = t5730 + t5755;
  t6039 = var2[13]*t6035;
  t6084 = t2078*t6083;
  t6111 = -1.*t6109*t3458;
  t6116 = t6084 + t6111;
  t6120 = var2[4]*t6116;
  t6123 = -1.*t6033*t2034;
  t6126 = t2078*t6109;
  t6130 = t6083*t3458;
  t6133 = t6126 + t6130;
  t6135 = t360*t6133;
  t6151 = t6123 + t6135;
  t6153 = var2[3]*t6151;
  t6155 = t6034 + t6039 + t6120 + t6153;
  t6179 = 1.3877787807814457e-17*t2103*t966;
  t6181 = 0. + t6179;
  t6172 = 1.3877787807814457e-17*t2467*t966;
  t6173 = 0. + t6172;
  t6176 = t2078*t6173;
  t6192 = -1.*t6181*t3458;
  t6194 = t6176 + t6192;
  t6195 = var2[4]*t6194;
  t6196 = t2078*t6181;
  t6202 = t6173*t3458;
  t6207 = t6196 + t6202;
  t6212 = t360*t6207;
  t6215 = 0. + t6212;
  t6220 = var2[3]*t6215;
  t6222 = 0. + t6195 + t6220;
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
  p_output1[12]=-0.00001*t3565*var2[3] + 0.00676*t4324*var2[3];
  p_output1[13]=0.00209*t3565*var2[3] - 0.00001*t4324*var2[3] - 0.00205*t4627*var2[3];
  p_output1[14]=-0.00205*t3565*var2[3] + 0.00578*t4627*var2[3];
  p_output1[15]=-0.00001*t4862 + 0.00676*t4971;
  p_output1[16]=0.00209*t4862 - 0.00001*t4971 - 0.00205*t5098;
  p_output1[17]=-0.00205*t4862 + 0.00578*t5098;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[39]=-0.00001*t5342 + 0.00676*t5546;
  p_output1[40]=0.00209*t5342 - 0.00001*t5546 - 0.00205*t5644;
  p_output1[41]=-0.00205*t5342 + 0.00578*t5644;
  p_output1[42]=-0.00001*t6023 + 0.00676*t6155;
  p_output1[43]=0.00209*t6023 - 0.00001*t6155 - 0.00205*t6222;
  p_output1[44]=-0.00205*t6023 + 0.00578*t6222;
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



void Jq_AMBody_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

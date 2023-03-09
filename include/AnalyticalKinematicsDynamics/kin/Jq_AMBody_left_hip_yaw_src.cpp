/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_left_hip_yaw_src.h"

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
  double t2969;
  double t3341;
  double t2983;
  double t3229;
  double t2820;
  double t3478;
  double t3527;
  double t2160;
  double t2518;
  double t672;
  double t952;
  double t1118;
  double t4207;
  double t4927;
  double t4928;
  double t5055;
  double t5056;
  double t5060;
  double t4694;
  double t4725;
  double t4873;
  double t4890;
  double t4894;
  double t178;
  double t5451;
  double t5459;
  double t5460;
  double t5419;
  double t5428;
  double t4924;
  double t5105;
  double t5139;
  double t5145;
  double t5192;
  double t5195;
  double t5216;
  double t5236;
  double t5280;
  double t5288;
  double t5335;
  double t5363;
  double t5369;
  double t5388;
  double t5396;
  double t5429;
  double t5466;
  double t5471;
  double t5481;
  double t5488;
  double t5490;
  double t5491;
  double t5492;
  double t5515;
  double t5523;
  double t5531;
  double t5536;
  double t5538;
  double t5540;
  double t5545;
  double t3311;
  double t3626;
  double t3741;
  double t4222;
  double t4226;
  double t4340;
  double t5698;
  double t5701;
  double t5703;
  double t5711;
  double t5712;
  double t5715;
  double t5718;
  double t5739;
  double t5740;
  double t5746;
  double t5754;
  double t5757;
  double t5763;
  double t5768;
  double t5770;
  double t5771;
  double t5810;
  double t5815;
  double t4360;
  double t5835;
  double t5838;
  double t5839;
  double t5952;
  double t5954;
  double t5963;
  double t5978;
  double t6101;
  double t6102;
  double t6117;
  double t6127;
  double t5969;
  double t6001;
  double t6006;
  double t6011;
  double t6017;
  double t6038;
  double t6048;
  double t6075;
  double t6076;
  double t6119;
  double t6135;
  double t6149;
  double t6157;
  double t6160;
  double t6161;
  double t6164;
  double t6172;
  double t6177;
  double t6204;
  double t6205;
  double t6208;
  double t6228;
  double t6229;
  double t6241;
  double t6319;
  double t6326;
  double t6336;
  double t6348;
  double t6349;
  double t6353;
  double t6405;
  double t6412;
  double t6413;
  double t6428;
  double t6429;
  double t6431;
  double t6344;
  double t6355;
  double t6356;
  double t6360;
  double t6361;
  double t6367;
  double t6369;
  double t6370;
  double t6373;
  double t6382;
  double t6386;
  double t6391;
  double t6398;
  double t6414;
  double t6436;
  double t6442;
  double t6450;
  double t6453;
  double t6460;
  double t6478;
  double t6499;
  double t6504;
  double t6509;
  double t6522;
  double t6525;
  t2969 = Sin(var1[7]);
  t3341 = Cos(var1[6]);
  t2983 = 0.366501*t2969;
  t3229 = 0. + t2983;
  t2820 = Sin(var1[6]);
  t3478 = 0.930418*t2969;
  t3527 = 0. + t3478;
  t2160 = Sin(var1[4]);
  t2518 = Sin(var1[5]);
  t672 = Cos(var1[7]);
  t952 = -1.*t672;
  t1118 = 1. + t952;
  t4207 = Cos(var1[5]);
  t4927 = -0.134322983001*t1118;
  t4928 = 1. + t4927;
  t5055 = -0.930418*t4928;
  t5056 = -0.12497652119782442*t1118;
  t5060 = t5055 + t5056;
  t4694 = -0.8656776547239999*t1118;
  t4725 = 1. + t4694;
  t4873 = 0.366501*t4725;
  t4890 = 0.3172717261340007*t1118;
  t4894 = t4873 + t4890;
  t178 = Cos(var1[4]);
  t5451 = 0.366501*t4928;
  t5459 = -0.3172717261340007*t1118;
  t5460 = t5451 + t5459;
  t5419 = 0.930418*t4725;
  t5428 = t5419 + t5056;
  t4924 = t3341*t4894;
  t5105 = t5060*t2820;
  t5139 = 0. + t4924 + t5105;
  t5145 = t2518*t5139;
  t5192 = t3341*t5060;
  t5195 = -1.*t4894*t2820;
  t5216 = 0. + t5192 + t5195;
  t5236 = t4207*t5216;
  t5280 = 0. + t5145 + t5236;
  t5288 = -1.*t2160*t5280;
  t5335 = -0.930418*t3229;
  t5363 = 0.366501*t3527;
  t5369 = 0. + t5335 + t5363;
  t5388 = -1.*t178*t5369;
  t5396 = t5288 + t5388;
  t5429 = t3341*t5428;
  t5466 = t5460*t2820;
  t5471 = 0. + t5429 + t5466;
  t5481 = t2518*t5471;
  t5488 = t3341*t5460;
  t5490 = -1.*t5428*t2820;
  t5491 = 0. + t5488 + t5490;
  t5492 = t4207*t5491;
  t5515 = 0. + t5481 + t5492;
  t5523 = -1.*t2160*t5515;
  t5531 = 0.366501*t3229;
  t5536 = 0.930418*t3527;
  t5538 = 0. + t5531 + t5536;
  t5540 = -1.*t178*t5538;
  t5545 = t5523 + t5540;
  t3311 = t2820*t3229;
  t3626 = t3341*t3527;
  t3741 = t3311 + t3626;
  t4222 = t3341*t3229;
  t4226 = -1.*t2820*t3527;
  t4340 = t4222 + t4226;
  t5698 = -1.*t2518*t5471;
  t5701 = -1.*t4207*t5491;
  t5703 = t5698 + t5701;
  t5711 = var2[4]*t5703;
  t5712 = t4207*t5471;
  t5715 = -1.*t2518*t5491;
  t5718 = t5712 + t5715;
  t5739 = var2[3]*t178*t5718;
  t5740 = t5711 + t5739;
  t5746 = -1.*t2518*t5139;
  t5754 = -1.*t4207*t5216;
  t5757 = t5746 + t5754;
  t5763 = var2[4]*t5757;
  t5768 = t4207*t5139;
  t5770 = -1.*t2518*t5216;
  t5771 = t5768 + t5770;
  t5810 = var2[3]*t178*t5771;
  t5815 = t5763 + t5810;
  t4360 = t4207*t4340;
  t5835 = -1.*t2820*t3229;
  t5838 = -1.*t3341*t3527;
  t5839 = t5835 + t5838;
  t5952 = -1.*t3341*t5428;
  t5954 = -1.*t5460*t2820;
  t5963 = t5952 + t5954;
  t5978 = t5488 + t5490;
  t6101 = -1.*t3341*t4894;
  t6102 = -1.*t5060*t2820;
  t6117 = t6101 + t6102;
  t6127 = t5192 + t5195;
  t5969 = -1.*t2518*t5963;
  t6001 = t4207*t5978;
  t6006 = t5969 + t6001;
  t6011 = var2[4]*t6006;
  t6017 = t4207*t5963;
  t6038 = t2518*t5978;
  t6048 = t6017 + t6038;
  t6075 = var2[3]*t178*t6048;
  t6076 = t6011 + t6075;
  t6119 = -1.*t2518*t6117;
  t6135 = t4207*t6127;
  t6149 = t6119 + t6135;
  t6157 = var2[4]*t6149;
  t6160 = t4207*t6117;
  t6161 = t2518*t6127;
  t6164 = t6160 + t6161;
  t6172 = var2[3]*t178*t6164;
  t6177 = t6157 + t6172;
  t6204 = 0.366501*t3341*t672;
  t6205 = -0.930418*t672*t2820;
  t6208 = t6204 + t6205;
  t6228 = 0.930418*t3341*t672;
  t6229 = 0.366501*t672*t2820;
  t6241 = t6228 + t6229;
  t6319 = -5.551115123125783e-17*t3341*t2969;
  t6326 = 1.3877787807814457e-17*t2820*t2969;
  t6336 = t6319 + t6326;
  t6348 = 1.3877787807814457e-17*t3341*t2969;
  t6349 = 5.551115123125783e-17*t2820*t2969;
  t6353 = t6348 + t6349;
  t6405 = -0.930418593350819*t3341*t2969;
  t6412 = -0.3665012337268502*t2820*t2969;
  t6413 = t6405 + t6412;
  t6428 = -0.3665012337268502*t3341*t2969;
  t6429 = 0.930418593350819*t2820*t2969;
  t6431 = t6428 + t6429;
  t6344 = t4207*t6336;
  t6355 = -1.*t2518*t6353;
  t6356 = t6344 + t6355;
  t6360 = var2[4]*t6356;
  t6361 = t2518*t6336;
  t6367 = t4207*t6353;
  t6369 = t6361 + t6367;
  t6370 = t178*t6369;
  t6373 = 0. + t6370;
  t6382 = var2[3]*t6373;
  t6386 = 0. + t6360 + t6382;
  t6391 = 1.000000637725*var2[5]*t672;
  t6398 = -1.000000637725*var2[6]*t672;
  t6414 = t4207*t6413;
  t6436 = -1.*t2518*t6431;
  t6442 = t6414 + t6436;
  t6450 = var2[4]*t6442;
  t6453 = -1.000000637725*t672*t2160;
  t6460 = t2518*t6413;
  t6478 = t4207*t6431;
  t6499 = t6460 + t6478;
  t6504 = t178*t6499;
  t6509 = t6453 + t6504;
  t6522 = var2[3]*t6509;
  t6525 = t6391 + t6398 + t6450 + t6522;
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
  p_output1[12]=0.00163*(-1.*(-1. + 1.000000637725*t1118)*t178 - 1.*t2160*(t2518*t3741 + t4360))*var2[3];
  p_output1[13]=0.00005*t5396*var2[3] + 0.00193*t5545*var2[3];
  p_output1[14]=0.00077*t5396*var2[3] + 0.00005*t5545*var2[3];
  p_output1[15]=0.00163*(t178*(t3741*t4207 - 1.*t2518*t4340)*var2[3] + (-1.*t2518*t3741 - 1.*t4207*t4340)*var2[4]);
  p_output1[16]=0.00193*t5740 + 0.00005*t5815;
  p_output1[17]=0.00005*t5740 + 0.00077*t5815;
  p_output1[18]=0.00163*(t178*(t2518*t4340 + t4207*t5839)*var2[3] + (t4360 - 1.*t2518*t5839)*var2[4]);
  p_output1[19]=0.00193*t6076 + 0.00005*t6177;
  p_output1[20]=0.00005*t6076 + 0.00077*t6177;
  p_output1[21]=0.00163*((-1.000000637725*t2160*t2969 + t178*(t4207*t6208 + t2518*t6241))*var2[3] + (-1.*t2518*t6208 + t4207*t6241)*var2[4] + 1.000000637725*t2969*var2[5] - 1.000000637725*t2969*var2[6]);
  p_output1[22]=0.00005*t6386 + 0.00193*t6525;
  p_output1[23]=0.00077*t6386 + 0.00005*t6525;
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



void Jq_AMBody_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

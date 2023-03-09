/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_right_shoulder_pitch_src.h"

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
  double t352;
  double t1091;
  double t1401;
  double t1799;
  double t1884;
  double t2988;
  double t3189;
  double t3341;
  double t2431;
  double t4183;
  double t4294;
  double t4328;
  double t4334;
  double t4374;
  double t3402;
  double t3498;
  double t3834;
  double t4037;
  double t4085;
  double t4380;
  double t2086;
  double t2259;
  double t2260;
  double t2413;
  double t4751;
  double t4757;
  double t4797;
  double t4171;
  double t4439;
  double t4572;
  double t4798;
  double t5240;
  double t5248;
  double t5460;
  double t5466;
  double t5467;
  double t5479;
  double t5516;
  double t5558;
  double t5610;
  double t5627;
  double t5633;
  double t5656;
  double t5660;
  double t5665;
  double t5268;
  double t5312;
  double t5323;
  double t5375;
  double t4884;
  double t4980;
  double t5742;
  double t5748;
  double t5757;
  double t5560;
  double t5693;
  double t5700;
  double t5922;
  double t5982;
  double t5953;
  double t5987;
  double t5995;
  double t6000;
  double t6002;
  double t6013;
  double t5999;
  double t6014;
  double t6019;
  double t6063;
  double t6065;
  double t6082;
  double t248;
  double t1417;
  double t2001;
  double t2010;
  double t2053;
  double t2412;
  double t4599;
  double t4819;
  double t4849;
  double t4868;
  double t4911;
  double t5013;
  double t5046;
  double t5061;
  double t5138;
  double t5152;
  double t5164;
  double t5168;
  double t5390;
  double t5395;
  double t5422;
  double t6204;
  double t6215;
  double t6216;
  double t6222;
  double t6223;
  double t6228;
  double t6190;
  double t6239;
  double t6242;
  double t6244;
  double t6217;
  double t6230;
  double t6231;
  double t5197;
  double t5386;
  double t5456;
  double t5457;
  double t5706;
  double t5805;
  double t5806;
  double t5807;
  double t5826;
  double t5828;
  double t5831;
  double t5832;
  double t5843;
  double t5846;
  double t5877;
  double t5900;
  double t5926;
  double t6035;
  double t6093;
  double t6100;
  double t6110;
  double t6113;
  double t6127;
  double t6143;
  double t6178;
  double t6187;
  double t6188;
  double t6191;
  double t6237;
  double t6245;
  double t6246;
  double t6249;
  double t6253;
  double t6257;
  double t6262;
  double t6263;
  double t6270;
  double t6285;
  double t6286;
  double t6288;
  double t6307;
  double t6318;
  double t6322;
  double t6328;
  double t6330;
  double t5176;
  double t5904;
  double t5919;
  double t6387;
  double t6392;
  double t6393;
  double t6402;
  double t6403;
  double t6405;
  double t6394;
  double t6407;
  double t6410;
  double t6417;
  double t6426;
  double t6430;
  double t6177;
  double t6289;
  double t6298;
  double t6300;
  double t6386;
  double t6414;
  double t6434;
  double t6437;
  double t6445;
  double t6448;
  double t6449;
  double t6452;
  double t6352;
  double t6358;
  double t6362;
  double t6474;
  double t6476;
  double t6477;
  double t6479;
  double t6480;
  double t6505;
  double t6507;
  double t6510;
  double t6518;
  double t6521;
  double t6528;
  double t6504;
  double t6516;
  double t6529;
  double t6530;
  double t6537;
  double t6540;
  double t6543;
  double t6555;
  double t6558;
  double t6561;
  double t6565;
  double t6569;
  double t6570;
  t352 = Sin(var1[25]);
  t1091 = -0.994522*t352;
  t1401 = 0. + t1091;
  t1799 = -0.104528*t352;
  t1884 = 0. + t1799;
  t2988 = Cos(var1[25]);
  t3189 = -1.*t2988;
  t3341 = 1. + t3189;
  t2431 = Cos(var1[24]);
  t4183 = -0.9890740084840001*t3341;
  t4294 = 1. + t4183;
  t4328 = -0.104528*t4294;
  t4334 = -0.10338592795881554*t3341;
  t4374 = t4328 + t4334;
  t3402 = -0.010926102783999999*t3341;
  t3498 = 1. + t3402;
  t3834 = 0.994522*t3498;
  t4037 = 0.010866249592949247*t3341;
  t4085 = t3834 + t4037;
  t4380 = Sin(var1[24]);
  t2086 = -0.104528*t1401;
  t2259 = 0.994522*t1884;
  t2260 = 0. + t2086 + t2259;
  t2413 = Cos(var1[5]);
  t4751 = t2431*t4374;
  t4757 = -1.*t4085*t4380;
  t4797 = 0. + t4751 + t4757;
  t4171 = t2431*t4085;
  t4439 = t4374*t4380;
  t4572 = 0. + t4171 + t4439;
  t4798 = Sin(var1[5]);
  t5240 = -1.0000001112680001*t3341;
  t5248 = 1. + t5240;
  t5460 = -0.073913*t3498;
  t5466 = 0.07310496868062215*t3341;
  t5467 = 0.104528*t352;
  t5479 = 0. + t5467;
  t5516 = 0.707107*t5479;
  t5558 = t5460 + t5466 + t5516;
  t5610 = -0.703234*t4294;
  t5627 = 0.007683655156165408*t3341;
  t5633 = 0.994522*t352;
  t5656 = 0. + t5633;
  t5660 = 0.707107*t5656;
  t5665 = t5610 + t5627 + t5660;
  t5268 = 0.707107*t5248;
  t5312 = -0.703234*t1401;
  t5323 = -0.073913*t1884;
  t5375 = 0. + t5268 + t5312 + t5323;
  t4884 = Sin(var1[4]);
  t4980 = Cos(var1[4]);
  t5742 = -1.*t4380*t5558;
  t5748 = t2431*t5665;
  t5757 = 0. + t5742 + t5748;
  t5560 = t2431*t5558;
  t5693 = t4380*t5665;
  t5700 = 0. + t5560 + t5693;
  t5922 = Cos(var1[3]);
  t5982 = Sin(var1[3]);
  t5953 = t5922*t2413*t4884;
  t5987 = t5982*t4798;
  t5995 = t5953 + t5987;
  t6000 = -1.*t2413*t5982;
  t6002 = t5922*t4884*t4798;
  t6013 = t6000 + t6002;
  t5999 = -1.*t4380*t5995;
  t6014 = t2431*t6013;
  t6019 = t5999 + t6014;
  t6063 = t2431*t5995;
  t6065 = t4380*t6013;
  t6082 = t6063 + t6065;
  t248 = -1.0000001112680001*var2[25];
  t1417 = 0.104528*t1401;
  t2001 = -0.994522*t1884;
  t2010 = 0. + t1417 + t2001;
  t2053 = var2[24]*t2010;
  t2412 = var2[5]*t2260;
  t4599 = t2413*t4572;
  t4819 = -1.*t4797*t4798;
  t4849 = 0. + t4599 + t4819;
  t4868 = var2[4]*t4849;
  t4911 = -1.*t2260*t4884;
  t5013 = t2413*t4797;
  t5046 = t4572*t4798;
  t5061 = 0. + t5013 + t5046;
  t5138 = t4980*t5061;
  t5152 = 0. + t4911 + t5138;
  t5164 = var2[3]*t5152;
  t5168 = t248 + t2053 + t2412 + t4868 + t5164;
  t5390 = -0.707107*t5248;
  t5395 = 0.703234*t1401;
  t5422 = 0.073913*t1884;
  t6204 = 0.073913*t3498;
  t6215 = -0.07310496868062215*t3341;
  t6216 = t6204 + t6215 + t5516;
  t6222 = 0.703234*t4294;
  t6223 = -0.007683655156165408*t3341;
  t6228 = t6222 + t6223 + t5660;
  t6190 = 0. + t5268 + t5395 + t5422;
  t6239 = -1.*t4380*t6216;
  t6242 = t2431*t6228;
  t6244 = 0. + t6239 + t6242;
  t6217 = t2431*t6216;
  t6230 = t4380*t6228;
  t6231 = 0. + t6217 + t6230;
  t5197 = 4.610340000044122e-7*var2[25];
  t5386 = var2[5]*t5375;
  t5456 = 0. + t5390 + t5395 + t5422;
  t5457 = var2[24]*t5456;
  t5706 = t2413*t5700;
  t5805 = -1.*t5757*t4798;
  t5806 = 0. + t5706 + t5805;
  t5807 = var2[4]*t5806;
  t5826 = -1.*t5375*t4884;
  t5828 = t2413*t5757;
  t5831 = t5700*t4798;
  t5832 = 0. + t5828 + t5831;
  t5843 = t4980*t5832;
  t5846 = 0. + t5826 + t5843;
  t5877 = var2[3]*t5846;
  t5900 = t5197 + t5386 + t5457 + t5807 + t5877;
  t5926 = t5922*t4980*t1401;
  t6035 = -0.103955395616*t3341*t6019;
  t6093 = t4294*t6082;
  t6100 = t5926 + t6035 + t6093;
  t6110 = t5922*t4980*t1884;
  t6113 = t3498*t6019;
  t6127 = -0.103955395616*t3341*t6082;
  t6143 = t6110 + t6113 + t6127;
  t6178 = -4.610340000044122e-7*var2[25];
  t6187 = 0. + t5390 + t5312 + t5323;
  t6188 = var2[24]*t6187;
  t6191 = var2[5]*t6190;
  t6237 = t2413*t6231;
  t6245 = -1.*t6244*t4798;
  t6246 = 0. + t6237 + t6245;
  t6249 = var2[4]*t6246;
  t6253 = -1.*t6190*t4884;
  t6257 = t2413*t6244;
  t6262 = t6231*t4798;
  t6263 = 0. + t6257 + t6262;
  t6270 = t4980*t6263;
  t6285 = 0. + t6253 + t6270;
  t6286 = var2[3]*t6285;
  t6288 = t6178 + t6188 + t6191 + t6249 + t6286;
  t6307 = t5248*t5922*t4980;
  t6318 = t5479*t6019;
  t6322 = t5656*t6082;
  t6328 = t6307 + t6318 + t6322;
  t6330 = 0.707107*t6328;
  t5176 = 0.00578*t5168;
  t5904 = 0.00205*t5900;
  t5919 = t5176 + t5904;
  t6387 = t2413*t5982*t4884;
  t6392 = -1.*t5922*t4798;
  t6393 = t6387 + t6392;
  t6402 = t5922*t2413;
  t6403 = t5982*t4884*t4798;
  t6405 = t6402 + t6403;
  t6394 = -1.*t4380*t6393;
  t6407 = t2431*t6405;
  t6410 = t6394 + t6407;
  t6417 = t2431*t6393;
  t6426 = t4380*t6405;
  t6430 = t6417 + t6426;
  t6177 = 0.00205*t5168;
  t6289 = 0.00001*t6288;
  t6298 = 0.00209*t5900;
  t6300 = t6177 + t6289 + t6298;
  t6386 = t4980*t1401*t5982;
  t6414 = -0.103955395616*t3341*t6410;
  t6434 = t4294*t6430;
  t6437 = t6386 + t6414 + t6434;
  t6445 = t4980*t1884*t5982;
  t6448 = t3498*t6410;
  t6449 = -0.103955395616*t3341*t6430;
  t6452 = t6445 + t6448 + t6449;
  t6352 = 0.00676*t6288;
  t6358 = 0.00001*t5900;
  t6362 = t6352 + t6358;
  t6474 = t5248*t4980*t5982;
  t6476 = t5479*t6410;
  t6477 = t5656*t6430;
  t6479 = t6474 + t6476 + t6477;
  t6480 = 0.707107*t6479;
  t6505 = -1.*t4980*t2413*t4380;
  t6507 = t2431*t4980*t4798;
  t6510 = t6505 + t6507;
  t6518 = t2431*t4980*t2413;
  t6521 = t4980*t4380*t4798;
  t6528 = t6518 + t6521;
  t6504 = -1.*t1401*t4884;
  t6516 = -0.103955395616*t3341*t6510;
  t6529 = t4294*t6528;
  t6530 = t6504 + t6516 + t6529;
  t6537 = -1.*t1884*t4884;
  t6540 = t3498*t6510;
  t6543 = -0.103955395616*t3341*t6528;
  t6555 = t6537 + t6540 + t6543;
  t6558 = -1.*t5248*t4884;
  t6561 = t5479*t6510;
  t6565 = t5656*t6528;
  t6569 = t6558 + t6561 + t6565;
  t6570 = 0.707107*t6569;
  p_output1[0]=t5919*(-0.104528*t6100 + 0.994522*t6143) + t6300*(-0.703234*t6100 - 0.073913*t6143 + t6330) + (0.703234*t6100 + 0.073913*t6143 + t6330)*t6362;
  p_output1[1]=t5919*(-0.104528*t6437 + 0.994522*t6452) + t6300*(-0.703234*t6437 - 0.073913*t6452 + t6480) + t6362*(0.703234*t6437 + 0.073913*t6452 + t6480);
  p_output1[2]=t5919*(-0.104528*t6530 + 0.994522*t6555) + t6300*(-0.703234*t6530 - 0.073913*t6555 + t6570) + t6362*(0.703234*t6530 + 0.073913*t6555 + t6570);
}



void AMWorld_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

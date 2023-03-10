/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_hip_flexion_left_src.h"

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
  double t92;
  double t141;
  double t316;
  double t358;
  double t863;
  double t1077;
  double t2472;
  double t2542;
  double t2966;
  double t2990;
  double t3095;
  double t2763;
  double t2801;
  double t2820;
  double t1445;
  double t1485;
  double t1546;
  double t1206;
  double t1210;
  double t1214;
  double t1603;
  double t1626;
  double t1677;
  double t2515;
  double t2564;
  double t2582;
  double t3684;
  double t3691;
  double t3761;
  double t3790;
  double t3883;
  double t3940;
  double t3805;
  double t3812;
  double t3881;
  double t3882;
  double t4005;
  double t4022;
  double t2593;
  double t2607;
  double t2629;
  double t4145;
  double t4151;
  double t4235;
  double t4262;
  double t5009;
  double t5010;
  double t5016;
  double t5099;
  double t5112;
  double t5115;
  double t5180;
  double t5189;
  double t5193;
  double t1037;
  double t1121;
  double t1125;
  double t4629;
  double t5198;
  double t5199;
  double t5200;
  double t5272;
  double t5348;
  double t5349;
  double t5351;
  double t3413;
  double t3129;
  double t5362;
  double t5372;
  double t5379;
  double t5281;
  double t5292;
  double t4288;
  double t4372;
  double t4410;
  double t3188;
  double t3247;
  double t3257;
  double t5524;
  double t5525;
  double t5526;
  double t5504;
  double t5507;
  double t5508;
  double t5413;
  double t5415;
  double t5424;
  double t5485;
  double t5492;
  double t5497;
  double t4715;
  double t4724;
  double t5035;
  double t5037;
  double t5053;
  double t5212;
  double t5213;
  double t5220;
  double t4828;
  double t4857;
  double t4874;
  double t5121;
  double t5126;
  double t5150;
  double t5579;
  double t5582;
  double t5583;
  double t5587;
  double t5588;
  double t5601;
  double t4927;
  double t4957;
  double t4987;
  double t5603;
  double t5607;
  double t5615;
  double t5617;
  double t5249;
  double t5255;
  double t5258;
  double t5645;
  double t5651;
  double t5652;
  double t5431;
  double t5382;
  double t5393;
  double t5334;
  double t5339;
  double t5706;
  double t5707;
  double t5709;
  double t5320;
  double t5329;
  double t5332;
  double t5713;
  double t5717;
  double t5722;
  double t5471;
  double t5476;
  double t5478;
  double t5770;
  double t5772;
  double t5774;
  double t5763;
  double t5764;
  double t5765;
  double t3419;
  double t3453;
  double t5837;
  double t5839;
  double t5841;
  double t3504;
  double t3547;
  double t3573;
  double t5918;
  double t5919;
  double t5924;
  double t5925;
  double t5927;
  double t5946;
  double t5947;
  double t5948;
  double t5933;
  double t5937;
  double t5942;
  double t5979;
  double t5972;
  double t5973;
  double t5974;
  double t6033;
  double t6034;
  double t6037;
  double t6025;
  double t6026;
  double t6029;
  double t6076;
  double t6080;
  double t6081;
  double t6062;
  double t6063;
  double t6068;
  double t5555;
  double t5558;
  double t5561;
  double t6198;
  double t6200;
  double t6201;
  double t6220;
  double t6221;
  double t6244;
  double t6243;
  double t6245;
  double t6246;
  double t6247;
  double t6250;
  double t6255;
  double t6256;
  double t6258;
  double t6264;
  double t6265;
  double t6267;
  double t6268;
  double t6269;
  double t6271;
  double t6277;
  double t6282;
  double t6285;
  double t6286;
  double t6287;
  double t6290;
  double t6320;
  double t6205;
  double t6206;
  double t6262;
  double t6274;
  double t6291;
  double t6292;
  double t6330;
  double t6302;
  double t6303;
  double t6304;
  double t6305;
  double t6317;
  double t6318;
  double t6319;
  double t6327;
  double t6328;
  double t6329;
  double t6353;
  double t6321;
  double t6322;
  double t6325;
  double t6331;
  double t6332;
  double t6333;
  double t6402;
  double t6403;
  double t6404;
  double t6345;
  double t6346;
  double t6347;
  double t6348;
  double t6406;
  double t6407;
  double t6408;
  double t6352;
  double t6354;
  double t6355;
  double t6203;
  double t6460;
  double t6461;
  double t6467;
  double t6468;
  double t6503;
  double t6512;
  double t6548;
  double t6549;
  double t6553;
  double t6554;
  double t6556;
  double t6557;
  double t6558;
  double t6559;
  double t6487;
  double t6489;
  double t6640;
  double t6644;
  double t6645;
  double t6647;
  double t6648;
  double t6649;
  double t6653;
  double t6654;
  double t6655;
  double t6646;
  double t6652;
  double t6656;
  double t6657;
  double t6659;
  double t6660;
  double t6661;
  double t6662;
  double t6337;
  double t6338;
  double t6236;
  double t6237;
  double t6238;
  double t6222;
  double t6229;
  double t6232;
  double t6299;
  double t6300;
  double t6301;
  double t6448;
  double t6457;
  double t6458;
  double t6207;
  double t6208;
  double t6712;
  double t6713;
  double t6714;
  double t6715;
  double t6340;
  double t6341;
  double t6717;
  double t6718;
  double t6719;
  double t6720;
  double t6722;
  double t6723;
  double t6724;
  double t6472;
  double t6473;
  double t6476;
  double t6477;
  double t6726;
  double t6730;
  double t6731;
  double t6412;
  double t6413;
  double t6420;
  double t6394;
  double t6396;
  double t6397;
  double t6386;
  double t6387;
  double t6388;
  double t6399;
  double t6400;
  double t6377;
  double t6381;
  double t6384;
  double t6431;
  double t6432;
  double t6433;
  double t6759;
  double t6762;
  double t6763;
  double t6765;
  double t6766;
  double t6767;
  double t6497;
  double t6498;
  double t6507;
  double t6509;
  double t6511;
  double t6513;
  double t6793;
  double t6794;
  double t6795;
  double t6537;
  double t6542;
  double t6543;
  double t6546;
  double t6602;
  double t6605;
  double t6606;
  double t6607;
  double t6572;
  double t6574;
  double t6575;
  double t6578;
  double t6840;
  double t6841;
  double t6842;
  double t6843;
  double t6848;
  double t6849;
  double t6850;
  double t6851;
  double t6609;
  double t6610;
  double t6611;
  double t6612;
  double t6561;
  double t6562;
  double t6563;
  double t6564;
  double t6587;
  double t6588;
  double t6589;
  double t6590;
  double t6672;
  double t6673;
  double t6674;
  double t6675;
  double t6689;
  double t6696;
  double t6697;
  double t6698;
  double t6664;
  double t6668;
  double t6669;
  double t6670;
  double t6626;
  double t6627;
  double t6628;
  double t6629;
  double t6881;
  double t6887;
  double t6888;
  double t6889;
  double t6891;
  double t6892;
  double t6893;
  double t6894;
  double t6684;
  double t6685;
  double t6686;
  double t6687;
  double t6634;
  double t6635;
  double t6637;
  double t6638;
  double t6917;
  double t6912;
  double t6915;
  double t6918;
  double t6919;
  double t6920;
  double t6922;
  double t6923;
  double t6924;
  double t6944;
  double t6945;
  double t6946;
  double t6948;
  double t6949;
  double t6950;
  double t6973;
  double t6974;
  double t6975;
  double t6977;
  double t6978;
  double t6979;
  double t7001;
  double t7002;
  double t7003;
  double t7004;
  double t7006;
  double t7007;
  double t7011;
  double t7012;
  double t7062;
  double t7063;
  double t7064;
  double t7065;
  double t7067;
  double t7068;
  double t7069;
  double t7070;
  double t6820;
  double t6821;
  double t6822;
  t92 = Cos(var1[3]);
  t141 = Sin(var1[3]);
  t316 = Cos(var1[4]);
  t358 = Sin(var1[4]);
  t863 = Cos(var1[5]);
  t1077 = Sin(var1[5]);
  t2472 = Cos(var1[6]);
  t2542 = Sin(var1[6]);
  t2966 = t863*t141*t358;
  t2990 = -1.*t92*t1077;
  t3095 = t2966 + t2990;
  t2763 = t92*t863;
  t2801 = t141*t358*t1077;
  t2820 = t2763 + t2801;
  t1445 = -1.*t92*t863;
  t1485 = -1.*t141*t358*t1077;
  t1546 = t1445 + t1485;
  t1206 = -1.*t863*t141*t358;
  t1210 = t92*t1077;
  t1214 = t1206 + t1210;
  t1603 = t92*t863*t358;
  t1626 = t141*t1077;
  t1677 = t1603 + t1626;
  t2515 = t316*t2472*t1077;
  t2564 = -1.*t316*t863*t2542;
  t2582 = t2515 + t2564;
  t3684 = -1.*t2472;
  t3691 = 1. + t3684;
  t3761 = 0.091*t3691;
  t3790 = 0. + t3761;
  t3883 = 0.091*t2542;
  t3940 = 0. + t3883;
  t3805 = -1.*t863*t141;
  t3812 = t92*t358*t1077;
  t3881 = t3805 + t3812;
  t3882 = t3790*t3881;
  t4005 = t1677*t3940;
  t4022 = t3882 + t4005;
  t2593 = t316*t863*t2472;
  t2607 = t316*t1077*t2542;
  t2629 = t2593 + t2607;
  t4145 = -1.*var1[2];
  t4151 = -1.*t316*t3790*t1077;
  t4235 = -1.*t316*t863*t3940;
  t4262 = 0. + t4145 + t4151 + t4235;
  t5009 = t316*t3790*t141*t1077;
  t5010 = t316*t863*t141*t3940;
  t5016 = t5009 + t5010;
  t5099 = t3790*t2820;
  t5112 = t3095*t3940;
  t5115 = 0. + var1[1] + t5099 + t5112;
  t5180 = t3790*t358*t1077;
  t5189 = t863*t358*t3940;
  t5193 = t5180 + t5189;
  t1037 = t863*t141;
  t1121 = -1.*t92*t358*t1077;
  t1125 = t1037 + t1121;
  t4629 = t2472*t1677;
  t5198 = t2472*t2820;
  t5199 = -1.*t3095*t2542;
  t5200 = t5198 + t5199;
  t5272 = t2472*t3095;
  t5348 = t3790*t3095;
  t5349 = t1546*t3940;
  t5351 = t5348 + t5349;
  t3413 = t2472*t1546;
  t3129 = t3095*t2542;
  t5362 = -1.*t316*t863*t3790;
  t5372 = t316*t1077*t3940;
  t5379 = t5362 + t5372;
  t5281 = t2820*t2542;
  t5292 = t5272 + t5281;
  t4288 = t2472*t3881;
  t4372 = -1.*t1677*t2542;
  t4410 = t4288 + t4372;
  t3188 = -1.*t2472*t3095;
  t3247 = -1.*t2820*t2542;
  t3257 = t3188 + t3247;
  t5524 = 0.091*t2472*t3095;
  t5525 = 0.091*t2820*t2542;
  t5526 = t5524 + t5525;
  t5504 = -0.091*t316*t863*t2472;
  t5507 = -0.091*t316*t1077*t2542;
  t5508 = t5504 + t5507;
  t5413 = -1.*t316*t2472*t1077;
  t5415 = t316*t863*t2542;
  t5424 = t5413 + t5415;
  t5485 = -1.*t316*t863*t2472;
  t5492 = -1.*t316*t1077*t2542;
  t5497 = t5485 + t5492;
  t4715 = t3881*t2542;
  t4724 = t4629 + t4715;
  t5035 = t316*t2472*t141*t1077;
  t5037 = -1.*t316*t863*t141*t2542;
  t5053 = t5035 + t5037;
  t5212 = t316*t863*t2472*t141;
  t5213 = t316*t141*t1077*t2542;
  t5220 = t5212 + t5213;
  t4828 = t92*t316*t2472*t1077;
  t4857 = -1.*t92*t316*t863*t2542;
  t4874 = t4828 + t4857;
  t5121 = -1.*t2472*t358*t1077;
  t5126 = t863*t358*t2542;
  t5150 = t5121 + t5126;
  t5579 = -1.*t92*t316*t3790*t1077;
  t5582 = -1.*t92*t316*t863*t3940;
  t5583 = t5579 + t5582;
  t5587 = t316*t3790*t1077;
  t5588 = t316*t863*t3940;
  t5601 = 0. + var1[2] + t5587 + t5588;
  t4927 = t92*t316*t863*t2472;
  t4957 = t92*t316*t1077*t2542;
  t4987 = t4927 + t4957;
  t5603 = -1.*var1[0];
  t5607 = -1.*t3790*t3881;
  t5615 = -1.*t1677*t3940;
  t5617 = 0. + t5603 + t5607 + t5615;
  t5249 = -1.*t863*t2472*t358;
  t5255 = -1.*t358*t1077*t2542;
  t5258 = t5249 + t5255;
  t5645 = -1.*t3790*t358*t1077;
  t5651 = -1.*t863*t358*t3940;
  t5652 = t5645 + t5651;
  t5431 = t3413 + t3129;
  t5382 = -1.*t1546*t2542;
  t5393 = t5272 + t5382;
  t5334 = -1.*t1125*t2542;
  t5339 = t4629 + t5334;
  t5706 = -1.*t3790*t1677;
  t5707 = -1.*t1125*t3940;
  t5709 = t5706 + t5707;
  t5320 = t2472*t1125;
  t5329 = t1677*t2542;
  t5332 = t5320 + t5329;
  t5713 = t316*t863*t3790;
  t5717 = -1.*t316*t1077*t3940;
  t5722 = t5713 + t5717;
  t5471 = -1.*t2472*t1677;
  t5476 = -1.*t3881*t2542;
  t5478 = t5471 + t5476;
  t5770 = -0.091*t2472*t1677;
  t5772 = -0.091*t3881*t2542;
  t5774 = t5770 + t5772;
  t5763 = 0.091*t316*t863*t2472;
  t5764 = 0.091*t316*t1077*t2542;
  t5765 = t5763 + t5764;
  t3419 = -1.*t1214*t2542;
  t3453 = t3413 + t3419;
  t5837 = -1.*t3790*t1546;
  t5839 = -1.*t1214*t3940;
  t5841 = t5837 + t5839;
  t3504 = t2472*t1214;
  t3547 = t1546*t2542;
  t3573 = t3504 + t3547;
  t5918 = -1.*var1[1];
  t5919 = -1.*t3790*t2820;
  t5924 = -1.*t3095*t3940;
  t5925 = 0. + t5918 + t5919 + t5924;
  t5927 = 0. + var1[0] + t3882 + t4005;
  t5946 = -1.*t316*t3790*t141*t1077;
  t5947 = -1.*t316*t863*t141*t3940;
  t5948 = t5946 + t5947;
  t5933 = t92*t316*t3790*t1077;
  t5937 = t92*t316*t863*t3940;
  t5942 = t5933 + t5937;
  t5979 = t5607 + t5615;
  t5972 = t3790*t1546;
  t5973 = t1214*t3940;
  t5974 = t5972 + t5973;
  t6033 = -1.*t3790*t3095;
  t6034 = -1.*t1546*t3940;
  t6037 = t6033 + t6034;
  t6025 = t3790*t1677;
  t6026 = t1125*t3940;
  t6029 = t6025 + t6026;
  t6076 = -0.091*t2472*t3095;
  t6080 = -0.091*t2820*t2542;
  t6081 = t6076 + t6080;
  t6062 = 0.091*t2472*t1677;
  t6063 = 0.091*t3881*t2542;
  t6068 = t6062 + t6063;
  t5555 = 0.366501*t4410;
  t5558 = -0.930418*t4724;
  t5561 = t5555 + t5558;
  t6198 = Cos(var1[7]);
  t6200 = -1.*t6198;
  t6201 = 1. + t6200;
  t6220 = -0.134322983001*t6201;
  t6221 = 1. + t6220;
  t6244 = Sin(var1[7]);
  t6243 = -0.04500040093286238*t6201;
  t6245 = -0.930418*t6244;
  t6246 = 0. + t6245;
  t6247 = 0.07877663122399998*t6246;
  t6250 = -0.366501*t6244;
  t6255 = 0. + t6250;
  t6256 = 0.031030906668*t6255;
  t6258 = 0. + t6243 + t6247 + t6256;
  t6264 = -3.2909349868922137e-7*var1[7];
  t6265 = 0.03103092645718495*t6201;
  t6267 = 0.366501*t6244;
  t6268 = 0. + t6267;
  t6269 = -0.045000372235*t6268;
  t6271 = t6264 + t6265 + t6269;
  t6277 = 1.296332362046933e-7*var1[7];
  t6282 = 0.07877668146182712*t6201;
  t6285 = 0.930418*t6244;
  t6286 = 0. + t6285;
  t6287 = -0.045000372235*t6286;
  t6290 = t6277 + t6282 + t6287;
  t6320 = -0.340999127418*t6201*t5200;
  t6205 = -0.8656776547239999*t6201;
  t6206 = 1. + t6205;
  t6262 = t358*t6258;
  t6274 = -1.*t2629*t6271;
  t6291 = -1.*t2582*t6290;
  t6292 = 0. + t4145 + t4151 + t4235 + t6262 + t6274 + t6291;
  t6330 = -0.340999127418*t6201*t2582;
  t6302 = t316*t141*t6258;
  t6303 = t5292*t6271;
  t6304 = t5200*t6290;
  t6305 = 0. + var1[1] + t5099 + t5112 + t6302 + t6303 + t6304;
  t6317 = -1.*t2582*t6271;
  t6318 = -1.*t5497*t6290;
  t6319 = t5504 + t5507 + t6317 + t6318;
  t6327 = t5200*t6271;
  t6328 = t3257*t6290;
  t6329 = t5524 + t5525 + t6327 + t6328;
  t6353 = -0.340999127418*t6201*t2629;
  t6321 = t6221*t5292;
  t6322 = t316*t141*t6268;
  t6325 = t6320 + t6321 + t6322;
  t6331 = t6221*t2629;
  t6332 = -1.*t358*t6268;
  t6333 = t6330 + t6331 + t6332;
  t6402 = -1.*t5424*t6271;
  t6403 = -1.*t2629*t6290;
  t6404 = t5362 + t5372 + t6402 + t6403;
  t6345 = t6206*t5200;
  t6346 = -0.340999127418*t6201*t5292;
  t6347 = t316*t141*t6286;
  t6348 = t6345 + t6346 + t6347;
  t6406 = t5431*t6271;
  t6407 = t5393*t6290;
  t6408 = t5348 + t5349 + t6406 + t6407;
  t6352 = t6206*t2582;
  t6354 = -1.*t358*t6286;
  t6355 = t6352 + t6353 + t6354;
  t6203 = -0.340999127418*t6201*t4410;
  t6460 = t92*t316*t6258;
  t6461 = t4724*t6271;
  t6467 = t4410*t6290;
  t6468 = t3882 + t4005 + t6460 + t6461 + t6467;
  t6503 = -1.*t316*t141*t6268;
  t6512 = -1.*t316*t141*t6286;
  t6548 = t316*t6258;
  t6549 = -1.*t5258*t6271;
  t6553 = -1.*t5150*t6290;
  t6554 = t5180 + t5189 + t6548 + t6549 + t6553;
  t6556 = -1.*t141*t358*t6258;
  t6557 = t5220*t6271;
  t6558 = t5053*t6290;
  t6559 = t5009 + t5010 + t6556 + t6557 + t6558;
  t6487 = -1.000000637725*t6201;
  t6489 = 1. + t6487;
  t6640 = -0.0846680539949003*t6198;
  t6644 = -0.04500040093286238*t6244;
  t6645 = t6640 + t6644;
  t6647 = -0.016492681424499736*t6198;
  t6648 = 0.03103092645718495*t6244;
  t6649 = -3.2909349868922137e-7 + t6647 + t6648;
  t6653 = -0.04186915633414423*t6198;
  t6654 = 0.07877668146182712*t6244;
  t6655 = 1.296332362046933e-7 + t6653 + t6654;
  t6646 = t358*t6645;
  t6652 = -1.*t2629*t6649;
  t6656 = -1.*t2582*t6655;
  t6657 = t6646 + t6652 + t6656;
  t6659 = t316*t141*t6645;
  t6660 = t5292*t6649;
  t6661 = t5200*t6655;
  t6662 = t6659 + t6660 + t6661;
  t6337 = t6206*t3257;
  t6338 = t6320 + t6337;
  t6236 = t6221*t5200;
  t6237 = -0.340999127418*t6201*t3257;
  t6238 = t6236 + t6237;
  t6222 = t6221*t4410;
  t6229 = -0.340999127418*t6201*t5478;
  t6232 = t6222 + t6229;
  t6299 = t6221*t2582;
  t6300 = -0.340999127418*t6201*t5497;
  t6301 = t6299 + t6300;
  t6448 = t6221*t4724;
  t6457 = t92*t316*t6268;
  t6458 = t6203 + t6448 + t6457;
  t6207 = t6206*t5478;
  t6208 = t6203 + t6207;
  t6712 = -1.*t358*t6258;
  t6713 = t2629*t6271;
  t6714 = t2582*t6290;
  t6715 = 0. + var1[2] + t5587 + t5588 + t6712 + t6713 + t6714;
  t6340 = t6206*t5497;
  t6341 = t6330 + t6340;
  t6717 = -1.*t92*t316*t6258;
  t6718 = -1.*t4724*t6271;
  t6719 = -1.*t4410*t6290;
  t6720 = 0. + t5603 + t5607 + t5615 + t6717 + t6718 + t6719;
  t6722 = t2582*t6271;
  t6723 = t5497*t6290;
  t6724 = t5763 + t5764 + t6722 + t6723;
  t6472 = t6206*t4410;
  t6473 = -0.340999127418*t6201*t4724;
  t6476 = t92*t316*t6286;
  t6477 = t6472 + t6473 + t6476;
  t6726 = -1.*t4410*t6271;
  t6730 = -1.*t5478*t6290;
  t6731 = t5770 + t5772 + t6726 + t6730;
  t6412 = -0.340999127418*t6201*t5431;
  t6413 = t6206*t5393;
  t6420 = t6412 + t6413;
  t6394 = t6221*t5431;
  t6396 = -0.340999127418*t6201*t5393;
  t6397 = t6394 + t6396;
  t6386 = t6221*t5332;
  t6387 = -0.340999127418*t6201*t5339;
  t6388 = t6386 + t6387;
  t6399 = t6221*t5424;
  t6400 = t6399 + t6353;
  t6377 = -0.340999127418*t6201*t5332;
  t6381 = t6206*t5339;
  t6384 = t6377 + t6381;
  t6431 = -0.340999127418*t6201*t5424;
  t6432 = t6206*t2629;
  t6433 = t6431 + t6432;
  t6759 = t5424*t6271;
  t6762 = t2629*t6290;
  t6763 = t5713 + t5717 + t6759 + t6762;
  t6765 = -1.*t5332*t6271;
  t6766 = -1.*t5339*t6290;
  t6767 = t5706 + t5707 + t6765 + t6766;
  t6497 = -0.340999127418*t6201*t3453;
  t6498 = t6221*t3573;
  t6507 = t6497 + t6498 + t6503;
  t6509 = t6206*t3453;
  t6511 = -0.340999127418*t6201*t3573;
  t6513 = t6509 + t6511 + t6512;
  t6793 = -1.*t3573*t6271;
  t6794 = -1.*t3453*t6290;
  t6795 = t5837 + t5839 + t6302 + t6793 + t6794;
  t6537 = -0.340999127418*t6201*t5150;
  t6542 = t6221*t5258;
  t6543 = -1.*t316*t6268;
  t6546 = t6537 + t6542 + t6543;
  t6602 = -0.340999127418*t6201*t4874;
  t6605 = t6221*t4987;
  t6606 = -1.*t92*t358*t6268;
  t6607 = t6602 + t6605 + t6606;
  t6572 = t6206*t5150;
  t6574 = -0.340999127418*t6201*t5258;
  t6575 = -1.*t316*t6286;
  t6578 = t6572 + t6574 + t6575;
  t6840 = -1.*t316*t6258;
  t6841 = t5258*t6271;
  t6842 = t5150*t6290;
  t6843 = t5645 + t5651 + t6840 + t6841 + t6842;
  t6848 = t92*t358*t6258;
  t6849 = -1.*t4987*t6271;
  t6850 = -1.*t4874*t6290;
  t6851 = t5579 + t5582 + t6848 + t6849 + t6850;
  t6609 = t6206*t4874;
  t6610 = -0.340999127418*t6201*t4987;
  t6611 = -1.*t92*t358*t6286;
  t6612 = t6609 + t6610 + t6611;
  t6561 = -0.340999127418*t6201*t5053;
  t6562 = t6221*t5220;
  t6563 = -1.*t141*t358*t6268;
  t6564 = t6561 + t6562 + t6563;
  t6587 = t6206*t5053;
  t6588 = -0.340999127418*t6201*t5220;
  t6589 = -1.*t141*t358*t6286;
  t6590 = t6587 + t6588 + t6589;
  t6672 = 0.930418*t316*t6198*t141;
  t6673 = -0.8656776547239999*t5200*t6244;
  t6674 = -0.340999127418*t5292*t6244;
  t6675 = t6672 + t6673 + t6674;
  t6689 = 0.366501*t316*t6198*t141;
  t6696 = -0.340999127418*t5200*t6244;
  t6697 = -0.134322983001*t5292*t6244;
  t6698 = t6689 + t6696 + t6697;
  t6664 = -0.930418*t6198*t358;
  t6668 = -0.8656776547239999*t2582*t6244;
  t6669 = -0.340999127418*t2629*t6244;
  t6670 = t6664 + t6668 + t6669;
  t6626 = 0.930418*t92*t316*t6198;
  t6627 = -0.8656776547239999*t4410*t6244;
  t6628 = -0.340999127418*t4724*t6244;
  t6629 = t6626 + t6627 + t6628;
  t6881 = -1.*t358*t6645;
  t6887 = t2629*t6649;
  t6888 = t2582*t6655;
  t6889 = t6881 + t6887 + t6888;
  t6891 = -1.*t92*t316*t6645;
  t6892 = -1.*t4724*t6649;
  t6893 = -1.*t4410*t6655;
  t6894 = t6891 + t6892 + t6893;
  t6684 = -0.366501*t6198*t358;
  t6685 = -0.340999127418*t2582*t6244;
  t6686 = -0.134322983001*t2629*t6244;
  t6687 = t6684 + t6685 + t6686;
  t6634 = 0.366501*t92*t316*t6198;
  t6635 = -0.340999127418*t4410*t6244;
  t6637 = -0.134322983001*t4724*t6244;
  t6638 = t6634 + t6635 + t6637;
  t6917 = -1.*t316*t141*t6258;
  t6912 = t5607 + t5615 + t6717 + t6718 + t6719;
  t6915 = 0. + var1[0] + t3882 + t4005 + t6460 + t6461 + t6467;
  t6918 = -1.*t5292*t6271;
  t6919 = -1.*t5200*t6290;
  t6920 = 0. + t5918 + t5919 + t5924 + t6917 + t6918 + t6919;
  t6922 = t3573*t6271;
  t6923 = t3453*t6290;
  t6924 = t5972 + t5973 + t6917 + t6922 + t6923;
  t6944 = -1.*t5200*t6271;
  t6945 = -1.*t3257*t6290;
  t6946 = t6076 + t6080 + t6944 + t6945;
  t6948 = t4410*t6271;
  t6949 = t5478*t6290;
  t6950 = t6062 + t6063 + t6948 + t6949;
  t6973 = -1.*t5431*t6271;
  t6974 = -1.*t5393*t6290;
  t6975 = t6033 + t6034 + t6973 + t6974;
  t6977 = t5332*t6271;
  t6978 = t5339*t6290;
  t6979 = t6025 + t6026 + t6977 + t6978;
  t7001 = t141*t358*t6258;
  t7002 = -1.*t5220*t6271;
  t7003 = -1.*t5053*t6290;
  t7004 = t5946 + t5947 + t7001 + t7002 + t7003;
  t7006 = -1.*t92*t358*t6258;
  t7007 = t4987*t6271;
  t7011 = t4874*t6290;
  t7012 = t5933 + t5937 + t7006 + t7007 + t7011;
  t7062 = -1.*t316*t141*t6645;
  t7063 = -1.*t5292*t6649;
  t7064 = -1.*t5200*t6655;
  t7065 = t7062 + t7063 + t7064;
  t7067 = t92*t316*t6645;
  t7068 = t4724*t6649;
  t7069 = t4410*t6655;
  t7070 = t7067 + t7068 + t7069;
  t6820 = 0.366501*t6458;
  t6821 = 0.930418*t6477;
  t6822 = t6820 + t6821;
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
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t92*var2[2] + t141*var1[2]*var2[3];
  p_output1[25]=-1.*t141*var2[2] - 1.*t92*var1[2]*var2[3];
  p_output1[26]=t92*var2[0] + t141*var2[1] + (-1.*t141*var1[0] + t92*var1[1])*var2[3];
  p_output1[27]=-1.*t92*var2[3];
  p_output1[28]=-1.*t141*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t358*var2[1] - 1.*t141*t316*var2[2] - 1.*t316*t92*var1[2]*var2[3] + (-1.*t316*var1[1] + t141*t358*var1[2])*var2[4];
  p_output1[31]=t358*var2[0] + t316*t92*var2[2] - 1.*t141*t316*var1[2]*var2[3] + (t316*var1[0] - 1.*t358*t92*var1[2])*var2[4];
  p_output1[32]=t141*t316*var2[0] - 1.*t316*t92*var2[1] + (t316*t92*var1[0] + t141*t316*var1[1])*var2[3] + (-1.*t141*t358*var1[0] + t358*t92*var1[1])*var2[4];
  p_output1[33]=-1.*t141*t316*var2[3] - 1.*t358*t92*var2[4];
  p_output1[34]=t316*t92*var2[3] - 1.*t141*t358*var2[4];
  p_output1[35]=-1.*t316*var2[4];
  p_output1[36]=t358*var2[1] + t141*t316*var2[2] + (0.091*t1214 + t316*t92*var1[2])*var2[3] + (0.091*t316*t863*t92 + t316*var1[1] - 1.*t141*t358*var1[2])*var2[4] + 0.091*t1125*var2[5];
  p_output1[37]=-1.*t358*var2[0] - 1.*t316*t92*var2[2] + (0.091*t1677 + t141*t316*var1[2])*var2[3] + (0.091*t141*t316*t863 - 1.*t316*var1[0] + t358*t92*var1[2])*var2[4] + 0.091*t1546*var2[5];
  p_output1[38]=-1.*t141*t316*var2[0] + t316*t92*var2[1] + (-1.*t316*t92*var1[0] - 1.*t141*t316*var1[1])*var2[3] + (-0.091*t358*t863 + t141*t358*var1[0] - 1.*t358*t92*var1[1])*var2[4] - 0.091*t1077*t316*var2[5];
  p_output1[39]=t141*t316*var2[3] + t358*t92*var2[4];
  p_output1[40]=-1.*t316*t92*var2[3] + t141*t358*var2[4];
  p_output1[41]=t316*var2[4];
  p_output1[42]=(0.366501*t2582 - 0.930418*t2629)*var2[1] + (0.366501*(-1.*t2472*t2820 + t3129) - 0.930418*t3257)*var2[2] + (0.084668*t141*t316 - 0.041869*t3453 - 0.016493*t3573 + 0.366501*(t2582*t4022 + t4262*t4410) - 0.930418*(t2629*t4022 + t4262*t4724))*var2[3] + (-0.041869*t4874 - 0.016493*t4987 + 0.366501*(t2582*t5016 + t4262*t5053 + t5115*t5150 + t5193*t5200) - 0.930418*(t2629*t5016 + t4262*t5220 + t5115*t5258 + t5193*t5292) + 0.084668*t358*t92)*var2[4] + (-0.016493*t5332 - 0.041869*t5339 + 0.366501*(t2629*t5115 + t2582*t5351 + t5200*t5379 + t4262*t5393) - 0.930418*(t2629*t5351 + t5292*t5379 + t5115*t5424 + t4262*t5431))*var2[5] + (-0.016493*t4410 - 0.041869*t5478 + 0.366501*(t3257*t4262 + t5115*t5497 + t5200*t5508 + t2582*t5526) - 0.930418*(t2582*t5115 + t4262*t5200 + t5292*t5508 + t2629*t5526))*var2[6];
  p_output1[43]=(0.366501*t5424 - 0.930418*t5497)*var2[0] + t5561*var2[2] + (-0.041869*t4410 - 0.016493*t4724 + 0.366501*(t3453*t5601 + t2582*t5841) - 0.930418*(t3573*t5601 + t2629*t5841) - 0.084668*t316*t92)*var2[3] + (0.084668*t141*t358 - 0.041869*t5053 - 0.016493*t5220 + 0.366501*(t2582*t5583 + t4874*t5601 + t5150*t5617 + t4410*t5652) - 0.930418*(t2629*t5583 + t4987*t5601 + t5258*t5617 + t4724*t5652))*var2[4] + (-0.041869*t5393 - 0.016493*t5431 + 0.366501*(t5339*t5601 + t2629*t5617 + t2582*t5709 + t4410*t5722) - 0.930418*(t5332*t5601 + t5424*t5617 + t2629*t5709 + t4724*t5722))*var2[5] + (-0.041869*t3257 - 0.016493*t5200 + 0.366501*(t5478*t5601 + t5497*t5617 + t4410*t5765 + t2582*t5774) - 0.930418*(t4410*t5601 + t2582*t5617 + t4724*t5765 + t2629*t5774))*var2[6];
  p_output1[44]=(0.366501*t5200 - 0.930418*t5292)*var2[0] + (0.366501*(-1.*t2472*t3881 + t5329) - 0.930418*t5478)*var2[1] + (0.366501*(t3453*t5925 + t4410*t5927 + t5200*t5974 + t4410*t5979) - 0.930418*(t3573*t5925 + t4724*t5927 + t5292*t5974 + t4724*t5979))*var2[3] + (0.084668*t316 - 0.041869*t5150 - 0.016493*t5258 + 0.366501*(t4874*t5925 + t5053*t5927 + t5200*t5942 + t4410*t5948) - 0.930418*(t4987*t5925 + t5220*t5927 + t5292*t5942 + t4724*t5948))*var2[4] + (-0.041869*t2629 - 0.016493*t5424 + 0.366501*(t5339*t5925 + t5393*t5927 + t5200*t6029 + t4410*t6037) - 0.930418*(t5332*t5925 + t5431*t5927 + t5292*t6029 + t4724*t6037))*var2[5] + (-0.016493*t2582 - 0.041869*t5497 + 0.366501*(t5478*t5925 + t3257*t5927 + t5200*t6068 + t4410*t6081) - 0.930418*(t4410*t5925 + t5200*t5927 + t5292*t6068 + t4724*t6081))*var2[6];
  p_output1[45]=(0.366501*t3453 - 0.930418*t3573)*var2[3] + (0.366501*t4874 - 0.930418*t4987)*var2[4] + (-0.930418*t5332 + 0.366501*t5339)*var2[5] + (-0.930418*t4410 + 0.366501*t5478)*var2[6];
  p_output1[46]=t5561*var2[3] + (0.366501*t5053 - 0.930418*t5220)*var2[4] + (0.366501*t5393 - 0.930418*t5431)*var2[5] + (0.366501*t3257 - 0.930418*t5200)*var2[6];
  p_output1[47]=(0.366501*t5150 - 0.930418*t5258)*var2[4] + (0.366501*t2629 - 0.930418*t5424)*var2[5] + (-0.930418*t2582 + 0.366501*t5497)*var2[6];
  p_output1[48]=(0.366501*t6333 + 0.930418*t6355)*var2[1] + (0.366501*(0.340999127418*t5200*t6201 - 1.*t5292*t6221 + t6503) + 0.930418*(0.340999127418*t5292*t6201 - 1.*t5200*t6206 + t6512))*var2[2] + (0.366501*(t6292*t6458 + t6333*t6468) + 0.930418*(t6355*t6468 + t6292*t6477) + 0.151852*(t3453*t6246 + t3573*t6255 - 1.*t141*t316*t6489) - 0.041869*t6507 + 0.016493*t6513)*var2[3] + (0.366501*(t6305*t6546 + t6325*t6554 + t6333*t6559 + t6292*t6564) + 0.930418*(t6348*t6554 + t6355*t6559 + t6305*t6578 + t6292*t6590) - 0.041869*t6607 + 0.016493*t6612 + 0.151852*(t4874*t6246 + t4987*t6255 - 1.*t358*t6489*t92))*var2[4] + (0.151852*(t5339*t6246 + t5332*t6255) + 0.016493*t6384 - 0.041869*t6388 + 0.366501*(t6292*t6397 + t6305*t6400 + t6325*t6404 + t6333*t6408) + 0.930418*(t6348*t6404 + t6355*t6408 + t6292*t6420 + t6305*t6433))*var2[5] + (0.016493*t6208 - 0.041869*t6232 + 0.151852*(t5478*t6246 + t4410*t6255) + 0.366501*(t6238*t6292 + t6301*t6305 + t6319*t6325 + t6329*t6333) + 0.930418*(t6292*t6338 + t6305*t6341 + t6319*t6348 + t6329*t6355))*var2[6] + (0.016493*t6629 - 0.041869*t6638 + 0.930418*(t6348*t6657 + t6355*t6662 + t6305*t6670 + t6292*t6675) + 0.366501*(t6325*t6657 + t6333*t6662 + t6305*t6687 + t6292*t6698) + 0.151852*(-0.930418*t4410*t6198 - 0.366501*t4724*t6198 - 1.000000637725*t316*t6244*t92))*var2[7];
  p_output1[49]=(0.366501*(0.340999127418*t2582*t6201 - 1.*t2629*t6221 + t358*t6268) + 0.930418*(0.340999127418*t2629*t6201 - 1.*t2582*t6206 + t358*t6286))*var2[0] + t6822*var2[2] + (-0.041869*t6458 + 0.016493*t6477 + 0.366501*(t6507*t6715 + t6333*t6795) + 0.930418*(t6513*t6715 + t6355*t6795) + 0.151852*(t4410*t6246 + t4724*t6255 + t316*t6489*t92))*var2[3] + (0.151852*(t5053*t6246 + t5220*t6255 - 1.*t141*t358*t6489) - 0.041869*t6564 + 0.016493*t6590 + 0.366501*(t6607*t6715 + t6546*t6720 + t6458*t6843 + t6333*t6851) + 0.930418*(t6612*t6715 + t6578*t6720 + t6477*t6843 + t6355*t6851))*var2[4] + (0.151852*(t5393*t6246 + t5431*t6255) - 0.041869*t6397 + 0.016493*t6420 + 0.366501*(t6388*t6715 + t6400*t6720 + t6458*t6763 + t6333*t6767) + 0.930418*(t6384*t6715 + t6433*t6720 + t6477*t6763 + t6355*t6767))*var2[5] + (-0.041869*t6238 + 0.151852*(t3257*t6246 + t5200*t6255) + 0.016493*t6338 + 0.366501*(t6232*t6715 + t6301*t6720 + t6458*t6724 + t6333*t6731) + 0.930418*(t6208*t6715 + t6341*t6720 + t6477*t6724 + t6355*t6731))*var2[6] + (0.151852*(-0.930418*t5200*t6198 - 0.366501*t5292*t6198 - 1.000000637725*t141*t316*t6244) + 0.016493*t6675 - 0.041869*t6698 + 0.366501*(t6638*t6715 + t6687*t6720 + t6458*t6889 + t6333*t6894) + 0.930418*(t6629*t6715 + t6670*t6720 + t6477*t6889 + t6355*t6894))*var2[7];
  p_output1[50]=(0.366501*t6325 + 0.930418*t6348)*var2[0] + (0.366501*(0.340999127418*t4410*t6201 - 1.*t4724*t6221 - 1.*t316*t6268*t92) + 0.930418*(0.340999127418*t4724*t6201 - 1.*t4410*t6206 - 1.*t316*t6286*t92))*var2[1] + (0.366501*(t6458*t6912 + t6458*t6915 + t6507*t6920 + t6325*t6924) + 0.930418*(t6477*t6912 + t6477*t6915 + t6513*t6920 + t6348*t6924))*var2[3] + (0.151852*(t5150*t6246 + t5258*t6255 - 1.*t316*t6489) - 0.041869*t6546 + 0.016493*t6578 + 0.366501*(t6564*t6915 + t6607*t6920 + t6458*t7004 + t6325*t7012) + 0.930418*(t6590*t6915 + t6612*t6920 + t6477*t7004 + t6348*t7012))*var2[4] + (0.151852*(t2629*t6246 + t5424*t6255) - 0.041869*t6400 + 0.016493*t6433 + 0.366501*(t6397*t6915 + t6388*t6920 + t6458*t6975 + t6325*t6979) + 0.930418*(t6420*t6915 + t6384*t6920 + t6477*t6975 + t6348*t6979))*var2[5] + (0.151852*(t5497*t6246 + t2582*t6255) - 0.041869*t6301 + 0.016493*t6341 + 0.366501*(t6238*t6915 + t6232*t6920 + t6458*t6946 + t6325*t6950) + 0.930418*(t6338*t6915 + t6208*t6920 + t6477*t6946 + t6348*t6950))*var2[6] + (0.151852*(-0.930418*t2582*t6198 - 0.366501*t2629*t6198 + 1.000000637725*t358*t6244) + 0.016493*t6670 - 0.041869*t6687 + 0.366501*(t6698*t6915 + t6638*t6920 + t6458*t7065 + t6325*t7070) + 0.930418*(t6675*t6915 + t6629*t6920 + t6477*t7065 + t6348*t7070))*var2[7];
  p_output1[51]=(0.366501*t6507 + 0.930418*t6513)*var2[3] + (0.366501*t6607 + 0.930418*t6612)*var2[4] + (0.930418*t6384 + 0.366501*t6388)*var2[5] + (0.930418*t6208 + 0.366501*t6232)*var2[6] + (0.930418*t6629 + 0.366501*t6638)*var2[7];
  p_output1[52]=t6822*var2[3] + (0.366501*t6564 + 0.930418*t6590)*var2[4] + (0.366501*t6397 + 0.930418*t6420)*var2[5] + (0.366501*t6238 + 0.930418*t6338)*var2[6] + (0.930418*t6675 + 0.366501*t6698)*var2[7];
  p_output1[53]=(0.366501*t6546 + 0.930418*t6578)*var2[4] + (0.366501*t6400 + 0.930418*t6433)*var2[5] + (0.366501*t6301 + 0.930418*t6341)*var2[6] + (0.930418*t6670 + 0.366501*t6687)*var2[7];
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



void dJs_hip_flexion_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

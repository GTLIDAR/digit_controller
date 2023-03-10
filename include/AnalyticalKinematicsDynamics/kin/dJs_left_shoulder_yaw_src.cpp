/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_left_shoulder_yaw_src.h"

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
  double t135;
  double t181;
  double t324;
  double t341;
  double t893;
  double t955;
  double t994;
  double t997;
  double t998;
  double t1206;
  double t1240;
  double t1245;
  double t2017;
  double t1996;
  double t1548;
  double t1604;
  double t1612;
  double t2132;
  double t2135;
  double t2143;
  double t1126;
  double t1162;
  double t1178;
  double t2379;
  double t2386;
  double t1469;
  double t1479;
  double t1481;
  double t2016;
  double t2022;
  double t2028;
  double t2392;
  double t2396;
  double t2398;
  double t2463;
  double t2475;
  double t2503;
  double t2082;
  double t2083;
  double t2107;
  double t2603;
  double t2622;
  double t2630;
  double t2376;
  double t2432;
  double t2546;
  double t2549;
  double t1018;
  double t1052;
  double t1054;
  double t2665;
  double t2128;
  double t2231;
  double t2901;
  double t2907;
  double t2947;
  double t3105;
  double t3106;
  double t3112;
  double t3030;
  double t3059;
  double t3066;
  double t2986;
  double t2566;
  double t2567;
  double t2596;
  double t3068;
  double t3071;
  double t3088;
  double t3308;
  double t3309;
  double t3311;
  double t3322;
  double t3324;
  double t2165;
  double t2179;
  double t2181;
  double t3419;
  double t3422;
  double t3433;
  double t3318;
  double t3334;
  double t3342;
  double t3195;
  double t3202;
  double t3636;
  double t3637;
  double t3648;
  double t3659;
  double t3664;
  double t3674;
  double t3152;
  double t3165;
  double t3187;
  double t3396;
  double t3409;
  double t3410;
  double t2676;
  double t2680;
  double t3134;
  double t2999;
  double t3011;
  double t2870;
  double t2873;
  double t3948;
  double t3952;
  double t3955;
  double t2788;
  double t2825;
  double t2842;
  double t3935;
  double t3938;
  double t3944;
  double t4016;
  double t4024;
  double t4030;
  double t4031;
  double t3970;
  double t3975;
  double t3978;
  double t3286;
  double t3294;
  double t3300;
  double t4142;
  double t4145;
  double t4149;
  double t4125;
  double t4131;
  double t4137;
  double t3611;
  double t3623;
  double t3625;
  double t3739;
  double t3740;
  double t3745;
  double t3552;
  double t3559;
  double t3574;
  double t3696;
  double t3721;
  double t3726;
  double t4262;
  double t4264;
  double t4267;
  double t3589;
  double t3592;
  double t3604;
  double t3750;
  double t3751;
  double t3757;
  double t4280;
  double t4281;
  double t4284;
  double t2213;
  double t2252;
  double t4427;
  double t4434;
  double t4449;
  double t2286;
  double t2291;
  double t2300;
  double t4684;
  double t4659;
  double t4662;
  double t4665;
  double t4710;
  double t4711;
  double t4715;
  double t4719;
  double t4691;
  double t4693;
  double t4694;
  double t4793;
  double t4806;
  double t4811;
  double t4876;
  double t4880;
  double t4888;
  double t4987;
  double t4991;
  double t4993;
  double t4963;
  double t4975;
  double t4977;
  double t5024;
  double t5034;
  double t5037;
  double t5043;
  double t3905;
  double t3907;
  double t3912;
  double t5424;
  double t5425;
  double t5429;
  double t5388;
  double t5392;
  double t5410;
  double t5434;
  double t5444;
  double t5458;
  double t5461;
  double t5478;
  double t5483;
  double t5501;
  double t5502;
  double t5509;
  double t5510;
  double t5514;
  double t5516;
  double t5574;
  double t5602;
  double t5637;
  double t5422;
  double t5431;
  double t5447;
  double t5452;
  double t5828;
  double t5830;
  double t5844;
  double t5853;
  double t5874;
  double t5880;
  double t5889;
  double t5890;
  double t5901;
  double t5907;
  double t5915;
  double t5941;
  double t5868;
  double t5891;
  double t5946;
  double t5947;
  double t5469;
  double t5484;
  double t5496;
  double t5498;
  double t5976;
  double t5980;
  double t5984;
  double t5988;
  double t5506;
  double t5511;
  double t5535;
  double t5552;
  double t5960;
  double t6227;
  double t6230;
  double t6233;
  double t6239;
  double t6243;
  double t6254;
  double t6187;
  double t6320;
  double t6329;
  double t6331;
  double t6334;
  double t6268;
  double t6279;
  double t6280;
  double t6286;
  double t6794;
  double t6796;
  double t6800;
  double t6814;
  double t6820;
  double t6825;
  double t6420;
  double t6428;
  double t6437;
  double t6634;
  double t6635;
  double t6640;
  double t6657;
  double t7142;
  double t7147;
  double t7153;
  double t7158;
  double t7195;
  double t7198;
  double t7211;
  double t7224;
  double t7607;
  double t7610;
  double t7611;
  double t7619;
  double t7620;
  double t7621;
  double t7630;
  double t7631;
  double t7632;
  double t7612;
  double t7624;
  double t7633;
  double t7636;
  double t7649;
  double t7660;
  double t7662;
  double t7664;
  double t5955;
  double t5964;
  double t5966;
  double t6009;
  double t6026;
  double t6037;
  double t6042;
  double t6080;
  double t6095;
  double t6099;
  double t6107;
  double t6193;
  double t6195;
  double t6386;
  double t6400;
  double t6409;
  double t6537;
  double t6543;
  double t6544;
  double t6138;
  double t6139;
  double t6297;
  double t6315;
  double t7845;
  double t7846;
  double t7853;
  double t7855;
  double t6149;
  double t6151;
  double t6152;
  double t7859;
  double t7860;
  double t7865;
  double t7867;
  double t7869;
  double t7873;
  double t6480;
  double t6490;
  double t6494;
  double t7891;
  double t7892;
  double t7898;
  double t7911;
  double t6163;
  double t6170;
  double t6177;
  double t6592;
  double t6594;
  double t6600;
  double t6777;
  double t6782;
  double t6783;
  double t6861;
  double t6873;
  double t6874;
  double t6962;
  double t6971;
  double t6973;
  double t6697;
  double t6722;
  double t6725;
  double t6832;
  double t6836;
  double t6840;
  double t6737;
  double t6749;
  double t6750;
  double t7982;
  double t7984;
  double t7987;
  double t7993;
  double t7995;
  double t8000;
  double t6902;
  double t6903;
  double t6754;
  double t6755;
  double t6769;
  double t6978;
  double t6979;
  double t6983;
  double t7091;
  double t7094;
  double t7097;
  double t7108;
  double t7299;
  double t7300;
  double t7314;
  double t7320;
  double t7422;
  double t7428;
  double t7431;
  double t7432;
  double t7009;
  double t7026;
  double t7044;
  double t7045;
  double t7248;
  double t7253;
  double t7283;
  double t7286;
  double t7056;
  double t7059;
  double t7060;
  double t7061;
  double t8052;
  double t8053;
  double t8054;
  double t8056;
  double t8075;
  double t8076;
  double t8081;
  double t8083;
  double t7341;
  double t7368;
  double t7377;
  double t7385;
  double t7069;
  double t7075;
  double t7077;
  double t7081;
  double t7445;
  double t7447;
  double t7456;
  double t7459;
  double t7586;
  double t7588;
  double t7589;
  double t7590;
  double t7714;
  double t7716;
  double t7717;
  double t7722;
  double t7751;
  double t7752;
  double t7753;
  double t7755;
  double t7480;
  double t7493;
  double t7494;
  double t7495;
  double t7592;
  double t7596;
  double t7597;
  double t7603;
  double t8148;
  double t8151;
  double t8156;
  double t8158;
  double t7696;
  double t7699;
  double t7700;
  double t7701;
  double t8174;
  double t8185;
  double t8186;
  double t8187;
  double t7534;
  double t7535;
  double t7544;
  double t7546;
  double t7733;
  double t7734;
  double t7735;
  double t7738;
  double t7553;
  double t7574;
  double t7575;
  double t7576;
  double t5715;
  double t5716;
  double t5729;
  double t5773;
  double t5786;
  double t5789;
  double t8243;
  double t8245;
  double t8246;
  double t5797;
  double t5809;
  double t5822;
  double t8342;
  double t8345;
  double t8346;
  double t8351;
  double t8359;
  double t8361;
  double t8362;
  double t8363;
  double t8364;
  double t8368;
  double t8371;
  double t8372;
  double t8374;
  double t8432;
  double t8433;
  double t8434;
  double t8436;
  double t8437;
  double t8440;
  double t8500;
  double t8501;
  double t8504;
  double t8506;
  double t8508;
  double t8511;
  double t8545;
  double t8552;
  double t8553;
  double t8556;
  double t8597;
  double t8598;
  double t8602;
  double t8603;
  double t8605;
  double t8611;
  double t8612;
  double t8613;
  double t7831;
  double t7832;
  double t7834;
  double t7836;
  t135 = Cos(var1[3]);
  t181 = Sin(var1[3]);
  t324 = Cos(var1[4]);
  t341 = Sin(var1[4]);
  t893 = Cos(var1[5]);
  t955 = Sin(var1[5]);
  t994 = t135*t893*t341;
  t997 = t181*t955;
  t998 = t994 + t997;
  t1206 = -1.*t135*t893;
  t1240 = -1.*t181*t341*t955;
  t1245 = t1206 + t1240;
  t2017 = Cos(var1[13]);
  t1996 = Sin(var1[13]);
  t1548 = t893*t181*t341;
  t1604 = -1.*t135*t955;
  t1612 = t1548 + t1604;
  t2132 = t135*t893;
  t2135 = t181*t341*t955;
  t2143 = t2132 + t2135;
  t1126 = -1.*t893*t181*t341;
  t1162 = t135*t955;
  t1178 = t1126 + t1162;
  t2379 = -1.*t2017;
  t2386 = 1. + t2379;
  t1469 = -1.*t893*t181;
  t1479 = t135*t341*t955;
  t1481 = t1469 + t1479;
  t2016 = -1.*t324*t893*t1996;
  t2022 = t2017*t324*t955;
  t2028 = t2016 + t2022;
  t2392 = 0.4*t2386;
  t2396 = 0.12*t1996;
  t2398 = 0. + t2392 + t2396;
  t2463 = 0.12*t2386;
  t2475 = -0.4*t1996;
  t2503 = 0. + t2463 + t2475;
  t2082 = t2017*t324*t893;
  t2083 = t324*t1996*t955;
  t2107 = t2082 + t2083;
  t2603 = t2398*t998;
  t2622 = t2503*t1481;
  t2630 = t2603 + t2622;
  t2376 = -1.*var1[2];
  t2432 = -1.*t324*t893*t2398;
  t2546 = -1.*t324*t2503*t955;
  t2549 = 0. + t2376 + t2432 + t2546;
  t1018 = t893*t181;
  t1052 = -1.*t135*t341*t955;
  t1054 = t1018 + t1052;
  t2665 = t2017*t998;
  t2128 = t1996*t1612;
  t2231 = t2017*t1245;
  t2901 = t2503*t1612;
  t2907 = t2398*t1245;
  t2947 = t2901 + t2907;
  t3105 = t2398*t1612;
  t3106 = t2503*t2143;
  t3112 = 0. + var1[1] + t3105 + t3106;
  t3030 = -1.*t324*t893*t2503;
  t3059 = t324*t2398*t955;
  t3066 = t3030 + t3059;
  t2986 = t2017*t1612;
  t2566 = -1.*t1996*t998;
  t2567 = t2017*t1481;
  t2596 = t2566 + t2567;
  t3068 = -1.*t1996*t1612;
  t3071 = t2017*t2143;
  t3088 = t3068 + t3071;
  t3308 = 0.12*t2017;
  t3309 = 0.4*t1996;
  t3311 = t3308 + t3309;
  t3322 = -0.4*t2017;
  t3324 = t3322 + t2396;
  t2165 = -1.*t2017*t1612;
  t2179 = -1.*t1996*t2143;
  t2181 = t2165 + t2179;
  t3419 = t3311*t1612;
  t3422 = t3324*t2143;
  t3433 = t3419 + t3422;
  t3318 = -1.*t324*t893*t3311;
  t3334 = -1.*t324*t3324*t955;
  t3342 = t3318 + t3334;
  t3195 = t1996*t2143;
  t3202 = t2986 + t3195;
  t3636 = t324*t893*t2398*t181;
  t3637 = t324*t2503*t181*t955;
  t3648 = t3636 + t3637;
  t3659 = t893*t2398*t341;
  t3664 = t2503*t341*t955;
  t3674 = t3659 + t3664;
  t3152 = t324*t893*t1996;
  t3165 = -1.*t2017*t324*t955;
  t3187 = t3152 + t3165;
  t3396 = -1.*t2017*t324*t893;
  t3409 = -1.*t324*t1996*t955;
  t3410 = t3396 + t3409;
  t2676 = t1996*t1481;
  t2680 = t2665 + t2676;
  t3134 = t2128 + t2231;
  t2999 = -1.*t1996*t1245;
  t3011 = t2986 + t2999;
  t2870 = -1.*t1996*t1054;
  t2873 = t2665 + t2870;
  t3948 = t324*t893*t2398;
  t3952 = t324*t2503*t955;
  t3955 = 0. + var1[2] + t3948 + t3952;
  t2788 = t1996*t998;
  t2825 = t2017*t1054;
  t2842 = t2788 + t2825;
  t3935 = -1.*t2503*t998;
  t3938 = -1.*t2398*t1054;
  t3944 = t3935 + t3938;
  t4016 = -1.*var1[0];
  t4024 = -1.*t2398*t998;
  t4030 = -1.*t2503*t1481;
  t4031 = 0. + t4016 + t4024 + t4030;
  t3970 = t324*t893*t2503;
  t3975 = -1.*t324*t2398*t955;
  t3978 = t3970 + t3975;
  t3286 = -1.*t2017*t998;
  t3294 = -1.*t1996*t1481;
  t3300 = t3286 + t3294;
  t4142 = -1.*t3311*t998;
  t4145 = -1.*t3324*t1481;
  t4149 = t4142 + t4145;
  t4125 = t324*t893*t3311;
  t4131 = t324*t3324*t955;
  t4137 = t4125 + t4131;
  t3611 = -1.*t324*t893*t1996*t181;
  t3623 = t2017*t324*t181*t955;
  t3625 = t3611 + t3623;
  t3739 = t2017*t324*t893*t181;
  t3740 = t324*t1996*t181*t955;
  t3745 = t3739 + t3740;
  t3552 = -1.*t135*t324*t893*t1996;
  t3559 = t2017*t135*t324*t955;
  t3574 = t3552 + t3559;
  t3696 = t893*t1996*t341;
  t3721 = -1.*t2017*t341*t955;
  t3726 = t3696 + t3721;
  t4262 = -1.*t135*t324*t893*t2398;
  t4264 = -1.*t135*t324*t2503*t955;
  t4267 = t4262 + t4264;
  t3589 = t2017*t135*t324*t893;
  t3592 = t135*t324*t1996*t955;
  t3604 = t3589 + t3592;
  t3750 = -1.*t2017*t893*t341;
  t3751 = -1.*t1996*t341*t955;
  t3757 = t3750 + t3751;
  t4280 = -1.*t893*t2398*t341;
  t4281 = -1.*t2503*t341*t955;
  t4284 = t4280 + t4281;
  t2213 = -1.*t1996*t1178;
  t2252 = t2213 + t2231;
  t4427 = -1.*t2398*t1178;
  t4434 = -1.*t2503*t1245;
  t4449 = t4427 + t4434;
  t2286 = t2017*t1178;
  t2291 = t1996*t1245;
  t2300 = t2286 + t2291;
  t4684 = 0. + var1[0] + t2603 + t2622;
  t4659 = -1.*t324*t893*t2398*t181;
  t4662 = -1.*t324*t2503*t181*t955;
  t4665 = t4659 + t4662;
  t4710 = -1.*var1[1];
  t4711 = -1.*t2398*t1612;
  t4715 = -1.*t2503*t2143;
  t4719 = 0. + t4710 + t4711 + t4715;
  t4691 = t135*t324*t893*t2398;
  t4693 = t135*t324*t2503*t955;
  t4694 = t4691 + t4693;
  t4793 = -1.*t2503*t1612;
  t4806 = -1.*t2398*t1245;
  t4811 = t4793 + t4806;
  t4876 = t2503*t998;
  t4880 = t2398*t1054;
  t4888 = t4876 + t4880;
  t4987 = -1.*t3311*t1612;
  t4991 = -1.*t3324*t2143;
  t4993 = t4987 + t4991;
  t4963 = t3311*t998;
  t4975 = t3324*t1481;
  t4977 = t4963 + t4975;
  t5024 = t4024 + t4030;
  t5034 = t2398*t1178;
  t5037 = t2503*t1245;
  t5043 = t5034 + t5037;
  t3905 = 0.994522*t2596;
  t3907 = 0.104528*t2680;
  t3912 = t3905 + t3907;
  t5424 = Cos(var1[14]);
  t5425 = -1.*t5424;
  t5429 = 1. + t5425;
  t5388 = Sin(var1[14]);
  t5392 = 0.994522*t5388;
  t5410 = 0. + t5392;
  t5434 = -0.9890740084840001*t5429;
  t5444 = 1. + t5434;
  t5458 = -0.104528*t5388;
  t5461 = 0. + t5458;
  t5478 = -0.010926102783999999*t5429;
  t5483 = 1. + t5478;
  t5501 = -1.0000001112680001*t5429;
  t5502 = 1. + t5501;
  t5509 = 0.104528*t5388;
  t5510 = 0. + t5509;
  t5514 = -0.994522*t5388;
  t5516 = 0. + t5514;
  t5574 = -1.*t324*t5410*t181;
  t5602 = -1.*t324*t5461*t181;
  t5637 = -1.*t5502*t324*t181;
  t5422 = -1.*t5410*t341;
  t5431 = 0.103955395616*t5429*t2028;
  t5447 = t5444*t2107;
  t5452 = t5422 + t5431 + t5447;
  t5828 = -0.056500534356700764*t5429;
  t5830 = 0.38315650737400003*t5516;
  t5844 = -0.040271188976*t5510;
  t5853 = 0. + t5828 + t5830 + t5844;
  t5874 = 1.1345904784751044e-7*var1[14];
  t5880 = -0.04027119345689465*t5429;
  t5889 = -0.05650052807*t5461;
  t5890 = t5874 + t5880 + t5889;
  t5901 = 1.1924972351948546e-8*var1[14];
  t5907 = 0.38315655000705834*t5429;
  t5915 = -0.05650052807*t5410;
  t5941 = t5901 + t5907 + t5915;
  t5868 = t5853*t341;
  t5891 = -1.*t5890*t2028;
  t5946 = -1.*t5941*t2107;
  t5947 = 0. + t2376 + t2432 + t5868 + t2546 + t5891 + t5946;
  t5469 = -1.*t5461*t341;
  t5484 = t5483*t2028;
  t5496 = 0.103955395616*t5429*t2107;
  t5498 = t5469 + t5484 + t5496;
  t5976 = t135*t324*t5853;
  t5980 = t5890*t2596;
  t5984 = t5941*t2680;
  t5988 = t5976 + t2603 + t2622 + t5980 + t5984;
  t5506 = -1.*t5502*t341;
  t5511 = t5510*t2028;
  t5535 = t5516*t2107;
  t5552 = t5506 + t5511 + t5535;
  t5960 = 0.103955395616*t5429*t2596;
  t6227 = t5941*t3088;
  t6230 = t5890*t2181;
  t6233 = t3419 + t3422 + t6227 + t6230;
  t6239 = -1.*t5941*t2028;
  t6243 = -1.*t5890*t3410;
  t6254 = t3318 + t3334 + t6239 + t6243;
  t6187 = 0.103955395616*t5429*t3088;
  t6320 = t324*t5853*t181;
  t6329 = t5890*t3088;
  t6331 = t5941*t3202;
  t6334 = 0. + var1[1] + t6320 + t3105 + t3106 + t6329 + t6331;
  t6268 = t324*t5461*t181;
  t6279 = t5483*t3088;
  t6280 = 0.103955395616*t5429*t3202;
  t6286 = t6268 + t6279 + t6280;
  t6794 = t5941*t3134;
  t6796 = t5890*t3011;
  t6800 = t2901 + t2907 + t6794 + t6796;
  t6814 = -1.*t5941*t3187;
  t6820 = -1.*t5890*t2107;
  t6825 = t3030 + t3059 + t6814 + t6820;
  t6420 = t324*t5410*t181;
  t6428 = t5444*t3202;
  t6437 = t6420 + t6187 + t6428;
  t6634 = t5502*t324*t181;
  t6635 = t5510*t3088;
  t6640 = t5516*t3202;
  t6657 = t6634 + t6635 + t6640;
  t7142 = -1.*t5853*t181*t341;
  t7147 = t5890*t3625;
  t7153 = t5941*t3745;
  t7158 = t3636 + t7142 + t3637 + t7147 + t7153;
  t7195 = t324*t5853;
  t7198 = -1.*t5890*t3726;
  t7211 = -1.*t5941*t3757;
  t7224 = t7195 + t3659 + t3664 + t7198 + t7211;
  t7607 = -0.3852670428678886*t5424;
  t7610 = -0.056500534356700764*t5388;
  t7611 = t7607 + t7610;
  t7619 = 0.0059058871981009595*t5424;
  t7620 = -0.04027119345689465*t5388;
  t7621 = 1.1345904784751044e-7 + t7619 + t7620;
  t7630 = -0.05619101817723254*t5424;
  t7631 = 0.38315655000705834*t5388;
  t7632 = 1.1924972351948546e-8 + t7630 + t7631;
  t7612 = t7611*t341;
  t7624 = -1.*t7621*t2028;
  t7633 = -1.*t7632*t2107;
  t7636 = t7612 + t7624 + t7633;
  t7649 = t324*t7611*t181;
  t7660 = t7621*t3088;
  t7662 = t7632*t3202;
  t7664 = t7649 + t7660 + t7662;
  t5955 = t135*t324*t5410;
  t5964 = t5444*t2680;
  t5966 = t5955 + t5960 + t5964;
  t6009 = t135*t324*t5461;
  t6026 = t5483*t2596;
  t6037 = 0.103955395616*t5429*t2680;
  t6042 = t6009 + t6026 + t6037;
  t6080 = t5502*t135*t324;
  t6095 = t5510*t2596;
  t6099 = t5516*t2680;
  t6107 = t6080 + t6095 + t6099;
  t6193 = t5483*t2181;
  t6195 = t6187 + t6193;
  t6386 = t5444*t3088;
  t6400 = 0.103955395616*t5429*t2181;
  t6409 = t6386 + t6400;
  t6537 = t5516*t3088;
  t6543 = t5510*t2181;
  t6544 = t6537 + t6543;
  t6138 = t5483*t3300;
  t6139 = t5960 + t6138;
  t6297 = t5483*t3410;
  t6315 = t5431 + t6297;
  t7845 = -1.*t5853*t341;
  t7846 = t5890*t2028;
  t7853 = t5941*t2107;
  t7855 = 0. + var1[2] + t3948 + t7845 + t3952 + t7846 + t7853;
  t6149 = t5444*t2596;
  t6151 = 0.103955395616*t5429*t3300;
  t6152 = t6149 + t6151;
  t7859 = -1.*t5941*t2596;
  t7860 = -1.*t5890*t3300;
  t7865 = t4142 + t4145 + t7859 + t7860;
  t7867 = t5941*t2028;
  t7869 = t5890*t3410;
  t7873 = t4125 + t4131 + t7867 + t7869;
  t6480 = t5444*t2028;
  t6490 = 0.103955395616*t5429*t3410;
  t6494 = t6480 + t6490;
  t7891 = -1.*t135*t324*t5853;
  t7892 = -1.*t5890*t2596;
  t7898 = -1.*t5941*t2680;
  t7911 = 0. + t4016 + t7891 + t4024 + t4030 + t7892 + t7898;
  t6163 = t5516*t2596;
  t6170 = t5510*t3300;
  t6177 = t6163 + t6170;
  t6592 = t5516*t2028;
  t6594 = t5510*t3410;
  t6600 = t6592 + t6594;
  t6777 = 0.103955395616*t5429*t3134;
  t6782 = t5483*t3011;
  t6783 = t6777 + t6782;
  t6861 = t5444*t3134;
  t6873 = 0.103955395616*t5429*t3011;
  t6874 = t6861 + t6873;
  t6962 = t5516*t3134;
  t6971 = t5510*t3011;
  t6973 = t6962 + t6971;
  t6697 = 0.103955395616*t5429*t2842;
  t6722 = t5483*t2873;
  t6725 = t6697 + t6722;
  t6832 = 0.103955395616*t5429*t3187;
  t6836 = t5483*t2107;
  t6840 = t6832 + t6836;
  t6737 = t5444*t2842;
  t6749 = 0.103955395616*t5429*t2873;
  t6750 = t6737 + t6749;
  t7982 = -1.*t5941*t2842;
  t7984 = -1.*t5890*t2873;
  t7987 = t3935 + t3938 + t7982 + t7984;
  t7993 = t5941*t3187;
  t7995 = t5890*t2107;
  t8000 = t3970 + t3975 + t7993 + t7995;
  t6902 = t5444*t3187;
  t6903 = t6902 + t5496;
  t6754 = t5516*t2842;
  t6755 = t5510*t2873;
  t6769 = t6754 + t6755;
  t6978 = t5516*t3187;
  t6979 = t5510*t2107;
  t6983 = t6978 + t6979;
  t7091 = -1.*t5410*t181*t341;
  t7094 = 0.103955395616*t5429*t3625;
  t7097 = t5444*t3745;
  t7108 = t7091 + t7094 + t7097;
  t7299 = -1.*t5461*t181*t341;
  t7300 = t5483*t3625;
  t7314 = 0.103955395616*t5429*t3745;
  t7320 = t7299 + t7300 + t7314;
  t7422 = -1.*t5502*t181*t341;
  t7428 = t5510*t3625;
  t7431 = t5516*t3745;
  t7432 = t7422 + t7428 + t7431;
  t7009 = -1.*t135*t5410*t341;
  t7026 = 0.103955395616*t5429*t3574;
  t7044 = t5444*t3604;
  t7045 = t7009 + t7026 + t7044;
  t7248 = -1.*t324*t5410;
  t7253 = 0.103955395616*t5429*t3726;
  t7283 = t5444*t3757;
  t7286 = t7248 + t7253 + t7283;
  t7056 = -1.*t135*t5461*t341;
  t7059 = t5483*t3574;
  t7060 = 0.103955395616*t5429*t3604;
  t7061 = t7056 + t7059 + t7060;
  t8052 = t135*t5853*t341;
  t8053 = -1.*t5890*t3574;
  t8054 = -1.*t5941*t3604;
  t8056 = t4262 + t8052 + t4264 + t8053 + t8054;
  t8075 = -1.*t324*t5853;
  t8076 = t5890*t3726;
  t8081 = t5941*t3757;
  t8083 = t8075 + t4280 + t4281 + t8076 + t8081;
  t7341 = -1.*t324*t5461;
  t7368 = t5483*t3726;
  t7377 = 0.103955395616*t5429*t3757;
  t7385 = t7341 + t7368 + t7377;
  t7069 = -1.*t5502*t135*t341;
  t7075 = t5510*t3574;
  t7077 = t5516*t3604;
  t7081 = t7069 + t7075 + t7077;
  t7445 = -1.*t5502*t324;
  t7447 = t5510*t3726;
  t7456 = t5516*t3757;
  t7459 = t7445 + t7447 + t7456;
  t7586 = -1.0000001112680001*t324*t5388*t181;
  t7588 = 0.104528*t5424*t3088;
  t7589 = -0.994522*t5424*t3202;
  t7590 = t7586 + t7588 + t7589;
  t7714 = 0.994522*t5424*t324*t181;
  t7716 = 0.103955395616*t5388*t3088;
  t7717 = -0.9890740084840001*t5388*t3202;
  t7722 = t7714 + t7716 + t7717;
  t7751 = -0.104528*t5424*t324*t181;
  t7752 = -0.010926102783999999*t5388*t3088;
  t7753 = 0.103955395616*t5388*t3202;
  t7755 = t7751 + t7752 + t7753;
  t7480 = -1.0000001112680001*t135*t324*t5388;
  t7493 = 0.104528*t5424*t2596;
  t7494 = -0.994522*t5424*t2680;
  t7495 = t7480 + t7493 + t7494;
  t7592 = 1.0000001112680001*t5388*t341;
  t7596 = 0.104528*t5424*t2028;
  t7597 = -0.994522*t5424*t2107;
  t7603 = t7592 + t7596 + t7597;
  t8148 = -1.*t7611*t341;
  t8151 = t7621*t2028;
  t8156 = t7632*t2107;
  t8158 = t8148 + t8151 + t8156;
  t7696 = -0.994522*t5424*t341;
  t7699 = 0.103955395616*t5388*t2028;
  t7700 = -0.9890740084840001*t5388*t2107;
  t7701 = t7696 + t7699 + t7700;
  t8174 = -1.*t135*t324*t7611;
  t8185 = -1.*t7621*t2596;
  t8186 = -1.*t7632*t2680;
  t8187 = t8174 + t8185 + t8186;
  t7534 = 0.994522*t5424*t135*t324;
  t7535 = 0.103955395616*t5388*t2596;
  t7544 = -0.9890740084840001*t5388*t2680;
  t7546 = t7534 + t7535 + t7544;
  t7733 = 0.104528*t5424*t341;
  t7734 = -0.010926102783999999*t5388*t2028;
  t7735 = 0.103955395616*t5388*t2107;
  t7738 = t7733 + t7734 + t7735;
  t7553 = -0.104528*t5424*t135*t324;
  t7574 = -0.010926102783999999*t5388*t2596;
  t7575 = 0.103955395616*t5388*t2680;
  t7576 = t7553 + t7574 + t7575;
  t5715 = 0.103955395616*t5429*t2252;
  t5716 = t5444*t2300;
  t5729 = t5574 + t5715 + t5716;
  t5773 = t5483*t2252;
  t5786 = 0.103955395616*t5429*t2300;
  t5789 = t5602 + t5773 + t5786;
  t8243 = -1.*t5890*t2252;
  t8245 = -1.*t5941*t2300;
  t8246 = t6320 + t4427 + t4434 + t8243 + t8245;
  t5797 = t5510*t2252;
  t5809 = t5516*t2300;
  t5822 = t5637 + t5797 + t5809;
  t8342 = t5853*t181*t341;
  t8345 = -1.*t5890*t3625;
  t8346 = -1.*t5941*t3745;
  t8351 = t4659 + t8342 + t4662 + t8345 + t8346;
  t8359 = 0. + var1[0] + t5976 + t2603 + t2622 + t5980 + t5984;
  t8361 = -1.*t135*t5853*t341;
  t8362 = t5890*t3574;
  t8363 = t5941*t3604;
  t8364 = t4691 + t8361 + t4693 + t8362 + t8363;
  t8368 = -1.*t324*t5853*t181;
  t8371 = -1.*t5890*t3088;
  t8372 = -1.*t5941*t3202;
  t8374 = 0. + t4710 + t8368 + t4711 + t4715 + t8371 + t8372;
  t8432 = -1.*t5941*t3134;
  t8433 = -1.*t5890*t3011;
  t8434 = t4793 + t4806 + t8432 + t8433;
  t8436 = t5941*t2842;
  t8437 = t5890*t2873;
  t8440 = t4876 + t4880 + t8436 + t8437;
  t8500 = -1.*t5941*t3088;
  t8501 = -1.*t5890*t2181;
  t8504 = t4987 + t4991 + t8500 + t8501;
  t8506 = t5941*t2596;
  t8508 = t5890*t3300;
  t8511 = t4963 + t4975 + t8506 + t8508;
  t8545 = t7891 + t4024 + t4030 + t7892 + t7898;
  t8552 = t5890*t2252;
  t8553 = t5941*t2300;
  t8556 = t8368 + t5034 + t5037 + t8552 + t8553;
  t8597 = t135*t324*t7611;
  t8598 = t7621*t2596;
  t8602 = t7632*t2680;
  t8603 = t8597 + t8598 + t8602;
  t8605 = -1.*t324*t7611*t181;
  t8611 = -1.*t7621*t3088;
  t8612 = -1.*t7632*t3202;
  t8613 = t8605 + t8611 + t8612;
  t7831 = -0.703234*t5966;
  t7832 = 0.073913*t6042;
  t7834 = 0.707107*t6107;
  t7836 = t7831 + t7832 + t7834;
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
  p_output1[24]=-1.*t135*var2[2] + t181*var1[2]*var2[3];
  p_output1[25]=-1.*t181*var2[2] - 1.*t135*var1[2]*var2[3];
  p_output1[26]=t135*var2[0] + t181*var2[1] + (-1.*t181*var1[0] + t135*var1[1])*var2[3];
  p_output1[27]=-1.*t135*var2[3];
  p_output1[28]=-1.*t181*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t341*var2[1] - 1.*t181*t324*var2[2] - 1.*t135*t324*var1[2]*var2[3] + (-1.*t324*var1[1] + t181*t341*var1[2])*var2[4];
  p_output1[31]=t341*var2[0] + t135*t324*var2[2] - 1.*t181*t324*var1[2]*var2[3] + (t324*var1[0] - 1.*t135*t341*var1[2])*var2[4];
  p_output1[32]=t181*t324*var2[0] - 1.*t135*t324*var2[1] + (t135*t324*var1[0] + t181*t324*var1[1])*var2[3] + (-1.*t181*t341*var1[0] + t135*t341*var1[1])*var2[4];
  p_output1[33]=-1.*t181*t324*var2[3] - 1.*t135*t341*var2[4];
  p_output1[34]=t135*t324*var2[3] - 1.*t181*t341*var2[4];
  p_output1[35]=-1.*t324*var2[4];
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
  p_output1[78]=t341*var2[1] + t181*t324*var2[2] + (0.12*t1178 - 0.4*t1245 + t135*t324*var1[2])*var2[3] + (0.12*t135*t324*t893 - 0.4*t135*t324*t955 + t324*var1[1] - 1.*t181*t341*var1[2])*var2[4] + (0.12*t1054 - 0.4*t998)*var2[5];
  p_output1[79]=-1.*t341*var2[0] - 1.*t135*t324*var2[2] + (-0.4*t1481 + 0.12*t998 + t181*t324*var1[2])*var2[3] + (0.12*t181*t324*t893 - 0.4*t181*t324*t955 - 1.*t324*var1[0] + t135*t341*var1[2])*var2[4] + (0.12*t1245 - 0.4*t1612)*var2[5];
  p_output1[80]=-1.*t181*t324*var2[0] + t135*t324*var2[1] + (-1.*t135*t324*var1[0] - 1.*t181*t324*var1[1])*var2[3] + (-0.12*t341*t893 + 0.4*t341*t955 + t181*t341*var1[0] - 1.*t135*t341*var1[1])*var2[4] + (-0.4*t324*t893 - 0.12*t324*t955)*var2[5];
  p_output1[81]=t181*t324*var2[3] + t135*t341*var2[4];
  p_output1[82]=-1.*t135*t324*var2[3] + t181*t341*var2[4];
  p_output1[83]=t324*var2[4];
  p_output1[84]=(0.994522*t2028 + 0.104528*t2107)*var2[1] + (0.994522*(t2128 - 1.*t2017*t2143) + 0.104528*t2181)*var2[2] + (0.005906*t2252 - 0.056191*t2300 + 0.994522*(t2549*t2596 + t2028*t2630) + 0.104528*(t2107*t2630 + t2549*t2680) + 0.385267*t181*t324)*var2[3] + (0.385267*t135*t341 + 0.005906*t3574 - 0.056191*t3604 + 0.994522*(t2549*t3625 + t2028*t3648 + t3088*t3674 + t3112*t3726) + 0.104528*(t2107*t3648 + t3202*t3674 + t2549*t3745 + t3112*t3757))*var2[4] + (-0.056191*t2842 + 0.005906*t2873 + 0.994522*(t2028*t2947 + t2549*t3011 + t3066*t3088 + t2107*t3112) + 0.104528*(t2107*t2947 + t2549*t3134 + t3112*t3187 + t3066*t3202))*var2[5] + (-0.056191*t2596 + 0.005906*t3300 + 0.994522*(t2181*t2549 + t3088*t3342 + t3112*t3410 + t2028*t3433) + 0.104528*(t2549*t3088 + t2028*t3112 + t3202*t3342 + t2107*t3433))*var2[13];
  p_output1[85]=(0.994522*t3187 + 0.104528*t3410)*var2[0] + t3912*var2[2] + (0.005906*t2596 - 0.056191*t2680 - 0.385267*t135*t324 + 0.994522*(t2252*t3955 + t2028*t4449) + 0.104528*(t2300*t3955 + t2107*t4449))*var2[3] + (0.385267*t181*t341 + 0.005906*t3625 - 0.056191*t3745 + 0.994522*(t3574*t3955 + t3726*t4031 + t2028*t4267 + t2596*t4284) + 0.104528*(t3604*t3955 + t3757*t4031 + t2107*t4267 + t2680*t4284))*var2[4] + (0.005906*t3011 - 0.056191*t3134 + 0.994522*(t2028*t3944 + t2873*t3955 + t2596*t3978 + t2107*t4031) + 0.104528*(t2107*t3944 + t2842*t3955 + t2680*t3978 + t3187*t4031))*var2[5] + (0.005906*t2181 - 0.056191*t3088 + 0.994522*(t3300*t3955 + t3410*t4031 + t2596*t4137 + t2028*t4149) + 0.104528*(t2596*t3955 + t2028*t4031 + t2680*t4137 + t2107*t4149))*var2[13];
  p_output1[86]=(0.994522*t3088 + 0.104528*t3202)*var2[0] + (0.994522*(-1.*t1481*t2017 + t2788) + 0.104528*t3300)*var2[1] + (0.994522*(t2596*t4684 + t2252*t4719 + t2596*t5024 + t3088*t5043) + 0.104528*(t2680*t4684 + t2300*t4719 + t2680*t5024 + t3202*t5043))*var2[3] + (0.385267*t324 + 0.005906*t3726 - 0.056191*t3757 + 0.994522*(t2596*t4665 + t3625*t4684 + t3088*t4694 + t3574*t4719) + 0.104528*(t2680*t4665 + t3745*t4684 + t3202*t4694 + t3604*t4719))*var2[4] + (0.005906*t2107 - 0.056191*t3187 + 0.994522*(t3011*t4684 + t2873*t4719 + t2596*t4811 + t3088*t4888) + 0.104528*(t3134*t4684 + t2842*t4719 + t2680*t4811 + t3202*t4888))*var2[5] + (-0.056191*t2028 + 0.005906*t3410 + 0.994522*(t2181*t4684 + t3300*t4719 + t3088*t4977 + t2596*t4993) + 0.104528*(t3088*t4684 + t2596*t4719 + t3202*t4977 + t2680*t4993))*var2[13];
  p_output1[87]=(0.994522*t2252 + 0.104528*t2300)*var2[3] + (0.994522*t3574 + 0.104528*t3604)*var2[4] + (0.104528*t2842 + 0.994522*t2873)*var2[5] + (0.104528*t2596 + 0.994522*t3300)*var2[13];
  p_output1[88]=t3912*var2[3] + (0.994522*t3625 + 0.104528*t3745)*var2[4] + (0.994522*t3011 + 0.104528*t3134)*var2[5] + (0.994522*t2181 + 0.104528*t3088)*var2[13];
  p_output1[89]=(0.994522*t3726 + 0.104528*t3757)*var2[4] + (0.994522*t2107 + 0.104528*t3187)*var2[5] + (0.104528*t2028 + 0.994522*t3410)*var2[13];
  p_output1[90]=(-0.703234*t5452 + 0.073913*t5498 + 0.707107*t5552)*var2[1] + (-0.703234*(-0.103955395616*t3088*t5429 - 1.*t3202*t5444 + t5574) + 0.073913*(-0.103955395616*t3202*t5429 - 1.*t3088*t5483 + t5602) + 0.707107*(-1.*t3088*t5510 - 1.*t3202*t5516 + t5637))*var2[2] + (-0.151261*t5729 + 0.249652*t5789 - 0.176528*t5822 - 0.703234*(t5947*t5966 + t5452*t5988) + 0.073913*(t5498*t5988 + t5947*t6042) + 0.707107*(t5552*t5988 + t5947*t6107))*var2[3] + (-0.151261*t7045 + 0.249652*t7061 - 0.176528*t7081 - 0.703234*(t5947*t7108 + t5452*t7158 + t6437*t7224 + t6334*t7286) + 0.073913*(t5498*t7158 + t6286*t7224 + t5947*t7320 + t6334*t7385) + 0.707107*(t5552*t7158 + t6657*t7224 + t5947*t7432 + t6334*t7459))*var2[4] + (0.249652*t6725 - 0.151261*t6750 - 0.176528*t6769 + 0.073913*(t5947*t6783 + t5498*t6800 + t6286*t6825 + t6334*t6840) - 0.703234*(t5452*t6800 + t6437*t6825 + t5947*t6874 + t6334*t6903) + 0.707107*(t5552*t6800 + t6657*t6825 + t5947*t6973 + t6334*t6983))*var2[5] + (0.249652*t6139 - 0.151261*t6152 - 0.176528*t6177 + 0.073913*(t5947*t6195 + t5498*t6233 + t6254*t6286 + t6315*t6334) - 0.703234*(t5452*t6233 + t5947*t6409 + t6254*t6437 + t6334*t6494) + 0.707107*(t5552*t6233 + t5947*t6544 + t6334*t6600 + t6254*t6657))*var2[13] + (-0.176528*t7495 - 0.151261*t7546 + 0.249652*t7576 + 0.707107*(t5947*t7590 + t6334*t7603 + t6657*t7636 + t5552*t7664) - 0.703234*(t6437*t7636 + t5452*t7664 + t6334*t7701 + t5947*t7722) + 0.073913*(t6286*t7636 + t5498*t7664 + t6334*t7738 + t5947*t7755))*var2[14];
  p_output1[91]=(-0.703234*(t341*t5410 - 0.103955395616*t2028*t5429 - 1.*t2107*t5444) + 0.073913*(-0.103955395616*t2107*t5429 + t341*t5461 - 1.*t2028*t5483) + 0.707107*(t341*t5502 - 1.*t2028*t5510 - 1.*t2107*t5516))*var2[0] + t7836*var2[2] + (-0.151261*t5966 + 0.249652*t6042 - 0.176528*t6107 - 0.703234*(t5729*t7855 + t5452*t8246) + 0.073913*(t5789*t7855 + t5498*t8246) + 0.707107*(t5822*t7855 + t5552*t8246))*var2[3] + (-0.151261*t7108 + 0.249652*t7320 - 0.176528*t7432 - 0.703234*(t7045*t7855 + t7286*t7911 + t5452*t8056 + t5966*t8083) + 0.073913*(t7061*t7855 + t7385*t7911 + t5498*t8056 + t6042*t8083) + 0.707107*(t7081*t7855 + t7459*t7911 + t5552*t8056 + t6107*t8083))*var2[4] + (0.249652*t6783 - 0.151261*t6874 - 0.176528*t6973 - 0.703234*(t6750*t7855 + t6903*t7911 + t5452*t7987 + t5966*t8000) + 0.073913*(t6725*t7855 + t6840*t7911 + t5498*t7987 + t6042*t8000) + 0.707107*(t6769*t7855 + t6983*t7911 + t5552*t7987 + t6107*t8000))*var2[5] + (0.249652*t6195 - 0.151261*t6409 - 0.176528*t6544 + 0.073913*(t6139*t7855 + t5498*t7865 + t6042*t7873 + t6315*t7911) - 0.703234*(t6152*t7855 + t5452*t7865 + t5966*t7873 + t6494*t7911) + 0.707107*(t6177*t7855 + t5552*t7865 + t6107*t7873 + t6600*t7911))*var2[13] + (-0.176528*t7590 - 0.151261*t7722 + 0.249652*t7755 - 0.703234*(t7546*t7855 + t7701*t7911 + t5966*t8158 + t5452*t8187) + 0.073913*(t7576*t7855 + t7738*t7911 + t6042*t8158 + t5498*t8187) + 0.707107*(t7495*t7855 + t7603*t7911 + t6107*t8158 + t5552*t8187))*var2[14];
  p_output1[92]=(0.073913*t6286 - 0.703234*t6437 + 0.707107*t6657)*var2[0] + (-0.703234*(-1.*t135*t324*t5410 - 0.103955395616*t2596*t5429 - 1.*t2680*t5444) + 0.073913*(-0.103955395616*t2680*t5429 - 1.*t135*t324*t5461 - 1.*t2596*t5483) + 0.707107*(-1.*t135*t324*t5502 - 1.*t2596*t5510 - 1.*t2680*t5516))*var2[1] + (0.073913*(t6042*t8359 + t5789*t8374 + t6042*t8545 + t6286*t8556) - 0.703234*(t5966*t8359 + t5729*t8374 + t5966*t8545 + t6437*t8556) + 0.707107*(t6107*t8359 + t5822*t8374 + t6107*t8545 + t6657*t8556))*var2[3] + (-0.151261*t7286 + 0.249652*t7385 - 0.176528*t7459 - 0.703234*(t5966*t8351 + t7108*t8359 + t6437*t8364 + t7045*t8374) + 0.073913*(t6042*t8351 + t7320*t8359 + t6286*t8364 + t7061*t8374) + 0.707107*(t6107*t8351 + t7432*t8359 + t6657*t8364 + t7081*t8374))*var2[4] + (0.249652*t6840 - 0.151261*t6903 - 0.176528*t6983 + 0.073913*(t6783*t8359 + t6725*t8374 + t6042*t8434 + t6286*t8440) - 0.703234*(t6874*t8359 + t6750*t8374 + t5966*t8434 + t6437*t8440) + 0.707107*(t6973*t8359 + t6769*t8374 + t6107*t8434 + t6657*t8440))*var2[5] + (0.249652*t6315 - 0.151261*t6494 - 0.176528*t6600 + 0.073913*(t6195*t8359 + t6139*t8374 + t6042*t8504 + t6286*t8511) - 0.703234*(t6409*t8359 + t6152*t8374 + t5966*t8504 + t6437*t8511) + 0.707107*(t6544*t8359 + t6177*t8374 + t6107*t8504 + t6657*t8511))*var2[13] + (-0.176528*t7603 - 0.151261*t7701 + 0.249652*t7738 - 0.703234*(t7722*t8359 + t7546*t8374 + t6437*t8603 + t5966*t8613) + 0.073913*(t7755*t8359 + t7576*t8374 + t6286*t8603 + t6042*t8613) + 0.707107*(t7590*t8359 + t7495*t8374 + t6657*t8603 + t6107*t8613))*var2[14];
  p_output1[93]=(-0.703234*t5729 + 0.073913*t5789 + 0.707107*t5822)*var2[3] + (-0.703234*t7045 + 0.073913*t7061 + 0.707107*t7081)*var2[4] + (0.073913*t6725 - 0.703234*t6750 + 0.707107*t6769)*var2[5] + (0.073913*t6139 - 0.703234*t6152 + 0.707107*t6177)*var2[13] + (0.707107*t7495 - 0.703234*t7546 + 0.073913*t7576)*var2[14];
  p_output1[94]=t7836*var2[3] + (-0.703234*t7108 + 0.073913*t7320 + 0.707107*t7432)*var2[4] + (0.073913*t6783 - 0.703234*t6874 + 0.707107*t6973)*var2[5] + (0.073913*t6195 - 0.703234*t6409 + 0.707107*t6544)*var2[13] + (0.707107*t7590 - 0.703234*t7722 + 0.073913*t7755)*var2[14];
  p_output1[95]=(-0.703234*t7286 + 0.073913*t7385 + 0.707107*t7459)*var2[4] + (0.073913*t6840 - 0.703234*t6903 + 0.707107*t6983)*var2[5] + (0.073913*t6315 - 0.703234*t6494 + 0.707107*t6600)*var2[13] + (0.707107*t7603 - 0.703234*t7701 + 0.073913*t7738)*var2[14];
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



void dJs_left_shoulder_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

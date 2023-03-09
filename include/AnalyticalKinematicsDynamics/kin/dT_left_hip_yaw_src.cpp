/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_left_hip_yaw_src.h"

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
  double t57;
  double t951;
  double t1163;
  double t986;
  double t1033;
  double t1239;
  double t1381;
  double t681;
  double t2110;
  double t1417;
  double t1432;
  double t2220;
  double t2266;
  double t2293;
  double t2107;
  double t2117;
  double t2181;
  double t1570;
  double t1668;
  double t2497;
  double t2507;
  double t2512;
  double t518;
  double t538;
  double t620;
  double t628;
  double t661;
  double t2752;
  double t2768;
  double t2775;
  double t2708;
  double t2717;
  double t2718;
  double t2310;
  double t2432;
  double t2438;
  double t2492;
  double t3487;
  double t3495;
  double t3501;
  double t3430;
  double t3441;
  double t3449;
  double t2738;
  double t3010;
  double t3087;
  double t3573;
  double t3578;
  double t3589;
  double t3612;
  double t3993;
  double t4003;
  double t4011;
  double t4024;
  double t4029;
  double t4055;
  double t2587;
  double t2589;
  double t2626;
  double t2517;
  double t2525;
  double t4303;
  double t4317;
  double t2204;
  double t2296;
  double t2303;
  double t4350;
  double t4365;
  double t2805;
  double t2837;
  double t2905;
  double t2950;
  double t2962;
  double t1153;
  double t1335;
  double t1360;
  double t1500;
  double t1525;
  double t1530;
  double t4538;
  double t4545;
  double t4587;
  double t4590;
  double t3650;
  double t3661;
  double t3636;
  double t3637;
  double t3481;
  double t3516;
  double t3519;
  double t4429;
  double t3237;
  double t3241;
  double t3249;
  double t3290;
  double t3297;
  double t3377;
  double t3819;
  double t3835;
  double t3899;
  double t3905;
  double t3928;
  double t4102;
  double t4104;
  double t4105;
  double t4169;
  double t4179;
  double t4183;
  double t4187;
  double t4189;
  double t4218;
  double t4292;
  double t4322;
  double t4346;
  double t4372;
  double t4380;
  double t4381;
  double t4437;
  double t4438;
  double t4463;
  double t4490;
  double t4492;
  double t4532;
  double t4536;
  double t4551;
  double t4570;
  double t4578;
  double t4585;
  double t4599;
  double t4604;
  double t4620;
  double t4622;
  double t4634;
  double t4636;
  double t4670;
  double t4675;
  double t4677;
  double t4684;
  double t4717;
  double t4725;
  double t4769;
  double t4770;
  double t4809;
  double t4822;
  double t4823;
  double t4830;
  double t4864;
  double t4873;
  double t4877;
  double t4898;
  double t4899;
  double t4922;
  double t4968;
  double t4995;
  double t5010;
  double t5027;
  double t5031;
  double t5048;
  double t5073;
  double t5076;
  double t5077;
  double t5087;
  double t5098;
  double t5110;
  double t5111;
  double t5145;
  double t5157;
  double t5162;
  double t5168;
  double t5207;
  double t5209;
  double t5214;
  double t5216;
  double t5236;
  double t5237;
  double t5255;
  double t5256;
  double t5284;
  double t5288;
  double t5297;
  double t5299;
  double t5328;
  double t5335;
  double t5343;
  double t5361;
  double t5363;
  double t5385;
  double t5397;
  double t5404;
  double t5409;
  double t5421;
  double t5422;
  double t5428;
  double t5454;
  double t5459;
  double t5470;
  double t5473;
  double t5477;
  double t5490;
  double t5495;
  double t5516;
  double t5538;
  double t5539;
  double t5540;
  double t5545;
  double t5560;
  double t5563;
  double t5566;
  double t5569;
  double t6161;
  double t6172;
  double t6177;
  double t6179;
  double t6199;
  double t6200;
  double t6201;
  double t6204;
  double t6084;
  double t6090;
  double t6091;
  double t6093;
  double t6102;
  double t6115;
  double t6293;
  double t6297;
  double t6319;
  double t6325;
  double t6478;
  double t6499;
  double t6502;
  double t6525;
  double t6526;
  double t6528;
  double t6542;
  double t6549;
  double t6556;
  t57 = Cos(var1[3]);
  t951 = Cos(var1[4]);
  t1163 = Cos(var1[5]);
  t986 = Cos(var1[6]);
  t1033 = Sin(var1[5]);
  t1239 = Sin(var1[6]);
  t1381 = Sin(var1[7]);
  t681 = Sin(var1[4]);
  t2110 = Sin(var1[3]);
  t1417 = -0.930418*t1381;
  t1432 = 0. + t1417;
  t2220 = -1.*t1163*t2110;
  t2266 = t57*t681*t1033;
  t2293 = t2220 + t2266;
  t2107 = t57*t1163*t681;
  t2117 = t2110*t1033;
  t2181 = t2107 + t2117;
  t1570 = -0.366501*t1381;
  t1668 = 0. + t1570;
  t2497 = t1163*t2110;
  t2507 = -1.*t57*t681*t1033;
  t2512 = t2497 + t2507;
  t518 = Cos(var1[7]);
  t538 = -1.*t518;
  t620 = 1. + t538;
  t628 = -1.000000637725*t620;
  t661 = 1. + t628;
  t2752 = -1.*t1163*t2110*t681;
  t2768 = t57*t1033;
  t2775 = t2752 + t2768;
  t2708 = -1.*t57*t1163;
  t2717 = -1.*t2110*t681*t1033;
  t2718 = t2708 + t2717;
  t2310 = t986*t2293;
  t2432 = -1.*t2181*t1239;
  t2438 = t2310 + t2432;
  t2492 = t986*t2181;
  t3487 = t57*t1163;
  t3495 = t2110*t681*t1033;
  t3501 = t3487 + t3495;
  t3430 = t1163*t2110*t681;
  t3441 = -1.*t57*t1033;
  t3449 = t3430 + t3441;
  t2738 = t986*t2718;
  t3010 = t2293*t1239;
  t3087 = t2492 + t3010;
  t3573 = t986*t3501;
  t3578 = -1.*t3449*t1239;
  t3589 = t3573 + t3578;
  t3612 = t986*t3449;
  t3993 = t951*t986*t1033;
  t4003 = -1.*t951*t1163*t1239;
  t4011 = t3993 + t4003;
  t4024 = t951*t1163*t986;
  t4029 = t951*t1033*t1239;
  t4055 = t4024 + t4029;
  t2587 = t986*t2512;
  t2589 = t2181*t1239;
  t2626 = t2587 + t2589;
  t2517 = -1.*t2512*t1239;
  t2525 = t2492 + t2517;
  t4303 = -0.8656776547239999*t620;
  t4317 = 1. + t4303;
  t2204 = -1.*t986*t2181;
  t2296 = -1.*t2293*t1239;
  t2303 = t2204 + t2296;
  t4350 = -0.134322983001*t620;
  t4365 = 1. + t4350;
  t2805 = -1.*t2775*t1239;
  t2837 = t2738 + t2805;
  t2905 = t986*t2775;
  t2950 = t2718*t1239;
  t2962 = t2905 + t2950;
  t1153 = t57*t951*t986*t1033;
  t1335 = -1.*t57*t951*t1163*t1239;
  t1360 = t1153 + t1335;
  t1500 = t57*t951*t1163*t986;
  t1525 = t57*t951*t1033*t1239;
  t1530 = t1500 + t1525;
  t4538 = 0.366501*t1381;
  t4545 = 0. + t4538;
  t4587 = 0.930418*t1381;
  t4590 = 0. + t4587;
  t3650 = t3449*t1239;
  t3661 = t2738 + t3650;
  t3636 = -1.*t2718*t1239;
  t3637 = t3612 + t3636;
  t3481 = -1.*t986*t3449;
  t3516 = -1.*t3501*t1239;
  t3519 = t3481 + t3516;
  t4429 = -0.340999127418*t620*t2438;
  t3237 = t951*t986*t2110*t1033;
  t3241 = -1.*t951*t1163*t2110*t1239;
  t3249 = t3237 + t3241;
  t3290 = t951*t1163*t986*t2110;
  t3297 = t951*t2110*t1033*t1239;
  t3377 = t3290 + t3297;
  t3819 = t3501*t1239;
  t3835 = t3612 + t3819;
  t3899 = -1.*t951*t1163*t986;
  t3905 = -1.*t951*t1033*t1239;
  t3928 = t3899 + t3905;
  t4102 = -1.*t951*t986*t1033;
  t4104 = t951*t1163*t1239;
  t4105 = t4102 + t4104;
  t4169 = -1.*t986*t681*t1033;
  t4179 = t1163*t681*t1239;
  t4183 = t4169 + t4179;
  t4187 = -1.*t1163*t986*t681;
  t4189 = -1.*t681*t1033*t1239;
  t4218 = t4187 + t4189;
  t4292 = -0.340999127418*t620*t2626;
  t4322 = t4317*t2525;
  t4346 = t4292 + t4322;
  t4372 = t4365*t2626;
  t4380 = -0.340999127418*t620*t2525;
  t4381 = t4372 + t4380;
  t4437 = t4317*t2303;
  t4438 = t4429 + t4437;
  t4463 = t4365*t2438;
  t4490 = -0.340999127418*t620*t2303;
  t4492 = t4463 + t4490;
  t4532 = -0.340999127418*t620*t2837;
  t4536 = t4365*t2962;
  t4551 = -1.*t951*t2110*t4545;
  t4570 = t4532 + t4536 + t4551;
  t4578 = t4317*t2837;
  t4585 = -0.340999127418*t620*t2962;
  t4599 = -1.*t951*t2110*t4590;
  t4604 = t4578 + t4585 + t4599;
  t4620 = -0.340999127418*t620*t1360;
  t4622 = t4365*t1530;
  t4634 = -1.*t57*t681*t4545;
  t4636 = t4620 + t4622 + t4634;
  t4670 = t4317*t1360;
  t4675 = -0.340999127418*t620*t1530;
  t4677 = -1.*t57*t681*t4590;
  t4684 = t4670 + t4675 + t4677;
  t4717 = 0.930418*t57*t951*t518;
  t4725 = -0.8656776547239999*t2438*t1381;
  t4769 = -0.340999127418*t3087*t1381;
  t4770 = t4717 + t4725 + t4769;
  t4809 = 0.366501*t57*t951*t518;
  t4822 = -0.340999127418*t2438*t1381;
  t4823 = -0.134322983001*t3087*t1381;
  t4830 = t4809 + t4822 + t4823;
  t4864 = -0.340999127418*t620*t3661;
  t4873 = t4317*t3637;
  t4877 = t4864 + t4873;
  t4898 = t4365*t3661;
  t4899 = -0.340999127418*t620*t3637;
  t4922 = t4898 + t4899;
  t4968 = -0.340999127418*t620*t3589;
  t4995 = t4317*t3519;
  t5010 = t4968 + t4995;
  t5027 = t4365*t3589;
  t5031 = -0.340999127418*t620*t3519;
  t5048 = t5027 + t5031;
  t5073 = t4365*t3087;
  t5076 = t57*t951*t4545;
  t5077 = t4429 + t5073 + t5076;
  t5087 = t4317*t2438;
  t5098 = -0.340999127418*t620*t3087;
  t5110 = t57*t951*t4590;
  t5111 = t5087 + t5098 + t5110;
  t5145 = -0.340999127418*t620*t3249;
  t5157 = t4365*t3377;
  t5162 = -1.*t2110*t681*t4545;
  t5168 = t5145 + t5157 + t5162;
  t5207 = t4317*t3249;
  t5209 = -0.340999127418*t620*t3377;
  t5214 = -1.*t2110*t681*t4590;
  t5216 = t5207 + t5209 + t5214;
  t5236 = 0.930418*t951*t518*t2110;
  t5237 = -0.8656776547239999*t3589*t1381;
  t5255 = -0.340999127418*t3835*t1381;
  t5256 = t5236 + t5237 + t5255;
  t5284 = 0.366501*t951*t518*t2110;
  t5288 = -0.340999127418*t3589*t1381;
  t5297 = -0.134322983001*t3835*t1381;
  t5299 = t5284 + t5288 + t5297;
  t5328 = -0.340999127418*t620*t4011;
  t5335 = t4317*t3928;
  t5343 = t5328 + t5335;
  t5361 = t4365*t4011;
  t5363 = -0.340999127418*t620*t3928;
  t5385 = t5361 + t5363;
  t5397 = -0.340999127418*t620*t4105;
  t5404 = t4317*t4055;
  t5409 = t5397 + t5404;
  t5421 = t4365*t4105;
  t5422 = -0.340999127418*t620*t4055;
  t5428 = t5421 + t5422;
  t5454 = -0.340999127418*t620*t4183;
  t5459 = t4365*t4218;
  t5470 = -1.*t951*t4545;
  t5473 = t5454 + t5459 + t5470;
  t5477 = t4317*t4183;
  t5490 = -0.340999127418*t620*t4218;
  t5495 = -1.*t951*t4590;
  t5516 = t5477 + t5490 + t5495;
  t5538 = -0.930418*t518*t681;
  t5539 = -0.8656776547239999*t4011*t1381;
  t5540 = -0.340999127418*t4055*t1381;
  t5545 = t5538 + t5539 + t5540;
  t5560 = -0.366501*t518*t681;
  t5563 = -0.340999127418*t4011*t1381;
  t5566 = -0.134322983001*t4055*t1381;
  t5569 = t5560 + t5563 + t5566;
  t6161 = -3.2909349868922137e-7*var1[7];
  t6172 = 0.03103092645718495*t620;
  t6177 = -0.045000372235*t4545;
  t6179 = t6161 + t6172 + t6177;
  t6199 = 1.296332362046933e-7*var1[7];
  t6200 = 0.07877668146182712*t620;
  t6201 = -0.045000372235*t4590;
  t6204 = t6199 + t6200 + t6201;
  t6084 = -1.*t986;
  t6090 = 1. + t6084;
  t6091 = 0.091*t6090;
  t6093 = 0. + t6091;
  t6102 = 0.091*t1239;
  t6115 = 0. + t6102;
  t6293 = -0.04500040093286238*t620;
  t6297 = 0.07877663122399998*t1432;
  t6319 = 0.031030906668*t1668;
  t6325 = 0. + t6293 + t6297 + t6319;
  t6478 = -0.0846680539949003*t518;
  t6499 = -0.04500040093286238*t1381;
  t6502 = t6478 + t6499;
  t6525 = -0.016492681424499736*t518;
  t6526 = 0.03103092645718495*t1381;
  t6528 = -3.2909349868922137e-7 + t6525 + t6526;
  t6542 = -0.04186915633414423*t518;
  t6549 = 0.07877668146182712*t1381;
  t6556 = 1.296332362046933e-7 + t6542 + t6549;
  p_output1[0]=(-1.*t1432*t2837 - 1.*t1668*t2962 + t2110*t661*t951)*var2[3] + (-1.*t1360*t1432 - 1.*t1530*t1668 + t57*t661*t681)*var2[4] + (-1.*t1432*t2525 - 1.*t1668*t2626)*var2[5] + (-1.*t1432*t2303 - 1.*t1668*t2438)*var2[6] + (0.930418*t2438*t518 + 0.366501*t3087*t518 + 1.000000637725*t1381*t57*t951)*var2[7];
  p_output1[1]=(-1.*t1432*t2438 - 1.*t1668*t3087 - 1.*t57*t661*t951)*var2[3] + (-1.*t1432*t3249 - 1.*t1668*t3377 + t2110*t661*t681)*var2[4] + (-1.*t1432*t3637 - 1.*t1668*t3661)*var2[5] + (-1.*t1432*t3519 - 1.*t1668*t3589)*var2[6] + (0.930418*t3589*t518 + 0.366501*t3835*t518 + 1.000000637725*t1381*t2110*t951)*var2[7];
  p_output1[2]=(-1.*t1432*t4183 - 1.*t1668*t4218 + t661*t951)*var2[4] + (-1.*t1432*t4055 - 1.*t1668*t4105)*var2[5] + (-1.*t1432*t3928 - 1.*t1668*t4011)*var2[6] + (0.930418*t4011*t518 + 0.366501*t4055*t518 - 1.000000637725*t1381*t681)*var2[7];
  p_output1[3]=0;
  p_output1[4]=(0.366501*t4570 + 0.930418*t4604)*var2[3] + (0.366501*t4636 + 0.930418*t4684)*var2[4] + (0.930418*t4346 + 0.366501*t4381)*var2[5] + (0.930418*t4438 + 0.366501*t4492)*var2[6] + (0.930418*t4770 + 0.366501*t4830)*var2[7];
  p_output1[5]=(0.366501*t5077 + 0.930418*t5111)*var2[3] + (0.366501*t5168 + 0.930418*t5216)*var2[4] + (0.930418*t4877 + 0.366501*t4922)*var2[5] + (0.930418*t5010 + 0.366501*t5048)*var2[6] + (0.930418*t5256 + 0.366501*t5299)*var2[7];
  p_output1[6]=(0.366501*t5473 + 0.930418*t5516)*var2[4] + (0.930418*t5409 + 0.366501*t5428)*var2[5] + (0.930418*t5343 + 0.366501*t5385)*var2[6] + (0.930418*t5545 + 0.366501*t5569)*var2[7];
  p_output1[7]=0;
  p_output1[8]=(-0.930418*t4570 + 0.366501*t4604)*var2[3] + (-0.930418*t4636 + 0.366501*t4684)*var2[4] + (0.366501*t4346 - 0.930418*t4381)*var2[5] + (0.366501*t4438 - 0.930418*t4492)*var2[6] + (0.366501*t4770 - 0.930418*t4830)*var2[7];
  p_output1[9]=(-0.930418*t5077 + 0.366501*t5111)*var2[3] + (-0.930418*t5168 + 0.366501*t5216)*var2[4] + (0.366501*t4877 - 0.930418*t4922)*var2[5] + (0.366501*t5010 - 0.930418*t5048)*var2[6] + (0.366501*t5256 - 0.930418*t5299)*var2[7];
  p_output1[10]=(-0.930418*t5473 + 0.366501*t5516)*var2[4] + (0.366501*t5409 - 0.930418*t5428)*var2[5] + (0.366501*t5343 - 0.930418*t5385)*var2[6] + (0.366501*t5545 - 0.930418*t5569)*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.086806*t4570 + 0.123098*t4604 + t2718*t6093 + t2775*t6115 + t2962*t6179 + t2837*t6204 - 1.*t2110*t6325*t951 - 0.04501*(t1432*t2837 + t1668*t2962 - 1.*t2110*t661*t951))*var2[3] + (-0.086806*t4636 + 0.123098*t4684 + t1530*t6179 + t1360*t6204 - 1.*t57*t6325*t681 - 0.04501*(t1360*t1432 + t1530*t1668 - 1.*t57*t661*t681) + t1033*t57*t6093*t951 + t1163*t57*t6115*t951)*var2[4] + (-0.04501*(t1432*t2525 + t1668*t2626) + 0.123098*t4346 - 0.086806*t4381 + t2181*t6093 + t2512*t6115 + t2626*t6179 + t2525*t6204)*var2[5] + (0.091*t1239*t2293 - 0.04501*(t1432*t2303 + t1668*t2438) + 0.123098*t4438 - 0.086806*t4492 + t2438*t6179 + t2303*t6204 + 0.091*t2181*t986)*var2[6] + (0.123098*t4770 - 0.086806*t4830 + t3087*t6528 + t2438*t6556 + t57*t6502*t951 - 0.04501*(-0.930418*t2438*t518 - 0.366501*t3087*t518 - 1.000000637725*t1381*t57*t951))*var2[7];
  p_output1[13]=var2[1] + (-0.086806*t5077 + 0.123098*t5111 + t2293*t6093 + t2181*t6115 + t3087*t6179 + t2438*t6204 + t57*t6325*t951 - 0.04501*(t1432*t2438 + t1668*t3087 + t57*t661*t951))*var2[3] + (-0.086806*t5168 + 0.123098*t5216 + t3377*t6179 + t3249*t6204 - 1.*t2110*t6325*t681 - 0.04501*(t1432*t3249 + t1668*t3377 - 1.*t2110*t661*t681) + t1033*t2110*t6093*t951 + t1163*t2110*t6115*t951)*var2[4] + (-0.04501*(t1432*t3637 + t1668*t3661) + 0.123098*t4877 - 0.086806*t4922 + t3449*t6093 + t2718*t6115 + t3661*t6179 + t3637*t6204)*var2[5] + (0.091*t1239*t3501 - 0.04501*(t1432*t3519 + t1668*t3589) + 0.123098*t5010 - 0.086806*t5048 + t3589*t6179 + t3519*t6204 + 0.091*t3449*t986)*var2[6] + (0.123098*t5256 - 0.086806*t5299 + t3835*t6528 + t3589*t6556 + t2110*t6502*t951 - 0.04501*(-0.930418*t3589*t518 - 0.366501*t3835*t518 - 1.000000637725*t1381*t2110*t951))*var2[7];
  p_output1[14]=var2[2] + (-0.086806*t5473 + 0.123098*t5516 + t4218*t6179 + t4183*t6204 - 1.*t1033*t6093*t681 - 1.*t1163*t6115*t681 - 1.*t6325*t951 - 0.04501*(t1432*t4183 + t1668*t4218 - 1.*t661*t951))*var2[4] + (-0.04501*(t1432*t4055 + t1668*t4105) + 0.123098*t5409 - 0.086806*t5428 + t4105*t6179 + t4055*t6204 + t1163*t6093*t951 - 1.*t1033*t6115*t951)*var2[5] + (-0.04501*(t1432*t3928 + t1668*t4011) + 0.123098*t5343 - 0.086806*t5385 + t4011*t6179 + t3928*t6204 + 0.091*t1033*t1239*t951 + 0.091*t1163*t951*t986)*var2[6] + (0.123098*t5545 - 0.086806*t5569 + t4055*t6528 + t4011*t6556 - 1.*t6502*t681 - 0.04501*(-0.930418*t4011*t518 - 0.366501*t4055*t518 + 1.000000637725*t1381*t681))*var2[7];
  p_output1[15]=0;
}



void dT_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

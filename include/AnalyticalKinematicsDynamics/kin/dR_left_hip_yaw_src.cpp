/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_left_hip_yaw_src.h"

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
  double t133;
  double t1513;
  double t1711;
  double t1551;
  double t1589;
  double t1778;
  double t2046;
  double t1429;
  double t2976;
  double t2133;
  double t2136;
  double t3065;
  double t3110;
  double t3125;
  double t2975;
  double t3039;
  double t3045;
  double t2555;
  double t2729;
  double t3409;
  double t3418;
  double t3432;
  double t377;
  double t954;
  double t1114;
  double t1274;
  double t1427;
  double t3896;
  double t3964;
  double t3993;
  double t3866;
  double t3876;
  double t3890;
  double t3229;
  double t3251;
  double t3252;
  double t3399;
  double t4495;
  double t4500;
  double t4503;
  double t4457;
  double t4463;
  double t4479;
  double t3895;
  double t4227;
  double t4228;
  double t4576;
  double t4587;
  double t4606;
  double t4649;
  double t4877;
  double t4879;
  double t4891;
  double t4938;
  double t4943;
  double t4968;
  double t3647;
  double t3669;
  double t3765;
  double t3496;
  double t3535;
  double t5228;
  double t5231;
  double t3052;
  double t3128;
  double t3216;
  double t5243;
  double t5255;
  double t4007;
  double t4023;
  double t4049;
  double t4104;
  double t4108;
  double t1615;
  double t1810;
  double t1908;
  double t2219;
  double t2246;
  double t2540;
  double t5404;
  double t5409;
  double t5436;
  double t5446;
  double t4680;
  double t4684;
  double t4660;
  double t4670;
  double t4492;
  double t4532;
  double t4536;
  double t5302;
  double t4380;
  double t4381;
  double t4390;
  double t4409;
  double t4416;
  double t4417;
  double t4770;
  double t4771;
  double t4854;
  double t4858;
  double t4864;
  double t5027;
  double t5031;
  double t5046;
  double t5068;
  double t5073;
  double t5076;
  double t5098;
  double t5110;
  double t5121;
  double t5216;
  double t5235;
  double t5236;
  double t5256;
  double t5260;
  double t5288;
  double t5307;
  double t5328;
  double t5343;
  double t5344;
  double t5361;
  double t5388;
  double t5396;
  double t5412;
  double t5421;
  double t5428;
  double t5434;
  double t5454;
  double t5459;
  double t5477;
  double t5481;
  double t5485;
  double t5488;
  double t5492;
  double t5515;
  double t5517;
  double t5523;
  double t5538;
  double t5539;
  double t5540;
  double t5545;
  double t5560;
  double t5563;
  double t5566;
  double t5569;
  double t5594;
  double t5597;
  double t5599;
  double t5612;
  double t5615;
  double t5623;
  double t5641;
  double t5643;
  double t5649;
  double t5672;
  double t5688;
  double t5695;
  double t5711;
  double t5712;
  double t5715;
  double t5729;
  double t5730;
  double t5739;
  double t5740;
  double t5757;
  double t5763;
  double t5766;
  double t5768;
  double t5771;
  double t5772;
  double t5782;
  double t5783;
  double t5815;
  double t5817;
  double t5818;
  double t5820;
  double t5830;
  double t5835;
  double t5838;
  double t5839;
  double t5883;
  double t5892;
  double t5896;
  double t5912;
  double t5940;
  double t5951;
  double t5969;
  double t5978;
  double t5979;
  double t6006;
  double t6011;
  double t6038;
  double t6076;
  double t6083;
  double t6091;
  double t6101;
  double t6117;
  double t6119;
  double t6121;
  double t6127;
  double t6149;
  double t6157;
  double t6160;
  double t6161;
  double t6177;
  double t6179;
  double t6192;
  double t6199;
  t133 = Cos(var1[3]);
  t1513 = Cos(var1[4]);
  t1711 = Cos(var1[5]);
  t1551 = Cos(var1[6]);
  t1589 = Sin(var1[5]);
  t1778 = Sin(var1[6]);
  t2046 = Sin(var1[7]);
  t1429 = Sin(var1[4]);
  t2976 = Sin(var1[3]);
  t2133 = -0.930418*t2046;
  t2136 = 0. + t2133;
  t3065 = -1.*t1711*t2976;
  t3110 = t133*t1429*t1589;
  t3125 = t3065 + t3110;
  t2975 = t133*t1711*t1429;
  t3039 = t2976*t1589;
  t3045 = t2975 + t3039;
  t2555 = -0.366501*t2046;
  t2729 = 0. + t2555;
  t3409 = t1711*t2976;
  t3418 = -1.*t133*t1429*t1589;
  t3432 = t3409 + t3418;
  t377 = Cos(var1[7]);
  t954 = -1.*t377;
  t1114 = 1. + t954;
  t1274 = -1.000000637725*t1114;
  t1427 = 1. + t1274;
  t3896 = -1.*t1711*t2976*t1429;
  t3964 = t133*t1589;
  t3993 = t3896 + t3964;
  t3866 = -1.*t133*t1711;
  t3876 = -1.*t2976*t1429*t1589;
  t3890 = t3866 + t3876;
  t3229 = t1551*t3125;
  t3251 = -1.*t3045*t1778;
  t3252 = t3229 + t3251;
  t3399 = t1551*t3045;
  t4495 = t133*t1711;
  t4500 = t2976*t1429*t1589;
  t4503 = t4495 + t4500;
  t4457 = t1711*t2976*t1429;
  t4463 = -1.*t133*t1589;
  t4479 = t4457 + t4463;
  t3895 = t1551*t3890;
  t4227 = t3125*t1778;
  t4228 = t3399 + t4227;
  t4576 = t1551*t4503;
  t4587 = -1.*t4479*t1778;
  t4606 = t4576 + t4587;
  t4649 = t1551*t4479;
  t4877 = t1513*t1551*t1589;
  t4879 = -1.*t1513*t1711*t1778;
  t4891 = t4877 + t4879;
  t4938 = t1513*t1711*t1551;
  t4943 = t1513*t1589*t1778;
  t4968 = t4938 + t4943;
  t3647 = t1551*t3432;
  t3669 = t3045*t1778;
  t3765 = t3647 + t3669;
  t3496 = -1.*t3432*t1778;
  t3535 = t3399 + t3496;
  t5228 = -0.8656776547239999*t1114;
  t5231 = 1. + t5228;
  t3052 = -1.*t1551*t3045;
  t3128 = -1.*t3125*t1778;
  t3216 = t3052 + t3128;
  t5243 = -0.134322983001*t1114;
  t5255 = 1. + t5243;
  t4007 = -1.*t3993*t1778;
  t4023 = t3895 + t4007;
  t4049 = t1551*t3993;
  t4104 = t3890*t1778;
  t4108 = t4049 + t4104;
  t1615 = t133*t1513*t1551*t1589;
  t1810 = -1.*t133*t1513*t1711*t1778;
  t1908 = t1615 + t1810;
  t2219 = t133*t1513*t1711*t1551;
  t2246 = t133*t1513*t1589*t1778;
  t2540 = t2219 + t2246;
  t5404 = 0.366501*t2046;
  t5409 = 0. + t5404;
  t5436 = 0.930418*t2046;
  t5446 = 0. + t5436;
  t4680 = t4479*t1778;
  t4684 = t3895 + t4680;
  t4660 = -1.*t3890*t1778;
  t4670 = t4649 + t4660;
  t4492 = -1.*t1551*t4479;
  t4532 = -1.*t4503*t1778;
  t4536 = t4492 + t4532;
  t5302 = -0.340999127418*t1114*t3252;
  t4380 = t1513*t1551*t2976*t1589;
  t4381 = -1.*t1513*t1711*t2976*t1778;
  t4390 = t4380 + t4381;
  t4409 = t1513*t1711*t1551*t2976;
  t4416 = t1513*t2976*t1589*t1778;
  t4417 = t4409 + t4416;
  t4770 = t4503*t1778;
  t4771 = t4649 + t4770;
  t4854 = -1.*t1513*t1711*t1551;
  t4858 = -1.*t1513*t1589*t1778;
  t4864 = t4854 + t4858;
  t5027 = -1.*t1513*t1551*t1589;
  t5031 = t1513*t1711*t1778;
  t5046 = t5027 + t5031;
  t5068 = -1.*t1551*t1429*t1589;
  t5073 = t1711*t1429*t1778;
  t5076 = t5068 + t5073;
  t5098 = -1.*t1711*t1551*t1429;
  t5110 = -1.*t1429*t1589*t1778;
  t5121 = t5098 + t5110;
  t5216 = -0.340999127418*t1114*t3765;
  t5235 = t5231*t3535;
  t5236 = t5216 + t5235;
  t5256 = t5255*t3765;
  t5260 = -0.340999127418*t1114*t3535;
  t5288 = t5256 + t5260;
  t5307 = t5231*t3216;
  t5328 = t5302 + t5307;
  t5343 = t5255*t3252;
  t5344 = -0.340999127418*t1114*t3216;
  t5361 = t5343 + t5344;
  t5388 = -0.340999127418*t1114*t4023;
  t5396 = t5255*t4108;
  t5412 = -1.*t1513*t2976*t5409;
  t5421 = t5388 + t5396 + t5412;
  t5428 = t5231*t4023;
  t5434 = -0.340999127418*t1114*t4108;
  t5454 = -1.*t1513*t2976*t5446;
  t5459 = t5428 + t5434 + t5454;
  t5477 = -0.340999127418*t1114*t1908;
  t5481 = t5255*t2540;
  t5485 = -1.*t133*t1429*t5409;
  t5488 = t5477 + t5481 + t5485;
  t5492 = t5231*t1908;
  t5515 = -0.340999127418*t1114*t2540;
  t5517 = -1.*t133*t1429*t5446;
  t5523 = t5492 + t5515 + t5517;
  t5538 = 0.930418*t133*t1513*t377;
  t5539 = -0.8656776547239999*t3252*t2046;
  t5540 = -0.340999127418*t4228*t2046;
  t5545 = t5538 + t5539 + t5540;
  t5560 = 0.366501*t133*t1513*t377;
  t5563 = -0.340999127418*t3252*t2046;
  t5566 = -0.134322983001*t4228*t2046;
  t5569 = t5560 + t5563 + t5566;
  t5594 = -0.340999127418*t1114*t4684;
  t5597 = t5231*t4670;
  t5599 = t5594 + t5597;
  t5612 = t5255*t4684;
  t5615 = -0.340999127418*t1114*t4670;
  t5623 = t5612 + t5615;
  t5641 = -0.340999127418*t1114*t4606;
  t5643 = t5231*t4536;
  t5649 = t5641 + t5643;
  t5672 = t5255*t4606;
  t5688 = -0.340999127418*t1114*t4536;
  t5695 = t5672 + t5688;
  t5711 = t5255*t4228;
  t5712 = t133*t1513*t5409;
  t5715 = t5302 + t5711 + t5712;
  t5729 = t5231*t3252;
  t5730 = -0.340999127418*t1114*t4228;
  t5739 = t133*t1513*t5446;
  t5740 = t5729 + t5730 + t5739;
  t5757 = -0.340999127418*t1114*t4390;
  t5763 = t5255*t4417;
  t5766 = -1.*t2976*t1429*t5409;
  t5768 = t5757 + t5763 + t5766;
  t5771 = t5231*t4390;
  t5772 = -0.340999127418*t1114*t4417;
  t5782 = -1.*t2976*t1429*t5446;
  t5783 = t5771 + t5772 + t5782;
  t5815 = 0.930418*t1513*t377*t2976;
  t5817 = -0.8656776547239999*t4606*t2046;
  t5818 = -0.340999127418*t4771*t2046;
  t5820 = t5815 + t5817 + t5818;
  t5830 = 0.366501*t1513*t377*t2976;
  t5835 = -0.340999127418*t4606*t2046;
  t5838 = -0.134322983001*t4771*t2046;
  t5839 = t5830 + t5835 + t5838;
  t5883 = -0.340999127418*t1114*t4891;
  t5892 = t5231*t4864;
  t5896 = t5883 + t5892;
  t5912 = t5255*t4891;
  t5940 = -0.340999127418*t1114*t4864;
  t5951 = t5912 + t5940;
  t5969 = -0.340999127418*t1114*t5046;
  t5978 = t5231*t4968;
  t5979 = t5969 + t5978;
  t6006 = t5255*t5046;
  t6011 = -0.340999127418*t1114*t4968;
  t6038 = t6006 + t6011;
  t6076 = -0.340999127418*t1114*t5076;
  t6083 = t5255*t5121;
  t6091 = -1.*t1513*t5409;
  t6101 = t6076 + t6083 + t6091;
  t6117 = t5231*t5076;
  t6119 = -0.340999127418*t1114*t5121;
  t6121 = -1.*t1513*t5446;
  t6127 = t6117 + t6119 + t6121;
  t6149 = -0.930418*t377*t1429;
  t6157 = -0.8656776547239999*t4891*t2046;
  t6160 = -0.340999127418*t4968*t2046;
  t6161 = t6149 + t6157 + t6160;
  t6177 = -0.366501*t377*t1429;
  t6179 = -0.340999127418*t4891*t2046;
  t6192 = -0.134322983001*t4968*t2046;
  t6199 = t6177 + t6179 + t6192;
  p_output1[0]=(t1427*t1513*t2976 - 1.*t2136*t4023 - 1.*t2729*t4108)*var2[3] + (t133*t1427*t1429 - 1.*t1908*t2136 - 1.*t2540*t2729)*var2[4] + (-1.*t2136*t3535 - 1.*t2729*t3765)*var2[5] + (-1.*t2136*t3216 - 1.*t2729*t3252)*var2[6] + (1.000000637725*t133*t1513*t2046 + 0.930418*t3252*t377 + 0.366501*t377*t4228)*var2[7];
  p_output1[1]=(-1.*t133*t1427*t1513 - 1.*t2136*t3252 - 1.*t2729*t4228)*var2[3] + (t1427*t1429*t2976 - 1.*t2136*t4390 - 1.*t2729*t4417)*var2[4] + (-1.*t2136*t4670 - 1.*t2729*t4684)*var2[5] + (-1.*t2136*t4536 - 1.*t2729*t4606)*var2[6] + (1.000000637725*t1513*t2046*t2976 + 0.930418*t377*t4606 + 0.366501*t377*t4771)*var2[7];
  p_output1[2]=(t1427*t1513 - 1.*t2136*t5076 - 1.*t2729*t5121)*var2[4] + (-1.*t2136*t4968 - 1.*t2729*t5046)*var2[5] + (-1.*t2136*t4864 - 1.*t2729*t4891)*var2[6] + (-1.000000637725*t1429*t2046 + 0.930418*t377*t4891 + 0.366501*t377*t4968)*var2[7];
  p_output1[3]=(0.366501*t5421 + 0.930418*t5459)*var2[3] + (0.366501*t5488 + 0.930418*t5523)*var2[4] + (0.930418*t5236 + 0.366501*t5288)*var2[5] + (0.930418*t5328 + 0.366501*t5361)*var2[6] + (0.930418*t5545 + 0.366501*t5569)*var2[7];
  p_output1[4]=(0.366501*t5715 + 0.930418*t5740)*var2[3] + (0.366501*t5768 + 0.930418*t5783)*var2[4] + (0.930418*t5599 + 0.366501*t5623)*var2[5] + (0.930418*t5649 + 0.366501*t5695)*var2[6] + (0.930418*t5820 + 0.366501*t5839)*var2[7];
  p_output1[5]=(0.366501*t6101 + 0.930418*t6127)*var2[4] + (0.930418*t5979 + 0.366501*t6038)*var2[5] + (0.930418*t5896 + 0.366501*t5951)*var2[6] + (0.930418*t6161 + 0.366501*t6199)*var2[7];
  p_output1[6]=(-0.930418*t5421 + 0.366501*t5459)*var2[3] + (-0.930418*t5488 + 0.366501*t5523)*var2[4] + (0.366501*t5236 - 0.930418*t5288)*var2[5] + (0.366501*t5328 - 0.930418*t5361)*var2[6] + (0.366501*t5545 - 0.930418*t5569)*var2[7];
  p_output1[7]=(-0.930418*t5715 + 0.366501*t5740)*var2[3] + (-0.930418*t5768 + 0.366501*t5783)*var2[4] + (0.366501*t5599 - 0.930418*t5623)*var2[5] + (0.366501*t5649 - 0.930418*t5695)*var2[6] + (0.366501*t5820 - 0.930418*t5839)*var2[7];
  p_output1[8]=(-0.930418*t6101 + 0.366501*t6127)*var2[4] + (0.366501*t5979 - 0.930418*t6038)*var2[5] + (0.366501*t5896 - 0.930418*t5951)*var2[6] + (0.366501*t6161 - 0.930418*t6199)*var2[7];
}



void dR_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

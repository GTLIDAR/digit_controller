/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_right_hip_yaw_src.h"

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
  double t239;
  double t724;
  double t367;
  double t1041;
  double t991;
  double t1002;
  double t1076;
  double t1330;
  double t1346;
  double t271;
  double t1871;
  double t372;
  double t429;
  double t1868;
  double t1880;
  double t1886;
  double t1928;
  double t1933;
  double t1954;
  double t2278;
  double t2291;
  double t2300;
  double t27;
  double t2223;
  double t2348;
  double t2422;
  double t2060;
  double t56;
  double t109;
  double t120;
  double t233;
  double t2741;
  double t2832;
  double t2860;
  double t2952;
  double t2967;
  double t2986;
  double t2663;
  double t2675;
  double t2996;
  double t3323;
  double t3326;
  double t3350;
  double t3455;
  double t3470;
  double t3484;
  double t3450;
  double t3496;
  double t3500;
  double t3390;
  double t3706;
  double t3717;
  double t3738;
  double t3838;
  double t3856;
  double t3858;
  double t1005;
  double t1086;
  double t1206;
  double t1555;
  double t1595;
  double t1740;
  double t1924;
  double t1961;
  double t2025;
  double t4277;
  double t4282;
  double t2105;
  double t2130;
  double t4203;
  double t4214;
  double t2510;
  double t2516;
  double t2534;
  double t4142;
  double t4157;
  double t2910;
  double t3000;
  double t3057;
  double t3058;
  double t3064;
  double t4255;
  double t4257;
  double t3124;
  double t3137;
  double t3142;
  double t3204;
  double t3205;
  double t3231;
  double t4446;
  double t3357;
  double t3373;
  double t3391;
  double t3424;
  double t3504;
  double t3507;
  double t3515;
  double t3611;
  double t3624;
  double t3745;
  double t3747;
  double t3753;
  double t3926;
  double t3928;
  double t3958;
  double t4030;
  double t4033;
  double t4071;
  double t4083;
  double t4090;
  double t4098;
  double t4160;
  double t4176;
  double t4242;
  double t4243;
  double t4266;
  double t4301;
  double t4307;
  double t4317;
  double t4333;
  double t4339;
  double t4352;
  double t4381;
  double t4382;
  double t4386;
  double t4452;
  double t4456;
  double t4463;
  double t4477;
  double t4488;
  double t4538;
  double t4552;
  double t4571;
  double t4605;
  double t4613;
  double t4615;
  double t4627;
  double t4630;
  double t4636;
  double t4649;
  double t4654;
  double t4657;
  double t4668;
  double t4670;
  double t4676;
  double t4678;
  double t4725;
  double t4737;
  double t4745;
  double t4751;
  double t4764;
  double t4771;
  double t4772;
  double t4776;
  double t4798;
  double t4799;
  double t4809;
  double t4838;
  double t4841;
  double t4844;
  double t4845;
  double t4916;
  double t4934;
  double t4935;
  double t4978;
  double t5013;
  double t5019;
  double t5073;
  double t5076;
  double t5077;
  double t5091;
  double t5102;
  double t5105;
  double t5131;
  double t5133;
  double t5148;
  double t5153;
  double t5168;
  double t5182;
  double t5188;
  double t5195;
  double t5236;
  double t5237;
  double t5246;
  double t5249;
  double t5250;
  double t5256;
  double t5288;
  double t5292;
  double t5298;
  double t5326;
  double t5327;
  double t5332;
  double t5346;
  double t5348;
  double t5349;
  double t5351;
  double t5375;
  double t5379;
  double t5404;
  double t5425;
  double t5445;
  double t5448;
  double t5454;
  double t5467;
  double t5497;
  double t5507;
  double t5508;
  double t5511;
  double t5886;
  double t5888;
  double t5889;
  double t5891;
  double t5858;
  double t5860;
  double t5915;
  double t5917;
  double t5918;
  double t5920;
  double t5897;
  double t5898;
  double t5902;
  double t5912;
  double t5871;
  double t5876;
  double t5880;
  double t5881;
  double t6061;
  double t6074;
  double t6089;
  double t6114;
  double t6131;
  double t6132;
  double t6145;
  double t6162;
  double t6181;
  t239 = Cos(var1[3]);
  t724 = Cos(var1[4]);
  t367 = Sin(var1[18]);
  t1041 = Cos(var1[17]);
  t991 = Cos(var1[5]);
  t1002 = Sin(var1[17]);
  t1076 = Sin(var1[5]);
  t1330 = 0.366501*t367;
  t1346 = 0. + t1330;
  t271 = Sin(var1[4]);
  t1871 = Sin(var1[3]);
  t372 = -0.930418*t367;
  t429 = 0. + t372;
  t1868 = t239*t991*t271;
  t1880 = t1871*t1076;
  t1886 = t1868 + t1880;
  t1928 = t991*t1871;
  t1933 = -1.*t239*t271*t1076;
  t1954 = t1928 + t1933;
  t2278 = -1.*t991*t1871;
  t2291 = t239*t271*t1076;
  t2300 = t2278 + t2291;
  t27 = Cos(var1[18]);
  t2223 = -1.*t1002*t1886;
  t2348 = t1041*t2300;
  t2422 = t2223 + t2348;
  t2060 = t1041*t1886;
  t56 = -1.*t27;
  t109 = 1. + t56;
  t120 = -1.000000637725*t109;
  t233 = 1. + t120;
  t2741 = -1.*t991*t1871*t271;
  t2832 = t239*t1076;
  t2860 = t2741 + t2832;
  t2952 = -1.*t239*t991;
  t2967 = -1.*t1871*t271*t1076;
  t2986 = t2952 + t2967;
  t2663 = t1002*t2300;
  t2675 = t2060 + t2663;
  t2996 = t1041*t2986;
  t3323 = t991*t1871*t271;
  t3326 = -1.*t239*t1076;
  t3350 = t3323 + t3326;
  t3455 = t239*t991;
  t3470 = t1871*t271*t1076;
  t3484 = t3455 + t3470;
  t3450 = -1.*t1002*t3350;
  t3496 = t1041*t3484;
  t3500 = t3450 + t3496;
  t3390 = t1041*t3350;
  t3706 = -1.*t724*t991*t1002;
  t3717 = t1041*t724*t1076;
  t3738 = t3706 + t3717;
  t3838 = t1041*t724*t991;
  t3856 = t724*t1002*t1076;
  t3858 = t3838 + t3856;
  t1005 = -1.*t239*t724*t991*t1002;
  t1086 = t1041*t239*t724*t1076;
  t1206 = t1005 + t1086;
  t1555 = t1041*t239*t724*t991;
  t1595 = t239*t724*t1002*t1076;
  t1740 = t1555 + t1595;
  t1924 = t1002*t1886;
  t1961 = t1041*t1954;
  t2025 = t1924 + t1961;
  t4277 = -0.8656776547239999*t109;
  t4282 = 1. + t4277;
  t2105 = -1.*t1002*t1954;
  t2130 = t2060 + t2105;
  t4203 = -0.134322983001*t109;
  t4214 = 1. + t4203;
  t2510 = -1.*t1041*t1886;
  t2516 = -1.*t1002*t2300;
  t2534 = t2510 + t2516;
  t4142 = -0.366501*t367;
  t4157 = 0. + t4142;
  t2910 = -1.*t1002*t2860;
  t3000 = t2910 + t2996;
  t3057 = t1041*t2860;
  t3058 = t1002*t2986;
  t3064 = t3057 + t3058;
  t4255 = 0.930418*t367;
  t4257 = 0. + t4255;
  t3124 = -1.*t724*t991*t1002*t1871;
  t3137 = t1041*t724*t1871*t1076;
  t3142 = t3124 + t3137;
  t3204 = t1041*t724*t991*t1871;
  t3205 = t724*t1002*t1871*t1076;
  t3231 = t3204 + t3205;
  t4446 = 0.340999127418*t109*t2422;
  t3357 = t1002*t3350;
  t3373 = t3357 + t2996;
  t3391 = -1.*t1002*t2986;
  t3424 = t3390 + t3391;
  t3504 = -1.*t1041*t3350;
  t3507 = -1.*t1002*t3484;
  t3515 = t3504 + t3507;
  t3611 = t1002*t3484;
  t3624 = t3390 + t3611;
  t3745 = -1.*t1041*t724*t991;
  t3747 = -1.*t724*t1002*t1076;
  t3753 = t3745 + t3747;
  t3926 = t724*t991*t1002;
  t3928 = -1.*t1041*t724*t1076;
  t3958 = t3926 + t3928;
  t4030 = t991*t1002*t271;
  t4033 = -1.*t1041*t271*t1076;
  t4071 = t4030 + t4033;
  t4083 = -1.*t1041*t991*t271;
  t4090 = -1.*t1002*t271*t1076;
  t4098 = t4083 + t4090;
  t4160 = -1.*t239*t4157*t271;
  t4176 = 0.340999127418*t109*t1206;
  t4242 = t4214*t1740;
  t4243 = t4160 + t4176 + t4242;
  t4266 = -1.*t239*t4257*t271;
  t4301 = t4282*t1206;
  t4307 = 0.340999127418*t109*t1740;
  t4317 = t4266 + t4301 + t4307;
  t4333 = 0.340999127418*t109*t2025;
  t4339 = t4282*t2130;
  t4352 = t4333 + t4339;
  t4381 = t4214*t2025;
  t4382 = 0.340999127418*t109*t2130;
  t4386 = t4381 + t4382;
  t4452 = t4282*t2534;
  t4456 = t4446 + t4452;
  t4463 = t4214*t2422;
  t4477 = 0.340999127418*t109*t2534;
  t4488 = t4463 + t4477;
  t4538 = -0.366501*t27*t239*t724;
  t4552 = 0.340999127418*t367*t2422;
  t4571 = -0.134322983001*t367*t2675;
  t4605 = t4538 + t4552 + t4571;
  t4613 = 0.930418*t27*t239*t724;
  t4615 = -0.8656776547239999*t367*t2422;
  t4627 = 0.340999127418*t367*t2675;
  t4630 = t4613 + t4615 + t4627;
  t4636 = -1.*t724*t4157*t1871;
  t4649 = 0.340999127418*t109*t3000;
  t4654 = t4214*t3064;
  t4657 = t4636 + t4649 + t4654;
  t4668 = -1.*t724*t4257*t1871;
  t4670 = t4282*t3000;
  t4676 = 0.340999127418*t109*t3064;
  t4678 = t4668 + t4670 + t4676;
  t4725 = -1.*t4157*t1871*t271;
  t4737 = 0.340999127418*t109*t3142;
  t4745 = t4214*t3231;
  t4751 = t4725 + t4737 + t4745;
  t4764 = -1.*t4257*t1871*t271;
  t4771 = t4282*t3142;
  t4772 = 0.340999127418*t109*t3231;
  t4776 = t4764 + t4771 + t4772;
  t4798 = t239*t724*t4157;
  t4799 = t4214*t2675;
  t4809 = t4798 + t4446 + t4799;
  t4838 = t239*t724*t4257;
  t4841 = t4282*t2422;
  t4844 = 0.340999127418*t109*t2675;
  t4845 = t4838 + t4841 + t4844;
  t4916 = 0.340999127418*t109*t3373;
  t4934 = t4282*t3424;
  t4935 = t4916 + t4934;
  t4978 = t4214*t3373;
  t5013 = 0.340999127418*t109*t3424;
  t5019 = t4978 + t5013;
  t5073 = 0.340999127418*t109*t3500;
  t5076 = t4282*t3515;
  t5077 = t5073 + t5076;
  t5091 = t4214*t3500;
  t5102 = 0.340999127418*t109*t3515;
  t5105 = t5091 + t5102;
  t5131 = -0.366501*t27*t724*t1871;
  t5133 = 0.340999127418*t367*t3500;
  t5148 = -0.134322983001*t367*t3624;
  t5153 = t5131 + t5133 + t5148;
  t5168 = 0.930418*t27*t724*t1871;
  t5182 = -0.8656776547239999*t367*t3500;
  t5188 = 0.340999127418*t367*t3624;
  t5195 = t5168 + t5182 + t5188;
  t5236 = 0.340999127418*t109*t3738;
  t5237 = t4282*t3753;
  t5246 = t5236 + t5237;
  t5249 = t4214*t3738;
  t5250 = 0.340999127418*t109*t3753;
  t5256 = t5249 + t5250;
  t5288 = 0.340999127418*t109*t3958;
  t5292 = t4282*t3858;
  t5298 = t5288 + t5292;
  t5326 = t4214*t3958;
  t5327 = 0.340999127418*t109*t3858;
  t5332 = t5326 + t5327;
  t5346 = 0.366501*t27*t271;
  t5348 = 0.340999127418*t367*t3738;
  t5349 = -0.134322983001*t367*t3858;
  t5351 = t5346 + t5348 + t5349;
  t5375 = -0.930418*t27*t271;
  t5379 = -0.8656776547239999*t367*t3738;
  t5404 = 0.340999127418*t367*t3858;
  t5425 = t5375 + t5379 + t5404;
  t5445 = -1.*t724*t4157;
  t5448 = 0.340999127418*t109*t4071;
  t5454 = t4214*t4098;
  t5467 = t5445 + t5448 + t5454;
  t5497 = -1.*t724*t4257;
  t5507 = t4282*t4071;
  t5508 = 0.340999127418*t109*t4098;
  t5511 = t5497 + t5507 + t5508;
  t5886 = -1.*t1041;
  t5888 = 1. + t5886;
  t5889 = -0.091*t5888;
  t5891 = 0. + t5889;
  t5858 = -0.091*t1002;
  t5860 = 0. + t5858;
  t5915 = 3.2909349868922137e-7*var1[18];
  t5917 = 0.03103092645718495*t109;
  t5918 = -0.045000372235*t4157;
  t5920 = t5915 + t5917 + t5918;
  t5897 = 1.296332362046933e-7*var1[18];
  t5898 = -0.07877668146182712*t109;
  t5902 = -0.045000372235*t4257;
  t5912 = t5897 + t5898 + t5902;
  t5871 = -0.04500040093286238*t109;
  t5876 = -0.07877663122399998*t429;
  t5880 = 0.031030906668*t1346;
  t5881 = 0. + t5871 + t5876 + t5880;
  t6061 = 0.0846680539949003*t27;
  t6074 = -0.04500040093286238*t367;
  t6089 = t6061 + t6074;
  t6114 = -0.04186915633414423*t27;
  t6131 = -0.07877668146182712*t367;
  t6132 = 1.296332362046933e-7 + t6114 + t6131;
  t6145 = 0.016492681424499736*t27;
  t6162 = 0.03103092645718495*t367;
  t6181 = 3.2909349868922137e-7 + t6145 + t6162;
  p_output1[0]=(-1.*t1346*t3064 - 1.*t3000*t429 + t1871*t233*t724)*var2[3] + (-1.*t1346*t1740 + t233*t239*t271 - 1.*t1206*t429)*var2[4] + (-1.*t1346*t2025 - 1.*t2130*t429)*var2[5] + (-1.*t1346*t2422 - 1.*t2534*t429)*var2[17] + (0.930418*t2422*t27 - 0.366501*t2675*t27 + 1.000000637725*t239*t367*t724)*var2[18];
  p_output1[1]=(-1.*t1346*t2675 - 1.*t2422*t429 - 1.*t233*t239*t724)*var2[3] + (t1871*t233*t271 - 1.*t1346*t3231 - 1.*t3142*t429)*var2[4] + (-1.*t1346*t3373 - 1.*t3424*t429)*var2[5] + (-1.*t1346*t3500 - 1.*t3515*t429)*var2[17] + (0.930418*t27*t3500 - 0.366501*t27*t3624 + 1.000000637725*t1871*t367*t724)*var2[18];
  p_output1[2]=(-1.*t1346*t4098 - 1.*t4071*t429 + t233*t724)*var2[4] + (-1.*t1346*t3958 - 1.*t3858*t429)*var2[5] + (-1.*t1346*t3738 - 1.*t3753*t429)*var2[17] + (-1.000000637725*t271*t367 + 0.930418*t27*t3738 - 0.366501*t27*t3858)*var2[18];
  p_output1[3]=0;
  p_output1[4]=(-0.366501*t4657 + 0.930418*t4678)*var2[3] + (-0.366501*t4243 + 0.930418*t4317)*var2[4] + (0.930418*t4352 - 0.366501*t4386)*var2[5] + (0.930418*t4456 - 0.366501*t4488)*var2[17] + (-0.366501*t4605 + 0.930418*t4630)*var2[18];
  p_output1[5]=(-0.366501*t4809 + 0.930418*t4845)*var2[3] + (-0.366501*t4751 + 0.930418*t4776)*var2[4] + (0.930418*t4935 - 0.366501*t5019)*var2[5] + (0.930418*t5077 - 0.366501*t5105)*var2[17] + (-0.366501*t5153 + 0.930418*t5195)*var2[18];
  p_output1[6]=(-0.366501*t5467 + 0.930418*t5511)*var2[4] + (0.930418*t5298 - 0.366501*t5332)*var2[5] + (0.930418*t5246 - 0.366501*t5256)*var2[17] + (-0.366501*t5351 + 0.930418*t5425)*var2[18];
  p_output1[7]=0;
  p_output1[8]=(-0.930418*t4657 - 0.366501*t4678)*var2[3] + (-0.930418*t4243 - 0.366501*t4317)*var2[4] + (-0.366501*t4352 - 0.930418*t4386)*var2[5] + (-0.366501*t4456 - 0.930418*t4488)*var2[17] + (-0.930418*t4605 - 0.366501*t4630)*var2[18];
  p_output1[9]=(-0.930418*t4809 - 0.366501*t4845)*var2[3] + (-0.930418*t4751 - 0.366501*t4776)*var2[4] + (-0.366501*t4935 - 0.930418*t5019)*var2[5] + (-0.366501*t5077 - 0.930418*t5105)*var2[17] + (-0.930418*t5153 - 0.366501*t5195)*var2[18];
  p_output1[10]=(-0.930418*t5467 - 0.366501*t5511)*var2[4] + (-0.366501*t5298 - 0.930418*t5332)*var2[5] + (-0.366501*t5246 - 0.930418*t5256)*var2[17] + (-0.930418*t5351 - 0.366501*t5425)*var2[18];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.086806*t4657 - 0.123098*t4678 + t2860*t5860 + t2986*t5891 + t3000*t5912 + t3064*t5920 - 1.*t1871*t5881*t724 - 0.04501*(t1346*t3064 + t3000*t429 - 1.*t1871*t233*t724))*var2[3] + (-0.086806*t4243 - 0.04501*(t1346*t1740 - 1.*t233*t239*t271 + t1206*t429) - 0.123098*t4317 - 1.*t239*t271*t5881 + t1206*t5912 + t1740*t5920 + t1076*t239*t5891*t724 + t239*t5860*t724*t991)*var2[4] + (-0.04501*(t1346*t2025 + t2130*t429) - 0.123098*t4352 - 0.086806*t4386 + t1954*t5860 + t1886*t5891 + t2130*t5912 + t2025*t5920)*var2[5] + (-0.091*t1041*t1886 - 0.091*t1002*t2300 - 0.04501*(t1346*t2422 + t2534*t429) - 0.123098*t4456 - 0.086806*t4488 + t2534*t5912 + t2422*t5920)*var2[17] + (-0.086806*t4605 - 0.123098*t4630 + t2422*t6132 + t2675*t6181 + t239*t6089*t724 - 0.04501*(-0.930418*t2422*t27 + 0.366501*t2675*t27 - 1.000000637725*t239*t367*t724))*var2[18];
  p_output1[13]=var2[1] + (-0.086806*t4809 - 0.123098*t4845 + t1886*t5860 + t2300*t5891 + t2422*t5912 + t2675*t5920 + t239*t5881*t724 - 0.04501*(t1346*t2675 + t2422*t429 + t233*t239*t724))*var2[3] + (-0.04501*(-1.*t1871*t233*t271 + t1346*t3231 + t3142*t429) - 0.086806*t4751 - 0.123098*t4776 - 1.*t1871*t271*t5881 + t3142*t5912 + t3231*t5920 + t1076*t1871*t5891*t724 + t1871*t5860*t724*t991)*var2[4] + (-0.04501*(t1346*t3373 + t3424*t429) - 0.123098*t4935 - 0.086806*t5019 + t2986*t5860 + t3350*t5891 + t3424*t5912 + t3373*t5920)*var2[5] + (-0.091*t1041*t3350 - 0.091*t1002*t3484 - 0.04501*(t1346*t3500 + t3515*t429) - 0.123098*t5077 - 0.086806*t5105 + t3515*t5912 + t3500*t5920)*var2[17] + (-0.086806*t5153 - 0.123098*t5195 + t3500*t6132 + t3624*t6181 + t1871*t6089*t724 - 0.04501*(-0.930418*t27*t3500 + 0.366501*t27*t3624 - 1.000000637725*t1871*t367*t724))*var2[18];
  p_output1[14]=var2[2] + (-0.086806*t5467 - 0.123098*t5511 - 1.*t1076*t271*t5891 + t4071*t5912 + t4098*t5920 - 1.*t5881*t724 - 0.04501*(t1346*t4098 + t4071*t429 - 1.*t233*t724) - 1.*t271*t5860*t991)*var2[4] + (-0.04501*(t1346*t3958 + t3858*t429) - 0.123098*t5298 - 0.086806*t5332 + t3858*t5912 + t3958*t5920 - 1.*t1076*t5860*t724 + t5891*t724*t991)*var2[5] + (-0.04501*(t1346*t3738 + t3753*t429) - 0.123098*t5246 - 0.086806*t5256 + t3753*t5912 + t3738*t5920 - 0.091*t1002*t1076*t724 - 0.091*t1041*t724*t991)*var2[17] + (-0.04501*(1.000000637725*t271*t367 - 0.930418*t27*t3738 + 0.366501*t27*t3858) - 0.086806*t5351 - 0.123098*t5425 - 1.*t271*t6089 + t3738*t6132 + t3858*t6181)*var2[18];
  p_output1[15]=0;
}



void dT_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

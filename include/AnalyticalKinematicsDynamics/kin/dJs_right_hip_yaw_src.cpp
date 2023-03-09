/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_right_hip_yaw_src.h"

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
  double t220;
  double t298;
  double t583;
  double t676;
  double t1412;
  double t1498;
  double t2345;
  double t2338;
  double t2444;
  double t2446;
  double t2458;
  double t2494;
  double t2510;
  double t2522;
  double t1545;
  double t1621;
  double t1692;
  double t1940;
  double t1946;
  double t1953;
  double t2342;
  double t2348;
  double t2358;
  double t2025;
  double t2040;
  double t2063;
  double t2845;
  double t2868;
  double t2879;
  double t2936;
  double t2938;
  double t2944;
  double t2953;
  double t2967;
  double t2975;
  double t2412;
  double t2415;
  double t2424;
  double t2872;
  double t2978;
  double t2986;
  double t3012;
  double t3015;
  double t3043;
  double t3057;
  double t1477;
  double t1502;
  double t1515;
  double t3131;
  double t2463;
  double t2701;
  double t3357;
  double t3363;
  double t3385;
  double t3429;
  double t3433;
  double t3435;
  double t3437;
  double t3443;
  double t3450;
  double t3420;
  double t3059;
  double t3064;
  double t3069;
  double t3464;
  double t3480;
  double t3496;
  double t2600;
  double t2605;
  double t2608;
  double t3778;
  double t3797;
  double t3798;
  double t3706;
  double t3725;
  double t3745;
  double t3565;
  double t3568;
  double t3981;
  double t3990;
  double t3992;
  double t4146;
  double t4148;
  double t4157;
  double t3524;
  double t3535;
  double t3556;
  double t3639;
  double t3662;
  double t3683;
  double t3182;
  double t3191;
  double t3507;
  double t3423;
  double t3424;
  double t3336;
  double t3344;
  double t4538;
  double t4552;
  double t4556;
  double t3256;
  double t3264;
  double t3287;
  double t4489;
  double t4503;
  double t4510;
  double t4586;
  double t4597;
  double t4599;
  double t4605;
  double t4613;
  double t4620;
  double t4630;
  double t3620;
  double t3621;
  double t3626;
  double t4798;
  double t4799;
  double t4838;
  double t4751;
  double t4764;
  double t4771;
  double t4005;
  double t4033;
  double t4083;
  double t4242;
  double t4251;
  double t4257;
  double t3948;
  double t3954;
  double t3958;
  double t4112;
  double t4115;
  double t4128;
  double t5059;
  double t5070;
  double t5073;
  double t3973;
  double t3974;
  double t3979;
  double t4269;
  double t4270;
  double t4277;
  double t5088;
  double t5100;
  double t5102;
  double t2690;
  double t2716;
  double t5261;
  double t5268;
  double t5279;
  double t2746;
  double t2778;
  double t2829;
  double t5448;
  double t5456;
  double t5463;
  double t5508;
  double t5516;
  double t5524;
  double t5531;
  double t5546;
  double t5552;
  double t5555;
  double t5577;
  double t5678;
  double t5680;
  double t5682;
  double t5708;
  double t5716;
  double t5719;
  double t5827;
  double t5836;
  double t5844;
  double t5812;
  double t5817;
  double t5818;
  double t5891;
  double t5913;
  double t5915;
  double t5917;
  double t4452;
  double t4456;
  double t4463;
  t220 = Cos(var1[3]);
  t298 = Sin(var1[3]);
  t583 = Cos(var1[4]);
  t676 = Sin(var1[4]);
  t1412 = Cos(var1[5]);
  t1498 = Sin(var1[5]);
  t2345 = Cos(var1[17]);
  t2338 = Sin(var1[17]);
  t2444 = t1412*t298*t676;
  t2446 = -1.*t220*t1498;
  t2458 = t2444 + t2446;
  t2494 = t220*t1412;
  t2510 = t298*t676*t1498;
  t2522 = t2494 + t2510;
  t1545 = -1.*t1412*t298*t676;
  t1621 = t220*t1498;
  t1692 = t1545 + t1621;
  t1940 = -1.*t220*t1412;
  t1946 = -1.*t298*t676*t1498;
  t1953 = t1940 + t1946;
  t2342 = -1.*t583*t1412*t2338;
  t2348 = t2345*t583*t1498;
  t2358 = t2342 + t2348;
  t2025 = t220*t1412*t676;
  t2040 = t298*t1498;
  t2063 = t2025 + t2040;
  t2845 = -0.091*t2338;
  t2868 = 0. + t2845;
  t2879 = -1.*t2345;
  t2936 = 1. + t2879;
  t2938 = -0.091*t2936;
  t2944 = 0. + t2938;
  t2953 = -1.*t1412*t298;
  t2967 = t220*t676*t1498;
  t2975 = t2953 + t2967;
  t2412 = t2345*t583*t1412;
  t2415 = t583*t2338*t1498;
  t2424 = t2412 + t2415;
  t2872 = t2868*t2063;
  t2978 = t2944*t2975;
  t2986 = t2872 + t2978;
  t3012 = -1.*var1[2];
  t3015 = -1.*t583*t1412*t2868;
  t3043 = -1.*t2944*t583*t1498;
  t3057 = 0. + t3012 + t3015 + t3043;
  t1477 = t1412*t298;
  t1502 = -1.*t220*t676*t1498;
  t1515 = t1477 + t1502;
  t3131 = t2345*t2063;
  t2463 = t2338*t2458;
  t2701 = t2345*t1953;
  t3357 = t2944*t2458;
  t3363 = t2868*t1953;
  t3385 = t3357 + t3363;
  t3429 = t2868*t2458;
  t3433 = t2944*t2522;
  t3435 = 0. + var1[1] + t3429 + t3433;
  t3437 = -1.*t2944*t583*t1412;
  t3443 = t583*t2868*t1498;
  t3450 = t3437 + t3443;
  t3420 = t2345*t2458;
  t3059 = -1.*t2338*t2063;
  t3064 = t2345*t2975;
  t3069 = t3059 + t3064;
  t3464 = -1.*t2338*t2458;
  t3480 = t2345*t2522;
  t3496 = t3464 + t3480;
  t2600 = -1.*t2345*t2458;
  t2605 = -1.*t2338*t2522;
  t2608 = t2600 + t2605;
  t3778 = -0.091*t2345*t2458;
  t3797 = -0.091*t2338*t2522;
  t3798 = t3778 + t3797;
  t3706 = 0.091*t2345*t583*t1412;
  t3725 = 0.091*t583*t2338*t1498;
  t3745 = t3706 + t3725;
  t3565 = t2338*t2522;
  t3568 = t3420 + t3565;
  t3981 = t583*t1412*t2868*t298;
  t3990 = t2944*t583*t298*t1498;
  t3992 = t3981 + t3990;
  t4146 = t1412*t2868*t676;
  t4148 = t2944*t676*t1498;
  t4157 = t4146 + t4148;
  t3524 = t583*t1412*t2338;
  t3535 = -1.*t2345*t583*t1498;
  t3556 = t3524 + t3535;
  t3639 = -1.*t2345*t583*t1412;
  t3662 = -1.*t583*t2338*t1498;
  t3683 = t3639 + t3662;
  t3182 = t2338*t2975;
  t3191 = t3131 + t3182;
  t3507 = t2463 + t2701;
  t3423 = -1.*t2338*t1953;
  t3424 = t3420 + t3423;
  t3336 = -1.*t2338*t1515;
  t3344 = t3131 + t3336;
  t4538 = t583*t1412*t2868;
  t4552 = t2944*t583*t1498;
  t4556 = 0. + var1[2] + t4538 + t4552;
  t3256 = t2338*t2063;
  t3264 = t2345*t1515;
  t3287 = t3256 + t3264;
  t4489 = -1.*t2944*t2063;
  t4503 = -1.*t2868*t1515;
  t4510 = t4489 + t4503;
  t4586 = -1.*var1[0];
  t4597 = -1.*t2868*t2063;
  t4599 = -1.*t2944*t2975;
  t4605 = 0. + t4586 + t4597 + t4599;
  t4613 = t2944*t583*t1412;
  t4620 = -1.*t583*t2868*t1498;
  t4630 = t4613 + t4620;
  t3620 = -1.*t2345*t2063;
  t3621 = -1.*t2338*t2975;
  t3626 = t3620 + t3621;
  t4798 = 0.091*t2345*t2063;
  t4799 = 0.091*t2338*t2975;
  t4838 = t4798 + t4799;
  t4751 = -0.091*t2345*t583*t1412;
  t4764 = -0.091*t583*t2338*t1498;
  t4771 = t4751 + t4764;
  t4005 = -1.*t583*t1412*t2338*t298;
  t4033 = t2345*t583*t298*t1498;
  t4083 = t4005 + t4033;
  t4242 = t2345*t583*t1412*t298;
  t4251 = t583*t2338*t298*t1498;
  t4257 = t4242 + t4251;
  t3948 = -1.*t220*t583*t1412*t2338;
  t3954 = t2345*t220*t583*t1498;
  t3958 = t3948 + t3954;
  t4112 = t1412*t2338*t676;
  t4115 = -1.*t2345*t676*t1498;
  t4128 = t4112 + t4115;
  t5059 = -1.*t220*t583*t1412*t2868;
  t5070 = -1.*t2944*t220*t583*t1498;
  t5073 = t5059 + t5070;
  t3973 = t2345*t220*t583*t1412;
  t3974 = t220*t583*t2338*t1498;
  t3979 = t3973 + t3974;
  t4269 = -1.*t2345*t1412*t676;
  t4270 = -1.*t2338*t676*t1498;
  t4277 = t4269 + t4270;
  t5088 = -1.*t1412*t2868*t676;
  t5100 = -1.*t2944*t676*t1498;
  t5102 = t5088 + t5100;
  t2690 = -1.*t2338*t1692;
  t2716 = t2690 + t2701;
  t5261 = -1.*t2868*t1692;
  t5268 = -1.*t2944*t1953;
  t5279 = t5261 + t5268;
  t2746 = t2345*t1692;
  t2778 = t2338*t1953;
  t2829 = t2746 + t2778;
  t5448 = 0. + var1[0] + t2872 + t2978;
  t5456 = -1.*t583*t1412*t2868*t298;
  t5463 = -1.*t2944*t583*t298*t1498;
  t5508 = t5456 + t5463;
  t5516 = -1.*var1[1];
  t5524 = -1.*t2868*t2458;
  t5531 = -1.*t2944*t2522;
  t5546 = 0. + t5516 + t5524 + t5531;
  t5552 = t220*t583*t1412*t2868;
  t5555 = t2944*t220*t583*t1498;
  t5577 = t5552 + t5555;
  t5678 = -1.*t2944*t2458;
  t5680 = -1.*t2868*t1953;
  t5682 = t5678 + t5680;
  t5708 = t2944*t2063;
  t5716 = t2868*t1515;
  t5719 = t5708 + t5716;
  t5827 = 0.091*t2345*t2458;
  t5836 = 0.091*t2338*t2522;
  t5844 = t5827 + t5836;
  t5812 = -0.091*t2345*t2063;
  t5817 = -0.091*t2338*t2975;
  t5818 = t5812 + t5817;
  t5891 = t4597 + t4599;
  t5913 = t2868*t1692;
  t5915 = t2944*t1953;
  t5917 = t5913 + t5915;
  t4452 = -0.366501*t3069;
  t4456 = -0.930418*t3191;
  t4463 = t4452 + t4456;
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
  p_output1[24]=-1.*t220*var2[2] + t298*var1[2]*var2[3];
  p_output1[25]=-1.*t298*var2[2] - 1.*t220*var1[2]*var2[3];
  p_output1[26]=t220*var2[0] + t298*var2[1] + (-1.*t298*var1[0] + t220*var1[1])*var2[3];
  p_output1[27]=-1.*t220*var2[3];
  p_output1[28]=-1.*t298*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t676*var2[1] - 1.*t298*t583*var2[2] - 1.*t220*t583*var1[2]*var2[3] + (-1.*t583*var1[1] + t298*t676*var1[2])*var2[4];
  p_output1[31]=t676*var2[0] + t220*t583*var2[2] - 1.*t298*t583*var1[2]*var2[3] + (t583*var1[0] - 1.*t220*t676*var1[2])*var2[4];
  p_output1[32]=t298*t583*var2[0] - 1.*t220*t583*var2[1] + (t220*t583*var1[0] + t298*t583*var1[1])*var2[3] + (-1.*t298*t676*var1[0] + t220*t676*var1[1])*var2[4];
  p_output1[33]=-1.*t298*t583*var2[3] - 1.*t220*t676*var2[4];
  p_output1[34]=t220*t583*var2[3] - 1.*t298*t676*var2[4];
  p_output1[35]=-1.*t583*var2[4];
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
  p_output1[102]=t676*var2[1] + t298*t583*var2[2] + (-0.091*t1692 + t220*t583*var1[2])*var2[3] + (-0.091*t1412*t220*t583 + t583*var1[1] - 1.*t298*t676*var1[2])*var2[4] - 0.091*t1515*var2[5];
  p_output1[103]=-1.*t676*var2[0] - 1.*t220*t583*var2[2] + (-0.091*t2063 + t298*t583*var1[2])*var2[3] + (-0.091*t1412*t298*t583 - 1.*t583*var1[0] + t220*t676*var1[2])*var2[4] - 0.091*t1953*var2[5];
  p_output1[104]=-1.*t298*t583*var2[0] + t220*t583*var2[1] + (-1.*t220*t583*var1[0] - 1.*t298*t583*var1[1])*var2[3] + (0.091*t1412*t676 + t298*t676*var1[0] - 1.*t220*t676*var1[1])*var2[4] + 0.091*t1498*t583*var2[5];
  p_output1[105]=t298*t583*var2[3] + t220*t676*var2[4];
  p_output1[106]=-1.*t220*t583*var2[3] + t298*t676*var2[4];
  p_output1[107]=t583*var2[4];
  p_output1[108]=(-0.366501*t2358 - 0.930418*t2424)*var2[1] + (-0.366501*(t2463 - 1.*t2345*t2522) - 0.930418*t2608)*var2[2] + (-0.041869*t2716 + 0.016493*t2829 - 0.366501*(t2358*t2986 + t3057*t3069) - 0.930418*(t2424*t2986 + t3057*t3191) - 0.084668*t298*t583)*var2[3] + (-0.041869*t3958 + 0.016493*t3979 - 0.366501*(t2358*t3992 + t3057*t4083 + t3435*t4128 + t3496*t4157) - 0.930418*(t2424*t3992 + t3568*t4157 + t3057*t4257 + t3435*t4277) - 0.084668*t220*t676)*var2[4] + (0.016493*t3287 - 0.041869*t3344 - 0.366501*(t2358*t3385 + t3057*t3424 + t2424*t3435 + t3450*t3496) - 0.930418*(t2424*t3385 + t3057*t3507 + t3435*t3556 + t3450*t3568))*var2[5] + (0.016493*t3069 - 0.041869*t3626 - 0.366501*(t2608*t3057 + t3435*t3683 + t3496*t3745 + t2358*t3798) - 0.930418*(t2358*t3435 + t3057*t3496 + t3568*t3745 + t2424*t3798))*var2[17];
  p_output1[109]=(-0.366501*t3556 - 0.930418*t3683)*var2[0] + t4463*var2[2] + (-0.041869*t3069 + 0.016493*t3191 - 0.366501*(t2716*t4556 + t2358*t5279) - 0.930418*(t2829*t4556 + t2424*t5279) + 0.084668*t220*t583)*var2[3] + (-0.041869*t4083 + 0.016493*t4257 - 0.366501*(t3958*t4556 + t4128*t4605 + t2358*t5073 + t3069*t5102) - 0.930418*(t3979*t4556 + t4277*t4605 + t2424*t5073 + t3191*t5102) - 0.084668*t298*t676)*var2[4] + (-0.041869*t3424 + 0.016493*t3507 - 0.366501*(t2358*t4510 + t3344*t4556 + t2424*t4605 + t3069*t4630) - 0.930418*(t2424*t4510 + t3287*t4556 + t3556*t4605 + t3191*t4630))*var2[5] + (-0.041869*t2608 + 0.016493*t3496 - 0.366501*(t3626*t4556 + t3683*t4605 + t3069*t4771 + t2358*t4838) - 0.930418*(t3069*t4556 + t2358*t4605 + t3191*t4771 + t2424*t4838))*var2[17];
  p_output1[110]=(-0.366501*t3496 - 0.930418*t3568)*var2[0] + (-0.366501*(-1.*t2345*t2975 + t3256) - 0.930418*t3626)*var2[1] + (-0.366501*(t3069*t5448 + t2716*t5546 + t3069*t5891 + t3496*t5917) - 0.930418*(t3191*t5448 + t2829*t5546 + t3191*t5891 + t3568*t5917))*var2[3] + (-0.041869*t4128 + 0.016493*t4277 - 0.366501*(t4083*t5448 + t3069*t5508 + t3958*t5546 + t3496*t5577) - 0.930418*(t4257*t5448 + t3191*t5508 + t3979*t5546 + t3568*t5577) - 0.084668*t583)*var2[4] + (-0.041869*t2424 + 0.016493*t3556 - 0.366501*(t3424*t5448 + t3344*t5546 + t3069*t5682 + t3496*t5719) - 0.930418*(t3507*t5448 + t3287*t5546 + t3191*t5682 + t3568*t5719))*var2[5] + (0.016493*t2358 - 0.041869*t3683 - 0.366501*(t2608*t5448 + t3626*t5546 + t3496*t5818 + t3069*t5844) - 0.930418*(t3496*t5448 + t3069*t5546 + t3568*t5818 + t3191*t5844))*var2[17];
  p_output1[111]=(-0.366501*t2716 - 0.930418*t2829)*var2[3] + (-0.366501*t3958 - 0.930418*t3979)*var2[4] + (-0.930418*t3287 - 0.366501*t3344)*var2[5] + (-0.930418*t3069 - 0.366501*t3626)*var2[17];
  p_output1[112]=t4463*var2[3] + (-0.366501*t4083 - 0.930418*t4257)*var2[4] + (-0.366501*t3424 - 0.930418*t3507)*var2[5] + (-0.366501*t2608 - 0.930418*t3496)*var2[17];
  p_output1[113]=(-0.366501*t4128 - 0.930418*t4277)*var2[4] + (-0.366501*t2424 - 0.930418*t3556)*var2[5] + (-0.930418*t2358 - 0.366501*t3683)*var2[17];
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



void dJs_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

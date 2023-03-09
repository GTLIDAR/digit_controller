/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_shoulder_pitch_joint_left_src.h"

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
  double t48;
  double t172;
  double t529;
  double t578;
  double t1367;
  double t1423;
  double t1543;
  double t1560;
  double t1595;
  double t1750;
  double t1788;
  double t1805;
  double t2496;
  double t2483;
  double t2045;
  double t2071;
  double t2081;
  double t2585;
  double t2592;
  double t2597;
  double t1697;
  double t1706;
  double t1709;
  double t2890;
  double t2916;
  double t1966;
  double t2003;
  double t2006;
  double t2485;
  double t2497;
  double t2501;
  double t2919;
  double t2925;
  double t2933;
  double t2958;
  double t3011;
  double t3012;
  double t2520;
  double t2523;
  double t2524;
  double t3089;
  double t3093;
  double t3095;
  double t2889;
  double t2954;
  double t3038;
  double t3055;
  double t1617;
  double t1620;
  double t1639;
  double t3118;
  double t2581;
  double t2783;
  double t3288;
  double t3319;
  double t3334;
  double t3410;
  double t3421;
  double t3431;
  double t3383;
  double t3385;
  double t3389;
  double t3337;
  double t3062;
  double t3067;
  double t3069;
  double t3397;
  double t3401;
  double t3403;
  double t3628;
  double t3638;
  double t3642;
  double t3668;
  double t3717;
  double t2635;
  double t2652;
  double t2664;
  double t3743;
  double t3744;
  double t3746;
  double t3662;
  double t3718;
  double t3721;
  double t3542;
  double t3546;
  double t3981;
  double t3983;
  double t3990;
  double t4052;
  double t4055;
  double t4058;
  double t3513;
  double t3523;
  double t3524;
  double t3730;
  double t3731;
  double t3732;
  double t3127;
  double t3128;
  double t3488;
  double t3340;
  double t3350;
  double t3229;
  double t3274;
  double t4468;
  double t4497;
  double t4513;
  double t3184;
  double t3193;
  double t3213;
  double t4409;
  double t4461;
  double t4464;
  double t4658;
  double t4659;
  double t4663;
  double t4680;
  double t4579;
  double t4587;
  double t4596;
  double t3618;
  double t3619;
  double t3624;
  double t4897;
  double t4900;
  double t4919;
  double t4835;
  double t4837;
  double t4857;
  double t3931;
  double t3957;
  double t3967;
  double t4128;
  double t4137;
  double t4154;
  double t3850;
  double t3858;
  double t3866;
  double t4070;
  double t4073;
  double t4076;
  double t5074;
  double t5077;
  double t5078;
  double t3878;
  double t3892;
  double t3905;
  double t4171;
  double t4215;
  double t4236;
  double t5088;
  double t5092;
  double t5097;
  double t2778;
  double t2797;
  double t5219;
  double t5221;
  double t5224;
  double t2839;
  double t2841;
  double t2863;
  double t5366;
  double t5347;
  double t5356;
  double t5357;
  double t5385;
  double t5395;
  double t5399;
  double t5425;
  double t5376;
  double t5379;
  double t5380;
  double t5484;
  double t5486;
  double t5487;
  double t5518;
  double t5523;
  double t5529;
  double t5629;
  double t5631;
  double t5632;
  double t5608;
  double t5609;
  double t5619;
  double t5679;
  double t5691;
  double t5700;
  double t5701;
  double t4343;
  double t4352;
  double t4358;
  t48 = Cos(var1[3]);
  t172 = Sin(var1[3]);
  t529 = Cos(var1[4]);
  t578 = Sin(var1[4]);
  t1367 = Cos(var1[5]);
  t1423 = Sin(var1[5]);
  t1543 = t48*t1367*t578;
  t1560 = t172*t1423;
  t1595 = t1543 + t1560;
  t1750 = -1.*t48*t1367;
  t1788 = -1.*t172*t578*t1423;
  t1805 = t1750 + t1788;
  t2496 = Cos(var1[13]);
  t2483 = Sin(var1[13]);
  t2045 = t1367*t172*t578;
  t2071 = -1.*t48*t1423;
  t2081 = t2045 + t2071;
  t2585 = t48*t1367;
  t2592 = t172*t578*t1423;
  t2597 = t2585 + t2592;
  t1697 = -1.*t1367*t172*t578;
  t1706 = t48*t1423;
  t1709 = t1697 + t1706;
  t2890 = -1.*t2496;
  t2916 = 1. + t2890;
  t1966 = -1.*t1367*t172;
  t2003 = t48*t578*t1423;
  t2006 = t1966 + t2003;
  t2485 = -1.*t529*t1367*t2483;
  t2497 = t2496*t529*t1423;
  t2501 = t2485 + t2497;
  t2919 = 0.4*t2916;
  t2925 = 0.12*t2483;
  t2933 = 0. + t2919 + t2925;
  t2958 = 0.12*t2916;
  t3011 = -0.4*t2483;
  t3012 = 0. + t2958 + t3011;
  t2520 = t2496*t529*t1367;
  t2523 = t529*t2483*t1423;
  t2524 = t2520 + t2523;
  t3089 = t2933*t1595;
  t3093 = t3012*t2006;
  t3095 = t3089 + t3093;
  t2889 = -1.*var1[2];
  t2954 = -1.*t529*t1367*t2933;
  t3038 = -1.*t529*t3012*t1423;
  t3055 = 0. + t2889 + t2954 + t3038;
  t1617 = t1367*t172;
  t1620 = -1.*t48*t578*t1423;
  t1639 = t1617 + t1620;
  t3118 = t2496*t1595;
  t2581 = t2483*t2081;
  t2783 = t2496*t1805;
  t3288 = t3012*t2081;
  t3319 = t2933*t1805;
  t3334 = t3288 + t3319;
  t3410 = t2933*t2081;
  t3421 = t3012*t2597;
  t3431 = 0. + var1[1] + t3410 + t3421;
  t3383 = -1.*t529*t1367*t3012;
  t3385 = t529*t2933*t1423;
  t3389 = t3383 + t3385;
  t3337 = t2496*t2081;
  t3062 = -1.*t2483*t1595;
  t3067 = t2496*t2006;
  t3069 = t3062 + t3067;
  t3397 = -1.*t2483*t2081;
  t3401 = t2496*t2597;
  t3403 = t3397 + t3401;
  t3628 = 0.12*t2496;
  t3638 = 0.4*t2483;
  t3642 = t3628 + t3638;
  t3668 = -0.4*t2496;
  t3717 = t3668 + t2925;
  t2635 = -1.*t2496*t2081;
  t2652 = -1.*t2483*t2597;
  t2664 = t2635 + t2652;
  t3743 = t3642*t2081;
  t3744 = t3717*t2597;
  t3746 = t3743 + t3744;
  t3662 = -1.*t529*t1367*t3642;
  t3718 = -1.*t529*t3717*t1423;
  t3721 = t3662 + t3718;
  t3542 = t2483*t2597;
  t3546 = t3337 + t3542;
  t3981 = t529*t1367*t2933*t172;
  t3983 = t529*t3012*t172*t1423;
  t3990 = t3981 + t3983;
  t4052 = t1367*t2933*t578;
  t4055 = t3012*t578*t1423;
  t4058 = t4052 + t4055;
  t3513 = t529*t1367*t2483;
  t3523 = -1.*t2496*t529*t1423;
  t3524 = t3513 + t3523;
  t3730 = -1.*t2496*t529*t1367;
  t3731 = -1.*t529*t2483*t1423;
  t3732 = t3730 + t3731;
  t3127 = t2483*t2006;
  t3128 = t3118 + t3127;
  t3488 = t2581 + t2783;
  t3340 = -1.*t2483*t1805;
  t3350 = t3337 + t3340;
  t3229 = -1.*t2483*t1639;
  t3274 = t3118 + t3229;
  t4468 = t529*t1367*t2933;
  t4497 = t529*t3012*t1423;
  t4513 = 0. + var1[2] + t4468 + t4497;
  t3184 = t2483*t1595;
  t3193 = t2496*t1639;
  t3213 = t3184 + t3193;
  t4409 = -1.*t3012*t1595;
  t4461 = -1.*t2933*t1639;
  t4464 = t4409 + t4461;
  t4658 = -1.*var1[0];
  t4659 = -1.*t2933*t1595;
  t4663 = -1.*t3012*t2006;
  t4680 = 0. + t4658 + t4659 + t4663;
  t4579 = t529*t1367*t3012;
  t4587 = -1.*t529*t2933*t1423;
  t4596 = t4579 + t4587;
  t3618 = -1.*t2496*t1595;
  t3619 = -1.*t2483*t2006;
  t3624 = t3618 + t3619;
  t4897 = -1.*t3642*t1595;
  t4900 = -1.*t3717*t2006;
  t4919 = t4897 + t4900;
  t4835 = t529*t1367*t3642;
  t4837 = t529*t3717*t1423;
  t4857 = t4835 + t4837;
  t3931 = -1.*t529*t1367*t2483*t172;
  t3957 = t2496*t529*t172*t1423;
  t3967 = t3931 + t3957;
  t4128 = t2496*t529*t1367*t172;
  t4137 = t529*t2483*t172*t1423;
  t4154 = t4128 + t4137;
  t3850 = -1.*t48*t529*t1367*t2483;
  t3858 = t2496*t48*t529*t1423;
  t3866 = t3850 + t3858;
  t4070 = t1367*t2483*t578;
  t4073 = -1.*t2496*t578*t1423;
  t4076 = t4070 + t4073;
  t5074 = -1.*t48*t529*t1367*t2933;
  t5077 = -1.*t48*t529*t3012*t1423;
  t5078 = t5074 + t5077;
  t3878 = t2496*t48*t529*t1367;
  t3892 = t48*t529*t2483*t1423;
  t3905 = t3878 + t3892;
  t4171 = -1.*t2496*t1367*t578;
  t4215 = -1.*t2483*t578*t1423;
  t4236 = t4171 + t4215;
  t5088 = -1.*t1367*t2933*t578;
  t5092 = -1.*t3012*t578*t1423;
  t5097 = t5088 + t5092;
  t2778 = -1.*t2483*t1709;
  t2797 = t2778 + t2783;
  t5219 = -1.*t2933*t1709;
  t5221 = -1.*t3012*t1805;
  t5224 = t5219 + t5221;
  t2839 = t2496*t1709;
  t2841 = t2483*t1805;
  t2863 = t2839 + t2841;
  t5366 = 0. + var1[0] + t3089 + t3093;
  t5347 = -1.*t529*t1367*t2933*t172;
  t5356 = -1.*t529*t3012*t172*t1423;
  t5357 = t5347 + t5356;
  t5385 = -1.*var1[1];
  t5395 = -1.*t2933*t2081;
  t5399 = -1.*t3012*t2597;
  t5425 = 0. + t5385 + t5395 + t5399;
  t5376 = t48*t529*t1367*t2933;
  t5379 = t48*t529*t3012*t1423;
  t5380 = t5376 + t5379;
  t5484 = -1.*t3012*t2081;
  t5486 = -1.*t2933*t1805;
  t5487 = t5484 + t5486;
  t5518 = t3012*t1595;
  t5523 = t2933*t1639;
  t5529 = t5518 + t5523;
  t5629 = -1.*t3642*t2081;
  t5631 = -1.*t3717*t2597;
  t5632 = t5629 + t5631;
  t5608 = t3642*t1595;
  t5609 = t3717*t2006;
  t5619 = t5608 + t5609;
  t5679 = t4659 + t4663;
  t5691 = t2933*t1709;
  t5700 = t3012*t1805;
  t5701 = t5691 + t5700;
  t4343 = 0.994522*t3069;
  t4352 = 0.104528*t3128;
  t4358 = t4343 + t4352;
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
  p_output1[24]=-1.*t48*var2[2] + t172*var1[2]*var2[3];
  p_output1[25]=-1.*t172*var2[2] - 1.*t48*var1[2]*var2[3];
  p_output1[26]=t48*var2[0] + t172*var2[1] + (-1.*t172*var1[0] + t48*var1[1])*var2[3];
  p_output1[27]=-1.*t48*var2[3];
  p_output1[28]=-1.*t172*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t578*var2[1] - 1.*t172*t529*var2[2] - 1.*t48*t529*var1[2]*var2[3] + (-1.*t529*var1[1] + t172*t578*var1[2])*var2[4];
  p_output1[31]=t578*var2[0] + t48*t529*var2[2] - 1.*t172*t529*var1[2]*var2[3] + (t529*var1[0] - 1.*t48*t578*var1[2])*var2[4];
  p_output1[32]=t172*t529*var2[0] - 1.*t48*t529*var2[1] + (t48*t529*var1[0] + t172*t529*var1[1])*var2[3] + (-1.*t172*t578*var1[0] + t48*t578*var1[1])*var2[4];
  p_output1[33]=-1.*t172*t529*var2[3] - 1.*t48*t578*var2[4];
  p_output1[34]=t48*t529*var2[3] - 1.*t172*t578*var2[4];
  p_output1[35]=-1.*t529*var2[4];
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
  p_output1[78]=t578*var2[1] + t172*t529*var2[2] + (0.12*t1709 - 0.4*t1805 + t48*t529*var1[2])*var2[3] + (0.12*t1367*t48*t529 - 0.4*t1423*t48*t529 + t529*var1[1] - 1.*t172*t578*var1[2])*var2[4] + (-0.4*t1595 + 0.12*t1639)*var2[5];
  p_output1[79]=-1.*t578*var2[0] - 1.*t48*t529*var2[2] + (0.12*t1595 - 0.4*t2006 + t172*t529*var1[2])*var2[3] + (0.12*t1367*t172*t529 - 0.4*t1423*t172*t529 - 1.*t529*var1[0] + t48*t578*var1[2])*var2[4] + (0.12*t1805 - 0.4*t2081)*var2[5];
  p_output1[80]=-1.*t172*t529*var2[0] + t48*t529*var2[1] + (-1.*t48*t529*var1[0] - 1.*t172*t529*var1[1])*var2[3] + (-0.12*t1367*t578 + 0.4*t1423*t578 + t172*t578*var1[0] - 1.*t48*t578*var1[1])*var2[4] + (-0.4*t1367*t529 - 0.12*t1423*t529)*var2[5];
  p_output1[81]=t172*t529*var2[3] + t48*t578*var2[4];
  p_output1[82]=-1.*t48*t529*var2[3] + t172*t578*var2[4];
  p_output1[83]=t529*var2[4];
  p_output1[84]=(0.994522*t2501 + 0.104528*t2524)*var2[1] + (0.994522*(t2581 - 1.*t2496*t2597) + 0.104528*t2664)*var2[2] + (0.005906*t2797 - 0.056191*t2863 + 0.994522*(t3055*t3069 + t2501*t3095) + 0.104528*(t2524*t3095 + t3055*t3128) + 0.385267*t172*t529)*var2[3] + (0.005906*t3866 - 0.056191*t3905 + 0.994522*(t3055*t3967 + t2501*t3990 + t3403*t4058 + t3431*t4076) + 0.104528*(t2524*t3990 + t3546*t4058 + t3055*t4154 + t3431*t4236) + 0.385267*t48*t578)*var2[4] + (-0.056191*t3213 + 0.005906*t3274 + 0.994522*(t2501*t3334 + t3055*t3350 + t3389*t3403 + t2524*t3431) + 0.104528*(t2524*t3334 + t3055*t3488 + t3431*t3524 + t3389*t3546))*var2[5] + (-0.056191*t3069 + 0.005906*t3624 + 0.994522*(t2664*t3055 + t3403*t3721 + t3431*t3732 + t2501*t3746) + 0.104528*(t3055*t3403 + t2501*t3431 + t3546*t3721 + t2524*t3746))*var2[13];
  p_output1[85]=(0.994522*t3524 + 0.104528*t3732)*var2[0] + t4358*var2[2] + (0.005906*t3069 - 0.056191*t3128 + 0.994522*(t2797*t4513 + t2501*t5224) + 0.104528*(t2863*t4513 + t2524*t5224) - 0.385267*t48*t529)*var2[3] + (0.005906*t3967 - 0.056191*t4154 + 0.994522*(t3866*t4513 + t4076*t4680 + t2501*t5078 + t3069*t5097) + 0.104528*(t3905*t4513 + t4236*t4680 + t2524*t5078 + t3128*t5097) + 0.385267*t172*t578)*var2[4] + (0.005906*t3350 - 0.056191*t3488 + 0.994522*(t2501*t4464 + t3274*t4513 + t3069*t4596 + t2524*t4680) + 0.104528*(t2524*t4464 + t3213*t4513 + t3128*t4596 + t3524*t4680))*var2[5] + (0.005906*t2664 - 0.056191*t3403 + 0.994522*(t3624*t4513 + t3732*t4680 + t3069*t4857 + t2501*t4919) + 0.104528*(t3069*t4513 + t2501*t4680 + t3128*t4857 + t2524*t4919))*var2[13];
  p_output1[86]=(0.994522*t3403 + 0.104528*t3546)*var2[0] + (0.994522*(-1.*t2006*t2496 + t3184) + 0.104528*t3624)*var2[1] + (0.994522*(t3069*t5366 + t2797*t5425 + t3069*t5679 + t3403*t5701) + 0.104528*(t3128*t5366 + t2863*t5425 + t3128*t5679 + t3546*t5701))*var2[3] + (0.005906*t4076 - 0.056191*t4236 + 0.385267*t529 + 0.994522*(t3069*t5357 + t3967*t5366 + t3403*t5380 + t3866*t5425) + 0.104528*(t3128*t5357 + t4154*t5366 + t3546*t5380 + t3905*t5425))*var2[4] + (0.005906*t2524 - 0.056191*t3524 + 0.994522*(t3350*t5366 + t3274*t5425 + t3069*t5487 + t3403*t5529) + 0.104528*(t3488*t5366 + t3213*t5425 + t3128*t5487 + t3546*t5529))*var2[5] + (-0.056191*t2501 + 0.005906*t3732 + 0.994522*(t2664*t5366 + t3624*t5425 + t3403*t5619 + t3069*t5632) + 0.104528*(t3403*t5366 + t3069*t5425 + t3546*t5619 + t3128*t5632))*var2[13];
  p_output1[87]=(0.994522*t2797 + 0.104528*t2863)*var2[3] + (0.994522*t3866 + 0.104528*t3905)*var2[4] + (0.104528*t3213 + 0.994522*t3274)*var2[5] + (0.104528*t3069 + 0.994522*t3624)*var2[13];
  p_output1[88]=t4358*var2[3] + (0.994522*t3967 + 0.104528*t4154)*var2[4] + (0.994522*t3350 + 0.104528*t3488)*var2[5] + (0.994522*t2664 + 0.104528*t3403)*var2[13];
  p_output1[89]=(0.994522*t4076 + 0.104528*t4236)*var2[4] + (0.994522*t2524 + 0.104528*t3524)*var2[5] + (0.104528*t2501 + 0.994522*t3732)*var2[13];
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



void dJs_shoulder_pitch_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_shoulder_pitch_joint_right_src.h"

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
  double t70;
  double t158;
  double t453;
  double t505;
  double t1034;
  double t1087;
  double t1148;
  double t1153;
  double t1158;
  double t1357;
  double t1361;
  double t1419;
  double t2123;
  double t2119;
  double t1757;
  double t1762;
  double t1763;
  double t2204;
  double t2219;
  double t2220;
  double t1327;
  double t1330;
  double t1343;
  double t2469;
  double t2471;
  double t1656;
  double t1658;
  double t1675;
  double t2122;
  double t2127;
  double t2138;
  double t2476;
  double t2483;
  double t2485;
  double t2523;
  double t2524;
  double t2525;
  double t2150;
  double t2175;
  double t2178;
  double t2638;
  double t2655;
  double t2666;
  double t2466;
  double t2522;
  double t2533;
  double t2554;
  double t1166;
  double t1192;
  double t1193;
  double t2694;
  double t2200;
  double t2408;
  double t2958;
  double t2971;
  double t2982;
  double t3175;
  double t3182;
  double t3198;
  double t3081;
  double t3082;
  double t3098;
  double t3013;
  double t2563;
  double t2566;
  double t2574;
  double t3119;
  double t3127;
  double t3141;
  double t3439;
  double t3469;
  double t3471;
  double t3474;
  double t3481;
  double t2251;
  double t2288;
  double t2303;
  double t3542;
  double t3544;
  double t3549;
  double t3472;
  double t3483;
  double t3510;
  double t3338;
  double t3382;
  double t3871;
  double t3875;
  double t3887;
  double t3904;
  double t3916;
  double t3952;
  double t3316;
  double t3323;
  double t3330;
  double t3528;
  double t3529;
  double t3536;
  double t2698;
  double t2708;
  double t3275;
  double t3021;
  double t3045;
  double t2913;
  double t2940;
  double t4401;
  double t4410;
  double t4420;
  double t2871;
  double t2885;
  double t2886;
  double t4376;
  double t4378;
  double t4391;
  double t4431;
  double t4432;
  double t4441;
  double t4459;
  double t4423;
  double t4426;
  double t4427;
  double t3430;
  double t3435;
  double t3436;
  double t4657;
  double t4672;
  double t4681;
  double t4620;
  double t4624;
  double t4632;
  double t3821;
  double t3840;
  double t3844;
  double t4038;
  double t4058;
  double t4064;
  double t3732;
  double t3733;
  double t3740;
  double t3972;
  double t3975;
  double t3984;
  double t4923;
  double t4927;
  double t4933;
  double t3760;
  double t3795;
  double t3801;
  double t4075;
  double t4079;
  double t4104;
  double t4962;
  double t4968;
  double t4989;
  double t2406;
  double t2411;
  double t5139;
  double t5142;
  double t5146;
  double t2421;
  double t2434;
  double t2435;
  double t5359;
  double t5339;
  double t5351;
  double t5352;
  double t5382;
  double t5384;
  double t5396;
  double t5399;
  double t5375;
  double t5378;
  double t5379;
  double t5476;
  double t5484;
  double t5485;
  double t5496;
  double t5500;
  double t5517;
  double t5596;
  double t5605;
  double t5607;
  double t5584;
  double t5587;
  double t5588;
  double t5646;
  double t5652;
  double t5654;
  double t5657;
  double t4287;
  double t4337;
  double t4338;
  t70 = Cos(var1[3]);
  t158 = Sin(var1[3]);
  t453 = Cos(var1[4]);
  t505 = Sin(var1[4]);
  t1034 = Cos(var1[5]);
  t1087 = Sin(var1[5]);
  t1148 = t70*t1034*t505;
  t1153 = t158*t1087;
  t1158 = t1148 + t1153;
  t1357 = -1.*t70*t1034;
  t1361 = -1.*t158*t505*t1087;
  t1419 = t1357 + t1361;
  t2123 = Cos(var1[24]);
  t2119 = Sin(var1[24]);
  t1757 = t1034*t158*t505;
  t1762 = -1.*t70*t1087;
  t1763 = t1757 + t1762;
  t2204 = t70*t1034;
  t2219 = t158*t505*t1087;
  t2220 = t2204 + t2219;
  t1327 = -1.*t1034*t158*t505;
  t1330 = t70*t1087;
  t1343 = t1327 + t1330;
  t2469 = -1.*t2123;
  t2471 = 1. + t2469;
  t1656 = -1.*t1034*t158;
  t1658 = t70*t505*t1087;
  t1675 = t1656 + t1658;
  t2122 = -1.*t453*t1034*t2119;
  t2127 = t2123*t453*t1087;
  t2138 = t2122 + t2127;
  t2476 = 0.4*t2471;
  t2483 = -0.12*t2119;
  t2485 = 0. + t2476 + t2483;
  t2523 = -0.12*t2471;
  t2524 = -0.4*t2119;
  t2525 = 0. + t2523 + t2524;
  t2150 = t2123*t453*t1034;
  t2175 = t453*t2119*t1087;
  t2178 = t2150 + t2175;
  t2638 = t2485*t1158;
  t2655 = t2525*t1675;
  t2666 = t2638 + t2655;
  t2466 = -1.*var1[2];
  t2522 = -1.*t453*t1034*t2485;
  t2533 = -1.*t453*t2525*t1087;
  t2554 = 0. + t2466 + t2522 + t2533;
  t1166 = t1034*t158;
  t1192 = -1.*t70*t505*t1087;
  t1193 = t1166 + t1192;
  t2694 = t2123*t1158;
  t2200 = t2119*t1763;
  t2408 = t2123*t1419;
  t2958 = t2525*t1763;
  t2971 = t2485*t1419;
  t2982 = t2958 + t2971;
  t3175 = t2485*t1763;
  t3182 = t2525*t2220;
  t3198 = 0. + var1[1] + t3175 + t3182;
  t3081 = -1.*t453*t1034*t2525;
  t3082 = t453*t2485*t1087;
  t3098 = t3081 + t3082;
  t3013 = t2123*t1763;
  t2563 = -1.*t2119*t1158;
  t2566 = t2123*t1675;
  t2574 = t2563 + t2566;
  t3119 = -1.*t2119*t1763;
  t3127 = t2123*t2220;
  t3141 = t3119 + t3127;
  t3439 = -0.12*t2123;
  t3469 = 0.4*t2119;
  t3471 = t3439 + t3469;
  t3474 = -0.4*t2123;
  t3481 = t3474 + t2483;
  t2251 = -1.*t2123*t1763;
  t2288 = -1.*t2119*t2220;
  t2303 = t2251 + t2288;
  t3542 = t3471*t1763;
  t3544 = t3481*t2220;
  t3549 = t3542 + t3544;
  t3472 = -1.*t453*t1034*t3471;
  t3483 = -1.*t453*t3481*t1087;
  t3510 = t3472 + t3483;
  t3338 = t2119*t2220;
  t3382 = t3013 + t3338;
  t3871 = t453*t1034*t2485*t158;
  t3875 = t453*t2525*t158*t1087;
  t3887 = t3871 + t3875;
  t3904 = t1034*t2485*t505;
  t3916 = t2525*t505*t1087;
  t3952 = t3904 + t3916;
  t3316 = t453*t1034*t2119;
  t3323 = -1.*t2123*t453*t1087;
  t3330 = t3316 + t3323;
  t3528 = -1.*t2123*t453*t1034;
  t3529 = -1.*t453*t2119*t1087;
  t3536 = t3528 + t3529;
  t2698 = t2119*t1675;
  t2708 = t2694 + t2698;
  t3275 = t2200 + t2408;
  t3021 = -1.*t2119*t1419;
  t3045 = t3013 + t3021;
  t2913 = -1.*t2119*t1193;
  t2940 = t2694 + t2913;
  t4401 = t453*t1034*t2485;
  t4410 = t453*t2525*t1087;
  t4420 = 0. + var1[2] + t4401 + t4410;
  t2871 = t2119*t1158;
  t2885 = t2123*t1193;
  t2886 = t2871 + t2885;
  t4376 = -1.*t2525*t1158;
  t4378 = -1.*t2485*t1193;
  t4391 = t4376 + t4378;
  t4431 = -1.*var1[0];
  t4432 = -1.*t2485*t1158;
  t4441 = -1.*t2525*t1675;
  t4459 = 0. + t4431 + t4432 + t4441;
  t4423 = t453*t1034*t2525;
  t4426 = -1.*t453*t2485*t1087;
  t4427 = t4423 + t4426;
  t3430 = -1.*t2123*t1158;
  t3435 = -1.*t2119*t1675;
  t3436 = t3430 + t3435;
  t4657 = -1.*t3471*t1158;
  t4672 = -1.*t3481*t1675;
  t4681 = t4657 + t4672;
  t4620 = t453*t1034*t3471;
  t4624 = t453*t3481*t1087;
  t4632 = t4620 + t4624;
  t3821 = -1.*t453*t1034*t2119*t158;
  t3840 = t2123*t453*t158*t1087;
  t3844 = t3821 + t3840;
  t4038 = t2123*t453*t1034*t158;
  t4058 = t453*t2119*t158*t1087;
  t4064 = t4038 + t4058;
  t3732 = -1.*t70*t453*t1034*t2119;
  t3733 = t2123*t70*t453*t1087;
  t3740 = t3732 + t3733;
  t3972 = t1034*t2119*t505;
  t3975 = -1.*t2123*t505*t1087;
  t3984 = t3972 + t3975;
  t4923 = -1.*t70*t453*t1034*t2485;
  t4927 = -1.*t70*t453*t2525*t1087;
  t4933 = t4923 + t4927;
  t3760 = t2123*t70*t453*t1034;
  t3795 = t70*t453*t2119*t1087;
  t3801 = t3760 + t3795;
  t4075 = -1.*t2123*t1034*t505;
  t4079 = -1.*t2119*t505*t1087;
  t4104 = t4075 + t4079;
  t4962 = -1.*t1034*t2485*t505;
  t4968 = -1.*t2525*t505*t1087;
  t4989 = t4962 + t4968;
  t2406 = -1.*t2119*t1343;
  t2411 = t2406 + t2408;
  t5139 = -1.*t2485*t1343;
  t5142 = -1.*t2525*t1419;
  t5146 = t5139 + t5142;
  t2421 = t2123*t1343;
  t2434 = t2119*t1419;
  t2435 = t2421 + t2434;
  t5359 = 0. + var1[0] + t2638 + t2655;
  t5339 = -1.*t453*t1034*t2485*t158;
  t5351 = -1.*t453*t2525*t158*t1087;
  t5352 = t5339 + t5351;
  t5382 = -1.*var1[1];
  t5384 = -1.*t2485*t1763;
  t5396 = -1.*t2525*t2220;
  t5399 = 0. + t5382 + t5384 + t5396;
  t5375 = t70*t453*t1034*t2485;
  t5378 = t70*t453*t2525*t1087;
  t5379 = t5375 + t5378;
  t5476 = -1.*t2525*t1763;
  t5484 = -1.*t2485*t1419;
  t5485 = t5476 + t5484;
  t5496 = t2525*t1158;
  t5500 = t2485*t1193;
  t5517 = t5496 + t5500;
  t5596 = -1.*t3471*t1763;
  t5605 = -1.*t3481*t2220;
  t5607 = t5596 + t5605;
  t5584 = t3471*t1158;
  t5587 = t3481*t1675;
  t5588 = t5584 + t5587;
  t5646 = t4432 + t4441;
  t5652 = t2485*t1343;
  t5654 = t2525*t1419;
  t5657 = t5652 + t5654;
  t4287 = -0.994522*t2574;
  t4337 = 0.104528*t2708;
  t4338 = t4287 + t4337;
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
  p_output1[24]=-1.*t70*var2[2] + t158*var1[2]*var2[3];
  p_output1[25]=-1.*t158*var2[2] - 1.*t70*var1[2]*var2[3];
  p_output1[26]=t70*var2[0] + t158*var2[1] + (-1.*t158*var1[0] + t70*var1[1])*var2[3];
  p_output1[27]=-1.*t70*var2[3];
  p_output1[28]=-1.*t158*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t505*var2[1] - 1.*t158*t453*var2[2] - 1.*t453*t70*var1[2]*var2[3] + (-1.*t453*var1[1] + t158*t505*var1[2])*var2[4];
  p_output1[31]=t505*var2[0] + t453*t70*var2[2] - 1.*t158*t453*var1[2]*var2[3] + (t453*var1[0] - 1.*t505*t70*var1[2])*var2[4];
  p_output1[32]=t158*t453*var2[0] - 1.*t453*t70*var2[1] + (t453*t70*var1[0] + t158*t453*var1[1])*var2[3] + (-1.*t158*t505*var1[0] + t505*t70*var1[1])*var2[4];
  p_output1[33]=-1.*t158*t453*var2[3] - 1.*t505*t70*var2[4];
  p_output1[34]=t453*t70*var2[3] - 1.*t158*t505*var2[4];
  p_output1[35]=-1.*t453*var2[4];
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
  p_output1[144]=t505*var2[1] + t158*t453*var2[2] + (-0.12*t1343 - 0.4*t1419 + t453*t70*var1[2])*var2[3] + (-0.12*t1034*t453*t70 - 0.4*t1087*t453*t70 + t453*var1[1] - 1.*t158*t505*var1[2])*var2[4] + (-0.4*t1158 - 0.12*t1193)*var2[5];
  p_output1[145]=-1.*t505*var2[0] - 1.*t453*t70*var2[2] + (-0.12*t1158 - 0.4*t1675 + t158*t453*var1[2])*var2[3] + (-0.12*t1034*t158*t453 - 0.4*t1087*t158*t453 - 1.*t453*var1[0] + t505*t70*var1[2])*var2[4] + (-0.12*t1419 - 0.4*t1763)*var2[5];
  p_output1[146]=-1.*t158*t453*var2[0] + t453*t70*var2[1] + (-1.*t453*t70*var1[0] - 1.*t158*t453*var1[1])*var2[3] + (0.12*t1034*t505 + 0.4*t1087*t505 + t158*t505*var1[0] - 1.*t505*t70*var1[1])*var2[4] + (-0.4*t1034*t453 + 0.12*t1087*t453)*var2[5];
  p_output1[147]=t158*t453*var2[3] + t505*t70*var2[4];
  p_output1[148]=-1.*t453*t70*var2[3] + t158*t505*var2[4];
  p_output1[149]=t453*var2[4];
  p_output1[150]=(-0.994522*t2138 + 0.104528*t2178)*var2[1] + (-0.994522*(t2200 - 1.*t2123*t2220) + 0.104528*t2303)*var2[2] + (0.005906*t2411 + 0.056191*t2435 - 0.994522*(t2554*t2574 + t2138*t2666) + 0.104528*(t2178*t2666 + t2554*t2708) - 0.385267*t158*t453)*var2[3] + (0.005906*t3740 + 0.056191*t3801 - 0.994522*(t2554*t3844 + t2138*t3887 + t3141*t3952 + t3198*t3984) + 0.104528*(t2178*t3887 + t3382*t3952 + t2554*t4064 + t3198*t4104) - 0.385267*t505*t70)*var2[4] + (0.056191*t2886 + 0.005906*t2940 - 0.994522*(t2138*t2982 + t2554*t3045 + t3098*t3141 + t2178*t3198) + 0.104528*(t2178*t2982 + t2554*t3275 + t3198*t3330 + t3098*t3382))*var2[5] + (0.056191*t2574 + 0.005906*t3436 - 0.994522*(t2303*t2554 + t3141*t3510 + t3198*t3536 + t2138*t3549) + 0.104528*(t2554*t3141 + t2138*t3198 + t3382*t3510 + t2178*t3549))*var2[24];
  p_output1[151]=(-0.994522*t3330 + 0.104528*t3536)*var2[0] + t4338*var2[2] + (0.005906*t2574 + 0.056191*t2708 - 0.994522*(t2411*t4420 + t2138*t5146) + 0.104528*(t2435*t4420 + t2178*t5146) + 0.385267*t453*t70)*var2[3] + (0.005906*t3844 + 0.056191*t4064 - 0.994522*(t3740*t4420 + t3984*t4459 + t2138*t4933 + t2574*t4989) + 0.104528*(t3801*t4420 + t4104*t4459 + t2178*t4933 + t2708*t4989) - 0.385267*t158*t505)*var2[4] + (0.005906*t3045 + 0.056191*t3275 - 0.994522*(t2138*t4391 + t2940*t4420 + t2574*t4427 + t2178*t4459) + 0.104528*(t2178*t4391 + t2886*t4420 + t2708*t4427 + t3330*t4459))*var2[5] + (0.005906*t2303 + 0.056191*t3141 - 0.994522*(t3436*t4420 + t3536*t4459 + t2574*t4632 + t2138*t4681) + 0.104528*(t2574*t4420 + t2138*t4459 + t2708*t4632 + t2178*t4681))*var2[24];
  p_output1[152]=(-0.994522*t3141 + 0.104528*t3382)*var2[0] + (-0.994522*(-1.*t1675*t2123 + t2871) + 0.104528*t3436)*var2[1] + (-0.994522*(t2574*t5359 + t2411*t5399 + t2574*t5646 + t3141*t5657) + 0.104528*(t2708*t5359 + t2435*t5399 + t2708*t5646 + t3382*t5657))*var2[3] + (0.005906*t3984 + 0.056191*t4104 - 0.385267*t453 - 0.994522*(t2574*t5352 + t3844*t5359 + t3141*t5379 + t3740*t5399) + 0.104528*(t2708*t5352 + t4064*t5359 + t3382*t5379 + t3801*t5399))*var2[4] + (0.005906*t2178 + 0.056191*t3330 - 0.994522*(t3045*t5359 + t2940*t5399 + t2574*t5485 + t3141*t5517) + 0.104528*(t3275*t5359 + t2886*t5399 + t2708*t5485 + t3382*t5517))*var2[5] + (0.056191*t2138 + 0.005906*t3536 - 0.994522*(t2303*t5359 + t3436*t5399 + t3141*t5588 + t2574*t5607) + 0.104528*(t3141*t5359 + t2574*t5399 + t3382*t5588 + t2708*t5607))*var2[24];
  p_output1[153]=(-0.994522*t2411 + 0.104528*t2435)*var2[3] + (-0.994522*t3740 + 0.104528*t3801)*var2[4] + (0.104528*t2886 - 0.994522*t2940)*var2[5] + (0.104528*t2574 - 0.994522*t3436)*var2[24];
  p_output1[154]=t4338*var2[3] + (-0.994522*t3844 + 0.104528*t4064)*var2[4] + (-0.994522*t3045 + 0.104528*t3275)*var2[5] + (-0.994522*t2303 + 0.104528*t3141)*var2[24];
  p_output1[155]=(-0.994522*t3984 + 0.104528*t4104)*var2[4] + (-0.994522*t2178 + 0.104528*t3330)*var2[5] + (0.104528*t2138 - 0.994522*t3536)*var2[24];
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



void dJs_shoulder_pitch_joint_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

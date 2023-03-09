/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_left_shoulder_pitch_src.h"

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
  double t74;
  double t200;
  double t449;
  double t488;
  double t1101;
  double t1174;
  double t1334;
  double t1335;
  double t1362;
  double t1546;
  double t1566;
  double t1594;
  double t2284;
  double t2275;
  double t1843;
  double t1845;
  double t1851;
  double t2437;
  double t2448;
  double t2449;
  double t1509;
  double t1525;
  double t1526;
  double t2688;
  double t2695;
  double t1757;
  double t1762;
  double t1815;
  double t2280;
  double t2320;
  double t2337;
  double t2714;
  double t2743;
  double t2748;
  double t2781;
  double t2787;
  double t2803;
  double t2342;
  double t2372;
  double t2375;
  double t2868;
  double t2953;
  double t2956;
  double t2674;
  double t2751;
  double t2816;
  double t2829;
  double t1400;
  double t1402;
  double t1410;
  double t3038;
  double t2425;
  double t2632;
  double t3142;
  double t3147;
  double t3158;
  double t3244;
  double t3252;
  double t3270;
  double t3191;
  double t3193;
  double t3217;
  double t3169;
  double t2841;
  double t2861;
  double t2862;
  double t3223;
  double t3224;
  double t3227;
  double t3399;
  double t3423;
  double t3430;
  double t3471;
  double t3481;
  double t2496;
  double t2514;
  double t2558;
  double t3612;
  double t3624;
  double t3641;
  double t3446;
  double t3493;
  double t3503;
  double t3317;
  double t3327;
  double t3859;
  double t3861;
  double t3874;
  double t3921;
  double t3928;
  double t3934;
  double t3297;
  double t3302;
  double t3307;
  double t3533;
  double t3547;
  double t3568;
  double t3044;
  double t3045;
  double t3288;
  double t3171;
  double t3174;
  double t3099;
  double t3115;
  double t4206;
  double t4213;
  double t4223;
  double t3088;
  double t3090;
  double t3091;
  double t4197;
  double t4200;
  double t4203;
  double t4274;
  double t4282;
  double t4300;
  double t4302;
  double t4238;
  double t4251;
  double t4256;
  double t3369;
  double t3371;
  double t3378;
  double t4463;
  double t4465;
  double t4473;
  double t4436;
  double t4440;
  double t4443;
  double t3820;
  double t3831;
  double t3832;
  double t4026;
  double t4031;
  double t4035;
  double t3756;
  double t3759;
  double t3774;
  double t3970;
  double t3981;
  double t3982;
  double t4622;
  double t4629;
  double t4630;
  double t3787;
  double t3790;
  double t3803;
  double t4062;
  double t4070;
  double t4087;
  double t4634;
  double t4640;
  double t4641;
  double t2627;
  double t2641;
  double t4887;
  double t4908;
  double t4910;
  double t2643;
  double t2650;
  double t2660;
  double t5175;
  double t5153;
  double t5157;
  double t5159;
  double t5212;
  double t5213;
  double t5237;
  double t5262;
  double t5184;
  double t5190;
  double t5202;
  double t5456;
  double t5464;
  double t5517;
  double t5536;
  double t5549;
  double t5550;
  double t5695;
  double t5705;
  double t5713;
  double t5657;
  double t5683;
  double t5685;
  double t5776;
  double t5820;
  double t5822;
  double t5834;
  double t4162;
  double t4167;
  double t4168;
  t74 = Cos(var1[3]);
  t200 = Sin(var1[3]);
  t449 = Cos(var1[4]);
  t488 = Sin(var1[4]);
  t1101 = Cos(var1[5]);
  t1174 = Sin(var1[5]);
  t1334 = t74*t1101*t488;
  t1335 = t200*t1174;
  t1362 = t1334 + t1335;
  t1546 = -1.*t74*t1101;
  t1566 = -1.*t200*t488*t1174;
  t1594 = t1546 + t1566;
  t2284 = Cos(var1[13]);
  t2275 = Sin(var1[13]);
  t1843 = t1101*t200*t488;
  t1845 = -1.*t74*t1174;
  t1851 = t1843 + t1845;
  t2437 = t74*t1101;
  t2448 = t200*t488*t1174;
  t2449 = t2437 + t2448;
  t1509 = -1.*t1101*t200*t488;
  t1525 = t74*t1174;
  t1526 = t1509 + t1525;
  t2688 = -1.*t2284;
  t2695 = 1. + t2688;
  t1757 = -1.*t1101*t200;
  t1762 = t74*t488*t1174;
  t1815 = t1757 + t1762;
  t2280 = -1.*t449*t1101*t2275;
  t2320 = t2284*t449*t1174;
  t2337 = t2280 + t2320;
  t2714 = 0.4*t2695;
  t2743 = 0.12*t2275;
  t2748 = 0. + t2714 + t2743;
  t2781 = 0.12*t2695;
  t2787 = -0.4*t2275;
  t2803 = 0. + t2781 + t2787;
  t2342 = t2284*t449*t1101;
  t2372 = t449*t2275*t1174;
  t2375 = t2342 + t2372;
  t2868 = t2748*t1362;
  t2953 = t2803*t1815;
  t2956 = t2868 + t2953;
  t2674 = -1.*var1[2];
  t2751 = -1.*t449*t1101*t2748;
  t2816 = -1.*t449*t2803*t1174;
  t2829 = 0. + t2674 + t2751 + t2816;
  t1400 = t1101*t200;
  t1402 = -1.*t74*t488*t1174;
  t1410 = t1400 + t1402;
  t3038 = t2284*t1362;
  t2425 = t2275*t1851;
  t2632 = t2284*t1594;
  t3142 = t2803*t1851;
  t3147 = t2748*t1594;
  t3158 = t3142 + t3147;
  t3244 = t2748*t1851;
  t3252 = t2803*t2449;
  t3270 = 0. + var1[1] + t3244 + t3252;
  t3191 = -1.*t449*t1101*t2803;
  t3193 = t449*t2748*t1174;
  t3217 = t3191 + t3193;
  t3169 = t2284*t1851;
  t2841 = -1.*t2275*t1362;
  t2861 = t2284*t1815;
  t2862 = t2841 + t2861;
  t3223 = -1.*t2275*t1851;
  t3224 = t2284*t2449;
  t3227 = t3223 + t3224;
  t3399 = 0.12*t2284;
  t3423 = 0.4*t2275;
  t3430 = t3399 + t3423;
  t3471 = -0.4*t2284;
  t3481 = t3471 + t2743;
  t2496 = -1.*t2284*t1851;
  t2514 = -1.*t2275*t2449;
  t2558 = t2496 + t2514;
  t3612 = t3430*t1851;
  t3624 = t3481*t2449;
  t3641 = t3612 + t3624;
  t3446 = -1.*t449*t1101*t3430;
  t3493 = -1.*t449*t3481*t1174;
  t3503 = t3446 + t3493;
  t3317 = t2275*t2449;
  t3327 = t3169 + t3317;
  t3859 = t449*t1101*t2748*t200;
  t3861 = t449*t2803*t200*t1174;
  t3874 = t3859 + t3861;
  t3921 = t1101*t2748*t488;
  t3928 = t2803*t488*t1174;
  t3934 = t3921 + t3928;
  t3297 = t449*t1101*t2275;
  t3302 = -1.*t2284*t449*t1174;
  t3307 = t3297 + t3302;
  t3533 = -1.*t2284*t449*t1101;
  t3547 = -1.*t449*t2275*t1174;
  t3568 = t3533 + t3547;
  t3044 = t2275*t1815;
  t3045 = t3038 + t3044;
  t3288 = t2425 + t2632;
  t3171 = -1.*t2275*t1594;
  t3174 = t3169 + t3171;
  t3099 = -1.*t2275*t1410;
  t3115 = t3038 + t3099;
  t4206 = t449*t1101*t2748;
  t4213 = t449*t2803*t1174;
  t4223 = 0. + var1[2] + t4206 + t4213;
  t3088 = t2275*t1362;
  t3090 = t2284*t1410;
  t3091 = t3088 + t3090;
  t4197 = -1.*t2803*t1362;
  t4200 = -1.*t2748*t1410;
  t4203 = t4197 + t4200;
  t4274 = -1.*var1[0];
  t4282 = -1.*t2748*t1362;
  t4300 = -1.*t2803*t1815;
  t4302 = 0. + t4274 + t4282 + t4300;
  t4238 = t449*t1101*t2803;
  t4251 = -1.*t449*t2748*t1174;
  t4256 = t4238 + t4251;
  t3369 = -1.*t2284*t1362;
  t3371 = -1.*t2275*t1815;
  t3378 = t3369 + t3371;
  t4463 = -1.*t3430*t1362;
  t4465 = -1.*t3481*t1815;
  t4473 = t4463 + t4465;
  t4436 = t449*t1101*t3430;
  t4440 = t449*t3481*t1174;
  t4443 = t4436 + t4440;
  t3820 = -1.*t449*t1101*t2275*t200;
  t3831 = t2284*t449*t200*t1174;
  t3832 = t3820 + t3831;
  t4026 = t2284*t449*t1101*t200;
  t4031 = t449*t2275*t200*t1174;
  t4035 = t4026 + t4031;
  t3756 = -1.*t74*t449*t1101*t2275;
  t3759 = t2284*t74*t449*t1174;
  t3774 = t3756 + t3759;
  t3970 = t1101*t2275*t488;
  t3981 = -1.*t2284*t488*t1174;
  t3982 = t3970 + t3981;
  t4622 = -1.*t74*t449*t1101*t2748;
  t4629 = -1.*t74*t449*t2803*t1174;
  t4630 = t4622 + t4629;
  t3787 = t2284*t74*t449*t1101;
  t3790 = t74*t449*t2275*t1174;
  t3803 = t3787 + t3790;
  t4062 = -1.*t2284*t1101*t488;
  t4070 = -1.*t2275*t488*t1174;
  t4087 = t4062 + t4070;
  t4634 = -1.*t1101*t2748*t488;
  t4640 = -1.*t2803*t488*t1174;
  t4641 = t4634 + t4640;
  t2627 = -1.*t2275*t1526;
  t2641 = t2627 + t2632;
  t4887 = -1.*t2748*t1526;
  t4908 = -1.*t2803*t1594;
  t4910 = t4887 + t4908;
  t2643 = t2284*t1526;
  t2650 = t2275*t1594;
  t2660 = t2643 + t2650;
  t5175 = 0. + var1[0] + t2868 + t2953;
  t5153 = -1.*t449*t1101*t2748*t200;
  t5157 = -1.*t449*t2803*t200*t1174;
  t5159 = t5153 + t5157;
  t5212 = -1.*var1[1];
  t5213 = -1.*t2748*t1851;
  t5237 = -1.*t2803*t2449;
  t5262 = 0. + t5212 + t5213 + t5237;
  t5184 = t74*t449*t1101*t2748;
  t5190 = t74*t449*t2803*t1174;
  t5202 = t5184 + t5190;
  t5456 = -1.*t2803*t1851;
  t5464 = -1.*t2748*t1594;
  t5517 = t5456 + t5464;
  t5536 = t2803*t1362;
  t5549 = t2748*t1410;
  t5550 = t5536 + t5549;
  t5695 = -1.*t3430*t1851;
  t5705 = -1.*t3481*t2449;
  t5713 = t5695 + t5705;
  t5657 = t3430*t1362;
  t5683 = t3481*t1815;
  t5685 = t5657 + t5683;
  t5776 = t4282 + t4300;
  t5820 = t2748*t1526;
  t5822 = t2803*t1594;
  t5834 = t5820 + t5822;
  t4162 = 0.994522*t2862;
  t4167 = 0.104528*t3045;
  t4168 = t4162 + t4167;
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
  p_output1[24]=-1.*t74*var2[2] + t200*var1[2]*var2[3];
  p_output1[25]=-1.*t200*var2[2] - 1.*t74*var1[2]*var2[3];
  p_output1[26]=t74*var2[0] + t200*var2[1] + (-1.*t200*var1[0] + t74*var1[1])*var2[3];
  p_output1[27]=-1.*t74*var2[3];
  p_output1[28]=-1.*t200*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t488*var2[1] - 1.*t200*t449*var2[2] - 1.*t449*t74*var1[2]*var2[3] + (-1.*t449*var1[1] + t200*t488*var1[2])*var2[4];
  p_output1[31]=t488*var2[0] + t449*t74*var2[2] - 1.*t200*t449*var1[2]*var2[3] + (t449*var1[0] - 1.*t488*t74*var1[2])*var2[4];
  p_output1[32]=t200*t449*var2[0] - 1.*t449*t74*var2[1] + (t449*t74*var1[0] + t200*t449*var1[1])*var2[3] + (-1.*t200*t488*var1[0] + t488*t74*var1[1])*var2[4];
  p_output1[33]=-1.*t200*t449*var2[3] - 1.*t488*t74*var2[4];
  p_output1[34]=t449*t74*var2[3] - 1.*t200*t488*var2[4];
  p_output1[35]=-1.*t449*var2[4];
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
  p_output1[78]=t488*var2[1] + t200*t449*var2[2] + (0.12*t1526 - 0.4*t1594 + t449*t74*var1[2])*var2[3] + (0.12*t1101*t449*t74 - 0.4*t1174*t449*t74 + t449*var1[1] - 1.*t200*t488*var1[2])*var2[4] + (-0.4*t1362 + 0.12*t1410)*var2[5];
  p_output1[79]=-1.*t488*var2[0] - 1.*t449*t74*var2[2] + (0.12*t1362 - 0.4*t1815 + t200*t449*var1[2])*var2[3] + (0.12*t1101*t200*t449 - 0.4*t1174*t200*t449 - 1.*t449*var1[0] + t488*t74*var1[2])*var2[4] + (0.12*t1594 - 0.4*t1851)*var2[5];
  p_output1[80]=-1.*t200*t449*var2[0] + t449*t74*var2[1] + (-1.*t449*t74*var1[0] - 1.*t200*t449*var1[1])*var2[3] + (-0.12*t1101*t488 + 0.4*t1174*t488 + t200*t488*var1[0] - 1.*t488*t74*var1[1])*var2[4] + (-0.4*t1101*t449 - 0.12*t1174*t449)*var2[5];
  p_output1[81]=t200*t449*var2[3] + t488*t74*var2[4];
  p_output1[82]=-1.*t449*t74*var2[3] + t200*t488*var2[4];
  p_output1[83]=t449*var2[4];
  p_output1[84]=(0.994522*t2337 + 0.104528*t2375)*var2[1] + (0.994522*(t2425 - 1.*t2284*t2449) + 0.104528*t2558)*var2[2] + (0.005906*t2641 - 0.056191*t2660 + 0.994522*(t2829*t2862 + t2337*t2956) + 0.104528*(t2375*t2956 + t2829*t3045) + 0.385267*t200*t449)*var2[3] + (0.005906*t3774 - 0.056191*t3803 + 0.994522*(t2829*t3832 + t2337*t3874 + t3227*t3934 + t3270*t3982) + 0.104528*(t2375*t3874 + t3327*t3934 + t2829*t4035 + t3270*t4087) + 0.385267*t488*t74)*var2[4] + (-0.056191*t3091 + 0.005906*t3115 + 0.994522*(t2337*t3158 + t2829*t3174 + t3217*t3227 + t2375*t3270) + 0.104528*(t2375*t3158 + t2829*t3288 + t3270*t3307 + t3217*t3327))*var2[5] + (-0.056191*t2862 + 0.005906*t3378 + 0.994522*(t2558*t2829 + t3227*t3503 + t3270*t3568 + t2337*t3641) + 0.104528*(t2829*t3227 + t2337*t3270 + t3327*t3503 + t2375*t3641))*var2[13];
  p_output1[85]=(0.994522*t3307 + 0.104528*t3568)*var2[0] + t4168*var2[2] + (0.005906*t2862 - 0.056191*t3045 + 0.994522*(t2641*t4223 + t2337*t4910) + 0.104528*(t2660*t4223 + t2375*t4910) - 0.385267*t449*t74)*var2[3] + (0.005906*t3832 - 0.056191*t4035 + 0.994522*(t3774*t4223 + t3982*t4302 + t2337*t4630 + t2862*t4641) + 0.104528*(t3803*t4223 + t4087*t4302 + t2375*t4630 + t3045*t4641) + 0.385267*t200*t488)*var2[4] + (0.005906*t3174 - 0.056191*t3288 + 0.994522*(t2337*t4203 + t3115*t4223 + t2862*t4256 + t2375*t4302) + 0.104528*(t2375*t4203 + t3091*t4223 + t3045*t4256 + t3307*t4302))*var2[5] + (0.005906*t2558 - 0.056191*t3227 + 0.994522*(t3378*t4223 + t3568*t4302 + t2862*t4443 + t2337*t4473) + 0.104528*(t2862*t4223 + t2337*t4302 + t3045*t4443 + t2375*t4473))*var2[13];
  p_output1[86]=(0.994522*t3227 + 0.104528*t3327)*var2[0] + (0.994522*(-1.*t1815*t2284 + t3088) + 0.104528*t3378)*var2[1] + (0.994522*(t2862*t5175 + t2641*t5262 + t2862*t5776 + t3227*t5834) + 0.104528*(t3045*t5175 + t2660*t5262 + t3045*t5776 + t3327*t5834))*var2[3] + (0.005906*t3982 - 0.056191*t4087 + 0.385267*t449 + 0.994522*(t2862*t5159 + t3832*t5175 + t3227*t5202 + t3774*t5262) + 0.104528*(t3045*t5159 + t4035*t5175 + t3327*t5202 + t3803*t5262))*var2[4] + (0.005906*t2375 - 0.056191*t3307 + 0.994522*(t3174*t5175 + t3115*t5262 + t2862*t5517 + t3227*t5550) + 0.104528*(t3288*t5175 + t3091*t5262 + t3045*t5517 + t3327*t5550))*var2[5] + (-0.056191*t2337 + 0.005906*t3568 + 0.994522*(t2558*t5175 + t3378*t5262 + t3227*t5685 + t2862*t5713) + 0.104528*(t3227*t5175 + t2862*t5262 + t3327*t5685 + t3045*t5713))*var2[13];
  p_output1[87]=(0.994522*t2641 + 0.104528*t2660)*var2[3] + (0.994522*t3774 + 0.104528*t3803)*var2[4] + (0.104528*t3091 + 0.994522*t3115)*var2[5] + (0.104528*t2862 + 0.994522*t3378)*var2[13];
  p_output1[88]=t4168*var2[3] + (0.994522*t3832 + 0.104528*t4035)*var2[4] + (0.994522*t3174 + 0.104528*t3288)*var2[5] + (0.994522*t2558 + 0.104528*t3227)*var2[13];
  p_output1[89]=(0.994522*t3982 + 0.104528*t4087)*var2[4] + (0.994522*t2375 + 0.104528*t3307)*var2[5] + (0.104528*t2337 + 0.994522*t3568)*var2[13];
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



void dJs_left_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

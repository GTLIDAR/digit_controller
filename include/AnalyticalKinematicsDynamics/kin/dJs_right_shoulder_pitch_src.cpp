/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_right_shoulder_pitch_src.h"

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
  double t78;
  double t224;
  double t531;
  double t555;
  double t1234;
  double t1240;
  double t1377;
  double t1378;
  double t1418;
  double t1527;
  double t1585;
  double t1592;
  double t2385;
  double t2372;
  double t1974;
  double t1978;
  double t1980;
  double t2542;
  double t2559;
  double t2563;
  double t1512;
  double t1520;
  double t1522;
  double t2728;
  double t2732;
  double t1864;
  double t1883;
  double t1904;
  double t2383;
  double t2388;
  double t2409;
  double t2742;
  double t2750;
  double t2768;
  double t2792;
  double t2809;
  double t2812;
  double t2502;
  double t2505;
  double t2527;
  double t2888;
  double t2912;
  double t2955;
  double t2726;
  double t2785;
  double t2832;
  double t2836;
  double t1446;
  double t1455;
  double t1471;
  double t3010;
  double t2539;
  double t2651;
  double t3205;
  double t3206;
  double t3221;
  double t3398;
  double t3404;
  double t3411;
  double t3350;
  double t3365;
  double t3369;
  double t3263;
  double t2837;
  double t2853;
  double t2858;
  double t3378;
  double t3387;
  double t3392;
  double t3615;
  double t3617;
  double t3618;
  double t3630;
  double t3652;
  double t2604;
  double t2614;
  double t2615;
  double t3703;
  double t3704;
  double t3707;
  double t3627;
  double t3654;
  double t3665;
  double t3470;
  double t3472;
  double t3847;
  double t3852;
  double t3860;
  double t3879;
  double t3882;
  double t3903;
  double t3445;
  double t3448;
  double t3458;
  double t3672;
  double t3677;
  double t3695;
  double t3016;
  double t3028;
  double t3436;
  double t3271;
  double t3292;
  double t3159;
  double t3195;
  double t4129;
  double t4132;
  double t4149;
  double t3131;
  double t3134;
  double t3146;
  double t4109;
  double t4113;
  double t4121;
  double t4185;
  double t4200;
  double t4205;
  double t4214;
  double t4162;
  double t4167;
  double t4176;
  double t3587;
  double t3588;
  double t3596;
  double t4381;
  double t4397;
  double t4423;
  double t4356;
  double t4359;
  double t4372;
  double t3827;
  double t3830;
  double t3833;
  double t3963;
  double t3971;
  double t3975;
  double t3802;
  double t3805;
  double t3806;
  double t3907;
  double t3912;
  double t3916;
  double t4653;
  double t4664;
  double t4674;
  double t3815;
  double t3816;
  double t3820;
  double t3978;
  double t3980;
  double t3981;
  double t4684;
  double t4688;
  double t4708;
  double t2646;
  double t2652;
  double t4934;
  double t4940;
  double t4944;
  double t2706;
  double t2716;
  double t2721;
  double t5259;
  double t5229;
  double t5235;
  double t5248;
  double t5342;
  double t5393;
  double t5413;
  double t5420;
  double t5307;
  double t5312;
  double t5316;
  double t5561;
  double t5576;
  double t5592;
  double t5611;
  double t5627;
  double t5639;
  double t5838;
  double t5839;
  double t5842;
  double t5807;
  double t5812;
  double t5825;
  double t6033;
  double t6065;
  double t6076;
  double t6082;
  double t4049;
  double t4063;
  double t4076;
  t78 = Cos(var1[3]);
  t224 = Sin(var1[3]);
  t531 = Cos(var1[4]);
  t555 = Sin(var1[4]);
  t1234 = Cos(var1[5]);
  t1240 = Sin(var1[5]);
  t1377 = t78*t1234*t555;
  t1378 = t224*t1240;
  t1418 = t1377 + t1378;
  t1527 = -1.*t78*t1234;
  t1585 = -1.*t224*t555*t1240;
  t1592 = t1527 + t1585;
  t2385 = Cos(var1[24]);
  t2372 = Sin(var1[24]);
  t1974 = t1234*t224*t555;
  t1978 = -1.*t78*t1240;
  t1980 = t1974 + t1978;
  t2542 = t78*t1234;
  t2559 = t224*t555*t1240;
  t2563 = t2542 + t2559;
  t1512 = -1.*t1234*t224*t555;
  t1520 = t78*t1240;
  t1522 = t1512 + t1520;
  t2728 = -1.*t2385;
  t2732 = 1. + t2728;
  t1864 = -1.*t1234*t224;
  t1883 = t78*t555*t1240;
  t1904 = t1864 + t1883;
  t2383 = -1.*t531*t1234*t2372;
  t2388 = t2385*t531*t1240;
  t2409 = t2383 + t2388;
  t2742 = 0.4*t2732;
  t2750 = -0.12*t2372;
  t2768 = 0. + t2742 + t2750;
  t2792 = -0.12*t2732;
  t2809 = -0.4*t2372;
  t2812 = 0. + t2792 + t2809;
  t2502 = t2385*t531*t1234;
  t2505 = t531*t2372*t1240;
  t2527 = t2502 + t2505;
  t2888 = t2768*t1418;
  t2912 = t2812*t1904;
  t2955 = t2888 + t2912;
  t2726 = -1.*var1[2];
  t2785 = -1.*t531*t1234*t2768;
  t2832 = -1.*t531*t2812*t1240;
  t2836 = 0. + t2726 + t2785 + t2832;
  t1446 = t1234*t224;
  t1455 = -1.*t78*t555*t1240;
  t1471 = t1446 + t1455;
  t3010 = t2385*t1418;
  t2539 = t2372*t1980;
  t2651 = t2385*t1592;
  t3205 = t2812*t1980;
  t3206 = t2768*t1592;
  t3221 = t3205 + t3206;
  t3398 = t2768*t1980;
  t3404 = t2812*t2563;
  t3411 = 0. + var1[1] + t3398 + t3404;
  t3350 = -1.*t531*t1234*t2812;
  t3365 = t531*t2768*t1240;
  t3369 = t3350 + t3365;
  t3263 = t2385*t1980;
  t2837 = -1.*t2372*t1418;
  t2853 = t2385*t1904;
  t2858 = t2837 + t2853;
  t3378 = -1.*t2372*t1980;
  t3387 = t2385*t2563;
  t3392 = t3378 + t3387;
  t3615 = -0.12*t2385;
  t3617 = 0.4*t2372;
  t3618 = t3615 + t3617;
  t3630 = -0.4*t2385;
  t3652 = t3630 + t2750;
  t2604 = -1.*t2385*t1980;
  t2614 = -1.*t2372*t2563;
  t2615 = t2604 + t2614;
  t3703 = t3618*t1980;
  t3704 = t3652*t2563;
  t3707 = t3703 + t3704;
  t3627 = -1.*t531*t1234*t3618;
  t3654 = -1.*t531*t3652*t1240;
  t3665 = t3627 + t3654;
  t3470 = t2372*t2563;
  t3472 = t3263 + t3470;
  t3847 = t531*t1234*t2768*t224;
  t3852 = t531*t2812*t224*t1240;
  t3860 = t3847 + t3852;
  t3879 = t1234*t2768*t555;
  t3882 = t2812*t555*t1240;
  t3903 = t3879 + t3882;
  t3445 = t531*t1234*t2372;
  t3448 = -1.*t2385*t531*t1240;
  t3458 = t3445 + t3448;
  t3672 = -1.*t2385*t531*t1234;
  t3677 = -1.*t531*t2372*t1240;
  t3695 = t3672 + t3677;
  t3016 = t2372*t1904;
  t3028 = t3010 + t3016;
  t3436 = t2539 + t2651;
  t3271 = -1.*t2372*t1592;
  t3292 = t3263 + t3271;
  t3159 = -1.*t2372*t1471;
  t3195 = t3010 + t3159;
  t4129 = t531*t1234*t2768;
  t4132 = t531*t2812*t1240;
  t4149 = 0. + var1[2] + t4129 + t4132;
  t3131 = t2372*t1418;
  t3134 = t2385*t1471;
  t3146 = t3131 + t3134;
  t4109 = -1.*t2812*t1418;
  t4113 = -1.*t2768*t1471;
  t4121 = t4109 + t4113;
  t4185 = -1.*var1[0];
  t4200 = -1.*t2768*t1418;
  t4205 = -1.*t2812*t1904;
  t4214 = 0. + t4185 + t4200 + t4205;
  t4162 = t531*t1234*t2812;
  t4167 = -1.*t531*t2768*t1240;
  t4176 = t4162 + t4167;
  t3587 = -1.*t2385*t1418;
  t3588 = -1.*t2372*t1904;
  t3596 = t3587 + t3588;
  t4381 = -1.*t3618*t1418;
  t4397 = -1.*t3652*t1904;
  t4423 = t4381 + t4397;
  t4356 = t531*t1234*t3618;
  t4359 = t531*t3652*t1240;
  t4372 = t4356 + t4359;
  t3827 = -1.*t531*t1234*t2372*t224;
  t3830 = t2385*t531*t224*t1240;
  t3833 = t3827 + t3830;
  t3963 = t2385*t531*t1234*t224;
  t3971 = t531*t2372*t224*t1240;
  t3975 = t3963 + t3971;
  t3802 = -1.*t78*t531*t1234*t2372;
  t3805 = t2385*t78*t531*t1240;
  t3806 = t3802 + t3805;
  t3907 = t1234*t2372*t555;
  t3912 = -1.*t2385*t555*t1240;
  t3916 = t3907 + t3912;
  t4653 = -1.*t78*t531*t1234*t2768;
  t4664 = -1.*t78*t531*t2812*t1240;
  t4674 = t4653 + t4664;
  t3815 = t2385*t78*t531*t1234;
  t3816 = t78*t531*t2372*t1240;
  t3820 = t3815 + t3816;
  t3978 = -1.*t2385*t1234*t555;
  t3980 = -1.*t2372*t555*t1240;
  t3981 = t3978 + t3980;
  t4684 = -1.*t1234*t2768*t555;
  t4688 = -1.*t2812*t555*t1240;
  t4708 = t4684 + t4688;
  t2646 = -1.*t2372*t1522;
  t2652 = t2646 + t2651;
  t4934 = -1.*t2768*t1522;
  t4940 = -1.*t2812*t1592;
  t4944 = t4934 + t4940;
  t2706 = t2385*t1522;
  t2716 = t2372*t1592;
  t2721 = t2706 + t2716;
  t5259 = 0. + var1[0] + t2888 + t2912;
  t5229 = -1.*t531*t1234*t2768*t224;
  t5235 = -1.*t531*t2812*t224*t1240;
  t5248 = t5229 + t5235;
  t5342 = -1.*var1[1];
  t5393 = -1.*t2768*t1980;
  t5413 = -1.*t2812*t2563;
  t5420 = 0. + t5342 + t5393 + t5413;
  t5307 = t78*t531*t1234*t2768;
  t5312 = t78*t531*t2812*t1240;
  t5316 = t5307 + t5312;
  t5561 = -1.*t2812*t1980;
  t5576 = -1.*t2768*t1592;
  t5592 = t5561 + t5576;
  t5611 = t2812*t1418;
  t5627 = t2768*t1471;
  t5639 = t5611 + t5627;
  t5838 = -1.*t3618*t1980;
  t5839 = -1.*t3652*t2563;
  t5842 = t5838 + t5839;
  t5807 = t3618*t1418;
  t5812 = t3652*t1904;
  t5825 = t5807 + t5812;
  t6033 = t4200 + t4205;
  t6065 = t2768*t1522;
  t6076 = t2812*t1592;
  t6082 = t6065 + t6076;
  t4049 = -0.994522*t2858;
  t4063 = 0.104528*t3028;
  t4076 = t4049 + t4063;
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
  p_output1[24]=-1.*t78*var2[2] + t224*var1[2]*var2[3];
  p_output1[25]=-1.*t224*var2[2] - 1.*t78*var1[2]*var2[3];
  p_output1[26]=t78*var2[0] + t224*var2[1] + (-1.*t224*var1[0] + t78*var1[1])*var2[3];
  p_output1[27]=-1.*t78*var2[3];
  p_output1[28]=-1.*t224*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t555*var2[1] - 1.*t224*t531*var2[2] - 1.*t531*t78*var1[2]*var2[3] + (-1.*t531*var1[1] + t224*t555*var1[2])*var2[4];
  p_output1[31]=t555*var2[0] + t531*t78*var2[2] - 1.*t224*t531*var1[2]*var2[3] + (t531*var1[0] - 1.*t555*t78*var1[2])*var2[4];
  p_output1[32]=t224*t531*var2[0] - 1.*t531*t78*var2[1] + (t531*t78*var1[0] + t224*t531*var1[1])*var2[3] + (-1.*t224*t555*var1[0] + t555*t78*var1[1])*var2[4];
  p_output1[33]=-1.*t224*t531*var2[3] - 1.*t555*t78*var2[4];
  p_output1[34]=t531*t78*var2[3] - 1.*t224*t555*var2[4];
  p_output1[35]=-1.*t531*var2[4];
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
  p_output1[144]=t555*var2[1] + t224*t531*var2[2] + (-0.12*t1522 - 0.4*t1592 + t531*t78*var1[2])*var2[3] + (-0.12*t1234*t531*t78 - 0.4*t1240*t531*t78 + t531*var1[1] - 1.*t224*t555*var1[2])*var2[4] + (-0.4*t1418 - 0.12*t1471)*var2[5];
  p_output1[145]=-1.*t555*var2[0] - 1.*t531*t78*var2[2] + (-0.12*t1418 - 0.4*t1904 + t224*t531*var1[2])*var2[3] + (-0.12*t1234*t224*t531 - 0.4*t1240*t224*t531 - 1.*t531*var1[0] + t555*t78*var1[2])*var2[4] + (-0.12*t1592 - 0.4*t1980)*var2[5];
  p_output1[146]=-1.*t224*t531*var2[0] + t531*t78*var2[1] + (-1.*t531*t78*var1[0] - 1.*t224*t531*var1[1])*var2[3] + (0.12*t1234*t555 + 0.4*t1240*t555 + t224*t555*var1[0] - 1.*t555*t78*var1[1])*var2[4] + (-0.4*t1234*t531 + 0.12*t1240*t531)*var2[5];
  p_output1[147]=t224*t531*var2[3] + t555*t78*var2[4];
  p_output1[148]=-1.*t531*t78*var2[3] + t224*t555*var2[4];
  p_output1[149]=t531*var2[4];
  p_output1[150]=(-0.994522*t2409 + 0.104528*t2527)*var2[1] + (-0.994522*(t2539 - 1.*t2385*t2563) + 0.104528*t2615)*var2[2] + (0.005906*t2652 + 0.056191*t2721 - 0.994522*(t2836*t2858 + t2409*t2955) + 0.104528*(t2527*t2955 + t2836*t3028) - 0.385267*t224*t531)*var2[3] + (0.005906*t3806 + 0.056191*t3820 - 0.994522*(t2836*t3833 + t2409*t3860 + t3392*t3903 + t3411*t3916) + 0.104528*(t2527*t3860 + t3472*t3903 + t2836*t3975 + t3411*t3981) - 0.385267*t555*t78)*var2[4] + (0.056191*t3146 + 0.005906*t3195 - 0.994522*(t2409*t3221 + t2836*t3292 + t3369*t3392 + t2527*t3411) + 0.104528*(t2527*t3221 + t2836*t3436 + t3411*t3458 + t3369*t3472))*var2[5] + (0.056191*t2858 + 0.005906*t3596 - 0.994522*(t2615*t2836 + t3392*t3665 + t3411*t3695 + t2409*t3707) + 0.104528*(t2836*t3392 + t2409*t3411 + t3472*t3665 + t2527*t3707))*var2[24];
  p_output1[151]=(-0.994522*t3458 + 0.104528*t3695)*var2[0] + t4076*var2[2] + (0.005906*t2858 + 0.056191*t3028 - 0.994522*(t2652*t4149 + t2409*t4944) + 0.104528*(t2721*t4149 + t2527*t4944) + 0.385267*t531*t78)*var2[3] + (0.005906*t3833 + 0.056191*t3975 - 0.994522*(t3806*t4149 + t3916*t4214 + t2409*t4674 + t2858*t4708) + 0.104528*(t3820*t4149 + t3981*t4214 + t2527*t4674 + t3028*t4708) - 0.385267*t224*t555)*var2[4] + (0.005906*t3292 + 0.056191*t3436 - 0.994522*(t2409*t4121 + t3195*t4149 + t2858*t4176 + t2527*t4214) + 0.104528*(t2527*t4121 + t3146*t4149 + t3028*t4176 + t3458*t4214))*var2[5] + (0.005906*t2615 + 0.056191*t3392 - 0.994522*(t3596*t4149 + t3695*t4214 + t2858*t4372 + t2409*t4423) + 0.104528*(t2858*t4149 + t2409*t4214 + t3028*t4372 + t2527*t4423))*var2[24];
  p_output1[152]=(-0.994522*t3392 + 0.104528*t3472)*var2[0] + (-0.994522*(-1.*t1904*t2385 + t3131) + 0.104528*t3596)*var2[1] + (-0.994522*(t2858*t5259 + t2652*t5420 + t2858*t6033 + t3392*t6082) + 0.104528*(t3028*t5259 + t2721*t5420 + t3028*t6033 + t3472*t6082))*var2[3] + (0.005906*t3916 + 0.056191*t3981 - 0.385267*t531 - 0.994522*(t2858*t5248 + t3833*t5259 + t3392*t5316 + t3806*t5420) + 0.104528*(t3028*t5248 + t3975*t5259 + t3472*t5316 + t3820*t5420))*var2[4] + (0.005906*t2527 + 0.056191*t3458 - 0.994522*(t3292*t5259 + t3195*t5420 + t2858*t5592 + t3392*t5639) + 0.104528*(t3436*t5259 + t3146*t5420 + t3028*t5592 + t3472*t5639))*var2[5] + (0.056191*t2409 + 0.005906*t3695 - 0.994522*(t2615*t5259 + t3596*t5420 + t3392*t5825 + t2858*t5842) + 0.104528*(t3392*t5259 + t2858*t5420 + t3472*t5825 + t3028*t5842))*var2[24];
  p_output1[153]=(-0.994522*t2652 + 0.104528*t2721)*var2[3] + (-0.994522*t3806 + 0.104528*t3820)*var2[4] + (0.104528*t3146 - 0.994522*t3195)*var2[5] + (0.104528*t2858 - 0.994522*t3596)*var2[24];
  p_output1[154]=t4076*var2[3] + (-0.994522*t3833 + 0.104528*t3975)*var2[4] + (-0.994522*t3292 + 0.104528*t3436)*var2[5] + (-0.994522*t2615 + 0.104528*t3392)*var2[24];
  p_output1[155]=(-0.994522*t3916 + 0.104528*t3981)*var2[4] + (-0.994522*t2527 + 0.104528*t3458)*var2[5] + (0.104528*t2409 - 0.994522*t3695)*var2[24];
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



void dJs_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

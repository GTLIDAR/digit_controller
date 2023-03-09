/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_hip_rotation_right_src.h"

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
  double t106;
  double t269;
  double t521;
  double t627;
  double t1401;
  double t1585;
  double t2674;
  double t2661;
  double t2785;
  double t2797;
  double t2822;
  double t2830;
  double t2856;
  double t2894;
  double t1663;
  double t1741;
  double t1776;
  double t2072;
  double t2077;
  double t2152;
  double t2668;
  double t2694;
  double t2712;
  double t2263;
  double t2287;
  double t2299;
  double t3091;
  double t3096;
  double t3125;
  double t3127;
  double t3143;
  double t3145;
  double t3147;
  double t3148;
  double t3179;
  double t2723;
  double t2730;
  double t2732;
  double t3106;
  double t3198;
  double t3211;
  double t3228;
  double t3247;
  double t3259;
  double t3260;
  double t1573;
  double t1590;
  double t1598;
  double t3416;
  double t2827;
  double t2977;
  double t3648;
  double t3650;
  double t3666;
  double t3763;
  double t3767;
  double t3788;
  double t3794;
  double t3801;
  double t3814;
  double t3689;
  double t3277;
  double t3288;
  double t3308;
  double t3824;
  double t3840;
  double t3844;
  double t2907;
  double t2912;
  double t2913;
  double t4193;
  double t4196;
  double t4208;
  double t4119;
  double t4121;
  double t4158;
  double t3967;
  double t3968;
  double t4375;
  double t4384;
  double t4390;
  double t4470;
  double t4473;
  double t4478;
  double t3934;
  double t3937;
  double t3952;
  double t4079;
  double t4082;
  double t4083;
  double t3467;
  double t3508;
  double t3879;
  double t3714;
  double t3725;
  double t3615;
  double t3633;
  double t4797;
  double t4805;
  double t4817;
  double t3599;
  double t3600;
  double t3607;
  double t4765;
  double t4782;
  double t4786;
  double t4831;
  double t4835;
  double t4872;
  double t4873;
  double t4885;
  double t4887;
  double t4894;
  double t4055;
  double t4057;
  double t4060;
  double t5112;
  double t5115;
  double t5121;
  double t5083;
  double t5084;
  double t5098;
  double t4401;
  double t4411;
  double t4414;
  double t4559;
  double t4561;
  double t4573;
  double t4314;
  double t4319;
  double t4328;
  double t4448;
  double t4459;
  double t4464;
  double t5243;
  double t5244;
  double t5262;
  double t4353;
  double t4354;
  double t4357;
  double t4585;
  double t4587;
  double t4593;
  double t5283;
  double t5285;
  double t5301;
  double t2976;
  double t3000;
  double t5385;
  double t5386;
  double t5389;
  double t3014;
  double t3066;
  double t3073;
  double t5537;
  double t5567;
  double t5585;
  double t5625;
  double t5634;
  double t5649;
  double t5659;
  double t5673;
  double t5686;
  double t5697;
  double t5699;
  double t5781;
  double t5792;
  double t5821;
  double t5913;
  double t5915;
  double t5916;
  double t6032;
  double t6061;
  double t6068;
  double t5994;
  double t6008;
  double t6025;
  double t6155;
  double t6166;
  double t6167;
  double t6169;
  double t4710;
  double t4716;
  double t4722;
  t106 = Cos(var1[3]);
  t269 = Sin(var1[3]);
  t521 = Cos(var1[4]);
  t627 = Sin(var1[4]);
  t1401 = Cos(var1[5]);
  t1585 = Sin(var1[5]);
  t2674 = Cos(var1[17]);
  t2661 = Sin(var1[17]);
  t2785 = t1401*t269*t627;
  t2797 = -1.*t106*t1585;
  t2822 = t2785 + t2797;
  t2830 = t106*t1401;
  t2856 = t269*t627*t1585;
  t2894 = t2830 + t2856;
  t1663 = -1.*t1401*t269*t627;
  t1741 = t106*t1585;
  t1776 = t1663 + t1741;
  t2072 = -1.*t106*t1401;
  t2077 = -1.*t269*t627*t1585;
  t2152 = t2072 + t2077;
  t2668 = -1.*t521*t1401*t2661;
  t2694 = t2674*t521*t1585;
  t2712 = t2668 + t2694;
  t2263 = t106*t1401*t627;
  t2287 = t269*t1585;
  t2299 = t2263 + t2287;
  t3091 = -0.091*t2661;
  t3096 = 0. + t3091;
  t3125 = -1.*t2674;
  t3127 = 1. + t3125;
  t3143 = -0.091*t3127;
  t3145 = 0. + t3143;
  t3147 = -1.*t1401*t269;
  t3148 = t106*t627*t1585;
  t3179 = t3147 + t3148;
  t2723 = t2674*t521*t1401;
  t2730 = t521*t2661*t1585;
  t2732 = t2723 + t2730;
  t3106 = t3096*t2299;
  t3198 = t3145*t3179;
  t3211 = t3106 + t3198;
  t3228 = -1.*var1[2];
  t3247 = -1.*t521*t1401*t3096;
  t3259 = -1.*t3145*t521*t1585;
  t3260 = 0. + t3228 + t3247 + t3259;
  t1573 = t1401*t269;
  t1590 = -1.*t106*t627*t1585;
  t1598 = t1573 + t1590;
  t3416 = t2674*t2299;
  t2827 = t2661*t2822;
  t2977 = t2674*t2152;
  t3648 = t3145*t2822;
  t3650 = t3096*t2152;
  t3666 = t3648 + t3650;
  t3763 = t3096*t2822;
  t3767 = t3145*t2894;
  t3788 = 0. + var1[1] + t3763 + t3767;
  t3794 = -1.*t3145*t521*t1401;
  t3801 = t521*t3096*t1585;
  t3814 = t3794 + t3801;
  t3689 = t2674*t2822;
  t3277 = -1.*t2661*t2299;
  t3288 = t2674*t3179;
  t3308 = t3277 + t3288;
  t3824 = -1.*t2661*t2822;
  t3840 = t2674*t2894;
  t3844 = t3824 + t3840;
  t2907 = -1.*t2674*t2822;
  t2912 = -1.*t2661*t2894;
  t2913 = t2907 + t2912;
  t4193 = -0.091*t2674*t2822;
  t4196 = -0.091*t2661*t2894;
  t4208 = t4193 + t4196;
  t4119 = 0.091*t2674*t521*t1401;
  t4121 = 0.091*t521*t2661*t1585;
  t4158 = t4119 + t4121;
  t3967 = t2661*t2894;
  t3968 = t3689 + t3967;
  t4375 = t521*t1401*t3096*t269;
  t4384 = t3145*t521*t269*t1585;
  t4390 = t4375 + t4384;
  t4470 = t1401*t3096*t627;
  t4473 = t3145*t627*t1585;
  t4478 = t4470 + t4473;
  t3934 = t521*t1401*t2661;
  t3937 = -1.*t2674*t521*t1585;
  t3952 = t3934 + t3937;
  t4079 = -1.*t2674*t521*t1401;
  t4082 = -1.*t521*t2661*t1585;
  t4083 = t4079 + t4082;
  t3467 = t2661*t3179;
  t3508 = t3416 + t3467;
  t3879 = t2827 + t2977;
  t3714 = -1.*t2661*t2152;
  t3725 = t3689 + t3714;
  t3615 = -1.*t2661*t1598;
  t3633 = t3416 + t3615;
  t4797 = t521*t1401*t3096;
  t4805 = t3145*t521*t1585;
  t4817 = 0. + var1[2] + t4797 + t4805;
  t3599 = t2661*t2299;
  t3600 = t2674*t1598;
  t3607 = t3599 + t3600;
  t4765 = -1.*t3145*t2299;
  t4782 = -1.*t3096*t1598;
  t4786 = t4765 + t4782;
  t4831 = -1.*var1[0];
  t4835 = -1.*t3096*t2299;
  t4872 = -1.*t3145*t3179;
  t4873 = 0. + t4831 + t4835 + t4872;
  t4885 = t3145*t521*t1401;
  t4887 = -1.*t521*t3096*t1585;
  t4894 = t4885 + t4887;
  t4055 = -1.*t2674*t2299;
  t4057 = -1.*t2661*t3179;
  t4060 = t4055 + t4057;
  t5112 = 0.091*t2674*t2299;
  t5115 = 0.091*t2661*t3179;
  t5121 = t5112 + t5115;
  t5083 = -0.091*t2674*t521*t1401;
  t5084 = -0.091*t521*t2661*t1585;
  t5098 = t5083 + t5084;
  t4401 = -1.*t521*t1401*t2661*t269;
  t4411 = t2674*t521*t269*t1585;
  t4414 = t4401 + t4411;
  t4559 = t2674*t521*t1401*t269;
  t4561 = t521*t2661*t269*t1585;
  t4573 = t4559 + t4561;
  t4314 = -1.*t106*t521*t1401*t2661;
  t4319 = t2674*t106*t521*t1585;
  t4328 = t4314 + t4319;
  t4448 = t1401*t2661*t627;
  t4459 = -1.*t2674*t627*t1585;
  t4464 = t4448 + t4459;
  t5243 = -1.*t106*t521*t1401*t3096;
  t5244 = -1.*t3145*t106*t521*t1585;
  t5262 = t5243 + t5244;
  t4353 = t2674*t106*t521*t1401;
  t4354 = t106*t521*t2661*t1585;
  t4357 = t4353 + t4354;
  t4585 = -1.*t2674*t1401*t627;
  t4587 = -1.*t2661*t627*t1585;
  t4593 = t4585 + t4587;
  t5283 = -1.*t1401*t3096*t627;
  t5285 = -1.*t3145*t627*t1585;
  t5301 = t5283 + t5285;
  t2976 = -1.*t2661*t1776;
  t3000 = t2976 + t2977;
  t5385 = -1.*t3096*t1776;
  t5386 = -1.*t3145*t2152;
  t5389 = t5385 + t5386;
  t3014 = t2674*t1776;
  t3066 = t2661*t2152;
  t3073 = t3014 + t3066;
  t5537 = 0. + var1[0] + t3106 + t3198;
  t5567 = -1.*t521*t1401*t3096*t269;
  t5585 = -1.*t3145*t521*t269*t1585;
  t5625 = t5567 + t5585;
  t5634 = -1.*var1[1];
  t5649 = -1.*t3096*t2822;
  t5659 = -1.*t3145*t2894;
  t5673 = 0. + t5634 + t5649 + t5659;
  t5686 = t106*t521*t1401*t3096;
  t5697 = t3145*t106*t521*t1585;
  t5699 = t5686 + t5697;
  t5781 = -1.*t3145*t2822;
  t5792 = -1.*t3096*t2152;
  t5821 = t5781 + t5792;
  t5913 = t3145*t2299;
  t5915 = t3096*t1598;
  t5916 = t5913 + t5915;
  t6032 = 0.091*t2674*t2822;
  t6061 = 0.091*t2661*t2894;
  t6068 = t6032 + t6061;
  t5994 = -0.091*t2674*t2299;
  t6008 = -0.091*t2661*t3179;
  t6025 = t5994 + t6008;
  t6155 = t4835 + t4872;
  t6166 = t3096*t1776;
  t6167 = t3145*t2152;
  t6169 = t6166 + t6167;
  t4710 = -0.366501*t3308;
  t4716 = -0.930418*t3508;
  t4722 = t4710 + t4716;
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
  p_output1[24]=-1.*t106*var2[2] + t269*var1[2]*var2[3];
  p_output1[25]=-1.*t269*var2[2] - 1.*t106*var1[2]*var2[3];
  p_output1[26]=t106*var2[0] + t269*var2[1] + (-1.*t269*var1[0] + t106*var1[1])*var2[3];
  p_output1[27]=-1.*t106*var2[3];
  p_output1[28]=-1.*t269*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t627*var2[1] - 1.*t269*t521*var2[2] - 1.*t106*t521*var1[2]*var2[3] + (-1.*t521*var1[1] + t269*t627*var1[2])*var2[4];
  p_output1[31]=t627*var2[0] + t106*t521*var2[2] - 1.*t269*t521*var1[2]*var2[3] + (t521*var1[0] - 1.*t106*t627*var1[2])*var2[4];
  p_output1[32]=t269*t521*var2[0] - 1.*t106*t521*var2[1] + (t106*t521*var1[0] + t269*t521*var1[1])*var2[3] + (-1.*t269*t627*var1[0] + t106*t627*var1[1])*var2[4];
  p_output1[33]=-1.*t269*t521*var2[3] - 1.*t106*t627*var2[4];
  p_output1[34]=t106*t521*var2[3] - 1.*t269*t627*var2[4];
  p_output1[35]=-1.*t521*var2[4];
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
  p_output1[102]=t627*var2[1] + t269*t521*var2[2] + (-0.091*t1776 + t106*t521*var1[2])*var2[3] + (-0.091*t106*t1401*t521 + t521*var1[1] - 1.*t269*t627*var1[2])*var2[4] - 0.091*t1598*var2[5];
  p_output1[103]=-1.*t627*var2[0] - 1.*t106*t521*var2[2] + (-0.091*t2299 + t269*t521*var1[2])*var2[3] + (-0.091*t1401*t269*t521 - 1.*t521*var1[0] + t106*t627*var1[2])*var2[4] - 0.091*t2152*var2[5];
  p_output1[104]=-1.*t269*t521*var2[0] + t106*t521*var2[1] + (-1.*t106*t521*var1[0] - 1.*t269*t521*var1[1])*var2[3] + (0.091*t1401*t627 + t269*t627*var1[0] - 1.*t106*t627*var1[1])*var2[4] + 0.091*t1585*t521*var2[5];
  p_output1[105]=t269*t521*var2[3] + t106*t627*var2[4];
  p_output1[106]=-1.*t106*t521*var2[3] + t269*t627*var2[4];
  p_output1[107]=t521*var2[4];
  p_output1[108]=(-0.366501*t2712 - 0.930418*t2732)*var2[1] + (-0.366501*(t2827 - 1.*t2674*t2894) - 0.930418*t2913)*var2[2] + (-0.041869*t3000 + 0.016493*t3073 - 0.366501*(t2712*t3211 + t3260*t3308) - 0.930418*(t2732*t3211 + t3260*t3508) - 0.084668*t269*t521)*var2[3] + (-0.041869*t4328 + 0.016493*t4357 - 0.366501*(t2712*t4390 + t3260*t4414 + t3788*t4464 + t3844*t4478) - 0.930418*(t2732*t4390 + t3968*t4478 + t3260*t4573 + t3788*t4593) - 0.084668*t106*t627)*var2[4] + (0.016493*t3607 - 0.041869*t3633 - 0.366501*(t2712*t3666 + t3260*t3725 + t2732*t3788 + t3814*t3844) - 0.930418*(t2732*t3666 + t3260*t3879 + t3788*t3952 + t3814*t3968))*var2[5] + (0.016493*t3308 - 0.041869*t4060 - 0.366501*(t2913*t3260 + t3788*t4083 + t3844*t4158 + t2712*t4208) - 0.930418*(t2712*t3788 + t3260*t3844 + t3968*t4158 + t2732*t4208))*var2[17];
  p_output1[109]=(-0.366501*t3952 - 0.930418*t4083)*var2[0] + t4722*var2[2] + (-0.041869*t3308 + 0.016493*t3508 + 0.084668*t106*t521 - 0.366501*(t3000*t4817 + t2712*t5389) - 0.930418*(t3073*t4817 + t2732*t5389))*var2[3] + (-0.041869*t4414 + 0.016493*t4573 - 0.366501*(t4328*t4817 + t4464*t4873 + t2712*t5262 + t3308*t5301) - 0.930418*(t4357*t4817 + t4593*t4873 + t2732*t5262 + t3508*t5301) - 0.084668*t269*t627)*var2[4] + (-0.041869*t3725 + 0.016493*t3879 - 0.366501*(t2712*t4786 + t3633*t4817 + t2732*t4873 + t3308*t4894) - 0.930418*(t2732*t4786 + t3607*t4817 + t3952*t4873 + t3508*t4894))*var2[5] + (-0.041869*t2913 + 0.016493*t3844 - 0.366501*(t4060*t4817 + t4083*t4873 + t3308*t5098 + t2712*t5121) - 0.930418*(t3308*t4817 + t2712*t4873 + t3508*t5098 + t2732*t5121))*var2[17];
  p_output1[110]=(-0.366501*t3844 - 0.930418*t3968)*var2[0] + (-0.366501*(-1.*t2674*t3179 + t3599) - 0.930418*t4060)*var2[1] + (-0.366501*(t3308*t5537 + t3000*t5673 + t3308*t6155 + t3844*t6169) - 0.930418*(t3508*t5537 + t3073*t5673 + t3508*t6155 + t3968*t6169))*var2[3] + (-0.041869*t4464 + 0.016493*t4593 - 0.084668*t521 - 0.366501*(t4414*t5537 + t3308*t5625 + t4328*t5673 + t3844*t5699) - 0.930418*(t4573*t5537 + t3508*t5625 + t4357*t5673 + t3968*t5699))*var2[4] + (-0.041869*t2732 + 0.016493*t3952 - 0.366501*(t3725*t5537 + t3633*t5673 + t3308*t5821 + t3844*t5916) - 0.930418*(t3879*t5537 + t3607*t5673 + t3508*t5821 + t3968*t5916))*var2[5] + (0.016493*t2712 - 0.041869*t4083 - 0.366501*(t2913*t5537 + t4060*t5673 + t3844*t6025 + t3308*t6068) - 0.930418*(t3844*t5537 + t3308*t5673 + t3968*t6025 + t3508*t6068))*var2[17];
  p_output1[111]=(-0.366501*t3000 - 0.930418*t3073)*var2[3] + (-0.366501*t4328 - 0.930418*t4357)*var2[4] + (-0.930418*t3607 - 0.366501*t3633)*var2[5] + (-0.930418*t3308 - 0.366501*t4060)*var2[17];
  p_output1[112]=t4722*var2[3] + (-0.366501*t4414 - 0.930418*t4573)*var2[4] + (-0.366501*t3725 - 0.930418*t3879)*var2[5] + (-0.366501*t2913 - 0.930418*t3844)*var2[17];
  p_output1[113]=(-0.366501*t4464 - 0.930418*t4593)*var2[4] + (-0.366501*t2732 - 0.930418*t3952)*var2[5] + (-0.930418*t2712 - 0.366501*t4083)*var2[17];
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



void dJs_hip_rotation_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

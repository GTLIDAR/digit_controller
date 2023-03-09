/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_left_shoulder_roll_src.h"

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
  double t1022;
  double t492;
  double t495;
  double t546;
  double t550;
  double t611;
  double t493;
  double t1739;
  double t607;
  double t613;
  double t944;
  double t2227;
  double t1065;
  double t1292;
  double t1383;
  double t1449;
  double t2314;
  double t2360;
  double t2416;
  double t2475;
  double t2615;
  double t2617;
  double t2898;
  double t2910;
  double t2945;
  double t3117;
  double t3120;
  double t3132;
  double t3404;
  double t3418;
  double t3420;
  double t3648;
  double t3655;
  double t3685;
  double t2719;
  double t2823;
  double t2826;
  double t2869;
  double t3034;
  double t3073;
  double t3806;
  double t3813;
  double t3815;
  double t3177;
  double t3182;
  double t3201;
  double t3473;
  double t3530;
  double t3569;
  double t3582;
  double t3607;
  double t3617;
  double t3621;
  double t1053;
  double t1120;
  double t1831;
  double t1877;
  double t1884;
  double t1896;
  double t1898;
  double t1934;
  double t1939;
  double t1967;
  double t2094;
  double t2141;
  double t2276;
  double t3516;
  double t3524;
  double t3529;
  double t3599;
  double t3627;
  double t3633;
  double t3863;
  double t4007;
  double t4009;
  double t4020;
  double t4032;
  double t4038;
  double t4039;
  double t4056;
  double t4057;
  double t3817;
  double t3729;
  double t3759;
  double t3769;
  double t2441;
  double t2661;
  double t2668;
  double t2726;
  double t2741;
  double t2742;
  double t2760;
  double t2772;
  double t2785;
  double t3383;
  double t3421;
  double t3426;
  double t3432;
  double t3435;
  double t3472;
  double t3488;
  double t3497;
  double t3498;
  double t3499;
  double t4253;
  double t4254;
  double t4258;
  double t4261;
  double t4267;
  double t4275;
  double t4277;
  double t4287;
  double t3693;
  double t3698;
  double t3702;
  double t3706;
  double t3723;
  double t3779;
  double t3788;
  double t4782;
  double t4784;
  double t4785;
  double t3258;
  double t3869;
  double t3885;
  double t3888;
  double t3895;
  double t3902;
  double t3923;
  double t4416;
  double t4453;
  double t4454;
  double t4462;
  double t4464;
  double t4466;
  double t4467;
  double t4470;
  double t4472;
  double t4497;
  double t4518;
  double t4527;
  double t4534;
  double t4536;
  double t4538;
  double t4544;
  double t4549;
  double t4557;
  double t4567;
  double t4573;
  double t4574;
  double t3948;
  double t3954;
  double t3958;
  double t3964;
  double t3969;
  double t3972;
  double t3973;
  double t3974;
  double t4684;
  double t4700;
  double t4701;
  double t4706;
  double t4707;
  double t4717;
  double t4720;
  double t3827;
  double t3829;
  double t3833;
  double t3019;
  double t3170;
  double t3238;
  double t3245;
  double t3259;
  double t3263;
  double t3362;
  double t4177;
  double t4186;
  double t4195;
  double t4204;
  double t4220;
  double t4228;
  double t4236;
  double t4239;
  double t3799;
  double t3816;
  double t3821;
  double t3823;
  double t3826;
  double t3851;
  double t3853;
  double t4787;
  double t4788;
  double t4793;
  double t4795;
  double t4796;
  double t4807;
  double t4809;
  double t4815;
  double t4826;
  double t4827;
  double t4960;
  double t4961;
  double t4978;
  double t4882;
  double t4883;
  double t4884;
  double t4886;
  double t4887;
  double t4889;
  double t4892;
  double t4917;
  double t4921;
  double t4924;
  double t4926;
  double t4612;
  double t4617;
  double t4620;
  double t4621;
  double t4624;
  double t4636;
  double t4647;
  double t4649;
  double t4652;
  double t4660;
  double t4670;
  t1022 = Sin(var1[3]);
  t492 = Cos(var1[4]);
  t495 = Cos(var1[13]);
  t546 = -1.*t495;
  t550 = 1. + t546;
  t611 = Sin(var1[13]);
  t493 = Cos(var1[5]);
  t1739 = Sin(var1[5]);
  t607 = 0.4*t550;
  t613 = 0.12*t611;
  t944 = 0. + t607 + t613;
  t2227 = Cos(var1[3]);
  t1065 = Sin(var1[4]);
  t1292 = 0.12*t550;
  t1383 = -0.4*t611;
  t1449 = 0. + t1292 + t1383;
  t2314 = -1.*t2227*t493*t1065;
  t2360 = -1.*t1022*t1739;
  t2416 = t2314 + t2360;
  t2475 = t493*t1022;
  t2615 = -1.*t2227*t1065*t1739;
  t2617 = t2475 + t2615;
  t2898 = -1.*t493*t1022*t1065;
  t2910 = t2227*t1739;
  t2945 = t2898 + t2910;
  t3117 = -1.*t2227*t493;
  t3120 = -1.*t1022*t1065*t1739;
  t3132 = t3117 + t3120;
  t3404 = t2227*t493;
  t3418 = t1022*t1065*t1739;
  t3420 = t3404 + t3418;
  t3648 = t2227*t493*t1065;
  t3655 = t1022*t1739;
  t3685 = t3648 + t3655;
  t2719 = t495*t2617;
  t2823 = 0.12*t495;
  t2826 = 0.4*t611;
  t2869 = t2823 + t2826;
  t3034 = -0.4*t495;
  t3073 = t3034 + t613;
  t3806 = -1.*t493*t1022;
  t3813 = t2227*t1065*t1739;
  t3815 = t3806 + t3813;
  t3177 = -1.*t611*t2945;
  t3182 = t495*t3132;
  t3201 = t3177 + t3182;
  t3473 = t495*t2945;
  t3530 = -1.*t2227*t492*t493*t611;
  t3569 = t495*t2227*t492*t1739;
  t3582 = t3530 + t3569;
  t3607 = t495*t2227*t492*t493;
  t3617 = t2227*t492*t611*t1739;
  t3621 = t3607 + t3617;
  t1053 = -1.*t492*t493*t944*t1022;
  t1120 = -0.02441*t1022*t1065;
  t1831 = -1.*t492*t1449*t1022*t1739;
  t1877 = t492*t493*t611*t1022;
  t1884 = -1.*t495*t492*t1022*t1739;
  t1896 = t1877 + t1884;
  t1898 = 0.11689*t1896;
  t1934 = -1.*t495*t492*t493*t1022;
  t1939 = -1.*t492*t611*t1022*t1739;
  t1967 = t1934 + t1939;
  t2094 = 0.400559*t1967;
  t2141 = t1053 + t1120 + t1831 + t1898 + t2094;
  t2276 = 0.02441*t2227*t492;
  t3516 = t2227*t492*t493*t944;
  t3524 = 0.02441*t2227*t1065;
  t3529 = t2227*t492*t1449*t1739;
  t3599 = 0.11689*t3582;
  t3627 = 0.400559*t3621;
  t3633 = t3516 + t3524 + t3529 + t3599 + t3627;
  t3863 = 0.02441*t492*t1022;
  t4007 = t2227*t492*t493*t1449;
  t4009 = -1.*t2227*t492*t944*t1739;
  t4020 = t2227*t492*t493*t611;
  t4032 = -1.*t495*t2227*t492*t1739;
  t4038 = t4020 + t4032;
  t4039 = 0.400559*t4038;
  t4056 = 0.11689*t3621;
  t4057 = t4007 + t4009 + t4039 + t4056;
  t3817 = -1.*t611*t3685;
  t3729 = t495*t3685;
  t3759 = -1.*t611*t2617;
  t3769 = t3729 + t3759;
  t2441 = t944*t2416;
  t2661 = t1449*t2617;
  t2668 = -1.*t611*t2416;
  t2726 = t2668 + t2719;
  t2741 = 0.11689*t2726;
  t2742 = t495*t2416;
  t2760 = t611*t2617;
  t2772 = t2742 + t2760;
  t2785 = 0.400559*t2772;
  t3383 = t1449*t2945;
  t3421 = t944*t3420;
  t3426 = t611*t2945;
  t3432 = t495*t3420;
  t3435 = t3426 + t3432;
  t3472 = 0.400559*t3435;
  t3488 = -1.*t611*t3420;
  t3497 = t3473 + t3488;
  t3498 = 0.11689*t3497;
  t3499 = t3383 + t3421 + t3472 + t3498;
  t4253 = t492*t493*t1449*t1022;
  t4254 = -1.*t492*t944*t1022*t1739;
  t4258 = 0.400559*t1896;
  t4261 = t495*t492*t493*t1022;
  t4267 = t492*t611*t1022*t1739;
  t4275 = t4261 + t4267;
  t4277 = 0.11689*t4275;
  t4287 = t4253 + t4254 + t4258 + t4277;
  t3693 = t1449*t3685;
  t3698 = t944*t2617;
  t3702 = t611*t3685;
  t3706 = t3702 + t2719;
  t3723 = 0.400559*t3706;
  t3779 = 0.11689*t3769;
  t3788 = t3693 + t3698 + t3723 + t3779;
  t4782 = t493*t1022*t1065;
  t4784 = -1.*t2227*t1739;
  t4785 = t4782 + t4784;
  t3258 = -1.*t611*t3132;
  t3869 = t944*t2945;
  t3885 = t1449*t3132;
  t3888 = 0.11689*t3201;
  t3895 = t611*t3132;
  t3902 = t3473 + t3895;
  t3923 = 0.400559*t3902;
  t4416 = -1.*t492*t493*t944;
  t4453 = -1.*t492*t1449*t1739;
  t4454 = t492*t493*t611;
  t4462 = -1.*t495*t492*t1739;
  t4464 = t4454 + t4462;
  t4466 = 0.11689*t4464;
  t4467 = -1.*t495*t492*t493;
  t4470 = -1.*t492*t611*t1739;
  t4472 = t4467 + t4470;
  t4497 = 0.400559*t4472;
  t4518 = -1.*t493*t1449*t1065;
  t4527 = t944*t1065*t1739;
  t4534 = -1.*t493*t611*t1065;
  t4536 = t495*t1065*t1739;
  t4538 = t4534 + t4536;
  t4544 = 0.400559*t4538;
  t4549 = -1.*t495*t493*t1065;
  t4557 = -1.*t611*t1065*t1739;
  t4567 = t4549 + t4557;
  t4573 = 0.11689*t4567;
  t4574 = t4518 + t4527 + t4544 + t4573;
  t3948 = t2227*t492*t493*t2869;
  t3954 = t2227*t492*t3073*t1739;
  t3958 = 0.400559*t3582;
  t3964 = -1.*t495*t2227*t492*t493;
  t3969 = -1.*t2227*t492*t611*t1739;
  t3972 = t3964 + t3969;
  t3973 = 0.11689*t3972;
  t3974 = t3948 + t3954 + t3958 + t3973;
  t4684 = t3073*t3685;
  t4700 = t2869*t2617;
  t4701 = -1.*t495*t2617;
  t4706 = t3817 + t4701;
  t4707 = 0.11689*t4706;
  t4717 = 0.400559*t3769;
  t4720 = t4684 + t4700 + t4707 + t4717;
  t3827 = -1.*t495*t3685;
  t3829 = -1.*t611*t3815;
  t3833 = t3827 + t3829;
  t3019 = t2869*t2945;
  t3170 = t3073*t3132;
  t3238 = 0.400559*t3201;
  t3245 = -1.*t495*t2945;
  t3259 = t3245 + t3258;
  t3263 = 0.11689*t3259;
  t3362 = t3019 + t3170 + t3238 + t3263;
  t4177 = t492*t493*t2869*t1022;
  t4186 = t492*t3073*t1022*t1739;
  t4195 = -1.*t492*t493*t611*t1022;
  t4204 = t495*t492*t1022*t1739;
  t4220 = t4195 + t4204;
  t4228 = 0.400559*t4220;
  t4236 = 0.11689*t1967;
  t4239 = t4177 + t4186 + t4228 + t4236;
  t3799 = t2869*t3685;
  t3816 = t3073*t3815;
  t3821 = t495*t3815;
  t3823 = t3817 + t3821;
  t3826 = 0.400559*t3823;
  t3851 = 0.11689*t3833;
  t3853 = t3799 + t3816 + t3826 + t3851;
  t4787 = t3073*t4785;
  t4788 = t2869*t3132;
  t4793 = -1.*t611*t4785;
  t4795 = -1.*t495*t3132;
  t4796 = t4793 + t4795;
  t4807 = 0.11689*t4796;
  t4809 = t495*t4785;
  t4815 = t4809 + t3258;
  t4826 = 0.400559*t4815;
  t4827 = t4787 + t4788 + t4807 + t4826;
  t4960 = 0.4*t495;
  t4961 = -0.12*t611;
  t4978 = t4960 + t4961;
  t4882 = t492*t493*t3073;
  t4883 = -1.*t492*t2869*t1739;
  t4884 = -1.*t492*t493*t611;
  t4886 = t495*t492*t1739;
  t4887 = t4884 + t4886;
  t4889 = 0.11689*t4887;
  t4892 = t495*t492*t493;
  t4917 = t492*t611*t1739;
  t4921 = t4892 + t4917;
  t4924 = 0.400559*t4921;
  t4926 = t4882 + t4883 + t4889 + t4924;
  t4612 = -1.*t493*t2869*t1065;
  t4617 = -1.*t3073*t1065*t1739;
  t4620 = t493*t611*t1065;
  t4621 = -1.*t495*t1065*t1739;
  t4624 = t4620 + t4621;
  t4636 = 0.400559*t4624;
  t4647 = t495*t493*t1065;
  t4649 = t611*t1065*t1739;
  t4652 = t4647 + t4649;
  t4660 = 0.11689*t4652;
  t4670 = t4612 + t4617 + t4636 + t4660;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2276 + t2441 + t2661 + t2741 + t2785)*var2[3] + t2141*var2[4] + t3499*var2[5] + t3362*var2[13];
  p_output1[10]=(t3863 + t3869 + t3885 + t3888 + t3923)*var2[3] + t3633*var2[4] + t3788*var2[5] + t3853*var2[13];
  p_output1[11]=0;
  p_output1[12]=t2141*var2[3] + (-1.*t1065*t1449*t1739*t2227 + t2276 + 0.400559*(-1.*t1065*t2227*t493*t495 - 1.*t1065*t1739*t2227*t611) + 0.11689*(-1.*t1065*t1739*t2227*t495 + t1065*t2227*t493*t611) - 1.*t1065*t2227*t493*t944)*var2[4] + t4057*var2[5] + t3974*var2[13];
  p_output1[13]=t3633*var2[3] + (-1.*t1022*t1065*t1449*t1739 + t3863 + 0.400559*(-1.*t1022*t1065*t493*t495 - 1.*t1022*t1065*t1739*t611) + 0.11689*(-1.*t1022*t1065*t1739*t495 + t1022*t1065*t493*t611) - 1.*t1022*t1065*t493*t944)*var2[4] + t4287*var2[5] + t4239*var2[13];
  p_output1[14]=(-0.02441*t1065 + t4416 + t4453 + t4466 + t4497)*var2[4] + t4574*var2[5] + t4670*var2[13];
  p_output1[15]=t3499*var2[3] + t4057*var2[4] + (t2441 + t2661 + t2741 + t2785)*var2[5] + t4720*var2[13];
  p_output1[16]=t3788*var2[3] + t4287*var2[4] + (t3869 + t3885 + t3888 + t3923)*var2[5] + t4827*var2[13];
  p_output1[17]=t4574*var2[4] + (t4416 + t4453 + t4466 + t4497)*var2[5] + t4926*var2[13];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t3362*var2[3] + t3974*var2[4] + t4720*var2[5] + (t2869*t3815 + 0.400559*t3833 + 0.11689*(t3702 - 1.*t3815*t495) + t3685*t4978)*var2[13];
  p_output1[40]=t3853*var2[3] + t4239*var2[4] + t4827*var2[5] + (t2869*t3420 + 0.400559*(t3488 - 1.*t4785*t495) + t4785*t4978 + 0.11689*(-1.*t3420*t495 + t4785*t611))*var2[13];
  p_output1[41]=t4670*var2[4] + t4926*var2[5] + (t4466 + t4497 + t1739*t2869*t492 + t492*t493*t4978)*var2[13];
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
}



void dJp_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

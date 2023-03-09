/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:34:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shin_to_tarsus_left_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1949;
  double t1671;
  double t2028;
  double t1729;
  double t2180;
  double t3212;
  double t641;
  double t2620;
  double t2627;
  double t2642;
  double t1823;
  double t2301;
  double t2314;
  double t2644;
  double t3052;
  double t3089;
  double t3148;
  double t3380;
  double t3382;
  double t3386;
  double t3288;
  double t3290;
  double t3297;
  double t3043;
  double t3332;
  double t3343;
  double t3657;
  double t3672;
  double t3677;
  double t3510;
  double t3512;
  double t3213;
  double t3220;
  double t3226;
  double t3233;
  double t3768;
  double t3773;
  double t3777;
  double t3795;
  double t3797;
  double t3798;
  double t3683;
  double t3698;
  double t3702;
  double t3705;
  double t3708;
  double t3719;
  double t3801;
  double t3740;
  double t3751;
  double t3756;
  double t3758;
  double t3759;
  double t3761;
  double t3638;
  double t3642;
  double t3646;
  double t3619;
  double t3720;
  double t3730;
  double t3738;
  double t3767;
  double t3803;
  double t3805;
  double t3814;
  double t3819;
  double t3821;
  double t3837;
  double t3838;
  double t3855;
  double t3857;
  double t3858;
  double t3861;
  double t3883;
  double t3886;
  double t3890;
  double t3898;
  double t3923;
  double t3925;
  double t3926;
  double t3927;
  double t3948;
  double t3955;
  double t3956;
  double t3957;
  double t4003;
  double t4007;
  double t4009;
  double t3820;
  double t3822;
  double t3834;
  double t3905;
  double t3907;
  double t3919;
  double t3959;
  double t3960;
  double t3971;
  double t3987;
  double t3988;
  double t3991;
  double t3994;
  double t3995;
  double t3996;
  double t3997;
  double t4026;
  double t4028;
  double t4031;
  double t4033;
  double t4034;
  double t4040;
  double t4044;
  double t4050;
  double t4051;
  double t4054;
  double t4100;
  double t4110;
  double t4162;
  double t4172;
  double t3962;
  double t3963;
  double t3620;
  double t3627;
  double t660;
  double t727;
  double t779;
  double t1534;
  double t2870;
  double t2898;
  double t3189;
  double t3222;
  double t3234;
  double t3239;
  double t4497;
  double t4505;
  double t4511;
  double t4482;
  double t4484;
  double t4490;
  double t3310;
  double t3312;
  double t3352;
  double t3356;
  double t3496;
  double t3508;
  double t3522;
  double t3608;
  double t4540;
  double t4542;
  double t4544;
  double t4527;
  double t4528;
  double t4530;
  double t4611;
  double t4618;
  double t4621;
  double t4626;
  double t4562;
  double t4569;
  double t4574;
  double t4580;
  double t4596;
  double t4597;
  double t4603;
  double t4608;
  double t4583;
  double t4610;
  double t4654;
  double t4664;
  double t4680;
  double t4712;
  double t4715;
  double t4718;
  double t4724;
  double t4726;
  double t4728;
  double t4732;
  double t4017;
  double t4024;
  double t4071;
  double t4072;
  double t4674;
  double t4719;
  double t4745;
  double t4758;
  double t4764;
  double t4765;
  double t4767;
  double t4783;
  double t4787;
  double t4795;
  double t4815;
  double t4833;
  double t4143;
  double t4157;
  double t4198;
  double t4199;
  double t4203;
  double t4208;
  double t4221;
  double t4222;
  double t4223;
  double t4224;
  double t4230;
  double t4234;
  double t4246;
  double t4251;
  double t4261;
  double t4262;
  double t4270;
  double t4273;
  double t4290;
  double t4293;
  double t4297;
  double t4327;
  double t4351;
  double t4373;
  double t4384;
  double t4390;
  double t4409;
  double t4417;
  double t4419;
  double t4424;
  double t4433;
  double t4434;
  double t4444;
  double t4447;
  double t4458;
  double t4461;
  double t4466;
  double t4468;
  double t4990;
  double t4996;
  double t5011;
  double t4969;
  double t4971;
  double t4977;
  double t5082;
  double t5117;
  double t5125;
  double t5132;
  double t5019;
  double t5022;
  double t5027;
  double t5034;
  double t5044;
  double t5048;
  double t5052;
  double t5057;
  double t5042;
  double t5069;
  double t5133;
  double t5144;
  double t5162;
  double t5166;
  double t5168;
  double t5187;
  double t5208;
  double t5210;
  double t5211;
  double t5215;
  double t5161;
  double t5189;
  double t5221;
  double t5227;
  double t5232;
  double t5233;
  double t5234;
  double t5235;
  double t5248;
  double t5251;
  double t5252;
  double t5262;
  t1949 = Cos(var1[3]);
  t1671 = Cos(var1[5]);
  t2028 = Sin(var1[4]);
  t1729 = Sin(var1[3]);
  t2180 = Sin(var1[5]);
  t3212 = Sin(var1[7]);
  t641 = Cos(var1[6]);
  t2620 = t1949*t1671*t2028;
  t2627 = t1729*t2180;
  t2642 = t2620 + t2627;
  t1823 = -1.*t1671*t1729;
  t2301 = t1949*t2028*t2180;
  t2314 = t1823 + t2301;
  t2644 = Sin(var1[6]);
  t3052 = Cos(var1[7]);
  t3089 = -1.*t3052;
  t3148 = 1. + t3089;
  t3380 = t641*t2314;
  t3382 = -1.*t2642*t2644;
  t3386 = t3380 + t3382;
  t3288 = t641*t2642;
  t3290 = t2314*t2644;
  t3297 = t3288 + t3290;
  t3043 = Cos(var1[4]);
  t3332 = 0.366501*t3212;
  t3343 = 0. + t3332;
  t3657 = Cos(var1[8]);
  t3672 = -1.*t3657;
  t3677 = 1. + t3672;
  t3510 = 0.930418*t3212;
  t3512 = 0. + t3510;
  t3213 = -0.930418*t3212;
  t3220 = 0. + t3213;
  t3226 = -0.366501*t3212;
  t3233 = 0. + t3226;
  t3768 = -1.000000637725*t3148;
  t3773 = 1. + t3768;
  t3777 = t1949*t3043*t3773;
  t3795 = t3386*t3220;
  t3797 = t3297*t3233;
  t3798 = t3777 + t3795 + t3797;
  t3683 = -0.340999127418*t3148*t3386;
  t3698 = -0.134322983001*t3148;
  t3702 = 1. + t3698;
  t3705 = t3702*t3297;
  t3708 = t1949*t3043*t3343;
  t3719 = t3683 + t3705 + t3708;
  t3801 = Sin(var1[8]);
  t3740 = -0.8656776547239999*t3148;
  t3751 = 1. + t3740;
  t3756 = t3751*t3386;
  t3758 = -0.340999127418*t3148*t3297;
  t3759 = t1949*t3043*t3512;
  t3761 = t3756 + t3758 + t3759;
  t3638 = Cos(var1[9]);
  t3642 = -1.*t3638;
  t3646 = 1. + t3642;
  t3619 = Sin(var1[10]);
  t3720 = 0.340999127418*t3677*t3719;
  t3730 = -0.134322983001*t3677;
  t3738 = 1. + t3730;
  t3767 = t3738*t3761;
  t3803 = -0.366501*t3801;
  t3805 = 0. + t3803;
  t3814 = t3798*t3805;
  t3819 = t3720 + t3767 + t3814;
  t3821 = Sin(var1[9]);
  t3837 = -1.000000637725*t3677;
  t3838 = 1. + t3837;
  t3855 = t3838*t3798;
  t3857 = -0.930418*t3801;
  t3858 = 0. + t3857;
  t3861 = t3719*t3858;
  t3883 = 0.366501*t3801;
  t3886 = 0. + t3883;
  t3890 = t3761*t3886;
  t3898 = t3855 + t3861 + t3890;
  t3923 = -0.8656776547239999*t3677;
  t3925 = 1. + t3923;
  t3926 = t3925*t3719;
  t3927 = 0.340999127418*t3677*t3761;
  t3948 = 0.930418*t3801;
  t3955 = 0. + t3948;
  t3956 = t3798*t3955;
  t3957 = t3926 + t3927 + t3956;
  t4003 = Cos(var1[10]);
  t4007 = -1.*t4003;
  t4009 = 1. + t4007;
  t3820 = 0.340999127418*t3646*t3819;
  t3822 = -0.930418*t3821;
  t3834 = 0. + t3822;
  t3905 = t3834*t3898;
  t3907 = -0.8656776547239999*t3646;
  t3919 = 1. + t3907;
  t3959 = t3919*t3957;
  t3960 = t3820 + t3905 + t3959;
  t3971 = -0.134322983001*t3646;
  t3987 = 1. + t3971;
  t3988 = t3987*t3819;
  t3991 = 0.366501*t3821;
  t3994 = 0. + t3991;
  t3995 = t3994*t3898;
  t3996 = 0.340999127418*t3646*t3957;
  t3997 = t3988 + t3995 + t3996;
  t4026 = -0.366501*t3821;
  t4028 = 0. + t4026;
  t4031 = t4028*t3819;
  t4033 = -1.000000637725*t3646;
  t4034 = 1. + t4033;
  t4040 = t4034*t3898;
  t4044 = 0.930418*t3821;
  t4050 = 0. + t4044;
  t4051 = t4050*t3957;
  t4054 = t4031 + t4040 + t4051;
  t4100 = -0.930418*t3619;
  t4110 = 0. + t4100;
  t4162 = 0.366501*t3619;
  t4172 = 0. + t4162;
  t3962 = -0.366501*t3619;
  t3963 = 0. + t3962;
  t3620 = 0.930418*t3619;
  t3627 = 0. + t3620;
  t660 = -1.*t641;
  t727 = 1. + t660;
  t779 = 0.091*t727;
  t1534 = 0. + t779;
  t2870 = 0.091*t2644;
  t2898 = 0. + t2870;
  t3189 = -0.04500040093286238*t3148;
  t3222 = 0.07877663122399998*t3220;
  t3234 = 0.031030906668*t3233;
  t3239 = 0. + t3189 + t3222 + t3234;
  t4497 = t1671*t1729*t2028;
  t4505 = -1.*t1949*t2180;
  t4511 = t4497 + t4505;
  t4482 = t1949*t1671;
  t4484 = t1729*t2028*t2180;
  t4490 = t4482 + t4484;
  t3310 = -3.2909349868922137e-7*var1[7];
  t3312 = 0.03103092645718495*t3148;
  t3352 = -0.045000372235*t3343;
  t3356 = t3310 + t3312 + t3352;
  t3496 = 1.296332362046933e-7*var1[7];
  t3508 = 0.07877668146182712*t3148;
  t3522 = -0.045000372235*t3512;
  t3608 = t3496 + t3508 + t3522;
  t4540 = t641*t4490;
  t4542 = -1.*t4511*t2644;
  t4544 = t4540 + t4542;
  t4527 = t641*t4511;
  t4528 = t4490*t2644;
  t4530 = t4527 + t4528;
  t4611 = t3043*t3773*t1729;
  t4618 = t4544*t3220;
  t4621 = t4530*t3233;
  t4626 = t4611 + t4618 + t4621;
  t4562 = -0.340999127418*t3148*t4544;
  t4569 = t3702*t4530;
  t4574 = t3043*t1729*t3343;
  t4580 = t4562 + t4569 + t4574;
  t4596 = t3751*t4544;
  t4597 = -0.340999127418*t3148*t4530;
  t4603 = t3043*t1729*t3512;
  t4608 = t4596 + t4597 + t4603;
  t4583 = 0.340999127418*t3677*t4580;
  t4610 = t3738*t4608;
  t4654 = t4626*t3805;
  t4664 = t4583 + t4610 + t4654;
  t4680 = t3838*t4626;
  t4712 = t4580*t3858;
  t4715 = t4608*t3886;
  t4718 = t4680 + t4712 + t4715;
  t4724 = t3925*t4580;
  t4726 = 0.340999127418*t3677*t4608;
  t4728 = t4626*t3955;
  t4732 = t4724 + t4726 + t4728;
  t4017 = -1.000000637725*t4009;
  t4024 = 1. + t4017;
  t4071 = -0.8656776547239999*t4009;
  t4072 = 1. + t4071;
  t4674 = 0.340999127418*t3646*t4664;
  t4719 = t3834*t4718;
  t4745 = t3919*t4732;
  t4758 = t4674 + t4719 + t4745;
  t4764 = t3987*t4664;
  t4765 = t3994*t4718;
  t4767 = 0.340999127418*t3646*t4732;
  t4783 = t4764 + t4765 + t4767;
  t4787 = t4028*t4664;
  t4795 = t4034*t4718;
  t4815 = t4050*t4732;
  t4833 = t4787 + t4795 + t4815;
  t4143 = -0.134322983001*t4009;
  t4157 = 1. + t4143;
  t4198 = 2.281945176511838e-8*var1[10];
  t4199 = -0.5905366811997648*t4009;
  t4203 = -0.262809976934*t4110;
  t4208 = t4198 + t4199 + t4203;
  t4221 = 5.7930615939377813e-8*var1[10];
  t4222 = 0.23261833304643187*t4009;
  t4223 = -0.262809976934*t4172;
  t4224 = t4221 + t4222 + t4223;
  t4230 = -0.26281014453449253*t4009;
  t4234 = 0.23261818470000004*t3963;
  t4246 = -0.5905363046000001*t3627;
  t4251 = 0. + t4230 + t4234 + t4246;
  t4261 = 3.2909349868922137e-7*var1[8];
  t4262 = 0.055653945343889656*t3677;
  t4270 = -0.045000372235*t3805;
  t4273 = t4261 + t4262 + t4270;
  t4290 = -1.5981976069815686e-7*var1[9];
  t4293 = 0.08675267452931407*t3646;
  t4297 = 0.039853013046*t3994;
  t4327 = t4290 + t4293 + t4297;
  t4351 = -0.04500040093286238*t3677;
  t4373 = -0.141285834136*t3858;
  t4384 = 0.055653909852*t3886;
  t4390 = 0. + t4351 + t4373 + t4384;
  t4409 = 0.039853038461262744*t3646;
  t4417 = 0.086752619205*t4028;
  t4419 = -0.22023459268999998*t4050;
  t4424 = 0. + t4409 + t4417 + t4419;
  t4433 = 1.296332362046933e-7*var1[8];
  t4434 = -0.14128592423750855*t3677;
  t4444 = -0.045000372235*t3955;
  t4447 = t4433 + t4434 + t4444;
  t4458 = -6.295460977284962e-8*var1[9];
  t4461 = -0.22023473313910558*t3646;
  t4466 = 0.039853013046*t3834;
  t4468 = t4458 + t4461 + t4466;
  t4990 = t3043*t641*t2180;
  t4996 = -1.*t3043*t1671*t2644;
  t5011 = t4990 + t4996;
  t4969 = t3043*t1671*t641;
  t4971 = t3043*t2180*t2644;
  t4977 = t4969 + t4971;
  t5082 = -1.*t3773*t2028;
  t5117 = t5011*t3220;
  t5125 = t4977*t3233;
  t5132 = t5082 + t5117 + t5125;
  t5019 = -0.340999127418*t3148*t5011;
  t5022 = t3702*t4977;
  t5027 = -1.*t2028*t3343;
  t5034 = t5019 + t5022 + t5027;
  t5044 = t3751*t5011;
  t5048 = -0.340999127418*t3148*t4977;
  t5052 = -1.*t2028*t3512;
  t5057 = t5044 + t5048 + t5052;
  t5042 = 0.340999127418*t3677*t5034;
  t5069 = t3738*t5057;
  t5133 = t5132*t3805;
  t5144 = t5042 + t5069 + t5133;
  t5162 = t3838*t5132;
  t5166 = t5034*t3858;
  t5168 = t5057*t3886;
  t5187 = t5162 + t5166 + t5168;
  t5208 = t3925*t5034;
  t5210 = 0.340999127418*t3677*t5057;
  t5211 = t5132*t3955;
  t5215 = t5208 + t5210 + t5211;
  t5161 = 0.340999127418*t3646*t5144;
  t5189 = t3834*t5187;
  t5221 = t3919*t5215;
  t5227 = t5161 + t5189 + t5221;
  t5232 = t3987*t5144;
  t5233 = t3994*t5187;
  t5234 = 0.340999127418*t3646*t5215;
  t5235 = t5232 + t5233 + t5234;
  t5248 = t4028*t5144;
  t5251 = t4034*t5187;
  t5252 = t4050*t5215;
  t5262 = t5248 + t5251 + t5252;
  p_output1[0]=0. + t1534*t2314 + t2642*t2898 + t1949*t3043*t3239 + t3297*t3356 + t3386*t3608 - 0.26281*(t3627*t3960 + t3963*t3997 + t4024*t4054) - 0.559688*(0.340999127418*t3997*t4009 + t3960*t4072 + t4054*t4110) + 0.310929*(0.340999127418*t3960*t4009 + t3997*t4157 + t4054*t4172) + t3960*t4208 + t3997*t4224 + t4054*t4251 + t3761*t4273 + t3819*t4327 + t3798*t4390 + t3898*t4424 + t3719*t4447 + t3957*t4468 + var1[0];
  p_output1[1]=0. + t1729*t3043*t3239 + t1534*t4490 + t2898*t4511 + t3356*t4530 + t3608*t4544 + t4447*t4580 + t4273*t4608 + t4390*t4626 + t4327*t4664 + t4424*t4718 + t4468*t4732 + t4208*t4758 + t4224*t4783 + t4251*t4833 - 0.26281*(t3627*t4758 + t3963*t4783 + t4024*t4833) - 0.559688*(t4072*t4758 + 0.340999127418*t4009*t4783 + t4110*t4833) + 0.310929*(0.340999127418*t4009*t4758 + t4157*t4783 + t4172*t4833) + var1[1];
  p_output1[2]=0. + t1534*t2180*t3043 + t1671*t2898*t3043 - 1.*t2028*t3239 + t3356*t4977 + t3608*t5011 + t4447*t5034 + t4273*t5057 + t4390*t5132 + t4327*t5144 + t4424*t5187 + t4468*t5215 + t4208*t5227 + t4224*t5235 + t4251*t5262 - 0.26281*(t3627*t5227 + t3963*t5235 + t4024*t5262) - 0.559688*(t4072*t5227 + 0.340999127418*t4009*t5235 + t4110*t5262) + 0.310929*(0.340999127418*t4009*t5227 + t4157*t5235 + t4172*t5262) + var1[2];
}



void p_shin_to_tarsus_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

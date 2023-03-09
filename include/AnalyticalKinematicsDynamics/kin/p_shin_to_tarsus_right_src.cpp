/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:45:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shin_to_tarsus_right_src.h"

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
  double t256;
  double t28;
  double t1422;
  double t1638;
  double t1466;
  double t1730;
  double t85;
  double t110;
  double t194;
  double t1219;
  double t1576;
  double t1738;
  double t1770;
  double t1969;
  double t2045;
  double t2066;
  double t2112;
  double t78;
  double t2844;
  double t2862;
  double t2686;
  double t2720;
  double t2752;
  double t2982;
  double t2989;
  double t3026;
  double t3087;
  double t3089;
  double t3109;
  double t3118;
  double t2573;
  double t2633;
  double t274;
  double t322;
  double t966;
  double t1047;
  double t3484;
  double t3384;
  double t3396;
  double t3179;
  double t3181;
  double t3196;
  double t3227;
  double t3237;
  double t3245;
  double t3370;
  double t3372;
  double t3323;
  double t3326;
  double t3338;
  double t3339;
  double t3357;
  double t3358;
  double t3410;
  double t3411;
  double t3412;
  double t3421;
  double t3422;
  double t3434;
  double t3445;
  double t3451;
  double t3454;
  double t3148;
  double t3156;
  double t3300;
  double t3304;
  double t3729;
  double t3735;
  double t3588;
  double t3597;
  double t3598;
  double t3600;
  double t3612;
  double t3617;
  double t3660;
  double t3661;
  double t3687;
  double t3690;
  double t3692;
  double t3701;
  double t3751;
  double t3755;
  double t3768;
  double t3769;
  double t3771;
  double t3775;
  double t3808;
  double t3809;
  double t3810;
  double t3820;
  double t3634;
  double t3642;
  double t3487;
  double t3488;
  double t3505;
  double t3515;
  double t3923;
  double t3924;
  double t3833;
  double t3835;
  double t3839;
  double t3841;
  double t3842;
  double t3844;
  double t3914;
  double t3919;
  double t3874;
  double t3877;
  double t3882;
  double t3884;
  double t3895;
  double t3896;
  double t3939;
  double t3946;
  double t3949;
  double t3955;
  double t3956;
  double t3958;
  double t3821;
  double t3822;
  double t3865;
  double t3866;
  double t228;
  double t520;
  double t1062;
  double t1077;
  double t1288;
  double t1399;
  double t2004;
  double t2019;
  double t2035;
  double t2036;
  double t2281;
  double t2504;
  double t2640;
  double t2645;
  double t4043;
  double t4046;
  double t4051;
  double t4053;
  double t4062;
  double t4072;
  double t2767;
  double t2803;
  double t2968;
  double t2974;
  double t3085;
  double t3114;
  double t3162;
  double t3176;
  double t4076;
  double t4077;
  double t4078;
  double t4087;
  double t4088;
  double t4090;
  double t3270;
  double t3289;
  double t3306;
  double t3318;
  double t3369;
  double t3374;
  double t3403;
  double t3407;
  double t3483;
  double t3501;
  double t3584;
  double t3587;
  double t4095;
  double t4100;
  double t4102;
  double t4105;
  double t4115;
  double t4118;
  double t4119;
  double t4120;
  double t4127;
  double t4130;
  double t4135;
  double t4136;
  double t3629;
  double t3632;
  double t3650;
  double t3658;
  double t3725;
  double t3726;
  double t3741;
  double t3746;
  double t3806;
  double t3818;
  double t3825;
  double t3830;
  double t4148;
  double t4159;
  double t4179;
  double t4210;
  double t4271;
  double t4277;
  double t4284;
  double t4292;
  double t4309;
  double t4322;
  double t4327;
  double t4335;
  double t3847;
  double t3850;
  double t3867;
  double t3870;
  double t3900;
  double t3920;
  double t3934;
  double t3937;
  double t4353;
  double t4359;
  double t4360;
  double t4363;
  double t4370;
  double t4373;
  double t4384;
  double t4386;
  double t3977;
  double t3979;
  double t4390;
  double t4394;
  double t4395;
  double t4400;
  double t3986;
  double t3988;
  double t4021;
  double t4024;
  double t4533;
  double t4536;
  double t4537;
  double t4565;
  double t4566;
  double t4570;
  double t4578;
  double t4585;
  double t4587;
  double t4591;
  double t4598;
  double t4601;
  double t4602;
  double t4609;
  double t4616;
  double t4617;
  double t4619;
  double t4621;
  double t4627;
  double t4628;
  double t4634;
  double t4635;
  double t4651;
  double t4658;
  double t4659;
  double t4670;
  double t4679;
  double t4680;
  double t4688;
  double t4689;
  double t4710;
  double t4713;
  double t4714;
  double t4715;
  double t4738;
  double t4739;
  double t4740;
  double t4741;
  double t4746;
  double t4747;
  double t4752;
  double t4753;
  t256 = Sin(var1[18]);
  t28 = Cos(var1[3]);
  t1422 = Cos(var1[5]);
  t1638 = Sin(var1[3]);
  t1466 = Sin(var1[4]);
  t1730 = Sin(var1[5]);
  t85 = Cos(var1[18]);
  t110 = -1.*t85;
  t194 = 1. + t110;
  t1219 = Sin(var1[17]);
  t1576 = t28*t1422*t1466;
  t1738 = t1638*t1730;
  t1770 = t1576 + t1738;
  t1969 = Cos(var1[17]);
  t2045 = -1.*t1422*t1638;
  t2066 = t28*t1466*t1730;
  t2112 = t2045 + t2066;
  t78 = Cos(var1[4]);
  t2844 = -0.366501*t256;
  t2862 = 0. + t2844;
  t2686 = -1.*t1219*t1770;
  t2720 = t1969*t2112;
  t2752 = t2686 + t2720;
  t2982 = t1969*t1770;
  t2989 = t1219*t2112;
  t3026 = t2982 + t2989;
  t3087 = Cos(var1[19]);
  t3089 = -1.*t3087;
  t3109 = 1. + t3089;
  t3118 = Sin(var1[19]);
  t2573 = 0.930418*t256;
  t2633 = 0. + t2573;
  t274 = -0.930418*t256;
  t322 = 0. + t274;
  t966 = 0.366501*t256;
  t1047 = 0. + t966;
  t3484 = Sin(var1[20]);
  t3384 = 0.930418*t3118;
  t3396 = 0. + t3384;
  t3179 = t28*t78*t2862;
  t3181 = 0.340999127418*t194*t2752;
  t3196 = -0.134322983001*t194;
  t3227 = 1. + t3196;
  t3237 = t3227*t3026;
  t3245 = t3179 + t3181 + t3237;
  t3370 = 0.366501*t3118;
  t3372 = 0. + t3370;
  t3323 = t28*t78*t2633;
  t3326 = -0.8656776547239999*t194;
  t3338 = 1. + t3326;
  t3339 = t3338*t2752;
  t3357 = 0.340999127418*t194*t3026;
  t3358 = t3323 + t3339 + t3357;
  t3410 = -1.000000637725*t194;
  t3411 = 1. + t3410;
  t3412 = t3411*t28*t78;
  t3421 = t322*t2752;
  t3422 = t1047*t3026;
  t3434 = t3412 + t3421 + t3422;
  t3445 = Cos(var1[20]);
  t3451 = -1.*t3445;
  t3454 = 1. + t3451;
  t3148 = -0.930418*t3118;
  t3156 = 0. + t3148;
  t3300 = -0.366501*t3118;
  t3304 = 0. + t3300;
  t3729 = 0.366501*t3484;
  t3735 = 0. + t3729;
  t3588 = t3396*t3245;
  t3597 = t3372*t3358;
  t3598 = -1.000000637725*t3109;
  t3600 = 1. + t3598;
  t3612 = t3600*t3434;
  t3617 = t3588 + t3597 + t3612;
  t3660 = -0.8656776547239999*t3109;
  t3661 = 1. + t3660;
  t3687 = t3661*t3245;
  t3690 = -0.340999127418*t3109*t3358;
  t3692 = t3156*t3434;
  t3701 = t3687 + t3690 + t3692;
  t3751 = -0.340999127418*t3109*t3245;
  t3755 = -0.134322983001*t3109;
  t3768 = 1. + t3755;
  t3769 = t3768*t3358;
  t3771 = t3304*t3434;
  t3775 = t3751 + t3769 + t3771;
  t3808 = Cos(var1[21]);
  t3809 = -1.*t3808;
  t3810 = 1. + t3809;
  t3820 = Sin(var1[21]);
  t3634 = 0.930418*t3484;
  t3642 = 0. + t3634;
  t3487 = -0.930418*t3484;
  t3488 = 0. + t3487;
  t3505 = -0.366501*t3484;
  t3515 = 0. + t3505;
  t3923 = -0.366501*t3820;
  t3924 = 0. + t3923;
  t3833 = t3735*t3617;
  t3835 = -0.340999127418*t3454*t3701;
  t3839 = -0.134322983001*t3454;
  t3841 = 1. + t3839;
  t3842 = t3841*t3775;
  t3844 = t3833 + t3835 + t3842;
  t3914 = -0.930418*t3820;
  t3919 = 0. + t3914;
  t3874 = t3642*t3617;
  t3877 = -0.8656776547239999*t3454;
  t3882 = 1. + t3877;
  t3884 = t3882*t3701;
  t3895 = -0.340999127418*t3454*t3775;
  t3896 = t3874 + t3884 + t3895;
  t3939 = -1.000000637725*t3454;
  t3946 = 1. + t3939;
  t3949 = t3946*t3617;
  t3955 = t3488*t3701;
  t3956 = t3515*t3775;
  t3958 = t3949 + t3955 + t3956;
  t3821 = 0.366501*t3820;
  t3822 = 0. + t3821;
  t3865 = 0.930418*t3820;
  t3866 = 0. + t3865;
  t228 = -0.04500040093286238*t194;
  t520 = -0.07877663122399998*t322;
  t1062 = 0.031030906668*t1047;
  t1077 = 0. + t228 + t520 + t1062;
  t1288 = -0.091*t1219;
  t1399 = 0. + t1288;
  t2004 = -1.*t1969;
  t2019 = 1. + t2004;
  t2035 = -0.091*t2019;
  t2036 = 0. + t2035;
  t2281 = 1.296332362046933e-7*var1[18];
  t2504 = -0.07877668146182712*t194;
  t2640 = -0.045000372235*t2633;
  t2645 = t2281 + t2504 + t2640;
  t4043 = t1422*t1638*t1466;
  t4046 = -1.*t28*t1730;
  t4051 = t4043 + t4046;
  t4053 = t28*t1422;
  t4062 = t1638*t1466*t1730;
  t4072 = t4053 + t4062;
  t2767 = 3.2909349868922137e-7*var1[18];
  t2803 = 0.03103092645718495*t194;
  t2968 = -0.045000372235*t2862;
  t2974 = t2767 + t2803 + t2968;
  t3085 = -1.296332362046933e-7*var1[19];
  t3114 = -0.14128592423750855*t3109;
  t3162 = -0.045000372235*t3156;
  t3176 = t3085 + t3114 + t3162;
  t4076 = -1.*t1219*t4051;
  t4077 = t1969*t4072;
  t4078 = t4076 + t4077;
  t4087 = t1969*t4051;
  t4088 = t1219*t4072;
  t4090 = t4087 + t4088;
  t3270 = 3.2909349868922137e-7*var1[19];
  t3289 = -0.055653945343889656*t3109;
  t3306 = -0.045000372235*t3304;
  t3318 = t3270 + t3289 + t3306;
  t3369 = -0.04500040093286238*t3109;
  t3374 = -0.055653909852*t3372;
  t3403 = -0.141285834136*t3396;
  t3407 = 0. + t3369 + t3374 + t3403;
  t3483 = 0.039853038461262744*t3454;
  t3501 = -0.22023459268999998*t3488;
  t3584 = -0.086752619205*t3515;
  t3587 = 0. + t3483 + t3501 + t3584;
  t4095 = t78*t2862*t1638;
  t4100 = 0.340999127418*t194*t4078;
  t4102 = t3227*t4090;
  t4105 = t4095 + t4100 + t4102;
  t4115 = t78*t2633*t1638;
  t4118 = t3338*t4078;
  t4119 = 0.340999127418*t194*t4090;
  t4120 = t4115 + t4118 + t4119;
  t4127 = t3411*t78*t1638;
  t4130 = t322*t4078;
  t4135 = t1047*t4090;
  t4136 = t4127 + t4130 + t4135;
  t3629 = 6.295460977284962e-8*var1[20];
  t3632 = -0.22023473313910558*t3454;
  t3650 = 0.039853013046*t3642;
  t3658 = t3629 + t3632 + t3650;
  t3725 = -1.5981976069815686e-7*var1[20];
  t3726 = -0.08675267452931407*t3454;
  t3741 = 0.039853013046*t3735;
  t3746 = t3725 + t3726 + t3741;
  t3806 = 5.7930615939377813e-8*var1[21];
  t3818 = -0.23261833304643187*t3810;
  t3825 = -0.262809976934*t3822;
  t3830 = t3806 + t3818 + t3825;
  t4148 = t3396*t4105;
  t4159 = t3372*t4120;
  t4179 = t3600*t4136;
  t4210 = t4148 + t4159 + t4179;
  t4271 = t3661*t4105;
  t4277 = -0.340999127418*t3109*t4120;
  t4284 = t3156*t4136;
  t4292 = t4271 + t4277 + t4284;
  t4309 = -0.340999127418*t3109*t4105;
  t4322 = t3768*t4120;
  t4327 = t3304*t4136;
  t4335 = t4309 + t4322 + t4327;
  t3847 = -2.281945176511838e-8*var1[21];
  t3850 = -0.5905366811997648*t3810;
  t3867 = -0.262809976934*t3866;
  t3870 = t3847 + t3850 + t3867;
  t3900 = -0.26281014453449253*t3810;
  t3920 = -0.5905363046000001*t3919;
  t3934 = -0.23261818470000004*t3924;
  t3937 = 0. + t3900 + t3920 + t3934;
  t4353 = t3735*t4210;
  t4359 = -0.340999127418*t3454*t4292;
  t4360 = t3841*t4335;
  t4363 = t4353 + t4359 + t4360;
  t4370 = t3642*t4210;
  t4373 = t3882*t4292;
  t4384 = -0.340999127418*t3454*t4335;
  t4386 = t4370 + t4373 + t4384;
  t3977 = -1.000000637725*t3810;
  t3979 = 1. + t3977;
  t4390 = t3946*t4210;
  t4394 = t3488*t4292;
  t4395 = t3515*t4335;
  t4400 = t4390 + t4394 + t4395;
  t3986 = -0.134322983001*t3810;
  t3988 = 1. + t3986;
  t4021 = -0.8656776547239999*t3810;
  t4024 = 1. + t4021;
  t4533 = -1.*t78*t1422*t1219;
  t4536 = t1969*t78*t1730;
  t4537 = t4533 + t4536;
  t4565 = t1969*t78*t1422;
  t4566 = t78*t1219*t1730;
  t4570 = t4565 + t4566;
  t4578 = -1.*t2862*t1466;
  t4585 = 0.340999127418*t194*t4537;
  t4587 = t3227*t4570;
  t4591 = t4578 + t4585 + t4587;
  t4598 = -1.*t2633*t1466;
  t4601 = t3338*t4537;
  t4602 = 0.340999127418*t194*t4570;
  t4609 = t4598 + t4601 + t4602;
  t4616 = -1.*t3411*t1466;
  t4617 = t322*t4537;
  t4619 = t1047*t4570;
  t4621 = t4616 + t4617 + t4619;
  t4627 = t3396*t4591;
  t4628 = t3372*t4609;
  t4634 = t3600*t4621;
  t4635 = t4627 + t4628 + t4634;
  t4651 = t3661*t4591;
  t4658 = -0.340999127418*t3109*t4609;
  t4659 = t3156*t4621;
  t4670 = t4651 + t4658 + t4659;
  t4679 = -0.340999127418*t3109*t4591;
  t4680 = t3768*t4609;
  t4688 = t3304*t4621;
  t4689 = t4679 + t4680 + t4688;
  t4710 = t3735*t4635;
  t4713 = -0.340999127418*t3454*t4670;
  t4714 = t3841*t4689;
  t4715 = t4710 + t4713 + t4714;
  t4738 = t3642*t4635;
  t4739 = t3882*t4670;
  t4740 = -0.340999127418*t3454*t4689;
  t4741 = t4738 + t4739 + t4740;
  t4746 = t3946*t4635;
  t4747 = t3488*t4670;
  t4752 = t3515*t4689;
  t4753 = t4746 + t4747 + t4752;
  p_output1[0]=0. + t1399*t1770 + t2036*t2112 + t2645*t2752 + t2974*t3026 + t3176*t3245 + t3318*t3358 + t3407*t3434 + t3587*t3617 + t3658*t3701 + t3746*t3775 + t3830*t3844 + t3870*t3896 + t3937*t3958 - 0.26281*(t3896*t3919 + t3844*t3924 + t3958*t3979) - 0.310929*(-0.340999127418*t3810*t3896 + t3822*t3958 + t3844*t3988) - 0.559688*(-0.340999127418*t3810*t3844 + t3866*t3958 + t3896*t4024) + t1077*t28*t78 + var1[0];
  p_output1[1]=0. + t1399*t4051 + t2036*t4072 + t2645*t4078 + t2974*t4090 + t3176*t4105 + t3318*t4120 + t3407*t4136 + t3587*t4210 + t3658*t4292 + t3746*t4335 + t3830*t4363 + t3870*t4386 + t3937*t4400 - 0.310929*(t3988*t4363 - 0.340999127418*t3810*t4386 + t3822*t4400) - 0.559688*(-0.340999127418*t3810*t4363 + t4024*t4386 + t3866*t4400) - 0.26281*(t3924*t4363 + t3919*t4386 + t3979*t4400) + t1077*t1638*t78 + var1[1];
  p_output1[2]=0. - 1.*t1077*t1466 + t2645*t4537 + t2974*t4570 + t3176*t4591 + t3318*t4609 + t3407*t4621 + t3587*t4635 + t3658*t4670 + t3746*t4689 + t3830*t4715 + t3870*t4741 + t3937*t4753 - 0.310929*(t3988*t4715 - 0.340999127418*t3810*t4741 + t3822*t4753) - 0.559688*(-0.340999127418*t3810*t4715 + t4024*t4741 + t3866*t4753) - 0.26281*(t3924*t4715 + t3919*t4741 + t3979*t4753) + t1399*t1422*t78 + t1730*t2036*t78 + var1[2];
}



void p_shin_to_tarsus_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

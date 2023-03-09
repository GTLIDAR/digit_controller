/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_left_elbow_src.h"

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
  double t599;
  double t615;
  double t618;
  double t39;
  double t101;
  double t356;
  double t1099;
  double t403;
  double t621;
  double t624;
  double t828;
  double t841;
  double t1362;
  double t1511;
  double t1515;
  double t1651;
  double t374;
  double t1890;
  double t1905;
  double t1929;
  double t1980;
  double t2181;
  double t2184;
  double t2225;
  double t2229;
  double t2302;
  double t2376;
  double t2384;
  double t2570;
  double t2592;
  double t2602;
  double t2643;
  double t2645;
  double t2670;
  double t2686;
  double t2890;
  double t2241;
  double t572;
  double t583;
  double t1709;
  double t1808;
  double t1870;
  double t2238;
  double t2258;
  double t2271;
  double t2689;
  double t2690;
  double t3266;
  double t2829;
  double t2853;
  double t2860;
  double t2862;
  double t2869;
  double t2880;
  double t2892;
  double t2900;
  double t2909;
  double t2911;
  double t3047;
  double t3051;
  double t3067;
  double t3082;
  double t3100;
  double t3107;
  double t3114;
  double t3130;
  double t3144;
  double t3156;
  double t3185;
  double t3234;
  double t3236;
  double t3255;
  double t3259;
  double t3271;
  double t3276;
  double t3288;
  double t3291;
  double t3447;
  double t3405;
  double t3410;
  double t3411;
  double t3420;
  double t3439;
  double t3441;
  double t3444;
  double t3445;
  double t3391;
  double t3449;
  double t3451;
  double t3453;
  double t3454;
  double t3460;
  double t3461;
  double t3463;
  double t3484;
  double t3317;
  double t3324;
  double t3325;
  double t3340;
  double t3390;
  double t3532;
  double t3541;
  double t3542;
  double t3446;
  double t3493;
  double t3513;
  double t3548;
  double t3689;
  double t3694;
  double t3697;
  double t3674;
  double t3675;
  double t3676;
  double t3700;
  double t3701;
  double t3704;
  double t3685;
  double t3699;
  double t3707;
  double t3710;
  double t3715;
  double t3718;
  double t3719;
  double t3720;
  double t3748;
  double t3751;
  double t3765;
  double t3767;
  double t3818;
  double t3819;
  double t3828;
  double t3830;
  double t3835;
  double t3841;
  double t3842;
  double t3844;
  double t3796;
  double t3799;
  double t3800;
  double t3801;
  double t3558;
  double t3576;
  double t3856;
  double t3858;
  double t3865;
  double t3833;
  double t3847;
  double t3853;
  double t3910;
  double t3911;
  double t3914;
  double t3919;
  double t3923;
  double t3924;
  double t3926;
  double t3928;
  double t3933;
  double t3938;
  double t3939;
  double t3942;
  double t3922;
  double t3932;
  double t3944;
  double t3962;
  double t3978;
  double t3982;
  double t3983;
  double t3985;
  double t4024;
  double t4026;
  double t4034;
  double t4044;
  double t4142;
  double t4146;
  double t4150;
  double t4153;
  double t4167;
  double t4172;
  double t4173;
  double t4178;
  double t4114;
  double t4118;
  double t4119;
  double t4122;
  double t4186;
  double t4203;
  double t4212;
  double t4162;
  double t4179;
  double t4181;
  double t17;
  double t2711;
  double t2992;
  double t2995;
  double t2997;
  double t3262;
  double t3279;
  double t3292;
  double t3298;
  double t3315;
  double t3341;
  double t3346;
  double t3369;
  double t3373;
  double t3378;
  double t3383;
  double t3516;
  double t3552;
  double t3554;
  double t3555;
  double t3572;
  double t3579;
  double t3597;
  double t3604;
  double t3613;
  double t3630;
  double t3637;
  double t3642;
  double t3673;
  double t3711;
  double t3729;
  double t3738;
  double t3745;
  double t3773;
  double t3775;
  double t3787;
  double t3790;
  double t3795;
  double t3802;
  double t3804;
  double t3806;
  double t3807;
  double t3809;
  double t3810;
  double t3854;
  double t3866;
  double t3867;
  double t3868;
  double t3870;
  double t3872;
  double t3886;
  double t3891;
  double t3894;
  double t3895;
  double t3898;
  double t3905;
  double t3908;
  double t3964;
  double t4002;
  double t4003;
  double t4016;
  double t4055;
  double t4064;
  double t4093;
  double t4094;
  double t4110;
  double t4124;
  double t4126;
  double t4131;
  double t4135;
  double t4138;
  double t4139;
  double t4185;
  double t4239;
  double t4243;
  double t4245;
  double t4246;
  double t4248;
  double t4258;
  double t4284;
  double t4332;
  double t4340;
  double t4400;
  double t4401;
  t599 = Cos(var1[16]);
  t615 = -1.*t599;
  t618 = 1. + t615;
  t39 = Cos(var1[15]);
  t101 = -1.*t39;
  t356 = 1. + t101;
  t1099 = Sin(var1[16]);
  t403 = Sin(var1[15]);
  t621 = -0.9890740084840001*t618;
  t624 = 1. + t621;
  t828 = -0.918819*t624;
  t841 = 0.010039180465428352*t618;
  t1362 = -0.994522*t1099;
  t1511 = 0. + t1362;
  t1515 = 0.382684*t1511;
  t1651 = t828 + t841 + t1515;
  t374 = -0.051978134642000004*t356;
  t1890 = -0.010926102783999999*t618;
  t1905 = 1. + t1890;
  t1929 = 0.096572*t1905;
  t1980 = -0.0955161926444975*t618;
  t2181 = 0.104528*t1099;
  t2184 = 0. + t2181;
  t2225 = 0.382684*t2184;
  t2229 = t1929 + t1980 + t2225;
  t2302 = -1.0000001112680001*t618;
  t2376 = 1. + t2302;
  t2384 = 0.382684*t2376;
  t2570 = -0.104528*t1099;
  t2592 = 0. + t2570;
  t2602 = 0.096572*t2592;
  t2643 = 0.994522*t1099;
  t2645 = 0. + t2643;
  t2670 = -0.918819*t2645;
  t2686 = t2384 + t2602 + t2670;
  t2890 = -0.49726168403800003*t356;
  t2241 = 0.05226439969100001*t356;
  t572 = -0.707107*t403;
  t583 = t374 + t572;
  t1709 = t583*t1651;
  t1808 = -0.9945383682050002*t356;
  t1870 = 1. + t1808;
  t2238 = t1870*t2229;
  t2258 = -0.703234*t403;
  t2271 = t2241 + t2258;
  t2689 = t2271*t2686;
  t2690 = 0. + t1709 + t2238 + t2689;
  t3266 = Sin(var1[14]);
  t2829 = -0.5054634410180001*t356;
  t2853 = 1. + t2829;
  t2860 = t2853*t1651;
  t2862 = 0.707107*t403;
  t2869 = t374 + t2862;
  t2880 = t2869*t2229;
  t2892 = -0.073913*t403;
  t2900 = t2890 + t2892;
  t2909 = t2900*t2686;
  t2911 = 0. + t2860 + t2880 + t2909;
  t3047 = Cos(var1[14]);
  t3051 = -1.*t3047;
  t3067 = 1. + t3051;
  t3082 = -1.0000001112680001*t3067;
  t3100 = 1. + t3082;
  t3107 = 0.073913*t403;
  t3114 = t2890 + t3107;
  t3130 = t3114*t1651;
  t3144 = 0.703234*t403;
  t3156 = t2241 + t3144;
  t3185 = t3156*t2229;
  t3234 = -0.500001190325*t356;
  t3236 = 1. + t3234;
  t3255 = t3236*t2686;
  t3259 = 0. + t3130 + t3185 + t3255;
  t3271 = -0.104528*t3266;
  t3276 = 0. + t3271;
  t3288 = 0.994522*t3266;
  t3291 = 0. + t3288;
  t3447 = Cos(var1[13]);
  t3405 = -0.994522*t3266;
  t3410 = 0. + t3405;
  t3411 = t3410*t3259;
  t3420 = 0.103955395616*t3067*t2690;
  t3439 = -0.9890740084840001*t3067;
  t3441 = 1. + t3439;
  t3444 = t3441*t2911;
  t3445 = 0. + t3411 + t3420 + t3444;
  t3391 = Sin(var1[13]);
  t3449 = 0.104528*t3266;
  t3451 = 0. + t3449;
  t3453 = t3451*t3259;
  t3454 = -0.010926102783999999*t3067;
  t3460 = 1. + t3454;
  t3461 = t3460*t2690;
  t3463 = 0.103955395616*t3067*t2911;
  t3484 = 0. + t3453 + t3461 + t3463;
  t3317 = t3100*t3259;
  t3324 = t3276*t2690;
  t3325 = t3291*t2911;
  t3340 = 0. + t3317 + t3324 + t3325;
  t3390 = Cos(var1[5]);
  t3532 = t3447*t3445;
  t3541 = -1.*t3391*t3484;
  t3542 = 0. + t3532 + t3541;
  t3446 = t3391*t3445;
  t3493 = t3447*t3484;
  t3513 = 0. + t3446 + t3493;
  t3548 = Sin(var1[5]);
  t3689 = 0.104528*t624;
  t3694 = 0.10338592795881554*t618;
  t3697 = t3689 + t3694;
  t3674 = 0.994522*t1905;
  t3675 = 0.010866249592949247*t618;
  t3676 = t3674 + t3675;
  t3700 = 0.994522*t2592;
  t3701 = 0.104528*t2645;
  t3704 = t3700 + t3701;
  t3685 = t1870*t3676;
  t3699 = t3697*t583;
  t3707 = t2271*t3704;
  t3710 = 0. + t3685 + t3699 + t3707;
  t3715 = t2853*t3697;
  t3718 = t3676*t2869;
  t3719 = t2900*t3704;
  t3720 = 0. + t3715 + t3718 + t3719;
  t3748 = t3697*t3114;
  t3751 = t3676*t3156;
  t3765 = t3236*t3704;
  t3767 = 0. + t3748 + t3751 + t3765;
  t3818 = t3410*t3767;
  t3819 = 0.103955395616*t3067*t3710;
  t3828 = t3441*t3720;
  t3830 = 0. + t3818 + t3819 + t3828;
  t3835 = t3451*t3767;
  t3841 = t3460*t3710;
  t3842 = 0.103955395616*t3067*t3720;
  t3844 = 0. + t3835 + t3841 + t3842;
  t3796 = t3100*t3767;
  t3799 = t3276*t3710;
  t3800 = t3291*t3720;
  t3801 = 0. + t3796 + t3799 + t3800;
  t3558 = Sin(var1[4]);
  t3576 = Cos(var1[4]);
  t3856 = t3447*t3830;
  t3858 = -1.*t3391*t3844;
  t3865 = 0. + t3856 + t3858;
  t3833 = t3391*t3830;
  t3847 = t3447*t3844;
  t3853 = 0. + t3833 + t3847;
  t3910 = 0.380588*t624;
  t3911 = -0.004158319780035616*t618;
  t3914 = 0.92388*t1511;
  t3919 = t3910 + t3911 + t3914;
  t3923 = -0.040001*t1905;
  t3924 = 0.0395641761067022*t618;
  t3926 = 0.92388*t2184;
  t3928 = t3923 + t3924 + t3926;
  t3933 = 0.92388*t2376;
  t3938 = -0.040001*t2592;
  t3939 = 0.380588*t2645;
  t3942 = t3933 + t3938 + t3939;
  t3922 = t583*t3919;
  t3932 = t1870*t3928;
  t3944 = t2271*t3942;
  t3962 = 0. + t3922 + t3932 + t3944;
  t3978 = t2853*t3919;
  t3982 = t2869*t3928;
  t3983 = t2900*t3942;
  t3985 = 0. + t3978 + t3982 + t3983;
  t4024 = t3114*t3919;
  t4026 = t3156*t3928;
  t4034 = t3236*t3942;
  t4044 = 0. + t4024 + t4026 + t4034;
  t4142 = t3410*t4044;
  t4146 = 0.103955395616*t3067*t3962;
  t4150 = t3441*t3985;
  t4153 = 0. + t4142 + t4146 + t4150;
  t4167 = t3451*t4044;
  t4172 = t3460*t3962;
  t4173 = 0.103955395616*t3067*t3985;
  t4178 = 0. + t4167 + t4172 + t4173;
  t4114 = t3100*t4044;
  t4118 = t3276*t3962;
  t4119 = t3291*t3985;
  t4122 = 0. + t4114 + t4118 + t4119;
  t4186 = t3447*t4153;
  t4203 = -1.*t3391*t4178;
  t4212 = 0. + t4186 + t4203;
  t4162 = t3391*t4153;
  t4179 = t3447*t4178;
  t4181 = 0. + t4162 + t4179;
  t17 = 6.661520000061927e-7*var2[16];
  t2711 = 0.994522*t2690;
  t2992 = 0.104528*t2911;
  t2995 = 0. + t2711 + t2992;
  t2997 = var2[14]*t2995;
  t3262 = -1.*t3100*t3259;
  t3279 = -1.*t3276*t2690;
  t3292 = -1.*t3291*t2911;
  t3298 = 0. + t3262 + t3279 + t3292;
  t3315 = var2[13]*t3298;
  t3341 = var2[5]*t3340;
  t3346 = -0.703234*t1651;
  t3369 = 0.073913*t2229;
  t3373 = 0.707107*t2686;
  t3378 = 0. + t3346 + t3369 + t3373;
  t3383 = var2[15]*t3378;
  t3516 = t3390*t3513;
  t3552 = -1.*t3542*t3548;
  t3554 = 0. + t3516 + t3552;
  t3555 = var2[4]*t3554;
  t3572 = -1.*t3340*t3558;
  t3579 = t3390*t3542;
  t3597 = t3513*t3548;
  t3604 = 0. + t3579 + t3597;
  t3613 = t3576*t3604;
  t3630 = 0. + t3572 + t3613;
  t3637 = var2[3]*t3630;
  t3642 = t17 + t2997 + t3315 + t3341 + t3383 + t3555 + t3637;
  t3673 = 1.0000001112680001*var2[16];
  t3711 = 0.994522*t3710;
  t3729 = 0.104528*t3720;
  t3738 = 0. + t3711 + t3729;
  t3745 = var2[14]*t3738;
  t3773 = -1.*t3100*t3767;
  t3775 = -1.*t3276*t3710;
  t3787 = -1.*t3291*t3720;
  t3790 = 0. + t3773 + t3775 + t3787;
  t3795 = var2[13]*t3790;
  t3802 = var2[5]*t3801;
  t3804 = 0.073913*t3676;
  t3806 = -0.703234*t3697;
  t3807 = 0.707107*t3704;
  t3809 = 0. + t3804 + t3806 + t3807;
  t3810 = var2[15]*t3809;
  t3854 = t3390*t3853;
  t3866 = -1.*t3865*t3548;
  t3867 = 0. + t3854 + t3866;
  t3868 = var2[4]*t3867;
  t3870 = -1.*t3801*t3558;
  t3872 = t3390*t3865;
  t3886 = t3853*t3548;
  t3891 = 0. + t3872 + t3886;
  t3894 = t3576*t3891;
  t3895 = 0. + t3870 + t3894;
  t3898 = var2[3]*t3895;
  t3905 = t3673 + t3745 + t3795 + t3802 + t3810 + t3868 + t3898;
  t3908 = 2.2794199999731646e-7*var2[16];
  t3964 = 0.994522*t3962;
  t4002 = 0.104528*t3985;
  t4003 = 0. + t3964 + t4002;
  t4016 = var2[14]*t4003;
  t4055 = -1.*t3100*t4044;
  t4064 = -1.*t3276*t3962;
  t4093 = -1.*t3291*t3985;
  t4094 = 0. + t4055 + t4064 + t4093;
  t4110 = var2[13]*t4094;
  t4124 = var2[5]*t4122;
  t4126 = -0.703234*t3919;
  t4131 = 0.073913*t3928;
  t4135 = 0.707107*t3942;
  t4138 = 0. + t4126 + t4131 + t4135;
  t4139 = var2[15]*t4138;
  t4185 = t3390*t4181;
  t4239 = -1.*t4212*t3548;
  t4243 = 0. + t4185 + t4239;
  t4245 = var2[4]*t4243;
  t4246 = -1.*t4122*t3558;
  t4248 = t3390*t4212;
  t4258 = t4181*t3548;
  t4284 = 0. + t4248 + t4258;
  t4332 = t3576*t4284;
  t4340 = 0. + t4246 + t4332;
  t4400 = var2[3]*t4340;
  t4401 = t3908 + t4016 + t4110 + t4124 + t4139 + t4245 + t4400;
  p_output1[0]=0.00003*t3642 + 0.0014*t3905 + 0.00048*t4401;
  p_output1[1]=0.00956*t3642 + 0.00002*t3905 + 0.00003*t4401;
  p_output1[2]=0.00002*t3642 - 0.00001*t3905 + 0.0014*t4401;
}



void AMBody_left_elbow_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

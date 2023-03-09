/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_right_elbow_src.h"

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
  double t862;
  double t1017;
  double t1046;
  double t176;
  double t567;
  double t778;
  double t1932;
  double t2073;
  double t1570;
  double t1751;
  double t1757;
  double t1797;
  double t1835;
  double t1102;
  double t1111;
  double t1243;
  double t1314;
  double t1427;
  double t1899;
  double t2095;
  double t2139;
  double t2154;
  double t2163;
  double t2164;
  double t2169;
  double t2261;
  double t2627;
  double t2020;
  double t844;
  double t859;
  double t1454;
  double t1967;
  double t2000;
  double t2010;
  double t2035;
  double t2040;
  double t2305;
  double t2312;
  double t3084;
  double t2356;
  double t2434;
  double t2451;
  double t2454;
  double t2462;
  double t2614;
  double t2631;
  double t2632;
  double t2642;
  double t2654;
  double t2784;
  double t2801;
  double t2819;
  double t2821;
  double t2868;
  double t2889;
  double t2922;
  double t2932;
  double t2941;
  double t2942;
  double t2954;
  double t2960;
  double t2988;
  double t3020;
  double t3049;
  double t3087;
  double t3091;
  double t3097;
  double t3104;
  double t3336;
  double t3213;
  double t3221;
  double t3234;
  double t3271;
  double t3281;
  double t3284;
  double t3292;
  double t3302;
  double t3206;
  double t3360;
  double t3383;
  double t3393;
  double t3396;
  double t3398;
  double t3400;
  double t3401;
  double t3412;
  double t3118;
  double t3141;
  double t3143;
  double t3158;
  double t3205;
  double t3426;
  double t3434;
  double t3475;
  double t3303;
  double t3418;
  double t3421;
  double t3479;
  double t3529;
  double t3543;
  double t3549;
  double t3554;
  double t3558;
  double t3560;
  double t3571;
  double t3573;
  double t3576;
  double t3588;
  double t3590;
  double t3609;
  double t3614;
  double t3615;
  double t3617;
  double t3618;
  double t3621;
  double t3628;
  double t3564;
  double t3612;
  double t3634;
  double t3644;
  double t3650;
  double t3651;
  double t3656;
  double t3658;
  double t3686;
  double t3692;
  double t3693;
  double t3696;
  double t3756;
  double t3758;
  double t3760;
  double t3761;
  double t3768;
  double t3771;
  double t3778;
  double t3780;
  double t3715;
  double t3717;
  double t3719;
  double t3725;
  double t3504;
  double t3506;
  double t3790;
  double t3792;
  double t3794;
  double t3763;
  double t3781;
  double t3783;
  double t3876;
  double t3881;
  double t3885;
  double t3887;
  double t3897;
  double t3902;
  double t3906;
  double t3908;
  double t3926;
  double t3928;
  double t3931;
  double t3936;
  double t3893;
  double t3913;
  double t3943;
  double t3944;
  double t3964;
  double t3971;
  double t3983;
  double t3986;
  double t4006;
  double t4007;
  double t4008;
  double t4009;
  double t4099;
  double t4104;
  double t4110;
  double t4112;
  double t4121;
  double t4124;
  double t4130;
  double t4141;
  double t4055;
  double t4057;
  double t4060;
  double t4061;
  double t4187;
  double t4188;
  double t4189;
  double t4116;
  double t4145;
  double t4158;
  double t8;
  double t2352;
  double t2671;
  double t2711;
  double t2750;
  double t3076;
  double t3095;
  double t3106;
  double t3108;
  double t3117;
  double t3170;
  double t3171;
  double t3175;
  double t3182;
  double t3192;
  double t3194;
  double t3422;
  double t3501;
  double t3502;
  double t3503;
  double t3505;
  double t3507;
  double t3510;
  double t3511;
  double t3515;
  double t3517;
  double t3520;
  double t3524;
  double t3527;
  double t3645;
  double t3659;
  double t3678;
  double t3680;
  double t3681;
  double t3685;
  double t3703;
  double t3710;
  double t3711;
  double t3728;
  double t3731;
  double t3737;
  double t3744;
  double t3749;
  double t3751;
  double t3787;
  double t3797;
  double t3806;
  double t3812;
  double t3817;
  double t3822;
  double t3823;
  double t3831;
  double t3832;
  double t3834;
  double t3842;
  double t3845;
  double t3868;
  double t3961;
  double t3989;
  double t3992;
  double t4001;
  double t4004;
  double t4005;
  double t4016;
  double t4025;
  double t4052;
  double t4067;
  double t4069;
  double t4081;
  double t4083;
  double t4086;
  double t4095;
  double t4179;
  double t4197;
  double t4199;
  double t4203;
  double t4209;
  double t4227;
  double t4236;
  double t4237;
  double t4238;
  double t4239;
  double t4249;
  double t4254;
  t862 = Cos(var1[27]);
  t1017 = -1.*t862;
  t1046 = 1. + t1017;
  t176 = Cos(var1[26]);
  t567 = -1.*t176;
  t778 = 1. + t567;
  t1932 = Sin(var1[26]);
  t2073 = Sin(var1[27]);
  t1570 = -0.9890740084840001*t1046;
  t1751 = 1. + t1570;
  t1757 = 0.104528*t1751;
  t1797 = 0.10338592795881554*t1046;
  t1835 = t1757 + t1797;
  t1102 = -0.010926102783999999*t1046;
  t1111 = 1. + t1102;
  t1243 = -0.994522*t1111;
  t1314 = -0.010866249592949247*t1046;
  t1427 = t1243 + t1314;
  t1899 = 0.051978134642000004*t778;
  t2095 = -0.994522*t2073;
  t2139 = 0. + t2095;
  t2154 = 0.104528*t2139;
  t2163 = -0.104528*t2073;
  t2164 = 0. + t2163;
  t2169 = -0.994522*t2164;
  t2261 = t2154 + t2169;
  t2627 = -0.49726168403800003*t778;
  t2020 = -0.05226439969100001*t778;
  t844 = -0.9945383682050002*t778;
  t859 = 1. + t844;
  t1454 = t859*t1427;
  t1967 = -0.707107*t1932;
  t2000 = t1899 + t1967;
  t2010 = t1835*t2000;
  t2035 = -0.703234*t1932;
  t2040 = t2020 + t2035;
  t2305 = t2040*t2261;
  t2312 = 0. + t1454 + t2010 + t2305;
  t3084 = Sin(var1[25]);
  t2356 = -0.5054634410180001*t778;
  t2434 = 1. + t2356;
  t2451 = t2434*t1835;
  t2454 = 0.707107*t1932;
  t2462 = t1899 + t2454;
  t2614 = t1427*t2462;
  t2631 = 0.073913*t1932;
  t2632 = t2627 + t2631;
  t2642 = t2632*t2261;
  t2654 = 0. + t2451 + t2614 + t2642;
  t2784 = Cos(var1[25]);
  t2801 = -1.*t2784;
  t2819 = 1. + t2801;
  t2821 = -1.0000001112680001*t2819;
  t2868 = 1. + t2821;
  t2889 = -0.073913*t1932;
  t2922 = t2627 + t2889;
  t2932 = t1835*t2922;
  t2941 = 0.703234*t1932;
  t2942 = t2020 + t2941;
  t2954 = t1427*t2942;
  t2960 = -0.500001190325*t778;
  t2988 = 1. + t2960;
  t3020 = t2988*t2261;
  t3049 = 0. + t2932 + t2954 + t3020;
  t3087 = -0.104528*t3084;
  t3091 = 0. + t3087;
  t3097 = -0.994522*t3084;
  t3104 = 0. + t3097;
  t3336 = Cos(var1[24]);
  t3213 = 0.994522*t3084;
  t3221 = 0. + t3213;
  t3234 = t3221*t3049;
  t3271 = -0.103955395616*t2819*t2312;
  t3281 = -0.9890740084840001*t2819;
  t3284 = 1. + t3281;
  t3292 = t3284*t2654;
  t3302 = 0. + t3234 + t3271 + t3292;
  t3206 = Sin(var1[24]);
  t3360 = 0.104528*t3084;
  t3383 = 0. + t3360;
  t3393 = t3383*t3049;
  t3396 = -0.010926102783999999*t2819;
  t3398 = 1. + t3396;
  t3400 = t3398*t2312;
  t3401 = -0.103955395616*t2819*t2654;
  t3412 = 0. + t3393 + t3400 + t3401;
  t3118 = t2868*t3049;
  t3141 = t3091*t2312;
  t3143 = t3104*t2654;
  t3158 = 0. + t3118 + t3141 + t3143;
  t3205 = Cos(var1[5]);
  t3426 = t3336*t3302;
  t3434 = -1.*t3206*t3412;
  t3475 = 0. + t3426 + t3434;
  t3303 = t3206*t3302;
  t3418 = t3336*t3412;
  t3421 = 0. + t3303 + t3418;
  t3479 = Sin(var1[5]);
  t3529 = -1.0000001112680001*t1046;
  t3543 = 1. + t3529;
  t3549 = -0.382684*t3543;
  t3554 = 0.918819*t2139;
  t3558 = 0.096572*t2164;
  t3560 = t3549 + t3554 + t3558;
  t3571 = 0.096572*t1111;
  t3573 = -0.0955161926444975*t1046;
  t3576 = 0.104528*t2073;
  t3588 = 0. + t3576;
  t3590 = -0.382684*t3588;
  t3609 = t3571 + t3573 + t3590;
  t3614 = 0.918819*t1751;
  t3615 = -0.010039180465428352*t1046;
  t3617 = 0.994522*t2073;
  t3618 = 0. + t3617;
  t3621 = -0.382684*t3618;
  t3628 = t3614 + t3615 + t3621;
  t3564 = t2632*t3560;
  t3612 = t2462*t3609;
  t3634 = t2434*t3628;
  t3644 = 0. + t3564 + t3612 + t3634;
  t3650 = t2040*t3560;
  t3651 = t859*t3609;
  t3656 = t2000*t3628;
  t3658 = 0. + t3650 + t3651 + t3656;
  t3686 = t2988*t3560;
  t3692 = t2942*t3609;
  t3693 = t2922*t3628;
  t3696 = 0. + t3686 + t3692 + t3693;
  t3756 = -0.103955395616*t2819*t3644;
  t3758 = t3398*t3658;
  t3760 = t3383*t3696;
  t3761 = 0. + t3756 + t3758 + t3760;
  t3768 = t3284*t3644;
  t3771 = -0.103955395616*t2819*t3658;
  t3778 = t3221*t3696;
  t3780 = 0. + t3768 + t3771 + t3778;
  t3715 = t3104*t3644;
  t3717 = t3091*t3658;
  t3719 = t2868*t3696;
  t3725 = 0. + t3715 + t3717 + t3719;
  t3504 = Sin(var1[4]);
  t3506 = Cos(var1[4]);
  t3790 = -1.*t3206*t3761;
  t3792 = t3336*t3780;
  t3794 = 0. + t3790 + t3792;
  t3763 = t3336*t3761;
  t3781 = t3206*t3780;
  t3783 = 0. + t3763 + t3781;
  t3876 = 0.92388*t3543;
  t3881 = 0.380588*t2139;
  t3885 = 0.040001*t2164;
  t3887 = t3876 + t3881 + t3885;
  t3897 = 0.040001*t1111;
  t3902 = -0.0395641761067022*t1046;
  t3906 = 0.92388*t3588;
  t3908 = t3897 + t3902 + t3906;
  t3926 = 0.380588*t1751;
  t3928 = -0.004158319780035616*t1046;
  t3931 = 0.92388*t3618;
  t3936 = t3926 + t3928 + t3931;
  t3893 = t2632*t3887;
  t3913 = t2462*t3908;
  t3943 = t2434*t3936;
  t3944 = 0. + t3893 + t3913 + t3943;
  t3964 = t2040*t3887;
  t3971 = t859*t3908;
  t3983 = t2000*t3936;
  t3986 = 0. + t3964 + t3971 + t3983;
  t4006 = t2988*t3887;
  t4007 = t2942*t3908;
  t4008 = t2922*t3936;
  t4009 = 0. + t4006 + t4007 + t4008;
  t4099 = -0.103955395616*t2819*t3944;
  t4104 = t3398*t3986;
  t4110 = t3383*t4009;
  t4112 = 0. + t4099 + t4104 + t4110;
  t4121 = t3284*t3944;
  t4124 = -0.103955395616*t2819*t3986;
  t4130 = t3221*t4009;
  t4141 = 0. + t4121 + t4124 + t4130;
  t4055 = t3104*t3944;
  t4057 = t3091*t3986;
  t4060 = t2868*t4009;
  t4061 = 0. + t4055 + t4057 + t4060;
  t4187 = -1.*t3206*t4112;
  t4188 = t3336*t4141;
  t4189 = 0. + t4187 + t4188;
  t4116 = t3336*t4112;
  t4145 = t3206*t4141;
  t4158 = 0. + t4116 + t4145;
  t8 = 1.0000001112680001*var2[27];
  t2352 = -0.994522*t2312;
  t2671 = 0.104528*t2654;
  t2711 = 0. + t2352 + t2671;
  t2750 = var2[25]*t2711;
  t3076 = -1.*t2868*t3049;
  t3095 = -1.*t3091*t2312;
  t3106 = -1.*t3104*t2654;
  t3108 = 0. + t3076 + t3095 + t3106;
  t3117 = var2[24]*t3108;
  t3170 = var2[5]*t3158;
  t3171 = -0.073913*t1427;
  t3175 = -0.703234*t1835;
  t3182 = 0.707107*t2261;
  t3192 = 0. + t3171 + t3175 + t3182;
  t3194 = var2[26]*t3192;
  t3422 = t3205*t3421;
  t3501 = -1.*t3475*t3479;
  t3502 = 0. + t3422 + t3501;
  t3503 = var2[4]*t3502;
  t3505 = -1.*t3158*t3504;
  t3507 = t3205*t3475;
  t3510 = t3421*t3479;
  t3511 = 0. + t3507 + t3510;
  t3515 = t3506*t3511;
  t3517 = 0. + t3505 + t3515;
  t3520 = var2[3]*t3517;
  t3524 = t8 + t2750 + t3117 + t3170 + t3194 + t3503 + t3520;
  t3527 = -6.661520000061927e-7*var2[27];
  t3645 = 0.104528*t3644;
  t3659 = -0.994522*t3658;
  t3678 = 0. + t3645 + t3659;
  t3680 = var2[25]*t3678;
  t3681 = -1.*t3104*t3644;
  t3685 = -1.*t3091*t3658;
  t3703 = -1.*t2868*t3696;
  t3710 = 0. + t3681 + t3685 + t3703;
  t3711 = var2[24]*t3710;
  t3728 = var2[5]*t3725;
  t3731 = 0.707107*t3560;
  t3737 = -0.073913*t3609;
  t3744 = -0.703234*t3628;
  t3749 = 0. + t3731 + t3737 + t3744;
  t3751 = var2[26]*t3749;
  t3787 = t3205*t3783;
  t3797 = -1.*t3794*t3479;
  t3806 = 0. + t3787 + t3797;
  t3812 = var2[4]*t3806;
  t3817 = -1.*t3725*t3504;
  t3822 = t3205*t3794;
  t3823 = t3783*t3479;
  t3831 = 0. + t3822 + t3823;
  t3832 = t3506*t3831;
  t3834 = 0. + t3817 + t3832;
  t3842 = var2[3]*t3834;
  t3845 = t3527 + t3680 + t3711 + t3728 + t3751 + t3812 + t3842;
  t3868 = 2.2794199999731646e-7*var2[27];
  t3961 = 0.104528*t3944;
  t3989 = -0.994522*t3986;
  t3992 = 0. + t3961 + t3989;
  t4001 = var2[25]*t3992;
  t4004 = -1.*t3104*t3944;
  t4005 = -1.*t3091*t3986;
  t4016 = -1.*t2868*t4009;
  t4025 = 0. + t4004 + t4005 + t4016;
  t4052 = var2[24]*t4025;
  t4067 = var2[5]*t4061;
  t4069 = 0.707107*t3887;
  t4081 = -0.073913*t3908;
  t4083 = -0.703234*t3936;
  t4086 = 0. + t4069 + t4081 + t4083;
  t4095 = var2[26]*t4086;
  t4179 = t3205*t4158;
  t4197 = -1.*t4189*t3479;
  t4199 = 0. + t4179 + t4197;
  t4203 = var2[4]*t4199;
  t4209 = -1.*t4061*t3504;
  t4227 = t3205*t4189;
  t4236 = t4158*t3479;
  t4237 = 0. + t4227 + t4236;
  t4238 = t3506*t4237;
  t4239 = 0. + t4209 + t4238;
  t4249 = var2[3]*t4239;
  t4254 = t3868 + t4001 + t4052 + t4067 + t4095 + t4203 + t4249;
  p_output1[0]=0.0014*t3524 - 0.00003*t3845 + 0.00048*t4254;
  p_output1[1]=-0.00002*t3524 + 0.00956*t3845 - 0.00003*t4254;
  p_output1[2]=-0.00001*t3524 - 0.00002*t3845 + 0.0014*t4254;
}



void AMBody_right_elbow_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Thu 10 Nov 2022 14:41:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottomBack_src.h"

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
  double t278;
  double t29;
  double t1119;
  double t1386;
  double t1122;
  double t1565;
  double t170;
  double t234;
  double t238;
  double t799;
  double t1246;
  double t1627;
  double t1687;
  double t1772;
  double t1843;
  double t1916;
  double t1954;
  double t135;
  double t2292;
  double t2302;
  double t2229;
  double t2250;
  double t2278;
  double t2366;
  double t2389;
  double t2391;
  double t2416;
  double t2425;
  double t2427;
  double t2503;
  double t2160;
  double t2202;
  double t280;
  double t313;
  double t346;
  double t399;
  double t2934;
  double t2837;
  double t2859;
  double t2534;
  double t2551;
  double t2558;
  double t2584;
  double t2608;
  double t2609;
  double t2806;
  double t2822;
  double t2727;
  double t2732;
  double t2739;
  double t2740;
  double t2742;
  double t2779;
  double t2865;
  double t2870;
  double t2874;
  double t2881;
  double t2882;
  double t2896;
  double t2902;
  double t2906;
  double t2908;
  double t2504;
  double t2509;
  double t2648;
  double t2670;
  double t3108;
  double t3109;
  double t3001;
  double t3003;
  double t3008;
  double t3011;
  double t3015;
  double t3020;
  double t3057;
  double t3061;
  double t3068;
  double t3073;
  double t3078;
  double t3097;
  double t3129;
  double t3130;
  double t3150;
  double t3154;
  double t3155;
  double t3156;
  double t3166;
  double t3167;
  double t3168;
  double t3175;
  double t3036;
  double t3044;
  double t2965;
  double t2966;
  double t2971;
  double t2974;
  double t3341;
  double t3297;
  double t3298;
  double t3192;
  double t3194;
  double t3201;
  double t3203;
  double t3205;
  double t3215;
  double t3275;
  double t3283;
  double t3252;
  double t3260;
  double t3261;
  double t3265;
  double t3269;
  double t3271;
  double t3305;
  double t3306;
  double t3308;
  double t3309;
  double t3318;
  double t3321;
  double t3333;
  double t3334;
  double t3336;
  double t3177;
  double t3185;
  double t3230;
  double t3240;
  double t3495;
  double t3499;
  double t3506;
  double t3514;
  double t3468;
  double t3469;
  double t3375;
  double t3376;
  double t3382;
  double t3384;
  double t3391;
  double t3395;
  double t3426;
  double t3431;
  double t3433;
  double t3436;
  double t3437;
  double t3445;
  double t3477;
  double t3478;
  double t3480;
  double t3481;
  double t3484;
  double t3486;
  double t3508;
  double t3419;
  double t3420;
  double t3526;
  double t3584;
  double t3366;
  double t3367;
  double t3359;
  double t3360;
  double t3627;
  double t3563;
  double t3569;
  double t3571;
  double t3572;
  double t3576;
  double t3578;
  double t3631;
  double t3609;
  double t3610;
  double t3616;
  double t3617;
  double t3619;
  double t3620;
  double t3647;
  double t3648;
  double t3649;
  double t3650;
  double t3652;
  double t3653;
  double t3593;
  double t3664;
  double t3587;
  double t3678;
  double t3515;
  double t3660;
  double t3536;
  double t241;
  double t323;
  double t519;
  double t592;
  double t920;
  double t1021;
  double t1780;
  double t1808;
  double t1810;
  double t1826;
  double t2089;
  double t2122;
  double t2215;
  double t2217;
  double t3725;
  double t3727;
  double t3731;
  double t3733;
  double t3734;
  double t3735;
  double t2284;
  double t2291;
  double t2305;
  double t2359;
  double t2413;
  double t2435;
  double t2529;
  double t2530;
  double t3741;
  double t3742;
  double t3746;
  double t3750;
  double t3752;
  double t3754;
  double t2612;
  double t2646;
  double t2671;
  double t2672;
  double t2799;
  double t2836;
  double t2861;
  double t2862;
  double t2921;
  double t2970;
  double t2978;
  double t3000;
  double t3758;
  double t3760;
  double t3765;
  double t3767;
  double t3769;
  double t3772;
  double t3775;
  double t3777;
  double t3781;
  double t3786;
  double t3787;
  double t3788;
  double t3026;
  double t3034;
  double t3048;
  double t3051;
  double t3103;
  double t3104;
  double t3121;
  double t3128;
  double t3164;
  double t3172;
  double t3187;
  double t3190;
  double t3792;
  double t3801;
  double t3803;
  double t3804;
  double t3806;
  double t3807;
  double t3811;
  double t3812;
  double t3817;
  double t3818;
  double t3819;
  double t3820;
  double t3217;
  double t3219;
  double t3243;
  double t3244;
  double t3273;
  double t3294;
  double t3302;
  double t3304;
  double t3338;
  double t3361;
  double t3370;
  double t3372;
  double t3822;
  double t3828;
  double t3829;
  double t3832;
  double t3836;
  double t3837;
  double t3840;
  double t3843;
  double t3846;
  double t3848;
  double t3849;
  double t3850;
  double t3411;
  double t3413;
  double t3423;
  double t3425;
  double t3456;
  double t3458;
  double t3470;
  double t3472;
  double t3491;
  double t3507;
  double t3519;
  double t3521;
  double t3539;
  double t3555;
  double t3560;
  double t3865;
  double t3869;
  double t3870;
  double t3871;
  double t3878;
  double t3884;
  double t3885;
  double t3887;
  double t3891;
  double t3892;
  double t3893;
  double t3894;
  double t3580;
  double t3581;
  double t3588;
  double t3590;
  double t3597;
  double t3600;
  double t3607;
  double t3623;
  double t3626;
  double t3628;
  double t3629;
  double t3635;
  double t3645;
  double t3646;
  double t3661;
  double t3896;
  double t3897;
  double t3898;
  double t3902;
  double t3667;
  double t3906;
  double t3911;
  double t3912;
  double t3913;
  double t3673;
  double t3674;
  double t3916;
  double t3917;
  double t3918;
  double t3921;
  double t3679;
  double t3682;
  double t3685;
  double t3694;
  double t3699;
  double t3700;
  double t3702;
  double t3713;
  double t3956;
  double t3957;
  double t3958;
  double t3964;
  double t3972;
  double t3974;
  double t3978;
  double t3980;
  double t3981;
  double t3982;
  double t3985;
  double t3986;
  double t3990;
  double t3996;
  double t4009;
  double t4012;
  double t4025;
  double t4026;
  double t4028;
  double t4031;
  double t4032;
  double t4035;
  double t4041;
  double t4042;
  double t4051;
  double t4052;
  double t4055;
  double t4058;
  double t4068;
  double t4069;
  double t4071;
  double t4076;
  double t4077;
  double t4085;
  double t4088;
  double t4090;
  double t4091;
  double t4115;
  double t4125;
  double t4126;
  double t4143;
  double t4144;
  double t4154;
  double t4158;
  double t4160;
  double t4162;
  double t4178;
  double t4186;
  double t4199;
  double t4201;
  double t4208;
  double t4209;
  double t4213;
  double t4216;
  double t4218;
  double t4220;
  double t4224;
  double t4225;
  double t4236;
  double t4240;
  double t4242;
  double t4243;
  double t4245;
  double t4248;
  double t4251;
  double t4254;
  t278 = Sin(var1[14]);
  t29 = Cos(var1[3]);
  t1119 = Cos(var1[5]);
  t1386 = Sin(var1[3]);
  t1122 = Sin(var1[4]);
  t1565 = Sin(var1[5]);
  t170 = Cos(var1[14]);
  t234 = -1.*t170;
  t238 = 1. + t234;
  t799 = Sin(var1[13]);
  t1246 = t29*t1119*t1122;
  t1627 = t1386*t1565;
  t1687 = t1246 + t1627;
  t1772 = Cos(var1[13]);
  t1843 = -1.*t1119*t1386;
  t1916 = t29*t1122*t1565;
  t1954 = t1843 + t1916;
  t135 = Cos(var1[4]);
  t2292 = -0.366501*t278;
  t2302 = 0. + t2292;
  t2229 = -1.*t799*t1687;
  t2250 = t1772*t1954;
  t2278 = t2229 + t2250;
  t2366 = t1772*t1687;
  t2389 = t799*t1954;
  t2391 = t2366 + t2389;
  t2416 = Cos(var1[15]);
  t2425 = -1.*t2416;
  t2427 = 1. + t2425;
  t2503 = Sin(var1[15]);
  t2160 = 0.930418*t278;
  t2202 = 0. + t2160;
  t280 = -0.930418*t278;
  t313 = 0. + t280;
  t346 = 0.366501*t278;
  t399 = 0. + t346;
  t2934 = Sin(var1[16]);
  t2837 = 0.930418*t2503;
  t2859 = 0. + t2837;
  t2534 = t29*t135*t2302;
  t2551 = 0.340999127418*t238*t2278;
  t2558 = -0.134322983001*t238;
  t2584 = 1. + t2558;
  t2608 = t2584*t2391;
  t2609 = t2534 + t2551 + t2608;
  t2806 = 0.366501*t2503;
  t2822 = 0. + t2806;
  t2727 = t29*t135*t2202;
  t2732 = -0.8656776547239999*t238;
  t2739 = 1. + t2732;
  t2740 = t2739*t2278;
  t2742 = 0.340999127418*t238*t2391;
  t2779 = t2727 + t2740 + t2742;
  t2865 = -1.000000637725*t238;
  t2870 = 1. + t2865;
  t2874 = t2870*t29*t135;
  t2881 = t313*t2278;
  t2882 = t399*t2391;
  t2896 = t2874 + t2881 + t2882;
  t2902 = Cos(var1[16]);
  t2906 = -1.*t2902;
  t2908 = 1. + t2906;
  t2504 = -0.930418*t2503;
  t2509 = 0. + t2504;
  t2648 = -0.366501*t2503;
  t2670 = 0. + t2648;
  t3108 = 0.366501*t2934;
  t3109 = 0. + t3108;
  t3001 = t2859*t2609;
  t3003 = t2822*t2779;
  t3008 = -1.000000637725*t2427;
  t3011 = 1. + t3008;
  t3015 = t3011*t2896;
  t3020 = t3001 + t3003 + t3015;
  t3057 = -0.8656776547239999*t2427;
  t3061 = 1. + t3057;
  t3068 = t3061*t2609;
  t3073 = -0.340999127418*t2427*t2779;
  t3078 = t2509*t2896;
  t3097 = t3068 + t3073 + t3078;
  t3129 = -0.340999127418*t2427*t2609;
  t3130 = -0.134322983001*t2427;
  t3150 = 1. + t3130;
  t3154 = t3150*t2779;
  t3155 = t2670*t2896;
  t3156 = t3129 + t3154 + t3155;
  t3166 = Cos(var1[17]);
  t3167 = -1.*t3166;
  t3168 = 1. + t3167;
  t3175 = Sin(var1[17]);
  t3036 = 0.930418*t2934;
  t3044 = 0. + t3036;
  t2965 = -0.930418*t2934;
  t2966 = 0. + t2965;
  t2971 = -0.366501*t2934;
  t2974 = 0. + t2971;
  t3341 = Sin(var1[18]);
  t3297 = -0.366501*t3175;
  t3298 = 0. + t3297;
  t3192 = t3109*t3020;
  t3194 = -0.340999127418*t2908*t3097;
  t3201 = -0.134322983001*t2908;
  t3203 = 1. + t3201;
  t3205 = t3203*t3156;
  t3215 = t3192 + t3194 + t3205;
  t3275 = -0.930418*t3175;
  t3283 = 0. + t3275;
  t3252 = t3044*t3020;
  t3260 = -0.8656776547239999*t2908;
  t3261 = 1. + t3260;
  t3265 = t3261*t3097;
  t3269 = -0.340999127418*t2908*t3156;
  t3271 = t3252 + t3265 + t3269;
  t3305 = -1.000000637725*t2908;
  t3306 = 1. + t3305;
  t3308 = t3306*t3020;
  t3309 = t2966*t3097;
  t3318 = t2974*t3156;
  t3321 = t3308 + t3309 + t3318;
  t3333 = Cos(var1[18]);
  t3334 = -1.*t3333;
  t3336 = 1. + t3334;
  t3177 = 0.366501*t3175;
  t3185 = 0. + t3177;
  t3230 = 0.930418*t3175;
  t3240 = 0. + t3230;
  t3495 = Cos(var1[19]);
  t3499 = -1.*t3495;
  t3506 = 1. + t3499;
  t3514 = Sin(var1[19]);
  t3468 = 0.930418*t3341;
  t3469 = 0. + t3468;
  t3375 = t3298*t3215;
  t3376 = t3283*t3271;
  t3382 = -1.000000637725*t3168;
  t3384 = 1. + t3382;
  t3391 = t3384*t3321;
  t3395 = t3375 + t3376 + t3391;
  t3426 = -0.134322983001*t3168;
  t3431 = 1. + t3426;
  t3433 = t3431*t3215;
  t3436 = -0.340999127418*t3168*t3271;
  t3437 = t3185*t3321;
  t3445 = t3433 + t3436 + t3437;
  t3477 = -0.340999127418*t3168*t3215;
  t3478 = -0.8656776547239999*t3168;
  t3480 = 1. + t3478;
  t3481 = t3480*t3271;
  t3484 = t3240*t3321;
  t3486 = t3477 + t3481 + t3484;
  t3508 = -0.120666640478*t3506;
  t3419 = 0.366501*t3341;
  t3420 = 0. + t3419;
  t3526 = -0.444895486988*t3506;
  t3584 = -0.175248972904*t3506;
  t3366 = -0.366501*t3341;
  t3367 = 0. + t3366;
  t3359 = -0.930418*t3341;
  t3360 = 0. + t3359;
  t3627 = -0.218018*t3514;
  t3563 = t3469*t3395;
  t3569 = -0.340999127418*t3336*t3445;
  t3571 = -0.8656776547239999*t3336;
  t3572 = 1. + t3571;
  t3576 = t3572*t3486;
  t3578 = t3563 + t3569 + t3576;
  t3631 = 0.553471*t3514;
  t3609 = t3420*t3395;
  t3610 = -0.134322983001*t3336;
  t3616 = 1. + t3610;
  t3617 = t3616*t3445;
  t3619 = -0.340999127418*t3336*t3486;
  t3620 = t3609 + t3617 + t3619;
  t3647 = -1.000000637725*t3336;
  t3648 = 1. + t3647;
  t3649 = t3648*t3395;
  t3650 = t3367*t3445;
  t3652 = t3360*t3486;
  t3653 = t3649 + t3650 + t3652;
  t3593 = 0.803828*t3514;
  t3664 = 0.175248972904*t3506;
  t3587 = -0.553471*t3514;
  t3678 = 0.120666640478*t3506;
  t3515 = -0.803828*t3514;
  t3660 = 0.444895486988*t3506;
  t3536 = 0.218018*t3514;
  t241 = -0.04500040093286238*t238;
  t323 = -0.07877663122399998*t313;
  t519 = 0.031030906668*t399;
  t592 = 0. + t241 + t323 + t519;
  t920 = -0.091*t799;
  t1021 = 0. + t920;
  t1780 = -1.*t1772;
  t1808 = 1. + t1780;
  t1810 = -0.091*t1808;
  t1826 = 0. + t1810;
  t2089 = 1.296332362046933e-7*var1[14];
  t2122 = -0.07877668146182712*t238;
  t2215 = -0.045000372235*t2202;
  t2217 = t2089 + t2122 + t2215;
  t3725 = t1119*t1386*t1122;
  t3727 = -1.*t29*t1565;
  t3731 = t3725 + t3727;
  t3733 = t29*t1119;
  t3734 = t1386*t1122*t1565;
  t3735 = t3733 + t3734;
  t2284 = 3.2909349868922137e-7*var1[14];
  t2291 = 0.03103092645718495*t238;
  t2305 = -0.045000372235*t2302;
  t2359 = t2284 + t2291 + t2305;
  t2413 = -1.296332362046933e-7*var1[15];
  t2435 = -0.14128592423750855*t2427;
  t2529 = -0.045000372235*t2509;
  t2530 = t2413 + t2435 + t2529;
  t3741 = -1.*t799*t3731;
  t3742 = t1772*t3735;
  t3746 = t3741 + t3742;
  t3750 = t1772*t3731;
  t3752 = t799*t3735;
  t3754 = t3750 + t3752;
  t2612 = 3.2909349868922137e-7*var1[15];
  t2646 = -0.055653945343889656*t2427;
  t2671 = -0.045000372235*t2670;
  t2672 = t2612 + t2646 + t2671;
  t2799 = -0.04500040093286238*t2427;
  t2836 = -0.055653909852*t2822;
  t2861 = -0.141285834136*t2859;
  t2862 = 0. + t2799 + t2836 + t2861;
  t2921 = 0.039853038461262744*t2908;
  t2970 = -0.22023459268999998*t2966;
  t2978 = -0.086752619205*t2974;
  t3000 = 0. + t2921 + t2970 + t2978;
  t3758 = t135*t2302*t1386;
  t3760 = 0.340999127418*t238*t3746;
  t3765 = t2584*t3754;
  t3767 = t3758 + t3760 + t3765;
  t3769 = t135*t2202*t1386;
  t3772 = t2739*t3746;
  t3775 = 0.340999127418*t238*t3754;
  t3777 = t3769 + t3772 + t3775;
  t3781 = t2870*t135*t1386;
  t3786 = t313*t3746;
  t3787 = t399*t3754;
  t3788 = t3781 + t3786 + t3787;
  t3026 = 6.295460977284962e-8*var1[16];
  t3034 = -0.22023473313910558*t2908;
  t3048 = 0.039853013046*t3044;
  t3051 = t3026 + t3034 + t3048;
  t3103 = -1.5981976069815686e-7*var1[16];
  t3104 = -0.08675267452931407*t2908;
  t3121 = 0.039853013046*t3109;
  t3128 = t3103 + t3104 + t3121;
  t3164 = 5.7930615939377813e-8*var1[17];
  t3172 = -0.23261833304643187*t3168;
  t3187 = -0.262809976934*t3185;
  t3190 = t3164 + t3172 + t3187;
  t3792 = t2859*t3767;
  t3801 = t2822*t3777;
  t3803 = t3011*t3788;
  t3804 = t3792 + t3801 + t3803;
  t3806 = t3061*t3767;
  t3807 = -0.340999127418*t2427*t3777;
  t3811 = t2509*t3788;
  t3812 = t3806 + t3807 + t3811;
  t3817 = -0.340999127418*t2427*t3767;
  t3818 = t3150*t3777;
  t3819 = t2670*t3788;
  t3820 = t3817 + t3818 + t3819;
  t3217 = -2.281945176511838e-8*var1[17];
  t3219 = -0.5905366811997648*t3168;
  t3243 = -0.262809976934*t3240;
  t3244 = t3217 + t3219 + t3243;
  t3273 = -0.26281014453449253*t3168;
  t3294 = -0.5905363046000001*t3283;
  t3302 = -0.23261818470000004*t3298;
  t3304 = 0. + t3273 + t3294 + t3302;
  t3338 = 0.06199697675299678*t3336;
  t3361 = -0.823260828522*t3360;
  t3370 = -0.324290713329*t3367;
  t3372 = 0. + t3338 + t3361 + t3370;
  t3822 = t3109*t3804;
  t3828 = -0.340999127418*t2908*t3812;
  t3829 = t3203*t3820;
  t3832 = t3822 + t3828 + t3829;
  t3836 = t3044*t3804;
  t3837 = t3261*t3812;
  t3840 = -0.340999127418*t2908*t3820;
  t3843 = t3836 + t3837 + t3840;
  t3846 = t3306*t3804;
  t3848 = t2966*t3812;
  t3849 = t2974*t3820;
  t3850 = t3846 + t3848 + t3849;
  t3411 = 7.500378623168247e-8*var1[18];
  t3413 = -0.32429092013729516*t3336;
  t3423 = 0.061996937216*t3420;
  t3425 = t3411 + t3413 + t3423;
  t3456 = -2.95447451120871e-8*var1[18];
  t3458 = -0.8232613535360118*t3336;
  t3470 = 0.061996937216*t3469;
  t3472 = t3456 + t3458 + t3470;
  t3491 = 7.20503013377005e-8*var1[19];
  t3507 = -0.3667270384178674*t3506;
  t3519 = t3508 + t3515;
  t3521 = -0.29871295412*t3519;
  t3539 = t3526 + t3536;
  t3555 = 0.44503472296900004*t3539;
  t3560 = t3491 + t3507 + t3521 + t3555;
  t3865 = t3298*t3832;
  t3869 = t3283*t3843;
  t3870 = t3384*t3850;
  t3871 = t3865 + t3869 + t3870;
  t3878 = t3431*t3832;
  t3884 = -0.340999127418*t3168*t3843;
  t3885 = t3185*t3850;
  t3887 = t3878 + t3884 + t3885;
  t3891 = -0.340999127418*t3168*t3832;
  t3892 = t3480*t3843;
  t3893 = t3240*t3850;
  t3894 = t3891 + t3892 + t3893;
  t3580 = 2.838136523330542e-8*var1[19];
  t3581 = -0.2845150083511607*t3506;
  t3588 = t3584 + t3587;
  t3590 = 0.44503472296900004*t3588;
  t3597 = t3508 + t3593;
  t3600 = -0.5286755231320001*t3597;
  t3607 = t3580 + t3581 + t3590 + t3600;
  t3623 = 1.0464152525368286e-7*var1[19];
  t3626 = 0.15748087543254813*t3506;
  t3628 = t3526 + t3627;
  t3629 = -0.5286755231320001*t3628;
  t3635 = t3584 + t3631;
  t3645 = -0.29871295412*t3635;
  t3646 = t3623 + t3626 + t3629 + t3645;
  t3661 = t3660 + t3627;
  t3896 = t3469*t3871;
  t3897 = -0.340999127418*t3336*t3887;
  t3898 = t3572*t3894;
  t3902 = t3896 + t3897 + t3898;
  t3667 = t3664 + t3631;
  t3906 = t3420*t3871;
  t3911 = t3616*t3887;
  t3912 = -0.340999127418*t3336*t3894;
  t3913 = t3906 + t3911 + t3912;
  t3673 = -0.353861996165*t3506;
  t3674 = 1. + t3673;
  t3916 = t3648*t3871;
  t3917 = t3367*t3887;
  t3918 = t3360*t3894;
  t3921 = t3916 + t3917 + t3918;
  t3679 = t3678 + t3593;
  t3682 = -0.952469601425*t3506;
  t3685 = 1. + t3682;
  t3694 = t3664 + t3587;
  t3699 = -0.693671301908*t3506;
  t3700 = 1. + t3699;
  t3702 = t3678 + t3515;
  t3713 = t3660 + t3536;
  t3956 = -1.*t135*t1119*t799;
  t3957 = t1772*t135*t1565;
  t3958 = t3956 + t3957;
  t3964 = t1772*t135*t1119;
  t3972 = t135*t799*t1565;
  t3974 = t3964 + t3972;
  t3978 = -1.*t2302*t1122;
  t3980 = 0.340999127418*t238*t3958;
  t3981 = t2584*t3974;
  t3982 = t3978 + t3980 + t3981;
  t3985 = -1.*t2202*t1122;
  t3986 = t2739*t3958;
  t3990 = 0.340999127418*t238*t3974;
  t3996 = t3985 + t3986 + t3990;
  t4009 = -1.*t2870*t1122;
  t4012 = t313*t3958;
  t4025 = t399*t3974;
  t4026 = t4009 + t4012 + t4025;
  t4028 = t2859*t3982;
  t4031 = t2822*t3996;
  t4032 = t3011*t4026;
  t4035 = t4028 + t4031 + t4032;
  t4041 = t3061*t3982;
  t4042 = -0.340999127418*t2427*t3996;
  t4051 = t2509*t4026;
  t4052 = t4041 + t4042 + t4051;
  t4055 = -0.340999127418*t2427*t3982;
  t4058 = t3150*t3996;
  t4068 = t2670*t4026;
  t4069 = t4055 + t4058 + t4068;
  t4071 = t3109*t4035;
  t4076 = -0.340999127418*t2908*t4052;
  t4077 = t3203*t4069;
  t4085 = t4071 + t4076 + t4077;
  t4088 = t3044*t4035;
  t4090 = t3261*t4052;
  t4091 = -0.340999127418*t2908*t4069;
  t4115 = t4088 + t4090 + t4091;
  t4125 = t3306*t4035;
  t4126 = t2966*t4052;
  t4143 = t2974*t4069;
  t4144 = t4125 + t4126 + t4143;
  t4154 = t3298*t4085;
  t4158 = t3283*t4115;
  t4160 = t3384*t4144;
  t4162 = t4154 + t4158 + t4160;
  t4178 = t3431*t4085;
  t4186 = -0.340999127418*t3168*t4115;
  t4199 = t3185*t4144;
  t4201 = t4178 + t4186 + t4199;
  t4208 = -0.340999127418*t3168*t4085;
  t4209 = t3480*t4115;
  t4213 = t3240*t4144;
  t4216 = t4208 + t4209 + t4213;
  t4218 = t3469*t4162;
  t4220 = -0.340999127418*t3336*t4201;
  t4224 = t3572*t4216;
  t4225 = t4218 + t4220 + t4224;
  t4236 = t3420*t4162;
  t4240 = t3616*t4201;
  t4242 = -0.340999127418*t3336*t4216;
  t4243 = t4236 + t4240 + t4242;
  t4245 = t3648*t4162;
  t4248 = t3367*t4201;
  t4251 = t3360*t4216;
  t4254 = t4245 + t4248 + t4251;
  p_output1[0]=0. + t1021*t1687 + t1826*t1954 + t2217*t2278 + t2359*t2391 + t2530*t2609 + t2672*t2779 + t2862*t2896 + t3000*t3020 + t3051*t3097 + t3128*t3156 + t3190*t3215 + t3244*t3271 + t3304*t3321 + t3372*t3395 + t3425*t3445 + t3472*t3486 + t3560*t3578 + t3607*t3620 + t3646*t3653 - 0.018436*(t3578*t3661 + t3620*t3667 + t3653*t3674) - 0.423185*(t3578*t3679 + t3620*t3685 + t3653*t3694) - 0.858308*(t3578*t3700 + t3620*t3702 + t3653*t3713) + t135*t29*t592 + var1[0];
  p_output1[1]=0. + t1021*t3731 + t1826*t3735 + t2217*t3746 + t2359*t3754 + t2530*t3767 + t2672*t3777 + t2862*t3788 + t3000*t3804 + t3051*t3812 + t3128*t3820 + t3190*t3832 + t3244*t3843 + t3304*t3850 + t3372*t3871 + t3425*t3887 + t3472*t3894 + t3560*t3902 + t3607*t3913 + t3646*t3921 - 0.018436*(t3661*t3902 + t3667*t3913 + t3674*t3921) - 0.423185*(t3679*t3902 + t3685*t3913 + t3694*t3921) - 0.858308*(t3700*t3902 + t3702*t3913 + t3713*t3921) + t135*t1386*t592 + var1[1];
  p_output1[2]=0. + t1021*t1119*t135 + t135*t1565*t1826 + t2217*t3958 + t2359*t3974 + t2530*t3982 + t2672*t3996 + t2862*t4026 + t3000*t4035 + t3051*t4052 + t3128*t4069 + t3190*t4085 + t3244*t4115 + t3304*t4144 + t3372*t4162 + t3425*t4201 + t3472*t4216 + t3560*t4225 + t3607*t4243 + t3646*t4254 - 0.018436*(t3661*t4225 + t3667*t4243 + t3674*t4254) - 0.423185*(t3679*t4225 + t3685*t4243 + t3694*t4254) - 0.858308*(t3700*t4225 + t3702*t4243 + t3713*t4254) - 1.*t1122*t592 + var1[2];
}



void p_RightToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Sun 16 Oct 2022 21:58:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottomFront_src.h"

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
  double t486;
  double t223;
  double t983;
  double t1057;
  double t1004;
  double t1112;
  double t260;
  double t261;
  double t392;
  double t717;
  double t1009;
  double t1199;
  double t1236;
  double t1299;
  double t1732;
  double t1739;
  double t1845;
  double t251;
  double t2242;
  double t2292;
  double t2064;
  double t2079;
  double t2140;
  double t2311;
  double t2316;
  double t2322;
  double t2341;
  double t2343;
  double t2386;
  double t2399;
  double t1954;
  double t2031;
  double t506;
  double t509;
  double t519;
  double t590;
  double t2787;
  double t2682;
  double t2683;
  double t2452;
  double t2469;
  double t2471;
  double t2473;
  double t2504;
  double t2506;
  double t2665;
  double t2671;
  double t2609;
  double t2611;
  double t2618;
  double t2621;
  double t2635;
  double t2642;
  double t2693;
  double t2694;
  double t2729;
  double t2734;
  double t2735;
  double t2736;
  double t2745;
  double t2758;
  double t2774;
  double t2400;
  double t2440;
  double t2535;
  double t2569;
  double t2951;
  double t2952;
  double t2822;
  double t2834;
  double t2835;
  double t2837;
  double t2847;
  double t2854;
  double t2898;
  double t2899;
  double t2900;
  double t2906;
  double t2909;
  double t2920;
  double t2964;
  double t2971;
  double t2977;
  double t2985;
  double t2988;
  double t2992;
  double t3011;
  double t3013;
  double t3026;
  double t3029;
  double t2874;
  double t2875;
  double t2788;
  double t2791;
  double t2799;
  double t2817;
  double t3242;
  double t3185;
  double t3188;
  double t3044;
  double t3047;
  double t3053;
  double t3060;
  double t3067;
  double t3075;
  double t3167;
  double t3168;
  double t3115;
  double t3120;
  double t3129;
  double t3135;
  double t3136;
  double t3152;
  double t3196;
  double t3204;
  double t3206;
  double t3214;
  double t3217;
  double t3219;
  double t3227;
  double t3233;
  double t3238;
  double t3038;
  double t3039;
  double t3088;
  double t3098;
  double t3396;
  double t3402;
  double t3403;
  double t3408;
  double t3358;
  double t3360;
  double t3268;
  double t3270;
  double t3286;
  double t3290;
  double t3299;
  double t3303;
  double t3319;
  double t3320;
  double t3327;
  double t3331;
  double t3333;
  double t3334;
  double t3367;
  double t3375;
  double t3379;
  double t3389;
  double t3391;
  double t3393;
  double t3406;
  double t3311;
  double t3313;
  double t3417;
  double t3446;
  double t3252;
  double t3259;
  double t3243;
  double t3246;
  double t3501;
  double t3424;
  double t3425;
  double t3426;
  double t3430;
  double t3433;
  double t3438;
  double t3509;
  double t3478;
  double t3480;
  double t3483;
  double t3484;
  double t3485;
  double t3489;
  double t3520;
  double t3521;
  double t3524;
  double t3527;
  double t3536;
  double t3537;
  double t3459;
  double t3550;
  double t3448;
  double t3570;
  double t3409;
  double t3542;
  double t3418;
  double t469;
  double t518;
  double t591;
  double t620;
  double t857;
  double t944;
  double t1518;
  double t1527;
  double t1596;
  double t1711;
  double t1932;
  double t1940;
  double t2036;
  double t2042;
  double t3621;
  double t3622;
  double t3623;
  double t3629;
  double t3631;
  double t3635;
  double t2230;
  double t2239;
  double t2296;
  double t2303;
  double t2337;
  double t2395;
  double t2443;
  double t2446;
  double t3643;
  double t3644;
  double t3645;
  double t3648;
  double t3650;
  double t3652;
  double t2508;
  double t2512;
  double t2600;
  double t2602;
  double t2650;
  double t2680;
  double t2684;
  double t2685;
  double t2782;
  double t2798;
  double t2818;
  double t2820;
  double t3655;
  double t3658;
  double t3659;
  double t3662;
  double t3668;
  double t3669;
  double t3671;
  double t3673;
  double t3678;
  double t3679;
  double t3680;
  double t3687;
  double t2867;
  double t2870;
  double t2886;
  double t2889;
  double t2945;
  double t2949;
  double t2954;
  double t2956;
  double t3007;
  double t3028;
  double t3040;
  double t3041;
  double t3691;
  double t3692;
  double t3693;
  double t3694;
  double t3696;
  double t3698;
  double t3699;
  double t3702;
  double t3706;
  double t3707;
  double t3708;
  double t3712;
  double t3077;
  double t3080;
  double t3101;
  double t3114;
  double t3164;
  double t3179;
  double t3194;
  double t3195;
  double t3239;
  double t3247;
  double t3263;
  double t3265;
  double t3717;
  double t3718;
  double t3720;
  double t3722;
  double t3725;
  double t3726;
  double t3730;
  double t3731;
  double t3734;
  double t3740;
  double t3741;
  double t3745;
  double t3306;
  double t3309;
  double t3316;
  double t3318;
  double t3348;
  double t3351;
  double t3361;
  double t3366;
  double t3395;
  double t3404;
  double t3412;
  double t3416;
  double t3419;
  double t3422;
  double t3423;
  double t3756;
  double t3758;
  double t3760;
  double t3761;
  double t3763;
  double t3764;
  double t3772;
  double t3776;
  double t3778;
  double t3781;
  double t3785;
  double t3786;
  double t3444;
  double t3445;
  double t3452;
  double t3458;
  double t3460;
  double t3463;
  double t3477;
  double t3492;
  double t3495;
  double t3505;
  double t3508;
  double t3510;
  double t3513;
  double t3519;
  double t3545;
  double t3790;
  double t3794;
  double t3796;
  double t3807;
  double t3556;
  double t3826;
  double t3827;
  double t3835;
  double t3839;
  double t3559;
  double t3560;
  double t3842;
  double t3848;
  double t3851;
  double t3855;
  double t3572;
  double t3575;
  double t3579;
  double t3582;
  double t3595;
  double t3596;
  double t3601;
  double t3608;
  double t3923;
  double t3925;
  double t3926;
  double t3930;
  double t3931;
  double t3936;
  double t3944;
  double t3949;
  double t3951;
  double t3953;
  double t3957;
  double t3961;
  double t3962;
  double t3968;
  double t3970;
  double t3972;
  double t3973;
  double t3976;
  double t3980;
  double t3986;
  double t3990;
  double t3996;
  double t4001;
  double t4002;
  double t4003;
  double t4005;
  double t4016;
  double t4017;
  double t4020;
  double t4023;
  double t4027;
  double t4038;
  double t4041;
  double t4042;
  double t4048;
  double t4050;
  double t4052;
  double t4055;
  double t4062;
  double t4063;
  double t4064;
  double t4072;
  double t4082;
  double t4083;
  double t4085;
  double t4087;
  double t4089;
  double t4090;
  double t4091;
  double t4096;
  double t4101;
  double t4102;
  double t4103;
  double t4105;
  double t4110;
  double t4112;
  double t4113;
  double t4119;
  double t4125;
  double t4128;
  double t4129;
  double t4133;
  double t4138;
  double t4142;
  double t4150;
  double t4151;
  t486 = Sin(var1[14]);
  t223 = Cos(var1[3]);
  t983 = Cos(var1[5]);
  t1057 = Sin(var1[3]);
  t1004 = Sin(var1[4]);
  t1112 = Sin(var1[5]);
  t260 = Cos(var1[14]);
  t261 = -1.*t260;
  t392 = 1. + t261;
  t717 = Sin(var1[13]);
  t1009 = t223*t983*t1004;
  t1199 = t1057*t1112;
  t1236 = t1009 + t1199;
  t1299 = Cos(var1[13]);
  t1732 = -1.*t983*t1057;
  t1739 = t223*t1004*t1112;
  t1845 = t1732 + t1739;
  t251 = Cos(var1[4]);
  t2242 = -0.366501*t486;
  t2292 = 0. + t2242;
  t2064 = -1.*t717*t1236;
  t2079 = t1299*t1845;
  t2140 = t2064 + t2079;
  t2311 = t1299*t1236;
  t2316 = t717*t1845;
  t2322 = t2311 + t2316;
  t2341 = Cos(var1[15]);
  t2343 = -1.*t2341;
  t2386 = 1. + t2343;
  t2399 = Sin(var1[15]);
  t1954 = 0.930418*t486;
  t2031 = 0. + t1954;
  t506 = -0.930418*t486;
  t509 = 0. + t506;
  t519 = 0.366501*t486;
  t590 = 0. + t519;
  t2787 = Sin(var1[16]);
  t2682 = 0.930418*t2399;
  t2683 = 0. + t2682;
  t2452 = t223*t251*t2292;
  t2469 = 0.340999127418*t392*t2140;
  t2471 = -0.134322983001*t392;
  t2473 = 1. + t2471;
  t2504 = t2473*t2322;
  t2506 = t2452 + t2469 + t2504;
  t2665 = 0.366501*t2399;
  t2671 = 0. + t2665;
  t2609 = t223*t251*t2031;
  t2611 = -0.8656776547239999*t392;
  t2618 = 1. + t2611;
  t2621 = t2618*t2140;
  t2635 = 0.340999127418*t392*t2322;
  t2642 = t2609 + t2621 + t2635;
  t2693 = -1.000000637725*t392;
  t2694 = 1. + t2693;
  t2729 = t2694*t223*t251;
  t2734 = t509*t2140;
  t2735 = t590*t2322;
  t2736 = t2729 + t2734 + t2735;
  t2745 = Cos(var1[16]);
  t2758 = -1.*t2745;
  t2774 = 1. + t2758;
  t2400 = -0.930418*t2399;
  t2440 = 0. + t2400;
  t2535 = -0.366501*t2399;
  t2569 = 0. + t2535;
  t2951 = 0.366501*t2787;
  t2952 = 0. + t2951;
  t2822 = t2683*t2506;
  t2834 = t2671*t2642;
  t2835 = -1.000000637725*t2386;
  t2837 = 1. + t2835;
  t2847 = t2837*t2736;
  t2854 = t2822 + t2834 + t2847;
  t2898 = -0.8656776547239999*t2386;
  t2899 = 1. + t2898;
  t2900 = t2899*t2506;
  t2906 = -0.340999127418*t2386*t2642;
  t2909 = t2440*t2736;
  t2920 = t2900 + t2906 + t2909;
  t2964 = -0.340999127418*t2386*t2506;
  t2971 = -0.134322983001*t2386;
  t2977 = 1. + t2971;
  t2985 = t2977*t2642;
  t2988 = t2569*t2736;
  t2992 = t2964 + t2985 + t2988;
  t3011 = Cos(var1[17]);
  t3013 = -1.*t3011;
  t3026 = 1. + t3013;
  t3029 = Sin(var1[17]);
  t2874 = 0.930418*t2787;
  t2875 = 0. + t2874;
  t2788 = -0.930418*t2787;
  t2791 = 0. + t2788;
  t2799 = -0.366501*t2787;
  t2817 = 0. + t2799;
  t3242 = Sin(var1[18]);
  t3185 = -0.366501*t3029;
  t3188 = 0. + t3185;
  t3044 = t2952*t2854;
  t3047 = -0.340999127418*t2774*t2920;
  t3053 = -0.134322983001*t2774;
  t3060 = 1. + t3053;
  t3067 = t3060*t2992;
  t3075 = t3044 + t3047 + t3067;
  t3167 = -0.930418*t3029;
  t3168 = 0. + t3167;
  t3115 = t2875*t2854;
  t3120 = -0.8656776547239999*t2774;
  t3129 = 1. + t3120;
  t3135 = t3129*t2920;
  t3136 = -0.340999127418*t2774*t2992;
  t3152 = t3115 + t3135 + t3136;
  t3196 = -1.000000637725*t2774;
  t3204 = 1. + t3196;
  t3206 = t3204*t2854;
  t3214 = t2791*t2920;
  t3217 = t2817*t2992;
  t3219 = t3206 + t3214 + t3217;
  t3227 = Cos(var1[18]);
  t3233 = -1.*t3227;
  t3238 = 1. + t3233;
  t3038 = 0.366501*t3029;
  t3039 = 0. + t3038;
  t3088 = 0.930418*t3029;
  t3098 = 0. + t3088;
  t3396 = Cos(var1[19]);
  t3402 = -1.*t3396;
  t3403 = 1. + t3402;
  t3408 = Sin(var1[19]);
  t3358 = 0.930418*t3242;
  t3360 = 0. + t3358;
  t3268 = t3188*t3075;
  t3270 = t3168*t3152;
  t3286 = -1.000000637725*t3026;
  t3290 = 1. + t3286;
  t3299 = t3290*t3219;
  t3303 = t3268 + t3270 + t3299;
  t3319 = -0.134322983001*t3026;
  t3320 = 1. + t3319;
  t3327 = t3320*t3075;
  t3331 = -0.340999127418*t3026*t3152;
  t3333 = t3039*t3219;
  t3334 = t3327 + t3331 + t3333;
  t3367 = -0.340999127418*t3026*t3075;
  t3375 = -0.8656776547239999*t3026;
  t3379 = 1. + t3375;
  t3389 = t3379*t3152;
  t3391 = t3098*t3219;
  t3393 = t3367 + t3389 + t3391;
  t3406 = -0.120666640478*t3403;
  t3311 = 0.366501*t3242;
  t3313 = 0. + t3311;
  t3417 = -0.444895486988*t3403;
  t3446 = -0.175248972904*t3403;
  t3252 = -0.366501*t3242;
  t3259 = 0. + t3252;
  t3243 = -0.930418*t3242;
  t3246 = 0. + t3243;
  t3501 = -0.218018*t3408;
  t3424 = t3360*t3303;
  t3425 = -0.340999127418*t3238*t3334;
  t3426 = -0.8656776547239999*t3238;
  t3430 = 1. + t3426;
  t3433 = t3430*t3393;
  t3438 = t3424 + t3425 + t3433;
  t3509 = 0.553471*t3408;
  t3478 = t3313*t3303;
  t3480 = -0.134322983001*t3238;
  t3483 = 1. + t3480;
  t3484 = t3483*t3334;
  t3485 = -0.340999127418*t3238*t3393;
  t3489 = t3478 + t3484 + t3485;
  t3520 = -1.000000637725*t3238;
  t3521 = 1. + t3520;
  t3524 = t3521*t3303;
  t3527 = t3259*t3334;
  t3536 = t3246*t3393;
  t3537 = t3524 + t3527 + t3536;
  t3459 = 0.803828*t3408;
  t3550 = 0.175248972904*t3403;
  t3448 = -0.553471*t3408;
  t3570 = 0.120666640478*t3403;
  t3409 = -0.803828*t3408;
  t3542 = 0.444895486988*t3403;
  t3418 = 0.218018*t3408;
  t469 = -0.04500040093286238*t392;
  t518 = -0.07877663122399998*t509;
  t591 = 0.031030906668*t590;
  t620 = 0. + t469 + t518 + t591;
  t857 = -0.091*t717;
  t944 = 0. + t857;
  t1518 = -1.*t1299;
  t1527 = 1. + t1518;
  t1596 = -0.091*t1527;
  t1711 = 0. + t1596;
  t1932 = 1.296332362046933e-7*var1[14];
  t1940 = -0.07877668146182712*t392;
  t2036 = -0.045000372235*t2031;
  t2042 = t1932 + t1940 + t2036;
  t3621 = t983*t1057*t1004;
  t3622 = -1.*t223*t1112;
  t3623 = t3621 + t3622;
  t3629 = t223*t983;
  t3631 = t1057*t1004*t1112;
  t3635 = t3629 + t3631;
  t2230 = 3.2909349868922137e-7*var1[14];
  t2239 = 0.03103092645718495*t392;
  t2296 = -0.045000372235*t2292;
  t2303 = t2230 + t2239 + t2296;
  t2337 = -1.296332362046933e-7*var1[15];
  t2395 = -0.14128592423750855*t2386;
  t2443 = -0.045000372235*t2440;
  t2446 = t2337 + t2395 + t2443;
  t3643 = -1.*t717*t3623;
  t3644 = t1299*t3635;
  t3645 = t3643 + t3644;
  t3648 = t1299*t3623;
  t3650 = t717*t3635;
  t3652 = t3648 + t3650;
  t2508 = 3.2909349868922137e-7*var1[15];
  t2512 = -0.055653945343889656*t2386;
  t2600 = -0.045000372235*t2569;
  t2602 = t2508 + t2512 + t2600;
  t2650 = -0.04500040093286238*t2386;
  t2680 = -0.055653909852*t2671;
  t2684 = -0.141285834136*t2683;
  t2685 = 0. + t2650 + t2680 + t2684;
  t2782 = 0.039853038461262744*t2774;
  t2798 = -0.22023459268999998*t2791;
  t2818 = -0.086752619205*t2817;
  t2820 = 0. + t2782 + t2798 + t2818;
  t3655 = t251*t2292*t1057;
  t3658 = 0.340999127418*t392*t3645;
  t3659 = t2473*t3652;
  t3662 = t3655 + t3658 + t3659;
  t3668 = t251*t2031*t1057;
  t3669 = t2618*t3645;
  t3671 = 0.340999127418*t392*t3652;
  t3673 = t3668 + t3669 + t3671;
  t3678 = t2694*t251*t1057;
  t3679 = t509*t3645;
  t3680 = t590*t3652;
  t3687 = t3678 + t3679 + t3680;
  t2867 = 6.295460977284962e-8*var1[16];
  t2870 = -0.22023473313910558*t2774;
  t2886 = 0.039853013046*t2875;
  t2889 = t2867 + t2870 + t2886;
  t2945 = -1.5981976069815686e-7*var1[16];
  t2949 = -0.08675267452931407*t2774;
  t2954 = 0.039853013046*t2952;
  t2956 = t2945 + t2949 + t2954;
  t3007 = 5.7930615939377813e-8*var1[17];
  t3028 = -0.23261833304643187*t3026;
  t3040 = -0.262809976934*t3039;
  t3041 = t3007 + t3028 + t3040;
  t3691 = t2683*t3662;
  t3692 = t2671*t3673;
  t3693 = t2837*t3687;
  t3694 = t3691 + t3692 + t3693;
  t3696 = t2899*t3662;
  t3698 = -0.340999127418*t2386*t3673;
  t3699 = t2440*t3687;
  t3702 = t3696 + t3698 + t3699;
  t3706 = -0.340999127418*t2386*t3662;
  t3707 = t2977*t3673;
  t3708 = t2569*t3687;
  t3712 = t3706 + t3707 + t3708;
  t3077 = -2.281945176511838e-8*var1[17];
  t3080 = -0.5905366811997648*t3026;
  t3101 = -0.262809976934*t3098;
  t3114 = t3077 + t3080 + t3101;
  t3164 = -0.26281014453449253*t3026;
  t3179 = -0.5905363046000001*t3168;
  t3194 = -0.23261818470000004*t3188;
  t3195 = 0. + t3164 + t3179 + t3194;
  t3239 = 0.06199697675299678*t3238;
  t3247 = -0.823260828522*t3246;
  t3263 = -0.324290713329*t3259;
  t3265 = 0. + t3239 + t3247 + t3263;
  t3717 = t2952*t3694;
  t3718 = -0.340999127418*t2774*t3702;
  t3720 = t3060*t3712;
  t3722 = t3717 + t3718 + t3720;
  t3725 = t2875*t3694;
  t3726 = t3129*t3702;
  t3730 = -0.340999127418*t2774*t3712;
  t3731 = t3725 + t3726 + t3730;
  t3734 = t3204*t3694;
  t3740 = t2791*t3702;
  t3741 = t2817*t3712;
  t3745 = t3734 + t3740 + t3741;
  t3306 = 7.500378623168247e-8*var1[18];
  t3309 = -0.32429092013729516*t3238;
  t3316 = 0.061996937216*t3313;
  t3318 = t3306 + t3309 + t3316;
  t3348 = -2.95447451120871e-8*var1[18];
  t3351 = -0.8232613535360118*t3238;
  t3361 = 0.061996937216*t3360;
  t3366 = t3348 + t3351 + t3361;
  t3395 = 7.20503013377005e-8*var1[19];
  t3404 = -0.3667270384178674*t3403;
  t3412 = t3406 + t3409;
  t3416 = -0.29871295412*t3412;
  t3419 = t3417 + t3418;
  t3422 = 0.44503472296900004*t3419;
  t3423 = t3395 + t3404 + t3416 + t3422;
  t3756 = t3188*t3722;
  t3758 = t3168*t3731;
  t3760 = t3290*t3745;
  t3761 = t3756 + t3758 + t3760;
  t3763 = t3320*t3722;
  t3764 = -0.340999127418*t3026*t3731;
  t3772 = t3039*t3745;
  t3776 = t3763 + t3764 + t3772;
  t3778 = -0.340999127418*t3026*t3722;
  t3781 = t3379*t3731;
  t3785 = t3098*t3745;
  t3786 = t3778 + t3781 + t3785;
  t3444 = 2.838136523330542e-8*var1[19];
  t3445 = -0.2845150083511607*t3403;
  t3452 = t3446 + t3448;
  t3458 = 0.44503472296900004*t3452;
  t3460 = t3406 + t3459;
  t3463 = -0.5286755231320001*t3460;
  t3477 = t3444 + t3445 + t3458 + t3463;
  t3492 = 1.0464152525368286e-7*var1[19];
  t3495 = 0.15748087543254813*t3403;
  t3505 = t3417 + t3501;
  t3508 = -0.5286755231320001*t3505;
  t3510 = t3446 + t3509;
  t3513 = -0.29871295412*t3510;
  t3519 = t3492 + t3495 + t3508 + t3513;
  t3545 = t3542 + t3501;
  t3790 = t3360*t3761;
  t3794 = -0.340999127418*t3238*t3776;
  t3796 = t3430*t3786;
  t3807 = t3790 + t3794 + t3796;
  t3556 = t3550 + t3509;
  t3826 = t3313*t3761;
  t3827 = t3483*t3776;
  t3835 = -0.340999127418*t3238*t3786;
  t3839 = t3826 + t3827 + t3835;
  t3559 = -0.353861996165*t3403;
  t3560 = 1. + t3559;
  t3842 = t3521*t3761;
  t3848 = t3259*t3776;
  t3851 = t3246*t3786;
  t3855 = t3842 + t3848 + t3851;
  t3572 = t3570 + t3459;
  t3575 = -0.952469601425*t3403;
  t3579 = 1. + t3575;
  t3582 = t3550 + t3448;
  t3595 = -0.693671301908*t3403;
  t3596 = 1. + t3595;
  t3601 = t3570 + t3409;
  t3608 = t3542 + t3418;
  t3923 = -1.*t251*t983*t717;
  t3925 = t1299*t251*t1112;
  t3926 = t3923 + t3925;
  t3930 = t1299*t251*t983;
  t3931 = t251*t717*t1112;
  t3936 = t3930 + t3931;
  t3944 = -1.*t2292*t1004;
  t3949 = 0.340999127418*t392*t3926;
  t3951 = t2473*t3936;
  t3953 = t3944 + t3949 + t3951;
  t3957 = -1.*t2031*t1004;
  t3961 = t2618*t3926;
  t3962 = 0.340999127418*t392*t3936;
  t3968 = t3957 + t3961 + t3962;
  t3970 = -1.*t2694*t1004;
  t3972 = t509*t3926;
  t3973 = t590*t3936;
  t3976 = t3970 + t3972 + t3973;
  t3980 = t2683*t3953;
  t3986 = t2671*t3968;
  t3990 = t2837*t3976;
  t3996 = t3980 + t3986 + t3990;
  t4001 = t2899*t3953;
  t4002 = -0.340999127418*t2386*t3968;
  t4003 = t2440*t3976;
  t4005 = t4001 + t4002 + t4003;
  t4016 = -0.340999127418*t2386*t3953;
  t4017 = t2977*t3968;
  t4020 = t2569*t3976;
  t4023 = t4016 + t4017 + t4020;
  t4027 = t2952*t3996;
  t4038 = -0.340999127418*t2774*t4005;
  t4041 = t3060*t4023;
  t4042 = t4027 + t4038 + t4041;
  t4048 = t2875*t3996;
  t4050 = t3129*t4005;
  t4052 = -0.340999127418*t2774*t4023;
  t4055 = t4048 + t4050 + t4052;
  t4062 = t3204*t3996;
  t4063 = t2791*t4005;
  t4064 = t2817*t4023;
  t4072 = t4062 + t4063 + t4064;
  t4082 = t3188*t4042;
  t4083 = t3168*t4055;
  t4085 = t3290*t4072;
  t4087 = t4082 + t4083 + t4085;
  t4089 = t3320*t4042;
  t4090 = -0.340999127418*t3026*t4055;
  t4091 = t3039*t4072;
  t4096 = t4089 + t4090 + t4091;
  t4101 = -0.340999127418*t3026*t4042;
  t4102 = t3379*t4055;
  t4103 = t3098*t4072;
  t4105 = t4101 + t4102 + t4103;
  t4110 = t3360*t4087;
  t4112 = -0.340999127418*t3238*t4096;
  t4113 = t3430*t4105;
  t4119 = t4110 + t4112 + t4113;
  t4125 = t3313*t4087;
  t4128 = t3483*t4096;
  t4129 = -0.340999127418*t3238*t4105;
  t4133 = t4125 + t4128 + t4129;
  t4138 = t3521*t4087;
  t4142 = t3259*t4096;
  t4150 = t3246*t4105;
  t4151 = t4138 + t4142 + t4150;
  p_output1[0]=0. + t1711*t1845 + t2042*t2140 + t2303*t2322 + t2446*t2506 + t2602*t2642 + t2685*t2736 + t2820*t2854 + t2889*t2920 + t2956*t2992 + t3041*t3075 + t3114*t3152 + t3195*t3219 + t3265*t3303 + t3318*t3334 + t3366*t3393 + t3423*t3438 + t3477*t3489 + t3519*t3537 + 0.061997*(t3438*t3545 + t3489*t3556 + t3537*t3560) - 0.481688*(t3438*t3572 + t3489*t3579 + t3537*t3582) - 0.76126*(t3438*t3596 + t3489*t3601 + t3537*t3608) + t223*t251*t620 + t1236*t944 + var1[0];
  p_output1[1]=0. + t1711*t3635 + t2042*t3645 + t2303*t3652 + t2446*t3662 + t2602*t3673 + t2685*t3687 + t2820*t3694 + t2889*t3702 + t2956*t3712 + t3041*t3722 + t3114*t3731 + t3195*t3745 + t3265*t3761 + t3318*t3776 + t3366*t3786 + t3423*t3807 + t3477*t3839 + t3519*t3855 + 0.061997*(t3545*t3807 + t3556*t3839 + t3560*t3855) - 0.481688*(t3572*t3807 + t3579*t3839 + t3582*t3855) - 0.76126*(t3596*t3807 + t3601*t3839 + t3608*t3855) + t1057*t251*t620 + t3623*t944 + var1[1];
  p_output1[2]=0. + t1112*t1711*t251 + t2042*t3926 + t2303*t3936 + t2446*t3953 + t2602*t3968 + t2685*t3976 + t2820*t3996 + t2889*t4005 + t2956*t4023 + t3041*t4042 + t3114*t4055 + t3195*t4072 + t3265*t4087 + t3318*t4096 + t3366*t4105 + t3423*t4119 + t3477*t4133 + t3519*t4151 + 0.061997*(t3545*t4119 + t3556*t4133 + t3560*t4151) - 0.481688*(t3572*t4119 + t3579*t4133 + t3582*t4151) - 0.76126*(t3596*t4119 + t3601*t4133 + t3608*t4151) - 1.*t1004*t620 + t251*t944*t983 + var1[2];
}



void p_RightToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

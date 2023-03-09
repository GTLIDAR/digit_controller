/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:57:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_left_knee_src.h"

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
  double t1856;
  double t1564;
  double t1883;
  double t1598;
  double t1906;
  double t1288;
  double t1458;
  double t1477;
  double t1544;
  double t2022;
  double t2029;
  double t2035;
  double t1646;
  double t1951;
  double t1980;
  double t2093;
  double t818;
  double t825;
  double t1068;
  double t2019;
  double t2105;
  double t2113;
  double t2154;
  double t2159;
  double t2265;
  double t2300;
  double t2358;
  double t2590;
  double t2608;
  double t2610;
  double t2614;
  double t2622;
  double t2634;
  double t2638;
  double t2659;
  double t2727;
  double t2810;
  double t2147;
  double t2151;
  double t2152;
  double t2268;
  double t2361;
  double t2366;
  double t2393;
  double t2402;
  double t2815;
  double t2469;
  double t2470;
  double t2477;
  double t2482;
  double t2488;
  double t2497;
  double t2541;
  double t2547;
  double t211;
  double t542;
  double t562;
  double t2452;
  double t2454;
  double t2455;
  double t2566;
  double t2820;
  double t2821;
  double t2823;
  double t2899;
  double t2905;
  double t2943;
  double t2956;
  double t2958;
  double t2960;
  double t2962;
  double t2963;
  double t2970;
  double t2972;
  double t2973;
  double t2976;
  double t2990;
  double t2995;
  double t2999;
  double t3002;
  double t3005;
  double t3013;
  double t3014;
  double t3057;
  double t3244;
  double t3249;
  double t3252;
  double t3221;
  double t3235;
  double t3236;
  double t3243;
  double t3253;
  double t3257;
  double t3262;
  double t3263;
  double t3267;
  double t2906;
  double t2918;
  double t3301;
  double t3307;
  double t3315;
  double t3316;
  double t3260;
  double t3270;
  double t3275;
  double t3276;
  double t3284;
  double t3288;
  double t3289;
  double t3293;
  double t2985;
  double t2989;
  double t3101;
  double t3107;
  double t3281;
  double t3296;
  double t3320;
  double t3337;
  double t3128;
  double t3131;
  double t3340;
  double t3352;
  double t3357;
  double t3361;
  double t3386;
  double t3395;
  double t3404;
  double t3408;
  double t3157;
  double t3161;
  double t3167;
  double t3171;
  double t3175;
  double t3181;
  double t3479;
  double t3488;
  double t3489;
  double t3498;
  double t3504;
  double t3507;
  double t3546;
  double t3557;
  double t3558;
  double t3559;
  double t3490;
  double t3509;
  double t3511;
  double t3516;
  double t3519;
  double t3520;
  double t3522;
  double t3529;
  double t3518;
  double t3535;
  double t3563;
  double t3565;
  double t3570;
  double t3573;
  double t3576;
  double t3577;
  double t3583;
  double t3589;
  double t3592;
  double t3601;
  double t2903;
  double t2981;
  double t3058;
  double t3064;
  double t3068;
  double t3122;
  double t3137;
  double t3138;
  double t3146;
  double t3150;
  double t3165;
  double t3173;
  double t3192;
  double t3203;
  double t3339;
  double t3364;
  double t3422;
  double t3423;
  double t3427;
  double t3437;
  double t3438;
  double t3443;
  double t3444;
  double t3449;
  double t3455;
  double t3457;
  double t3459;
  double t3462;
  double t3567;
  double t3581;
  double t3606;
  double t3622;
  double t3627;
  double t3629;
  double t3639;
  double t3641;
  double t3642;
  double t3650;
  double t3657;
  double t3661;
  double t3665;
  double t3677;
  t1856 = Cos(var1[3]);
  t1564 = Cos(var1[5]);
  t1883 = Sin(var1[4]);
  t1598 = Sin(var1[3]);
  t1906 = Sin(var1[5]);
  t1288 = Cos(var1[7]);
  t1458 = -1.*t1288;
  t1477 = 1. + t1458;
  t1544 = Cos(var1[6]);
  t2022 = t1856*t1564*t1883;
  t2029 = t1598*t1906;
  t2035 = t2022 + t2029;
  t1646 = -1.*t1564*t1598;
  t1951 = t1856*t1883*t1906;
  t1980 = t1646 + t1951;
  t2093 = Sin(var1[6]);
  t818 = Cos(var1[8]);
  t825 = -1.*t818;
  t1068 = 1. + t825;
  t2019 = t1544*t1980;
  t2105 = -1.*t2035*t2093;
  t2113 = t2019 + t2105;
  t2154 = t1544*t2035;
  t2159 = t1980*t2093;
  t2265 = t2154 + t2159;
  t2300 = Cos(var1[4]);
  t2358 = Sin(var1[7]);
  t2590 = -1.000000637725*t1477;
  t2608 = 1. + t2590;
  t2610 = t1856*t2300*t2608;
  t2614 = -0.930418*t2358;
  t2622 = 0. + t2614;
  t2634 = t2113*t2622;
  t2638 = -0.366501*t2358;
  t2659 = 0. + t2638;
  t2727 = t2265*t2659;
  t2810 = t2610 + t2634 + t2727;
  t2147 = -0.340999127418*t1477*t2113;
  t2151 = -0.134322983001*t1477;
  t2152 = 1. + t2151;
  t2268 = t2152*t2265;
  t2361 = 0.366501*t2358;
  t2366 = 0. + t2361;
  t2393 = t1856*t2300*t2366;
  t2402 = t2147 + t2268 + t2393;
  t2815 = Sin(var1[8]);
  t2469 = -0.8656776547239999*t1477;
  t2470 = 1. + t2469;
  t2477 = t2470*t2113;
  t2482 = -0.340999127418*t1477*t2265;
  t2488 = 0.930418*t2358;
  t2497 = 0. + t2488;
  t2541 = t1856*t2300*t2497;
  t2547 = t2477 + t2482 + t2541;
  t211 = Cos(var1[9]);
  t542 = -1.*t211;
  t562 = 1. + t542;
  t2452 = 0.340999127418*t1068*t2402;
  t2454 = -0.134322983001*t1068;
  t2455 = 1. + t2454;
  t2566 = t2455*t2547;
  t2820 = -0.366501*t2815;
  t2821 = 0. + t2820;
  t2823 = t2810*t2821;
  t2899 = t2452 + t2566 + t2823;
  t2905 = Sin(var1[9]);
  t2943 = -1.000000637725*t1068;
  t2956 = 1. + t2943;
  t2958 = t2956*t2810;
  t2960 = -0.930418*t2815;
  t2962 = 0. + t2960;
  t2963 = t2402*t2962;
  t2970 = 0.366501*t2815;
  t2972 = 0. + t2970;
  t2973 = t2547*t2972;
  t2976 = t2958 + t2963 + t2973;
  t2990 = -0.8656776547239999*t1068;
  t2995 = 1. + t2990;
  t2999 = t2995*t2402;
  t3002 = 0.340999127418*t1068*t2547;
  t3005 = 0.930418*t2815;
  t3013 = 0. + t3005;
  t3014 = t2810*t3013;
  t3057 = t2999 + t3002 + t3014;
  t3244 = t1564*t1598*t1883;
  t3249 = -1.*t1856*t1906;
  t3252 = t3244 + t3249;
  t3221 = t1856*t1564;
  t3235 = t1598*t1883*t1906;
  t3236 = t3221 + t3235;
  t3243 = t1544*t3236;
  t3253 = -1.*t3252*t2093;
  t3257 = t3243 + t3253;
  t3262 = t1544*t3252;
  t3263 = t3236*t2093;
  t3267 = t3262 + t3263;
  t2906 = -0.930418*t2905;
  t2918 = 0. + t2906;
  t3301 = t2300*t2608*t1598;
  t3307 = t3257*t2622;
  t3315 = t3267*t2659;
  t3316 = t3301 + t3307 + t3315;
  t3260 = -0.340999127418*t1477*t3257;
  t3270 = t2152*t3267;
  t3275 = t2300*t1598*t2366;
  t3276 = t3260 + t3270 + t3275;
  t3284 = t2470*t3257;
  t3288 = -0.340999127418*t1477*t3267;
  t3289 = t2300*t1598*t2497;
  t3293 = t3284 + t3288 + t3289;
  t2985 = -0.8656776547239999*t562;
  t2989 = 1. + t2985;
  t3101 = -0.134322983001*t562;
  t3107 = 1. + t3101;
  t3281 = 0.340999127418*t1068*t3276;
  t3296 = t2455*t3293;
  t3320 = t3316*t2821;
  t3337 = t3281 + t3296 + t3320;
  t3128 = 0.366501*t2905;
  t3131 = 0. + t3128;
  t3340 = t2956*t3316;
  t3352 = t3276*t2962;
  t3357 = t3293*t2972;
  t3361 = t3340 + t3352 + t3357;
  t3386 = t2995*t3276;
  t3395 = 0.340999127418*t1068*t3293;
  t3404 = t3316*t3013;
  t3408 = t3386 + t3395 + t3404;
  t3157 = -0.366501*t2905;
  t3161 = 0. + t3157;
  t3167 = -1.000000637725*t562;
  t3171 = 1. + t3167;
  t3175 = 0.930418*t2905;
  t3181 = 0. + t3175;
  t3479 = t2300*t1544*t1906;
  t3488 = -1.*t2300*t1564*t2093;
  t3489 = t3479 + t3488;
  t3498 = t2300*t1564*t1544;
  t3504 = t2300*t1906*t2093;
  t3507 = t3498 + t3504;
  t3546 = -1.*t2608*t1883;
  t3557 = t3489*t2622;
  t3558 = t3507*t2659;
  t3559 = t3546 + t3557 + t3558;
  t3490 = -0.340999127418*t1477*t3489;
  t3509 = t2152*t3507;
  t3511 = -1.*t1883*t2366;
  t3516 = t3490 + t3509 + t3511;
  t3519 = t2470*t3489;
  t3520 = -0.340999127418*t1477*t3507;
  t3522 = -1.*t1883*t2497;
  t3529 = t3519 + t3520 + t3522;
  t3518 = 0.340999127418*t1068*t3516;
  t3535 = t2455*t3529;
  t3563 = t3559*t2821;
  t3565 = t3518 + t3535 + t3563;
  t3570 = t2956*t3559;
  t3573 = t3516*t2962;
  t3576 = t3529*t2972;
  t3577 = t3570 + t3573 + t3576;
  t3583 = t2995*t3516;
  t3589 = 0.340999127418*t1068*t3529;
  t3592 = t3559*t3013;
  t3601 = t3583 + t3589 + t3592;
  t2903 = 0.340999127418*t562*t2899;
  t2981 = t2918*t2976;
  t3058 = t2989*t3057;
  t3064 = t2903 + t2981 + t3058;
  t3068 = -0.657905*t3064;
  t3122 = t3107*t2899;
  t3137 = t3131*t2976;
  t3138 = 0.340999127418*t562*t3057;
  t3146 = t3122 + t3137 + t3138;
  t3150 = 0.259155*t3146;
  t3165 = t3161*t2899;
  t3173 = t3171*t2976;
  t3192 = t3181*t3057;
  t3203 = t3165 + t3173 + t3192;
  t3339 = 0.340999127418*t562*t3337;
  t3364 = t2918*t3361;
  t3422 = t2989*t3408;
  t3423 = t3339 + t3364 + t3422;
  t3427 = -0.657905*t3423;
  t3437 = t3107*t3337;
  t3438 = t3131*t3361;
  t3443 = 0.340999127418*t562*t3408;
  t3444 = t3437 + t3438 + t3443;
  t3449 = 0.259155*t3444;
  t3455 = t3161*t3337;
  t3457 = t3171*t3361;
  t3459 = t3181*t3408;
  t3462 = t3455 + t3457 + t3459;
  t3567 = 0.340999127418*t562*t3565;
  t3581 = t2918*t3577;
  t3606 = t2989*t3601;
  t3622 = t3567 + t3581 + t3606;
  t3627 = -0.657905*t3622;
  t3629 = t3107*t3565;
  t3639 = t3131*t3577;
  t3641 = 0.340999127418*t562*t3601;
  t3642 = t3629 + t3639 + t3641;
  t3650 = 0.259155*t3642;
  t3657 = t3161*t3565;
  t3661 = t3171*t3577;
  t3665 = t3181*t3601;
  t3677 = t3657 + t3661 + t3665;
  p_output1[0]=t3068 + t3150 - 0.707107*t3203;
  p_output1[1]=t3427 + t3449 - 0.707107*t3462;
  p_output1[2]=t3627 + t3650 - 0.707107*t3677;
  p_output1[3]=t3068 + t3150 + 0.707107*t3203;
  p_output1[4]=t3427 + t3449 + 0.707107*t3462;
  p_output1[5]=t3627 + t3650 + 0.707107*t3677;
  p_output1[6]=-0.366501*t3064 - 0.930418*t3146;
  p_output1[7]=-0.366501*t3423 - 0.930418*t3444;
  p_output1[8]=-0.366501*t3622 - 0.930418*t3642;
}



void R_left_knee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_shoulder_roll_joint_left_src.h"

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
  double t1047;
  double t149;
  double t340;
  double t379;
  double t406;
  double t520;
  double t336;
  double t2060;
  double t509;
  double t826;
  double t864;
  double t2684;
  double t1364;
  double t1548;
  double t2002;
  double t2059;
  double t2727;
  double t2732;
  double t2747;
  double t2766;
  double t2794;
  double t2807;
  double t2950;
  double t2957;
  double t2959;
  double t3031;
  double t3044;
  double t3050;
  double t3146;
  double t3163;
  double t3165;
  double t3287;
  double t3290;
  double t3291;
  double t2864;
  double t2914;
  double t2928;
  double t2936;
  double t3028;
  double t3029;
  double t3364;
  double t3365;
  double t3369;
  double t3052;
  double t3070;
  double t3081;
  double t3178;
  double t3257;
  double t3259;
  double t3260;
  double t3262;
  double t3267;
  double t3269;
  double t1092;
  double t1506;
  double t2068;
  double t2182;
  double t2266;
  double t2472;
  double t2473;
  double t2500;
  double t2581;
  double t2582;
  double t2649;
  double t2672;
  double t2688;
  double t3248;
  double t3250;
  double t3253;
  double t3261;
  double t3273;
  double t3276;
  double t3418;
  double t3486;
  double t3489;
  double t3493;
  double t3495;
  double t3496;
  double t3502;
  double t3503;
  double t3516;
  double t3377;
  double t3316;
  double t3320;
  double t3339;
  double t2756;
  double t2809;
  double t2814;
  double t2872;
  double t2873;
  double t2874;
  double t2875;
  double t2877;
  double t2886;
  double t3130;
  double t3166;
  double t3170;
  double t3171;
  double t3173;
  double t3175;
  double t3208;
  double t3218;
  double t3231;
  double t3234;
  double t3640;
  double t3643;
  double t3644;
  double t3647;
  double t3652;
  double t3658;
  double t3662;
  double t3671;
  double t3292;
  double t3294;
  double t3299;
  double t3302;
  double t3309;
  double t3342;
  double t3349;
  double t3887;
  double t3893;
  double t3894;
  double t3113;
  double t3419;
  double t3420;
  double t3427;
  double t3429;
  double t3434;
  double t3443;
  double t3734;
  double t3736;
  double t3738;
  double t3745;
  double t3746;
  double t3750;
  double t3752;
  double t3754;
  double t3756;
  double t3757;
  double t3780;
  double t3785;
  double t3789;
  double t3792;
  double t3793;
  double t3795;
  double t3796;
  double t3798;
  double t3800;
  double t3801;
  double t3802;
  double t3455;
  double t3457;
  double t3460;
  double t3465;
  double t3466;
  double t3473;
  double t3478;
  double t3479;
  double t3851;
  double t3854;
  double t3857;
  double t3864;
  double t3865;
  double t3869;
  double t3870;
  double t3398;
  double t3404;
  double t3405;
  double t2996;
  double t3051;
  double t3099;
  double t3101;
  double t3115;
  double t3116;
  double t3119;
  double t3610;
  double t3611;
  double t3613;
  double t3615;
  double t3629;
  double t3631;
  double t3632;
  double t3635;
  double t3359;
  double t3370;
  double t3384;
  double t3390;
  double t3397;
  double t3406;
  double t3415;
  double t3896;
  double t3900;
  double t3901;
  double t3902;
  double t3904;
  double t3908;
  double t3912;
  double t3913;
  double t3918;
  double t3932;
  double t3995;
  double t3996;
  double t3997;
  double t3958;
  double t3961;
  double t3967;
  double t3968;
  double t3969;
  double t3970;
  double t3972;
  double t3974;
  double t3976;
  double t3978;
  double t3979;
  double t3809;
  double t3812;
  double t3815;
  double t3825;
  double t3830;
  double t3832;
  double t3834;
  double t3839;
  double t3841;
  double t3842;
  double t3843;
  t1047 = Sin(var1[3]);
  t149 = Cos(var1[4]);
  t340 = Cos(var1[13]);
  t379 = -1.*t340;
  t406 = 1. + t379;
  t520 = Sin(var1[13]);
  t336 = Cos(var1[5]);
  t2060 = Sin(var1[5]);
  t509 = 0.4*t406;
  t826 = 0.12*t520;
  t864 = 0. + t509 + t826;
  t2684 = Cos(var1[3]);
  t1364 = Sin(var1[4]);
  t1548 = 0.12*t406;
  t2002 = -0.4*t520;
  t2059 = 0. + t1548 + t2002;
  t2727 = -1.*t2684*t336*t1364;
  t2732 = -1.*t1047*t2060;
  t2747 = t2727 + t2732;
  t2766 = t336*t1047;
  t2794 = -1.*t2684*t1364*t2060;
  t2807 = t2766 + t2794;
  t2950 = -1.*t336*t1047*t1364;
  t2957 = t2684*t2060;
  t2959 = t2950 + t2957;
  t3031 = -1.*t2684*t336;
  t3044 = -1.*t1047*t1364*t2060;
  t3050 = t3031 + t3044;
  t3146 = t2684*t336;
  t3163 = t1047*t1364*t2060;
  t3165 = t3146 + t3163;
  t3287 = t2684*t336*t1364;
  t3290 = t1047*t2060;
  t3291 = t3287 + t3290;
  t2864 = t340*t2807;
  t2914 = 0.12*t340;
  t2928 = 0.4*t520;
  t2936 = t2914 + t2928;
  t3028 = -0.4*t340;
  t3029 = t3028 + t826;
  t3364 = -1.*t336*t1047;
  t3365 = t2684*t1364*t2060;
  t3369 = t3364 + t3365;
  t3052 = -1.*t520*t2959;
  t3070 = t340*t3050;
  t3081 = t3052 + t3070;
  t3178 = t340*t2959;
  t3257 = -1.*t2684*t149*t336*t520;
  t3259 = t340*t2684*t149*t2060;
  t3260 = t3257 + t3259;
  t3262 = t340*t2684*t149*t336;
  t3267 = t2684*t149*t520*t2060;
  t3269 = t3262 + t3267;
  t1092 = -1.*t149*t336*t864*t1047;
  t1506 = -0.001*t1047*t1364;
  t2068 = -1.*t149*t2059*t1047*t2060;
  t2182 = t149*t336*t520*t1047;
  t2266 = -1.*t340*t149*t1047*t2060;
  t2472 = t2182 + t2266;
  t2473 = 0.12*t2472;
  t2500 = -1.*t340*t149*t336*t1047;
  t2581 = -1.*t149*t520*t1047*t2060;
  t2582 = t2500 + t2581;
  t2649 = 0.4*t2582;
  t2672 = t1092 + t1506 + t2068 + t2473 + t2649;
  t2688 = 0.001*t2684*t149;
  t3248 = t2684*t149*t336*t864;
  t3250 = 0.001*t2684*t1364;
  t3253 = t2684*t149*t2059*t2060;
  t3261 = 0.12*t3260;
  t3273 = 0.4*t3269;
  t3276 = t3248 + t3250 + t3253 + t3261 + t3273;
  t3418 = 0.001*t149*t1047;
  t3486 = t2684*t149*t336*t2059;
  t3489 = -1.*t2684*t149*t864*t2060;
  t3493 = t2684*t149*t336*t520;
  t3495 = -1.*t340*t2684*t149*t2060;
  t3496 = t3493 + t3495;
  t3502 = 0.4*t3496;
  t3503 = 0.12*t3269;
  t3516 = t3486 + t3489 + t3502 + t3503;
  t3377 = -1.*t520*t3291;
  t3316 = t340*t3291;
  t3320 = -1.*t520*t2807;
  t3339 = t3316 + t3320;
  t2756 = t864*t2747;
  t2809 = t2059*t2807;
  t2814 = -1.*t520*t2747;
  t2872 = t2814 + t2864;
  t2873 = 0.12*t2872;
  t2874 = t340*t2747;
  t2875 = t520*t2807;
  t2877 = t2874 + t2875;
  t2886 = 0.4*t2877;
  t3130 = t2059*t2959;
  t3166 = t864*t3165;
  t3170 = t520*t2959;
  t3171 = t340*t3165;
  t3173 = t3170 + t3171;
  t3175 = 0.4*t3173;
  t3208 = -1.*t520*t3165;
  t3218 = t3178 + t3208;
  t3231 = 0.12*t3218;
  t3234 = t3130 + t3166 + t3175 + t3231;
  t3640 = t149*t336*t2059*t1047;
  t3643 = -1.*t149*t864*t1047*t2060;
  t3644 = 0.4*t2472;
  t3647 = t340*t149*t336*t1047;
  t3652 = t149*t520*t1047*t2060;
  t3658 = t3647 + t3652;
  t3662 = 0.12*t3658;
  t3671 = t3640 + t3643 + t3644 + t3662;
  t3292 = t2059*t3291;
  t3294 = t864*t2807;
  t3299 = t520*t3291;
  t3302 = t3299 + t2864;
  t3309 = 0.4*t3302;
  t3342 = 0.12*t3339;
  t3349 = t3292 + t3294 + t3309 + t3342;
  t3887 = t336*t1047*t1364;
  t3893 = -1.*t2684*t2060;
  t3894 = t3887 + t3893;
  t3113 = -1.*t520*t3050;
  t3419 = t864*t2959;
  t3420 = t2059*t3050;
  t3427 = 0.12*t3081;
  t3429 = t520*t3050;
  t3434 = t3178 + t3429;
  t3443 = 0.4*t3434;
  t3734 = -1.*t149*t336*t864;
  t3736 = -1.*t149*t2059*t2060;
  t3738 = t149*t336*t520;
  t3745 = -1.*t340*t149*t2060;
  t3746 = t3738 + t3745;
  t3750 = 0.12*t3746;
  t3752 = -1.*t340*t149*t336;
  t3754 = -1.*t149*t520*t2060;
  t3756 = t3752 + t3754;
  t3757 = 0.4*t3756;
  t3780 = -1.*t336*t2059*t1364;
  t3785 = t864*t1364*t2060;
  t3789 = -1.*t336*t520*t1364;
  t3792 = t340*t1364*t2060;
  t3793 = t3789 + t3792;
  t3795 = 0.4*t3793;
  t3796 = -1.*t340*t336*t1364;
  t3798 = -1.*t520*t1364*t2060;
  t3800 = t3796 + t3798;
  t3801 = 0.12*t3800;
  t3802 = t3780 + t3785 + t3795 + t3801;
  t3455 = t2684*t149*t336*t2936;
  t3457 = t2684*t149*t3029*t2060;
  t3460 = 0.4*t3260;
  t3465 = -1.*t340*t2684*t149*t336;
  t3466 = -1.*t2684*t149*t520*t2060;
  t3473 = t3465 + t3466;
  t3478 = 0.12*t3473;
  t3479 = t3455 + t3457 + t3460 + t3478;
  t3851 = t3029*t3291;
  t3854 = t2936*t2807;
  t3857 = -1.*t340*t2807;
  t3864 = t3377 + t3857;
  t3865 = 0.12*t3864;
  t3869 = 0.4*t3339;
  t3870 = t3851 + t3854 + t3865 + t3869;
  t3398 = -1.*t340*t3291;
  t3404 = -1.*t520*t3369;
  t3405 = t3398 + t3404;
  t2996 = t2936*t2959;
  t3051 = t3029*t3050;
  t3099 = 0.4*t3081;
  t3101 = -1.*t340*t2959;
  t3115 = t3101 + t3113;
  t3116 = 0.12*t3115;
  t3119 = t2996 + t3051 + t3099 + t3116;
  t3610 = t149*t336*t2936*t1047;
  t3611 = t149*t3029*t1047*t2060;
  t3613 = -1.*t149*t336*t520*t1047;
  t3615 = t340*t149*t1047*t2060;
  t3629 = t3613 + t3615;
  t3631 = 0.4*t3629;
  t3632 = 0.12*t2582;
  t3635 = t3610 + t3611 + t3631 + t3632;
  t3359 = t2936*t3291;
  t3370 = t3029*t3369;
  t3384 = t340*t3369;
  t3390 = t3377 + t3384;
  t3397 = 0.4*t3390;
  t3406 = 0.12*t3405;
  t3415 = t3359 + t3370 + t3397 + t3406;
  t3896 = t3029*t3894;
  t3900 = t2936*t3050;
  t3901 = -1.*t520*t3894;
  t3902 = -1.*t340*t3050;
  t3904 = t3901 + t3902;
  t3908 = 0.12*t3904;
  t3912 = t340*t3894;
  t3913 = t3912 + t3113;
  t3918 = 0.4*t3913;
  t3932 = t3896 + t3900 + t3908 + t3918;
  t3995 = 0.4*t340;
  t3996 = -0.12*t520;
  t3997 = t3995 + t3996;
  t3958 = t149*t336*t3029;
  t3961 = -1.*t149*t2936*t2060;
  t3967 = -1.*t149*t336*t520;
  t3968 = t340*t149*t2060;
  t3969 = t3967 + t3968;
  t3970 = 0.12*t3969;
  t3972 = t340*t149*t336;
  t3974 = t149*t520*t2060;
  t3976 = t3972 + t3974;
  t3978 = 0.4*t3976;
  t3979 = t3958 + t3961 + t3970 + t3978;
  t3809 = -1.*t336*t2936*t1364;
  t3812 = -1.*t3029*t1364*t2060;
  t3815 = t336*t520*t1364;
  t3825 = -1.*t340*t1364*t2060;
  t3830 = t3815 + t3825;
  t3832 = 0.4*t3830;
  t3834 = t340*t336*t1364;
  t3839 = t520*t1364*t2060;
  t3841 = t3834 + t3839;
  t3842 = 0.12*t3841;
  t3843 = t3809 + t3812 + t3832 + t3842;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2688 + t2756 + t2809 + t2873 + t2886)*var2[3] + t2672*var2[4] + t3234*var2[5] + t3119*var2[13];
  p_output1[10]=(t3418 + t3419 + t3420 + t3427 + t3443)*var2[3] + t3276*var2[4] + t3349*var2[5] + t3415*var2[13];
  p_output1[11]=0;
  p_output1[12]=t2672*var2[3] + (-1.*t1364*t2059*t2060*t2684 + t2688 + 0.4*(-1.*t1364*t2684*t336*t340 - 1.*t1364*t2060*t2684*t520) + 0.12*(-1.*t1364*t2060*t2684*t340 + t1364*t2684*t336*t520) - 1.*t1364*t2684*t336*t864)*var2[4] + t3516*var2[5] + t3479*var2[13];
  p_output1[13]=t3276*var2[3] + (-1.*t1047*t1364*t2059*t2060 + t3418 + 0.4*(-1.*t1047*t1364*t336*t340 - 1.*t1047*t1364*t2060*t520) + 0.12*(-1.*t1047*t1364*t2060*t340 + t1047*t1364*t336*t520) - 1.*t1047*t1364*t336*t864)*var2[4] + t3671*var2[5] + t3635*var2[13];
  p_output1[14]=(-0.001*t1364 + t3734 + t3736 + t3750 + t3757)*var2[4] + t3802*var2[5] + t3843*var2[13];
  p_output1[15]=t3234*var2[3] + t3516*var2[4] + (t2756 + t2809 + t2873 + t2886)*var2[5] + t3870*var2[13];
  p_output1[16]=t3349*var2[3] + t3671*var2[4] + (t3419 + t3420 + t3427 + t3443)*var2[5] + t3932*var2[13];
  p_output1[17]=t3802*var2[4] + (t3734 + t3736 + t3750 + t3757)*var2[5] + t3979*var2[13];
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
  p_output1[39]=t3119*var2[3] + t3479*var2[4] + t3870*var2[5] + (t2936*t3369 + 0.12*(t3299 - 1.*t3369*t340) + 0.4*t3405 + t3291*t3997)*var2[13];
  p_output1[40]=t3415*var2[3] + t3635*var2[4] + t3932*var2[5] + (t2936*t3165 + 0.4*(t3208 - 1.*t340*t3894) + t3894*t3997 + 0.12*(-1.*t3165*t340 + t3894*t520))*var2[13];
  p_output1[41]=t3843*var2[4] + t3979*var2[5] + (t149*t2060*t2936 + t3750 + t3757 + t149*t336*t3997)*var2[13];
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



void dJp_shoulder_roll_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:20:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_toe_roll_src.h"

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
  double t737;
  double t777;
  double t782;
  double t916;
  double t694;
  double t727;
  double t734;
  double t915;
  double t641;
  double t844;
  double t859;
  double t913;
  double t936;
  double t939;
  double t960;
  double t981;
  double t985;
  double t1100;
  double t1103;
  double t1111;
  double t1113;
  double t1153;
  double t1161;
  double t1173;
  double t1180;
  double t1182;
  double t1196;
  double t1205;
  double t1228;
  double t1232;
  double t1246;
  double t1255;
  double t1265;
  double t1555;
  double t1592;
  double t1594;
  double t982;
  double t1012;
  double t1095;
  double t1185;
  double t1186;
  double t1192;
  double t1324;
  double t1347;
  double t1471;
  double t1488;
  double t1490;
  double t1494;
  double t1511;
  double t1517;
  double t1523;
  double t1530;
  double t1706;
  double t1708;
  double t1727;
  double t1731;
  double t1739;
  double t1751;
  double t1755;
  double t1757;
  double t1767;
  double t1825;
  double t1988;
  double t1997;
  double t2003;
  double t330;
  double t359;
  double t642;
  double t670;
  double t1356;
  double t1374;
  double t1463;
  double t1533;
  double t1605;
  double t1613;
  double t1932;
  double t1936;
  double t2029;
  double t2034;
  double t2061;
  double t2100;
  double t2103;
  double t2105;
  double t2112;
  double t2115;
  double t2192;
  double t2225;
  double t2232;
  double t2248;
  double t2249;
  double t2259;
  double t2401;
  double t2403;
  double t2634;
  double t2650;
  double t2703;
  double t371;
  double t390;
  double t1985;
  double t2116;
  double t2159;
  double t2165;
  double t2418;
  double t2433;
  double t2496;
  double t2500;
  double t2515;
  double t2516;
  double t2526;
  double t2533;
  double t2581;
  double t2584;
  double t2785;
  double t2786;
  double t2839;
  double t2840;
  double t2871;
  double t2891;
  double t2911;
  double t2955;
  double t2958;
  double t2985;
  double t3049;
  double t339;
  double t355;
  double t2470;
  double t2472;
  double t2490;
  double t2597;
  double t2740;
  double t2751;
  double t2991;
  double t3009;
  double t233;
  double t234;
  double t265;
  double t3111;
  double t3113;
  double t3117;
  double t3124;
  double t3140;
  double t3150;
  double t3191;
  double t3195;
  double t3256;
  double t3267;
  double t3270;
  double t3276;
  double t3280;
  double t3296;
  double t3315;
  double t3323;
  double t3488;
  double t3427;
  double t3428;
  double t3429;
  double t3432;
  double t3444;
  double t3451;
  double t3460;
  double t3463;
  double t3425;
  double t3502;
  double t3511;
  double t3526;
  double t3533;
  double t3544;
  double t3554;
  double t3556;
  double t3568;
  double t277;
  double t322;
  double t3624;
  double t3632;
  double t3633;
  double t3634;
  double t3635;
  double t3642;
  double t3679;
  double t3683;
  double t3686;
  double t3687;
  double t3689;
  double t3690;
  double t3704;
  double t3706;
  double t3708;
  double t3714;
  double t3717;
  double t3718;
  double t3663;
  double t3703;
  double t3721;
  double t3723;
  double t3725;
  double t3728;
  double t3732;
  double t3738;
  double t3747;
  double t3752;
  double t3756;
  double t3758;
  double t3724;
  double t3744;
  double t3761;
  double t3764;
  double t3772;
  double t3774;
  double t3775;
  double t3778;
  double t3780;
  double t3783;
  double t3791;
  double t3794;
  double t3106;
  double t3110;
  double t3771;
  double t3779;
  double t3795;
  double t3799;
  double t3810;
  double t3811;
  double t3830;
  double t3837;
  double t3863;
  double t3884;
  double t3900;
  double t3901;
  double t3211;
  double t3253;
  double t3352;
  double t3374;
  double t3382;
  double t3800;
  double t3838;
  double t3903;
  double t3905;
  double t3925;
  double t3926;
  double t3927;
  double t3928;
  double t3930;
  double t3932;
  double t3933;
  double t3934;
  double t3938;
  double t3939;
  double t3940;
  double t3942;
  double t3949;
  double t3959;
  double t3963;
  double t3967;
  double t3603;
  double t4012;
  double t4013;
  double t4015;
  double t4019;
  double t4024;
  double t4025;
  double t4027;
  double t4032;
  double t4039;
  double t4040;
  double t4044;
  double t4053;
  double t4023;
  double t4038;
  double t4055;
  double t4057;
  double t4062;
  double t4064;
  double t4065;
  double t4066;
  double t4079;
  double t4080;
  double t4084;
  double t4085;
  double t4060;
  double t4078;
  double t4087;
  double t4088;
  double t4102;
  double t4108;
  double t4113;
  double t4116;
  double t4145;
  double t4147;
  double t4148;
  double t4150;
  double t4099;
  double t4132;
  double t4151;
  double t4157;
  double t4188;
  double t4189;
  double t4190;
  double t4198;
  double t4202;
  double t4206;
  double t4210;
  double t4211;
  double t4187;
  double t4201;
  double t4212;
  double t4216;
  double t4228;
  double t4229;
  double t4249;
  double t4253;
  double t4258;
  double t4261;
  double t4268;
  double t4273;
  double t4323;
  double t4340;
  double t4350;
  double t4368;
  double t4376;
  double t4384;
  double t4385;
  double t4387;
  double t3914;
  double t3929;
  double t3935;
  double t3936;
  double t3937;
  double t3946;
  double t3982;
  double t3985;
  double t3986;
  double t3993;
  double t3997;
  double t4000;
  double t4001;
  double t4005;
  double t4006;
  double t4010;
  double t4227;
  double t4256;
  double t4286;
  double t4292;
  double t4320;
  double t4375;
  double t4389;
  double t4391;
  double t4392;
  double t4393;
  double t4395;
  double t4404;
  double t4409;
  double t4437;
  double t4439;
  double t4441;
  double t3592;
  double t3598;
  double t3601;
  double t3481;
  double t3574;
  double t3576;
  double t4487;
  double t4489;
  double t4491;
  double t4496;
  double t4497;
  double t4499;
  double t3048;
  double t3207;
  double t3327;
  double t3347;
  double t4546;
  double t4547;
  double t4548;
  double t4551;
  double t4554;
  double t4558;
  double t4561;
  double t4562;
  double t4586;
  double t4587;
  double t4588;
  double t4592;
  double t4593;
  double t4594;
  double t4622;
  double t4623;
  double t4626;
  double t4630;
  double t4641;
  double t4659;
  double t4682;
  double t4689;
  double t4691;
  double t4701;
  double t4702;
  double t4703;
  double t4730;
  double t4731;
  double t4732;
  double t4738;
  double t4739;
  double t4742;
  double t4794;
  double t4797;
  double t4799;
  double t4802;
  double t4803;
  double t4809;
  t737 = Cos(var1[23]);
  t777 = -1.*t737;
  t782 = 1. + t777;
  t916 = Sin(var1[23]);
  t694 = Cos(var1[22]);
  t727 = -1.*t694;
  t734 = 1. + t727;
  t915 = 0.120666640478*t782;
  t641 = Sin(var1[21]);
  t844 = -0.952469601425*t782;
  t859 = 1. + t844;
  t913 = -0.930418*t859;
  t936 = -0.803828*t916;
  t939 = t915 + t936;
  t960 = 0.366501*t939;
  t981 = t913 + t960;
  t985 = Sin(var1[22]);
  t1100 = 0.175248972904*t782;
  t1103 = -0.553471*t916;
  t1111 = t1100 + t1103;
  t1113 = -0.930418*t1111;
  t1153 = 0.444895486988*t782;
  t1161 = 0.218018*t916;
  t1173 = t1153 + t1161;
  t1180 = 0.366501*t1173;
  t1182 = t1113 + t1180;
  t1196 = -0.693671301908*t782;
  t1205 = 1. + t1196;
  t1228 = 0.366501*t1205;
  t1232 = 0.803828*t916;
  t1246 = t915 + t1232;
  t1255 = -0.930418*t1246;
  t1265 = t1228 + t1255;
  t1555 = Cos(var1[21]);
  t1592 = -1.*t1555;
  t1594 = 1. + t1592;
  t982 = -0.340999127418*t734*t981;
  t1012 = -0.930418*t985;
  t1095 = 0. + t1012;
  t1185 = t1095*t1182;
  t1186 = -0.8656776547239999*t734;
  t1192 = 1. + t1186;
  t1324 = t1192*t1265;
  t1347 = 0. + t982 + t1185 + t1324;
  t1471 = -0.134322983001*t734;
  t1488 = 1. + t1471;
  t1490 = t1488*t981;
  t1494 = -0.366501*t985;
  t1511 = 0. + t1494;
  t1517 = t1511*t1182;
  t1523 = -0.340999127418*t734*t1265;
  t1530 = 0. + t1490 + t1517 + t1523;
  t1706 = 0.366501*t985;
  t1708 = 0. + t1706;
  t1727 = t1708*t981;
  t1731 = -1.000000637725*t734;
  t1739 = 1. + t1731;
  t1751 = t1739*t1182;
  t1755 = 0.930418*t985;
  t1757 = 0. + t1755;
  t1767 = t1757*t1265;
  t1825 = 0. + t1727 + t1751 + t1767;
  t1988 = Cos(var1[20]);
  t1997 = -1.*t1988;
  t2003 = 1. + t1997;
  t330 = Sin(var1[19]);
  t359 = Sin(var1[20]);
  t642 = 0.930418*t641;
  t670 = 0. + t642;
  t1356 = t670*t1347;
  t1374 = 0.366501*t641;
  t1463 = 0. + t1374;
  t1533 = t1463*t1530;
  t1605 = -1.000000637725*t1594;
  t1613 = 1. + t1605;
  t1932 = t1613*t1825;
  t1936 = 0. + t1356 + t1533 + t1932;
  t2029 = -0.8656776547239999*t1594;
  t2034 = 1. + t2029;
  t2061 = t2034*t1347;
  t2100 = -0.340999127418*t1594*t1530;
  t2103 = -0.930418*t641;
  t2105 = 0. + t2103;
  t2112 = t2105*t1825;
  t2115 = 0. + t2061 + t2100 + t2112;
  t2192 = -0.340999127418*t1594*t1347;
  t2225 = -0.134322983001*t1594;
  t2232 = 1. + t2225;
  t2248 = t2232*t1530;
  t2249 = -0.366501*t641;
  t2259 = 0. + t2249;
  t2401 = t2259*t1825;
  t2403 = 0. + t2192 + t2248 + t2401;
  t2634 = Cos(var1[19]);
  t2650 = -1.*t2634;
  t2703 = 1. + t2650;
  t371 = -0.366501*t359;
  t390 = 0. + t371;
  t1985 = t390*t1936;
  t2116 = -0.340999127418*t2003*t2115;
  t2159 = -0.134322983001*t2003;
  t2165 = 1. + t2159;
  t2418 = t2165*t2403;
  t2433 = 0. + t1985 + t2116 + t2418;
  t2496 = -0.930418*t359;
  t2500 = 0. + t2496;
  t2515 = t2500*t1936;
  t2516 = -0.8656776547239999*t2003;
  t2526 = 1. + t2516;
  t2533 = t2526*t2115;
  t2581 = -0.340999127418*t2003*t2403;
  t2584 = 0. + t2515 + t2533 + t2581;
  t2785 = -1.000000637725*t2003;
  t2786 = 1. + t2785;
  t2839 = t2786*t1936;
  t2840 = 0.930418*t359;
  t2871 = 0. + t2840;
  t2891 = t2871*t2115;
  t2911 = 0.366501*t359;
  t2955 = 0. + t2911;
  t2958 = t2955*t2403;
  t2985 = 0. + t2839 + t2891 + t2958;
  t3049 = Sin(var1[18]);
  t339 = -0.366501*t330;
  t355 = 0. + t339;
  t2470 = t355*t2433;
  t2472 = -0.930418*t330;
  t2490 = 0. + t2472;
  t2597 = t2490*t2584;
  t2740 = -1.000000637725*t2703;
  t2751 = 1. + t2740;
  t2991 = t2751*t2985;
  t3009 = 0. + t2470 + t2597 + t2991;
  t233 = Cos(var1[18]);
  t234 = -1.*t233;
  t265 = 1. + t234;
  t3111 = -0.134322983001*t2703;
  t3113 = 1. + t3111;
  t3117 = t3113*t2433;
  t3124 = -0.340999127418*t2703*t2584;
  t3140 = 0.366501*t330;
  t3150 = 0. + t3140;
  t3191 = t3150*t2985;
  t3195 = 0. + t3117 + t3124 + t3191;
  t3256 = -0.340999127418*t2703*t2433;
  t3267 = -0.8656776547239999*t2703;
  t3270 = 1. + t3267;
  t3276 = t3270*t2584;
  t3280 = 0.930418*t330;
  t3296 = 0. + t3280;
  t3315 = t3296*t2985;
  t3323 = 0. + t3256 + t3276 + t3315;
  t3488 = Sin(var1[17]);
  t3427 = 0.366501*t3049;
  t3428 = 0. + t3427;
  t3429 = t3428*t3009;
  t3432 = 0.340999127418*t265*t3195;
  t3444 = -0.134322983001*t265;
  t3451 = 1. + t3444;
  t3460 = t3451*t3323;
  t3463 = 0. + t3429 + t3432 + t3460;
  t3425 = Cos(var1[17]);
  t3502 = -0.930418*t3049;
  t3511 = 0. + t3502;
  t3526 = t3511*t3009;
  t3533 = -0.8656776547239999*t265;
  t3544 = 1. + t3533;
  t3554 = t3544*t3195;
  t3556 = 0.340999127418*t265*t3323;
  t3568 = 0. + t3526 + t3554 + t3556;
  t277 = -1.000000637725*t265;
  t322 = 1. + t277;
  t3624 = -0.353861996165*t782;
  t3632 = 1. + t3624;
  t3633 = 0.594863*t3632;
  t3634 = -0.294604*t1111;
  t3635 = -0.747896*t1173;
  t3642 = t3633 + t3634 + t3635;
  t3679 = -0.294604*t859;
  t3683 = -0.747896*t939;
  t3686 = 0.553471*t916;
  t3687 = t1100 + t3686;
  t3689 = 0.594863*t3687;
  t3690 = t3679 + t3683 + t3689;
  t3704 = -0.747896*t1205;
  t3706 = -0.218018*t916;
  t3708 = t1153 + t3706;
  t3714 = 0.594863*t3708;
  t3717 = -0.294604*t1246;
  t3718 = t3704 + t3714 + t3717;
  t3663 = t1095*t3642;
  t3703 = -0.340999127418*t734*t3690;
  t3721 = t1192*t3718;
  t3723 = 0. + t3663 + t3703 + t3721;
  t3725 = t1511*t3642;
  t3728 = t1488*t3690;
  t3732 = -0.340999127418*t734*t3718;
  t3738 = 0. + t3725 + t3728 + t3732;
  t3747 = t1739*t3642;
  t3752 = t1708*t3690;
  t3756 = t1757*t3718;
  t3758 = 0. + t3747 + t3752 + t3756;
  t3724 = t670*t3723;
  t3744 = t1463*t3738;
  t3761 = t1613*t3758;
  t3764 = 0. + t3724 + t3744 + t3761;
  t3772 = t2034*t3723;
  t3774 = -0.340999127418*t1594*t3738;
  t3775 = t2105*t3758;
  t3778 = 0. + t3772 + t3774 + t3775;
  t3780 = -0.340999127418*t1594*t3723;
  t3783 = t2232*t3738;
  t3791 = t2259*t3758;
  t3794 = 0. + t3780 + t3783 + t3791;
  t3106 = 0.930418*t3049;
  t3110 = 0. + t3106;
  t3771 = t390*t3764;
  t3779 = -0.340999127418*t2003*t3778;
  t3795 = t2165*t3794;
  t3799 = 0. + t3771 + t3779 + t3795;
  t3810 = t2500*t3764;
  t3811 = t2526*t3778;
  t3830 = -0.340999127418*t2003*t3794;
  t3837 = 0. + t3810 + t3811 + t3830;
  t3863 = t2786*t3764;
  t3884 = t2871*t3778;
  t3900 = t2955*t3794;
  t3901 = 0. + t3863 + t3884 + t3900;
  t3211 = -0.366501*t3049;
  t3253 = 0. + t3211;
  t3352 = Sin(var1[4]);
  t3374 = Cos(var1[4]);
  t3382 = Cos(var1[5]);
  t3800 = t355*t3799;
  t3838 = t2490*t3837;
  t3903 = t2751*t3901;
  t3905 = 0. + t3800 + t3838 + t3903;
  t3925 = t3113*t3799;
  t3926 = -0.340999127418*t2703*t3837;
  t3927 = t3150*t3901;
  t3928 = 0. + t3925 + t3926 + t3927;
  t3930 = -0.340999127418*t2703*t3799;
  t3932 = t3270*t3837;
  t3933 = t3296*t3901;
  t3934 = 0. + t3930 + t3932 + t3933;
  t3938 = t3428*t3905;
  t3939 = 0.340999127418*t265*t3928;
  t3940 = t3451*t3934;
  t3942 = 0. + t3938 + t3939 + t3940;
  t3949 = t3511*t3905;
  t3959 = t3544*t3928;
  t3963 = 0.340999127418*t265*t3934;
  t3967 = 0. + t3949 + t3959 + t3963;
  t3603 = Sin(var1[5]);
  t4012 = 0.803828*t3632;
  t4013 = 0.218018*t1111;
  t4015 = 0.553471*t1173;
  t4019 = t4012 + t4013 + t4015;
  t4024 = 0.218018*t859;
  t4025 = 0.553471*t939;
  t4027 = 0.803828*t3687;
  t4032 = t4024 + t4025 + t4027;
  t4039 = 0.553471*t1205;
  t4040 = 0.803828*t3708;
  t4044 = 0.218018*t1246;
  t4053 = t4039 + t4040 + t4044;
  t4023 = t1095*t4019;
  t4038 = -0.340999127418*t734*t4032;
  t4055 = t1192*t4053;
  t4057 = 0. + t4023 + t4038 + t4055;
  t4062 = t1511*t4019;
  t4064 = t1488*t4032;
  t4065 = -0.340999127418*t734*t4053;
  t4066 = 0. + t4062 + t4064 + t4065;
  t4079 = t1739*t4019;
  t4080 = t1708*t4032;
  t4084 = t1757*t4053;
  t4085 = 0. + t4079 + t4080 + t4084;
  t4060 = t670*t4057;
  t4078 = t1463*t4066;
  t4087 = t1613*t4085;
  t4088 = 0. + t4060 + t4078 + t4087;
  t4102 = t2034*t4057;
  t4108 = -0.340999127418*t1594*t4066;
  t4113 = t2105*t4085;
  t4116 = 0. + t4102 + t4108 + t4113;
  t4145 = -0.340999127418*t1594*t4057;
  t4147 = t2232*t4066;
  t4148 = t2259*t4085;
  t4150 = 0. + t4145 + t4147 + t4148;
  t4099 = t390*t4088;
  t4132 = -0.340999127418*t2003*t4116;
  t4151 = t2165*t4150;
  t4157 = 0. + t4099 + t4132 + t4151;
  t4188 = t2500*t4088;
  t4189 = t2526*t4116;
  t4190 = -0.340999127418*t2003*t4150;
  t4198 = 0. + t4188 + t4189 + t4190;
  t4202 = t2786*t4088;
  t4206 = t2871*t4116;
  t4210 = t2955*t4150;
  t4211 = 0. + t4202 + t4206 + t4210;
  t4187 = t355*t4157;
  t4201 = t2490*t4198;
  t4212 = t2751*t4211;
  t4216 = 0. + t4187 + t4201 + t4212;
  t4228 = t3113*t4157;
  t4229 = -0.340999127418*t2703*t4198;
  t4249 = t3150*t4211;
  t4253 = 0. + t4228 + t4229 + t4249;
  t4258 = -0.340999127418*t2703*t4157;
  t4261 = t3270*t4198;
  t4268 = t3296*t4211;
  t4273 = 0. + t4258 + t4261 + t4268;
  t4323 = t3428*t4216;
  t4340 = 0.340999127418*t265*t4253;
  t4350 = t3451*t4273;
  t4368 = 0. + t4323 + t4340 + t4350;
  t4376 = t3511*t4216;
  t4384 = t3544*t4253;
  t4385 = 0.340999127418*t265*t4273;
  t4387 = 0. + t4376 + t4384 + t4385;
  t3914 = t322*t3905;
  t3929 = t3110*t3928;
  t3935 = t3253*t3934;
  t3936 = 0. + t3914 + t3929 + t3935;
  t3937 = -1.*t3936*t3352;
  t3946 = t3425*t3942;
  t3982 = -1.*t3488*t3967;
  t3985 = 0. + t3946 + t3982;
  t3986 = t3382*t3985;
  t3993 = t3488*t3942;
  t3997 = t3425*t3967;
  t4000 = 0. + t3993 + t3997;
  t4001 = t4000*t3603;
  t4005 = 0. + t3986 + t4001;
  t4006 = t3374*t4005;
  t4010 = 0. + t3937 + t4006;
  t4227 = t322*t4216;
  t4256 = t3110*t4253;
  t4286 = t3253*t4273;
  t4292 = 0. + t4227 + t4256 + t4286;
  t4320 = -1.*t4292*t3352;
  t4375 = t3425*t4368;
  t4389 = -1.*t3488*t4387;
  t4391 = 0. + t4375 + t4389;
  t4392 = t3382*t4391;
  t4393 = t3488*t4368;
  t4395 = t3425*t4387;
  t4404 = 0. + t4393 + t4395;
  t4409 = t4404*t3603;
  t4437 = 0. + t4392 + t4409;
  t4439 = t3374*t4437;
  t4441 = 0. + t4320 + t4439;
  t3592 = t3488*t3463;
  t3598 = t3425*t3568;
  t3601 = 0. + t3592 + t3598;
  t3481 = t3425*t3463;
  t3574 = -1.*t3488*t3568;
  t3576 = 0. + t3481 + t3574;
  t4487 = t3382*t4000;
  t4489 = -1.*t3985*t3603;
  t4491 = 0. + t4487 + t4489;
  t4496 = t3382*t4404;
  t4497 = -1.*t4391*t3603;
  t4499 = 0. + t4496 + t4497;
  t3048 = t322*t3009;
  t3207 = t3110*t3195;
  t3327 = t3253*t3323;
  t3347 = 0. + t3048 + t3207 + t3327;
  t4546 = -1.*t322*t3905;
  t4547 = -1.*t3110*t3928;
  t4548 = -1.*t3253*t3934;
  t4551 = 0. + t4546 + t4547 + t4548;
  t4554 = -1.*t322*t4216;
  t4558 = -1.*t3110*t4253;
  t4561 = -1.*t3253*t4273;
  t4562 = 0. + t4554 + t4558 + t4561;
  t4586 = -0.366501*t3928;
  t4587 = -0.930418*t3934;
  t4588 = 0. + t4586 + t4587;
  t4592 = -0.366501*t4253;
  t4593 = -0.930418*t4273;
  t4594 = 0. + t4592 + t4593;
  t4622 = -0.930418*t3799;
  t4623 = 0.366501*t3837;
  t4626 = 0. + t4622 + t4623;
  t4630 = -0.930418*t4157;
  t4641 = 0.366501*t4198;
  t4659 = 0. + t4630 + t4641;
  t4682 = -0.366501*t3778;
  t4689 = 0.930418*t3794;
  t4691 = 0. + t4682 + t4689;
  t4701 = -0.366501*t4116;
  t4702 = 0.930418*t4150;
  t4703 = 0. + t4701 + t4702;
  t4730 = -0.366501*t3723;
  t4731 = 0.930418*t3738;
  t4732 = 0. + t4730 + t4731;
  t4738 = -0.366501*t4057;
  t4739 = 0.930418*t4066;
  t4742 = 0. + t4738 + t4739;
  t4794 = 0.930418*t3690;
  t4797 = -0.366501*t3718;
  t4799 = 0. + t4794 + t4797;
  t4802 = 0.930418*t4032;
  t4803 = -0.366501*t4053;
  t4809 = 0. + t4802 + t4803;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00187*(0. - 1.*t3347*t3352 + t3374*(0. + t3382*t3576 + t3601*t3603));
  p_output1[10]=0.00162*t4010 - 0.00057*t4441;
  p_output1[11]=-0.00057*t4010 + 0.00084*t4441;
  p_output1[12]=0.00187*(0. + t3382*t3601 - 1.*t3576*t3603);
  p_output1[13]=0.00162*t4491 - 0.00057*t4499;
  p_output1[14]=-0.00057*t4491 + 0.00084*t4499;
  p_output1[15]=0.00187*t3347;
  p_output1[16]=0.00162*t3936 - 0.00057*t4292;
  p_output1[17]=-0.00057*t3936 + 0.00084*t4292;
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
  p_output1[51]=0.00187*(0. - 1.*t3110*t3195 - 1.*t3009*t322 - 1.*t3253*t3323);
  p_output1[52]=0.00162*t4551 - 0.00057*t4562;
  p_output1[53]=-0.00057*t4551 + 0.00084*t4562;
  p_output1[54]=0.00187*(0. - 0.366501*t3195 - 0.930418*t3323);
  p_output1[55]=0.00162*t4588 - 0.00057*t4594;
  p_output1[56]=-0.00057*t4588 + 0.00084*t4594;
  p_output1[57]=0.00187*(0. - 0.930418*t2433 + 0.366501*t2584);
  p_output1[58]=0.00162*t4626 - 0.00057*t4659;
  p_output1[59]=-0.00057*t4626 + 0.00084*t4659;
  p_output1[60]=0.00187*(0. - 0.366501*t2115 + 0.930418*t2403);
  p_output1[61]=0.00162*t4691 - 0.00057*t4703;
  p_output1[62]=-0.00057*t4691 + 0.00084*t4703;
  p_output1[63]=0.00187*(0. - 0.366501*t1347 + 0.930418*t1530);
  p_output1[64]=0.00162*t4732 - 0.00057*t4742;
  p_output1[65]=-0.00057*t4732 + 0.00084*t4742;
  p_output1[66]=0.00187*(0. - 0.366501*t1265 + 0.930418*t981);
  p_output1[67]=0.00162*t4799 - 0.00057*t4809;
  p_output1[68]=-0.00057*t4799 + 0.00084*t4809;
  p_output1[69]=-3.6755410992378445e-10;
  p_output1[70]=-0.0005700011282018101;
  p_output1[71]=0.00084000132399384;
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



void Jdq_AMBody_right_toe_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_shoulder_roll_joint_right_src.h"

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
  double t1384;
  double t150;
  double t218;
  double t418;
  double t463;
  double t826;
  double t155;
  double t1902;
  double t591;
  double t1265;
  double t1383;
  double t2773;
  double t1464;
  double t1484;
  double t1548;
  double t1549;
  double t2824;
  double t2850;
  double t2902;
  double t2914;
  double t2936;
  double t2941;
  double t3064;
  double t3069;
  double t3078;
  double t3132;
  double t3149;
  double t3167;
  double t3235;
  double t3236;
  double t3237;
  double t3365;
  double t3367;
  double t3371;
  double t2969;
  double t3043;
  double t3047;
  double t3056;
  double t3107;
  double t3125;
  double t3419;
  double t3429;
  double t3431;
  double t3173;
  double t3180;
  double t3183;
  double t3263;
  double t3315;
  double t3316;
  double t3317;
  double t3325;
  double t3333;
  double t3341;
  double t1430;
  double t1475;
  double t1911;
  double t2080;
  double t2255;
  double t2363;
  double t2367;
  double t2396;
  double t2441;
  double t2444;
  double t2460;
  double t2722;
  double t2798;
  double t3306;
  double t3312;
  double t3313;
  double t3319;
  double t3348;
  double t3350;
  double t3478;
  double t3555;
  double t3558;
  double t3560;
  double t3561;
  double t3569;
  double t3571;
  double t3574;
  double t3576;
  double t3441;
  double t3392;
  double t3395;
  double t3396;
  double t2909;
  double t2950;
  double t2952;
  double t2997;
  double t2999;
  double t3004;
  double t3026;
  double t3029;
  double t3030;
  double t3230;
  double t3240;
  double t3241;
  double t3248;
  double t3252;
  double t3254;
  double t3268;
  double t3272;
  double t3285;
  double t3287;
  double t3661;
  double t3665;
  double t3669;
  double t3674;
  double t3678;
  double t3683;
  double t3687;
  double t3695;
  double t3373;
  double t3374;
  double t3375;
  double t3377;
  double t3388;
  double t3399;
  double t3413;
  double t3934;
  double t3937;
  double t3938;
  double t3198;
  double t3479;
  double t3482;
  double t3488;
  double t3494;
  double t3498;
  double t3500;
  double t3759;
  double t3764;
  double t3765;
  double t3768;
  double t3770;
  double t3772;
  double t3773;
  double t3778;
  double t3779;
  double t3782;
  double t3786;
  double t3787;
  double t3791;
  double t3792;
  double t3793;
  double t3799;
  double t3804;
  double t3806;
  double t3813;
  double t3820;
  double t3826;
  double t3511;
  double t3512;
  double t3518;
  double t3524;
  double t3529;
  double t3530;
  double t3538;
  double t3550;
  double t3905;
  double t3908;
  double t3909;
  double t3910;
  double t3911;
  double t3912;
  double t3914;
  double t3455;
  double t3458;
  double t3464;
  double t3097;
  double t3171;
  double t3184;
  double t3187;
  double t3202;
  double t3221;
  double t3224;
  double t3630;
  double t3634;
  double t3635;
  double t3638;
  double t3639;
  double t3640;
  double t3644;
  double t3645;
  double t3415;
  double t3432;
  double t3446;
  double t3448;
  double t3454;
  double t3467;
  double t3470;
  double t3941;
  double t3943;
  double t3944;
  double t3945;
  double t3947;
  double t3949;
  double t3950;
  double t3955;
  double t3957;
  double t3960;
  double t4018;
  double t4019;
  double t4020;
  double t3976;
  double t3980;
  double t3988;
  double t3993;
  double t3994;
  double t3997;
  double t3998;
  double t4000;
  double t4003;
  double t4005;
  double t4006;
  double t3831;
  double t3833;
  double t3847;
  double t3849;
  double t3851;
  double t3853;
  double t3857;
  double t3859;
  double t3862;
  double t3864;
  double t3869;
  t1384 = Sin(var1[3]);
  t150 = Cos(var1[4]);
  t218 = Cos(var1[24]);
  t418 = -1.*t218;
  t463 = 1. + t418;
  t826 = Sin(var1[24]);
  t155 = Cos(var1[5]);
  t1902 = Sin(var1[5]);
  t591 = 0.4*t463;
  t1265 = -0.12*t826;
  t1383 = 0. + t591 + t1265;
  t2773 = Cos(var1[3]);
  t1464 = Sin(var1[4]);
  t1484 = -0.12*t463;
  t1548 = -0.4*t826;
  t1549 = 0. + t1484 + t1548;
  t2824 = -1.*t2773*t155*t1464;
  t2850 = -1.*t1384*t1902;
  t2902 = t2824 + t2850;
  t2914 = t155*t1384;
  t2936 = -1.*t2773*t1464*t1902;
  t2941 = t2914 + t2936;
  t3064 = -1.*t155*t1384*t1464;
  t3069 = t2773*t1902;
  t3078 = t3064 + t3069;
  t3132 = -1.*t2773*t155;
  t3149 = -1.*t1384*t1464*t1902;
  t3167 = t3132 + t3149;
  t3235 = t2773*t155;
  t3236 = t1384*t1464*t1902;
  t3237 = t3235 + t3236;
  t3365 = t2773*t155*t1464;
  t3367 = t1384*t1902;
  t3371 = t3365 + t3367;
  t2969 = t218*t2941;
  t3043 = -0.12*t218;
  t3047 = 0.4*t826;
  t3056 = t3043 + t3047;
  t3107 = -0.4*t218;
  t3125 = t3107 + t1265;
  t3419 = -1.*t155*t1384;
  t3429 = t2773*t1464*t1902;
  t3431 = t3419 + t3429;
  t3173 = -1.*t826*t3078;
  t3180 = t218*t3167;
  t3183 = t3173 + t3180;
  t3263 = t218*t3078;
  t3315 = -1.*t2773*t150*t155*t826;
  t3316 = t218*t2773*t150*t1902;
  t3317 = t3315 + t3316;
  t3325 = t218*t2773*t150*t155;
  t3333 = t2773*t150*t826*t1902;
  t3341 = t3325 + t3333;
  t1430 = -1.*t150*t155*t1383*t1384;
  t1475 = -0.001*t1384*t1464;
  t1911 = -1.*t150*t1549*t1384*t1902;
  t2080 = t150*t155*t826*t1384;
  t2255 = -1.*t218*t150*t1384*t1902;
  t2363 = t2080 + t2255;
  t2367 = -0.12*t2363;
  t2396 = -1.*t218*t150*t155*t1384;
  t2441 = -1.*t150*t826*t1384*t1902;
  t2444 = t2396 + t2441;
  t2460 = 0.4*t2444;
  t2722 = t1430 + t1475 + t1911 + t2367 + t2460;
  t2798 = 0.001*t2773*t150;
  t3306 = t2773*t150*t155*t1383;
  t3312 = 0.001*t2773*t1464;
  t3313 = t2773*t150*t1549*t1902;
  t3319 = -0.12*t3317;
  t3348 = 0.4*t3341;
  t3350 = t3306 + t3312 + t3313 + t3319 + t3348;
  t3478 = 0.001*t150*t1384;
  t3555 = t2773*t150*t155*t1549;
  t3558 = -1.*t2773*t150*t1383*t1902;
  t3560 = t2773*t150*t155*t826;
  t3561 = -1.*t218*t2773*t150*t1902;
  t3569 = t3560 + t3561;
  t3571 = 0.4*t3569;
  t3574 = -0.12*t3341;
  t3576 = t3555 + t3558 + t3571 + t3574;
  t3441 = -1.*t826*t3371;
  t3392 = t218*t3371;
  t3395 = -1.*t826*t2941;
  t3396 = t3392 + t3395;
  t2909 = t1383*t2902;
  t2950 = t1549*t2941;
  t2952 = -1.*t826*t2902;
  t2997 = t2952 + t2969;
  t2999 = -0.12*t2997;
  t3004 = t218*t2902;
  t3026 = t826*t2941;
  t3029 = t3004 + t3026;
  t3030 = 0.4*t3029;
  t3230 = t1549*t3078;
  t3240 = t1383*t3237;
  t3241 = t826*t3078;
  t3248 = t218*t3237;
  t3252 = t3241 + t3248;
  t3254 = 0.4*t3252;
  t3268 = -1.*t826*t3237;
  t3272 = t3263 + t3268;
  t3285 = -0.12*t3272;
  t3287 = t3230 + t3240 + t3254 + t3285;
  t3661 = t150*t155*t1549*t1384;
  t3665 = -1.*t150*t1383*t1384*t1902;
  t3669 = 0.4*t2363;
  t3674 = t218*t150*t155*t1384;
  t3678 = t150*t826*t1384*t1902;
  t3683 = t3674 + t3678;
  t3687 = -0.12*t3683;
  t3695 = t3661 + t3665 + t3669 + t3687;
  t3373 = t1549*t3371;
  t3374 = t1383*t2941;
  t3375 = t826*t3371;
  t3377 = t3375 + t2969;
  t3388 = 0.4*t3377;
  t3399 = -0.12*t3396;
  t3413 = t3373 + t3374 + t3388 + t3399;
  t3934 = t155*t1384*t1464;
  t3937 = -1.*t2773*t1902;
  t3938 = t3934 + t3937;
  t3198 = -1.*t826*t3167;
  t3479 = t1383*t3078;
  t3482 = t1549*t3167;
  t3488 = -0.12*t3183;
  t3494 = t826*t3167;
  t3498 = t3263 + t3494;
  t3500 = 0.4*t3498;
  t3759 = -1.*t150*t155*t1383;
  t3764 = -1.*t150*t1549*t1902;
  t3765 = t150*t155*t826;
  t3768 = -1.*t218*t150*t1902;
  t3770 = t3765 + t3768;
  t3772 = -0.12*t3770;
  t3773 = -1.*t218*t150*t155;
  t3778 = -1.*t150*t826*t1902;
  t3779 = t3773 + t3778;
  t3782 = 0.4*t3779;
  t3786 = -1.*t155*t1549*t1464;
  t3787 = t1383*t1464*t1902;
  t3791 = -1.*t155*t826*t1464;
  t3792 = t218*t1464*t1902;
  t3793 = t3791 + t3792;
  t3799 = 0.4*t3793;
  t3804 = -1.*t218*t155*t1464;
  t3806 = -1.*t826*t1464*t1902;
  t3813 = t3804 + t3806;
  t3820 = -0.12*t3813;
  t3826 = t3786 + t3787 + t3799 + t3820;
  t3511 = t2773*t150*t155*t3056;
  t3512 = t2773*t150*t3125*t1902;
  t3518 = 0.4*t3317;
  t3524 = -1.*t218*t2773*t150*t155;
  t3529 = -1.*t2773*t150*t826*t1902;
  t3530 = t3524 + t3529;
  t3538 = -0.12*t3530;
  t3550 = t3511 + t3512 + t3518 + t3538;
  t3905 = t3125*t3371;
  t3908 = t3056*t2941;
  t3909 = -1.*t218*t2941;
  t3910 = t3441 + t3909;
  t3911 = -0.12*t3910;
  t3912 = 0.4*t3396;
  t3914 = t3905 + t3908 + t3911 + t3912;
  t3455 = -1.*t218*t3371;
  t3458 = -1.*t826*t3431;
  t3464 = t3455 + t3458;
  t3097 = t3056*t3078;
  t3171 = t3125*t3167;
  t3184 = 0.4*t3183;
  t3187 = -1.*t218*t3078;
  t3202 = t3187 + t3198;
  t3221 = -0.12*t3202;
  t3224 = t3097 + t3171 + t3184 + t3221;
  t3630 = t150*t155*t3056*t1384;
  t3634 = t150*t3125*t1384*t1902;
  t3635 = -1.*t150*t155*t826*t1384;
  t3638 = t218*t150*t1384*t1902;
  t3639 = t3635 + t3638;
  t3640 = 0.4*t3639;
  t3644 = -0.12*t2444;
  t3645 = t3630 + t3634 + t3640 + t3644;
  t3415 = t3056*t3371;
  t3432 = t3125*t3431;
  t3446 = t218*t3431;
  t3448 = t3441 + t3446;
  t3454 = 0.4*t3448;
  t3467 = -0.12*t3464;
  t3470 = t3415 + t3432 + t3454 + t3467;
  t3941 = t3125*t3938;
  t3943 = t3056*t3167;
  t3944 = -1.*t826*t3938;
  t3945 = -1.*t218*t3167;
  t3947 = t3944 + t3945;
  t3949 = -0.12*t3947;
  t3950 = t218*t3938;
  t3955 = t3950 + t3198;
  t3957 = 0.4*t3955;
  t3960 = t3941 + t3943 + t3949 + t3957;
  t4018 = 0.4*t218;
  t4019 = 0.12*t826;
  t4020 = t4018 + t4019;
  t3976 = t150*t155*t3125;
  t3980 = -1.*t150*t3056*t1902;
  t3988 = -1.*t150*t155*t826;
  t3993 = t218*t150*t1902;
  t3994 = t3988 + t3993;
  t3997 = -0.12*t3994;
  t3998 = t218*t150*t155;
  t4000 = t150*t826*t1902;
  t4003 = t3998 + t4000;
  t4005 = 0.4*t4003;
  t4006 = t3976 + t3980 + t3997 + t4005;
  t3831 = -1.*t155*t3056*t1464;
  t3833 = -1.*t3125*t1464*t1902;
  t3847 = t155*t826*t1464;
  t3849 = -1.*t218*t1464*t1902;
  t3851 = t3847 + t3849;
  t3853 = 0.4*t3851;
  t3857 = t218*t155*t1464;
  t3859 = t826*t1464*t1902;
  t3862 = t3857 + t3859;
  t3864 = -0.12*t3862;
  t3869 = t3831 + t3833 + t3853 + t3864;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2798 + t2909 + t2950 + t2999 + t3030)*var2[3] + t2722*var2[4] + t3287*var2[5] + t3224*var2[24];
  p_output1[10]=(t3478 + t3479 + t3482 + t3488 + t3500)*var2[3] + t3350*var2[4] + t3413*var2[5] + t3470*var2[24];
  p_output1[11]=0;
  p_output1[12]=t2722*var2[3] + (-1.*t1383*t1464*t155*t2773 - 1.*t1464*t1549*t1902*t2773 + t2798 - 0.12*(-1.*t1464*t1902*t218*t2773 + t1464*t155*t2773*t826) + 0.4*(-1.*t1464*t155*t218*t2773 - 1.*t1464*t1902*t2773*t826))*var2[4] + t3576*var2[5] + t3550*var2[24];
  p_output1[13]=t3350*var2[3] + (-1.*t1383*t1384*t1464*t155 - 1.*t1384*t1464*t1549*t1902 + t3478 - 0.12*(-1.*t1384*t1464*t1902*t218 + t1384*t1464*t155*t826) + 0.4*(-1.*t1384*t1464*t155*t218 - 1.*t1384*t1464*t1902*t826))*var2[4] + t3695*var2[5] + t3645*var2[24];
  p_output1[14]=(-0.001*t1464 + t3759 + t3764 + t3772 + t3782)*var2[4] + t3826*var2[5] + t3869*var2[24];
  p_output1[15]=t3287*var2[3] + t3576*var2[4] + (t2909 + t2950 + t2999 + t3030)*var2[5] + t3914*var2[24];
  p_output1[16]=t3413*var2[3] + t3695*var2[4] + (t3479 + t3482 + t3488 + t3500)*var2[5] + t3960*var2[24];
  p_output1[17]=t3826*var2[4] + (t3759 + t3764 + t3772 + t3782)*var2[5] + t4006*var2[24];
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
  p_output1[72]=t3224*var2[3] + t3550*var2[4] + t3914*var2[5] + (t3056*t3431 - 0.12*(t3375 - 1.*t218*t3431) + 0.4*t3464 + t3371*t4020)*var2[24];
  p_output1[73]=t3470*var2[3] + t3645*var2[4] + t3960*var2[5] + (t3056*t3237 + 0.4*(t3268 - 1.*t218*t3938) + t3938*t4020 - 0.12*(-1.*t218*t3237 + t3938*t826))*var2[24];
  p_output1[74]=t3869*var2[4] + t4006*var2[5] + (t150*t1902*t3056 + t3772 + t3782 + t150*t155*t4020)*var2[24];
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



void dJp_shoulder_roll_joint_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

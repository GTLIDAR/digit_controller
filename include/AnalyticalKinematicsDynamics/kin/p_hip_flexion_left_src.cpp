/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t3693;
  double t3667;
  double t3706;
  double t3670;
  double t3709;
  double t3777;
  double t696;
  double t3739;
  double t3743;
  double t3748;
  double t3677;
  double t3726;
  double t3730;
  double t3754;
  double t3766;
  double t3769;
  double t3771;
  double t3841;
  double t3842;
  double t3843;
  double t3806;
  double t3808;
  double t3820;
  double t3765;
  double t3850;
  double t3853;
  double t3881;
  double t3882;
  double t3883;
  double t3830;
  double t3831;
  double t3870;
  double t3871;
  double t3873;
  double t3874;
  double t3876;
  double t3878;
  double t3781;
  double t3782;
  double t3793;
  double t3797;
  double t3887;
  double t3892;
  double t3893;
  double t3914;
  double t3917;
  double t3918;
  double t3919;
  double t3920;
  double t3921;
  double t3900;
  double t3901;
  double t3902;
  double t3905;
  double t3906;
  double t3907;
  double t3927;
  double t3928;
  double t3935;
  double t3936;
  double t3954;
  double t3955;
  double t3597;
  double t3608;
  double t3661;
  double t3666;
  double t3757;
  double t3762;
  double t3772;
  double t3790;
  double t3799;
  double t3801;
  double t3972;
  double t3973;
  double t3974;
  double t3967;
  double t3968;
  double t3969;
  double t3821;
  double t3827;
  double t3838;
  double t3839;
  double t3845;
  double t3846;
  double t3854;
  double t3856;
  double t3982;
  double t3983;
  double t3984;
  double t3978;
  double t3979;
  double t3980;
  double t3880;
  double t3885;
  double t3894;
  double t3896;
  double t3911;
  double t3912;
  double t3986;
  double t3987;
  double t3988;
  double t3990;
  double t4000;
  double t4001;
  double t4002;
  double t4005;
  double t3926;
  double t3934;
  double t3937;
  double t3940;
  double t3942;
  double t3944;
  double t3992;
  double t3993;
  double t3995;
  double t3996;
  double t3952;
  double t3953;
  double t3956;
  double t3957;
  double t3959;
  double t3960;
  double t4030;
  double t4031;
  double t4032;
  double t4026;
  double t4027;
  double t4028;
  double t4034;
  double t4035;
  double t4036;
  double t4037;
  double t4045;
  double t4046;
  double t4047;
  double t4048;
  double t4039;
  double t4040;
  double t4041;
  double t4042;
  t3693 = Cos(var1[3]);
  t3667 = Cos(var1[5]);
  t3706 = Sin(var1[4]);
  t3670 = Sin(var1[3]);
  t3709 = Sin(var1[5]);
  t3777 = Sin(var1[7]);
  t696 = Cos(var1[6]);
  t3739 = t3693*t3667*t3706;
  t3743 = t3670*t3709;
  t3748 = t3739 + t3743;
  t3677 = -1.*t3667*t3670;
  t3726 = t3693*t3706*t3709;
  t3730 = t3677 + t3726;
  t3754 = Sin(var1[6]);
  t3766 = Cos(var1[7]);
  t3769 = -1.*t3766;
  t3771 = 1. + t3769;
  t3841 = t696*t3730;
  t3842 = -1.*t3748*t3754;
  t3843 = t3841 + t3842;
  t3806 = t696*t3748;
  t3808 = t3730*t3754;
  t3820 = t3806 + t3808;
  t3765 = Cos(var1[4]);
  t3850 = 0.930418*t3777;
  t3853 = 0. + t3850;
  t3881 = Cos(var1[8]);
  t3882 = -1.*t3881;
  t3883 = 1. + t3882;
  t3830 = 0.366501*t3777;
  t3831 = 0. + t3830;
  t3870 = -0.8656776547239999*t3771;
  t3871 = 1. + t3870;
  t3873 = t3871*t3843;
  t3874 = -0.340999127418*t3771*t3820;
  t3876 = t3693*t3765*t3853;
  t3878 = t3873 + t3874 + t3876;
  t3781 = -0.930418*t3777;
  t3782 = 0. + t3781;
  t3793 = -0.366501*t3777;
  t3797 = 0. + t3793;
  t3887 = Sin(var1[8]);
  t3892 = -0.366501*t3887;
  t3893 = 0. + t3892;
  t3914 = -1.000000637725*t3771;
  t3917 = 1. + t3914;
  t3918 = t3693*t3765*t3917;
  t3919 = t3843*t3782;
  t3920 = t3820*t3797;
  t3921 = t3918 + t3919 + t3920;
  t3900 = -0.340999127418*t3771*t3843;
  t3901 = -0.134322983001*t3771;
  t3902 = 1. + t3901;
  t3905 = t3902*t3820;
  t3906 = t3693*t3765*t3831;
  t3907 = t3900 + t3905 + t3906;
  t3927 = -0.930418*t3887;
  t3928 = 0. + t3927;
  t3935 = 0.366501*t3887;
  t3936 = 0. + t3935;
  t3954 = 0.930418*t3887;
  t3955 = 0. + t3954;
  t3597 = -1.*t696;
  t3608 = 1. + t3597;
  t3661 = 0.091*t3608;
  t3666 = 0. + t3661;
  t3757 = 0.091*t3754;
  t3762 = 0. + t3757;
  t3772 = -0.04500040093286238*t3771;
  t3790 = 0.07877663122399998*t3782;
  t3799 = 0.031030906668*t3797;
  t3801 = 0. + t3772 + t3790 + t3799;
  t3972 = t3667*t3670*t3706;
  t3973 = -1.*t3693*t3709;
  t3974 = t3972 + t3973;
  t3967 = t3693*t3667;
  t3968 = t3670*t3706*t3709;
  t3969 = t3967 + t3968;
  t3821 = -3.2909349868922137e-7*var1[7];
  t3827 = 0.03103092645718495*t3771;
  t3838 = -0.045000372235*t3831;
  t3839 = t3821 + t3827 + t3838;
  t3845 = 1.296332362046933e-7*var1[7];
  t3846 = 0.07877668146182712*t3771;
  t3854 = -0.045000372235*t3853;
  t3856 = t3845 + t3846 + t3854;
  t3982 = t696*t3969;
  t3983 = -1.*t3974*t3754;
  t3984 = t3982 + t3983;
  t3978 = t696*t3974;
  t3979 = t3969*t3754;
  t3980 = t3978 + t3979;
  t3880 = 3.2909349868922137e-7*var1[8];
  t3885 = 0.055653945343889656*t3883;
  t3894 = -0.045000372235*t3893;
  t3896 = t3880 + t3885 + t3894;
  t3911 = -0.134322983001*t3883;
  t3912 = 1. + t3911;
  t3986 = t3871*t3984;
  t3987 = -0.340999127418*t3771*t3980;
  t3988 = t3765*t3670*t3853;
  t3990 = t3986 + t3987 + t3988;
  t4000 = t3765*t3917*t3670;
  t4001 = t3984*t3782;
  t4002 = t3980*t3797;
  t4005 = t4000 + t4001 + t4002;
  t3926 = -0.04500040093286238*t3883;
  t3934 = -0.141285834136*t3928;
  t3937 = 0.055653909852*t3936;
  t3940 = 0. + t3926 + t3934 + t3937;
  t3942 = -1.000000637725*t3883;
  t3944 = 1. + t3942;
  t3992 = -0.340999127418*t3771*t3984;
  t3993 = t3902*t3980;
  t3995 = t3765*t3670*t3831;
  t3996 = t3992 + t3993 + t3995;
  t3952 = 1.296332362046933e-7*var1[8];
  t3953 = -0.14128592423750855*t3883;
  t3956 = -0.045000372235*t3955;
  t3957 = t3952 + t3953 + t3956;
  t3959 = -0.8656776547239999*t3883;
  t3960 = 1. + t3959;
  t4030 = t3765*t696*t3709;
  t4031 = -1.*t3765*t3667*t3754;
  t4032 = t4030 + t4031;
  t4026 = t3765*t3667*t696;
  t4027 = t3765*t3709*t3754;
  t4028 = t4026 + t4027;
  t4034 = t3871*t4032;
  t4035 = -0.340999127418*t3771*t4028;
  t4036 = -1.*t3706*t3853;
  t4037 = t4034 + t4035 + t4036;
  t4045 = -1.*t3917*t3706;
  t4046 = t4032*t3782;
  t4047 = t4028*t3797;
  t4048 = t4045 + t4046 + t4047;
  t4039 = -0.340999127418*t3771*t4032;
  t4040 = t3902*t4028;
  t4041 = -1.*t3706*t3831;
  t4042 = t4039 + t4040 + t4041;
  p_output1[0]=0. + t3666*t3730 + t3748*t3762 + t3693*t3765*t3801 + t3820*t3839 + t3843*t3856 + t3878*t3896 + 0.138152*(0.340999127418*t3883*t3907 + t3878*t3912 + t3893*t3921) + t3921*t3940 - 0.045*(t3907*t3928 + t3878*t3936 + t3921*t3944) + t3907*t3957 - 0.108789*(0.340999127418*t3878*t3883 + t3921*t3955 + t3907*t3960) + var1[0];
  p_output1[1]=0. + t3670*t3765*t3801 + t3666*t3969 + t3762*t3974 + t3839*t3980 + t3856*t3984 + t3896*t3990 + t3957*t3996 + t3940*t4005 + 0.138152*(t3912*t3990 + 0.340999127418*t3883*t3996 + t3893*t4005) - 0.045*(t3936*t3990 + t3928*t3996 + t3944*t4005) - 0.108789*(0.340999127418*t3883*t3990 + t3960*t3996 + t3955*t4005) + var1[1];
  p_output1[2]=0. + t3666*t3709*t3765 + t3667*t3762*t3765 - 1.*t3706*t3801 + t3839*t4028 + t3856*t4032 + t3896*t4037 + t3957*t4042 + t3940*t4048 + 0.138152*(t3912*t4037 + 0.340999127418*t3883*t4042 + t3893*t4048) - 0.045*(t3936*t4037 + t3928*t4042 + t3944*t4048) - 0.108789*(0.340999127418*t3883*t4037 + t3960*t4042 + t3955*t4048) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

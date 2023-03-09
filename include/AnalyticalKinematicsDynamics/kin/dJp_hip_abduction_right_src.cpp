/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_hip_abduction_right_src.h"

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
  double t1008;
  double t198;
  double t472;
  double t548;
  double t1824;
  double t2041;
  double t558;
  double t731;
  double t2728;
  double t1354;
  double t1833;
  double t1841;
  double t1842;
  double t1959;
  double t2808;
  double t2826;
  double t2834;
  double t2882;
  double t2887;
  double t2888;
  double t3309;
  double t3314;
  double t3355;
  double t3382;
  double t3399;
  double t3408;
  double t3502;
  double t3506;
  double t3509;
  double t3636;
  double t3637;
  double t3641;
  double t3734;
  double t3751;
  double t3776;
  double t1010;
  double t1710;
  double t2095;
  double t2225;
  double t2293;
  double t2384;
  double t2636;
  double t2641;
  double t2738;
  double t3588;
  double t3595;
  double t3596;
  double t3603;
  double t3613;
  double t3616;
  double t3623;
  double t3629;
  double t3809;
  double t3870;
  double t3875;
  double t3881;
  double t3882;
  double t3885;
  double t3887;
  double t3889;
  double t2878;
  double t2943;
  double t2963;
  double t3030;
  double t3292;
  double t3298;
  double t3479;
  double t3510;
  double t3512;
  double t3514;
  double t3519;
  double t3541;
  double t3559;
  double t3974;
  double t3977;
  double t3980;
  double t3981;
  double t3983;
  double t3984;
  double t3990;
  double t3642;
  double t3656;
  double t3679;
  double t3699;
  double t3700;
  double t3716;
  double t3717;
  double t4200;
  double t4229;
  double t4230;
  double t3810;
  double t3813;
  double t3816;
  double t3825;
  double t3829;
  double t3833;
  double t4036;
  double t4039;
  double t4040;
  double t4041;
  double t4042;
  double t4043;
  double t4061;
  double t4070;
  double t4073;
  double t4075;
  double t4085;
  double t4086;
  double t4089;
  double t3846;
  double t3848;
  double t3849;
  double t3855;
  double t3857;
  double t3862;
  double t3863;
  double t4130;
  double t4131;
  double t4144;
  double t4160;
  double t4162;
  double t4167;
  double t4170;
  double t3367;
  double t3409;
  double t3410;
  double t3412;
  double t3413;
  double t3427;
  double t3440;
  double t3950;
  double t3951;
  double t3963;
  double t3964;
  double t3965;
  double t3969;
  double t3971;
  double t3721;
  double t3789;
  double t3791;
  double t3792;
  double t3795;
  double t3797;
  double t3800;
  double t4231;
  double t4236;
  double t4249;
  double t4257;
  double t4272;
  double t4276;
  double t4277;
  double t4326;
  double t4335;
  double t4336;
  double t4347;
  double t4350;
  double t4351;
  double t4367;
  double t4094;
  double t4095;
  double t4098;
  double t4099;
  double t4101;
  double t4102;
  double t4105;
  t1008 = Sin(var1[3]);
  t198 = Cos(var1[4]);
  t472 = Cos(var1[5]);
  t548 = Sin(var1[17]);
  t1824 = Cos(var1[17]);
  t2041 = Sin(var1[5]);
  t558 = -0.091*t548;
  t731 = 0. + t558;
  t2728 = Cos(var1[3]);
  t1354 = Sin(var1[4]);
  t1833 = -1.*t1824;
  t1841 = 1. + t1833;
  t1842 = -0.091*t1841;
  t1959 = 0. + t1842;
  t2808 = -1.*t2728*t472*t1354;
  t2826 = -1.*t1008*t2041;
  t2834 = t2808 + t2826;
  t2882 = t472*t1008;
  t2887 = -1.*t2728*t1354*t2041;
  t2888 = t2882 + t2887;
  t3309 = -1.*t472*t1008*t1354;
  t3314 = t2728*t2041;
  t3355 = t3309 + t3314;
  t3382 = -1.*t2728*t472;
  t3399 = -1.*t1008*t1354*t2041;
  t3408 = t3382 + t3399;
  t3502 = t2728*t472;
  t3506 = t1008*t1354*t2041;
  t3509 = t3502 + t3506;
  t3636 = t2728*t472*t1354;
  t3637 = t1008*t2041;
  t3641 = t3636 + t3637;
  t3734 = -1.*t472*t1008;
  t3751 = t2728*t1354*t2041;
  t3776 = t3734 + t3751;
  t1010 = -1.*t198*t472*t731*t1008;
  t1710 = -0.001*t1008*t1354;
  t2095 = -1.*t1959*t198*t1008*t2041;
  t2225 = t198*t472*t548*t1008;
  t2293 = -1.*t1824*t198*t1008*t2041;
  t2384 = t2225 + t2293;
  t2636 = -0.091*t2384;
  t2641 = t1010 + t1710 + t2095 + t2636;
  t2738 = 0.001*t2728*t198;
  t3588 = t2728*t198*t472*t731;
  t3595 = 0.001*t2728*t1354;
  t3596 = t1959*t2728*t198*t2041;
  t3603 = -1.*t2728*t198*t472*t548;
  t3613 = t1824*t2728*t198*t2041;
  t3616 = t3603 + t3613;
  t3623 = -0.091*t3616;
  t3629 = t3588 + t3595 + t3596 + t3623;
  t3809 = 0.001*t198*t1008;
  t3870 = t1959*t2728*t198*t472;
  t3875 = -1.*t2728*t198*t731*t2041;
  t3881 = t1824*t2728*t198*t472;
  t3882 = t2728*t198*t548*t2041;
  t3885 = t3881 + t3882;
  t3887 = -0.091*t3885;
  t3889 = t3870 + t3875 + t3887;
  t2878 = t731*t2834;
  t2943 = t1959*t2888;
  t2963 = -1.*t548*t2834;
  t3030 = t1824*t2888;
  t3292 = t2963 + t3030;
  t3298 = -0.091*t3292;
  t3479 = t1959*t3355;
  t3510 = t731*t3509;
  t3512 = t1824*t3355;
  t3514 = -1.*t548*t3509;
  t3519 = t3512 + t3514;
  t3541 = -0.091*t3519;
  t3559 = t3479 + t3510 + t3541;
  t3974 = t1959*t198*t472*t1008;
  t3977 = -1.*t198*t731*t1008*t2041;
  t3980 = t1824*t198*t472*t1008;
  t3981 = t198*t548*t1008*t2041;
  t3983 = t3980 + t3981;
  t3984 = -0.091*t3983;
  t3990 = t3974 + t3977 + t3984;
  t3642 = t1959*t3641;
  t3656 = t731*t2888;
  t3679 = t1824*t3641;
  t3699 = -1.*t548*t2888;
  t3700 = t3679 + t3699;
  t3716 = -0.091*t3700;
  t3717 = t3642 + t3656 + t3716;
  t4200 = t472*t1008*t1354;
  t4229 = -1.*t2728*t2041;
  t4230 = t4200 + t4229;
  t3810 = t731*t3355;
  t3813 = t1959*t3408;
  t3816 = -1.*t548*t3355;
  t3825 = t1824*t3408;
  t3829 = t3816 + t3825;
  t3833 = -0.091*t3829;
  t4036 = -1.*t198*t472*t731;
  t4039 = -1.*t1959*t198*t2041;
  t4040 = t198*t472*t548;
  t4041 = -1.*t1824*t198*t2041;
  t4042 = t4040 + t4041;
  t4043 = -0.091*t4042;
  t4061 = -1.*t1959*t472*t1354;
  t4070 = t731*t1354*t2041;
  t4073 = -1.*t1824*t472*t1354;
  t4075 = -1.*t548*t1354*t2041;
  t4085 = t4073 + t4075;
  t4086 = -0.091*t4085;
  t4089 = t4061 + t4070 + t4086;
  t3846 = -0.091*t1824*t2728*t198*t472;
  t3848 = -0.091*t2728*t198*t548*t2041;
  t3849 = -1.*t1824*t2728*t198*t472;
  t3855 = -1.*t2728*t198*t548*t2041;
  t3857 = t3849 + t3855;
  t3862 = -0.091*t3857;
  t3863 = t3846 + t3848 + t3862;
  t4130 = -0.091*t548*t3641;
  t4131 = -0.091*t1824*t2888;
  t4144 = -1.*t548*t3641;
  t4160 = -1.*t1824*t2888;
  t4162 = t4144 + t4160;
  t4167 = -0.091*t4162;
  t4170 = t4130 + t4131 + t4167;
  t3367 = -0.091*t1824*t3355;
  t3409 = -0.091*t548*t3408;
  t3410 = -1.*t1824*t3355;
  t3412 = -1.*t548*t3408;
  t3413 = t3410 + t3412;
  t3427 = -0.091*t3413;
  t3440 = t3367 + t3409 + t3427;
  t3950 = -0.091*t1824*t198*t472*t1008;
  t3951 = -0.091*t198*t548*t1008*t2041;
  t3963 = -1.*t1824*t198*t472*t1008;
  t3964 = -1.*t198*t548*t1008*t2041;
  t3965 = t3963 + t3964;
  t3969 = -0.091*t3965;
  t3971 = t3950 + t3951 + t3969;
  t3721 = -0.091*t1824*t3641;
  t3789 = -0.091*t548*t3776;
  t3791 = -1.*t1824*t3641;
  t3792 = -1.*t548*t3776;
  t3795 = t3791 + t3792;
  t3797 = -0.091*t3795;
  t3800 = t3721 + t3789 + t3797;
  t4231 = -0.091*t548*t4230;
  t4236 = -0.091*t1824*t3408;
  t4249 = -1.*t548*t4230;
  t4257 = -1.*t1824*t3408;
  t4272 = t4249 + t4257;
  t4276 = -0.091*t4272;
  t4277 = t4231 + t4236 + t4276;
  t4326 = -0.091*t198*t472*t548;
  t4335 = 0.091*t1824*t198*t2041;
  t4336 = -1.*t198*t472*t548;
  t4347 = t1824*t198*t2041;
  t4350 = t4336 + t4347;
  t4351 = -0.091*t4350;
  t4367 = t4326 + t4335 + t4351;
  t4094 = 0.091*t1824*t472*t1354;
  t4095 = 0.091*t548*t1354*t2041;
  t4098 = t1824*t472*t1354;
  t4099 = t548*t1354*t2041;
  t4101 = t4098 + t4099;
  t4102 = -0.091*t4101;
  t4105 = t4094 + t4095 + t4102;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2738 + t2878 + t2943 + t3298)*var2[3] + t2641*var2[4] + t3559*var2[5] + t3440*var2[17];
  p_output1[10]=(t3809 + t3810 + t3813 + t3833)*var2[3] + t3629*var2[4] + t3717*var2[5] + t3800*var2[17];
  p_output1[11]=0;
  p_output1[12]=t2641*var2[3] + (-1.*t1354*t1959*t2041*t2728 + t2738 - 0.091*(-1.*t1354*t1824*t2041*t2728 + t1354*t2728*t472*t548) - 1.*t1354*t2728*t472*t731)*var2[4] + t3889*var2[5] + t3863*var2[17];
  p_output1[13]=t3629*var2[3] + (-1.*t1008*t1354*t1959*t2041 + t3809 - 0.091*(-1.*t1008*t1354*t1824*t2041 + t1008*t1354*t472*t548) - 1.*t1008*t1354*t472*t731)*var2[4] + t3990*var2[5] + t3971*var2[17];
  p_output1[14]=(-0.001*t1354 + t4036 + t4039 + t4043)*var2[4] + t4089*var2[5] + t4105*var2[17];
  p_output1[15]=t3559*var2[3] + t3889*var2[4] + (t2878 + t2943 + t3298)*var2[5] + t4170*var2[17];
  p_output1[16]=t3717*var2[3] + t3990*var2[4] + (t3810 + t3813 + t3833)*var2[5] + t4277*var2[17];
  p_output1[17]=t4089*var2[4] + (t4036 + t4039 + t4043)*var2[5] + t4367*var2[17];
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
  p_output1[51]=t3440*var2[3] + t3863*var2[4] + t4170*var2[5] + (-0.091*t1824*t3776 + 0.091*t3641*t548 - 0.091*(-1.*t1824*t3776 + t3641*t548))*var2[17];
  p_output1[52]=t3800*var2[3] + t3971*var2[4] + t4277*var2[5] + (-0.091*t1824*t3509 + 0.091*t4230*t548 - 0.091*(-1.*t1824*t3509 + t4230*t548))*var2[17];
  p_output1[53]=t4105*var2[4] + t4367*var2[5] + (-0.091*t1824*t198*t2041 + t4043 + 0.091*t198*t472*t548)*var2[17];
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



void dJp_hip_abduction_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

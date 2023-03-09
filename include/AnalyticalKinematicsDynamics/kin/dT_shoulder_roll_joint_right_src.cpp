/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_shoulder_roll_joint_right_src.h"

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
  double t85;
  double t110;
  double t1352;
  double t1296;
  double t1301;
  double t1365;
  double t1931;
  double t1909;
  double t1929;
  double t2013;
  double t2016;
  double t2189;
  double t2233;
  double t2257;
  double t2814;
  double t2834;
  double t2846;
  double t3109;
  double t3113;
  double t3115;
  double t3257;
  double t3259;
  double t3283;
  double t2615;
  double t2848;
  double t2858;
  double t2467;
  double t3310;
  double t3638;
  double t3639;
  double t3645;
  double t3695;
  double t3698;
  double t3705;
  double t1312;
  double t1366;
  double t1425;
  double t1502;
  double t1559;
  double t1601;
  double t2141;
  double t2269;
  double t2375;
  double t2593;
  double t2596;
  double t2875;
  double t3014;
  double t3030;
  double t3122;
  double t3322;
  double t3413;
  double t3420;
  double t3427;
  double t3559;
  double t3565;
  double t3569;
  double t3574;
  double t3578;
  double t3582;
  double t2874;
  double t3612;
  double t3614;
  double t3647;
  double t3652;
  double t3660;
  double t3669;
  double t3674;
  double t3687;
  double t3715;
  double t3721;
  double t3785;
  double t3788;
  double t3793;
  double t3847;
  double t3852;
  double t3858;
  double t3883;
  double t3884;
  double t3902;
  double t3957;
  double t3962;
  double t3966;
  double t3993;
  double t3994;
  double t3997;
  double t4008;
  double t4016;
  double t4020;
  double t4045;
  double t4048;
  double t4050;
  double t4236;
  double t4237;
  double t4253;
  double t4257;
  double t4260;
  double t4238;
  double t4239;
  double t4240;
  double t4302;
  double t4303;
  double t4304;
  double t4307;
  double t4311;
  t85 = Cos(var1[3]);
  t110 = Cos(var1[4]);
  t1352 = Cos(var1[24]);
  t1296 = Cos(var1[5]);
  t1301 = Sin(var1[24]);
  t1365 = Sin(var1[5]);
  t1931 = Sin(var1[3]);
  t1909 = Sin(var1[4]);
  t1929 = t85*t1296*t1909;
  t2013 = t1931*t1365;
  t2016 = t1929 + t2013;
  t2189 = t1296*t1931;
  t2233 = -1.*t85*t1909*t1365;
  t2257 = t2189 + t2233;
  t2814 = -1.*t1296*t1931;
  t2834 = t85*t1909*t1365;
  t2846 = t2814 + t2834;
  t3109 = -1.*t1296*t1931*t1909;
  t3113 = t85*t1365;
  t3115 = t3109 + t3113;
  t3257 = -1.*t85*t1296;
  t3259 = -1.*t1931*t1909*t1365;
  t3283 = t3257 + t3259;
  t2615 = -1.*t1301*t2016;
  t2848 = t1352*t2846;
  t2858 = t2615 + t2848;
  t2467 = t1352*t2016;
  t3310 = t1352*t3283;
  t3638 = t1296*t1931*t1909;
  t3639 = -1.*t85*t1365;
  t3645 = t3638 + t3639;
  t3695 = t85*t1296;
  t3698 = t1931*t1909*t1365;
  t3705 = t3695 + t3698;
  t1312 = -1.*t85*t110*t1296*t1301;
  t1366 = t1352*t85*t110*t1365;
  t1425 = t1312 + t1366;
  t1502 = t1352*t85*t110*t1296;
  t1559 = t85*t110*t1301*t1365;
  t1601 = t1502 + t1559;
  t2141 = t1301*t2016;
  t2269 = t1352*t2257;
  t2375 = t2141 + t2269;
  t2593 = -1.*t1301*t2257;
  t2596 = t2467 + t2593;
  t2875 = -1.*t1352*t2016;
  t3014 = -1.*t1301*t2846;
  t3030 = t2875 + t3014;
  t3122 = -1.*t1301*t3115;
  t3322 = t3122 + t3310;
  t3413 = t1352*t3115;
  t3420 = t1301*t3283;
  t3427 = t3413 + t3420;
  t3559 = -1.*t110*t1296*t1301*t1931;
  t3565 = t1352*t110*t1931*t1365;
  t3569 = t3559 + t3565;
  t3574 = t1352*t110*t1296*t1931;
  t3578 = t110*t1301*t1931*t1365;
  t3582 = t3574 + t3578;
  t2874 = 0.984808*t2858;
  t3612 = t1301*t2846;
  t3614 = t2467 + t3612;
  t3647 = t1301*t3645;
  t3652 = t3647 + t3310;
  t3660 = t1352*t3645;
  t3669 = -1.*t1301*t3283;
  t3674 = t3660 + t3669;
  t3687 = -1.*t1301*t3645;
  t3715 = t1352*t3705;
  t3721 = t3687 + t3715;
  t3785 = -1.*t1352*t3645;
  t3788 = -1.*t1301*t3705;
  t3793 = t3785 + t3788;
  t3847 = -1.*t110*t1296*t1301;
  t3852 = t1352*t110*t1365;
  t3858 = t3847 + t3852;
  t3883 = -1.*t1352*t110*t1296;
  t3884 = -1.*t110*t1301*t1365;
  t3902 = t3883 + t3884;
  t3957 = t110*t1296*t1301;
  t3962 = -1.*t1352*t110*t1365;
  t3966 = t3957 + t3962;
  t3993 = t1352*t110*t1296;
  t3994 = t110*t1301*t1365;
  t3997 = t3993 + t3994;
  t4008 = t1296*t1301*t1909;
  t4016 = -1.*t1352*t1909*t1365;
  t4020 = t4008 + t4016;
  t4045 = -1.*t1352*t1296*t1909;
  t4048 = -1.*t1301*t1909*t1365;
  t4050 = t4045 + t4048;
  t4236 = -1.*t1352;
  t4237 = 1. + t4236;
  t4253 = -0.12*t4237;
  t4257 = -0.4*t1301;
  t4260 = 0. + t4253 + t4257;
  t4238 = 0.4*t4237;
  t4239 = -0.12*t1301;
  t4240 = 0. + t4238 + t4239;
  t4302 = -0.12*t1352;
  t4303 = 0.4*t1301;
  t4304 = t4302 + t4303;
  t4307 = -0.4*t1352;
  t4311 = t4307 + t4239;
  p_output1[0]=(-0.173648*t3322 + 0.984808*t3427)*var2[3] + (-0.173648*t1425 + 0.984808*t1601)*var2[4] + (0.984808*t2375 - 0.173648*t2596)*var2[5] + (t2874 - 0.173648*t3030)*var2[24];
  p_output1[1]=(-0.173648*t2858 + 0.984808*t3614)*var2[3] + (-0.173648*t3569 + 0.984808*t3582)*var2[4] + (0.984808*t3652 - 0.173648*t3674)*var2[5] + (0.984808*t3721 - 0.173648*t3793)*var2[24];
  p_output1[2]=(-0.173648*t4020 + 0.984808*t4050)*var2[4] + (0.984808*t3966 - 0.173648*t3997)*var2[5] + (0.984808*t3858 - 0.173648*t3902)*var2[24];
  p_output1[3]=0;
  p_output1[4]=(0.984808*t3322 + 0.173648*t3427)*var2[3] + (0.984808*t1425 + 0.173648*t1601)*var2[4] + (0.173648*t2375 + 0.984808*t2596)*var2[5] + (0.173648*t2858 + 0.984808*t3030)*var2[24];
  p_output1[5]=(t2874 + 0.173648*t3614)*var2[3] + (0.984808*t3569 + 0.173648*t3582)*var2[4] + (0.173648*t3652 + 0.984808*t3674)*var2[5] + (0.173648*t3721 + 0.984808*t3793)*var2[24];
  p_output1[6]=(0.984808*t4020 + 0.173648*t4050)*var2[4] + (0.173648*t3966 + 0.984808*t3997)*var2[5] + (0.173648*t3858 + 0.984808*t3902)*var2[24];
  p_output1[7]=0;
  p_output1[8]=t110*t1931*var2[3] + t1909*t85*var2[4];
  p_output1[9]=-1.*t110*t85*var2[3] + t1909*t1931*var2[4];
  p_output1[10]=t110*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.001*t110*t1931 - 0.12*t3322 + 0.4*t3427 + t3115*t4240 + t3283*t4260)*var2[3] + (-0.12*t1425 + 0.4*t1601 + 0.001*t1909*t85 + t110*t1296*t4240*t85 + t110*t1365*t4260*t85)*var2[4] + (0.4*t2375 - 0.12*t2596 + t2257*t4240 + t2016*t4260)*var2[5] + (0.4*t2858 - 0.12*t3030 + t2016*t4304 + t2846*t4311)*var2[24];
  p_output1[13]=var2[1] + (-0.12*t2858 + 0.4*t3614 + t2016*t4240 + t2846*t4260 - 0.001*t110*t85)*var2[3] + (0.001*t1909*t1931 - 0.12*t3569 + 0.4*t3582 + t110*t1296*t1931*t4240 + t110*t1365*t1931*t4260)*var2[4] + (0.4*t3652 - 0.12*t3674 + t3283*t4240 + t3645*t4260)*var2[5] + (0.4*t3721 - 0.12*t3793 + t3645*t4304 + t3705*t4311)*var2[24];
  p_output1[14]=var2[2] + (0.001*t110 - 0.12*t4020 + 0.4*t4050 - 1.*t1296*t1909*t4240 - 1.*t1365*t1909*t4260)*var2[4] + (0.4*t3966 - 0.12*t3997 - 1.*t110*t1365*t4240 + t110*t1296*t4260)*var2[5] + (0.4*t3858 - 0.12*t3902 + t110*t1296*t4304 + t110*t1365*t4311)*var2[24];
  p_output1[15]=0;
}



void dT_shoulder_roll_joint_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

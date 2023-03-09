/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_left_hip_roll_src.h"

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
  double t1975;
  double t2150;
  double t2578;
  double t2164;
  double t2263;
  double t2581;
  double t3349;
  double t3287;
  double t3386;
  double t3398;
  double t3406;
  double t3291;
  double t3352;
  double t3355;
  double t3758;
  double t3766;
  double t3858;
  double t4212;
  double t4223;
  double t4230;
  double t4176;
  double t4208;
  double t4210;
  double t3968;
  double t4047;
  double t4074;
  double t3460;
  double t4211;
  double t4730;
  double t4740;
  double t4741;
  double t4887;
  double t4905;
  double t4909;
  double t2488;
  double t2610;
  double t2627;
  double t2890;
  double t3089;
  double t3141;
  double t3358;
  double t3411;
  double t3412;
  double t3489;
  double t3631;
  double t4097;
  double t4098;
  double t4123;
  double t4318;
  double t4371;
  double t4387;
  double t4405;
  double t4410;
  double t4460;
  double t4470;
  double t4472;
  double t4488;
  double t4520;
  double t4530;
  double t4077;
  double t4638;
  double t4668;
  double t4746;
  double t4758;
  double t4802;
  double t4804;
  double t4813;
  double t4914;
  double t4924;
  double t4926;
  double t4944;
  double t4961;
  double t4964;
  double t5025;
  double t5026;
  double t5035;
  double t5049;
  double t5059;
  double t5069;
  double t5131;
  double t5152;
  double t5155;
  double t5165;
  double t5166;
  double t5177;
  double t5186;
  double t5200;
  double t5203;
  double t5217;
  double t5234;
  double t5239;
  t1975 = Cos(var1[3]);
  t2150 = Cos(var1[4]);
  t2578 = Cos(var1[5]);
  t2164 = Cos(var1[6]);
  t2263 = Sin(var1[5]);
  t2581 = Sin(var1[6]);
  t3349 = Sin(var1[4]);
  t3287 = Sin(var1[3]);
  t3386 = t1975*t2578*t3349;
  t3398 = t3287*t2263;
  t3406 = t3386 + t3398;
  t3291 = t2578*t3287;
  t3352 = -1.*t1975*t3349*t2263;
  t3355 = t3291 + t3352;
  t3758 = -1.*t2578*t3287;
  t3766 = t1975*t3349*t2263;
  t3858 = t3758 + t3766;
  t4212 = -1.*t2578*t3287*t3349;
  t4223 = t1975*t2263;
  t4230 = t4212 + t4223;
  t4176 = -1.*t1975*t2578;
  t4208 = -1.*t3287*t3349*t2263;
  t4210 = t4176 + t4208;
  t3968 = t2164*t3858;
  t4047 = -1.*t3406*t2581;
  t4074 = t3968 + t4047;
  t3460 = t2164*t3406;
  t4211 = t2164*t4210;
  t4730 = t2578*t3287*t3349;
  t4740 = -1.*t1975*t2263;
  t4741 = t4730 + t4740;
  t4887 = t1975*t2578;
  t4905 = t3287*t3349*t2263;
  t4909 = t4887 + t4905;
  t2488 = t1975*t2150*t2164*t2263;
  t2610 = -1.*t1975*t2150*t2578*t2581;
  t2627 = t2488 + t2610;
  t2890 = t1975*t2150*t2578*t2164;
  t3089 = t1975*t2150*t2263*t2581;
  t3141 = t2890 + t3089;
  t3358 = t2164*t3355;
  t3411 = t3406*t2581;
  t3412 = t3358 + t3411;
  t3489 = -1.*t3355*t2581;
  t3631 = t3460 + t3489;
  t4097 = -1.*t2164*t3406;
  t4098 = -1.*t3858*t2581;
  t4123 = t4097 + t4098;
  t4318 = -1.*t4230*t2581;
  t4371 = t4211 + t4318;
  t4387 = t2164*t4230;
  t4405 = t4210*t2581;
  t4410 = t4387 + t4405;
  t4460 = t2150*t2164*t3287*t2263;
  t4470 = -1.*t2150*t2578*t3287*t2581;
  t4472 = t4460 + t4470;
  t4488 = t2150*t2578*t2164*t3287;
  t4520 = t2150*t3287*t2263*t2581;
  t4530 = t4488 + t4520;
  t4077 = 0.930418*t4074;
  t4638 = t3858*t2581;
  t4668 = t3460 + t4638;
  t4746 = t4741*t2581;
  t4758 = t4211 + t4746;
  t4802 = t2164*t4741;
  t4804 = -1.*t4210*t2581;
  t4813 = t4802 + t4804;
  t4914 = t2164*t4909;
  t4924 = -1.*t4741*t2581;
  t4926 = t4914 + t4924;
  t4944 = -1.*t2164*t4741;
  t4961 = -1.*t4909*t2581;
  t4964 = t4944 + t4961;
  t5025 = t2150*t2164*t2263;
  t5026 = -1.*t2150*t2578*t2581;
  t5035 = t5025 + t5026;
  t5049 = -1.*t2150*t2578*t2164;
  t5059 = -1.*t2150*t2263*t2581;
  t5069 = t5049 + t5059;
  t5131 = -1.*t2150*t2164*t2263;
  t5152 = t2150*t2578*t2581;
  t5155 = t5131 + t5152;
  t5165 = t2150*t2578*t2164;
  t5166 = t2150*t2263*t2581;
  t5177 = t5165 + t5166;
  t5186 = -1.*t2164*t3349*t2263;
  t5200 = t2578*t3349*t2581;
  t5203 = t5186 + t5200;
  t5217 = -1.*t2578*t2164*t3349;
  t5234 = -1.*t3349*t2263*t2581;
  t5239 = t5217 + t5234;
  p_output1[0]=(-0.366501*t4371 + 0.930418*t4410)*var2[3] + (-0.366501*t2627 + 0.930418*t3141)*var2[4] + (0.930418*t3412 - 0.366501*t3631)*var2[5] + (t4077 - 0.366501*t4123)*var2[6];
  p_output1[1]=(-0.366501*t4074 + 0.930418*t4668)*var2[3] + (-0.366501*t4472 + 0.930418*t4530)*var2[4] + (0.930418*t4758 - 0.366501*t4813)*var2[5] + (0.930418*t4926 - 0.366501*t4964)*var2[6];
  p_output1[2]=(-0.366501*t5203 + 0.930418*t5239)*var2[4] + (0.930418*t5155 - 0.366501*t5177)*var2[5] + (0.930418*t5035 - 0.366501*t5069)*var2[6];
  p_output1[3]=(0.930418*t4371 + 0.366501*t4410)*var2[3] + (0.930418*t2627 + 0.366501*t3141)*var2[4] + (0.366501*t3412 + 0.930418*t3631)*var2[5] + (0.366501*t4074 + 0.930418*t4123)*var2[6];
  p_output1[4]=(t4077 + 0.366501*t4668)*var2[3] + (0.930418*t4472 + 0.366501*t4530)*var2[4] + (0.366501*t4758 + 0.930418*t4813)*var2[5] + (0.366501*t4926 + 0.930418*t4964)*var2[6];
  p_output1[5]=(0.930418*t5203 + 0.366501*t5239)*var2[4] + (0.366501*t5155 + 0.930418*t5177)*var2[5] + (0.366501*t5035 + 0.930418*t5069)*var2[6];
  p_output1[6]=t2150*t3287*var2[3] + t1975*t3349*var2[4];
  p_output1[7]=-1.*t1975*t2150*var2[3] + t3287*t3349*var2[4];
  p_output1[8]=t2150*var2[4];
}



void dR_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

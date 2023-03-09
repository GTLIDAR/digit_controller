/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_shoulder_roll_joint_left_src.h"

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
  double t430;
  double t524;
  double t1056;
  double t760;
  double t1006;
  double t1058;
  double t2963;
  double t2660;
  double t2834;
  double t3017;
  double t3019;
  double t3142;
  double t3144;
  double t3210;
  double t3512;
  double t3522;
  double t3529;
  double t3741;
  double t3742;
  double t3764;
  double t3808;
  double t3831;
  double t3838;
  double t3503;
  double t3549;
  double t3594;
  double t3321;
  double t3843;
  double t4028;
  double t4029;
  double t4033;
  double t4084;
  double t4089;
  double t4096;
  double t1018;
  double t1062;
  double t1166;
  double t1813;
  double t2356;
  double t2480;
  double t3056;
  double t3283;
  double t3309;
  double t3430;
  double t3438;
  double t3610;
  double t3635;
  double t3640;
  double t3785;
  double t3854;
  double t3897;
  double t3910;
  double t3911;
  double t3946;
  double t3948;
  double t3954;
  double t3968;
  double t3975;
  double t3982;
  double t3598;
  double t3998;
  double t4000;
  double t4034;
  double t4041;
  double t4047;
  double t4053;
  double t4057;
  double t4083;
  double t4099;
  double t4100;
  double t4114;
  double t4124;
  double t4131;
  double t4139;
  double t4142;
  double t4145;
  double t4159;
  double t4166;
  double t4168;
  double t4180;
  double t4188;
  double t4189;
  double t4199;
  double t4220;
  double t4227;
  double t4245;
  double t4248;
  double t4254;
  double t4261;
  double t4265;
  double t4282;
  t430 = Cos(var1[3]);
  t524 = Cos(var1[4]);
  t1056 = Cos(var1[13]);
  t760 = Cos(var1[5]);
  t1006 = Sin(var1[13]);
  t1058 = Sin(var1[5]);
  t2963 = Sin(var1[3]);
  t2660 = Sin(var1[4]);
  t2834 = t430*t760*t2660;
  t3017 = t2963*t1058;
  t3019 = t2834 + t3017;
  t3142 = t760*t2963;
  t3144 = -1.*t430*t2660*t1058;
  t3210 = t3142 + t3144;
  t3512 = -1.*t760*t2963;
  t3522 = t430*t2660*t1058;
  t3529 = t3512 + t3522;
  t3741 = -1.*t760*t2963*t2660;
  t3742 = t430*t1058;
  t3764 = t3741 + t3742;
  t3808 = -1.*t430*t760;
  t3831 = -1.*t2963*t2660*t1058;
  t3838 = t3808 + t3831;
  t3503 = -1.*t1006*t3019;
  t3549 = t1056*t3529;
  t3594 = t3503 + t3549;
  t3321 = t1056*t3019;
  t3843 = t1056*t3838;
  t4028 = t760*t2963*t2660;
  t4029 = -1.*t430*t1058;
  t4033 = t4028 + t4029;
  t4084 = t430*t760;
  t4089 = t2963*t2660*t1058;
  t4096 = t4084 + t4089;
  t1018 = -1.*t430*t524*t760*t1006;
  t1062 = t1056*t430*t524*t1058;
  t1166 = t1018 + t1062;
  t1813 = t1056*t430*t524*t760;
  t2356 = t430*t524*t1006*t1058;
  t2480 = t1813 + t2356;
  t3056 = t1006*t3019;
  t3283 = t1056*t3210;
  t3309 = t3056 + t3283;
  t3430 = -1.*t1006*t3210;
  t3438 = t3321 + t3430;
  t3610 = -1.*t1056*t3019;
  t3635 = -1.*t1006*t3529;
  t3640 = t3610 + t3635;
  t3785 = -1.*t1006*t3764;
  t3854 = t3785 + t3843;
  t3897 = t1056*t3764;
  t3910 = t1006*t3838;
  t3911 = t3897 + t3910;
  t3946 = -1.*t524*t760*t1006*t2963;
  t3948 = t1056*t524*t2963*t1058;
  t3954 = t3946 + t3948;
  t3968 = t1056*t524*t760*t2963;
  t3975 = t524*t1006*t2963*t1058;
  t3982 = t3968 + t3975;
  t3598 = 0.984808*t3594;
  t3998 = t1006*t3529;
  t4000 = t3321 + t3998;
  t4034 = t1006*t4033;
  t4041 = t4034 + t3843;
  t4047 = t1056*t4033;
  t4053 = -1.*t1006*t3838;
  t4057 = t4047 + t4053;
  t4083 = -1.*t1006*t4033;
  t4099 = t1056*t4096;
  t4100 = t4083 + t4099;
  t4114 = -1.*t1056*t4033;
  t4124 = -1.*t1006*t4096;
  t4131 = t4114 + t4124;
  t4139 = -1.*t524*t760*t1006;
  t4142 = t1056*t524*t1058;
  t4145 = t4139 + t4142;
  t4159 = -1.*t1056*t524*t760;
  t4166 = -1.*t524*t1006*t1058;
  t4168 = t4159 + t4166;
  t4180 = t524*t760*t1006;
  t4188 = -1.*t1056*t524*t1058;
  t4189 = t4180 + t4188;
  t4199 = t1056*t524*t760;
  t4220 = t524*t1006*t1058;
  t4227 = t4199 + t4220;
  t4245 = t760*t1006*t2660;
  t4248 = -1.*t1056*t2660*t1058;
  t4254 = t4245 + t4248;
  t4261 = -1.*t1056*t760*t2660;
  t4265 = -1.*t1006*t2660*t1058;
  t4282 = t4261 + t4265;
  p_output1[0]=(0.173648*t3854 + 0.984808*t3911)*var2[3] + (0.173648*t1166 + 0.984808*t2480)*var2[4] + (0.984808*t3309 + 0.173648*t3438)*var2[5] + (t3598 + 0.173648*t3640)*var2[13];
  p_output1[1]=(0.173648*t3594 + 0.984808*t4000)*var2[3] + (0.173648*t3954 + 0.984808*t3982)*var2[4] + (0.984808*t4041 + 0.173648*t4057)*var2[5] + (0.984808*t4100 + 0.173648*t4131)*var2[13];
  p_output1[2]=(0.173648*t4254 + 0.984808*t4282)*var2[4] + (0.984808*t4189 + 0.173648*t4227)*var2[5] + (0.984808*t4145 + 0.173648*t4168)*var2[13];
  p_output1[3]=(0.984808*t3854 - 0.173648*t3911)*var2[3] + (0.984808*t1166 - 0.173648*t2480)*var2[4] + (-0.173648*t3309 + 0.984808*t3438)*var2[5] + (-0.173648*t3594 + 0.984808*t3640)*var2[13];
  p_output1[4]=(t3598 - 0.173648*t4000)*var2[3] + (0.984808*t3954 - 0.173648*t3982)*var2[4] + (-0.173648*t4041 + 0.984808*t4057)*var2[5] + (-0.173648*t4100 + 0.984808*t4131)*var2[13];
  p_output1[5]=(0.984808*t4254 - 0.173648*t4282)*var2[4] + (-0.173648*t4189 + 0.984808*t4227)*var2[5] + (-0.173648*t4145 + 0.984808*t4168)*var2[13];
  p_output1[6]=t2963*t524*var2[3] + t2660*t430*var2[4];
  p_output1[7]=-1.*t430*t524*var2[3] + t2660*t2963*var2[4];
  p_output1[8]=t524*var2[4];
}



void dR_shoulder_roll_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

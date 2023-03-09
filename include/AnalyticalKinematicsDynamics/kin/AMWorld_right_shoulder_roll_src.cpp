/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_right_shoulder_roll_src.h"

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
  double t1386;
  double t1964;
  double t956;
  double t1849;
  double t2223;
  double t2959;
  double t1861;
  double t2826;
  double t2862;
  double t878;
  double t3034;
  double t3212;
  double t3213;
  double t4282;
  double t4297;
  double t4341;
  double t3897;
  double t4065;
  double t4193;
  double t4440;
  double t4215;
  double t4639;
  double t4692;
  double t4760;
  double t3678;
  double t3776;
  double t3803;
  double t3840;
  double t4365;
  double t4370;
  double t4386;
  double t4477;
  double t4518;
  double t4521;
  double t4538;
  double t4591;
  double t4593;
  double t4594;
  double t4776;
  double t4782;
  double t4783;
  double t4786;
  double t4790;
  double t4791;
  double t4792;
  double t4822;
  double t4826;
  double t4836;
  double t2892;
  double t3230;
  double t3234;
  double t3401;
  double t3505;
  double t3561;
  double t5049;
  double t5054;
  double t5055;
  double t5070;
  double t5073;
  double t5078;
  double t3868;
  double t4627;
  double t4839;
  double t4841;
  double t4879;
  double t4884;
  double t4894;
  double t4903;
  double t5067;
  double t5080;
  double t5081;
  double t5103;
  double t5115;
  double t5117;
  double t4970;
  double t4988;
  double t4995;
  double t4997;
  double t5182;
  double t5192;
  double t5204;
  double t5217;
  double t5219;
  double t5222;
  t1386 = Cos(var1[5]);
  t1964 = Sin(var1[3]);
  t956 = Cos(var1[3]);
  t1849 = Sin(var1[4]);
  t2223 = Sin(var1[5]);
  t2959 = Cos(var1[24]);
  t1861 = t956*t1386*t1849;
  t2826 = t1964*t2223;
  t2862 = t1861 + t2826;
  t878 = Sin(var1[24]);
  t3034 = -1.*t1386*t1964;
  t3212 = t956*t1849*t2223;
  t3213 = t3034 + t3212;
  t4282 = 0.173648*t2959;
  t4297 = -0.984808*t878;
  t4341 = t4282 + t4297;
  t3897 = 0.984808*t2959;
  t4065 = 0.173648*t878;
  t4193 = t3897 + t4065;
  t4440 = Cos(var1[4]);
  t4215 = t1386*t4193;
  t4639 = -0.173648*t2959;
  t4692 = 0.984808*t878;
  t4760 = t4639 + t4692;
  t3678 = -1.*var2[5];
  t3776 = 0. + t1849;
  t3803 = var2[3]*t3776;
  t3840 = 0. + var2[24] + t3678 + t3803;
  t4365 = -1.*t4341*t2223;
  t4370 = 0. + t4215 + t4365;
  t4386 = var2[4]*t4370;
  t4477 = t1386*t4341;
  t4518 = t4193*t2223;
  t4521 = 0. + t4477 + t4518;
  t4538 = t4440*t4521;
  t4591 = 0. + t4538;
  t4593 = var2[3]*t4591;
  t4594 = 0. + t4386 + t4593;
  t4776 = t1386*t4760;
  t4782 = -1.*t4193*t2223;
  t4783 = 0. + t4776 + t4782;
  t4786 = var2[4]*t4783;
  t4790 = t4760*t2223;
  t4791 = 0. + t4215 + t4790;
  t4792 = t4440*t4791;
  t4822 = 0. + t4792;
  t4826 = var2[3]*t4822;
  t4836 = 0. + t4786 + t4826;
  t2892 = -1.*t878*t2862;
  t3230 = t2959*t3213;
  t3234 = t2892 + t3230;
  t3401 = t2959*t2862;
  t3505 = t878*t3213;
  t3561 = t3401 + t3505;
  t5049 = t1386*t1964*t1849;
  t5054 = -1.*t956*t2223;
  t5055 = t5049 + t5054;
  t5070 = t956*t1386;
  t5073 = t1964*t1849*t2223;
  t5078 = t5070 + t5073;
  t3868 = -0.00004*t3840;
  t4627 = 0.00075*t4594;
  t4839 = -0.00001*t4836;
  t4841 = t3868 + t4627 + t4839;
  t4879 = 0.0003*t3840;
  t4884 = -0.00004*t4594;
  t4894 = 0.00001*t4836;
  t4903 = t4879 + t4884 + t4894;
  t5067 = -1.*t878*t5055;
  t5080 = t2959*t5078;
  t5081 = t5067 + t5080;
  t5103 = t2959*t5055;
  t5115 = t878*t5078;
  t5117 = t5103 + t5115;
  t4970 = 0.00001*t3840;
  t4988 = -0.00001*t4594;
  t4995 = 0.0007*t4836;
  t4997 = t4970 + t4988 + t4995;
  t5182 = -1.*t4440*t1386*t878;
  t5192 = t2959*t4440*t2223;
  t5204 = t5182 + t5192;
  t5217 = t2959*t4440*t1386;
  t5219 = t4440*t878*t2223;
  t5222 = t5217 + t5219;
  p_output1[0]=(0.984808*t3234 + 0.173648*t3561)*t4841 + (-0.173648*t3234 + 0.984808*t3561)*t4997 - 1.*t4440*t4903*t956;
  p_output1[1]=-1.*t1964*t4440*t4903 + t4841*(0.984808*t5081 + 0.173648*t5117) + t4997*(-0.173648*t5081 + 0.984808*t5117);
  p_output1[2]=t1849*t4903 + t4841*(0.984808*t5204 + 0.173648*t5222) + t4997*(-0.173648*t5204 + 0.984808*t5222);
}



void AMWorld_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_shoulder_roll_joint_left_src.h"

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
  double t434;
  double t437;
  double t868;
  double t453;
  double t756;
  double t874;
  double t1734;
  double t1634;
  double t1704;
  double t1796;
  double t1900;
  double t1947;
  double t1960;
  double t1983;
  double t2255;
  double t2296;
  double t2317;
  double t2960;
  double t2963;
  double t2996;
  double t3060;
  double t3078;
  double t3140;
  double t2243;
  double t2385;
  double t2402;
  double t2131;
  double t3142;
  double t3331;
  double t3365;
  double t3384;
  double t3522;
  double t3529;
  double t3531;
  double t787;
  double t957;
  double t1021;
  double t1516;
  double t1526;
  double t1530;
  double t1931;
  double t1988;
  double t2048;
  double t2135;
  double t2141;
  double t2726;
  double t2806;
  double t2866;
  double t3059;
  double t3144;
  double t3189;
  double t3197;
  double t3204;
  double t3248;
  double t3255;
  double t3259;
  double t3265;
  double t3268;
  double t3282;
  double t2662;
  double t3309;
  double t3314;
  double t3386;
  double t3438;
  double t3457;
  double t3460;
  double t3467;
  double t3515;
  double t3532;
  double t3535;
  double t3550;
  double t3573;
  double t3589;
  double t3602;
  double t3610;
  double t3615;
  double t3629;
  double t3630;
  double t3631;
  double t3653;
  double t3662;
  double t3676;
  double t3687;
  double t3699;
  double t3706;
  double t3735;
  double t3762;
  double t3764;
  double t3801;
  double t3806;
  double t3808;
  double t4093;
  double t4094;
  double t4105;
  double t4114;
  double t4117;
  double t4095;
  double t4096;
  double t4097;
  double t4152;
  double t4159;
  double t4161;
  double t4166;
  double t4168;
  t434 = Cos(var1[3]);
  t437 = Cos(var1[4]);
  t868 = Cos(var1[13]);
  t453 = Cos(var1[5]);
  t756 = Sin(var1[13]);
  t874 = Sin(var1[5]);
  t1734 = Sin(var1[3]);
  t1634 = Sin(var1[4]);
  t1704 = t434*t453*t1634;
  t1796 = t1734*t874;
  t1900 = t1704 + t1796;
  t1947 = t453*t1734;
  t1960 = -1.*t434*t1634*t874;
  t1983 = t1947 + t1960;
  t2255 = -1.*t453*t1734;
  t2296 = t434*t1634*t874;
  t2317 = t2255 + t2296;
  t2960 = -1.*t453*t1734*t1634;
  t2963 = t434*t874;
  t2996 = t2960 + t2963;
  t3060 = -1.*t434*t453;
  t3078 = -1.*t1734*t1634*t874;
  t3140 = t3060 + t3078;
  t2243 = -1.*t756*t1900;
  t2385 = t868*t2317;
  t2402 = t2243 + t2385;
  t2131 = t868*t1900;
  t3142 = t868*t3140;
  t3331 = t453*t1734*t1634;
  t3365 = -1.*t434*t874;
  t3384 = t3331 + t3365;
  t3522 = t434*t453;
  t3529 = t1734*t1634*t874;
  t3531 = t3522 + t3529;
  t787 = -1.*t434*t437*t453*t756;
  t957 = t868*t434*t437*t874;
  t1021 = t787 + t957;
  t1516 = t868*t434*t437*t453;
  t1526 = t434*t437*t756*t874;
  t1530 = t1516 + t1526;
  t1931 = t756*t1900;
  t1988 = t868*t1983;
  t2048 = t1931 + t1988;
  t2135 = -1.*t756*t1983;
  t2141 = t2131 + t2135;
  t2726 = -1.*t868*t1900;
  t2806 = -1.*t756*t2317;
  t2866 = t2726 + t2806;
  t3059 = -1.*t756*t2996;
  t3144 = t3059 + t3142;
  t3189 = t868*t2996;
  t3197 = t756*t3140;
  t3204 = t3189 + t3197;
  t3248 = -1.*t437*t453*t756*t1734;
  t3255 = t868*t437*t1734*t874;
  t3259 = t3248 + t3255;
  t3265 = t868*t437*t453*t1734;
  t3268 = t437*t756*t1734*t874;
  t3282 = t3265 + t3268;
  t2662 = 0.984808*t2402;
  t3309 = t756*t2317;
  t3314 = t2131 + t3309;
  t3386 = t756*t3384;
  t3438 = t3386 + t3142;
  t3457 = t868*t3384;
  t3460 = -1.*t756*t3140;
  t3467 = t3457 + t3460;
  t3515 = -1.*t756*t3384;
  t3532 = t868*t3531;
  t3535 = t3515 + t3532;
  t3550 = -1.*t868*t3384;
  t3573 = -1.*t756*t3531;
  t3589 = t3550 + t3573;
  t3602 = -1.*t437*t453*t756;
  t3610 = t868*t437*t874;
  t3615 = t3602 + t3610;
  t3629 = -1.*t868*t437*t453;
  t3630 = -1.*t437*t756*t874;
  t3631 = t3629 + t3630;
  t3653 = t437*t453*t756;
  t3662 = -1.*t868*t437*t874;
  t3676 = t3653 + t3662;
  t3687 = t868*t437*t453;
  t3699 = t437*t756*t874;
  t3706 = t3687 + t3699;
  t3735 = t453*t756*t1634;
  t3762 = -1.*t868*t1634*t874;
  t3764 = t3735 + t3762;
  t3801 = -1.*t868*t453*t1634;
  t3806 = -1.*t756*t1634*t874;
  t3808 = t3801 + t3806;
  t4093 = -1.*t868;
  t4094 = 1. + t4093;
  t4105 = 0.12*t4094;
  t4114 = -0.4*t756;
  t4117 = 0. + t4105 + t4114;
  t4095 = 0.4*t4094;
  t4096 = 0.12*t756;
  t4097 = 0. + t4095 + t4096;
  t4152 = 0.12*t868;
  t4159 = 0.4*t756;
  t4161 = t4152 + t4159;
  t4166 = -0.4*t868;
  t4168 = t4166 + t4096;
  p_output1[0]=(0.173648*t3144 + 0.984808*t3204)*var2[3] + (0.173648*t1021 + 0.984808*t1530)*var2[4] + (0.984808*t2048 + 0.173648*t2141)*var2[5] + (t2662 + 0.173648*t2866)*var2[13];
  p_output1[1]=(0.173648*t2402 + 0.984808*t3314)*var2[3] + (0.173648*t3259 + 0.984808*t3282)*var2[4] + (0.984808*t3438 + 0.173648*t3467)*var2[5] + (0.984808*t3535 + 0.173648*t3589)*var2[13];
  p_output1[2]=(0.173648*t3764 + 0.984808*t3808)*var2[4] + (0.984808*t3676 + 0.173648*t3706)*var2[5] + (0.984808*t3615 + 0.173648*t3631)*var2[13];
  p_output1[3]=0;
  p_output1[4]=(0.984808*t3144 - 0.173648*t3204)*var2[3] + (0.984808*t1021 - 0.173648*t1530)*var2[4] + (-0.173648*t2048 + 0.984808*t2141)*var2[5] + (-0.173648*t2402 + 0.984808*t2866)*var2[13];
  p_output1[5]=(t2662 - 0.173648*t3314)*var2[3] + (0.984808*t3259 - 0.173648*t3282)*var2[4] + (-0.173648*t3438 + 0.984808*t3467)*var2[5] + (-0.173648*t3535 + 0.984808*t3589)*var2[13];
  p_output1[6]=(0.984808*t3764 - 0.173648*t3808)*var2[4] + (-0.173648*t3676 + 0.984808*t3706)*var2[5] + (-0.173648*t3615 + 0.984808*t3631)*var2[13];
  p_output1[7]=0;
  p_output1[8]=t1734*t437*var2[3] + t1634*t434*var2[4];
  p_output1[9]=-1.*t434*t437*var2[3] + t1634*t1734*var2[4];
  p_output1[10]=t437*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.12*t3144 + 0.4*t3204 + t2996*t4097 + t3140*t4117 + 0.001*t1734*t437)*var2[3] + (0.12*t1021 + 0.4*t1530 + 0.001*t1634*t434 + t4097*t434*t437*t453 + t4117*t434*t437*t874)*var2[4] + (0.4*t2048 + 0.12*t2141 + t1983*t4097 + t1900*t4117)*var2[5] + (0.4*t2402 + 0.12*t2866 + t1900*t4161 + t2317*t4168)*var2[13];
  p_output1[13]=var2[1] + (0.12*t2402 + 0.4*t3314 + t1900*t4097 + t2317*t4117 - 0.001*t434*t437)*var2[3] + (0.001*t1634*t1734 + 0.12*t3259 + 0.4*t3282 + t1734*t4097*t437*t453 + t1734*t4117*t437*t874)*var2[4] + (0.4*t3438 + 0.12*t3467 + t3140*t4097 + t3384*t4117)*var2[5] + (0.4*t3535 + 0.12*t3589 + t3384*t4161 + t3531*t4168)*var2[13];
  p_output1[14]=var2[2] + (0.12*t3764 + 0.4*t3808 + 0.001*t437 - 1.*t1634*t4097*t453 - 1.*t1634*t4117*t874)*var2[4] + (0.4*t3676 + 0.12*t3706 + t4117*t437*t453 - 1.*t4097*t437*t874)*var2[5] + (0.4*t3615 + 0.12*t3631 + t4161*t437*t453 + t4168*t437*t874)*var2[13];
  p_output1[15]=0;
}



void dT_shoulder_roll_joint_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

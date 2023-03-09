/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_hip_rotation_left_src.h"

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
  double t376;
  double t2516;
  double t2525;
  double t2519;
  double t2553;
  double t2484;
  double t2598;
  double t2600;
  double t2610;
  double t2522;
  double t2562;
  double t2564;
  double t2620;
  double t2655;
  double t2274;
  double t2340;
  double t2358;
  double t2366;
  double t2410;
  double t2422;
  double t2674;
  double t2675;
  double t2791;
  double t2793;
  double t2813;
  double t2776;
  double t2781;
  double t2784;
  double t2728;
  double t2741;
  double t2581;
  double t2636;
  double t2638;
  double t2705;
  double t2717;
  double t2726;
  double t2785;
  double t2819;
  double t2829;
  double t2889;
  double t2893;
  double t2836;
  double t2837;
  double t2838;
  double t2932;
  double t2938;
  double t2965;
  double t2968;
  double t2973;
  double t2976;
  double t2842;
  double t2853;
  double t2854;
  double t2873;
  double t2874;
  double t2875;
  double t2886;
  double t2916;
  double t2953;
  double t2956;
  double t2969;
  double t2970;
  double t2989;
  double t2990;
  double t3014;
  double t3015;
  double t3017;
  double t3019;
  double t3030;
  double t3032;
  double t3037;
  double t3038;
  double t3051;
  double t3056;
  double t3060;
  double t3063;
  double t3069;
  double t3070;
  double t3085;
  double t3086;
  double t3105;
  double t3106;
  double t3114;
  double t3115;
  double t3125;
  double t3127;
  double t3129;
  double t3130;
  double t3131;
  double t3132;
  double t3146;
  double t3147;
  double t3152;
  double t3153;
  double t3161;
  double t3162;
  double t3164;
  double t3166;
  t376 = Cos(var1[3]);
  t2516 = Cos(var1[5]);
  t2525 = Sin(var1[4]);
  t2519 = Sin(var1[3]);
  t2553 = Sin(var1[5]);
  t2484 = Cos(var1[6]);
  t2598 = t376*t2516*t2525;
  t2600 = t2519*t2553;
  t2610 = t2598 + t2600;
  t2522 = -1.*t2516*t2519;
  t2562 = t376*t2525*t2553;
  t2564 = t2522 + t2562;
  t2620 = Sin(var1[6]);
  t2655 = Sin(var1[7]);
  t2274 = Cos(var1[4]);
  t2340 = Cos(var1[7]);
  t2358 = -1.*t2340;
  t2366 = 1. + t2358;
  t2410 = -1.000000637725*t2366;
  t2422 = 1. + t2410;
  t2674 = -0.930418*t2655;
  t2675 = 0. + t2674;
  t2791 = t2516*t2519*t2525;
  t2793 = -1.*t376*t2553;
  t2813 = t2791 + t2793;
  t2776 = t376*t2516;
  t2781 = t2519*t2525*t2553;
  t2784 = t2776 + t2781;
  t2728 = -0.366501*t2655;
  t2741 = 0. + t2728;
  t2581 = t2484*t2564;
  t2636 = -1.*t2610*t2620;
  t2638 = t2581 + t2636;
  t2705 = t2484*t2610;
  t2717 = t2564*t2620;
  t2726 = t2705 + t2717;
  t2785 = t2484*t2784;
  t2819 = -1.*t2813*t2620;
  t2829 = t2785 + t2819;
  t2889 = -0.134322983001*t2366;
  t2893 = 1. + t2889;
  t2836 = t2484*t2813;
  t2837 = t2784*t2620;
  t2838 = t2836 + t2837;
  t2932 = 0.366501*t2655;
  t2938 = 0. + t2932;
  t2965 = -0.8656776547239999*t2366;
  t2968 = 1. + t2965;
  t2973 = 0.930418*t2655;
  t2976 = 0. + t2973;
  t2842 = t2274*t2484*t2553;
  t2853 = -1.*t2274*t2516*t2620;
  t2854 = t2842 + t2853;
  t2873 = t2274*t2516*t2484;
  t2874 = t2274*t2553*t2620;
  t2875 = t2873 + t2874;
  t2886 = -0.340999127418*t2366*t2638;
  t2916 = t2893*t2726;
  t2953 = t376*t2274*t2938;
  t2956 = t2886 + t2916 + t2953;
  t2969 = t2968*t2638;
  t2970 = -0.340999127418*t2366*t2726;
  t2989 = t376*t2274*t2976;
  t2990 = t2969 + t2970 + t2989;
  t3014 = -0.340999127418*t2366*t2829;
  t3015 = t2893*t2838;
  t3017 = t2274*t2519*t2938;
  t3019 = t3014 + t3015 + t3017;
  t3030 = t2968*t2829;
  t3032 = -0.340999127418*t2366*t2838;
  t3037 = t2274*t2519*t2976;
  t3038 = t3030 + t3032 + t3037;
  t3051 = -0.340999127418*t2366*t2854;
  t3056 = t2893*t2875;
  t3060 = -1.*t2525*t2938;
  t3063 = t3051 + t3056 + t3060;
  t3069 = t2968*t2854;
  t3070 = -0.340999127418*t2366*t2875;
  t3085 = -1.*t2525*t2976;
  t3086 = t3069 + t3070 + t3085;
  t3105 = -1.*t2484;
  t3106 = 1. + t3105;
  t3114 = 0.091*t3106;
  t3115 = 0. + t3114;
  t3125 = 0.091*t2620;
  t3127 = 0. + t3125;
  t3129 = -0.04500040093286238*t2366;
  t3130 = 0.07877663122399998*t2675;
  t3131 = 0.031030906668*t2741;
  t3132 = 0. + t3129 + t3130 + t3131;
  t3146 = -3.2909349868922137e-7*var1[7];
  t3147 = 0.03103092645718495*t2366;
  t3152 = -0.045000372235*t2938;
  t3153 = t3146 + t3147 + t3152;
  t3161 = 1.296332362046933e-7*var1[7];
  t3162 = 0.07877668146182712*t2366;
  t3164 = -0.045000372235*t2976;
  t3166 = t3161 + t3162 + t3164;
  p_output1[0]=-1.*t2638*t2675 - 1.*t2726*t2741 - 1.*t2274*t2422*t376;
  p_output1[1]=-1.*t2274*t2422*t2519 - 1.*t2675*t2829 - 1.*t2741*t2838;
  p_output1[2]=t2422*t2525 - 1.*t2675*t2854 - 1.*t2741*t2875;
  p_output1[3]=0.;
  p_output1[4]=0.366501*t2956 + 0.930418*t2990;
  p_output1[5]=0.366501*t3019 + 0.930418*t3038;
  p_output1[6]=0.366501*t3063 + 0.930418*t3086;
  p_output1[7]=0.;
  p_output1[8]=-0.930418*t2956 + 0.366501*t2990;
  p_output1[9]=-0.930418*t3019 + 0.366501*t3038;
  p_output1[10]=-0.930418*t3063 + 0.366501*t3086;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.046986*t2956 + 0.109508*t2990 + t2564*t3115 + t2610*t3127 + t2726*t3153 + t2638*t3166 + t2274*t3132*t376 - 0.045*(t2638*t2675 + t2726*t2741 + t2274*t2422*t376) + var1[0];
  p_output1[13]=0. - 0.045*(t2274*t2422*t2519 + t2675*t2829 + t2741*t2838) - 0.046986*t3019 + 0.109508*t3038 + t2784*t3115 + t2813*t3127 + t2274*t2519*t3132 + t2838*t3153 + t2829*t3166 + var1[1];
  p_output1[14]=0. - 0.045*(-1.*t2422*t2525 + t2675*t2854 + t2741*t2875) - 0.046986*t3063 + 0.109508*t3086 + t2274*t2553*t3115 + t2274*t2516*t3127 - 1.*t2525*t3132 + t2875*t3153 + t2854*t3166 + var1[2];
  p_output1[15]=1.;
}



void T_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

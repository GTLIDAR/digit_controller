/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_hip_rotation_left_src.h"

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
  double t1710;
  double t2185;
  double t2349;
  double t2390;
  double t2683;
  double t2712;
  double t2859;
  double t2865;
  double t2932;
  double t2933;
  double t2935;
  double t2893;
  double t2895;
  double t2905;
  double t2762;
  double t2768;
  double t2769;
  double t2727;
  double t2728;
  double t2738;
  double t2780;
  double t2781;
  double t2782;
  double t2860;
  double t2868;
  double t2873;
  double t2978;
  double t2982;
  double t2983;
  double t2984;
  double t2990;
  double t2996;
  double t2985;
  double t2986;
  double t2987;
  double t2989;
  double t2997;
  double t2998;
  double t2875;
  double t2880;
  double t2884;
  double t3003;
  double t3004;
  double t3005;
  double t3006;
  double t3059;
  double t3060;
  double t3063;
  double t3071;
  double t3072;
  double t3073;
  double t3090;
  double t3091;
  double t3092;
  double t2711;
  double t2715;
  double t2716;
  double t3019;
  double t3093;
  double t3095;
  double t3096;
  double t3123;
  double t3141;
  double t3142;
  double t3145;
  double t2965;
  double t2937;
  double t3148;
  double t3151;
  double t3152;
  double t3124;
  double t3125;
  double t3008;
  double t3009;
  double t3011;
  double t2946;
  double t2952;
  double t2953;
  double t3207;
  double t3208;
  double t3209;
  double t3198;
  double t3199;
  double t3200;
  double t3163;
  double t3164;
  double t3165;
  double t3194;
  double t3195;
  double t3196;
  double t3021;
  double t3023;
  double t3066;
  double t3068;
  double t3069;
  double t3103;
  double t3104;
  double t3105;
  double t3044;
  double t3047;
  double t3049;
  double t3083;
  double t3085;
  double t3086;
  double t3240;
  double t3242;
  double t3243;
  double t3246;
  double t3247;
  double t3248;
  double t3051;
  double t3052;
  double t3055;
  double t3250;
  double t3251;
  double t3252;
  double t3253;
  double t3107;
  double t3111;
  double t3114;
  double t3255;
  double t3256;
  double t3257;
  double t3170;
  double t3157;
  double t3158;
  double t3138;
  double t3139;
  double t3277;
  double t3278;
  double t3279;
  double t3132;
  double t3135;
  double t3136;
  double t3282;
  double t3284;
  double t3285;
  double t3188;
  double t3189;
  double t3190;
  double t3319;
  double t3320;
  double t3321;
  double t3314;
  double t3315;
  double t3316;
  double t2966;
  double t2968;
  double t3336;
  double t3337;
  double t3338;
  double t2970;
  double t2973;
  double t2976;
  double t3370;
  double t3371;
  double t3372;
  double t3373;
  double t3375;
  double t3383;
  double t3384;
  double t3385;
  double t3377;
  double t3378;
  double t3379;
  double t3404;
  double t3399;
  double t3400;
  double t3401;
  double t3423;
  double t3424;
  double t3425;
  double t3419;
  double t3420;
  double t3421;
  double t3447;
  double t3448;
  double t3449;
  double t3442;
  double t3443;
  double t3444;
  double t3231;
  double t3234;
  double t3235;
  t1710 = Cos(var1[3]);
  t2185 = Sin(var1[3]);
  t2349 = Cos(var1[4]);
  t2390 = Sin(var1[4]);
  t2683 = Cos(var1[5]);
  t2712 = Sin(var1[5]);
  t2859 = Cos(var1[6]);
  t2865 = Sin(var1[6]);
  t2932 = t2683*t2185*t2390;
  t2933 = -1.*t1710*t2712;
  t2935 = t2932 + t2933;
  t2893 = t1710*t2683;
  t2895 = t2185*t2390*t2712;
  t2905 = t2893 + t2895;
  t2762 = -1.*t1710*t2683;
  t2768 = -1.*t2185*t2390*t2712;
  t2769 = t2762 + t2768;
  t2727 = -1.*t2683*t2185*t2390;
  t2728 = t1710*t2712;
  t2738 = t2727 + t2728;
  t2780 = t1710*t2683*t2390;
  t2781 = t2185*t2712;
  t2782 = t2780 + t2781;
  t2860 = t2349*t2859*t2712;
  t2868 = -1.*t2349*t2683*t2865;
  t2873 = t2860 + t2868;
  t2978 = -1.*t2859;
  t2982 = 1. + t2978;
  t2983 = 0.091*t2982;
  t2984 = 0. + t2983;
  t2990 = 0.091*t2865;
  t2996 = 0. + t2990;
  t2985 = -1.*t2683*t2185;
  t2986 = t1710*t2390*t2712;
  t2987 = t2985 + t2986;
  t2989 = t2984*t2987;
  t2997 = t2782*t2996;
  t2998 = t2989 + t2997;
  t2875 = t2349*t2683*t2859;
  t2880 = t2349*t2712*t2865;
  t2884 = t2875 + t2880;
  t3003 = -1.*var1[2];
  t3004 = -1.*t2349*t2984*t2712;
  t3005 = -1.*t2349*t2683*t2996;
  t3006 = 0. + t3003 + t3004 + t3005;
  t3059 = t2349*t2984*t2185*t2712;
  t3060 = t2349*t2683*t2185*t2996;
  t3063 = t3059 + t3060;
  t3071 = t2984*t2905;
  t3072 = t2935*t2996;
  t3073 = 0. + var1[1] + t3071 + t3072;
  t3090 = t2984*t2390*t2712;
  t3091 = t2683*t2390*t2996;
  t3092 = t3090 + t3091;
  t2711 = t2683*t2185;
  t2715 = -1.*t1710*t2390*t2712;
  t2716 = t2711 + t2715;
  t3019 = t2859*t2782;
  t3093 = t2859*t2905;
  t3095 = -1.*t2935*t2865;
  t3096 = t3093 + t3095;
  t3123 = t2859*t2935;
  t3141 = t2984*t2935;
  t3142 = t2769*t2996;
  t3145 = t3141 + t3142;
  t2965 = t2859*t2769;
  t2937 = t2935*t2865;
  t3148 = -1.*t2349*t2683*t2984;
  t3151 = t2349*t2712*t2996;
  t3152 = t3148 + t3151;
  t3124 = t2905*t2865;
  t3125 = t3123 + t3124;
  t3008 = t2859*t2987;
  t3009 = -1.*t2782*t2865;
  t3011 = t3008 + t3009;
  t2946 = -1.*t2859*t2935;
  t2952 = -1.*t2905*t2865;
  t2953 = t2946 + t2952;
  t3207 = 0.091*t2859*t2935;
  t3208 = 0.091*t2905*t2865;
  t3209 = t3207 + t3208;
  t3198 = -0.091*t2349*t2683*t2859;
  t3199 = -0.091*t2349*t2712*t2865;
  t3200 = t3198 + t3199;
  t3163 = -1.*t2349*t2859*t2712;
  t3164 = t2349*t2683*t2865;
  t3165 = t3163 + t3164;
  t3194 = -1.*t2349*t2683*t2859;
  t3195 = -1.*t2349*t2712*t2865;
  t3196 = t3194 + t3195;
  t3021 = t2987*t2865;
  t3023 = t3019 + t3021;
  t3066 = t2349*t2859*t2185*t2712;
  t3068 = -1.*t2349*t2683*t2185*t2865;
  t3069 = t3066 + t3068;
  t3103 = t2349*t2683*t2859*t2185;
  t3104 = t2349*t2185*t2712*t2865;
  t3105 = t3103 + t3104;
  t3044 = t1710*t2349*t2859*t2712;
  t3047 = -1.*t1710*t2349*t2683*t2865;
  t3049 = t3044 + t3047;
  t3083 = -1.*t2859*t2390*t2712;
  t3085 = t2683*t2390*t2865;
  t3086 = t3083 + t3085;
  t3240 = -1.*t1710*t2349*t2984*t2712;
  t3242 = -1.*t1710*t2349*t2683*t2996;
  t3243 = t3240 + t3242;
  t3246 = t2349*t2984*t2712;
  t3247 = t2349*t2683*t2996;
  t3248 = 0. + var1[2] + t3246 + t3247;
  t3051 = t1710*t2349*t2683*t2859;
  t3052 = t1710*t2349*t2712*t2865;
  t3055 = t3051 + t3052;
  t3250 = -1.*var1[0];
  t3251 = -1.*t2984*t2987;
  t3252 = -1.*t2782*t2996;
  t3253 = 0. + t3250 + t3251 + t3252;
  t3107 = -1.*t2683*t2859*t2390;
  t3111 = -1.*t2390*t2712*t2865;
  t3114 = t3107 + t3111;
  t3255 = -1.*t2984*t2390*t2712;
  t3256 = -1.*t2683*t2390*t2996;
  t3257 = t3255 + t3256;
  t3170 = t2965 + t2937;
  t3157 = -1.*t2769*t2865;
  t3158 = t3123 + t3157;
  t3138 = -1.*t2716*t2865;
  t3139 = t3019 + t3138;
  t3277 = -1.*t2984*t2782;
  t3278 = -1.*t2716*t2996;
  t3279 = t3277 + t3278;
  t3132 = t2859*t2716;
  t3135 = t2782*t2865;
  t3136 = t3132 + t3135;
  t3282 = t2349*t2683*t2984;
  t3284 = -1.*t2349*t2712*t2996;
  t3285 = t3282 + t3284;
  t3188 = -1.*t2859*t2782;
  t3189 = -1.*t2987*t2865;
  t3190 = t3188 + t3189;
  t3319 = -0.091*t2859*t2782;
  t3320 = -0.091*t2987*t2865;
  t3321 = t3319 + t3320;
  t3314 = 0.091*t2349*t2683*t2859;
  t3315 = 0.091*t2349*t2712*t2865;
  t3316 = t3314 + t3315;
  t2966 = -1.*t2738*t2865;
  t2968 = t2965 + t2966;
  t3336 = -1.*t2984*t2769;
  t3337 = -1.*t2738*t2996;
  t3338 = t3336 + t3337;
  t2970 = t2859*t2738;
  t2973 = t2769*t2865;
  t2976 = t2970 + t2973;
  t3370 = -1.*var1[1];
  t3371 = -1.*t2984*t2905;
  t3372 = -1.*t2935*t2996;
  t3373 = 0. + t3370 + t3371 + t3372;
  t3375 = 0. + var1[0] + t2989 + t2997;
  t3383 = -1.*t2349*t2984*t2185*t2712;
  t3384 = -1.*t2349*t2683*t2185*t2996;
  t3385 = t3383 + t3384;
  t3377 = t1710*t2349*t2984*t2712;
  t3378 = t1710*t2349*t2683*t2996;
  t3379 = t3377 + t3378;
  t3404 = t3251 + t3252;
  t3399 = t2984*t2769;
  t3400 = t2738*t2996;
  t3401 = t3399 + t3400;
  t3423 = -1.*t2984*t2935;
  t3424 = -1.*t2769*t2996;
  t3425 = t3423 + t3424;
  t3419 = t2984*t2782;
  t3420 = t2716*t2996;
  t3421 = t3419 + t3420;
  t3447 = -0.091*t2859*t2935;
  t3448 = -0.091*t2905*t2865;
  t3449 = t3447 + t3448;
  t3442 = 0.091*t2859*t2782;
  t3443 = 0.091*t2987*t2865;
  t3444 = t3442 + t3443;
  t3231 = 0.366501*t3011;
  t3234 = -0.930418*t3023;
  t3235 = t3231 + t3234;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t1710*var2[2] + t2185*var1[2]*var2[3];
  p_output1[25]=-1.*t2185*var2[2] - 1.*t1710*var1[2]*var2[3];
  p_output1[26]=t1710*var2[0] + t2185*var2[1] + (-1.*t2185*var1[0] + t1710*var1[1])*var2[3];
  p_output1[27]=-1.*t1710*var2[3];
  p_output1[28]=-1.*t2185*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t2390*var2[1] - 1.*t2185*t2349*var2[2] - 1.*t1710*t2349*var1[2]*var2[3] + (-1.*t2349*var1[1] + t2185*t2390*var1[2])*var2[4];
  p_output1[31]=t2390*var2[0] + t1710*t2349*var2[2] - 1.*t2185*t2349*var1[2]*var2[3] + (t2349*var1[0] - 1.*t1710*t2390*var1[2])*var2[4];
  p_output1[32]=t2185*t2349*var2[0] - 1.*t1710*t2349*var2[1] + (t1710*t2349*var1[0] + t2185*t2349*var1[1])*var2[3] + (-1.*t2185*t2390*var1[0] + t1710*t2390*var1[1])*var2[4];
  p_output1[33]=-1.*t2185*t2349*var2[3] - 1.*t1710*t2390*var2[4];
  p_output1[34]=t1710*t2349*var2[3] - 1.*t2185*t2390*var2[4];
  p_output1[35]=-1.*t2349*var2[4];
  p_output1[36]=t2390*var2[1] + t2185*t2349*var2[2] + (0.091*t2738 + t1710*t2349*var1[2])*var2[3] + (0.091*t1710*t2349*t2683 + t2349*var1[1] - 1.*t2185*t2390*var1[2])*var2[4] + 0.091*t2716*var2[5];
  p_output1[37]=-1.*t2390*var2[0] - 1.*t1710*t2349*var2[2] + (0.091*t2782 + t2185*t2349*var1[2])*var2[3] + (0.091*t2185*t2349*t2683 - 1.*t2349*var1[0] + t1710*t2390*var1[2])*var2[4] + 0.091*t2769*var2[5];
  p_output1[38]=-1.*t2185*t2349*var2[0] + t1710*t2349*var2[1] + (-1.*t1710*t2349*var1[0] - 1.*t2185*t2349*var1[1])*var2[3] + (-0.091*t2390*t2683 + t2185*t2390*var1[0] - 1.*t1710*t2390*var1[1])*var2[4] - 0.091*t2349*t2712*var2[5];
  p_output1[39]=t2185*t2349*var2[3] + t1710*t2390*var2[4];
  p_output1[40]=-1.*t1710*t2349*var2[3] + t2185*t2390*var2[4];
  p_output1[41]=t2349*var2[4];
  p_output1[42]=(0.366501*t2873 - 0.930418*t2884)*var2[1] + (0.366501*(-1.*t2859*t2905 + t2937) - 0.930418*t2953)*var2[2] + (0.084668*t2185*t2349 - 0.041869*t2968 - 0.016493*t2976 + 0.366501*(t2873*t2998 + t3006*t3011) - 0.930418*(t2884*t2998 + t3006*t3023))*var2[3] + (0.084668*t1710*t2390 - 0.041869*t3049 - 0.016493*t3055 + 0.366501*(t2873*t3063 + t3006*t3069 + t3073*t3086 + t3092*t3096) - 0.930418*(t2884*t3063 + t3006*t3105 + t3073*t3114 + t3092*t3125))*var2[4] + (-0.016493*t3136 - 0.041869*t3139 + 0.366501*(t2884*t3073 + t2873*t3145 + t3096*t3152 + t3006*t3158) - 0.930418*(t2884*t3145 + t3125*t3152 + t3073*t3165 + t3006*t3170))*var2[5] + (-0.016493*t3011 - 0.041869*t3190 + 0.366501*(t2953*t3006 + t3073*t3196 + t3096*t3200 + t2873*t3209) - 0.930418*(t2873*t3073 + t3006*t3096 + t3125*t3200 + t2884*t3209))*var2[6];
  p_output1[43]=(0.366501*t3165 - 0.930418*t3196)*var2[0] + t3235*var2[2] + (-0.084668*t1710*t2349 - 0.041869*t3011 - 0.016493*t3023 + 0.366501*(t2968*t3248 + t2873*t3338) - 0.930418*(t2976*t3248 + t2884*t3338))*var2[3] + (0.084668*t2185*t2390 - 0.041869*t3069 - 0.016493*t3105 + 0.366501*(t2873*t3243 + t3049*t3248 + t3086*t3253 + t3011*t3257) - 0.930418*(t2884*t3243 + t3055*t3248 + t3114*t3253 + t3023*t3257))*var2[4] + (-0.041869*t3158 - 0.016493*t3170 + 0.366501*(t3139*t3248 + t2884*t3253 + t2873*t3279 + t3011*t3285) - 0.930418*(t3136*t3248 + t3165*t3253 + t2884*t3279 + t3023*t3285))*var2[5] + (-0.041869*t2953 - 0.016493*t3096 + 0.366501*(t3190*t3248 + t3196*t3253 + t3011*t3316 + t2873*t3321) - 0.930418*(t3011*t3248 + t2873*t3253 + t3023*t3316 + t2884*t3321))*var2[6];
  p_output1[44]=(0.366501*t3096 - 0.930418*t3125)*var2[0] + (0.366501*(-1.*t2859*t2987 + t3135) - 0.930418*t3190)*var2[1] + (0.366501*(t2968*t3373 + t3011*t3375 + t3096*t3401 + t3011*t3404) - 0.930418*(t2976*t3373 + t3023*t3375 + t3125*t3401 + t3023*t3404))*var2[3] + (0.084668*t2349 - 0.041869*t3086 - 0.016493*t3114 + 0.366501*(t3049*t3373 + t3069*t3375 + t3096*t3379 + t3011*t3385) - 0.930418*(t3055*t3373 + t3105*t3375 + t3125*t3379 + t3023*t3385))*var2[4] + (-0.041869*t2884 - 0.016493*t3165 + 0.366501*(t3139*t3373 + t3158*t3375 + t3096*t3421 + t3011*t3425) - 0.930418*(t3136*t3373 + t3170*t3375 + t3125*t3421 + t3023*t3425))*var2[5] + (-0.016493*t2873 - 0.041869*t3196 + 0.366501*(t3190*t3373 + t2953*t3375 + t3096*t3444 + t3011*t3449) - 0.930418*(t3011*t3373 + t3096*t3375 + t3125*t3444 + t3023*t3449))*var2[6];
  p_output1[45]=(0.366501*t2968 - 0.930418*t2976)*var2[3] + (0.366501*t3049 - 0.930418*t3055)*var2[4] + (-0.930418*t3136 + 0.366501*t3139)*var2[5] + (-0.930418*t3011 + 0.366501*t3190)*var2[6];
  p_output1[46]=t3235*var2[3] + (0.366501*t3069 - 0.930418*t3105)*var2[4] + (0.366501*t3158 - 0.930418*t3170)*var2[5] + (0.366501*t2953 - 0.930418*t3096)*var2[6];
  p_output1[47]=(0.366501*t3086 - 0.930418*t3114)*var2[4] + (0.366501*t2884 - 0.930418*t3165)*var2[5] + (-0.930418*t2873 + 0.366501*t3196)*var2[6];
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void dJs_hip_rotation_left_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

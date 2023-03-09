/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_left_hip_yaw_src.h"

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
  double t152;
  double t211;
  double t545;
  double t562;
  double t1412;
  double t1672;
  double t2574;
  double t2600;
  double t2775;
  double t2777;
  double t2785;
  double t2738;
  double t2752;
  double t2755;
  double t2103;
  double t2105;
  double t2114;
  double t1818;
  double t1821;
  double t1843;
  double t2195;
  double t2204;
  double t2262;
  double t2597;
  double t2611;
  double t2616;
  double t3044;
  double t3099;
  double t3120;
  double t3167;
  double t3222;
  double t3234;
  double t3183;
  double t3196;
  double t3198;
  double t3206;
  double t3237;
  double t3255;
  double t2647;
  double t2697;
  double t2708;
  double t3264;
  double t3270;
  double t3281;
  double t3283;
  double t3647;
  double t3693;
  double t3697;
  double t3787;
  double t3808;
  double t3811;
  double t3854;
  double t3855;
  double t3865;
  double t1596;
  double t1681;
  double t1697;
  double t3441;
  double t3866;
  double t3869;
  double t3870;
  double t3972;
  double t4104;
  double t4105;
  double t4107;
  double t2962;
  double t2799;
  double t4213;
  double t4218;
  double t4219;
  double t3977;
  double t3985;
  double t3297;
  double t3317;
  double t3377;
  double t2879;
  double t2893;
  double t2906;
  double t4545;
  double t4551;
  double t4570;
  double t4503;
  double t4521;
  double t4532;
  double t4264;
  double t4265;
  double t4283;
  double t4408;
  double t4426;
  double t4484;
  double t3449;
  double t3492;
  double t3745;
  double t3754;
  double t3774;
  double t3900;
  double t3905;
  double t3911;
  double t3578;
  double t3580;
  double t3589;
  double t3812;
  double t3819;
  double t3835;
  double t4759;
  double t4768;
  double t4769;
  double t4809;
  double t4823;
  double t4830;
  double t3612;
  double t3613;
  double t3636;
  double t4853;
  double t4855;
  double t4857;
  double t4925;
  double t3938;
  double t3966;
  double t3969;
  double t4973;
  double t4975;
  double t4987;
  double t4313;
  double t4232;
  double t4233;
  double t4085;
  double t4089;
  double t5125;
  double t5144;
  double t5157;
  double t4055;
  double t4058;
  double t4064;
  double t5183;
  double t5202;
  double t5207;
  double t4383;
  double t4384;
  double t4388;
  double t5422;
  double t5434;
  double t5436;
  double t5388;
  double t5389;
  double t5397;
  double t2967;
  double t2981;
  double t5577;
  double t5588;
  double t5628;
  double t3010;
  double t3019;
  double t3024;
  double t5852;
  double t5859;
  double t5888;
  double t5912;
  double t5934;
  double t5992;
  double t5996;
  double t6001;
  double t5967;
  double t5969;
  double t5978;
  double t6136;
  double t6102;
  double t6115;
  double t6117;
  double t6256;
  double t6260;
  double t6268;
  double t6235;
  double t6246;
  double t6251;
  double t6436;
  double t6438;
  double t6450;
  double t6390;
  double t6391;
  double t6408;
  double t4702;
  double t4708;
  double t4710;
  t152 = Cos(var1[3]);
  t211 = Sin(var1[3]);
  t545 = Cos(var1[4]);
  t562 = Sin(var1[4]);
  t1412 = Cos(var1[5]);
  t1672 = Sin(var1[5]);
  t2574 = Cos(var1[6]);
  t2600 = Sin(var1[6]);
  t2775 = t1412*t211*t562;
  t2777 = -1.*t152*t1672;
  t2785 = t2775 + t2777;
  t2738 = t152*t1412;
  t2752 = t211*t562*t1672;
  t2755 = t2738 + t2752;
  t2103 = -1.*t152*t1412;
  t2105 = -1.*t211*t562*t1672;
  t2114 = t2103 + t2105;
  t1818 = -1.*t1412*t211*t562;
  t1821 = t152*t1672;
  t1843 = t1818 + t1821;
  t2195 = t152*t1412*t562;
  t2204 = t211*t1672;
  t2262 = t2195 + t2204;
  t2597 = t545*t2574*t1672;
  t2611 = -1.*t545*t1412*t2600;
  t2616 = t2597 + t2611;
  t3044 = -1.*t2574;
  t3099 = 1. + t3044;
  t3120 = 0.091*t3099;
  t3167 = 0. + t3120;
  t3222 = 0.091*t2600;
  t3234 = 0. + t3222;
  t3183 = -1.*t1412*t211;
  t3196 = t152*t562*t1672;
  t3198 = t3183 + t3196;
  t3206 = t3167*t3198;
  t3237 = t2262*t3234;
  t3255 = t3206 + t3237;
  t2647 = t545*t1412*t2574;
  t2697 = t545*t1672*t2600;
  t2708 = t2647 + t2697;
  t3264 = -1.*var1[2];
  t3270 = -1.*t545*t3167*t1672;
  t3281 = -1.*t545*t1412*t3234;
  t3283 = 0. + t3264 + t3270 + t3281;
  t3647 = t545*t3167*t211*t1672;
  t3693 = t545*t1412*t211*t3234;
  t3697 = t3647 + t3693;
  t3787 = t3167*t2755;
  t3808 = t2785*t3234;
  t3811 = 0. + var1[1] + t3787 + t3808;
  t3854 = t3167*t562*t1672;
  t3855 = t1412*t562*t3234;
  t3865 = t3854 + t3855;
  t1596 = t1412*t211;
  t1681 = -1.*t152*t562*t1672;
  t1697 = t1596 + t1681;
  t3441 = t2574*t2262;
  t3866 = t2574*t2755;
  t3869 = -1.*t2785*t2600;
  t3870 = t3866 + t3869;
  t3972 = t2574*t2785;
  t4104 = t3167*t2785;
  t4105 = t2114*t3234;
  t4107 = t4104 + t4105;
  t2962 = t2574*t2114;
  t2799 = t2785*t2600;
  t4213 = -1.*t545*t1412*t3167;
  t4218 = t545*t1672*t3234;
  t4219 = t4213 + t4218;
  t3977 = t2755*t2600;
  t3985 = t3972 + t3977;
  t3297 = t2574*t3198;
  t3317 = -1.*t2262*t2600;
  t3377 = t3297 + t3317;
  t2879 = -1.*t2574*t2785;
  t2893 = -1.*t2755*t2600;
  t2906 = t2879 + t2893;
  t4545 = 0.091*t2574*t2785;
  t4551 = 0.091*t2755*t2600;
  t4570 = t4545 + t4551;
  t4503 = -0.091*t545*t1412*t2574;
  t4521 = -0.091*t545*t1672*t2600;
  t4532 = t4503 + t4521;
  t4264 = -1.*t545*t2574*t1672;
  t4265 = t545*t1412*t2600;
  t4283 = t4264 + t4265;
  t4408 = -1.*t545*t1412*t2574;
  t4426 = -1.*t545*t1672*t2600;
  t4484 = t4408 + t4426;
  t3449 = t3198*t2600;
  t3492 = t3441 + t3449;
  t3745 = t545*t2574*t211*t1672;
  t3754 = -1.*t545*t1412*t211*t2600;
  t3774 = t3745 + t3754;
  t3900 = t545*t1412*t2574*t211;
  t3905 = t545*t211*t1672*t2600;
  t3911 = t3900 + t3905;
  t3578 = t152*t545*t2574*t1672;
  t3580 = -1.*t152*t545*t1412*t2600;
  t3589 = t3578 + t3580;
  t3812 = -1.*t2574*t562*t1672;
  t3819 = t1412*t562*t2600;
  t3835 = t3812 + t3819;
  t4759 = -1.*t152*t545*t3167*t1672;
  t4768 = -1.*t152*t545*t1412*t3234;
  t4769 = t4759 + t4768;
  t4809 = t545*t3167*t1672;
  t4823 = t545*t1412*t3234;
  t4830 = 0. + var1[2] + t4809 + t4823;
  t3612 = t152*t545*t1412*t2574;
  t3613 = t152*t545*t1672*t2600;
  t3636 = t3612 + t3613;
  t4853 = -1.*var1[0];
  t4855 = -1.*t3167*t3198;
  t4857 = -1.*t2262*t3234;
  t4925 = 0. + t4853 + t4855 + t4857;
  t3938 = -1.*t1412*t2574*t562;
  t3966 = -1.*t562*t1672*t2600;
  t3969 = t3938 + t3966;
  t4973 = -1.*t3167*t562*t1672;
  t4975 = -1.*t1412*t562*t3234;
  t4987 = t4973 + t4975;
  t4313 = t2962 + t2799;
  t4232 = -1.*t2114*t2600;
  t4233 = t3972 + t4232;
  t4085 = -1.*t1697*t2600;
  t4089 = t3441 + t4085;
  t5125 = -1.*t3167*t2262;
  t5144 = -1.*t1697*t3234;
  t5157 = t5125 + t5144;
  t4055 = t2574*t1697;
  t4058 = t2262*t2600;
  t4064 = t4055 + t4058;
  t5183 = t545*t1412*t3167;
  t5202 = -1.*t545*t1672*t3234;
  t5207 = t5183 + t5202;
  t4383 = -1.*t2574*t2262;
  t4384 = -1.*t3198*t2600;
  t4388 = t4383 + t4384;
  t5422 = -0.091*t2574*t2262;
  t5434 = -0.091*t3198*t2600;
  t5436 = t5422 + t5434;
  t5388 = 0.091*t545*t1412*t2574;
  t5389 = 0.091*t545*t1672*t2600;
  t5397 = t5388 + t5389;
  t2967 = -1.*t1843*t2600;
  t2981 = t2962 + t2967;
  t5577 = -1.*t3167*t2114;
  t5588 = -1.*t1843*t3234;
  t5628 = t5577 + t5588;
  t3010 = t2574*t1843;
  t3019 = t2114*t2600;
  t3024 = t3010 + t3019;
  t5852 = -1.*var1[1];
  t5859 = -1.*t3167*t2755;
  t5888 = -1.*t2785*t3234;
  t5912 = 0. + t5852 + t5859 + t5888;
  t5934 = 0. + var1[0] + t3206 + t3237;
  t5992 = -1.*t545*t3167*t211*t1672;
  t5996 = -1.*t545*t1412*t211*t3234;
  t6001 = t5992 + t5996;
  t5967 = t152*t545*t3167*t1672;
  t5969 = t152*t545*t1412*t3234;
  t5978 = t5967 + t5969;
  t6136 = t4855 + t4857;
  t6102 = t3167*t2114;
  t6115 = t1843*t3234;
  t6117 = t6102 + t6115;
  t6256 = -1.*t3167*t2785;
  t6260 = -1.*t2114*t3234;
  t6268 = t6256 + t6260;
  t6235 = t3167*t2262;
  t6246 = t1697*t3234;
  t6251 = t6235 + t6246;
  t6436 = -0.091*t2574*t2785;
  t6438 = -0.091*t2755*t2600;
  t6450 = t6436 + t6438;
  t6390 = 0.091*t2574*t2262;
  t6391 = 0.091*t3198*t2600;
  t6408 = t6390 + t6391;
  t4702 = 0.366501*t3377;
  t4708 = -0.930418*t3492;
  t4710 = t4702 + t4708;
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
  p_output1[24]=-1.*t152*var2[2] + t211*var1[2]*var2[3];
  p_output1[25]=-1.*t211*var2[2] - 1.*t152*var1[2]*var2[3];
  p_output1[26]=t152*var2[0] + t211*var2[1] + (-1.*t211*var1[0] + t152*var1[1])*var2[3];
  p_output1[27]=-1.*t152*var2[3];
  p_output1[28]=-1.*t211*var2[3];
  p_output1[29]=0;
  p_output1[30]=-1.*t562*var2[1] - 1.*t211*t545*var2[2] - 1.*t152*t545*var1[2]*var2[3] + (-1.*t545*var1[1] + t211*t562*var1[2])*var2[4];
  p_output1[31]=t562*var2[0] + t152*t545*var2[2] - 1.*t211*t545*var1[2]*var2[3] + (t545*var1[0] - 1.*t152*t562*var1[2])*var2[4];
  p_output1[32]=t211*t545*var2[0] - 1.*t152*t545*var2[1] + (t152*t545*var1[0] + t211*t545*var1[1])*var2[3] + (-1.*t211*t562*var1[0] + t152*t562*var1[1])*var2[4];
  p_output1[33]=-1.*t211*t545*var2[3] - 1.*t152*t562*var2[4];
  p_output1[34]=t152*t545*var2[3] - 1.*t211*t562*var2[4];
  p_output1[35]=-1.*t545*var2[4];
  p_output1[36]=t562*var2[1] + t211*t545*var2[2] + (0.091*t1843 + t152*t545*var1[2])*var2[3] + (0.091*t1412*t152*t545 + t545*var1[1] - 1.*t211*t562*var1[2])*var2[4] + 0.091*t1697*var2[5];
  p_output1[37]=-1.*t562*var2[0] - 1.*t152*t545*var2[2] + (0.091*t2262 + t211*t545*var1[2])*var2[3] + (0.091*t1412*t211*t545 - 1.*t545*var1[0] + t152*t562*var1[2])*var2[4] + 0.091*t2114*var2[5];
  p_output1[38]=-1.*t211*t545*var2[0] + t152*t545*var2[1] + (-1.*t152*t545*var1[0] - 1.*t211*t545*var1[1])*var2[3] + (-0.091*t1412*t562 + t211*t562*var1[0] - 1.*t152*t562*var1[1])*var2[4] - 0.091*t1672*t545*var2[5];
  p_output1[39]=t211*t545*var2[3] + t152*t562*var2[4];
  p_output1[40]=-1.*t152*t545*var2[3] + t211*t562*var2[4];
  p_output1[41]=t545*var2[4];
  p_output1[42]=(0.366501*t2616 - 0.930418*t2708)*var2[1] + (0.366501*(-1.*t2574*t2755 + t2799) - 0.930418*t2906)*var2[2] + (-0.041869*t2981 - 0.016493*t3024 + 0.366501*(t2616*t3255 + t3283*t3377) - 0.930418*(t2708*t3255 + t3283*t3492) + 0.084668*t211*t545)*var2[3] + (-0.041869*t3589 - 0.016493*t3636 + 0.366501*(t2616*t3697 + t3283*t3774 + t3811*t3835 + t3865*t3870) - 0.930418*(t2708*t3697 + t3283*t3911 + t3811*t3969 + t3865*t3985) + 0.084668*t152*t562)*var2[4] + (-0.016493*t4064 - 0.041869*t4089 + 0.366501*(t2708*t3811 + t2616*t4107 + t3870*t4219 + t3283*t4233) - 0.930418*(t2708*t4107 + t3985*t4219 + t3811*t4283 + t3283*t4313))*var2[5] + (-0.016493*t3377 - 0.041869*t4388 + 0.366501*(t2906*t3283 + t3811*t4484 + t3870*t4532 + t2616*t4570) - 0.930418*(t2616*t3811 + t3283*t3870 + t3985*t4532 + t2708*t4570))*var2[6];
  p_output1[43]=(0.366501*t4283 - 0.930418*t4484)*var2[0] + t4710*var2[2] + (-0.041869*t3377 - 0.016493*t3492 - 0.084668*t152*t545 + 0.366501*(t2981*t4830 + t2616*t5628) - 0.930418*(t3024*t4830 + t2708*t5628))*var2[3] + (-0.041869*t3774 - 0.016493*t3911 + 0.366501*(t2616*t4769 + t3589*t4830 + t3835*t4925 + t3377*t4987) - 0.930418*(t2708*t4769 + t3636*t4830 + t3969*t4925 + t3492*t4987) + 0.084668*t211*t562)*var2[4] + (-0.041869*t4233 - 0.016493*t4313 + 0.366501*(t4089*t4830 + t2708*t4925 + t2616*t5157 + t3377*t5207) - 0.930418*(t4064*t4830 + t4283*t4925 + t2708*t5157 + t3492*t5207))*var2[5] + (-0.041869*t2906 - 0.016493*t3870 + 0.366501*(t4388*t4830 + t4484*t4925 + t3377*t5397 + t2616*t5436) - 0.930418*(t3377*t4830 + t2616*t4925 + t3492*t5397 + t2708*t5436))*var2[6];
  p_output1[44]=(0.366501*t3870 - 0.930418*t3985)*var2[0] + (0.366501*(-1.*t2574*t3198 + t4058) - 0.930418*t4388)*var2[1] + (0.366501*(t2981*t5912 + t3377*t5934 + t3870*t6117 + t3377*t6136) - 0.930418*(t3024*t5912 + t3492*t5934 + t3985*t6117 + t3492*t6136))*var2[3] + (-0.041869*t3835 - 0.016493*t3969 + 0.084668*t545 + 0.366501*(t3589*t5912 + t3774*t5934 + t3870*t5978 + t3377*t6001) - 0.930418*(t3636*t5912 + t3911*t5934 + t3985*t5978 + t3492*t6001))*var2[4] + (-0.041869*t2708 - 0.016493*t4283 + 0.366501*(t4089*t5912 + t4233*t5934 + t3870*t6251 + t3377*t6268) - 0.930418*(t4064*t5912 + t4313*t5934 + t3985*t6251 + t3492*t6268))*var2[5] + (-0.016493*t2616 - 0.041869*t4484 + 0.366501*(t4388*t5912 + t2906*t5934 + t3870*t6408 + t3377*t6450) - 0.930418*(t3377*t5912 + t3870*t5934 + t3985*t6408 + t3492*t6450))*var2[6];
  p_output1[45]=(0.366501*t2981 - 0.930418*t3024)*var2[3] + (0.366501*t3589 - 0.930418*t3636)*var2[4] + (-0.930418*t4064 + 0.366501*t4089)*var2[5] + (-0.930418*t3377 + 0.366501*t4388)*var2[6];
  p_output1[46]=t4710*var2[3] + (0.366501*t3774 - 0.930418*t3911)*var2[4] + (0.366501*t4233 - 0.930418*t4313)*var2[5] + (0.366501*t2906 - 0.930418*t3870)*var2[6];
  p_output1[47]=(0.366501*t3835 - 0.930418*t3969)*var2[4] + (0.366501*t2708 - 0.930418*t4283)*var2[5] + (-0.930418*t2616 + 0.366501*t4484)*var2[6];
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



void dJs_left_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

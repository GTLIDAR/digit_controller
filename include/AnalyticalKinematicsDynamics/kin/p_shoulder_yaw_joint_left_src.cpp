/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_shoulder_yaw_joint_left_src.h"

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
  double t907;
  double t216;
  double t1968;
  double t1970;
  double t1972;
  double t2280;
  double t2458;
  double t2596;
  double t2568;
  double t2664;
  double t469;
  double t545;
  double t660;
  double t2571;
  double t2739;
  double t2759;
  double t2988;
  double t3010;
  double t3023;
  double t3638;
  double t3664;
  double t3733;
  double t3808;
  double t220;
  double t3459;
  double t3470;
  double t3260;
  double t3304;
  double t3306;
  double t3553;
  double t3558;
  double t3562;
  double t3781;
  double t3153;
  double t3156;
  double t4070;
  double t3868;
  double t1139;
  double t1191;
  double t927;
  double t950;
  double t4547;
  double t3941;
  double t3949;
  double t3957;
  double t4016;
  double t4038;
  double t4046;
  double t4514;
  double t4208;
  double t4242;
  double t4255;
  double t4276;
  double t4277;
  double t4279;
  double t4637;
  double t4667;
  double t4684;
  double t4714;
  double t4717;
  double t4726;
  double t3825;
  double t4818;
  double t3878;
  double t5054;
  double t4160;
  double t4874;
  double t4076;
  double t828;
  double t1120;
  double t1222;
  double t1277;
  double t2225;
  double t2292;
  double t2298;
  double t2789;
  double t2815;
  double t2926;
  double t3112;
  double t3141;
  double t3168;
  double t3221;
  double t5262;
  double t5265;
  double t5277;
  double t5296;
  double t5310;
  double t5319;
  double t3411;
  double t3437;
  double t3506;
  double t3542;
  double t3628;
  double t3737;
  double t3828;
  double t3855;
  double t3916;
  double t3920;
  double t3929;
  double t5334;
  double t5335;
  double t5344;
  double t5362;
  double t5366;
  double t5372;
  double t4063;
  double t4064;
  double t4111;
  double t4148;
  double t4177;
  double t4189;
  double t4196;
  double t4299;
  double t4513;
  double t4522;
  double t4544;
  double t4575;
  double t4596;
  double t4598;
  double t4843;
  double t5379;
  double t5388;
  double t5400;
  double t5425;
  double t4918;
  double t5432;
  double t5435;
  double t5445;
  double t5452;
  double t4925;
  double t4929;
  double t5468;
  double t5473;
  double t5478;
  double t5487;
  double t4978;
  double t5005;
  double t5056;
  double t5072;
  double t5111;
  double t5119;
  double t5132;
  double t5142;
  double t5633;
  double t5654;
  double t5655;
  double t5657;
  double t5659;
  double t5660;
  double t5663;
  double t5665;
  double t5669;
  double t5670;
  double t5677;
  double t5686;
  double t5691;
  double t5700;
  double t5706;
  double t5707;
  double t5710;
  double t5714;
  t907 = Sin(var1[14]);
  t216 = Cos(var1[3]);
  t1968 = Cos(var1[13]);
  t1970 = -1.*t1968;
  t1972 = 1. + t1970;
  t2280 = Sin(var1[13]);
  t2458 = Cos(var1[5]);
  t2596 = Sin(var1[3]);
  t2568 = Sin(var1[4]);
  t2664 = Sin(var1[5]);
  t469 = Cos(var1[14]);
  t545 = -1.*t469;
  t660 = 1. + t545;
  t2571 = t216*t2458*t2568;
  t2739 = t2596*t2664;
  t2759 = t2571 + t2739;
  t2988 = -1.*t2458*t2596;
  t3010 = t216*t2568*t2664;
  t3023 = t2988 + t3010;
  t3638 = Cos(var1[15]);
  t3664 = -1.*t3638;
  t3733 = 1. + t3664;
  t3808 = Sin(var1[15]);
  t220 = Cos(var1[4]);
  t3459 = 0.994522*t907;
  t3470 = 0. + t3459;
  t3260 = -1.*t2280*t2759;
  t3304 = t1968*t3023;
  t3306 = t3260 + t3304;
  t3553 = t1968*t2759;
  t3558 = t2280*t3023;
  t3562 = t3553 + t3558;
  t3781 = 0.051978134642000004*t3733;
  t3153 = -0.104528*t907;
  t3156 = 0. + t3153;
  t4070 = -0.05226439969100001*t3733;
  t3868 = 0.49726168403800003*t3733;
  t1139 = 0.104528*t907;
  t1191 = 0. + t1139;
  t927 = -0.994522*t907;
  t950 = 0. + t927;
  t4547 = -0.073913*t3808;
  t3941 = t216*t220*t3470;
  t3949 = 0.103955395616*t660*t3306;
  t3957 = -0.9890740084840001*t660;
  t4016 = 1. + t3957;
  t4038 = t4016*t3562;
  t4046 = t3941 + t3949 + t4038;
  t4514 = -0.703234*t3808;
  t4208 = t216*t220*t3156;
  t4242 = -0.010926102783999999*t660;
  t4255 = 1. + t4242;
  t4276 = t4255*t3306;
  t4277 = 0.103955395616*t660*t3562;
  t4279 = t4208 + t4276 + t4277;
  t4637 = -1.0000001112680001*t660;
  t4667 = 1. + t4637;
  t4684 = t4667*t216*t220;
  t4714 = t1191*t3306;
  t4717 = t950*t3562;
  t4726 = t4684 + t4714 + t4717;
  t3825 = -0.707107*t3808;
  t4818 = -0.49726168403800003*t3733;
  t3878 = 0.073913*t3808;
  t5054 = -0.051978134642000004*t3733;
  t4160 = 0.707107*t3808;
  t4874 = 0.05226439969100001*t3733;
  t4076 = 0.703234*t3808;
  t828 = -0.056500534356700764*t660;
  t1120 = 0.38315650737400003*t950;
  t1222 = -0.040271188976*t1191;
  t1277 = 0. + t828 + t1120 + t1222;
  t2225 = 0.4*t1972;
  t2292 = 0.12*t2280;
  t2298 = 0. + t2225 + t2292;
  t2789 = 0.12*t1972;
  t2815 = -0.4*t2280;
  t2926 = 0. + t2789 + t2815;
  t3112 = 1.1345904784751044e-7*var1[14];
  t3141 = -0.04027119345689465*t660;
  t3168 = -0.05650052807*t3156;
  t3221 = t3112 + t3141 + t3168;
  t5262 = t2458*t2596*t2568;
  t5265 = -1.*t216*t2664;
  t5277 = t5262 + t5265;
  t5296 = t216*t2458;
  t5310 = t2596*t2568*t2664;
  t5319 = t5296 + t5310;
  t3411 = 1.1924972351948546e-8*var1[14];
  t3437 = 0.38315655000705834*t660;
  t3506 = -0.05650052807*t3470;
  t3542 = t3411 + t3437 + t3506;
  t3628 = -1.5601527583902087e-7*var1[15];
  t3737 = 0.09582494577057615*t3733;
  t3828 = t3781 + t3825;
  t3855 = 0.231098203479*t3828;
  t3916 = t3868 + t3878;
  t3920 = 0.164383620275*t3916;
  t3929 = t3628 + t3737 + t3855 + t3920;
  t5334 = -1.*t2280*t5277;
  t5335 = t1968*t5319;
  t5344 = t5334 + t5335;
  t5362 = t1968*t5277;
  t5366 = t2280*t5319;
  t5372 = t5362 + t5366;
  t4063 = 1.639789470231751e-8*var1[15];
  t4064 = 0.22983603018311177*t3733;
  t4111 = t4070 + t4076;
  t4148 = 0.164383620275*t4111;
  t4177 = t3781 + t4160;
  t4189 = 0.18957839082800002*t4177;
  t4196 = t4063 + t4064 + t4148 + t4189;
  t4299 = 1.568745163810375e-7*var1[15];
  t4513 = 0.08219200580743281*t3733;
  t4522 = t4070 + t4514;
  t4544 = 0.231098203479*t4522;
  t4575 = t3868 + t4547;
  t4596 = 0.18957839082800002*t4575;
  t4598 = t4299 + t4513 + t4544 + t4596;
  t4843 = t4818 + t4547;
  t5379 = t220*t3470*t2596;
  t5388 = 0.103955395616*t660*t5344;
  t5400 = t4016*t5372;
  t5425 = t5379 + t5388 + t5400;
  t4918 = t4874 + t4514;
  t5432 = t220*t3156*t2596;
  t5435 = t4255*t5344;
  t5445 = 0.103955395616*t660*t5372;
  t5452 = t5432 + t5435 + t5445;
  t4925 = -0.500001190325*t3733;
  t4929 = 1. + t4925;
  t5468 = t4667*t220*t2596;
  t5473 = t1191*t5344;
  t5478 = t950*t5372;
  t5487 = t5468 + t5473 + t5478;
  t4978 = -0.5054634410180001*t3733;
  t5005 = 1. + t4978;
  t5056 = t5054 + t3825;
  t5072 = t4818 + t3878;
  t5111 = t5054 + t4160;
  t5119 = -0.9945383682050002*t3733;
  t5132 = 1. + t5119;
  t5142 = t4874 + t4076;
  t5633 = -1.*t220*t2458*t2280;
  t5654 = t1968*t220*t2664;
  t5655 = t5633 + t5654;
  t5657 = t1968*t220*t2458;
  t5659 = t220*t2280*t2664;
  t5660 = t5657 + t5659;
  t5663 = -1.*t3470*t2568;
  t5665 = 0.103955395616*t660*t5655;
  t5669 = t4016*t5660;
  t5670 = t5663 + t5665 + t5669;
  t5677 = -1.*t3156*t2568;
  t5686 = t4255*t5655;
  t5691 = 0.103955395616*t660*t5660;
  t5700 = t5677 + t5686 + t5691;
  t5706 = -1.*t4667*t2568;
  t5707 = t1191*t5655;
  t5710 = t950*t5660;
  t5714 = t5706 + t5707 + t5710;
  p_output1[0]=0. + t1277*t216*t220 + t2298*t2759 + t2926*t3023 + t3221*t3306 + t3542*t3562 + t3929*t4046 + t4196*t4279 + t4598*t4726 + 0.060173*(t4046*t4843 + t4279*t4918 + t4726*t4929) + 0.293218*(t4046*t5005 + t4279*t5056 + t4726*t5072) + 0.220205*(t4046*t5111 + t4279*t5132 + t4726*t5142) + var1[0];
  p_output1[1]=0. + t1277*t220*t2596 + t2298*t5277 + t2926*t5319 + t3221*t5344 + t3542*t5372 + t3929*t5425 + t4196*t5452 + t4598*t5487 + 0.060173*(t4843*t5425 + t4918*t5452 + t4929*t5487) + 0.293218*(t5005*t5425 + t5056*t5452 + t5072*t5487) + 0.220205*(t5111*t5425 + t5132*t5452 + t5142*t5487) + var1[1];
  p_output1[2]=0. + t220*t2298*t2458 - 1.*t1277*t2568 + t220*t2664*t2926 + t3221*t5655 + t3542*t5660 + t3929*t5670 + t4196*t5700 + t4598*t5714 + 0.060173*(t4843*t5670 + t4918*t5700 + t4929*t5714) + 0.293218*(t5005*t5670 + t5056*t5700 + t5072*t5714) + 0.220205*(t5111*t5670 + t5132*t5700 + t5142*t5714) + var1[2];
}



void p_shoulder_yaw_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

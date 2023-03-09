/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_left_shoulder_roll_src.h"

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
  double t105;
  double t268;
  double t101;
  double t208;
  double t275;
  double t279;
  double t294;
  double t382;
  double t24;
  double t430;
  double t435;
  double t454;
  double t539;
  double t307;
  double t308;
  double t318;
  double t428;
  double t1020;
  double t1118;
  double t387;
  double t389;
  double t42;
  double t544;
  double t661;
  double t506;
  double t519;
  double t2263;
  double t2321;
  double t2419;
  double t1894;
  double t797;
  double t1131;
  double t1388;
  double t1493;
  double t1528;
  double t1641;
  double t1749;
  double t1761;
  double t1980;
  double t2002;
  double t2460;
  double t2463;
  double t2544;
  double t2662;
  double t2712;
  double t2915;
  double t3063;
  double t3085;
  double t3243;
  double t3250;
  double t4008;
  double t4020;
  double t4028;
  double t4038;
  double t4039;
  double t4049;
  double t4053;
  double t4057;
  double t4073;
  double t4075;
  double t4077;
  double t4082;
  double t4091;
  double t4100;
  double t4149;
  double t4154;
  double t4166;
  double t3986;
  double t3993;
  double t4134;
  double t4171;
  double t4174;
  double t4186;
  double t4204;
  double t4220;
  double t4451;
  double t4454;
  double t4455;
  double t4464;
  double t4472;
  double t4511;
  double t4536;
  double t4544;
  double t4177;
  double t4236;
  double t4239;
  double t4321;
  double t4772;
  double t4796;
  double t4807;
  double t4809;
  double t4649;
  double t4670;
  double t4672;
  double t4986;
  double t4989;
  double t5004;
  double t5010;
  double t5011;
  double t4261;
  double t4263;
  double t4267;
  double t5243;
  double t5247;
  double t5253;
  double t5255;
  double t5304;
  double t5306;
  double t5308;
  double t5309;
  double t3958;
  double t3960;
  double t3965;
  double t3971;
  double t3972;
  double t3973;
  double t3974;
  double t3983;
  double t3984;
  double t5325;
  double t5326;
  double t5374;
  double t5375;
  double t5518;
  double t5522;
  double t5209;
  double t5211;
  double t5553;
  double t5558;
  double t5267;
  double t5272;
  t105 = Cos(var1[13]);
  t268 = Sin(var1[13]);
  t101 = Cos(var1[5]);
  t208 = 0.984808*t105;
  t275 = -0.173648*t268;
  t279 = t208 + t275;
  t294 = t101*t279;
  t382 = Sin(var1[5]);
  t24 = Cos(var1[3]);
  t430 = -0.173648*t105;
  t435 = -0.984808*t268;
  t454 = t430 + t435;
  t539 = Sin(var1[4]);
  t307 = 0.173648*t105;
  t308 = 0.984808*t268;
  t318 = t307 + t308;
  t428 = Sin(var1[3]);
  t1020 = t101*t318;
  t1118 = -1.*t279*t382;
  t387 = t318*t382;
  t389 = 0. + t294 + t387;
  t42 = Cos(var1[4]);
  t544 = t101*t454;
  t661 = t279*t382;
  t506 = -1.*t454*t382;
  t519 = t294 + t506;
  t2263 = -0.984808*t105;
  t2321 = 0.173648*t268;
  t2419 = t2263 + t2321;
  t1894 = 0. + t544 + t661;
  t797 = t544 + t661;
  t1131 = t1020 + t1118;
  t1388 = -1.*t101*t279;
  t1493 = -1.*t318*t382;
  t1528 = t1388 + t1493;
  t1641 = 0. + t1020 + t1118;
  t1749 = t539*t389;
  t1761 = 0. + t1749;
  t1980 = -1.*t101*t454;
  t2002 = t1980 + t1118;
  t2460 = t101*t2419;
  t2463 = t454*t382;
  t2544 = t2460 + t2463;
  t2662 = -1.*t2419*t382;
  t2712 = t544 + t2662;
  t2915 = 0. + t294 + t506;
  t3063 = t539*t1894;
  t3085 = 0. + t3063;
  t3243 = -1.*t42;
  t3250 = 0. + t3243;
  t4008 = -1.*t105;
  t4020 = 1. + t4008;
  t4028 = 0.12*t4020;
  t4038 = 0.11689*t105;
  t4039 = 0.0005589999999999762*t268;
  t4049 = 0. + t4028 + t4038 + t4039;
  t4053 = t101*t4049;
  t4057 = 0.4*t4020;
  t4073 = 0.400559*t105;
  t4075 = 0.0031100000000000017*t268;
  t4077 = 0. + t4057 + t4073 + t4075;
  t4082 = -1.*t4077*t382;
  t4091 = t4053 + t4082;
  t4100 = 0. + t539;
  t4149 = t101*t4077;
  t4154 = t4049*t382;
  t4166 = 0. + t4149 + t4154;
  t3986 = t42*t1894;
  t3993 = 0. + t3986;
  t4134 = 0.02441*t539;
  t4171 = t42*t4166;
  t4174 = 0. + t4134 + t4171;
  t4186 = -0.02441*t42;
  t4204 = t539*t4166;
  t4220 = 0. + t4186 + t4204;
  t4451 = 0.0031100000000000017*t105;
  t4454 = -0.0005589999999999762*t268;
  t4455 = t4451 + t4454;
  t4464 = t101*t4455;
  t4472 = 0.0005589999999999762*t105;
  t4511 = t4472 + t4075;
  t4536 = t4511*t382;
  t4544 = t4464 + t4536;
  t4177 = t4100*t4174;
  t4236 = t3250*t4220;
  t4239 = 0. + t4177 + t4236;
  t4321 = 0. + t4053 + t4082;
  t4772 = t4134 + t4171;
  t4796 = 0.02441*t42;
  t4807 = -1.*t539*t4166;
  t4809 = t4796 + t4807;
  t4649 = t101*t4511;
  t4670 = -1.*t4455*t382;
  t4672 = t4649 + t4670;
  t4986 = t42*t389;
  t4989 = 0. + t4986;
  t5004 = -1.*t4100*t4174;
  t5010 = -1.*t3250*t4220;
  t5011 = 0. + t5004 + t5010;
  t4261 = -1.*t101*t4077;
  t4263 = -1.*t4049*t382;
  t4267 = t4261 + t4263;
  t5243 = t2915*t4321;
  t5247 = t3993*t4174;
  t5253 = t3085*t4220;
  t5255 = t5243 + t5247 + t5253;
  t5304 = -1.*t1641*t4321;
  t5306 = -1.*t4174*t4989;
  t5308 = -1.*t4220*t1761;
  t5309 = t5304 + t5306 + t5308;
  t3958 = var2[5]*t42*t1131;
  t3960 = var2[13]*t42*t797;
  t3965 = -1.*var2[4]*t539*t389;
  t3971 = t3958 + t3960 + t3965;
  t3972 = var2[5]*t42*t519;
  t3973 = var2[13]*t42*t2544;
  t3974 = -1.*var2[4]*t539*t1894;
  t3983 = t3972 + t3973 + t3974;
  t3984 = var2[4]*t42;
  t5325 = t2915*t4672;
  t5326 = t4321*t2712;
  t5374 = -1.*t1641*t4672;
  t5375 = -1.*t519*t4321;
  t5518 = t1894*t4166;
  t5522 = 0. + t5518 + t5243;
  t5209 = t2915*t4267;
  t5211 = t2002*t4321;
  t5553 = -1.*t4166*t389;
  t5558 = 0. + t5304 + t5553;
  t5267 = -1.*t1641*t4267;
  t5272 = -1.*t4321*t1528;
  p_output1[0]=(-1.*t1641*t24 - 1.*t1761*t428)*var2[3] + t24*t389*t42*var2[4] + (-1.*t1528*t428 + t1131*t24*t539)*var2[5] + (-1.*t428*t519 + t24*t539*t797)*var2[13];
  p_output1[1]=(-1.*t24*t2915 - 1.*t3085*t428)*var2[3] + t1894*t24*t42*var2[4] + (-1.*t2002*t428 + t24*t519*t539)*var2[5] + (-1.*t2712*t428 + t24*t2544*t539)*var2[13];
  p_output1[2]=-1.*t3250*t428*var2[3] + t24*t539*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t1761*t24 - 1.*t1641*t428)*var2[3] + t389*t42*t428*var2[4] + (t1528*t24 + t1131*t428*t539)*var2[5] + (t24*t519 + t428*t539*t797)*var2[13];
  p_output1[7]=(t24*t3085 - 1.*t2915*t428)*var2[3] + t1894*t42*t428*var2[4] + (t2002*t24 + t428*t519*t539)*var2[5] + (t24*t2712 + t2544*t428*t539)*var2[13];
  p_output1[8]=t24*t3250*var2[3] + t428*t539*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3971;
  p_output1[13]=t3983;
  p_output1[14]=t3984;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t42*(-1.*t3993*t4174 - 1.*t3085*t4220 - 1.*t2915*t4321) - 1.*t1894*t4239*t539 + t4100*(-1.*t1894*t42*t4220 - 1.*t3085*t4772 - 1.*t3993*t4809 + t1894*t4174*t539) + t3993*(t4174*t42 + t3250*t4772 + t4100*t4809 + t4220*t539))*var2[4] + (t42*t4239*t519 + t3993*(t4091*t4100*t42 + t3250*t4091*t539) + t4100*(-1.*t3993*t4091*t42 - 1.*t2915*t4267 - 1.*t2002*t4321 - 1.*t4174*t42*t519 - 1.*t3085*t4091*t539 - 1.*t4220*t519*t539))*var2[5] + (t2544*t42*t4239 + t4100*(-1.*t2544*t4174*t42 - 1.*t2712*t4321 - 1.*t3993*t42*t4544 - 1.*t2915*t4672 - 1.*t2544*t4220*t539 - 1.*t3085*t4544*t539) + t3993*(t4100*t42*t4544 + t3250*t4544*t539))*var2[13];
  p_output1[19]=(t42*(t1761*t4220 + t1641*t4321 + t4174*t4989) - 1.*t389*t5011*t539 + t4100*(t389*t42*t4220 + t1761*t4772 + t4809*t4989 - 1.*t389*t4174*t539) + t4989*(-1.*t4174*t42 - 1.*t3250*t4772 - 1.*t4100*t4809 - 1.*t4220*t539))*var2[4] + (t1131*t42*t5011 + t4989*(-1.*t4091*t4100*t42 - 1.*t3250*t4091*t539) + t4100*(t1131*t4174*t42 + t1641*t4267 + t1528*t4321 + t4091*t42*t4989 + t1761*t4091*t539 + t1131*t4220*t539))*var2[5] + (t4989*(-1.*t4100*t42*t4544 - 1.*t3250*t4544*t539) + t42*t5011*t797 + t4100*(t1641*t4672 + t42*t4544*t4989 + t4321*t519 + t1761*t4544*t539 + t4174*t42*t797 + t4220*t539*t797))*var2[13];
  p_output1[20]=(-1.*t389*t5255*t539 - 1.*t1894*t5309*t539 + t4989*(t1894*t42*t4220 + t3085*t4772 + t3993*t4809 - 1.*t1894*t4174*t539) + t3993*(-1.*t389*t42*t4220 - 1.*t1761*t4772 - 1.*t4809*t4989 + t389*t4174*t539))*var2[4] + (t1131*t42*t5255 + t42*t519*t5309 + t3993*(-1.*t1131*t4174*t42 - 1.*t4091*t42*t4989 + t5267 + t5272 - 1.*t1761*t4091*t539 - 1.*t1131*t4220*t539) + t4989*(t3993*t4091*t42 + t4174*t42*t519 + t5209 + t5211 + t3085*t4091*t539 + t4220*t519*t539))*var2[5] + (t2544*t42*t5309 + t4989*(t2544*t4174*t42 + t3993*t42*t4544 + t5325 + t5326 + t2544*t4220*t539 + t3085*t4544*t539) + t42*t5255*t797 + t3993*(-1.*t42*t4544*t4989 + t5374 + t5375 - 1.*t1761*t4544*t539 - 1.*t4174*t42*t797 - 1.*t4220*t539*t797))*var2[13];
  p_output1[21]=t3971;
  p_output1[22]=t3983;
  p_output1[23]=t3984;
  p_output1[24]=0.02441*t2002*var2[5] + 0.02441*t2712*var2[13];
  p_output1[25]=-0.02441*t1528*var2[5] - 0.02441*t519*var2[13];
  p_output1[26]=(t1641*(t1894*t4091 + t4166*t519 + t5209 + t5211) + t2915*(-1.*t389*t4091 - 1.*t1131*t4166 + t5267 + t5272) + t1528*t5522 + t2002*t5558)*var2[5] + (t1641*(t2544*t4166 + t1894*t4544 + t5325 + t5326) + t519*t5522 + t2712*t5558 + t2915*(-1.*t389*t4544 + t5374 + t5375 - 1.*t4166*t797))*var2[13];
  p_output1[27]=t1528*var2[5] + t519*var2[13];
  p_output1[28]=t2002*var2[5] + t2712*var2[13];
  p_output1[29]=0;
  p_output1[30]=-1.*(-1.*t2419*t4077 - 1.*t279*t4511 - 1.*t4049*t454 - 1.*t4455*t454)*var2[13];
  p_output1[31]=-1.*(t279*t4049 + t279*t4455 + t318*t4511 + t4077*t454)*var2[13];
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



void dJb_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

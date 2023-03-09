/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_left_hip_roll_src.h"

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
  double t103;
  double t2094;
  double t2209;
  double t2693;
  double t2207;
  double t2258;
  double t2572;
  double t2017;
  double t2724;
  double t2739;
  double t2938;
  double t4181;
  double t4358;
  double t4389;
  double t2609;
  double t417;
  double t970;
  double t4763;
  double t4964;
  double t4998;
  double t5005;
  double t4797;
  double t4815;
  double t4817;
  double t422;
  double t1005;
  double t1171;
  double t1454;
  double t3023;
  double t3036;
  double t3043;
  double t3295;
  double t3320;
  double t3416;
  double t3538;
  double t3675;
  double t3874;
  double t3924;
  double t4914;
  double t5035;
  double t5043;
  double t5083;
  double t5158;
  double t5165;
  double t1948;
  double t3937;
  double t4060;
  double t4445;
  double t4467;
  double t4471;
  double t4488;
  double t4507;
  double t4555;
  double t4559;
  double t4648;
  double t4746;
  double t4758;
  double t5407;
  double t5417;
  double t5424;
  double t5398;
  double t5399;
  double t5401;
  double t5301;
  double t5304;
  double t5321;
  double t5406;
  double t5425;
  double t5431;
  double t5439;
  double t5455;
  double t5456;
  double t5558;
  double t5559;
  double t5561;
  double t5568;
  double t5573;
  double t5578;
  double t5433;
  double t5498;
  double t5502;
  double t5510;
  double t5520;
  double t5522;
  double t5545;
  double t5551;
  double t5555;
  double t5649;
  double t5650;
  double t5654;
  double t5658;
  double t5662;
  double t5668;
  double t5719;
  double t5723;
  double t5725;
  double t5713;
  double t5714;
  double t5715;
  double t5625;
  double t5626;
  double t5627;
  double t5717;
  double t5728;
  double t5731;
  double t5747;
  double t5752;
  double t5780;
  double t5847;
  double t5854;
  double t5858;
  double t5861;
  double t5865;
  double t5866;
  double t5890;
  double t5899;
  double t5904;
  double t5917;
  double t5918;
  double t5929;
  double t5997;
  double t6006;
  double t6009;
  double t6016;
  double t6025;
  double t6029;
  double t6033;
  double t6034;
  double t5962;
  double t5965;
  double t5974;
  double t5976;
  double t5980;
  double t5982;
  double t5983;
  double t6079;
  double t6081;
  double t6087;
  double t6094;
  double t6055;
  double t6057;
  double t6060;
  double t6061;
  double t6062;
  double t6063;
  double t5734;
  double t5789;
  double t5797;
  double t5803;
  double t5811;
  double t5812;
  double t5860;
  double t5867;
  double t5874;
  double t5882;
  double t5884;
  double t5886;
  double t6131;
  double t6132;
  double t6133;
  double t6170;
  double t6171;
  double t6178;
  double t6222;
  double t6224;
  double t6225;
  double t6162;
  double t6165;
  double t6166;
  double t6168;
  double t6273;
  double t6279;
  double t6280;
  double t6214;
  double t6231;
  double t6236;
  double t6237;
  double t6243;
  double t6245;
  double t6249;
  double t6253;
  double t6320;
  double t6321;
  double t6323;
  t103 = Cos(var1[4]);
  t2094 = Cos(var1[6]);
  t2209 = Sin(var1[6]);
  t2693 = Sin(var1[5]);
  t2207 = 0.930418*t2094;
  t2258 = 0.366501*t2209;
  t2572 = t2207 + t2258;
  t2017 = Cos(var1[5]);
  t2724 = -0.366501*t2094;
  t2739 = 0.930418*t2209;
  t2938 = t2724 + t2739;
  t4181 = 0.366501*t2094;
  t4358 = -0.930418*t2209;
  t4389 = t4181 + t4358;
  t2609 = t2017*t2572;
  t417 = Sin(var1[3]);
  t970 = Sin(var1[4]);
  t4763 = Cos(var1[3]);
  t4964 = -1.*t2017*t417*t970;
  t4998 = t4763*t2693;
  t5005 = t4964 + t4998;
  t4797 = -1.*t4763*t2017;
  t4815 = -1.*t417*t970*t2693;
  t4817 = t4797 + t4815;
  t422 = -1.*var2[5];
  t1005 = 0. + t970;
  t1171 = var2[3]*t1005;
  t1454 = 0. + t422 + var2[6] + t1171;
  t3023 = t2693*t2938;
  t3036 = 0. + t2609 + t3023;
  t3043 = t103*t3036;
  t3295 = 0. + t3043;
  t3320 = var2[3]*t3295;
  t3416 = -1.*t2693*t2572;
  t3538 = t2017*t2938;
  t3675 = 0. + t3416 + t3538;
  t3874 = var2[4]*t3675;
  t3924 = 0. + t3320 + t3874;
  t4914 = t2094*t4817;
  t5035 = -1.*t5005*t2209;
  t5043 = t4914 + t5035;
  t5083 = t2094*t5005;
  t5158 = t4817*t2209;
  t5165 = t5083 + t5158;
  t1948 = 0.00077*t1454;
  t3937 = 0.00001*t3924;
  t4060 = t1948 + t3937;
  t4445 = t2017*t4389;
  t4467 = t2693*t2572;
  t4471 = 0. + t4445 + t4467;
  t4488 = t103*t4471;
  t4507 = 0. + t4488;
  t4555 = var2[3]*t4507;
  t4559 = -1.*t2693*t4389;
  t4648 = 0. + t4559 + t2609;
  t4746 = var2[4]*t4648;
  t4758 = 0. + t4555 + t4746;
  t5407 = t4763*t2017*t970;
  t5417 = t417*t2693;
  t5424 = t5407 + t5417;
  t5398 = -1.*t2017*t417;
  t5399 = t4763*t970*t2693;
  t5401 = t5398 + t5399;
  t5301 = 0.00001*t1454;
  t5304 = 0.00102*t3924;
  t5321 = t5301 + t5304;
  t5406 = t2094*t5401;
  t5425 = -1.*t5424*t2209;
  t5431 = t5406 + t5425;
  t5439 = t2094*t5424;
  t5455 = t5401*t2209;
  t5456 = t5439 + t5455;
  t5558 = t4763*t103*t2094*t2693;
  t5559 = -1.*t4763*t103*t2017*t2209;
  t5561 = t5558 + t5559;
  t5568 = t4763*t103*t2017*t2094;
  t5573 = t4763*t103*t2693*t2209;
  t5578 = t5568 + t5573;
  t5433 = 0.930418*t5431;
  t5498 = 0.366501*t5456;
  t5502 = t5433 + t5498;
  t5510 = -0.366501*t5431;
  t5520 = 0.930418*t5456;
  t5522 = t5510 + t5520;
  t5545 = 0.00077*var2[3]*t103;
  t5551 = -0.00001*var2[3]*t970*t3036;
  t5555 = t5545 + t5551;
  t5649 = t103*t2094*t417*t2693;
  t5650 = -1.*t103*t2017*t417*t2209;
  t5654 = t5649 + t5650;
  t5658 = t103*t2017*t2094*t417;
  t5662 = t103*t417*t2693*t2209;
  t5668 = t5658 + t5662;
  t5719 = t2017*t417*t970;
  t5723 = -1.*t4763*t2693;
  t5725 = t5719 + t5723;
  t5713 = t4763*t2017;
  t5714 = t417*t970*t2693;
  t5715 = t5713 + t5714;
  t5625 = 0.00001*var2[3]*t103;
  t5626 = -0.00102*var2[3]*t970*t3036;
  t5627 = t5625 + t5626;
  t5717 = t2094*t5715;
  t5728 = -1.*t5725*t2209;
  t5731 = t5717 + t5728;
  t5747 = t2094*t5725;
  t5752 = t5715*t2209;
  t5780 = t5747 + t5752;
  t5847 = t103*t2094*t2693;
  t5854 = -1.*t103*t2017*t2209;
  t5858 = t5847 + t5854;
  t5861 = t103*t2017*t2094;
  t5865 = t103*t2693*t2209;
  t5866 = t5861 + t5865;
  t5890 = -1.*t2094*t970*t2693;
  t5899 = t2017*t970*t2209;
  t5904 = t5890 + t5899;
  t5917 = -1.*t2017*t2094*t970;
  t5918 = -1.*t970*t2693*t2209;
  t5929 = t5917 + t5918;
  t5997 = t2017*t417;
  t6006 = -1.*t4763*t970*t2693;
  t6009 = t5997 + t6006;
  t6016 = t2094*t6009;
  t6025 = t5424*t2209;
  t6029 = t6016 + t6025;
  t6033 = -1.*t6009*t2209;
  t6034 = t5439 + t6033;
  t5962 = t3416 + t3538;
  t5965 = var2[3]*t103*t5962;
  t5974 = -1.*t2017*t2572;
  t5976 = -1.*t2693*t2938;
  t5980 = t5974 + t5976;
  t5982 = var2[4]*t5980;
  t5983 = t5965 + t5982;
  t6079 = t5725*t2209;
  t6081 = t4914 + t6079;
  t6087 = -1.*t4817*t2209;
  t6094 = t5747 + t6087;
  t6055 = t4559 + t2609;
  t6057 = var2[3]*t103*t6055;
  t6060 = -1.*t2017*t4389;
  t6061 = t6060 + t3416;
  t6062 = var2[4]*t6061;
  t6063 = t6057 + t6062;
  t5734 = 0.930418*t5731;
  t5789 = 0.366501*t5780;
  t5797 = t5734 + t5789;
  t5803 = -0.366501*t5731;
  t5811 = 0.930418*t5780;
  t5812 = t5803 + t5811;
  t5860 = 0.930418*t5858;
  t5867 = 0.366501*t5866;
  t5874 = t5860 + t5867;
  t5882 = -0.366501*t5858;
  t5884 = 0.930418*t5866;
  t5886 = t5882 + t5884;
  t6131 = -1.*t103*t2094*t2693;
  t6132 = t103*t2017*t2209;
  t6133 = t6131 + t6132;
  t6170 = -1.*t2094*t5424;
  t6171 = -1.*t5401*t2209;
  t6178 = t6170 + t6171;
  t6222 = -0.930418*t2094;
  t6224 = -0.366501*t2209;
  t6225 = t6222 + t6224;
  t6162 = var2[4]*t6055;
  t6165 = t4445 + t4467;
  t6166 = var2[3]*t103*t6165;
  t6168 = t6162 + t6166;
  t6273 = -1.*t2094*t5725;
  t6279 = -1.*t5715*t2209;
  t6280 = t6273 + t6279;
  t6214 = t2693*t4389;
  t6231 = t2017*t6225;
  t6236 = t6214 + t6231;
  t6237 = var2[3]*t103*t6236;
  t6243 = -1.*t2693*t6225;
  t6245 = t4445 + t6243;
  t6249 = var2[4]*t6245;
  t6253 = t6237 + t6249;
  t6320 = -1.*t103*t2017*t2094;
  t6321 = -1.*t103*t2693*t2209;
  t6323 = t6320 + t6321;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t103*t4060*t417 + 0.00115*t4758*(0.930418*t5043 + 0.366501*t5165) + (-0.366501*t5043 + 0.930418*t5165)*t5321;
  p_output1[10]=-1.*t103*t4060*t4763 + 0.00115*t4758*t5502 + t5321*t5522;
  p_output1[11]=0;
  p_output1[12]=-1.*t103*t4763*t5555 + 0.00115*t4758*(0.930418*t5561 + 0.366501*t5578) + t5321*(-0.366501*t5561 + 0.930418*t5578) + t5522*t5627 + t4060*t4763*t970 - 0.00115*t4471*t5502*t970*var2[3];
  p_output1[13]=-1.*t103*t417*t5555 + 0.00115*t4758*(0.930418*t5654 + 0.366501*t5668) + t5321*(-0.366501*t5654 + 0.930418*t5668) + t5627*t5812 + t4060*t417*t970 - 0.00115*t4471*t5797*t970*var2[3];
  p_output1[14]=t103*t4060 + t5627*t5886 + 0.00115*t4758*(0.930418*t5904 + 0.366501*t5929) + t5321*(-0.366501*t5904 + 0.930418*t5929) + t5555*t970 - 0.00115*t4471*t5874*t970*var2[3];
  p_output1[15]=-0.00001*t103*t4763*t5983 + 0.00102*t5522*t5983 + t5321*(0.930418*t6029 - 0.366501*t6034) + 0.00115*t4758*(0.366501*t6029 + 0.930418*t6034) + 0.00115*t5502*t6063;
  p_output1[16]=-0.00001*t103*t417*t5983 + 0.00102*t5812*t5983 + 0.00115*t5797*t6063 + t5321*(0.930418*t6081 - 0.366501*t6094) + 0.00115*t4758*(0.366501*t6081 + 0.930418*t6094);
  p_output1[17]=0.00102*t5886*t5983 + 0.00115*t5874*t6063 + 0.00115*t4758*(t5884 + 0.366501*t6133) + t5321*(-0.366501*t5866 + 0.930418*t6133) + 0.00001*t5983*t970;
  p_output1[18]=-0.00001*t103*t4763*t6168 + 0.00102*t5522*t6168 + t5321*(t5433 - 0.366501*t6178) + 0.00115*t4758*(0.366501*t5431 + 0.930418*t6178) + 0.00115*t5502*t6253;
  p_output1[19]=-0.00001*t103*t417*t6168 + 0.00102*t5812*t6168 + 0.00115*t5797*t6253 + t5321*(t5734 - 0.366501*t6280) + 0.00115*t4758*(0.366501*t5731 + 0.930418*t6280);
  p_output1[20]=0.00102*t5886*t6168 + 0.00115*t5874*t6253 + t5321*(t5860 - 0.366501*t6323) + 0.00115*t4758*(0.366501*t5858 + 0.930418*t6323) + 0.00001*t6168*t970;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
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
}



void Jq_AMWorld_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_right_shoulder_roll_src.h"

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
  double t1062;
  double t202;
  double t387;
  double t483;
  double t497;
  double t792;
  double t381;
  double t1637;
  double t756;
  double t805;
  double t952;
  double t2084;
  double t1404;
  double t1576;
  double t1618;
  double t1621;
  double t2134;
  double t2155;
  double t2198;
  double t2312;
  double t2321;
  double t2322;
  double t2697;
  double t2699;
  double t2725;
  double t2910;
  double t2948;
  double t3001;
  double t3170;
  double t3213;
  double t3215;
  double t3770;
  double t3773;
  double t3779;
  double t2342;
  double t2660;
  double t2664;
  double t2671;
  double t2848;
  double t2859;
  double t3931;
  double t3939;
  double t3966;
  double t3022;
  double t3029;
  double t3054;
  double t3373;
  double t3647;
  double t3656;
  double t3660;
  double t3698;
  double t3700;
  double t3732;
  double t1401;
  double t1543;
  double t1650;
  double t1654;
  double t1671;
  double t1691;
  double t1721;
  double t1879;
  double t1912;
  double t1929;
  double t1979;
  double t2066;
  double t2124;
  double t3622;
  double t3625;
  double t3631;
  double t3684;
  double t3742;
  double t3755;
  double t4107;
  double t4282;
  double t4284;
  double t4298;
  double t4304;
  double t4315;
  double t4317;
  double t4318;
  double t4344;
  double t4001;
  double t3872;
  double t3884;
  double t3885;
  double t2298;
  double t2329;
  double t2330;
  double t2365;
  double t2404;
  double t2435;
  double t2536;
  double t2547;
  double t2588;
  double t3168;
  double t3242;
  double t3290;
  double t3317;
  double t3332;
  double t3369;
  double t3375;
  double t3447;
  double t3514;
  double t3563;
  double t4564;
  double t4572;
  double t4576;
  double t4577;
  double t4581;
  double t4584;
  double t4601;
  double t4611;
  double t3788;
  double t3820;
  double t3826;
  double t3846;
  double t3853;
  double t3887;
  double t3893;
  double t5117;
  double t5119;
  double t5124;
  double t3076;
  double t4112;
  double t4118;
  double t4123;
  double t4125;
  double t4127;
  double t4135;
  double t4726;
  double t4752;
  double t4767;
  double t4770;
  double t4782;
  double t4857;
  double t4864;
  double t4875;
  double t4879;
  double t4884;
  double t4893;
  double t4895;
  double t4900;
  double t4902;
  double t4906;
  double t4907;
  double t4909;
  double t4911;
  double t4915;
  double t4917;
  double t4919;
  double t4228;
  double t4229;
  double t4231;
  double t4236;
  double t4241;
  double t4247;
  double t4255;
  double t4268;
  double t5051;
  double t5055;
  double t5058;
  double t5064;
  double t5066;
  double t5067;
  double t5069;
  double t4051;
  double t4054;
  double t4061;
  double t2835;
  double t3019;
  double t3056;
  double t3064;
  double t3093;
  double t3127;
  double t3150;
  double t4509;
  double t4521;
  double t4527;
  double t4534;
  double t4538;
  double t4541;
  double t4542;
  double t4553;
  double t3907;
  double t3990;
  double t4016;
  double t4022;
  double t4050;
  double t4065;
  double t4074;
  double t5125;
  double t5136;
  double t5138;
  double t5139;
  double t5143;
  double t5146;
  double t5149;
  double t5150;
  double t5152;
  double t5154;
  double t5256;
  double t5258;
  double t5269;
  double t5204;
  double t5206;
  double t5216;
  double t5217;
  double t5221;
  double t5231;
  double t5232;
  double t5233;
  double t5239;
  double t5245;
  double t5246;
  double t4922;
  double t4924;
  double t4925;
  double t4930;
  double t4939;
  double t4945;
  double t4969;
  double t4974;
  double t4978;
  double t4979;
  double t4995;
  t1062 = Sin(var1[3]);
  t202 = Cos(var1[4]);
  t387 = Cos(var1[24]);
  t483 = -1.*t387;
  t497 = 1. + t483;
  t792 = Sin(var1[24]);
  t381 = Cos(var1[5]);
  t1637 = Sin(var1[5]);
  t756 = 0.4*t497;
  t805 = -0.12*t792;
  t952 = 0. + t756 + t805;
  t2084 = Cos(var1[3]);
  t1404 = Sin(var1[4]);
  t1576 = -0.12*t497;
  t1618 = -0.4*t792;
  t1621 = 0. + t1576 + t1618;
  t2134 = -1.*t2084*t381*t1404;
  t2155 = -1.*t1062*t1637;
  t2198 = t2134 + t2155;
  t2312 = t381*t1062;
  t2321 = -1.*t2084*t1404*t1637;
  t2322 = t2312 + t2321;
  t2697 = -1.*t381*t1062*t1404;
  t2699 = t2084*t1637;
  t2725 = t2697 + t2699;
  t2910 = -1.*t2084*t381;
  t2948 = -1.*t1062*t1404*t1637;
  t3001 = t2910 + t2948;
  t3170 = t2084*t381;
  t3213 = t1062*t1404*t1637;
  t3215 = t3170 + t3213;
  t3770 = t2084*t381*t1404;
  t3773 = t1062*t1637;
  t3779 = t3770 + t3773;
  t2342 = t387*t2322;
  t2660 = -0.12*t387;
  t2664 = 0.4*t792;
  t2671 = t2660 + t2664;
  t2848 = -0.4*t387;
  t2859 = t2848 + t805;
  t3931 = -1.*t381*t1062;
  t3939 = t2084*t1404*t1637;
  t3966 = t3931 + t3939;
  t3022 = -1.*t792*t2725;
  t3029 = t387*t3001;
  t3054 = t3022 + t3029;
  t3373 = t387*t2725;
  t3647 = -1.*t2084*t202*t381*t792;
  t3656 = t387*t2084*t202*t1637;
  t3660 = t3647 + t3656;
  t3698 = t387*t2084*t202*t381;
  t3700 = t2084*t202*t792*t1637;
  t3732 = t3698 + t3700;
  t1401 = -1.*t202*t381*t952*t1062;
  t1543 = -0.02441*t1062*t1404;
  t1650 = -1.*t202*t1621*t1062*t1637;
  t1654 = t202*t381*t792*t1062;
  t1671 = -1.*t387*t202*t1062*t1637;
  t1691 = t1654 + t1671;
  t1721 = -0.11689*t1691;
  t1879 = -1.*t387*t202*t381*t1062;
  t1912 = -1.*t202*t792*t1062*t1637;
  t1929 = t1879 + t1912;
  t1979 = 0.400559*t1929;
  t2066 = t1401 + t1543 + t1650 + t1721 + t1979;
  t2124 = 0.02441*t2084*t202;
  t3622 = t2084*t202*t381*t952;
  t3625 = 0.02441*t2084*t1404;
  t3631 = t2084*t202*t1621*t1637;
  t3684 = -0.11689*t3660;
  t3742 = 0.400559*t3732;
  t3755 = t3622 + t3625 + t3631 + t3684 + t3742;
  t4107 = 0.02441*t202*t1062;
  t4282 = t2084*t202*t381*t1621;
  t4284 = -1.*t2084*t202*t952*t1637;
  t4298 = t2084*t202*t381*t792;
  t4304 = -1.*t387*t2084*t202*t1637;
  t4315 = t4298 + t4304;
  t4317 = 0.400559*t4315;
  t4318 = -0.11689*t3732;
  t4344 = t4282 + t4284 + t4317 + t4318;
  t4001 = -1.*t792*t3779;
  t3872 = t387*t3779;
  t3884 = -1.*t792*t2322;
  t3885 = t3872 + t3884;
  t2298 = t952*t2198;
  t2329 = t1621*t2322;
  t2330 = -1.*t792*t2198;
  t2365 = t2330 + t2342;
  t2404 = -0.11689*t2365;
  t2435 = t387*t2198;
  t2536 = t792*t2322;
  t2547 = t2435 + t2536;
  t2588 = 0.400559*t2547;
  t3168 = t1621*t2725;
  t3242 = t952*t3215;
  t3290 = t792*t2725;
  t3317 = t387*t3215;
  t3332 = t3290 + t3317;
  t3369 = 0.400559*t3332;
  t3375 = -1.*t792*t3215;
  t3447 = t3373 + t3375;
  t3514 = -0.11689*t3447;
  t3563 = t3168 + t3242 + t3369 + t3514;
  t4564 = t202*t381*t1621*t1062;
  t4572 = -1.*t202*t952*t1062*t1637;
  t4576 = 0.400559*t1691;
  t4577 = t387*t202*t381*t1062;
  t4581 = t202*t792*t1062*t1637;
  t4584 = t4577 + t4581;
  t4601 = -0.11689*t4584;
  t4611 = t4564 + t4572 + t4576 + t4601;
  t3788 = t1621*t3779;
  t3820 = t952*t2322;
  t3826 = t792*t3779;
  t3846 = t3826 + t2342;
  t3853 = 0.400559*t3846;
  t3887 = -0.11689*t3885;
  t3893 = t3788 + t3820 + t3853 + t3887;
  t5117 = t381*t1062*t1404;
  t5119 = -1.*t2084*t1637;
  t5124 = t5117 + t5119;
  t3076 = -1.*t792*t3001;
  t4112 = t952*t2725;
  t4118 = t1621*t3001;
  t4123 = -0.11689*t3054;
  t4125 = t792*t3001;
  t4127 = t3373 + t4125;
  t4135 = 0.400559*t4127;
  t4726 = -1.*t202*t381*t952;
  t4752 = -1.*t202*t1621*t1637;
  t4767 = t202*t381*t792;
  t4770 = -1.*t387*t202*t1637;
  t4782 = t4767 + t4770;
  t4857 = -0.11689*t4782;
  t4864 = -1.*t387*t202*t381;
  t4875 = -1.*t202*t792*t1637;
  t4879 = t4864 + t4875;
  t4884 = 0.400559*t4879;
  t4893 = -1.*t381*t1621*t1404;
  t4895 = t952*t1404*t1637;
  t4900 = -1.*t381*t792*t1404;
  t4902 = t387*t1404*t1637;
  t4906 = t4900 + t4902;
  t4907 = 0.400559*t4906;
  t4909 = -1.*t387*t381*t1404;
  t4911 = -1.*t792*t1404*t1637;
  t4915 = t4909 + t4911;
  t4917 = -0.11689*t4915;
  t4919 = t4893 + t4895 + t4907 + t4917;
  t4228 = t2084*t202*t381*t2671;
  t4229 = t2084*t202*t2859*t1637;
  t4231 = 0.400559*t3660;
  t4236 = -1.*t387*t2084*t202*t381;
  t4241 = -1.*t2084*t202*t792*t1637;
  t4247 = t4236 + t4241;
  t4255 = -0.11689*t4247;
  t4268 = t4228 + t4229 + t4231 + t4255;
  t5051 = t2859*t3779;
  t5055 = t2671*t2322;
  t5058 = -1.*t387*t2322;
  t5064 = t4001 + t5058;
  t5066 = -0.11689*t5064;
  t5067 = 0.400559*t3885;
  t5069 = t5051 + t5055 + t5066 + t5067;
  t4051 = -1.*t387*t3779;
  t4054 = -1.*t792*t3966;
  t4061 = t4051 + t4054;
  t2835 = t2671*t2725;
  t3019 = t2859*t3001;
  t3056 = 0.400559*t3054;
  t3064 = -1.*t387*t2725;
  t3093 = t3064 + t3076;
  t3127 = -0.11689*t3093;
  t3150 = t2835 + t3019 + t3056 + t3127;
  t4509 = t202*t381*t2671*t1062;
  t4521 = t202*t2859*t1062*t1637;
  t4527 = -1.*t202*t381*t792*t1062;
  t4534 = t387*t202*t1062*t1637;
  t4538 = t4527 + t4534;
  t4541 = 0.400559*t4538;
  t4542 = -0.11689*t1929;
  t4553 = t4509 + t4521 + t4541 + t4542;
  t3907 = t2671*t3779;
  t3990 = t2859*t3966;
  t4016 = t387*t3966;
  t4022 = t4001 + t4016;
  t4050 = 0.400559*t4022;
  t4065 = -0.11689*t4061;
  t4074 = t3907 + t3990 + t4050 + t4065;
  t5125 = t2859*t5124;
  t5136 = t2671*t3001;
  t5138 = -1.*t792*t5124;
  t5139 = -1.*t387*t3001;
  t5143 = t5138 + t5139;
  t5146 = -0.11689*t5143;
  t5149 = t387*t5124;
  t5150 = t5149 + t3076;
  t5152 = 0.400559*t5150;
  t5154 = t5125 + t5136 + t5146 + t5152;
  t5256 = 0.4*t387;
  t5258 = 0.12*t792;
  t5269 = t5256 + t5258;
  t5204 = t202*t381*t2859;
  t5206 = -1.*t202*t2671*t1637;
  t5216 = -1.*t202*t381*t792;
  t5217 = t387*t202*t1637;
  t5221 = t5216 + t5217;
  t5231 = -0.11689*t5221;
  t5232 = t387*t202*t381;
  t5233 = t202*t792*t1637;
  t5239 = t5232 + t5233;
  t5245 = 0.400559*t5239;
  t5246 = t5204 + t5206 + t5231 + t5245;
  t4922 = -1.*t381*t2671*t1404;
  t4924 = -1.*t2859*t1404*t1637;
  t4925 = t381*t792*t1404;
  t4930 = -1.*t387*t1404*t1637;
  t4939 = t4925 + t4930;
  t4945 = 0.400559*t4939;
  t4969 = t387*t381*t1404;
  t4974 = t792*t1404*t1637;
  t4978 = t4969 + t4974;
  t4979 = -0.11689*t4978;
  t4995 = t4922 + t4924 + t4945 + t4979;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2124 + t2298 + t2329 + t2404 + t2588)*var2[3] + t2066*var2[4] + t3563*var2[5] + t3150*var2[24];
  p_output1[10]=(t4107 + t4112 + t4118 + t4123 + t4135)*var2[3] + t3755*var2[4] + t3893*var2[5] + t4074*var2[24];
  p_output1[11]=0;
  p_output1[12]=t2066*var2[3] + (-1.*t1404*t1621*t1637*t2084 + t2124 + 0.400559*(-1.*t1404*t2084*t381*t387 - 1.*t1404*t1637*t2084*t792) - 0.11689*(-1.*t1404*t1637*t2084*t387 + t1404*t2084*t381*t792) - 1.*t1404*t2084*t381*t952)*var2[4] + t4344*var2[5] + t4268*var2[24];
  p_output1[13]=t3755*var2[3] + (-1.*t1062*t1404*t1621*t1637 + t4107 + 0.400559*(-1.*t1062*t1404*t381*t387 - 1.*t1062*t1404*t1637*t792) - 0.11689*(-1.*t1062*t1404*t1637*t387 + t1062*t1404*t381*t792) - 1.*t1062*t1404*t381*t952)*var2[4] + t4611*var2[5] + t4553*var2[24];
  p_output1[14]=(-0.02441*t1404 + t4726 + t4752 + t4857 + t4884)*var2[4] + t4919*var2[5] + t4995*var2[24];
  p_output1[15]=t3563*var2[3] + t4344*var2[4] + (t2298 + t2329 + t2404 + t2588)*var2[5] + t5069*var2[24];
  p_output1[16]=t3893*var2[3] + t4611*var2[4] + (t4112 + t4118 + t4123 + t4135)*var2[5] + t5154*var2[24];
  p_output1[17]=t4919*var2[4] + (t4726 + t4752 + t4857 + t4884)*var2[5] + t5246*var2[24];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[72]=t3150*var2[3] + t4268*var2[4] + t5069*var2[5] + (t2671*t3966 - 0.11689*(t3826 - 1.*t387*t3966) + 0.400559*t4061 + t3779*t5269)*var2[24];
  p_output1[73]=t4074*var2[3] + t4553*var2[4] + t5154*var2[5] + (t2671*t3215 + 0.400559*(t3375 - 1.*t387*t5124) + t5124*t5269 - 0.11689*(-1.*t3215*t387 + t5124*t792))*var2[24];
  p_output1[74]=t4995*var2[4] + t5246*var2[5] + (t1637*t202*t2671 + t4857 + t4884 + t202*t381*t5269)*var2[24];
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



void dJp_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

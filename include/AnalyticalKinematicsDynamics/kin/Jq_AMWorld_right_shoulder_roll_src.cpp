/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_right_shoulder_roll_src.h"

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
  double t1126;
  double t270;
  double t603;
  double t725;
  double t1189;
  double t2132;
  double t1004;
  double t1358;
  double t1990;
  double t193;
  double t2282;
  double t2290;
  double t2786;
  double t4169;
  double t4215;
  double t4282;
  double t3840;
  double t3868;
  double t3897;
  double t4518;
  double t4065;
  double t4692;
  double t4724;
  double t4783;
  double t3523;
  double t3536;
  double t3678;
  double t3776;
  double t4297;
  double t4370;
  double t4477;
  double t4521;
  double t4530;
  double t4567;
  double t4570;
  double t4594;
  double t4639;
  double t4660;
  double t4786;
  double t4791;
  double t4792;
  double t4810;
  double t4821;
  double t4822;
  double t4836;
  double t4839;
  double t4841;
  double t4867;
  double t2005;
  double t2806;
  double t2904;
  double t3137;
  double t3181;
  double t3213;
  double t5103;
  double t5105;
  double t5115;
  double t5130;
  double t5133;
  double t5136;
  double t3803;
  double t4685;
  double t4879;
  double t4894;
  double t4951;
  double t4954;
  double t4970;
  double t4988;
  double t5129;
  double t5150;
  double t5171;
  double t5192;
  double t5204;
  double t5207;
  double t5073;
  double t5078;
  double t5080;
  double t5081;
  double t5181;
  double t5224;
  double t5233;
  double t5249;
  double t5250;
  double t5252;
  double t5331;
  double t5334;
  double t5337;
  double t5343;
  double t5347;
  double t5348;
  double t5267;
  double t5278;
  double t5280;
  double t5282;
  double t5294;
  double t5295;
  double t5296;
  double t5303;
  double t5381;
  double t5382;
  double t5387;
  double t5404;
  double t5409;
  double t5415;
  double t5318;
  double t5321;
  double t5324;
  double t5326;
  double t5391;
  double t5416;
  double t5417;
  double t5424;
  double t5432;
  double t5434;
  double t5484;
  double t5486;
  double t5489;
  double t5491;
  double t5507;
  double t5508;
  double t5569;
  double t5572;
  double t5573;
  double t5594;
  double t5600;
  double t5612;
  double t5651;
  double t5656;
  double t5659;
  double t5664;
  double t5665;
  double t5666;
  double t5695;
  double t5696;
  double t5707;
  double t5710;
  double t5714;
  double t5717;
  double t5739;
  double t5740;
  double t5741;
  double t5743;
  double t5744;
  double t5750;
  double t5751;
  double t5796;
  double t5798;
  double t5799;
  double t5793;
  double t5800;
  double t5801;
  double t5804;
  double t5808;
  double t5720;
  double t5753;
  double t5756;
  double t5770;
  double t5771;
  double t5773;
  double t5418;
  double t5435;
  double t5452;
  double t5783;
  double t5784;
  double t5787;
  double t5463;
  double t5465;
  double t5466;
  double t5849;
  double t5852;
  double t5855;
  double t5859;
  double t5593;
  double t5613;
  double t5615;
  double t5621;
  double t5622;
  double t5629;
  double t5897;
  double t5909;
  double t5910;
  double t5935;
  double t5938;
  double t5939;
  double t5940;
  double t5941;
  double t5943;
  double t5946;
  double t5947;
  double t5948;
  double t5949;
  double t5951;
  double t5957;
  double t5958;
  double t5959;
  double t5960;
  double t5990;
  double t5993;
  double t5994;
  double t5955;
  double t5963;
  double t5965;
  double t5967;
  double t5970;
  double t5971;
  double t5973;
  double t5979;
  double t5982;
  double t6032;
  double t6034;
  double t6041;
  double t6067;
  double t6073;
  double t6076;
  t1126 = Cos(var1[3]);
  t270 = Cos(var1[5]);
  t603 = Sin(var1[3]);
  t725 = Sin(var1[4]);
  t1189 = Sin(var1[5]);
  t2132 = Cos(var1[24]);
  t1004 = -1.*t270*t603*t725;
  t1358 = t1126*t1189;
  t1990 = t1004 + t1358;
  t193 = Sin(var1[24]);
  t2282 = -1.*t1126*t270;
  t2290 = -1.*t603*t725*t1189;
  t2786 = t2282 + t2290;
  t4169 = 0.173648*t2132;
  t4215 = -0.984808*t193;
  t4282 = t4169 + t4215;
  t3840 = 0.984808*t2132;
  t3868 = 0.173648*t193;
  t3897 = t3840 + t3868;
  t4518 = Cos(var1[4]);
  t4065 = t270*t3897;
  t4692 = -0.173648*t2132;
  t4724 = 0.984808*t193;
  t4783 = t4692 + t4724;
  t3523 = -1.*var2[5];
  t3536 = 0. + t725;
  t3678 = var2[3]*t3536;
  t3776 = 0. + var2[24] + t3523 + t3678;
  t4297 = -1.*t4282*t1189;
  t4370 = 0. + t4065 + t4297;
  t4477 = var2[4]*t4370;
  t4521 = t270*t4282;
  t4530 = t3897*t1189;
  t4567 = 0. + t4521 + t4530;
  t4570 = t4518*t4567;
  t4594 = 0. + t4570;
  t4639 = var2[3]*t4594;
  t4660 = 0. + t4477 + t4639;
  t4786 = t270*t4783;
  t4791 = -1.*t3897*t1189;
  t4792 = 0. + t4786 + t4791;
  t4810 = var2[4]*t4792;
  t4821 = t4783*t1189;
  t4822 = 0. + t4065 + t4821;
  t4836 = t4518*t4822;
  t4839 = 0. + t4836;
  t4841 = var2[3]*t4839;
  t4867 = 0. + t4810 + t4841;
  t2005 = -1.*t193*t1990;
  t2806 = t2132*t2786;
  t2904 = t2005 + t2806;
  t3137 = t2132*t1990;
  t3181 = t193*t2786;
  t3213 = t3137 + t3181;
  t5103 = t1126*t270*t725;
  t5105 = t603*t1189;
  t5115 = t5103 + t5105;
  t5130 = -1.*t270*t603;
  t5133 = t1126*t725*t1189;
  t5136 = t5130 + t5133;
  t3803 = -0.00004*t3776;
  t4685 = 0.00075*t4660;
  t4879 = -0.00001*t4867;
  t4894 = t3803 + t4685 + t4879;
  t4951 = 0.0003*t3776;
  t4954 = -0.00004*t4660;
  t4970 = 0.00001*t4867;
  t4988 = t4951 + t4954 + t4970;
  t5129 = -1.*t193*t5115;
  t5150 = t2132*t5136;
  t5171 = t5129 + t5150;
  t5192 = t2132*t5115;
  t5204 = t193*t5136;
  t5207 = t5192 + t5204;
  t5073 = 0.00001*t3776;
  t5078 = -0.00001*t4660;
  t5080 = 0.0007*t4867;
  t5081 = t5073 + t5078 + t5080;
  t5181 = 0.984808*t5171;
  t5224 = 0.173648*t5207;
  t5233 = t5181 + t5224;
  t5249 = -0.173648*t5171;
  t5250 = 0.984808*t5207;
  t5252 = t5249 + t5250;
  t5331 = -1.*t1126*t4518*t270*t193;
  t5334 = t2132*t1126*t4518*t1189;
  t5337 = t5331 + t5334;
  t5343 = t2132*t1126*t4518*t270;
  t5347 = t1126*t4518*t193*t1189;
  t5348 = t5343 + t5347;
  t5267 = 0.0003*var2[3]*t4518;
  t5278 = 0.00004*var2[3]*t725*t4567;
  t5280 = -0.00001*var2[3]*t725*t4822;
  t5282 = t5267 + t5278 + t5280;
  t5294 = -0.00004*var2[3]*t4518;
  t5295 = -0.00075*var2[3]*t725*t4567;
  t5296 = 0.00001*var2[3]*t725*t4822;
  t5303 = t5294 + t5295 + t5296;
  t5381 = t270*t603*t725;
  t5382 = -1.*t1126*t1189;
  t5387 = t5381 + t5382;
  t5404 = t1126*t270;
  t5409 = t603*t725*t1189;
  t5415 = t5404 + t5409;
  t5318 = 0.00001*var2[3]*t4518;
  t5321 = 0.00001*var2[3]*t725*t4567;
  t5324 = -0.0007*var2[3]*t725*t4822;
  t5326 = t5318 + t5321 + t5324;
  t5391 = -1.*t193*t5387;
  t5416 = t2132*t5415;
  t5417 = t5391 + t5416;
  t5424 = t2132*t5387;
  t5432 = t193*t5415;
  t5434 = t5424 + t5432;
  t5484 = -1.*t4518*t270*t193*t603;
  t5486 = t2132*t4518*t603*t1189;
  t5489 = t5484 + t5486;
  t5491 = t2132*t4518*t270*t603;
  t5507 = t4518*t193*t603*t1189;
  t5508 = t5491 + t5507;
  t5569 = -1.*t4518*t270*t193;
  t5572 = t2132*t4518*t1189;
  t5573 = t5569 + t5572;
  t5594 = t2132*t4518*t270;
  t5600 = t4518*t193*t1189;
  t5612 = t5594 + t5600;
  t5651 = t270*t193*t725;
  t5656 = -1.*t2132*t725*t1189;
  t5659 = t5651 + t5656;
  t5664 = -1.*t2132*t270*t725;
  t5665 = -1.*t193*t725*t1189;
  t5666 = t5664 + t5665;
  t5695 = t4065 + t4297;
  t5696 = var2[3]*t4518*t5695;
  t5707 = -1.*t270*t4282;
  t5710 = t5707 + t4791;
  t5714 = var2[4]*t5710;
  t5717 = t5696 + t5714;
  t5739 = t4786 + t4791;
  t5740 = var2[3]*t4518*t5739;
  t5741 = -1.*t270*t3897;
  t5743 = -1.*t4783*t1189;
  t5744 = t5741 + t5743;
  t5750 = var2[4]*t5744;
  t5751 = t5740 + t5750;
  t5796 = t270*t603;
  t5798 = -1.*t1126*t725*t1189;
  t5799 = t5796 + t5798;
  t5793 = t193*t5115;
  t5800 = t2132*t5799;
  t5801 = t5793 + t5800;
  t5804 = -1.*t193*t5799;
  t5808 = t5192 + t5804;
  t5720 = -0.00004*t5717;
  t5753 = 0.00001*t5751;
  t5756 = t5720 + t5753;
  t5770 = 0.00075*t5717;
  t5771 = -0.00001*t5751;
  t5773 = t5770 + t5771;
  t5418 = 0.984808*t5417;
  t5435 = 0.173648*t5434;
  t5452 = t5418 + t5435;
  t5783 = -0.00001*t5717;
  t5784 = 0.0007*t5751;
  t5787 = t5783 + t5784;
  t5463 = -0.173648*t5417;
  t5465 = 0.984808*t5434;
  t5466 = t5463 + t5465;
  t5849 = t193*t5387;
  t5852 = t5849 + t2806;
  t5855 = -1.*t193*t2786;
  t5859 = t5424 + t5855;
  t5593 = 0.984808*t5573;
  t5613 = 0.173648*t5612;
  t5615 = t5593 + t5613;
  t5621 = -0.173648*t5573;
  t5622 = 0.984808*t5612;
  t5629 = t5621 + t5622;
  t5897 = t4518*t270*t193;
  t5909 = -1.*t2132*t4518*t1189;
  t5910 = t5897 + t5909;
  t5935 = -0.984808*t2132;
  t5938 = -0.173648*t193;
  t5939 = t5935 + t5938;
  t5940 = t270*t5939;
  t5941 = t4282*t1189;
  t5943 = t5940 + t5941;
  t5946 = var2[3]*t4518*t5943;
  t5947 = -1.*t5939*t1189;
  t5948 = t4521 + t5947;
  t5949 = var2[4]*t5948;
  t5951 = t5946 + t5949;
  t5957 = var2[4]*t5695;
  t5958 = t4521 + t4530;
  t5959 = var2[3]*t4518*t5958;
  t5960 = t5957 + t5959;
  t5990 = -1.*t2132*t5115;
  t5993 = -1.*t193*t5136;
  t5994 = t5990 + t5993;
  t5955 = -0.00004*t5951;
  t5963 = 0.00001*t5960;
  t5965 = t5955 + t5963;
  t5967 = 0.00075*t5951;
  t5970 = -0.00001*t5960;
  t5971 = t5967 + t5970;
  t5973 = -0.00001*t5951;
  t5979 = 0.0007*t5960;
  t5982 = t5973 + t5979;
  t6032 = -1.*t2132*t5387;
  t6034 = -1.*t193*t5415;
  t6041 = t6032 + t6034;
  t6067 = -1.*t2132*t4518*t270;
  t6073 = -1.*t4518*t193*t1189;
  t6076 = t6067 + t6073;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.984808*t2904 + 0.173648*t3213)*t4894 + (-0.173648*t2904 + 0.984808*t3213)*t5081 + t4518*t4988*t603;
  p_output1[10]=-1.*t1126*t4518*t4988 + t4894*t5233 + t5081*t5252;
  p_output1[11]=0;
  p_output1[12]=-1.*t1126*t4518*t5282 + t5233*t5303 + t5252*t5326 + t4894*(0.984808*t5337 + 0.173648*t5348) + t5081*(-0.173648*t5337 + 0.984808*t5348) + t1126*t4988*t725;
  p_output1[13]=t5303*t5452 + t5326*t5466 + t4894*(0.984808*t5489 + 0.173648*t5508) + t5081*(-0.173648*t5489 + 0.984808*t5508) - 1.*t4518*t5282*t603 + t4988*t603*t725;
  p_output1[14]=t4518*t4988 + t5303*t5615 + t5326*t5629 + t4894*(0.984808*t5659 + 0.173648*t5666) + t5081*(-0.173648*t5659 + 0.984808*t5666) + t5282*t725;
  p_output1[15]=-1.*t1126*t4518*t5756 + t5233*t5773 + t5252*t5787 + t5081*(0.984808*t5801 - 0.173648*t5808) + t4894*(0.173648*t5801 + 0.984808*t5808);
  p_output1[16]=t5452*t5773 + t5466*t5787 + t5081*(0.984808*t5852 - 0.173648*t5859) + t4894*(0.173648*t5852 + 0.984808*t5859) - 1.*t4518*t5756*t603;
  p_output1[17]=t5615*t5773 + t5629*t5787 + t4894*(t5622 + 0.173648*t5910) + t5081*(-0.173648*t5612 + 0.984808*t5910) + t5756*t725;
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
  p_output1[72]=-1.*t1126*t4518*t5965 + t5233*t5971 + t5252*t5982 + t5081*(t5181 - 0.173648*t5994) + t4894*(0.173648*t5171 + 0.984808*t5994);
  p_output1[73]=t5452*t5971 + t5466*t5982 - 1.*t4518*t5965*t603 + t5081*(t5418 - 0.173648*t6041) + t4894*(0.173648*t5417 + 0.984808*t6041);
  p_output1[74]=t5615*t5971 + t5629*t5982 + t5081*(t5593 - 0.173648*t6076) + t4894*(0.173648*t5573 + 0.984808*t6076) + t5965*t725;
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



void Jq_AMWorld_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_right_hip_pitch_src.h"

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
  double t111;
  double t358;
  double t700;
  double t1452;
  double t2646;
  double t2212;
  double t2239;
  double t2278;
  double t994;
  double t1135;
  double t1270;
  double t1277;
  double t1355;
  double t1787;
  double t1794;
  double t1829;
  double t1872;
  double t1923;
  double t2686;
  double t2713;
  double t2886;
  double t2958;
  double t3034;
  double t3231;
  double t3244;
  double t3710;
  double t3460;
  double t3498;
  double t3510;
  double t3538;
  double t3542;
  double t3545;
  double t3639;
  double t3647;
  double t3423;
  double t3860;
  double t3866;
  double t3871;
  double t3888;
  double t3901;
  double t3907;
  double t3912;
  double t3917;
  double t2426;
  double t2460;
  double t2141;
  double t2149;
  double t1492;
  double t1630;
  double t3345;
  double t3385;
  double t3411;
  double t4117;
  double t4118;
  double t4129;
  double t4174;
  double t4236;
  double t4264;
  double t4296;
  double t4316;
  double t4337;
  double t4339;
  double t4340;
  double t4347;
  double t4418;
  double t4429;
  double t4432;
  double t4449;
  double t4457;
  double t4495;
  double t4536;
  double t4537;
  double t4558;
  double t4578;
  double t4622;
  double t4647;
  double t4652;
  double t4656;
  double t4055;
  double t4779;
  double t4809;
  double t4839;
  double t4840;
  double t4862;
  double t4866;
  double t4884;
  double t4901;
  double t4928;
  double t4942;
  double t4974;
  double t4975;
  double t4992;
  double t5004;
  double t1730;
  double t2189;
  double t3271;
  double t3300;
  double t3367;
  double t3650;
  double t3925;
  double t3949;
  double t3971;
  double t3999;
  double t4020;
  double t4047;
  double t4058;
  double t4065;
  double t4079;
  double t4089;
  double t4294;
  double t4380;
  double t4498;
  double t4513;
  double t4527;
  double t4586;
  double t4665;
  double t4701;
  double t4726;
  double t4727;
  double t4732;
  double t4752;
  double t4755;
  double t4756;
  double t4758;
  double t4764;
  double t4814;
  double t4844;
  double t4879;
  double t4881;
  double t4883;
  double t4970;
  double t5008;
  double t5017;
  double t5054;
  double t5082;
  double t5084;
  double t5093;
  double t5095;
  double t5107;
  double t5114;
  double t5117;
  double t5235;
  double t5250;
  double t5258;
  double t5264;
  double t5265;
  double t5267;
  double t5300;
  double t5304;
  double t5306;
  double t5466;
  double t5480;
  double t5486;
  double t5487;
  double t5492;
  double t5495;
  double t5505;
  double t5508;
  double t5513;
  double t5519;
  double t5525;
  double t5527;
  double t5669;
  double t5682;
  double t5686;
  double t5689;
  double t5698;
  double t5699;
  double t5710;
  double t5713;
  double t5721;
  t111 = Cos(var1[19]);
  t358 = -1.*t111;
  t700 = 1. + t358;
  t1452 = Sin(var1[18]);
  t2646 = Sin(var1[19]);
  t2212 = Cos(var1[18]);
  t2239 = -1.*t2212;
  t2278 = 1. + t2239;
  t994 = -0.8656776547239999*t700;
  t1135 = 1. + t994;
  t1270 = -0.366501*t1135;
  t1277 = -0.3172717261340007*t700;
  t1355 = t1270 + t1277;
  t1787 = -0.134322983001*t700;
  t1794 = 1. + t1787;
  t1829 = 0.930418*t1794;
  t1872 = 0.12497652119782442*t700;
  t1923 = t1829 + t1872;
  t2686 = -0.930418*t2646;
  t2713 = 0. + t2686;
  t2886 = -0.366501*t2713;
  t2958 = -0.366501*t2646;
  t3034 = 0. + t2958;
  t3231 = 0.930418*t3034;
  t3244 = t2886 + t3231;
  t3710 = Cos(var1[17]);
  t3460 = 0.340999127418*t2278*t1355;
  t3498 = -0.8656776547239999*t2278;
  t3510 = 1. + t3498;
  t3538 = t3510*t1923;
  t3542 = -0.930418*t1452;
  t3545 = 0. + t3542;
  t3639 = t3545*t3244;
  t3647 = 0. + t3460 + t3538 + t3639;
  t3423 = Sin(var1[17]);
  t3860 = -0.134322983001*t2278;
  t3866 = 1. + t3860;
  t3871 = t3866*t1355;
  t3888 = 0.340999127418*t2278*t1923;
  t3901 = 0.366501*t1452;
  t3907 = 0. + t3901;
  t3912 = t3907*t3244;
  t3917 = 0. + t3871 + t3888 + t3912;
  t2426 = -1.000000637725*t2278;
  t2460 = 1. + t2426;
  t2141 = 0.930418*t1452;
  t2149 = 0. + t2141;
  t1492 = -0.366501*t1452;
  t1630 = 0. + t1492;
  t3345 = Sin(var1[4]);
  t3385 = Cos(var1[4]);
  t3411 = Cos(var1[5]);
  t4117 = -1.000000637725*t700;
  t4118 = 1. + t4117;
  t4129 = -0.707107*t4118;
  t4174 = -0.657905*t2713;
  t4236 = -0.259155*t3034;
  t4264 = t4129 + t4174 + t4236;
  t4296 = -0.259155*t1794;
  t4316 = 0.22434503092393926*t700;
  t4337 = 0.366501*t2646;
  t4339 = 0. + t4337;
  t4340 = -0.707107*t4339;
  t4347 = t4296 + t4316 + t4340;
  t4418 = -0.657905*t1135;
  t4429 = 0.0883716288660118*t700;
  t4432 = 0.930418*t2646;
  t4449 = 0. + t4432;
  t4457 = -0.707107*t4449;
  t4495 = t4418 + t4429 + t4457;
  t4536 = t3907*t4264;
  t4537 = 0.340999127418*t2278*t4347;
  t4558 = t3866*t4495;
  t4578 = 0. + t4536 + t4537 + t4558;
  t4622 = t3545*t4264;
  t4647 = t3510*t4347;
  t4652 = 0.340999127418*t2278*t4495;
  t4656 = 0. + t4622 + t4647 + t4652;
  t4055 = Sin(var1[5]);
  t4779 = 0.707107*t4118;
  t4809 = t4779 + t4174 + t4236;
  t4839 = 0.707107*t4339;
  t4840 = t4296 + t4316 + t4839;
  t4862 = 0.707107*t4449;
  t4866 = t4418 + t4429 + t4862;
  t4884 = t3907*t4809;
  t4901 = 0.340999127418*t2278*t4840;
  t4928 = t3866*t4866;
  t4942 = 0. + t4884 + t4901 + t4928;
  t4974 = t3545*t4809;
  t4975 = t3510*t4840;
  t4992 = 0.340999127418*t2278*t4866;
  t5004 = 0. + t4974 + t4975 + t4992;
  t1730 = t1355*t1630;
  t2189 = t1923*t2149;
  t3271 = t2460*t3244;
  t3300 = 0. + t1730 + t2189 + t3271;
  t3367 = -1.*t3300*t3345;
  t3650 = -1.*t3423*t3647;
  t3925 = t3710*t3917;
  t3949 = 0. + t3650 + t3925;
  t3971 = t3411*t3949;
  t3999 = t3710*t3647;
  t4020 = t3423*t3917;
  t4047 = 0. + t3999 + t4020;
  t4058 = t4047*t4055;
  t4065 = 0. + t3971 + t4058;
  t4079 = t3385*t4065;
  t4089 = 0. + t3367 + t4079;
  t4294 = t2460*t4264;
  t4380 = t2149*t4347;
  t4498 = t1630*t4495;
  t4513 = 0. + t4294 + t4380 + t4498;
  t4527 = -1.*t4513*t3345;
  t4586 = t3710*t4578;
  t4665 = -1.*t3423*t4656;
  t4701 = 0. + t4586 + t4665;
  t4726 = t3411*t4701;
  t4727 = t3423*t4578;
  t4732 = t3710*t4656;
  t4752 = 0. + t4727 + t4732;
  t4755 = t4752*t4055;
  t4756 = 0. + t4726 + t4755;
  t4758 = t3385*t4756;
  t4764 = 0. + t4527 + t4758;
  t4814 = t2460*t4809;
  t4844 = t2149*t4840;
  t4879 = t1630*t4866;
  t4881 = 0. + t4814 + t4844 + t4879;
  t4883 = -1.*t4881*t3345;
  t4970 = t3710*t4942;
  t5008 = -1.*t3423*t5004;
  t5017 = 0. + t4970 + t5008;
  t5054 = t3411*t5017;
  t5082 = t3423*t4942;
  t5084 = t3710*t5004;
  t5093 = 0. + t5082 + t5084;
  t5095 = t5093*t4055;
  t5107 = 0. + t5054 + t5095;
  t5114 = t3385*t5107;
  t5117 = 0. + t4883 + t5114;
  t5235 = t3411*t4047;
  t5250 = -1.*t3949*t4055;
  t5258 = 0. + t5235 + t5250;
  t5264 = t3411*t4752;
  t5265 = -1.*t4701*t4055;
  t5267 = 0. + t5264 + t5265;
  t5300 = t3411*t5093;
  t5304 = -1.*t5017*t4055;
  t5306 = 0. + t5300 + t5304;
  t5466 = -1.*t1355*t1630;
  t5480 = -1.*t1923*t2149;
  t5486 = -1.*t2460*t3244;
  t5487 = 0. + t5466 + t5480 + t5486;
  t5492 = -1.*t2460*t4264;
  t5495 = -1.*t2149*t4347;
  t5505 = -1.*t1630*t4495;
  t5508 = 0. + t5492 + t5495 + t5505;
  t5513 = -1.*t2460*t4809;
  t5519 = -1.*t2149*t4840;
  t5525 = -1.*t1630*t4866;
  t5527 = 0. + t5513 + t5519 + t5525;
  t5669 = -0.930418*t1355;
  t5682 = -0.366501*t1923;
  t5686 = 0. + t5669 + t5682;
  t5689 = -0.366501*t4347;
  t5698 = -0.930418*t4495;
  t5699 = 0. + t5689 + t5698;
  t5710 = -0.366501*t4840;
  t5713 = -0.930418*t4866;
  t5721 = 0. + t5710 + t5713;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00015*t4089 + 0.00017*t4764 + 0.01153*t5117;
  p_output1[10]=-0.00018*t4089 + 0.03335*t4764 + 0.00017*t5117;
  p_output1[11]=0.03396*t4089 - 0.00018*t4764 + 0.00015*t5117;
  p_output1[12]=0.00015*t5258 + 0.00017*t5267 + 0.01153*t5306;
  p_output1[13]=-0.00018*t5258 + 0.03335*t5267 + 0.00017*t5306;
  p_output1[14]=0.03396*t5258 - 0.00018*t5267 + 0.00015*t5306;
  p_output1[15]=0.00015*t3300 + 0.00017*t4513 + 0.01153*t4881;
  p_output1[16]=-0.00018*t3300 + 0.03335*t4513 + 0.00017*t4881;
  p_output1[17]=0.03396*t3300 - 0.00018*t4513 + 0.00015*t4881;
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
  p_output1[51]=0.00015*t5487 + 0.00017*t5508 + 0.01153*t5527;
  p_output1[52]=-0.00018*t5487 + 0.03335*t5508 + 0.00017*t5527;
  p_output1[53]=0.03396*t5487 - 0.00018*t5508 + 0.00015*t5527;
  p_output1[54]=0.00015*t5686 + 0.00017*t5699 + 0.01153*t5721;
  p_output1[55]=-0.00018*t5686 + 0.03335*t5699 + 0.00017*t5721;
  p_output1[56]=0.03396*t5686 - 0.00018*t5699 + 0.00015*t5721;
  p_output1[57]=-0.00015000434995424998;
  p_output1[58]=0.00017998792641570006;
  p_output1[59]=-0.03396002164623255;
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



void Jdq_AMBody_right_hip_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

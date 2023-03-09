/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_right_shoulder_pitch_src.h"

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
  double t694;
  double t258;
  double t396;
  double t403;
  double t2494;
  double t1549;
  double t1562;
  double t1569;
  double t1665;
  double t1728;
  double t1733;
  double t2450;
  double t2453;
  double t1542;
  double t2910;
  double t2912;
  double t3291;
  double t3298;
  double t3341;
  double t3380;
  double t3387;
  double t3398;
  double t42;
  double t547;
  double t645;
  double t683;
  double t727;
  double t749;
  double t1137;
  double t1325;
  double t1447;
  double t1514;
  double t3824;
  double t3825;
  double t3864;
  double t4039;
  double t4049;
  double t4076;
  double t3617;
  double t4447;
  double t4462;
  double t4466;
  double t4408;
  double t4414;
  double t4417;
  double t832;
  double t1390;
  double t1406;
  double t1410;
  double t2491;
  double t3411;
  double t3424;
  double t3494;
  double t3574;
  double t3584;
  double t3606;
  double t3623;
  double t3628;
  double t3689;
  double t3722;
  double t3805;
  double t3808;
  double t3816;
  double t3822;
  double t3909;
  double t4083;
  double t4093;
  double t4094;
  double t4163;
  double t4190;
  double t4229;
  double t4250;
  double t4258;
  double t4286;
  double t4294;
  double t4374;
  double t4380;
  double t4392;
  double t4402;
  double t4439;
  double t4472;
  double t4479;
  double t4482;
  double t4493;
  double t4507;
  double t4510;
  double t4516;
  double t4520;
  double t4531;
  double t4533;
  double t4672;
  double t4674;
  double t4675;
  double t4682;
  double t4695;
  double t4737;
  double t4751;
  double t4766;
  double t4794;
  double t4798;
  double t4807;
  double t4819;
  double t4832;
  double t4835;
  double t4846;
  double t4849;
  double t4868;
  double t4924;
  double t4957;
  double t4958;
  double t4972;
  double t4980;
  double t4992;
  double t5002;
  double t5011;
  double t5013;
  double t5033;
  double t5123;
  double t5094;
  double t5104;
  double t5113;
  double t5248;
  double t5188;
  double t5196;
  double t5210;
  double t5332;
  double t5338;
  double t5357;
  double t5314;
  double t5120;
  double t5126;
  double t5127;
  double t5137;
  double t5138;
  double t5158;
  double t5164;
  double t5166;
  double t5167;
  double t5240;
  double t5268;
  double t5276;
  double t5279;
  double t5288;
  double t5297;
  double t5302;
  double t5304;
  double t5305;
  double t5323;
  double t5361;
  double t5384;
  double t5386;
  double t5395;
  double t5403;
  double t5422;
  double t5426;
  double t5429;
  double t5560;
  double t5571;
  double t5588;
  double t5602;
  double t5604;
  double t5605;
  double t5477;
  double t5479;
  double t5483;
  double t5633;
  double t5639;
  double t5640;
  double t5589;
  double t5606;
  double t5610;
  double t5516;
  double t5526;
  double t5807;
  double t5821;
  double t5828;
  double t5831;
  double t5782;
  double t5875;
  double t5877;
  double t5889;
  double t5826;
  double t5832;
  double t5843;
  double t5511;
  double t5533;
  double t5554;
  double t5627;
  double t5652;
  double t5657;
  double t5665;
  double t5674;
  double t5693;
  double t5700;
  double t5738;
  double t5742;
  double t5748;
  double t5752;
  double t5757;
  double t5784;
  double t5795;
  double t5805;
  double t5846;
  double t5897;
  double t5900;
  double t5911;
  double t5916;
  double t5919;
  double t5922;
  double t5926;
  double t5953;
  double t5969;
  double t5974;
  double t5978;
  double t6019;
  double t6020;
  double t6000;
  double t6002;
  double t6005;
  double t6049;
  double t6058;
  double t6065;
  double t6076;
  double t6082;
  double t6093;
  double t6100;
  double t6101;
  double t6108;
  double t6110;
  t694 = Sin(var1[25]);
  t258 = Cos(var1[25]);
  t396 = -1.*t258;
  t403 = 1. + t396;
  t2494 = Cos(var1[24]);
  t1549 = -0.010926102783999999*t403;
  t1562 = 1. + t1549;
  t1569 = 0.073913*t1562;
  t1665 = -0.07310496868062215*t403;
  t1728 = 0.104528*t694;
  t1733 = 0. + t1728;
  t2450 = 0.707107*t1733;
  t2453 = t1569 + t1665 + t2450;
  t1542 = Sin(var1[24]);
  t2910 = -0.9890740084840001*t403;
  t2912 = 1. + t2910;
  t3291 = 0.703234*t2912;
  t3298 = -0.007683655156165408*t403;
  t3341 = 0.994522*t694;
  t3380 = 0. + t3341;
  t3387 = 0.707107*t3380;
  t3398 = t3291 + t3298 + t3387;
  t42 = Cos(var1[4]);
  t547 = -1.0000001112680001*t403;
  t645 = 1. + t547;
  t683 = 0.707107*t645;
  t727 = -0.994522*t694;
  t749 = 0. + t727;
  t1137 = -0.104528*t694;
  t1325 = 0. + t1137;
  t1447 = Sin(var1[4]);
  t1514 = Cos(var1[5]);
  t3824 = -0.073913*t1562;
  t3825 = 0.07310496868062215*t403;
  t3864 = t3824 + t3825 + t2450;
  t4039 = -0.703234*t2912;
  t4049 = 0.007683655156165408*t403;
  t4076 = t4039 + t4049 + t3387;
  t3617 = Sin(var1[5]);
  t4447 = 0.994522*t1562;
  t4462 = 0.010866249592949247*t403;
  t4466 = t4447 + t4462;
  t4408 = -0.104528*t2912;
  t4414 = -0.10338592795881554*t403;
  t4417 = t4408 + t4414;
  t832 = 0.703234*t749;
  t1390 = 0.073913*t1325;
  t1406 = 0. + t683 + t832 + t1390;
  t1410 = -1.*t42*t1406;
  t2491 = -1.*t1542*t2453;
  t3411 = t2494*t3398;
  t3424 = 0. + t2491 + t3411;
  t3494 = t1514*t3424;
  t3574 = t2494*t2453;
  t3584 = t1542*t3398;
  t3606 = 0. + t3574 + t3584;
  t3623 = t3606*t3617;
  t3628 = 0. + t3494 + t3623;
  t3689 = -1.*t1447*t3628;
  t3722 = t1410 + t3689;
  t3805 = -0.703234*t749;
  t3808 = -0.073913*t1325;
  t3816 = 0. + t683 + t3805 + t3808;
  t3822 = -1.*t42*t3816;
  t3909 = -1.*t1542*t3864;
  t4083 = t2494*t4076;
  t4093 = 0. + t3909 + t4083;
  t4094 = t1514*t4093;
  t4163 = t2494*t3864;
  t4190 = t1542*t4076;
  t4229 = 0. + t4163 + t4190;
  t4250 = t4229*t3617;
  t4258 = 0. + t4094 + t4250;
  t4286 = -1.*t1447*t4258;
  t4294 = t3822 + t4286;
  t4374 = -0.104528*t749;
  t4380 = 0.994522*t1325;
  t4392 = 0. + t4374 + t4380;
  t4402 = -1.*t42*t4392;
  t4439 = t2494*t4417;
  t4472 = -1.*t4466*t1542;
  t4479 = 0. + t4439 + t4472;
  t4482 = t1514*t4479;
  t4493 = t2494*t4466;
  t4507 = t4417*t1542;
  t4510 = 0. + t4493 + t4507;
  t4516 = t4510*t3617;
  t4520 = 0. + t4482 + t4516;
  t4531 = -1.*t1447*t4520;
  t4533 = t4402 + t4531;
  t4672 = t1514*t3606;
  t4674 = -1.*t3424*t3617;
  t4675 = t4672 + t4674;
  t4682 = var2[3]*t42*t4675;
  t4695 = -1.*t1514*t3424;
  t4737 = -1.*t3606*t3617;
  t4751 = t4695 + t4737;
  t4766 = var2[4]*t4751;
  t4794 = t4682 + t4766;
  t4798 = t1514*t4229;
  t4807 = -1.*t4093*t3617;
  t4819 = t4798 + t4807;
  t4832 = var2[3]*t42*t4819;
  t4835 = -1.*t1514*t4093;
  t4846 = -1.*t4229*t3617;
  t4849 = t4835 + t4846;
  t4868 = var2[4]*t4849;
  t4924 = t4832 + t4868;
  t4957 = -1.*t1514*t4479;
  t4958 = -1.*t4510*t3617;
  t4972 = t4957 + t4958;
  t4980 = var2[4]*t4972;
  t4992 = t1514*t4510;
  t5002 = -1.*t4479*t3617;
  t5011 = t4992 + t5002;
  t5013 = var2[3]*t42*t5011;
  t5033 = t4980 + t5013;
  t5123 = t2491 + t3411;
  t5094 = -1.*t2494*t2453;
  t5104 = -1.*t1542*t3398;
  t5113 = t5094 + t5104;
  t5248 = t3909 + t4083;
  t5188 = -1.*t2494*t3864;
  t5196 = -1.*t1542*t4076;
  t5210 = t5188 + t5196;
  t5332 = -1.*t2494*t4466;
  t5338 = -1.*t4417*t1542;
  t5357 = t5332 + t5338;
  t5314 = t4439 + t4472;
  t5120 = t1514*t5113;
  t5126 = t5123*t3617;
  t5127 = t5120 + t5126;
  t5137 = var2[3]*t42*t5127;
  t5138 = t1514*t5123;
  t5158 = -1.*t5113*t3617;
  t5164 = t5138 + t5158;
  t5166 = var2[4]*t5164;
  t5167 = t5137 + t5166;
  t5240 = t1514*t5210;
  t5268 = t5248*t3617;
  t5276 = t5240 + t5268;
  t5279 = var2[3]*t42*t5276;
  t5288 = t1514*t5248;
  t5297 = -1.*t5210*t3617;
  t5302 = t5288 + t5297;
  t5304 = var2[4]*t5302;
  t5305 = t5279 + t5304;
  t5323 = t1514*t5314;
  t5361 = -1.*t5357*t3617;
  t5384 = t5323 + t5361;
  t5386 = var2[4]*t5384;
  t5395 = t1514*t5357;
  t5403 = t5314*t3617;
  t5422 = t5395 + t5403;
  t5426 = var2[3]*t42*t5422;
  t5429 = t5386 + t5426;
  t5560 = 0.7032334678540001*t258;
  t5571 = -0.7032341264384028*t694;
  t5588 = t5560 + t5571;
  t5602 = 0.07391248049600001*t258;
  t5604 = -0.07391254971569594*t694;
  t5605 = t5602 + t5604;
  t5477 = -0.707107662212*t258;
  t5479 = -0.7071070786783819*t694;
  t5483 = t5477 + t5479;
  t5633 = t2494*t5588;
  t5639 = -1.*t1542*t5605;
  t5640 = t5633 + t5639;
  t5589 = t1542*t5588;
  t5606 = t2494*t5605;
  t5610 = t5589 + t5606;
  t5516 = 0.707107662212*t258;
  t5526 = 0.7071070786783819*t694;
  t5807 = 0.07391254971569594*t694;
  t5821 = t5602 + t5807;
  t5828 = 0.7032341264384028*t694;
  t5831 = t5560 + t5828;
  t5782 = t5516 + t5479;
  t5875 = -1.*t1542*t5821;
  t5877 = t2494*t5831;
  t5889 = t5875 + t5877;
  t5826 = t2494*t5821;
  t5832 = t1542*t5831;
  t5843 = t5826 + t5832;
  t5511 = var2[5]*t5483;
  t5533 = t5516 + t5526;
  t5554 = var2[24]*t5533;
  t5627 = t1514*t5610;
  t5652 = -1.*t5640*t3617;
  t5657 = t5627 + t5652;
  t5665 = var2[4]*t5657;
  t5674 = -1.*t5483*t1447;
  t5693 = t1514*t5640;
  t5700 = t5610*t3617;
  t5738 = t5693 + t5700;
  t5742 = t42*t5738;
  t5748 = t5674 + t5742;
  t5752 = var2[3]*t5748;
  t5757 = t5511 + t5554 + t5665 + t5752;
  t5784 = var2[5]*t5782;
  t5795 = t5477 + t5526;
  t5805 = var2[24]*t5795;
  t5846 = t1514*t5843;
  t5897 = -1.*t5889*t3617;
  t5900 = t5846 + t5897;
  t5911 = var2[4]*t5900;
  t5916 = -1.*t5782*t1447;
  t5919 = t1514*t5889;
  t5922 = t5843*t3617;
  t5926 = t5919 + t5922;
  t5953 = t42*t5926;
  t5969 = t5916 + t5953;
  t5974 = var2[3]*t5969;
  t5978 = t5784 + t5805 + t5911 + t5974;
  t6019 = 1.3877787807814457e-17*t2494*t694;
  t6020 = 0. + t6019;
  t6000 = 1.3877787807814457e-17*t1542*t694;
  t6002 = 0. + t6000;
  t6005 = t1514*t6002;
  t6049 = -1.*t6020*t3617;
  t6058 = t6005 + t6049;
  t6065 = var2[4]*t6058;
  t6076 = t1514*t6020;
  t6082 = t6002*t3617;
  t6093 = t6076 + t6082;
  t6100 = t42*t6093;
  t6101 = 0. + t6100;
  t6108 = var2[3]*t6101;
  t6110 = 0. + t6065 + t6108;
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
  p_output1[12]=0.00676*t3722*var2[3] + 0.00001*t4294*var2[3];
  p_output1[13]=0.00001*t3722*var2[3] + 0.00209*t4294*var2[3] + 0.00205*t4533*var2[3];
  p_output1[14]=0.00205*t4294*var2[3] + 0.00578*t4533*var2[3];
  p_output1[15]=0.00676*t4794 + 0.00001*t4924;
  p_output1[16]=0.00001*t4794 + 0.00209*t4924 + 0.00205*t5033;
  p_output1[17]=0.00205*t4924 + 0.00578*t5033;
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
  p_output1[72]=0.00676*t5167 + 0.00001*t5305;
  p_output1[73]=0.00001*t5167 + 0.00209*t5305 + 0.00205*t5429;
  p_output1[74]=0.00205*t5305 + 0.00578*t5429;
  p_output1[75]=0.00676*t5757 + 0.00001*t5978;
  p_output1[76]=0.00001*t5757 + 0.00209*t5978 + 0.00205*t6110;
  p_output1[77]=0.00205*t5978 + 0.00578*t6110;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jq_AMBody_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

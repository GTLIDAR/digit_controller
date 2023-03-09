/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_right_shoulder_pitch_src.h"

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
  double t38;
  double t1102;
  double t764;
  double t912;
  double t1048;
  double t1751;
  double t1160;
  double t1492;
  double t2305;
  double t389;
  double t464;
  double t1495;
  double t2317;
  double t2324;
  double t2472;
  double t2481;
  double t2502;
  double t3119;
  double t2722;
  double t2792;
  double t3115;
  double t3126;
  double t3171;
  double t3178;
  double t3188;
  double t3208;
  double t2377;
  double t2400;
  double t3174;
  double t3211;
  double t3216;
  double t3233;
  double t3263;
  double t3291;
  double t2929;
  double t2939;
  double t2899;
  double t2912;
  double t3433;
  double t3436;
  double t3458;
  double t3430;
  double t3465;
  double t3470;
  double t3484;
  double t3487;
  double t3501;
  double t3695;
  double t3703;
  double t391;
  double t427;
  double t3905;
  double t3909;
  double t3910;
  double t3926;
  double t3963;
  double t3967;
  double t2674;
  double t2718;
  double t3916;
  double t3971;
  double t3975;
  double t3985;
  double t3996;
  double t3998;
  double t2857;
  double t2868;
  double t4118;
  double t4123;
  double t4132;
  double t4163;
  double t4190;
  double t4214;
  double t3472;
  double t4531;
  double t4540;
  double t4547;
  double t4548;
  double t4552;
  double t4559;
  double t4574;
  double t4598;
  double t4737;
  double t4751;
  double t4762;
  double t4702;
  double t4766;
  double t4794;
  double t4802;
  double t4814;
  double t4819;
  double t4958;
  double t4960;
  double t5082;
  double t5093;
  double t5094;
  double t5108;
  double t5112;
  double t5120;
  double t5214;
  double t5221;
  double t5240;
  double t5279;
  double t5297;
  double t5304;
  double t5567;
  double t5569;
  double t5571;
  double t5592;
  double t5595;
  double t5602;
  double t734;
  double t2367;
  double t2528;
  double t2602;
  double t2721;
  double t2795;
  double t2845;
  double t2853;
  double t2888;
  double t2923;
  double t2955;
  double t3004;
  double t3040;
  double t3222;
  double t3292;
  double t3298;
  double t3341;
  double t3372;
  double t3387;
  double t3398;
  double t3404;
  double t3411;
  double t3414;
  double t3521;
  double t3535;
  double t3551;
  double t3552;
  double t3555;
  double t3569;
  double t3583;
  double t3596;
  double t3606;
  double t3639;
  double t3668;
  double t3756;
  double t3785;
  double t3786;
  double t3790;
  double t3799;
  double t3805;
  double t3806;
  double t3811;
  double t3812;
  double t3816;
  double t3820;
  double t3903;
  double t3977;
  double t4001;
  double t4012;
  double t4015;
  double t4018;
  double t4029;
  double t4030;
  double t4040;
  double t4044;
  double t4049;
  double t4063;
  double t4076;
  double t4107;
  double t4159;
  double t4224;
  double t4258;
  double t4262;
  double t4263;
  double t4265;
  double t4290;
  double t4321;
  double t4323;
  double t4330;
  double t4338;
  double t4340;
  double t4374;
  double t4380;
  double t4392;
  double t4408;
  double t4434;
  double t4438;
  double t4439;
  double t4465;
  double t4479;
  double t4493;
  double t4496;
  double t4498;
  double t4557;
  double t4599;
  double t4615;
  double t4619;
  double t4623;
  double t4628;
  double t4672;
  double t4674;
  double t4677;
  double t4679;
  double t4797;
  double t4823;
  double t4824;
  double t4832;
  double t4835;
  double t4842;
  double t4868;
  double t4924;
  double t4929;
  double t4932;
  double t4943;
  double t4957;
  double t4963;
  double t4964;
  double t4972;
  double t4980;
  double t4992;
  double t5002;
  double t5011;
  double t5033;
  double t5044;
  double t5047;
  double t5048;
  double t5104;
  double t5123;
  double t5126;
  double t5137;
  double t5138;
  double t5158;
  double t5168;
  double t5188;
  double t5191;
  double t5196;
  double t5248;
  double t5310;
  double t5312;
  double t5332;
  double t5351;
  double t5357;
  double t5403;
  double t5421;
  double t5422;
  double t5426;
  double t5456;
  double t5457;
  double t5459;
  double t5460;
  double t5461;
  double t5466;
  double t5476;
  double t5477;
  double t5479;
  double t5511;
  double t5516;
  double t5530;
  double t5544;
  double t5566;
  double t5588;
  double t5604;
  double t5605;
  double t5611;
  double t5627;
  double t5633;
  double t5639;
  double t5644;
  double t5652;
  double t5657;
  double t5674;
  double t5689;
  t38 = Cos(var1[3]);
  t1102 = Cos(var1[4]);
  t764 = Cos(var1[25]);
  t912 = -1.*t764;
  t1048 = 1. + t912;
  t1751 = Cos(var1[24]);
  t1160 = Cos(var1[5]);
  t1492 = Sin(var1[24]);
  t2305 = Sin(var1[5]);
  t389 = Sin(var1[25]);
  t464 = Sin(var1[4]);
  t1495 = -1.*t38*t1102*t1160*t1492;
  t2317 = t1751*t38*t1102*t2305;
  t2324 = t1495 + t2317;
  t2472 = t1751*t38*t1102*t1160;
  t2481 = t38*t1102*t1492*t2305;
  t2502 = t2472 + t2481;
  t3119 = Sin(var1[3]);
  t2722 = -0.010926102783999999*t1048;
  t2792 = 1. + t2722;
  t3115 = t38*t1160*t464;
  t3126 = t3119*t2305;
  t3171 = t3115 + t3126;
  t3178 = t1160*t3119;
  t3188 = -1.*t38*t464*t2305;
  t3208 = t3178 + t3188;
  t2377 = -0.9890740084840001*t1048;
  t2400 = 1. + t2377;
  t3174 = t1492*t3171;
  t3211 = t1751*t3208;
  t3216 = t3174 + t3211;
  t3233 = t1751*t3171;
  t3263 = -1.*t1492*t3208;
  t3291 = t3233 + t3263;
  t2929 = 0.994522*t389;
  t2939 = 0. + t2929;
  t2899 = 0.104528*t389;
  t2912 = 0. + t2899;
  t3433 = -1.*t1160*t3119;
  t3436 = t38*t464*t2305;
  t3458 = t3433 + t3436;
  t3430 = -1.*t1492*t3171;
  t3465 = t1751*t3458;
  t3470 = t3430 + t3465;
  t3484 = -1.*t1751*t3171;
  t3487 = -1.*t1492*t3458;
  t3501 = t3484 + t3487;
  t3695 = t1492*t3458;
  t3703 = t3233 + t3695;
  t391 = -0.994522*t389;
  t427 = 0. + t391;
  t3905 = -1.*t1160*t3119*t464;
  t3909 = t38*t2305;
  t3910 = t3905 + t3909;
  t3926 = -1.*t38*t1160;
  t3963 = -1.*t3119*t464*t2305;
  t3967 = t3926 + t3963;
  t2674 = -0.104528*t389;
  t2718 = 0. + t2674;
  t3916 = -1.*t1492*t3910;
  t3971 = t1751*t3967;
  t3975 = t3916 + t3971;
  t3985 = t1751*t3910;
  t3996 = t1492*t3967;
  t3998 = t3985 + t3996;
  t2857 = -1.0000001112680001*t1048;
  t2868 = 1. + t2857;
  t4118 = -1.*t1102*t1160*t1492*t3119;
  t4123 = t1751*t1102*t3119*t2305;
  t4132 = t4118 + t4123;
  t4163 = t1751*t1102*t1160*t3119;
  t4190 = t1102*t1492*t3119*t2305;
  t4214 = t4163 + t4190;
  t3472 = -0.103955395616*t1048*t3470;
  t4531 = t1160*t3119*t464;
  t4540 = -1.*t38*t2305;
  t4547 = t4531 + t4540;
  t4548 = t1492*t4547;
  t4552 = t4548 + t3971;
  t4559 = t1751*t4547;
  t4574 = -1.*t1492*t3967;
  t4598 = t4559 + t4574;
  t4737 = t38*t1160;
  t4751 = t3119*t464*t2305;
  t4762 = t4737 + t4751;
  t4702 = -1.*t1492*t4547;
  t4766 = t1751*t4762;
  t4794 = t4702 + t4766;
  t4802 = -1.*t1751*t4547;
  t4814 = -1.*t1492*t4762;
  t4819 = t4802 + t4814;
  t4958 = t1492*t4762;
  t4960 = t4559 + t4958;
  t5082 = -1.*t1102*t1160*t1492;
  t5093 = t1751*t1102*t2305;
  t5094 = t5082 + t5093;
  t5108 = -1.*t1751*t1102*t1160;
  t5112 = -1.*t1102*t1492*t2305;
  t5120 = t5108 + t5112;
  t5214 = t1102*t1160*t1492;
  t5221 = -1.*t1751*t1102*t2305;
  t5240 = t5214 + t5221;
  t5279 = t1751*t1102*t1160;
  t5297 = t1102*t1492*t2305;
  t5304 = t5279 + t5297;
  t5567 = t1160*t1492*t464;
  t5569 = -1.*t1751*t464*t2305;
  t5571 = t5567 + t5569;
  t5592 = -1.*t1751*t1160*t464;
  t5595 = -1.*t1492*t464*t2305;
  t5602 = t5592 + t5595;
  t734 = -1.*t38*t427*t464;
  t2367 = -0.103955395616*t1048*t2324;
  t2528 = t2400*t2502;
  t2602 = t734 + t2367 + t2528;
  t2721 = -1.*t38*t2718*t464;
  t2795 = t2792*t2324;
  t2845 = -0.103955395616*t1048*t2502;
  t2853 = t2721 + t2795 + t2845;
  t2888 = -1.*t2868*t38*t464;
  t2923 = t2912*t2324;
  t2955 = t2939*t2502;
  t3004 = t2888 + t2923 + t2955;
  t3040 = 0.707107*t3004;
  t3222 = -0.103955395616*t1048*t3216;
  t3292 = t2792*t3291;
  t3298 = t3222 + t3292;
  t3341 = t2400*t3216;
  t3372 = -0.103955395616*t1048*t3291;
  t3387 = t3341 + t3372;
  t3398 = t2939*t3216;
  t3404 = t2912*t3291;
  t3411 = t3398 + t3404;
  t3414 = 0.707107*t3411;
  t3521 = t2792*t3501;
  t3535 = t3472 + t3521;
  t3551 = t2400*t3470;
  t3552 = -0.103955395616*t1048*t3501;
  t3555 = t3551 + t3552;
  t3569 = t2939*t3470;
  t3583 = t2912*t3501;
  t3596 = t3569 + t3583;
  t3606 = 0.707107*t3596;
  t3639 = -1.0000001112680001*t38*t1102*t389;
  t3668 = 0.104528*t764*t3470;
  t3756 = 0.994522*t764*t3703;
  t3785 = t3639 + t3668 + t3756;
  t3786 = 0.707107*t3785;
  t3790 = -0.994522*t764*t38*t1102;
  t3799 = -0.103955395616*t389*t3470;
  t3805 = -0.9890740084840001*t389*t3703;
  t3806 = t3790 + t3799 + t3805;
  t3811 = -0.104528*t764*t38*t1102;
  t3812 = -0.010926102783999999*t389*t3470;
  t3816 = -0.103955395616*t389*t3703;
  t3820 = t3811 + t3812 + t3816;
  t3903 = -1.*t1102*t427*t3119;
  t3977 = -0.103955395616*t1048*t3975;
  t4001 = t2400*t3998;
  t4012 = t3903 + t3977 + t4001;
  t4015 = -1.*t1102*t2718*t3119;
  t4018 = t2792*t3975;
  t4029 = -0.103955395616*t1048*t3998;
  t4030 = t4015 + t4018 + t4029;
  t4040 = -1.*t2868*t1102*t3119;
  t4044 = t2912*t3975;
  t4049 = t2939*t3998;
  t4063 = t4040 + t4044 + t4049;
  t4076 = 0.707107*t4063;
  t4107 = -1.*t427*t3119*t464;
  t4159 = -0.103955395616*t1048*t4132;
  t4224 = t2400*t4214;
  t4258 = t4107 + t4159 + t4224;
  t4262 = -1.*t2718*t3119*t464;
  t4263 = t2792*t4132;
  t4265 = -0.103955395616*t1048*t4214;
  t4290 = t4262 + t4263 + t4265;
  t4321 = -1.*t2868*t3119*t464;
  t4323 = t2912*t4132;
  t4330 = t2939*t4214;
  t4338 = t4321 + t4323 + t4330;
  t4340 = 0.707107*t4338;
  t4374 = t38*t1102*t427;
  t4380 = t2400*t3703;
  t4392 = t4374 + t3472 + t4380;
  t4408 = t38*t1102*t2718;
  t4434 = t2792*t3470;
  t4438 = -0.103955395616*t1048*t3703;
  t4439 = t4408 + t4434 + t4438;
  t4465 = t2868*t38*t1102;
  t4479 = t2912*t3470;
  t4493 = t2939*t3703;
  t4496 = t4465 + t4479 + t4493;
  t4498 = 0.707107*t4496;
  t4557 = -0.103955395616*t1048*t4552;
  t4599 = t2792*t4598;
  t4615 = t4557 + t4599;
  t4619 = t2400*t4552;
  t4623 = -0.103955395616*t1048*t4598;
  t4628 = t4619 + t4623;
  t4672 = t2939*t4552;
  t4674 = t2912*t4598;
  t4677 = t4672 + t4674;
  t4679 = 0.707107*t4677;
  t4797 = -0.103955395616*t1048*t4794;
  t4823 = t2792*t4819;
  t4824 = t4797 + t4823;
  t4832 = t2400*t4794;
  t4835 = -0.103955395616*t1048*t4819;
  t4842 = t4832 + t4835;
  t4868 = t2939*t4794;
  t4924 = t2912*t4819;
  t4929 = t4868 + t4924;
  t4932 = 0.707107*t4929;
  t4943 = -1.0000001112680001*t1102*t389*t3119;
  t4957 = 0.104528*t764*t4794;
  t4963 = 0.994522*t764*t4960;
  t4964 = t4943 + t4957 + t4963;
  t4972 = 0.707107*t4964;
  t4980 = -0.994522*t764*t1102*t3119;
  t4992 = -0.103955395616*t389*t4794;
  t5002 = -0.9890740084840001*t389*t4960;
  t5011 = t4980 + t4992 + t5002;
  t5033 = -0.104528*t764*t1102*t3119;
  t5044 = -0.010926102783999999*t389*t4794;
  t5047 = -0.103955395616*t389*t4960;
  t5048 = t5033 + t5044 + t5047;
  t5104 = -0.103955395616*t1048*t5094;
  t5123 = t2792*t5120;
  t5126 = t5104 + t5123;
  t5137 = t2400*t5094;
  t5138 = -0.103955395616*t1048*t5120;
  t5158 = t5137 + t5138;
  t5168 = t2939*t5094;
  t5188 = t2912*t5120;
  t5191 = t5168 + t5188;
  t5196 = 0.707107*t5191;
  t5248 = -0.103955395616*t1048*t5240;
  t5310 = t2792*t5304;
  t5312 = t5248 + t5310;
  t5332 = t2400*t5240;
  t5351 = -0.103955395616*t1048*t5304;
  t5357 = t5332 + t5351;
  t5403 = t2939*t5240;
  t5421 = t2912*t5304;
  t5422 = t5403 + t5421;
  t5426 = 0.707107*t5422;
  t5456 = 1.0000001112680001*t389*t464;
  t5457 = 0.104528*t764*t5094;
  t5459 = 0.994522*t764*t5304;
  t5460 = t5456 + t5457 + t5459;
  t5461 = 0.707107*t5460;
  t5466 = 0.994522*t764*t464;
  t5476 = -0.103955395616*t389*t5094;
  t5477 = -0.9890740084840001*t389*t5304;
  t5479 = t5466 + t5476 + t5477;
  t5511 = 0.104528*t764*t464;
  t5516 = -0.010926102783999999*t389*t5094;
  t5530 = -0.103955395616*t389*t5304;
  t5544 = t5511 + t5516 + t5530;
  t5566 = -1.*t1102*t427;
  t5588 = -0.103955395616*t1048*t5571;
  t5604 = t2400*t5602;
  t5605 = t5566 + t5588 + t5604;
  t5611 = -1.*t1102*t2718;
  t5627 = t2792*t5571;
  t5633 = -0.103955395616*t1048*t5602;
  t5639 = t5611 + t5627 + t5633;
  t5644 = -1.*t2868*t1102;
  t5652 = t2912*t5571;
  t5657 = t2939*t5602;
  t5674 = t5644 + t5652 + t5657;
  t5689 = 0.707107*t5674;
  p_output1[0]=(0.703234*t4012 + 0.073913*t4030 + t4076)*var2[3] + (0.703234*t2602 + 0.073913*t2853 + t3040)*var2[4] + (0.073913*t3298 + 0.703234*t3387 + t3414)*var2[5] + (0.073913*t3535 + 0.703234*t3555 + t3606)*var2[24] + (t3786 + 0.703234*t3806 + 0.073913*t3820)*var2[25];
  p_output1[1]=(0.703234*t4392 + 0.073913*t4439 + t4498)*var2[3] + (0.703234*t4258 + 0.073913*t4290 + t4340)*var2[4] + (0.073913*t4615 + 0.703234*t4628 + t4679)*var2[5] + (0.073913*t4824 + 0.703234*t4842 + t4932)*var2[24] + (t4972 + 0.703234*t5011 + 0.073913*t5048)*var2[25];
  p_output1[2]=(0.703234*t5605 + 0.073913*t5639 + t5689)*var2[4] + (0.073913*t5312 + 0.703234*t5357 + t5426)*var2[5] + (0.073913*t5126 + 0.703234*t5158 + t5196)*var2[24] + (t5461 + 0.703234*t5479 + 0.073913*t5544)*var2[25];
  p_output1[3]=(-0.703234*t4012 - 0.073913*t4030 + t4076)*var2[3] + (-0.703234*t2602 - 0.073913*t2853 + t3040)*var2[4] + (-0.073913*t3298 - 0.703234*t3387 + t3414)*var2[5] + (-0.073913*t3535 - 0.703234*t3555 + t3606)*var2[24] + (t3786 - 0.703234*t3806 - 0.073913*t3820)*var2[25];
  p_output1[4]=(-0.703234*t4392 - 0.073913*t4439 + t4498)*var2[3] + (-0.703234*t4258 - 0.073913*t4290 + t4340)*var2[4] + (-0.073913*t4615 - 0.703234*t4628 + t4679)*var2[5] + (-0.073913*t4824 - 0.703234*t4842 + t4932)*var2[24] + (t4972 - 0.703234*t5011 - 0.073913*t5048)*var2[25];
  p_output1[5]=(-0.703234*t5605 - 0.073913*t5639 + t5689)*var2[4] + (-0.073913*t5312 - 0.703234*t5357 + t5426)*var2[5] + (-0.073913*t5126 - 0.703234*t5158 + t5196)*var2[24] + (t5461 - 0.703234*t5479 - 0.073913*t5544)*var2[25];
  p_output1[6]=(-0.104528*t4012 + 0.994522*t4030)*var2[3] + (-0.104528*t2602 + 0.994522*t2853)*var2[4] + (0.994522*t3298 - 0.104528*t3387)*var2[5] + (0.994522*t3535 - 0.104528*t3555)*var2[24] + (-0.104528*t3806 + 0.994522*t3820)*var2[25];
  p_output1[7]=(-0.104528*t4392 + 0.994522*t4439)*var2[3] + (-0.104528*t4258 + 0.994522*t4290)*var2[4] + (0.994522*t4615 - 0.104528*t4628)*var2[5] + (0.994522*t4824 - 0.104528*t4842)*var2[24] + (-0.104528*t5011 + 0.994522*t5048)*var2[25];
  p_output1[8]=(-0.104528*t5605 + 0.994522*t5639)*var2[4] + (0.994522*t5312 - 0.104528*t5357)*var2[5] + (0.994522*t5126 - 0.104528*t5158)*var2[24] + (-0.104528*t5479 + 0.994522*t5544)*var2[25];
}



void dR_right_shoulder_pitch_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

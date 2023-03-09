/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_shoulder_pitch_joint_right_src.h"

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
  double t1716;
  double t2836;
  double t3074;
  double t3217;
  double t3366;
  double t3421;
  double t4190;
  double t4107;
  double t4131;
  double t4198;
  double t866;
  double t1225;
  double t1703;
  double t4185;
  double t4278;
  double t4307;
  double t4405;
  double t4442;
  double t4443;
  double t411;
  double t4523;
  double t4534;
  double t4498;
  double t4509;
  double t4511;
  double t4537;
  double t4545;
  double t4549;
  double t4471;
  double t4474;
  double t2140;
  double t2283;
  double t2707;
  double t2716;
  double t1710;
  double t2337;
  double t2728;
  double t2783;
  double t3368;
  double t3758;
  double t3838;
  double t4341;
  double t4380;
  double t4404;
  double t4447;
  double t4467;
  double t4480;
  double t4484;
  double t4639;
  double t4640;
  double t4641;
  double t4643;
  double t4645;
  double t4646;
  double t4516;
  double t4520;
  double t4535;
  double t4536;
  double t4650;
  double t4653;
  double t4654;
  double t4564;
  double t4565;
  double t4660;
  double t4661;
  double t4664;
  double t4570;
  double t4573;
  double t4595;
  double t4597;
  double t4706;
  double t4713;
  double t4717;
  double t4721;
  double t4723;
  double t4725;
  double t4764;
  double t4767;
  double t4774;
  double t4776;
  double t4778;
  double t4780;
  double t4825;
  double t4838;
  double t4842;
  double t4846;
  double t4847;
  double t4851;
  double t4891;
  double t4894;
  double t4899;
  double t4904;
  double t4905;
  double t4908;
  double t4912;
  double t4914;
  double t4954;
  double t4955;
  double t4956;
  double t4963;
  double t4964;
  double t4968;
  double t4969;
  double t4970;
  double t5014;
  double t5015;
  double t5018;
  double t5022;
  double t5023;
  double t5026;
  double t4667;
  double t5076;
  double t5077;
  double t5078;
  double t5063;
  double t5064;
  double t5066;
  double t5072;
  double t5073;
  double t5116;
  double t5117;
  double t5121;
  double t5126;
  double t5127;
  double t5129;
  double t5135;
  double t5147;
  double t5148;
  double t5193;
  double t5196;
  double t5198;
  double t5202;
  double t5203;
  double t5206;
  double t5246;
  double t5250;
  double t5251;
  double t5253;
  double t5255;
  double t5257;
  double t5260;
  double t5262;
  double t5264;
  double t5309;
  double t5310;
  t1716 = Sin(var1[25]);
  t2836 = Sin(var1[3]);
  t3074 = Cos(var1[24]);
  t3217 = -1.*t3074;
  t3366 = 1. + t3217;
  t3421 = Sin(var1[24]);
  t4190 = Cos(var1[3]);
  t4107 = Cos(var1[5]);
  t4131 = Sin(var1[4]);
  t4198 = Sin(var1[5]);
  t866 = Cos(var1[25]);
  t1225 = -1.*t866;
  t1703 = 1. + t1225;
  t4185 = -1.*t4107*t2836*t4131;
  t4278 = t4190*t4198;
  t4307 = t4185 + t4278;
  t4405 = -1.*t4190*t4107;
  t4442 = -1.*t2836*t4131*t4198;
  t4443 = t4405 + t4442;
  t411 = Cos(var1[4]);
  t4523 = -0.994522*t1716;
  t4534 = 0. + t4523;
  t4498 = -1.*t3421*t4307;
  t4509 = t3074*t4443;
  t4511 = t4498 + t4509;
  t4537 = t3074*t4307;
  t4545 = t3421*t4443;
  t4549 = t4537 + t4545;
  t4471 = -0.104528*t1716;
  t4474 = 0. + t4471;
  t2140 = 0.104528*t1716;
  t2283 = 0. + t2140;
  t2707 = 0.994522*t1716;
  t2716 = 0. + t2707;
  t1710 = -0.056500534356700764*t1703;
  t2337 = 0.040271188976*t2283;
  t2728 = 0.38315650737400003*t2716;
  t2783 = 0. + t1710 + t2337 + t2728;
  t3368 = 0.4*t3366;
  t3758 = -0.12*t3421;
  t3838 = 0. + t3368 + t3758;
  t4341 = -0.12*t3366;
  t4380 = -0.4*t3421;
  t4404 = 0. + t4341 + t4380;
  t4447 = 1.1345904784751044e-7*var1[25];
  t4467 = 0.04027119345689465*t1703;
  t4480 = -0.05650052807*t4474;
  t4484 = t4447 + t4467 + t4480;
  t4639 = t4190*t4107*t4131;
  t4640 = t2836*t4198;
  t4641 = t4639 + t4640;
  t4643 = -1.*t4107*t2836;
  t4645 = t4190*t4131*t4198;
  t4646 = t4643 + t4645;
  t4516 = -1.1924972351948546e-8*var1[25];
  t4520 = 0.38315655000705834*t1703;
  t4535 = -0.05650052807*t4534;
  t4536 = t4516 + t4520 + t4535;
  t4650 = -1.*t3421*t4641;
  t4653 = t3074*t4646;
  t4654 = t4650 + t4653;
  t4564 = -0.9890740084840001*t1703;
  t4565 = 1. + t4564;
  t4660 = t3074*t4641;
  t4661 = t3421*t4646;
  t4664 = t4660 + t4661;
  t4570 = -0.010926102783999999*t1703;
  t4573 = 1. + t4570;
  t4595 = -1.0000001112680001*t1703;
  t4597 = 1. + t4595;
  t4706 = -1.*t4190*t411*t4107*t3421;
  t4713 = t3074*t4190*t411*t4198;
  t4717 = t4706 + t4713;
  t4721 = t3074*t4190*t411*t4107;
  t4723 = t4190*t411*t3421*t4198;
  t4725 = t4721 + t4723;
  t4764 = -1.*t411*t4107*t3421*t2836;
  t4767 = t3074*t411*t2836*t4198;
  t4774 = t4764 + t4767;
  t4776 = t3074*t411*t4107*t2836;
  t4778 = t411*t3421*t2836*t4198;
  t4780 = t4776 + t4778;
  t4825 = t4107*t3421*t4131;
  t4838 = -1.*t3074*t4131*t4198;
  t4842 = t4825 + t4838;
  t4846 = -1.*t3074*t4107*t4131;
  t4847 = -1.*t3421*t4131*t4198;
  t4851 = t4846 + t4847;
  t4891 = t4107*t2836;
  t4894 = -1.*t4190*t4131*t4198;
  t4899 = t4891 + t4894;
  t4904 = t3421*t4641;
  t4905 = t3074*t4899;
  t4908 = t4904 + t4905;
  t4912 = -1.*t3421*t4899;
  t4914 = t4660 + t4912;
  t4954 = t4107*t2836*t4131;
  t4955 = -1.*t4190*t4198;
  t4956 = t4954 + t4955;
  t4963 = t3421*t4956;
  t4964 = t4963 + t4509;
  t4968 = t3074*t4956;
  t4969 = -1.*t3421*t4443;
  t4970 = t4968 + t4969;
  t5014 = t411*t4107*t3421;
  t5015 = -1.*t3074*t411*t4198;
  t5018 = t5014 + t5015;
  t5022 = t3074*t411*t4107;
  t5023 = t411*t3421*t4198;
  t5026 = t5022 + t5023;
  t4667 = -0.103955395616*t1703*t4654;
  t5076 = -1.*t3074*t4641;
  t5077 = -1.*t3421*t4646;
  t5078 = t5076 + t5077;
  t5063 = -0.12*t3074;
  t5064 = 0.4*t3421;
  t5066 = t5063 + t5064;
  t5072 = -0.4*t3074;
  t5073 = t5072 + t3758;
  t5116 = t4190*t4107;
  t5117 = t2836*t4131*t4198;
  t5121 = t5116 + t5117;
  t5126 = -1.*t3421*t4956;
  t5127 = t3074*t5121;
  t5129 = t5126 + t5127;
  t5135 = -1.*t3074*t4956;
  t5147 = -1.*t3421*t5121;
  t5148 = t5135 + t5147;
  t5193 = -1.*t411*t4107*t3421;
  t5196 = t3074*t411*t4198;
  t5198 = t5193 + t5196;
  t5202 = -1.*t3074*t411*t4107;
  t5203 = -1.*t411*t3421*t4198;
  t5206 = t5202 + t5203;
  t5246 = 0.3852670428678886*t866;
  t5250 = -0.056500534356700764*t1716;
  t5251 = t5246 + t5250;
  t5253 = 0.0059058871981009595*t866;
  t5255 = 0.04027119345689465*t1716;
  t5257 = 1.1345904784751044e-7 + t5253 + t5255;
  t5260 = 0.05619101817723254*t866;
  t5262 = 0.38315655000705834*t1716;
  t5264 = -1.1924972351948546e-8 + t5260 + t5262;
  t5309 = t3421*t5121;
  t5310 = t4968 + t5309;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2783*t2836*t411 + t3838*t4307 + t4404*t4443 + t4484*t4511 + t4536*t4549 + 0.398799*(-0.103955395616*t1703*t4511 - 1.*t2836*t411*t4534 + t4549*t4565) - 0.108558*(-1.*t2836*t411*t4474 - 0.103955395616*t1703*t4549 + t4511*t4573) - 0.0565*(t2283*t4511 + t2716*t4549 - 1.*t2836*t411*t4597);
  p_output1[10]=t2783*t411*t4190 + t3838*t4641 + t4404*t4646 + t4484*t4654 + t4536*t4664 - 0.108558*(t411*t4190*t4474 + t4573*t4654 - 0.103955395616*t1703*t4664) - 0.0565*(t411*t4190*t4597 + t2283*t4654 + t2716*t4664) + 0.398799*(t411*t4190*t4534 + t4565*t4664 + t4667);
  p_output1[11]=0;
  p_output1[12]=t3838*t4107*t411*t4190 - 1.*t2783*t4131*t4190 + t411*t4190*t4198*t4404 + t4484*t4717 + t4536*t4725 - 0.108558*(-1.*t4131*t4190*t4474 + t4573*t4717 - 0.103955395616*t1703*t4725) - 0.0565*(-1.*t4131*t4190*t4597 + t2283*t4717 + t2716*t4725) + 0.398799*(-1.*t4131*t4190*t4534 - 0.103955395616*t1703*t4717 + t4565*t4725);
  p_output1[13]=t2836*t3838*t4107*t411 - 1.*t2783*t2836*t4131 + t2836*t411*t4198*t4404 + t4484*t4774 + t4536*t4780 - 0.108558*(-1.*t2836*t4131*t4474 + t4573*t4774 - 0.103955395616*t1703*t4780) - 0.0565*(-1.*t2836*t4131*t4597 + t2283*t4774 + t2716*t4780) + 0.398799*(-1.*t2836*t4131*t4534 - 0.103955395616*t1703*t4774 + t4565*t4780);
  p_output1[14]=-1.*t2783*t411 - 1.*t3838*t4107*t4131 - 1.*t4131*t4198*t4404 + t4484*t4842 + t4536*t4851 - 0.108558*(-1.*t411*t4474 + t4573*t4842 - 0.103955395616*t1703*t4851) - 0.0565*(-1.*t411*t4597 + t2283*t4842 + t2716*t4851) + 0.398799*(-1.*t411*t4534 - 0.103955395616*t1703*t4842 + t4565*t4851);
  p_output1[15]=t4404*t4641 + t3838*t4899 + t4536*t4908 + t4484*t4914 + 0.398799*(t4565*t4908 - 0.103955395616*t1703*t4914) - 0.0565*(t2716*t4908 + t2283*t4914) - 0.108558*(-0.103955395616*t1703*t4908 + t4573*t4914);
  p_output1[16]=t3838*t4443 + t4404*t4956 + t4536*t4964 + t4484*t4970 + 0.398799*(t4565*t4964 - 0.103955395616*t1703*t4970) - 0.0565*(t2716*t4964 + t2283*t4970) - 0.108558*(-0.103955395616*t1703*t4964 + t4573*t4970);
  p_output1[17]=-1.*t3838*t411*t4198 + t4107*t411*t4404 + t4536*t5018 + t4484*t5026 + 0.398799*(t4565*t5018 - 0.103955395616*t1703*t5026) - 0.0565*(t2716*t5018 + t2283*t5026) - 0.108558*(-0.103955395616*t1703*t5018 + t4573*t5026);
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
  p_output1[72]=t4536*t4654 + t4641*t5066 + t4646*t5073 + t4484*t5078 + 0.398799*(t4565*t4654 - 0.103955395616*t1703*t5078) - 0.0565*(t2716*t4654 + t2283*t5078) - 0.108558*(t4667 + t4573*t5078);
  p_output1[73]=t4956*t5066 + t5073*t5121 + t4536*t5129 + t4484*t5148 + 0.398799*(t4565*t5129 - 0.103955395616*t1703*t5148) - 0.0565*(t2716*t5129 + t2283*t5148) - 0.108558*(-0.103955395616*t1703*t5129 + t4573*t5148);
  p_output1[74]=t4107*t411*t5066 + t411*t4198*t5073 + t4536*t5198 + t4484*t5206 + 0.398799*(t4565*t5198 - 0.103955395616*t1703*t5206) - 0.0565*(t2716*t5198 + t2283*t5206) - 0.108558*(-0.103955395616*t1703*t5198 + t4573*t5206);
  p_output1[75]=t411*t4190*t5251 + t4654*t5257 + t4664*t5264 + 0.398799*(-0.103955395616*t1716*t4654 - 0.9890740084840001*t1716*t4664 - 0.994522*t411*t4190*t866) - 0.108558*(-0.010926102783999999*t1716*t4654 - 0.103955395616*t1716*t4664 - 0.104528*t411*t4190*t866) - 0.0565*(-1.0000001112680001*t1716*t411*t4190 + 0.104528*t4654*t866 + 0.994522*t4664*t866);
  p_output1[76]=t2836*t411*t5251 + t5129*t5257 + t5264*t5310 + 0.398799*(-0.103955395616*t1716*t5129 - 0.9890740084840001*t1716*t5310 - 0.994522*t2836*t411*t866) - 0.108558*(-0.010926102783999999*t1716*t5129 - 0.103955395616*t1716*t5310 - 0.104528*t2836*t411*t866) - 0.0565*(-1.0000001112680001*t1716*t2836*t411 + 0.104528*t5129*t866 + 0.994522*t5310*t866);
  p_output1[77]=-1.*t4131*t5251 + t5198*t5257 + t5026*t5264 - 0.108558*(-0.103955395616*t1716*t5026 - 0.010926102783999999*t1716*t5198 + 0.104528*t4131*t866) + 0.398799*(-0.9890740084840001*t1716*t5026 - 0.103955395616*t1716*t5198 + 0.994522*t4131*t866) - 0.0565*(1.0000001112680001*t1716*t4131 + 0.994522*t5026*t866 + 0.104528*t5198*t866);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jp_shoulder_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

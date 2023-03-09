/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_shoulder_pitch_joint_left_src.h"

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
  double t1469;
  double t2005;
  double t2153;
  double t2231;
  double t2257;
  double t2390;
  double t3551;
  double t2880;
  double t3125;
  double t3650;
  double t394;
  double t1371;
  double t1381;
  double t3280;
  double t3742;
  double t3755;
  double t3998;
  double t4001;
  double t4028;
  double t208;
  double t4304;
  double t4306;
  double t4235;
  double t4244;
  double t4256;
  double t4329;
  double t4336;
  double t4342;
  double t4142;
  double t4143;
  double t1773;
  double t1981;
  double t1517;
  double t1749;
  double t1384;
  double t1761;
  double t1996;
  double t2001;
  double t2273;
  double t2553;
  double t2878;
  double t3823;
  double t3959;
  double t3984;
  double t4131;
  double t4133;
  double t4194;
  double t4199;
  double t4455;
  double t4457;
  double t4459;
  double t4466;
  double t4472;
  double t4473;
  double t4282;
  double t4303;
  double t4314;
  double t4323;
  double t4482;
  double t4485;
  double t4486;
  double t4369;
  double t4370;
  double t4490;
  double t4492;
  double t4493;
  double t4404;
  double t4412;
  double t4428;
  double t4430;
  double t4537;
  double t4540;
  double t4542;
  double t4545;
  double t4548;
  double t4549;
  double t4593;
  double t4594;
  double t4595;
  double t4602;
  double t4603;
  double t4605;
  double t4655;
  double t4662;
  double t4664;
  double t4668;
  double t4670;
  double t4673;
  double t4718;
  double t4719;
  double t4721;
  double t4724;
  double t4725;
  double t4728;
  double t4733;
  double t4734;
  double t4753;
  double t4754;
  double t4756;
  double t4760;
  double t4761;
  double t4763;
  double t4764;
  double t4765;
  double t4822;
  double t4823;
  double t4825;
  double t4827;
  double t4829;
  double t4830;
  double t4498;
  double t4870;
  double t4872;
  double t4873;
  double t4858;
  double t4860;
  double t4861;
  double t4865;
  double t4867;
  double t4915;
  double t4923;
  double t4927;
  double t4935;
  double t4936;
  double t4937;
  double t4941;
  double t4942;
  double t4944;
  double t4979;
  double t4980;
  double t4981;
  double t4985;
  double t4986;
  double t4989;
  double t5021;
  double t5022;
  double t5023;
  double t5027;
  double t5028;
  double t5029;
  double t5033;
  double t5034;
  double t5037;
  double t5085;
  double t5087;
  t1469 = Sin(var1[14]);
  t2005 = Sin(var1[3]);
  t2153 = Cos(var1[13]);
  t2231 = -1.*t2153;
  t2257 = 1. + t2231;
  t2390 = Sin(var1[13]);
  t3551 = Cos(var1[3]);
  t2880 = Cos(var1[5]);
  t3125 = Sin(var1[4]);
  t3650 = Sin(var1[5]);
  t394 = Cos(var1[14]);
  t1371 = -1.*t394;
  t1381 = 1. + t1371;
  t3280 = -1.*t2880*t2005*t3125;
  t3742 = t3551*t3650;
  t3755 = t3280 + t3742;
  t3998 = -1.*t3551*t2880;
  t4001 = -1.*t2005*t3125*t3650;
  t4028 = t3998 + t4001;
  t208 = Cos(var1[4]);
  t4304 = 0.994522*t1469;
  t4306 = 0. + t4304;
  t4235 = -1.*t2390*t3755;
  t4244 = t2153*t4028;
  t4256 = t4235 + t4244;
  t4329 = t2153*t3755;
  t4336 = t2390*t4028;
  t4342 = t4329 + t4336;
  t4142 = -0.104528*t1469;
  t4143 = 0. + t4142;
  t1773 = 0.104528*t1469;
  t1981 = 0. + t1773;
  t1517 = -0.994522*t1469;
  t1749 = 0. + t1517;
  t1384 = -0.056500534356700764*t1381;
  t1761 = 0.38315650737400003*t1749;
  t1996 = -0.040271188976*t1981;
  t2001 = 0. + t1384 + t1761 + t1996;
  t2273 = 0.4*t2257;
  t2553 = 0.12*t2390;
  t2878 = 0. + t2273 + t2553;
  t3823 = 0.12*t2257;
  t3959 = -0.4*t2390;
  t3984 = 0. + t3823 + t3959;
  t4131 = 1.1345904784751044e-7*var1[14];
  t4133 = -0.04027119345689465*t1381;
  t4194 = -0.05650052807*t4143;
  t4199 = t4131 + t4133 + t4194;
  t4455 = t3551*t2880*t3125;
  t4457 = t2005*t3650;
  t4459 = t4455 + t4457;
  t4466 = -1.*t2880*t2005;
  t4472 = t3551*t3125*t3650;
  t4473 = t4466 + t4472;
  t4282 = 1.1924972351948546e-8*var1[14];
  t4303 = 0.38315655000705834*t1381;
  t4314 = -0.05650052807*t4306;
  t4323 = t4282 + t4303 + t4314;
  t4482 = -1.*t2390*t4459;
  t4485 = t2153*t4473;
  t4486 = t4482 + t4485;
  t4369 = -0.9890740084840001*t1381;
  t4370 = 1. + t4369;
  t4490 = t2153*t4459;
  t4492 = t2390*t4473;
  t4493 = t4490 + t4492;
  t4404 = -0.010926102783999999*t1381;
  t4412 = 1. + t4404;
  t4428 = -1.0000001112680001*t1381;
  t4430 = 1. + t4428;
  t4537 = -1.*t3551*t208*t2880*t2390;
  t4540 = t2153*t3551*t208*t3650;
  t4542 = t4537 + t4540;
  t4545 = t2153*t3551*t208*t2880;
  t4548 = t3551*t208*t2390*t3650;
  t4549 = t4545 + t4548;
  t4593 = -1.*t208*t2880*t2390*t2005;
  t4594 = t2153*t208*t2005*t3650;
  t4595 = t4593 + t4594;
  t4602 = t2153*t208*t2880*t2005;
  t4603 = t208*t2390*t2005*t3650;
  t4605 = t4602 + t4603;
  t4655 = t2880*t2390*t3125;
  t4662 = -1.*t2153*t3125*t3650;
  t4664 = t4655 + t4662;
  t4668 = -1.*t2153*t2880*t3125;
  t4670 = -1.*t2390*t3125*t3650;
  t4673 = t4668 + t4670;
  t4718 = t2880*t2005;
  t4719 = -1.*t3551*t3125*t3650;
  t4721 = t4718 + t4719;
  t4724 = t2390*t4459;
  t4725 = t2153*t4721;
  t4728 = t4724 + t4725;
  t4733 = -1.*t2390*t4721;
  t4734 = t4490 + t4733;
  t4753 = t2880*t2005*t3125;
  t4754 = -1.*t3551*t3650;
  t4756 = t4753 + t4754;
  t4760 = t2390*t4756;
  t4761 = t4760 + t4244;
  t4763 = t2153*t4756;
  t4764 = -1.*t2390*t4028;
  t4765 = t4763 + t4764;
  t4822 = t208*t2880*t2390;
  t4823 = -1.*t2153*t208*t3650;
  t4825 = t4822 + t4823;
  t4827 = t2153*t208*t2880;
  t4829 = t208*t2390*t3650;
  t4830 = t4827 + t4829;
  t4498 = 0.103955395616*t1381*t4486;
  t4870 = -1.*t2153*t4459;
  t4872 = -1.*t2390*t4473;
  t4873 = t4870 + t4872;
  t4858 = 0.12*t2153;
  t4860 = 0.4*t2390;
  t4861 = t4858 + t4860;
  t4865 = -0.4*t2153;
  t4867 = t4865 + t2553;
  t4915 = t3551*t2880;
  t4923 = t2005*t3125*t3650;
  t4927 = t4915 + t4923;
  t4935 = -1.*t2390*t4756;
  t4936 = t2153*t4927;
  t4937 = t4935 + t4936;
  t4941 = -1.*t2153*t4756;
  t4942 = -1.*t2390*t4927;
  t4944 = t4941 + t4942;
  t4979 = -1.*t208*t2880*t2390;
  t4980 = t2153*t208*t3650;
  t4981 = t4979 + t4980;
  t4985 = -1.*t2153*t208*t2880;
  t4986 = -1.*t208*t2390*t3650;
  t4989 = t4985 + t4986;
  t5021 = -0.3852670428678886*t394;
  t5022 = -0.056500534356700764*t1469;
  t5023 = t5021 + t5022;
  t5027 = 0.0059058871981009595*t394;
  t5028 = -0.04027119345689465*t1469;
  t5029 = 1.1345904784751044e-7 + t5027 + t5028;
  t5033 = -0.05619101817723254*t394;
  t5034 = 0.38315655000705834*t1469;
  t5037 = 1.1924972351948546e-8 + t5033 + t5034;
  t5085 = t2390*t4927;
  t5087 = t4763 + t5085;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2001*t2005*t208 + t2878*t3755 + t3984*t4028 + t4199*t4256 + t4323*t4342 + 0.398799*(0.103955395616*t1381*t4256 - 1.*t2005*t208*t4306 + t4342*t4370) + 0.108558*(-1.*t2005*t208*t4143 + 0.103955395616*t1381*t4342 + t4256*t4412) - 0.0565*(t1981*t4256 + t1749*t4342 - 1.*t2005*t208*t4430);
  p_output1[10]=t2001*t208*t3551 + t2878*t4459 + t3984*t4473 + t4199*t4486 + t4323*t4493 + 0.108558*(t208*t3551*t4143 + t4412*t4486 + 0.103955395616*t1381*t4493) - 0.0565*(t208*t3551*t4430 + t1981*t4486 + t1749*t4493) + 0.398799*(t208*t3551*t4306 + t4370*t4493 + t4498);
  p_output1[11]=0;
  p_output1[12]=t208*t2878*t2880*t3551 - 1.*t2001*t3125*t3551 + t208*t3551*t3650*t3984 + t4199*t4542 + t4323*t4549 + 0.108558*(-1.*t3125*t3551*t4143 + t4412*t4542 + 0.103955395616*t1381*t4549) - 0.0565*(-1.*t3125*t3551*t4430 + t1981*t4542 + t1749*t4549) + 0.398799*(-1.*t3125*t3551*t4306 + 0.103955395616*t1381*t4542 + t4370*t4549);
  p_output1[13]=t2005*t208*t2878*t2880 - 1.*t2001*t2005*t3125 + t2005*t208*t3650*t3984 + t4199*t4595 + t4323*t4605 + 0.108558*(-1.*t2005*t3125*t4143 + t4412*t4595 + 0.103955395616*t1381*t4605) - 0.0565*(-1.*t2005*t3125*t4430 + t1981*t4595 + t1749*t4605) + 0.398799*(-1.*t2005*t3125*t4306 + 0.103955395616*t1381*t4595 + t4370*t4605);
  p_output1[14]=-1.*t2001*t208 - 1.*t2878*t2880*t3125 - 1.*t3125*t3650*t3984 + t4199*t4664 + t4323*t4673 + 0.108558*(-1.*t208*t4143 + t4412*t4664 + 0.103955395616*t1381*t4673) - 0.0565*(-1.*t208*t4430 + t1981*t4664 + t1749*t4673) + 0.398799*(-1.*t208*t4306 + 0.103955395616*t1381*t4664 + t4370*t4673);
  p_output1[15]=t3984*t4459 + t2878*t4721 + t4323*t4728 + t4199*t4734 + 0.398799*(t4370*t4728 + 0.103955395616*t1381*t4734) - 0.0565*(t1749*t4728 + t1981*t4734) + 0.108558*(0.103955395616*t1381*t4728 + t4412*t4734);
  p_output1[16]=t2878*t4028 + t3984*t4756 + t4323*t4761 + t4199*t4765 + 0.398799*(t4370*t4761 + 0.103955395616*t1381*t4765) - 0.0565*(t1749*t4761 + t1981*t4765) + 0.108558*(0.103955395616*t1381*t4761 + t4412*t4765);
  p_output1[17]=-1.*t208*t2878*t3650 + t208*t2880*t3984 + t4323*t4825 + t4199*t4830 + 0.398799*(t4370*t4825 + 0.103955395616*t1381*t4830) - 0.0565*(t1749*t4825 + t1981*t4830) + 0.108558*(0.103955395616*t1381*t4825 + t4412*t4830);
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
  p_output1[39]=t4323*t4486 + t4459*t4861 + t4473*t4867 + t4199*t4873 + 0.398799*(t4370*t4486 + 0.103955395616*t1381*t4873) - 0.0565*(t1749*t4486 + t1981*t4873) + 0.108558*(t4498 + t4412*t4873);
  p_output1[40]=t4756*t4861 + t4867*t4927 + t4323*t4937 + t4199*t4944 + 0.398799*(t4370*t4937 + 0.103955395616*t1381*t4944) - 0.0565*(t1749*t4937 + t1981*t4944) + 0.108558*(0.103955395616*t1381*t4937 + t4412*t4944);
  p_output1[41]=t208*t2880*t4861 + t208*t3650*t4867 + t4323*t4981 + t4199*t4989 + 0.398799*(t4370*t4981 + 0.103955395616*t1381*t4989) - 0.0565*(t1749*t4981 + t1981*t4989) + 0.108558*(0.103955395616*t1381*t4981 + t4412*t4989);
  p_output1[42]=0.398799*(0.994522*t208*t3551*t394 + 0.103955395616*t1469*t4486 - 0.9890740084840001*t1469*t4493) + 0.108558*(-0.104528*t208*t3551*t394 - 0.010926102783999999*t1469*t4486 + 0.103955395616*t1469*t4493) - 0.0565*(-1.0000001112680001*t1469*t208*t3551 + 0.104528*t394*t4486 - 0.994522*t394*t4493) + t208*t3551*t5023 + t4486*t5029 + t4493*t5037;
  p_output1[43]=t2005*t208*t5023 + t4937*t5029 + t5037*t5087 + 0.398799*(0.994522*t2005*t208*t394 + 0.103955395616*t1469*t4937 - 0.9890740084840001*t1469*t5087) + 0.108558*(-0.104528*t2005*t208*t394 - 0.010926102783999999*t1469*t4937 + 0.103955395616*t1469*t5087) - 0.0565*(-1.0000001112680001*t1469*t2005*t208 + 0.104528*t394*t4937 - 0.994522*t394*t5087);
  p_output1[44]=0.108558*(0.104528*t3125*t394 + 0.103955395616*t1469*t4830 - 0.010926102783999999*t1469*t4981) + 0.398799*(-0.994522*t3125*t394 - 0.9890740084840001*t1469*t4830 + 0.103955395616*t1469*t4981) - 0.0565*(1.0000001112680001*t1469*t3125 - 0.994522*t394*t4830 + 0.104528*t394*t4981) - 1.*t3125*t5023 + t4981*t5029 + t4830*t5037;
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



void Jp_shoulder_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

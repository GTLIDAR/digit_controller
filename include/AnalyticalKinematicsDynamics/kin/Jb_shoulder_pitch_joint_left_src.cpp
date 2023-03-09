/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_shoulder_pitch_joint_left_src.h"

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
  double t59;
  double t103;
  double t186;
  double t422;
  double t786;
  double t199;
  double t274;
  double t366;
  double t403;
  double t490;
  double t493;
  double t540;
  double t546;
  double t46;
  double t912;
  double t995;
  double t1010;
  double t1061;
  double t1104;
  double t1513;
  double t1523;
  double t1605;
  double t42;
  double t1803;
  double t1818;
  double t1888;
  double t636;
  double t1656;
  double t1772;
  double t1891;
  double t21;
  double t3030;
  double t3039;
  double t3307;
  double t3366;
  double t1913;
  double t1974;
  double t2053;
  double t2107;
  double t2160;
  double t2249;
  double t2310;
  double t2323;
  double t2330;
  double t2384;
  double t2456;
  double t3543;
  double t3547;
  double t3578;
  double t3123;
  double t3381;
  double t3409;
  double t4329;
  double t4353;
  double t4361;
  double t4199;
  double t4252;
  double t4282;
  double t4479;
  double t4540;
  double t4543;
  double t4293;
  double t4411;
  double t4455;
  double t1794;
  double t1896;
  double t1905;
  double t2145;
  double t2394;
  double t2416;
  double t2494;
  double t2693;
  double t2725;
  double t2728;
  double t2745;
  double t3445;
  double t3765;
  double t3768;
  double t3784;
  double t3962;
  double t3965;
  double t4025;
  double t4068;
  double t4088;
  double t4100;
  double t4126;
  double t4463;
  double t4545;
  double t4557;
  double t4565;
  double t4576;
  double t4586;
  double t4589;
  double t4592;
  double t4594;
  double t4597;
  double t4606;
  double t4616;
  double t4749;
  double t4751;
  double t4752;
  double t4768;
  double t4771;
  double t4791;
  double t4808;
  double t4811;
  double t4812;
  double t4818;
  double t4819;
  double t4829;
  double t4830;
  double t4835;
  double t4838;
  double t4840;
  double t4845;
  double t4753;
  double t4757;
  double t4761;
  double t4860;
  double t4861;
  double t4866;
  double t4867;
  double t4868;
  double t4776;
  double t4779;
  double t4822;
  double t4851;
  double t4855;
  double t4889;
  double t4896;
  double t4898;
  double t4903;
  double t4909;
  double t4911;
  double t4913;
  double t4923;
  double t4934;
  double t4944;
  double t4856;
  double t4873;
  double t4879;
  double t4920;
  double t4953;
  double t4955;
  double t4960;
  double t4962;
  double t4970;
  double t4744;
  double t4745;
  double t4747;
  double t4883;
  double t4981;
  double t5022;
  double t5031;
  double t5050;
  double t5073;
  double t5094;
  double t5087;
  double t5129;
  double t5118;
  double t5164;
  double t5151;
  double t5248;
  double t5242;
  double t5275;
  double t5321;
  double t5324;
  t59 = Cos(var1[14]);
  t103 = -1.*t59;
  t186 = 1. + t103;
  t422 = Sin(var1[14]);
  t786 = Cos(var1[13]);
  t199 = -0.9890740084840001*t186;
  t274 = 1. + t199;
  t366 = 0.703234*t274;
  t403 = -0.007683655156165408*t186;
  t490 = -0.994522*t422;
  t493 = 0. + t490;
  t540 = 0.707107*t493;
  t546 = t366 + t403 + t540;
  t46 = Sin(var1[13]);
  t912 = -0.010926102783999999*t186;
  t995 = 1. + t912;
  t1010 = -0.073913*t995;
  t1061 = 0.07310496868062215*t186;
  t1104 = 0.104528*t422;
  t1513 = 0. + t1104;
  t1523 = 0.707107*t1513;
  t1605 = t1010 + t1061 + t1523;
  t42 = Cos(var1[5]);
  t1803 = t786*t546;
  t1818 = -1.*t46*t1605;
  t1888 = 0. + t1803 + t1818;
  t636 = t46*t546;
  t1656 = t786*t1605;
  t1772 = 0. + t636 + t1656;
  t1891 = Sin(var1[5]);
  t21 = Sin(var1[3]);
  t3030 = -0.707107*t493;
  t3039 = t366 + t403 + t3030;
  t3307 = -0.707107*t1513;
  t3366 = t1010 + t1061 + t3307;
  t1913 = Cos(var1[3]);
  t1974 = Cos(var1[4]);
  t2053 = -1.0000001112680001*t186;
  t2107 = 1. + t2053;
  t2160 = -0.104528*t422;
  t2249 = 0. + t2160;
  t2310 = -0.073913*t2249;
  t2323 = 0.994522*t422;
  t2330 = 0. + t2323;
  t2384 = 0.703234*t2330;
  t2456 = Sin(var1[4]);
  t3543 = t786*t3039;
  t3547 = -1.*t46*t3366;
  t3578 = 0. + t3543 + t3547;
  t3123 = t46*t3039;
  t3381 = t786*t3366;
  t3409 = 0. + t3123 + t3381;
  t4329 = -0.104528*t274;
  t4353 = -0.10338592795881554*t186;
  t4361 = t4329 + t4353;
  t4199 = -0.994522*t995;
  t4252 = -0.010866249592949247*t186;
  t4282 = t4199 + t4252;
  t4479 = t786*t4361;
  t4540 = -1.*t4282*t46;
  t4543 = 0. + t4479 + t4540;
  t4293 = t786*t4282;
  t4411 = t4361*t46;
  t4455 = 0. + t4293 + t4411;
  t1794 = t42*t1772;
  t1896 = -1.*t1888*t1891;
  t1905 = 0. + t1794 + t1896;
  t2145 = 0.707107*t2107;
  t2394 = 0. + t2145 + t2310 + t2384;
  t2416 = t1974*t2394;
  t2494 = t42*t1888;
  t2693 = t1772*t1891;
  t2725 = 0. + t2494 + t2693;
  t2728 = t2456*t2725;
  t2745 = 0. + t2416 + t2728;
  t3445 = t42*t3409;
  t3765 = -1.*t3578*t1891;
  t3768 = 0. + t3445 + t3765;
  t3784 = -0.707107*t2107;
  t3962 = 0. + t3784 + t2310 + t2384;
  t3965 = t1974*t3962;
  t4025 = t42*t3578;
  t4068 = t3409*t1891;
  t4088 = 0. + t4025 + t4068;
  t4100 = t2456*t4088;
  t4126 = 0. + t3965 + t4100;
  t4463 = t42*t4455;
  t4545 = -1.*t4543*t1891;
  t4557 = 0. + t4463 + t4545;
  t4565 = -0.994522*t2249;
  t4576 = -0.104528*t2330;
  t4586 = 0. + t4565 + t4576;
  t4589 = t1974*t4586;
  t4592 = t42*t4543;
  t4594 = t4455*t1891;
  t4597 = 0. + t4592 + t4594;
  t4606 = t2456*t4597;
  t4616 = 0. + t4589 + t4606;
  t4749 = -1.*t3962*t2456;
  t4751 = t1974*t4088;
  t4752 = 0. + t4749 + t4751;
  t4768 = -1.*t786;
  t4771 = 1. + t4768;
  t4791 = 1.1345904784751044e-7*var1[14];
  t4808 = 0.108558*t995;
  t4811 = 0.0011861143593705353*t186;
  t4812 = -0.05650052807*t2249;
  t4818 = -0.0565*t1513;
  t4819 = t4791 + t4808 + t4811 + t4812 + t4818;
  t4829 = 1.1924972351948546e-8*var1[14];
  t4830 = 0.398799*t274;
  t4835 = 0.39444173984434006*t186;
  t4838 = -0.0565*t493;
  t4840 = -0.05650052807*t2330;
  t4845 = t4829 + t4830 + t4835 + t4838 + t4840;
  t4753 = -1.*t4586*t2456;
  t4757 = t1974*t4597;
  t4761 = 0. + t4753 + t4757;
  t4860 = 0.4*t4771;
  t4861 = 0.12*t46;
  t4866 = -1.*t46*t4819;
  t4867 = t786*t4845;
  t4868 = 0. + t4860 + t4861 + t4866 + t4867;
  t4776 = 0.12*t4771;
  t4779 = -0.4*t46;
  t4822 = t786*t4819;
  t4851 = t46*t4845;
  t4855 = 0. + t4776 + t4779 + t4822 + t4851;
  t4889 = -0.0565*t2107;
  t4896 = -0.056500534356700764*t186;
  t4898 = 0.38315650737400003*t493;
  t4903 = 0.108558*t2249;
  t4909 = -0.040271188976*t1513;
  t4911 = 0.398799*t2330;
  t4913 = 0. + t4889 + t4896 + t4898 + t4903 + t4909 + t4911;
  t4923 = t42*t4868;
  t4934 = t4855*t1891;
  t4944 = 0. + t4923 + t4934;
  t4856 = t42*t4855;
  t4873 = -1.*t4868*t1891;
  t4879 = 0. + t4856 + t4873;
  t4920 = -1.*t4913*t2456;
  t4953 = t1974*t4944;
  t4955 = 0. + t4920 + t4953;
  t4960 = t1974*t4913;
  t4962 = t2456*t4944;
  t4970 = 0. + t4960 + t4962;
  t4744 = -1.*t2394*t2456;
  t4745 = t1974*t2725;
  t4747 = 0. + t4744 + t4745;
  t4883 = t4557*t4879;
  t4981 = -1.*t3768*t4879;
  t5022 = -1.*t4557*t4879;
  t5031 = t1905*t4879;
  t5050 = t3768*t4879;
  t5073 = -1.*t1905*t4879;
  t5094 = -1.*t4913*t3962;
  t5087 = t4586*t4913;
  t5129 = t4913*t2394;
  t5118 = -1.*t4586*t4913;
  t5164 = -1.*t4913*t2394;
  t5151 = t4913*t3962;
  t5248 = t4565 + t4576;
  t5242 = t3784 + t2310 + t2384;
  t5275 = t2145 + t2310 + t2384;
  t5321 = 0.073913*t2249;
  t5324 = -0.703234*t2330;
  p_output1[0]=0. - 1.*t1905*t21 + t1913*t2745;
  p_output1[1]=0. - 1.*t21*t3768 + t1913*t4126;
  p_output1[2]=0. - 1.*t21*t4557 + t1913*t4616;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1905*t1913 + t21*t2745;
  p_output1[7]=0. + t1913*t3768 + t21*t4126;
  p_output1[8]=0. + t1913*t4557 + t21*t4616;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4747;
  p_output1[13]=t4752;
  p_output1[14]=t4761;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4752*(t4883 + t4761*t4955 + t4616*t4970) + t4761*(-1.*t4752*t4955 - 1.*t4126*t4970 + t4981);
  p_output1[19]=t4747*(-1.*t4761*t4955 - 1.*t4616*t4970 + t5022) + t4761*(t4747*t4955 + t2745*t4970 + t5031);
  p_output1[20]=t4747*(t4752*t4955 + t4126*t4970 + t5050) + t4752*(-1.*t4747*t4955 - 1.*t2745*t4970 + t5073);
  p_output1[21]=t4747;
  p_output1[22]=t4752;
  p_output1[23]=t4761;
  p_output1[24]=t3768*(t4883 + t4597*t4944 + t5087) + t4557*(-1.*t4088*t4944 + t4981 + t5094);
  p_output1[25]=t1905*(-1.*t4597*t4944 + t5022 + t5118) + t4557*(t2725*t4944 + t5031 + t5129);
  p_output1[26]=t1905*(t4088*t4944 + t5050 + t5151) + t3768*(-1.*t2725*t4944 + t5073 + t5164);
  p_output1[27]=t1905;
  p_output1[28]=t3768;
  p_output1[29]=t4557;
  p_output1[30]=t3962*(t4455*t4855 + t4543*t4868 + t5087) + t4586*(-1.*t3409*t4855 - 1.*t3578*t4868 + t5094);
  p_output1[31]=t2394*(-1.*t4455*t4855 - 1.*t4543*t4868 + t5118) + t4586*(t1772*t4855 + t1888*t4868 + t5129);
  p_output1[32]=t2394*(t3409*t4855 + t3578*t4868 + t5151) + t3962*(-1.*t1772*t4855 - 1.*t1888*t4868 + t5164);
  p_output1[33]=t2394;
  p_output1[34]=t3962;
  p_output1[35]=t4586;
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
  p_output1[78]=-0.4*t1605 - 1.*(-1.*t3366*t4819 - 1.*t3039*t4845 - 1.*t4913*t5242)*t5248 - 1.*t5242*(t4282*t4819 + t4361*t4845 + t4913*t5248) + 0.12*t546;
  p_output1[79]=0.12*t3039 - 0.4*t3366 - 1.*(-1.*t4282*t4819 - 1.*t4361*t4845 - 1.*t4913*t5248)*t5275 - 1.*t5248*(t1605*t4819 + t4913*t5275 + t4845*t546);
  p_output1[80]=-0.4*t4282 + 0.12*t4361 - 1.*(t3366*t4819 + t3039*t4845 + t4913*t5242)*t5275 - 1.*t5242*(-1.*t1605*t4819 - 1.*t4913*t5275 - 1.*t4845*t546);
  p_output1[81]=0. + t3784 + t5321 + t5324;
  p_output1[82]=0. + t2145 + t5321 + t5324;
  p_output1[83]=0. + 0.994522*t2249 + 0.104528*t2330;
  p_output1[84]=-1.2667819939988362e-7;
  p_output1[85]=-6.771751434441614e-7;
  p_output1[86]=-1.5092204165654405e-7;
  p_output1[87]=-4.610340000044122e-7;
  p_output1[88]=-4.610340000044122e-7;
  p_output1[89]=-1.0000001112680001;
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



void Jb_shoulder_pitch_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

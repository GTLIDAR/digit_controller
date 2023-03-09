/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_right_hip_yaw_src.h"

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
  double t1158;
  double t1550;
  double t1350;
  double t1377;
  double t1146;
  double t1593;
  double t1627;
  double t559;
  double t678;
  double t1131;
  double t46;
  double t119;
  double t410;
  double t3601;
  double t3692;
  double t3983;
  double t3987;
  double t4002;
  double t2886;
  double t2958;
  double t3026;
  double t3148;
  double t3254;
  double t2517;
  double t4708;
  double t4760;
  double t4587;
  double t4606;
  double t4635;
  double t2702;
  double t2708;
  double t2723;
  double t2793;
  double t3486;
  double t4024;
  double t4030;
  double t4048;
  double t4101;
  double t4194;
  double t4355;
  double t4367;
  double t4403;
  double t4404;
  double t4461;
  double t4504;
  double t4518;
  double t4529;
  double t4543;
  double t4699;
  double t4772;
  double t4790;
  double t4821;
  double t4838;
  double t4841;
  double t4853;
  double t4895;
  double t4934;
  double t4944;
  double t4963;
  double t1488;
  double t1690;
  double t1724;
  double t2081;
  double t2116;
  double t2479;
  double t5286;
  double t5288;
  double t5289;
  double t5291;
  double t5292;
  double t5333;
  double t5370;
  double t5374;
  double t5385;
  double t5438;
  double t5441;
  double t5442;
  double t5448;
  double t5457;
  double t5507;
  double t5508;
  double t5511;
  double t5534;
  double t1934;
  double t5568;
  double t5569;
  double t5570;
  double t5653;
  double t5638;
  double t5649;
  double t5651;
  double t5735;
  double t5716;
  double t5719;
  double t5723;
  double t5652;
  double t5658;
  double t5660;
  double t5661;
  double t5667;
  double t5673;
  double t5677;
  double t5696;
  double t5701;
  double t5729;
  double t5743;
  double t5744;
  double t5745;
  double t5747;
  double t5748;
  double t5749;
  double t5752;
  double t5765;
  double t5827;
  double t5833;
  double t5836;
  double t5816;
  double t5817;
  double t5820;
  double t5885;
  double t5889;
  double t5894;
  double t5870;
  double t5871;
  double t5876;
  double t5960;
  double t5964;
  double t5966;
  double t5950;
  double t5951;
  double t5955;
  double t5880;
  double t5896;
  double t5898;
  double t5902;
  double t5912;
  double t5914;
  double t5917;
  double t5918;
  double t5921;
  double t5932;
  double t5939;
  double t5945;
  double t5946;
  double t5958;
  double t5969;
  double t5973;
  double t5977;
  double t5978;
  double t5979;
  double t5981;
  double t5983;
  double t5984;
  double t5986;
  double t5991;
  double t5997;
  t1158 = Sin(var1[18]);
  t1550 = Sin(var1[17]);
  t1350 = -0.366501*t1158;
  t1377 = 0. + t1350;
  t1146 = Cos(var1[17]);
  t1593 = 0.930418*t1158;
  t1627 = 0. + t1593;
  t559 = Cos(var1[4]);
  t678 = Sin(var1[4]);
  t1131 = Cos(var1[5]);
  t46 = Cos(var1[18]);
  t119 = -1.*t46;
  t410 = 1. + t119;
  t3601 = -0.8656776547239999*t410;
  t3692 = 1. + t3601;
  t3983 = -0.366501*t3692;
  t3987 = -0.3172717261340007*t410;
  t4002 = t3983 + t3987;
  t2886 = -0.134322983001*t410;
  t2958 = 1. + t2886;
  t3026 = -0.930418*t2958;
  t3148 = -0.12497652119782442*t410;
  t3254 = t3026 + t3148;
  t2517 = Sin(var1[5]);
  t4708 = 0.930418*t3692;
  t4760 = t4708 + t3148;
  t4587 = -0.366501*t2958;
  t4606 = 0.3172717261340007*t410;
  t4635 = t4587 + t4606;
  t2702 = -0.930418*t1377;
  t2708 = -0.366501*t1627;
  t2723 = 0. + t2702 + t2708;
  t2793 = -1.*t559*t2723;
  t3486 = t1146*t3254;
  t4024 = -1.*t4002*t1550;
  t4030 = 0. + t3486 + t4024;
  t4048 = t1131*t4030;
  t4101 = t1146*t4002;
  t4194 = t3254*t1550;
  t4355 = 0. + t4101 + t4194;
  t4367 = t4355*t2517;
  t4403 = 0. + t4048 + t4367;
  t4404 = -1.*t678*t4403;
  t4461 = t2793 + t4404;
  t4504 = -0.366501*t1377;
  t4518 = 0.930418*t1627;
  t4529 = 0. + t4504 + t4518;
  t4543 = -1.*t559*t4529;
  t4699 = t1146*t4635;
  t4772 = -1.*t4760*t1550;
  t4790 = 0. + t4699 + t4772;
  t4821 = t1131*t4790;
  t4838 = t1146*t4760;
  t4841 = t4635*t1550;
  t4853 = 0. + t4838 + t4841;
  t4895 = t4853*t2517;
  t4934 = 0. + t4821 + t4895;
  t4944 = -1.*t678*t4934;
  t4963 = t4543 + t4944;
  t1488 = t1146*t1377;
  t1690 = -1.*t1550*t1627;
  t1724 = t1488 + t1690;
  t2081 = t1550*t1377;
  t2116 = t1146*t1627;
  t2479 = t2081 + t2116;
  t5286 = t1131*t4355;
  t5288 = -1.*t4030*t2517;
  t5289 = t5286 + t5288;
  t5291 = var2[3]*t559*t5289;
  t5292 = -1.*t1131*t4030;
  t5333 = -1.*t4355*t2517;
  t5370 = t5292 + t5333;
  t5374 = var2[4]*t5370;
  t5385 = t5291 + t5374;
  t5438 = t1131*t4853;
  t5441 = -1.*t4790*t2517;
  t5442 = t5438 + t5441;
  t5448 = var2[3]*t559*t5442;
  t5457 = -1.*t1131*t4790;
  t5507 = -1.*t4853*t2517;
  t5508 = t5457 + t5507;
  t5511 = var2[4]*t5508;
  t5534 = t5448 + t5511;
  t1934 = t1131*t1724;
  t5568 = -1.*t1550*t1377;
  t5569 = -1.*t1146*t1627;
  t5570 = t5568 + t5569;
  t5653 = t3486 + t4024;
  t5638 = -1.*t1146*t4002;
  t5649 = -1.*t3254*t1550;
  t5651 = t5638 + t5649;
  t5735 = t4699 + t4772;
  t5716 = -1.*t1146*t4760;
  t5719 = -1.*t4635*t1550;
  t5723 = t5716 + t5719;
  t5652 = t1131*t5651;
  t5658 = t5653*t2517;
  t5660 = t5652 + t5658;
  t5661 = var2[3]*t559*t5660;
  t5667 = t1131*t5653;
  t5673 = -1.*t5651*t2517;
  t5677 = t5667 + t5673;
  t5696 = var2[4]*t5677;
  t5701 = t5661 + t5696;
  t5729 = t1131*t5723;
  t5743 = t5735*t2517;
  t5744 = t5729 + t5743;
  t5745 = var2[3]*t559*t5744;
  t5747 = t1131*t5735;
  t5748 = -1.*t5723*t2517;
  t5749 = t5747 + t5748;
  t5752 = var2[4]*t5749;
  t5765 = t5745 + t5752;
  t5827 = -0.366501*t1146*t46;
  t5833 = -0.930418*t46*t1550;
  t5836 = t5827 + t5833;
  t5816 = 0.930418*t1146*t46;
  t5817 = -0.366501*t46*t1550;
  t5820 = t5816 + t5817;
  t5885 = 1.3877787807814457e-17*t1146*t1158;
  t5889 = -5.551115123125783e-17*t1550*t1158;
  t5894 = t5885 + t5889;
  t5870 = 5.551115123125783e-17*t1146*t1158;
  t5871 = 1.3877787807814457e-17*t1550*t1158;
  t5876 = t5870 + t5871;
  t5960 = 0.3665012337268502*t1146*t1158;
  t5964 = 0.930418593350819*t1550*t1158;
  t5966 = t5960 + t5964;
  t5950 = -0.930418593350819*t1146*t1158;
  t5951 = 0.3665012337268502*t1550*t1158;
  t5955 = t5950 + t5951;
  t5880 = t1131*t5876;
  t5896 = -1.*t5894*t2517;
  t5898 = t5880 + t5896;
  t5902 = var2[4]*t5898;
  t5912 = t1131*t5894;
  t5914 = t5876*t2517;
  t5917 = t5912 + t5914;
  t5918 = t559*t5917;
  t5921 = 0. + t5918;
  t5932 = var2[3]*t5921;
  t5939 = 0. + t5902 + t5932;
  t5945 = -1.000000637725*var2[17]*t46;
  t5946 = 1.000000637725*var2[5]*t46;
  t5958 = t1131*t5955;
  t5969 = -1.*t5966*t2517;
  t5973 = t5958 + t5969;
  t5977 = var2[4]*t5973;
  t5978 = -1.000000637725*t46*t678;
  t5979 = t1131*t5966;
  t5981 = t5955*t2517;
  t5983 = t5979 + t5981;
  t5984 = t559*t5983;
  t5986 = t5978 + t5984;
  t5991 = var2[3]*t5986;
  t5997 = t5945 + t5946 + t5977 + t5991;
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
  p_output1[12]=0.00163*(-1.*(-1. + 1.000000637725*t410)*t559 - 1.*(t1934 + t2479*t2517)*t678)*var2[3];
  p_output1[13]=-0.00005*t4461*var2[3] + 0.00193*t4963*var2[3];
  p_output1[14]=0.00077*t4461*var2[3] - 0.00005*t4963*var2[3];
  p_output1[15]=0.00163*((t1131*t2479 - 1.*t1724*t2517)*t559*var2[3] + (-1.*t1131*t1724 - 1.*t2479*t2517)*var2[4]);
  p_output1[16]=-0.00005*t5385 + 0.00193*t5534;
  p_output1[17]=0.00077*t5385 - 0.00005*t5534;
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
  p_output1[51]=0.00163*((t1724*t2517 + t1131*t5570)*t559*var2[3] + (t1934 - 1.*t2517*t5570)*var2[4]);
  p_output1[52]=-0.00005*t5701 + 0.00193*t5765;
  p_output1[53]=0.00077*t5701 - 0.00005*t5765;
  p_output1[54]=0.00163*((t559*(t2517*t5820 + t1131*t5836) - 1.000000637725*t1158*t678)*var2[3] + (t1131*t5820 - 1.*t2517*t5836)*var2[4] + 1.000000637725*t1158*var2[5] - 1.000000637725*t1158*var2[17]);
  p_output1[55]=-0.00005*t5939 + 0.00193*t5997;
  p_output1[56]=0.00077*t5939 - 0.00005*t5997;
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



void Jq_AMBody_right_hip_yaw_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

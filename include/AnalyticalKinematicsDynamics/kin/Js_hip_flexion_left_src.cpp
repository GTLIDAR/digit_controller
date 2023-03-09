/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_hip_flexion_left_src.h"

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
  double t161;
  double t164;
  double t295;
  double t307;
  double t522;
  double t565;
  double t530;
  double t570;
  double t592;
  double t941;
  double t969;
  double t1037;
  double t1067;
  double t1128;
  double t692;
  double t695;
  double t697;
  double t1244;
  double t1268;
  double t1288;
  double t1291;
  double t1516;
  double t1521;
  double t1445;
  double t1467;
  double t1469;
  double t1500;
  double t1546;
  double t1547;
  double t1697;
  double t1703;
  double t1718;
  double t1722;
  double t1805;
  double t1808;
  double t1812;
  double t2044;
  double t2053;
  double t2058;
  double t156;
  double t1626;
  double t1637;
  double t1640;
  double t1077;
  double t1148;
  double t1166;
  double t2266;
  double t2324;
  double t2343;
  double t1949;
  double t1981;
  double t1990;
  double t2418;
  double t2420;
  double t2456;
  double t1227;
  double t1230;
  double t1234;
  double t2959;
  double t2999;
  double t3047;
  double t3129;
  double t2763;
  double t2801;
  double t2820;
  double t4010;
  double t3836;
  double t3966;
  double t3991;
  double t4439;
  double t4496;
  double t4005;
  double t4072;
  double t4133;
  double t4194;
  double t4235;
  double t4237;
  double t4262;
  double t4363;
  double t4410;
  double t4423;
  double t4500;
  double t4507;
  double t4517;
  double t4551;
  double t4629;
  double t4664;
  double t4665;
  double t4671;
  double t4699;
  double t4702;
  double t4372;
  double t4514;
  double t4674;
  double t4687;
  double t4739;
  double t4748;
  double t4753;
  double t4762;
  double t4838;
  double t4842;
  double t4979;
  double t4984;
  double t4987;
  double t4988;
  double t4767;
  double t4771;
  double t4772;
  double t4813;
  double t5030;
  double t5032;
  double t5035;
  double t5037;
  double t5006;
  double t5009;
  double t5010;
  double t5016;
  double t5048;
  double t5059;
  double t5060;
  double t5065;
  double t4886;
  double t4906;
  double t4913;
  double t4919;
  double t4953;
  double t4956;
  double t4692;
  double t4715;
  double t4728;
  double t4732;
  double t4852;
  double t4857;
  double t4858;
  double t4874;
  double t5134;
  double t5141;
  double t5142;
  double t5150;
  double t5155;
  double t5166;
  double t5170;
  double t5173;
  t161 = Cos(var1[3]);
  t164 = Sin(var1[3]);
  t295 = Cos(var1[4]);
  t307 = Sin(var1[4]);
  t522 = Cos(var1[5]);
  t565 = Sin(var1[5]);
  t530 = t161*t522*t307;
  t570 = t164*t565;
  t592 = t530 + t570;
  t941 = Cos(var1[6]);
  t969 = -1.*t522*t164;
  t1037 = t161*t307*t565;
  t1067 = t969 + t1037;
  t1128 = Sin(var1[6]);
  t692 = t522*t164*t307;
  t695 = -1.*t161*t565;
  t697 = t692 + t695;
  t1244 = -1.*t941;
  t1268 = 1. + t1244;
  t1288 = 0.091*t1268;
  t1291 = 0. + t1288;
  t1516 = 0.091*t1128;
  t1521 = 0. + t1516;
  t1445 = t161*t522;
  t1467 = t164*t307*t565;
  t1469 = t1445 + t1467;
  t1500 = t1291*t1469;
  t1546 = t697*t1521;
  t1547 = 0. + var1[1] + t1500 + t1546;
  t1697 = -1.*var1[2];
  t1703 = -1.*t295*t1291*t565;
  t1718 = -1.*t295*t522*t1521;
  t1722 = 0. + t1697 + t1703 + t1718;
  t1805 = t941*t1469;
  t1808 = -1.*t697*t1128;
  t1812 = t1805 + t1808;
  t2044 = t941*t697;
  t2053 = t1469*t1128;
  t2058 = t2044 + t2053;
  t156 = -1.*var1[0];
  t1626 = t295*t941*t565;
  t1637 = -1.*t295*t522*t1128;
  t1640 = t1626 + t1637;
  t1077 = t941*t1067;
  t1148 = -1.*t592*t1128;
  t1166 = t1077 + t1148;
  t2266 = -1.*t1291*t1067;
  t2324 = -1.*t592*t1521;
  t2343 = 0. + t156 + t2266 + t2324;
  t1949 = t295*t522*t941;
  t1981 = t295*t565*t1128;
  t1990 = t1949 + t1981;
  t2418 = t295*t1291*t565;
  t2420 = t295*t522*t1521;
  t2456 = 0. + var1[2] + t2418 + t2420;
  t1227 = t941*t592;
  t1230 = t1067*t1128;
  t1234 = t1227 + t1230;
  t2959 = -1.*var1[1];
  t2999 = -1.*t1291*t1469;
  t3047 = -1.*t697*t1521;
  t3129 = 0. + t2959 + t2999 + t3047;
  t2763 = t1291*t1067;
  t2801 = t592*t1521;
  t2820 = 0. + var1[0] + t2763 + t2801;
  t4010 = Sin(var1[7]);
  t3836 = Cos(var1[7]);
  t3966 = -1.*t3836;
  t3991 = 1. + t3966;
  t4439 = 0.366501*t4010;
  t4496 = 0. + t4439;
  t4005 = -0.04500040093286238*t3991;
  t4072 = -0.930418*t4010;
  t4133 = 0. + t4072;
  t4194 = 0.07877663122399998*t4133;
  t4235 = -0.366501*t4010;
  t4237 = 0. + t4235;
  t4262 = 0.031030906668*t4237;
  t4363 = 0. + t4005 + t4194 + t4262;
  t4410 = -3.2909349868922137e-7*var1[7];
  t4423 = 0.03103092645718495*t3991;
  t4500 = -0.045000372235*t4496;
  t4507 = t4410 + t4423 + t4500;
  t4517 = 1.296332362046933e-7*var1[7];
  t4551 = 0.07877668146182712*t3991;
  t4629 = 0.930418*t4010;
  t4664 = 0. + t4629;
  t4665 = -0.045000372235*t4664;
  t4671 = t4517 + t4551 + t4665;
  t4699 = -0.134322983001*t3991;
  t4702 = 1. + t4699;
  t4372 = t307*t4363;
  t4514 = -1.*t1990*t4507;
  t4674 = -1.*t1640*t4671;
  t4687 = 0. + t1697 + t1703 + t1718 + t4372 + t4514 + t4674;
  t4739 = t295*t164*t4363;
  t4748 = t2058*t4507;
  t4753 = t1812*t4671;
  t4762 = 0. + var1[1] + t1500 + t1546 + t4739 + t4748 + t4753;
  t4838 = -0.8656776547239999*t3991;
  t4842 = 1. + t4838;
  t4979 = -0.340999127418*t3991*t1166;
  t4984 = t4702*t1234;
  t4987 = t161*t295*t4496;
  t4988 = t4979 + t4984 + t4987;
  t4767 = -0.340999127418*t3991*t1640;
  t4771 = t4702*t1990;
  t4772 = -1.*t307*t4496;
  t4813 = t4767 + t4771 + t4772;
  t5030 = -1.*t307*t4363;
  t5032 = t1990*t4507;
  t5035 = t1640*t4671;
  t5037 = 0. + var1[2] + t2418 + t2420 + t5030 + t5032 + t5035;
  t5006 = t4842*t1166;
  t5009 = -0.340999127418*t3991*t1234;
  t5010 = t161*t295*t4664;
  t5016 = t5006 + t5009 + t5010;
  t5048 = -1.*t161*t295*t4363;
  t5059 = -1.*t1234*t4507;
  t5060 = -1.*t1166*t4671;
  t5065 = 0. + t156 + t2266 + t2324 + t5048 + t5059 + t5060;
  t4886 = t4842*t1640;
  t4906 = -0.340999127418*t3991*t1990;
  t4913 = -1.*t307*t4664;
  t4919 = t4886 + t4906 + t4913;
  t4953 = -1.000000637725*t3991;
  t4956 = 1. + t4953;
  t4692 = -0.340999127418*t3991*t1812;
  t4715 = t4702*t2058;
  t4728 = t295*t164*t4496;
  t4732 = t4692 + t4715 + t4728;
  t4852 = t4842*t1812;
  t4857 = -0.340999127418*t3991*t2058;
  t4858 = t295*t164*t4664;
  t4874 = t4852 + t4857 + t4858;
  t5134 = -1.*t295*t164*t4363;
  t5141 = -1.*t2058*t4507;
  t5142 = -1.*t1812*t4671;
  t5150 = 0. + t2959 + t2999 + t3047 + t5134 + t5141 + t5142;
  t5155 = t161*t295*t4363;
  t5166 = t1234*t4507;
  t5170 = t1166*t4671;
  t5173 = 0. + var1[0] + t2763 + t2801 + t5155 + t5166 + t5170;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t156;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t161*var1[2];
  p_output1[25]=-1.*t164*var1[2];
  p_output1[26]=t161*var1[0] + t164*var1[1];
  p_output1[27]=-1.*t164;
  p_output1[28]=t161;
  p_output1[29]=0;
  p_output1[30]=-1.*t307*var1[1] - 1.*t164*t295*var1[2];
  p_output1[31]=t307*var1[0] + t161*t295*var1[2];
  p_output1[32]=t164*t295*var1[0] - 1.*t161*t295*var1[1];
  p_output1[33]=t161*t295;
  p_output1[34]=t164*t295;
  p_output1[35]=-1.*t307;
  p_output1[36]=0.091*t592 + t307*var1[1] + t164*t295*var1[2];
  p_output1[37]=0.091*t697 - 1.*t307*var1[0] - 1.*t161*t295*var1[2];
  p_output1[38]=0.091*t295*t522 - 1.*t164*t295*var1[0] + t161*t295*var1[1];
  p_output1[39]=0. - 1.*t161*t295;
  p_output1[40]=0. - 1.*t164*t295;
  p_output1[41]=0. + t307;
  p_output1[42]=-0.041869*t1166 - 0.016493*t1234 + 0.366501*(t1547*t1640 + t1722*t1812) - 0.930418*(t1547*t1990 + t1722*t2058) - 0.084668*t161*t295;
  p_output1[43]=-0.041869*t1812 - 0.016493*t2058 + 0.366501*(t1640*t2343 + t1166*t2456) - 0.930418*(t1990*t2343 + t1234*t2456) - 0.084668*t164*t295;
  p_output1[44]=-0.041869*t1640 - 0.016493*t1990 + 0.084668*t307 + 0.366501*(t1812*t2820 + t1166*t3129) - 0.930418*(t2058*t2820 + t1234*t3129);
  p_output1[45]=0. + 0.366501*t1166 - 0.930418*t1234;
  p_output1[46]=0. + 0.366501*t1812 - 0.930418*t2058;
  p_output1[47]=0. + 0.366501*t1640 - 0.930418*t1990;
  p_output1[48]=0.366501*(t4687*t4732 + t4762*t4813) + 0.930418*(t4687*t4874 + t4762*t4919) + 0.151852*(t1166*t4133 + t1234*t4237 + t161*t295*t4956) - 0.041869*t4988 + 0.016493*t5016;
  p_output1[49]=-0.041869*t4732 + 0.016493*t4874 + 0.151852*(t1812*t4133 + t2058*t4237 + t164*t295*t4956) + 0.366501*(t4988*t5037 + t4813*t5065) + 0.930418*(t5016*t5037 + t4919*t5065);
  p_output1[50]=-0.041869*t4813 + 0.016493*t4919 + 0.151852*(t1640*t4133 + t1990*t4237 - 1.*t307*t4956) + 0.366501*(t4988*t5150 + t4732*t5173) + 0.930418*(t5016*t5150 + t4874*t5173);
  p_output1[51]=0. + 0.366501*t4988 + 0.930418*t5016;
  p_output1[52]=0. + 0.366501*t4732 + 0.930418*t4874;
  p_output1[53]=0. + 0.366501*t4813 + 0.930418*t4919;
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
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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



void Js_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

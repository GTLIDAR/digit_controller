/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_left_shoulder_pitch_src.h"

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
  double t922;
  double t1300;
  double t1375;
  double t1426;
  double t1471;
  double t1614;
  double t1758;
  double t1689;
  double t1711;
  double t2030;
  double t240;
  double t309;
  double t313;
  double t1744;
  double t2097;
  double t2122;
  double t2578;
  double t2716;
  double t2880;
  double t148;
  double t4072;
  double t4093;
  double t3209;
  double t3456;
  double t3746;
  double t4707;
  double t4714;
  double t4724;
  double t2990;
  double t3064;
  double t1107;
  double t1226;
  double t1033;
  double t1039;
  double t912;
  double t1084;
  double t1244;
  double t1276;
  double t1543;
  double t1677;
  double t1687;
  double t2303;
  double t2397;
  double t2428;
  double t2985;
  double t2987;
  double t3065;
  double t3199;
  double t5327;
  double t5337;
  double t5345;
  double t5370;
  double t5377;
  double t5386;
  double t4034;
  double t4042;
  double t4151;
  double t4569;
  double t5391;
  double t5408;
  double t5417;
  double t4889;
  double t4904;
  double t5456;
  double t5458;
  double t5467;
  double t5094;
  double t5126;
  double t5207;
  double t5221;
  double t5578;
  double t5579;
  double t5580;
  double t5586;
  double t5591;
  double t5609;
  double t5704;
  double t5705;
  double t5706;
  double t5713;
  double t5724;
  double t5725;
  double t5785;
  double t5798;
  double t5800;
  double t5809;
  double t5814;
  double t5837;
  double t5898;
  double t5900;
  double t5901;
  double t5905;
  double t5911;
  double t5914;
  double t5920;
  double t5922;
  double t5981;
  double t5985;
  double t5986;
  double t5991;
  double t5992;
  double t5994;
  double t5995;
  double t5996;
  double t6058;
  double t6059;
  double t6063;
  double t6069;
  double t6070;
  double t6073;
  double t5476;
  double t6118;
  double t6121;
  double t6122;
  double t6104;
  double t6106;
  double t6111;
  double t6113;
  double t6114;
  double t6147;
  double t6148;
  double t6149;
  double t6159;
  double t6160;
  double t6161;
  double t6174;
  double t6177;
  double t6183;
  double t6227;
  double t6229;
  double t6230;
  double t6236;
  double t6237;
  double t6240;
  double t6289;
  double t6290;
  double t6291;
  double t6293;
  double t6295;
  double t6297;
  double t6299;
  double t6303;
  double t6305;
  double t6340;
  double t6341;
  t922 = Sin(var1[14]);
  t1300 = Sin(var1[3]);
  t1375 = Cos(var1[13]);
  t1426 = -1.*t1375;
  t1471 = 1. + t1426;
  t1614 = Sin(var1[13]);
  t1758 = Cos(var1[3]);
  t1689 = Cos(var1[5]);
  t1711 = Sin(var1[4]);
  t2030 = Sin(var1[5]);
  t240 = Cos(var1[14]);
  t309 = -1.*t240;
  t313 = 1. + t309;
  t1744 = -1.*t1689*t1300*t1711;
  t2097 = t1758*t2030;
  t2122 = t1744 + t2097;
  t2578 = -1.*t1758*t1689;
  t2716 = -1.*t1300*t1711*t2030;
  t2880 = t2578 + t2716;
  t148 = Cos(var1[4]);
  t4072 = 0.994522*t922;
  t4093 = 0. + t4072;
  t3209 = -1.*t1614*t2122;
  t3456 = t1375*t2880;
  t3746 = t3209 + t3456;
  t4707 = t1375*t2122;
  t4714 = t1614*t2880;
  t4724 = t4707 + t4714;
  t2990 = -0.104528*t922;
  t3064 = 0. + t2990;
  t1107 = 0.104528*t922;
  t1226 = 0. + t1107;
  t1033 = -0.994522*t922;
  t1039 = 0. + t1033;
  t912 = -0.056500534356700764*t313;
  t1084 = 0.38315650737400003*t1039;
  t1244 = -0.040271188976*t1226;
  t1276 = 0. + t912 + t1084 + t1244;
  t1543 = 0.4*t1471;
  t1677 = 0.12*t1614;
  t1687 = 0. + t1543 + t1677;
  t2303 = 0.12*t1471;
  t2397 = -0.4*t1614;
  t2428 = 0. + t2303 + t2397;
  t2985 = 1.1345904784751044e-7*var1[14];
  t2987 = -0.04027119345689465*t313;
  t3065 = -0.05650052807*t3064;
  t3199 = t2985 + t2987 + t3065;
  t5327 = t1758*t1689*t1711;
  t5337 = t1300*t2030;
  t5345 = t5327 + t5337;
  t5370 = -1.*t1689*t1300;
  t5377 = t1758*t1711*t2030;
  t5386 = t5370 + t5377;
  t4034 = 1.1924972351948546e-8*var1[14];
  t4042 = 0.38315655000705834*t313;
  t4151 = -0.05650052807*t4093;
  t4569 = t4034 + t4042 + t4151;
  t5391 = -1.*t1614*t5345;
  t5408 = t1375*t5386;
  t5417 = t5391 + t5408;
  t4889 = -0.9890740084840001*t313;
  t4904 = 1. + t4889;
  t5456 = t1375*t5345;
  t5458 = t1614*t5386;
  t5467 = t5456 + t5458;
  t5094 = -0.010926102783999999*t313;
  t5126 = 1. + t5094;
  t5207 = -1.0000001112680001*t313;
  t5221 = 1. + t5207;
  t5578 = -1.*t1758*t148*t1689*t1614;
  t5579 = t1375*t1758*t148*t2030;
  t5580 = t5578 + t5579;
  t5586 = t1375*t1758*t148*t1689;
  t5591 = t1758*t148*t1614*t2030;
  t5609 = t5586 + t5591;
  t5704 = -1.*t148*t1689*t1614*t1300;
  t5705 = t1375*t148*t1300*t2030;
  t5706 = t5704 + t5705;
  t5713 = t1375*t148*t1689*t1300;
  t5724 = t148*t1614*t1300*t2030;
  t5725 = t5713 + t5724;
  t5785 = t1689*t1614*t1711;
  t5798 = -1.*t1375*t1711*t2030;
  t5800 = t5785 + t5798;
  t5809 = -1.*t1375*t1689*t1711;
  t5814 = -1.*t1614*t1711*t2030;
  t5837 = t5809 + t5814;
  t5898 = t1689*t1300;
  t5900 = -1.*t1758*t1711*t2030;
  t5901 = t5898 + t5900;
  t5905 = t1614*t5345;
  t5911 = t1375*t5901;
  t5914 = t5905 + t5911;
  t5920 = -1.*t1614*t5901;
  t5922 = t5456 + t5920;
  t5981 = t1689*t1300*t1711;
  t5985 = -1.*t1758*t2030;
  t5986 = t5981 + t5985;
  t5991 = t1614*t5986;
  t5992 = t5991 + t3456;
  t5994 = t1375*t5986;
  t5995 = -1.*t1614*t2880;
  t5996 = t5994 + t5995;
  t6058 = t148*t1689*t1614;
  t6059 = -1.*t1375*t148*t2030;
  t6063 = t6058 + t6059;
  t6069 = t1375*t148*t1689;
  t6070 = t148*t1614*t2030;
  t6073 = t6069 + t6070;
  t5476 = 0.103955395616*t313*t5417;
  t6118 = -1.*t1375*t5345;
  t6121 = -1.*t1614*t5386;
  t6122 = t6118 + t6121;
  t6104 = 0.12*t1375;
  t6106 = 0.4*t1614;
  t6111 = t6104 + t6106;
  t6113 = -0.4*t1375;
  t6114 = t6113 + t1677;
  t6147 = t1758*t1689;
  t6148 = t1300*t1711*t2030;
  t6149 = t6147 + t6148;
  t6159 = -1.*t1614*t5986;
  t6160 = t1375*t6149;
  t6161 = t6159 + t6160;
  t6174 = -1.*t1375*t5986;
  t6177 = -1.*t1614*t6149;
  t6183 = t6174 + t6177;
  t6227 = -1.*t148*t1689*t1614;
  t6229 = t1375*t148*t2030;
  t6230 = t6227 + t6229;
  t6236 = -1.*t1375*t148*t1689;
  t6237 = -1.*t148*t1614*t2030;
  t6240 = t6236 + t6237;
  t6289 = -0.3852670428678886*t240;
  t6290 = -0.056500534356700764*t922;
  t6291 = t6289 + t6290;
  t6293 = 0.0059058871981009595*t240;
  t6295 = -0.04027119345689465*t922;
  t6297 = 1.1345904784751044e-7 + t6293 + t6295;
  t6299 = -0.05619101817723254*t240;
  t6303 = 0.38315655000705834*t922;
  t6305 = 1.1924972351948546e-8 + t6299 + t6303;
  t6340 = t1614*t6149;
  t6341 = t5994 + t6340;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1276*t1300*t148 + t1687*t2122 + t2428*t2880 + t3199*t3746 + t4569*t4724 + 0.362968*(0.103955395616*t313*t3746 - 1.*t1300*t148*t4093 + t4724*t4904) + 0.18652*(-1.*t1300*t148*t3064 + 0.103955395616*t313*t4724 + t3746*t5126) - 0.012773*(t1226*t3746 + t1039*t4724 - 1.*t1300*t148*t5221);
  p_output1[10]=t1276*t148*t1758 + t1687*t5345 + t2428*t5386 + t3199*t5417 + t4569*t5467 - 0.012773*(t148*t1758*t5221 + t1226*t5417 + t1039*t5467) + 0.18652*(t148*t1758*t3064 + t5126*t5417 + 0.103955395616*t313*t5467) + 0.362968*(t148*t1758*t4093 + t4904*t5467 + t5476);
  p_output1[11]=0;
  p_output1[12]=t148*t1687*t1689*t1758 - 1.*t1276*t1711*t1758 + t148*t1758*t2030*t2428 + t3199*t5580 + t4569*t5609 - 0.012773*(-1.*t1711*t1758*t5221 + t1226*t5580 + t1039*t5609) + 0.18652*(-1.*t1711*t1758*t3064 + t5126*t5580 + 0.103955395616*t313*t5609) + 0.362968*(-1.*t1711*t1758*t4093 + 0.103955395616*t313*t5580 + t4904*t5609);
  p_output1[13]=t1300*t148*t1687*t1689 - 1.*t1276*t1300*t1711 + t1300*t148*t2030*t2428 + t3199*t5706 + t4569*t5725 - 0.012773*(-1.*t1300*t1711*t5221 + t1226*t5706 + t1039*t5725) + 0.18652*(-1.*t1300*t1711*t3064 + t5126*t5706 + 0.103955395616*t313*t5725) + 0.362968*(-1.*t1300*t1711*t4093 + 0.103955395616*t313*t5706 + t4904*t5725);
  p_output1[14]=-1.*t1276*t148 - 1.*t1687*t1689*t1711 - 1.*t1711*t2030*t2428 + t3199*t5800 + t4569*t5837 - 0.012773*(-1.*t148*t5221 + t1226*t5800 + t1039*t5837) + 0.18652*(-1.*t148*t3064 + t5126*t5800 + 0.103955395616*t313*t5837) + 0.362968*(-1.*t148*t4093 + 0.103955395616*t313*t5800 + t4904*t5837);
  p_output1[15]=t2428*t5345 + t1687*t5901 + t4569*t5914 + t3199*t5922 - 0.012773*(t1039*t5914 + t1226*t5922) + 0.362968*(t4904*t5914 + 0.103955395616*t313*t5922) + 0.18652*(0.103955395616*t313*t5914 + t5126*t5922);
  p_output1[16]=t1687*t2880 + t2428*t5986 + t4569*t5992 + t3199*t5996 - 0.012773*(t1039*t5992 + t1226*t5996) + 0.362968*(t4904*t5992 + 0.103955395616*t313*t5996) + 0.18652*(0.103955395616*t313*t5992 + t5126*t5996);
  p_output1[17]=-1.*t148*t1687*t2030 + t148*t1689*t2428 + t4569*t6063 + t3199*t6073 - 0.012773*(t1039*t6063 + t1226*t6073) + 0.362968*(t4904*t6063 + 0.103955395616*t313*t6073) + 0.18652*(0.103955395616*t313*t6063 + t5126*t6073);
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
  p_output1[39]=t4569*t5417 + t5345*t6111 + t5386*t6114 + t3199*t6122 - 0.012773*(t1039*t5417 + t1226*t6122) + 0.362968*(t4904*t5417 + 0.103955395616*t313*t6122) + 0.18652*(t5476 + t5126*t6122);
  p_output1[40]=t5986*t6111 + t6114*t6149 + t4569*t6161 + t3199*t6183 - 0.012773*(t1039*t6161 + t1226*t6183) + 0.362968*(t4904*t6161 + 0.103955395616*t313*t6183) + 0.18652*(0.103955395616*t313*t6161 + t5126*t6183);
  p_output1[41]=t148*t1689*t6111 + t148*t2030*t6114 + t4569*t6230 + t3199*t6240 - 0.012773*(t1039*t6230 + t1226*t6240) + 0.362968*(t4904*t6230 + 0.103955395616*t313*t6240) + 0.18652*(0.103955395616*t313*t6230 + t5126*t6240);
  p_output1[42]=t148*t1758*t6291 + t5417*t6297 + t5467*t6305 - 0.012773*(0.104528*t240*t5417 - 0.994522*t240*t5467 - 1.0000001112680001*t148*t1758*t922) + 0.362968*(0.994522*t148*t1758*t240 + 0.103955395616*t5417*t922 - 0.9890740084840001*t5467*t922) + 0.18652*(-0.104528*t148*t1758*t240 - 0.010926102783999999*t5417*t922 + 0.103955395616*t5467*t922);
  p_output1[43]=t1300*t148*t6291 + t6161*t6297 + t6305*t6341 - 0.012773*(0.104528*t240*t6161 - 0.994522*t240*t6341 - 1.0000001112680001*t1300*t148*t922) + 0.362968*(0.994522*t1300*t148*t240 + 0.103955395616*t6161*t922 - 0.9890740084840001*t6341*t922) + 0.18652*(-0.104528*t1300*t148*t240 - 0.010926102783999999*t6161*t922 + 0.103955395616*t6341*t922);
  p_output1[44]=-1.*t1711*t6291 + t6230*t6297 + t6073*t6305 - 0.012773*(-0.994522*t240*t6073 + 0.104528*t240*t6230 + 1.0000001112680001*t1711*t922) + 0.18652*(0.104528*t1711*t240 + 0.103955395616*t6073*t922 - 0.010926102783999999*t6230*t922) + 0.362968*(-0.994522*t1711*t240 - 0.9890740084840001*t6073*t922 + 0.103955395616*t6230*t922);
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



void Jp_left_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

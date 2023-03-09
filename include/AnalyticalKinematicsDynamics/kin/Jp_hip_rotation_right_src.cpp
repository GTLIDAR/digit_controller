/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_right_src.h"

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
  double t781;
  double t2030;
  double t2810;
  double t2269;
  double t2325;
  double t3035;
  double t122;
  double t359;
  double t474;
  double t2086;
  double t2335;
  double t3085;
  double t3099;
  double t3489;
  double t4150;
  double t4226;
  double t4266;
  double t104;
  double t4629;
  double t4662;
  double t4536;
  double t4569;
  double t4584;
  double t4677;
  double t4686;
  double t4701;
  double t4455;
  double t4486;
  double t784;
  double t1301;
  double t1836;
  double t1864;
  double t500;
  double t1307;
  double t1899;
  double t1920;
  double t2193;
  double t2264;
  double t3571;
  double t3909;
  double t4062;
  double t4136;
  double t4438;
  double t4454;
  double t4500;
  double t4531;
  double t4946;
  double t4951;
  double t4953;
  double t4960;
  double t4962;
  double t4967;
  double t4601;
  double t4608;
  double t4664;
  double t4672;
  double t4975;
  double t4983;
  double t4987;
  double t4816;
  double t4820;
  double t5003;
  double t5010;
  double t5014;
  double t4858;
  double t4871;
  double t4891;
  double t4892;
  double t5127;
  double t5129;
  double t5132;
  double t5136;
  double t5146;
  double t5151;
  double t5210;
  double t5216;
  double t5222;
  double t5232;
  double t5233;
  double t5235;
  double t5316;
  double t5318;
  double t5319;
  double t5325;
  double t5342;
  double t5343;
  double t5419;
  double t5427;
  double t5429;
  double t5433;
  double t5434;
  double t5443;
  double t5451;
  double t5453;
  double t5485;
  double t5486;
  double t5491;
  double t5509;
  double t5512;
  double t5514;
  double t5515;
  double t5516;
  double t5563;
  double t5565;
  double t5568;
  double t5573;
  double t5576;
  double t5577;
  double t5039;
  double t5638;
  double t5639;
  double t5644;
  double t5692;
  double t5693;
  double t5704;
  double t5716;
  double t5722;
  double t5723;
  double t5727;
  double t5732;
  double t5734;
  double t5787;
  double t5791;
  double t5797;
  double t5801;
  double t5807;
  double t5809;
  double t5840;
  double t5843;
  double t5845;
  double t5851;
  double t5852;
  double t5854;
  double t5856;
  double t5857;
  double t5858;
  double t5914;
  double t5916;
  t781 = Sin(var1[18]);
  t2030 = Sin(var1[3]);
  t2810 = Cos(var1[3]);
  t2269 = Cos(var1[5]);
  t2325 = Sin(var1[4]);
  t3035 = Sin(var1[5]);
  t122 = Cos(var1[18]);
  t359 = -1.*t122;
  t474 = 1. + t359;
  t2086 = Sin(var1[17]);
  t2335 = -1.*t2269*t2030*t2325;
  t3085 = t2810*t3035;
  t3099 = t2335 + t3085;
  t3489 = Cos(var1[17]);
  t4150 = -1.*t2810*t2269;
  t4226 = -1.*t2030*t2325*t3035;
  t4266 = t4150 + t4226;
  t104 = Cos(var1[4]);
  t4629 = -0.366501*t781;
  t4662 = 0. + t4629;
  t4536 = -1.*t2086*t3099;
  t4569 = t3489*t4266;
  t4584 = t4536 + t4569;
  t4677 = t3489*t3099;
  t4686 = t2086*t4266;
  t4701 = t4677 + t4686;
  t4455 = 0.930418*t781;
  t4486 = 0. + t4455;
  t784 = -0.930418*t781;
  t1301 = 0. + t784;
  t1836 = 0.366501*t781;
  t1864 = 0. + t1836;
  t500 = -0.04500040093286238*t474;
  t1307 = -0.07877663122399998*t1301;
  t1899 = 0.031030906668*t1864;
  t1920 = 0. + t500 + t1307 + t1899;
  t2193 = -0.091*t2086;
  t2264 = 0. + t2193;
  t3571 = -1.*t3489;
  t3909 = 1. + t3571;
  t4062 = -0.091*t3909;
  t4136 = 0. + t4062;
  t4438 = 1.296332362046933e-7*var1[18];
  t4454 = -0.07877668146182712*t474;
  t4500 = -0.045000372235*t4486;
  t4531 = t4438 + t4454 + t4500;
  t4946 = t2810*t2269*t2325;
  t4951 = t2030*t3035;
  t4953 = t4946 + t4951;
  t4960 = -1.*t2269*t2030;
  t4962 = t2810*t2325*t3035;
  t4967 = t4960 + t4962;
  t4601 = 3.2909349868922137e-7*var1[18];
  t4608 = 0.03103092645718495*t474;
  t4664 = -0.045000372235*t4662;
  t4672 = t4601 + t4608 + t4664;
  t4975 = -1.*t2086*t4953;
  t4983 = t3489*t4967;
  t4987 = t4975 + t4983;
  t4816 = -0.134322983001*t474;
  t4820 = 1. + t4816;
  t5003 = t3489*t4953;
  t5010 = t2086*t4967;
  t5014 = t5003 + t5010;
  t4858 = -0.8656776547239999*t474;
  t4871 = 1. + t4858;
  t4891 = -1.000000637725*t474;
  t4892 = 1. + t4891;
  t5127 = -1.*t2810*t104*t2269*t2086;
  t5129 = t3489*t2810*t104*t3035;
  t5132 = t5127 + t5129;
  t5136 = t3489*t2810*t104*t2269;
  t5146 = t2810*t104*t2086*t3035;
  t5151 = t5136 + t5146;
  t5210 = -1.*t104*t2269*t2086*t2030;
  t5216 = t3489*t104*t2030*t3035;
  t5222 = t5210 + t5216;
  t5232 = t3489*t104*t2269*t2030;
  t5233 = t104*t2086*t2030*t3035;
  t5235 = t5232 + t5233;
  t5316 = t2269*t2086*t2325;
  t5318 = -1.*t3489*t2325*t3035;
  t5319 = t5316 + t5318;
  t5325 = -1.*t3489*t2269*t2325;
  t5342 = -1.*t2086*t2325*t3035;
  t5343 = t5325 + t5342;
  t5419 = t2269*t2030;
  t5427 = -1.*t2810*t2325*t3035;
  t5429 = t5419 + t5427;
  t5433 = t2086*t4953;
  t5434 = t3489*t5429;
  t5443 = t5433 + t5434;
  t5451 = -1.*t2086*t5429;
  t5453 = t5003 + t5451;
  t5485 = t2269*t2030*t2325;
  t5486 = -1.*t2810*t3035;
  t5491 = t5485 + t5486;
  t5509 = t2086*t5491;
  t5512 = t5509 + t4569;
  t5514 = t3489*t5491;
  t5515 = -1.*t2086*t4266;
  t5516 = t5514 + t5515;
  t5563 = t104*t2269*t2086;
  t5565 = -1.*t3489*t104*t3035;
  t5568 = t5563 + t5565;
  t5573 = t3489*t104*t2269;
  t5576 = t104*t2086*t3035;
  t5577 = t5573 + t5576;
  t5039 = 0.340999127418*t474*t4987;
  t5638 = -1.*t3489*t4953;
  t5639 = -1.*t2086*t4967;
  t5644 = t5638 + t5639;
  t5692 = t2810*t2269;
  t5693 = t2030*t2325*t3035;
  t5704 = t5692 + t5693;
  t5716 = -1.*t2086*t5491;
  t5722 = t3489*t5704;
  t5723 = t5716 + t5722;
  t5727 = -1.*t3489*t5491;
  t5732 = -1.*t2086*t5704;
  t5734 = t5727 + t5732;
  t5787 = -1.*t104*t2269*t2086;
  t5791 = t3489*t104*t3035;
  t5797 = t5787 + t5791;
  t5801 = -1.*t3489*t104*t2269;
  t5807 = -1.*t104*t2086*t3035;
  t5809 = t5801 + t5807;
  t5840 = 0.0846680539949003*t122;
  t5843 = -0.04500040093286238*t781;
  t5845 = t5840 + t5843;
  t5851 = -0.04186915633414423*t122;
  t5852 = -0.07877668146182712*t781;
  t5854 = 1.296332362046933e-7 + t5851 + t5852;
  t5856 = 0.016492681424499736*t122;
  t5857 = 0.03103092645718495*t781;
  t5858 = 3.2909349868922137e-7 + t5856 + t5857;
  t5914 = t2086*t5704;
  t5916 = t5514 + t5914;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t104*t1920*t2030 + t2264*t3099 + t4136*t4266 + t4531*t4584 + t4672*t4701 - 0.046986*(-1.*t104*t2030*t4662 + 0.340999127418*t4584*t474 + t4701*t4820) - 0.109508*(-1.*t104*t2030*t4486 + 0.340999127418*t4701*t474 + t4584*t4871) - 0.045*(t1301*t4584 + t1864*t4701 - 1.*t104*t2030*t4892);
  p_output1[10]=t104*t1920*t2810 + t2264*t4953 + t4136*t4967 + t4531*t4987 + t4672*t5014 - 0.045*(t104*t2810*t4892 + t1301*t4987 + t1864*t5014) - 0.109508*(t104*t2810*t4486 + t4871*t4987 + 0.340999127418*t474*t5014) - 0.046986*(t104*t2810*t4662 + t4820*t5014 + t5039);
  p_output1[11]=0;
  p_output1[12]=t104*t2264*t2269*t2810 - 1.*t1920*t2325*t2810 + t104*t2810*t3035*t4136 + t4531*t5132 + t4672*t5151 - 0.045*(-1.*t2325*t2810*t4892 + t1301*t5132 + t1864*t5151) - 0.109508*(-1.*t2325*t2810*t4486 + t4871*t5132 + 0.340999127418*t474*t5151) - 0.046986*(-1.*t2325*t2810*t4662 + 0.340999127418*t474*t5132 + t4820*t5151);
  p_output1[13]=t104*t2030*t2264*t2269 - 1.*t1920*t2030*t2325 + t104*t2030*t3035*t4136 + t4531*t5222 + t4672*t5235 - 0.045*(-1.*t2030*t2325*t4892 + t1301*t5222 + t1864*t5235) - 0.109508*(-1.*t2030*t2325*t4486 + t4871*t5222 + 0.340999127418*t474*t5235) - 0.046986*(-1.*t2030*t2325*t4662 + 0.340999127418*t474*t5222 + t4820*t5235);
  p_output1[14]=-1.*t104*t1920 - 1.*t2264*t2269*t2325 - 1.*t2325*t3035*t4136 + t4531*t5319 + t4672*t5343 - 0.045*(-1.*t104*t4892 + t1301*t5319 + t1864*t5343) - 0.109508*(-1.*t104*t4486 + t4871*t5319 + 0.340999127418*t474*t5343) - 0.046986*(-1.*t104*t4662 + 0.340999127418*t474*t5319 + t4820*t5343);
  p_output1[15]=t4136*t4953 + t2264*t5429 + t4672*t5443 + t4531*t5453 - 0.045*(t1864*t5443 + t1301*t5453) - 0.046986*(t4820*t5443 + 0.340999127418*t474*t5453) - 0.109508*(0.340999127418*t474*t5443 + t4871*t5453);
  p_output1[16]=t2264*t4266 + t4136*t5491 + t4672*t5512 + t4531*t5516 - 0.045*(t1864*t5512 + t1301*t5516) - 0.046986*(t4820*t5512 + 0.340999127418*t474*t5516) - 0.109508*(0.340999127418*t474*t5512 + t4871*t5516);
  p_output1[17]=-1.*t104*t2264*t3035 + t104*t2269*t4136 + t4672*t5568 + t4531*t5577 - 0.045*(t1864*t5568 + t1301*t5577) - 0.046986*(t4820*t5568 + 0.340999127418*t474*t5577) - 0.109508*(0.340999127418*t474*t5568 + t4871*t5577);
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
  p_output1[51]=-0.091*t3489*t4953 - 0.091*t2086*t4967 + t4672*t4987 + t4531*t5644 - 0.045*(t1864*t4987 + t1301*t5644) - 0.046986*(t4820*t4987 + 0.340999127418*t474*t5644) - 0.109508*(t5039 + t4871*t5644);
  p_output1[52]=-0.091*t3489*t5491 - 0.091*t2086*t5704 + t4672*t5723 + t4531*t5734 - 0.045*(t1864*t5723 + t1301*t5734) - 0.046986*(t4820*t5723 + 0.340999127418*t474*t5734) - 0.109508*(0.340999127418*t474*t5723 + t4871*t5734);
  p_output1[53]=-0.091*t104*t2086*t3035 - 0.091*t104*t2269*t3489 + t4672*t5797 + t4531*t5809 - 0.045*(t1864*t5797 + t1301*t5809) - 0.046986*(t4820*t5797 + 0.340999127418*t474*t5809) - 0.109508*(0.340999127418*t474*t5797 + t4871*t5809);
  p_output1[54]=t104*t2810*t5845 + t4987*t5854 + t5014*t5858 - 0.045*(-0.930418*t122*t4987 + 0.366501*t122*t5014 - 1.000000637725*t104*t2810*t781) - 0.046986*(-0.366501*t104*t122*t2810 + 0.340999127418*t4987*t781 - 0.134322983001*t5014*t781) - 0.109508*(0.930418*t104*t122*t2810 - 0.8656776547239999*t4987*t781 + 0.340999127418*t5014*t781);
  p_output1[55]=t104*t2030*t5845 + t5723*t5854 + t5858*t5916 - 0.045*(-0.930418*t122*t5723 + 0.366501*t122*t5916 - 1.000000637725*t104*t2030*t781) - 0.046986*(-0.366501*t104*t122*t2030 + 0.340999127418*t5723*t781 - 0.134322983001*t5916*t781) - 0.109508*(0.930418*t104*t122*t2030 - 0.8656776547239999*t5723*t781 + 0.340999127418*t5916*t781);
  p_output1[56]=-1.*t2325*t5845 + t5797*t5854 + t5577*t5858 - 0.045*(0.366501*t122*t5577 - 0.930418*t122*t5797 + 1.000000637725*t2325*t781) - 0.109508*(-0.930418*t122*t2325 + 0.340999127418*t5577*t781 - 0.8656776547239999*t5797*t781) - 0.046986*(0.366501*t122*t2325 - 0.134322983001*t5577*t781 + 0.340999127418*t5797*t781);
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



void Jp_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

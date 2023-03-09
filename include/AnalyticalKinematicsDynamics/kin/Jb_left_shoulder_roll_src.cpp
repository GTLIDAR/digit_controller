/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_left_shoulder_roll_src.h"

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
  double t441;
  double t506;
  double t368;
  double t598;
  double t640;
  double t688;
  double t444;
  double t519;
  double t535;
  double t696;
  double t317;
  double t1898;
  double t1528;
  double t1770;
  double t2679;
  double t2726;
  double t2742;
  double t588;
  double t1212;
  double t1238;
  double t2048;
  double t2094;
  double t2141;
  double t2194;
  double t2772;
  double t2785;
  double t2792;
  double t2823;
  double t2826;
  double t2899;
  double t2910;
  double t3039;
  double t3085;
  double t3109;
  double t3497;
  double t3499;
  double t3514;
  double t3525;
  double t3529;
  double t3558;
  double t3569;
  double t3582;
  double t3588;
  double t3607;
  double t3620;
  double t3621;
  double t3622;
  double t3627;
  double t3630;
  double t3633;
  double t3524;
  double t3642;
  double t3646;
  double t3655;
  double t3689;
  double t3693;
  double t3470;
  double t3472;
  double t3749;
  double t3768;
  double t3779;
  double t3895;
  double t3929;
  t441 = Cos(var1[13]);
  t506 = Sin(var1[13]);
  t368 = Cos(var1[5]);
  t598 = 0.984808*t441;
  t640 = -0.173648*t506;
  t688 = t598 + t640;
  t444 = 0.173648*t441;
  t519 = 0.984808*t506;
  t535 = t444 + t519;
  t696 = Sin(var1[5]);
  t317 = Sin(var1[3]);
  t1898 = t368*t688;
  t1528 = Cos(var1[3]);
  t1770 = Sin(var1[4]);
  t2679 = -0.173648*t441;
  t2726 = -0.984808*t506;
  t2742 = t2679 + t2726;
  t588 = t368*t535;
  t1212 = -1.*t688*t696;
  t1238 = 0. + t588 + t1212;
  t2048 = t535*t696;
  t2094 = 0. + t1898 + t2048;
  t2141 = t1770*t2094;
  t2194 = 0. + t2141;
  t2772 = -1.*t2742*t696;
  t2785 = 0. + t1898 + t2772;
  t2792 = t368*t2742;
  t2823 = t688*t696;
  t2826 = 0. + t2792 + t2823;
  t2899 = t1770*t2826;
  t2910 = 0. + t2899;
  t3039 = Cos(var1[4]);
  t3085 = -1.*t3039;
  t3109 = 0. + t3085;
  t3497 = t3039*t2826;
  t3499 = 0. + t3497;
  t3514 = 0. + t1770;
  t3525 = -1.*t441;
  t3529 = 1. + t3525;
  t3558 = 0.4*t3529;
  t3569 = 0.400559*t441;
  t3582 = 0.0031100000000000017*t506;
  t3588 = 0. + t3558 + t3569 + t3582;
  t3607 = t368*t3588;
  t3620 = 0.12*t3529;
  t3621 = 0.11689*t441;
  t3622 = 0.0005589999999999762*t506;
  t3627 = 0. + t3620 + t3621 + t3622;
  t3630 = t3627*t696;
  t3633 = 0. + t3607 + t3630;
  t3524 = 0.02441*t1770;
  t3642 = t3039*t3633;
  t3646 = 0. + t3524 + t3642;
  t3655 = -0.02441*t3039;
  t3689 = t1770*t3633;
  t3693 = 0. + t3655 + t3689;
  t3470 = t3039*t2094;
  t3472 = 0. + t3470;
  t3749 = t368*t3627;
  t3768 = -1.*t3588*t696;
  t3779 = 0. + t3749 + t3768;
  t3895 = t2785*t3779;
  t3929 = -1.*t1238*t3779;
  p_output1[0]=0. + t1528*t2194 - 1.*t1238*t317;
  p_output1[1]=0. + t1528*t2910 - 1.*t2785*t317;
  p_output1[2]=0. + t1528*t3109;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1238*t1528 + t2194*t317;
  p_output1[7]=0. + t1528*t2785 + t2910*t317;
  p_output1[8]=0. + t3109*t317;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3472;
  p_output1[13]=t3499;
  p_output1[14]=t3514;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3499*(0. + t3514*t3646 + t3109*t3693) + t3514*(-1.*t3499*t3646 - 1.*t2910*t3693 - 1.*t2785*t3779);
  p_output1[19]=t3472*(0. - 1.*t3514*t3646 - 1.*t3109*t3693) + t3514*(t3472*t3646 + t2194*t3693 + t1238*t3779);
  p_output1[20]=0. + t3472*(t3499*t3646 + t2910*t3693 + t3895) + t3499*(-1.*t3472*t3646 - 1.*t2194*t3693 + t3929);
  p_output1[21]=t3472;
  p_output1[22]=t3499;
  p_output1[23]=t3514;
  p_output1[24]=0. + 0.02441*t2785;
  p_output1[25]=0. - 0.02441*t1238;
  p_output1[26]=0. + t1238*(0. + t2826*t3633 + t3895) + t2785*(0. - 1.*t2094*t3633 + t3929);
  p_output1[27]=t1238;
  p_output1[28]=t2785;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t2742*t3588 - 1.*t3627*t688);
  p_output1[31]=0. - 1.*(0. + t3627*t535 + t3588*t688);
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0.;
  p_output1[35]=-1.;
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
  p_output1[78]=0.003159822111999999;
  p_output1[79]=0.000010462392000032406;
  p_output1[80]=0.;
  p_output1[81]=0.;
  p_output1[82]=0.;
  p_output1[83]=1.;
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



void Jb_left_shoulder_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

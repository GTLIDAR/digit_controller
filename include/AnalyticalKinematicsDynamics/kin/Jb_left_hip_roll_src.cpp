/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_left_hip_roll_src.h"

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
  double t175;
  double t669;
  double t1281;
  double t349;
  double t973;
  double t1192;
  double t170;
  double t1334;
  double t1349;
  double t1391;
  double t137;
  double t138;
  double t2343;
  double t3047;
  double t3200;
  double t3245;
  double t1251;
  double t1949;
  double t2062;
  double t2128;
  double t2186;
  double t2519;
  double t2540;
  double t2709;
  double t3368;
  double t3706;
  double t3766;
  double t3777;
  double t3803;
  double t3820;
  double t3856;
  double t3902;
  double t4069;
  double t4127;
  double t4482;
  double t4465;
  double t4469;
  double t4499;
  double t4514;
  double t4525;
  double t4552;
  double t4554;
  double t4560;
  double t4563;
  double t4569;
  double t4608;
  double t4609;
  double t4611;
  double t4621;
  double t4488;
  double t4641;
  double t4646;
  double t4662;
  double t4673;
  double t4688;
  double t4451;
  double t4454;
  double t4713;
  double t4715;
  double t4722;
  double t4915;
  double t4941;
  t175 = Cos(var1[6]);
  t669 = Sin(var1[6]);
  t1281 = Sin(var1[5]);
  t349 = 0.930418*t175;
  t973 = 0.366501*t669;
  t1192 = t349 + t973;
  t170 = Cos(var1[5]);
  t1334 = -0.366501*t175;
  t1349 = 0.930418*t669;
  t1391 = t1334 + t1349;
  t137 = Cos(var1[3]);
  t138 = Sin(var1[4]);
  t2343 = Sin(var1[3]);
  t3047 = 0.366501*t175;
  t3200 = -0.930418*t669;
  t3245 = t3047 + t3200;
  t1251 = t170*t1192;
  t1949 = t1281*t1391;
  t2062 = 0. + t1251 + t1949;
  t2128 = t138*t2062;
  t2186 = 0. + t2128;
  t2519 = -1.*t1281*t1192;
  t2540 = t170*t1391;
  t2709 = 0. + t2519 + t2540;
  t3368 = t170*t3245;
  t3706 = t1281*t1192;
  t3766 = 0. + t3368 + t3706;
  t3777 = t138*t3766;
  t3803 = 0. + t3777;
  t3820 = -1.*t1281*t3245;
  t3856 = 0. + t3820 + t1251;
  t3902 = Cos(var1[4]);
  t4069 = -1.*t3902;
  t4127 = 0. + t4069;
  t4482 = 0. + t138;
  t4465 = t3902*t3766;
  t4469 = 0. + t4465;
  t4499 = -1.*t175;
  t4514 = 1. + t4499;
  t4525 = 0.091*t4514;
  t4552 = 0.091945*t175;
  t4554 = -0.001745*t669;
  t4560 = 0. + t4525 + t4552 + t4554;
  t4563 = t1281*t4560;
  t4569 = -0.001745*t175;
  t4608 = -0.0009450000000000014*t669;
  t4609 = 0. + t4569 + t4608;
  t4611 = t170*t4609;
  t4621 = 0. + t4563 + t4611;
  t4488 = 0.03244*t138;
  t4641 = t3902*t4621;
  t4646 = 0. + t4488 + t4641;
  t4662 = -0.03244*t3902;
  t4673 = t138*t4621;
  t4688 = 0. + t4662 + t4673;
  t4451 = t3902*t2062;
  t4454 = 0. + t4451;
  t4713 = t170*t4560;
  t4715 = -1.*t1281*t4609;
  t4722 = 0. + t4713 + t4715;
  t4915 = -1.*t4722*t2709;
  t4941 = t4722*t3856;
  p_output1[0]=0. + t137*t2186 - 1.*t2343*t2709;
  p_output1[1]=0. + t137*t3803 - 1.*t2343*t3856;
  p_output1[2]=0. + t137*t4127;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t2186*t2343 + t137*t2709;
  p_output1[7]=0. + t2343*t3803 + t137*t3856;
  p_output1[8]=0. + t2343*t4127;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4454;
  p_output1[13]=t4469;
  p_output1[14]=t4482;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4469*(0. + t4482*t4646 + t4127*t4688) + t4482*(-1.*t4469*t4646 - 1.*t3803*t4688 - 1.*t3856*t4722);
  p_output1[19]=t4454*(0. - 1.*t4482*t4646 - 1.*t4127*t4688) + t4482*(t4454*t4646 + t2186*t4688 + t2709*t4722);
  p_output1[20]=0. + t4469*(-1.*t4454*t4646 - 1.*t2186*t4688 + t4915) + t4454*(t4469*t4646 + t3803*t4688 + t4941);
  p_output1[21]=t4454;
  p_output1[22]=t4469;
  p_output1[23]=t4482;
  p_output1[24]=0. + 0.03244*t3856;
  p_output1[25]=0. - 0.03244*t2709;
  p_output1[26]=0. + t3856*(0. - 1.*t2062*t4621 + t4915) + t2709*(0. + t3766*t4621 + t4941);
  p_output1[27]=t2709;
  p_output1[28]=t3856;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t1192*t4560 - 1.*t3245*t4609);
  p_output1[31]=0. - 1.*(0. + t1391*t4560 + t1192*t4609);
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0.;
  p_output1[35]=-1.;
  p_output1[36]=-0.00023970076500000326;
  p_output1[37]=-0.0019699228550000003;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=0.;
  p_output1[41]=1.;
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



void Jb_left_hip_roll_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

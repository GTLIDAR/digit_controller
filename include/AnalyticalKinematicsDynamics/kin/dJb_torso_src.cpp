/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_torso_src.h"

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
  double t572;
  double t80;
  double t845;
  double t189;
  double t1143;
  double t1220;
  double t1233;
  double t1247;
  double t1393;
  double t1425;
  double t1549;
  double t1644;
  double t3574;
  double t3581;
  double t3585;
  double t3591;
  double t3605;
  double t3609;
  double t3611;
  double t3616;
  double t3619;
  double t3623;
  double t3645;
  double t3653;
  double t3666;
  double t3736;
  double t3737;
  double t3762;
  double t3770;
  double t3781;
  double t3783;
  double t3784;
  double t3790;
  double t3791;
  double t3800;
  double t3807;
  double t3944;
  double t3936;
  double t3949;
  double t3911;
  double t3914;
  double t3919;
  double t3907;
  double t3908;
  double t3957;
  double t4029;
  double t4032;
  double t4035;
  double t4131;
  double t4132;
  double t4137;
  double t4162;
  double t4165;
  double t4168;
  double t3528;
  double t3537;
  double t3540;
  double t3544;
  double t3559;
  double t3563;
  double t3564;
  double t3920;
  double t3979;
  double t4290;
  t572 = Cos(var1[3]);
  t80 = Cos(var1[4]);
  t845 = Sin(var1[4]);
  t189 = Sin(var1[3]);
  t1143 = Sin(var1[5]);
  t1220 = Cos(var1[5]);
  t1233 = t572*t1220*t845;
  t1247 = t189*t1143;
  t1393 = t1233 + t1247;
  t1425 = -1.*t572*t1220;
  t1549 = -1.*t189*t845*t1143;
  t1644 = t1425 + t1549;
  t3574 = -0.001437*t845;
  t3581 = 0.230096*t1220;
  t3585 = 0.000175*t1143;
  t3591 = 0. + t3581 + t3585;
  t3605 = t80*t3591;
  t3609 = t3574 + t3605;
  t3611 = 0. + t3574 + t3605;
  t3616 = -0.001437*t80;
  t3619 = -1.*t845*t3591;
  t3623 = t3616 + t3619;
  t3645 = 0.001437*t80;
  t3653 = t845*t3591;
  t3666 = 0. + t3645 + t3653;
  t3736 = 0.000175*t1220;
  t3737 = -0.230096*t1143;
  t3762 = 0. + t3736 + t3737;
  t3770 = -1.*t1220*t3762;
  t3781 = -1.*t80*t3611*t1143;
  t3783 = -1.*t845*t3666*t1143;
  t3784 = t3770 + t3781 + t3783;
  t3790 = t80*t1220*t3611;
  t3791 = t1220*t845*t3666;
  t3800 = -1.*t3762*t1143;
  t3807 = t3790 + t3791 + t3800;
  t3944 = t3736 + t3737;
  t3936 = Power(t80,2);
  t3949 = Power(t845,2);
  t3911 = -0.230096*t1220;
  t3914 = -0.000175*t1143;
  t3919 = t3911 + t3914;
  t3907 = -1.*t80*t1220*t3611;
  t3908 = -1.*t1220*t845*t3666;
  t3957 = t3762*t1143;
  t4029 = -1.*t845*t3611;
  t4032 = t80*t3666;
  t4035 = t4029 + t4032;
  t4131 = t1220*t3762;
  t4132 = t80*t3611*t1143;
  t4137 = t845*t3666*t1143;
  t4162 = t845*t3611;
  t4165 = -1.*t80*t3666;
  t4168 = t4162 + t4165;
  t3528 = -1.*var2[4]*t80;
  t3537 = var2[5]*t80*t1220;
  t3540 = -1.*var2[4]*t845*t1143;
  t3544 = t3537 + t3540;
  t3559 = -1.*var2[4]*t1220*t845;
  t3563 = -1.*var2[5]*t80*t1143;
  t3564 = t3559 + t3563;
  t3920 = -1.*t1220*t3919;
  t3979 = -1.*t3919*t1143;
  t4290 = -1.*t3591*t1143;
  p_output1[0]=-1.*t189*t80*var2[3] - 1.*t572*t845*var2[4];
  p_output1[1]=t1644*var2[3] + t1143*t572*t80*var2[4] + t1393*var2[5];
  p_output1[2]=(t1143*t572 - 1.*t1220*t189*t845)*var2[3] + t1220*t572*t80*var2[4] + (t1220*t189 - 1.*t1143*t572*t845)*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t572*t80*var2[3] - 1.*t189*t845*var2[4];
  p_output1[7]=(-1.*t1220*t189 + t1143*t572*t845)*var2[3] + t1143*t189*t80*var2[4] + (-1.*t1143*t572 + t1220*t189*t845)*var2[5];
  p_output1[8]=t1393*var2[3] + t1220*t189*t80*var2[4] + t1644*var2[5];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3528;
  p_output1[13]=t3544;
  p_output1[14]=t3564;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t1220*t3784*t845 - 1.*t1143*t3807*t845 + t1220*t80*(-1.*t1143*t3623*t80 - 1.*t1143*t3666*t80 - 1.*t1143*t3609*t845 + t1143*t3611*t845) + t1143*t80*(t1220*t3623*t80 + t1220*t3666*t80 + t1220*t3609*t845 - 1.*t1220*t3611*t845))*var2[4] + (-1.*t1143*t3784*t80 + t1220*t3807*t80 + t1220*(t3907 + t3908 + t3920 - 1.*t1143*t3936*t3944 - 1.*t1143*t3944*t3949 + t3957)*t80 + t1143*(t3770 + t3781 + t3783 + t1220*t3936*t3944 + t1220*t3944*t3949 + t3979)*t80)*var2[5];
  p_output1[19]=(-1.*(t3907 + t3908 + t3957)*t80 - 1.*t1220*t4035*t845 - 1.*t845*(-1.*t1220*t3623*t80 - 1.*t1220*t3666*t80 - 1.*t1220*t3609*t845 + t1220*t3611*t845) + t1220*t80*(t3609*t80 - 1.*t3611*t80 - 1.*t3623*t845 - 1.*t3666*t845))*var2[4] + (-1.*t1143*t4035*t80 - 1.*(t1143*t3919 - 1.*t1220*t3936*t3944 - 1.*t1220*t3944*t3949 + t4131 + t4132 + t4137)*t845)*var2[5];
  p_output1[20]=(-1.*(t4131 + t4132 + t4137)*t80 - 1.*t1143*t4168*t845 - 1.*t845*(t1143*t3623*t80 + t1143*t3666*t80 + t1143*t3609*t845 - 1.*t1143*t3611*t845) + t1143*t80*(-1.*t3609*t80 + t3611*t80 + t3623*t845 + t3666*t845))*var2[4] + (t1220*t4168*t80 - 1.*(t3790 + t3791 + t3800 + t1220*t3919 + t1143*t3936*t3944 + t1143*t3944*t3949)*t845)*var2[5];
  p_output1[21]=t3528;
  p_output1[22]=t3544;
  p_output1[23]=t3564;
  p_output1[24]=(-1.*t1143*(0. + t1220*t3591 + t3800) - 1.*t1143*(-1.*t1220*t3591 + t3920 - 1.*t1143*t3944 + t3957) - 1.*t1220*(0. + t3770 + t4290) + t1220*(t3770 + t1220*t3944 + t3979 + t4290))*var2[5];
  p_output1[25]=-0.001437*t1220*var2[5];
  p_output1[26]=0.001437*t1143*var2[5];
  p_output1[27]=0;
  p_output1[28]=-1.*t1143*var2[5];
  p_output1[29]=-1.*t1220*var2[5];
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



void dJb_torso_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_hip_abduction_left_src.h"

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
  double t552;
  double t561;
  double t581;
  double t556;
  double t564;
  double t571;
  double t544;
  double t583;
  double t585;
  double t589;
  double t506;
  double t526;
  double t612;
  double t628;
  double t629;
  double t632;
  double t578;
  double t601;
  double t603;
  double t605;
  double t607;
  double t613;
  double t615;
  double t617;
  double t634;
  double t635;
  double t636;
  double t637;
  double t638;
  double t646;
  double t648;
  double t653;
  double t657;
  double t661;
  double t700;
  double t694;
  double t699;
  double t705;
  double t708;
  double t709;
  double t710;
  double t712;
  double t713;
  double t714;
  double t703;
  double t715;
  double t716;
  double t718;
  double t719;
  double t720;
  double t692;
  double t693;
  double t723;
  double t724;
  double t758;
  double t766;
  t552 = Cos(var1[6]);
  t561 = Sin(var1[6]);
  t581 = Sin(var1[5]);
  t556 = 0.930418*t552;
  t564 = 0.366501*t561;
  t571 = t556 + t564;
  t544 = Cos(var1[5]);
  t583 = -0.366501*t552;
  t585 = 0.930418*t561;
  t589 = t583 + t585;
  t506 = Cos(var1[3]);
  t526 = Sin(var1[4]);
  t612 = Sin(var1[3]);
  t628 = 0.366501*t552;
  t629 = -0.930418*t561;
  t632 = t628 + t629;
  t578 = t544*t571;
  t601 = t581*t589;
  t603 = 0. + t578 + t601;
  t605 = t526*t603;
  t607 = 0. + t605;
  t613 = -1.*t581*t571;
  t615 = t544*t589;
  t617 = 0. + t613 + t615;
  t634 = t544*t632;
  t635 = t581*t571;
  t636 = 0. + t634 + t635;
  t637 = t526*t636;
  t638 = 0. + t637;
  t646 = -1.*t581*t632;
  t648 = 0. + t646 + t578;
  t653 = Cos(var1[4]);
  t657 = -1.*t653;
  t661 = 0. + t657;
  t700 = 0. + t526;
  t694 = t653*t636;
  t699 = 0. + t694;
  t705 = -1.*t552;
  t708 = 1. + t705;
  t709 = 0.091*t708;
  t710 = 0.091*t552;
  t712 = 0. + t709 + t710;
  t713 = t712*t581;
  t714 = 0. + t713;
  t703 = 0.001*t526;
  t715 = t653*t714;
  t716 = 0. + t703 + t715;
  t718 = -0.001*t653;
  t719 = t526*t714;
  t720 = 0. + t718 + t719;
  t692 = t653*t603;
  t693 = 0. + t692;
  t723 = t544*t712;
  t724 = 0. + t723;
  t758 = -1.*t724*t617;
  t766 = t724*t648;
  p_output1[0]=0. + t506*t607 - 1.*t612*t617;
  p_output1[1]=0. + t506*t638 - 1.*t612*t648;
  p_output1[2]=0. + t506*t661;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t607*t612 + t506*t617;
  p_output1[7]=0. + t612*t638 + t506*t648;
  p_output1[8]=0. + t612*t661;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t693;
  p_output1[13]=t699;
  p_output1[14]=t700;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t699*(0. + t700*t716 + t661*t720) + t700*(-1.*t699*t716 - 1.*t638*t720 - 1.*t648*t724);
  p_output1[19]=t693*(0. - 1.*t700*t716 - 1.*t661*t720) + t700*(t693*t716 + t607*t720 + t617*t724);
  p_output1[20]=0. + t699*(-1.*t693*t716 - 1.*t607*t720 + t758) + t693*(t699*t716 + t638*t720 + t766);
  p_output1[21]=t693;
  p_output1[22]=t699;
  p_output1[23]=t700;
  p_output1[24]=0. + 0.001*t648;
  p_output1[25]=0. - 0.001*t617;
  p_output1[26]=0. + t648*(0. - 1.*t603*t714 + t758) + t617*(0. + t636*t714 + t766);
  p_output1[27]=t617;
  p_output1[28]=t648;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t571*t712);
  p_output1[31]=0. - 1.*(0. + t589*t712);
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0.;
  p_output1[35]=-1.;
  p_output1[36]=0.;
  p_output1[37]=0.;
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



void Jb_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

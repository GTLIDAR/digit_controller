/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_right_hip_roll_src.h"

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
  double t264;
  double t296;
  double t259;
  double t276;
  double t326;
  double t337;
  double t528;
  double t568;
  double t124;
  double t825;
  double t834;
  double t869;
  double t1084;
  double t534;
  double t539;
  double t550;
  double t805;
  double t1455;
  double t1486;
  double t723;
  double t767;
  double t138;
  double t1115;
  double t1134;
  double t1016;
  double t1018;
  double t2583;
  double t2639;
  double t2641;
  double t2217;
  double t1183;
  double t1492;
  double t1631;
  double t1658;
  double t1671;
  double t1784;
  double t1858;
  double t1863;
  double t2349;
  double t2352;
  double t2646;
  double t2708;
  double t2773;
  double t2844;
  double t2891;
  double t2962;
  double t3046;
  double t3065;
  double t3331;
  double t3349;
  double t4730;
  double t4734;
  double t4736;
  double t4757;
  double t4778;
  double t4792;
  double t4803;
  double t4846;
  double t4856;
  double t4900;
  double t4909;
  double t4989;
  double t5074;
  double t5147;
  double t5151;
  double t5160;
  double t4687;
  double t4728;
  double t5122;
  double t5191;
  double t5212;
  double t5307;
  double t5336;
  double t5361;
  double t5532;
  double t5539;
  double t5557;
  double t5561;
  double t5571;
  double t5580;
  double t5581;
  double t5306;
  double t5365;
  double t5380;
  double t5431;
  double t5753;
  double t5770;
  double t5849;
  double t5861;
  double t5629;
  double t5633;
  double t5637;
  double t6133;
  double t6146;
  double t6156;
  double t6173;
  double t6198;
  double t5396;
  double t5397;
  double t5399;
  double t6589;
  double t6591;
  double t6597;
  double t6602;
  double t6638;
  double t6639;
  double t6642;
  double t6645;
  double t4483;
  double t4485;
  double t4497;
  double t4505;
  double t4572;
  double t4578;
  double t4596;
  double t4624;
  double t4679;
  double t6652;
  double t6660;
  double t6706;
  double t6707;
  double t6817;
  double t6818;
  double t6562;
  double t6564;
  double t6855;
  double t6857;
  double t6604;
  double t6608;
  t264 = Cos(var1[17]);
  t296 = Sin(var1[17]);
  t259 = Cos(var1[5]);
  t276 = 0.930418*t264;
  t326 = -0.366501*t296;
  t337 = t276 + t326;
  t528 = t259*t337;
  t568 = Sin(var1[5]);
  t124 = Cos(var1[3]);
  t825 = -0.366501*t264;
  t834 = -0.930418*t296;
  t869 = t825 + t834;
  t1084 = Sin(var1[4]);
  t534 = 0.366501*t264;
  t539 = 0.930418*t296;
  t550 = t534 + t539;
  t805 = Sin(var1[3]);
  t1455 = t259*t550;
  t1486 = -1.*t337*t568;
  t723 = t550*t568;
  t767 = 0. + t528 + t723;
  t138 = Cos(var1[4]);
  t1115 = t259*t869;
  t1134 = t337*t568;
  t1016 = -1.*t869*t568;
  t1018 = t528 + t1016;
  t2583 = -0.930418*t264;
  t2639 = 0.366501*t296;
  t2641 = t2583 + t2639;
  t2217 = 0. + t1115 + t1134;
  t1183 = t1115 + t1134;
  t1492 = t1455 + t1486;
  t1631 = -1.*t259*t337;
  t1658 = -1.*t550*t568;
  t1671 = t1631 + t1658;
  t1784 = 0. + t1455 + t1486;
  t1858 = t1084*t767;
  t1863 = 0. + t1858;
  t2349 = -1.*t259*t869;
  t2352 = t2349 + t1486;
  t2646 = t259*t2641;
  t2708 = t869*t568;
  t2773 = t2646 + t2708;
  t2844 = -1.*t2641*t568;
  t2891 = t1115 + t2844;
  t2962 = 0. + t528 + t1016;
  t3046 = t1084*t2217;
  t3065 = 0. + t3046;
  t3331 = -1.*t138;
  t3349 = 0. + t3331;
  t4730 = -1.*t264;
  t4734 = 1. + t4730;
  t4736 = -0.091*t4734;
  t4757 = -0.091945*t264;
  t4778 = -0.001745*t296;
  t4792 = 0. + t4736 + t4757 + t4778;
  t4803 = t259*t4792;
  t4846 = -0.001745*t264;
  t4856 = 0.0009450000000000014*t296;
  t4900 = 0. + t4846 + t4856;
  t4909 = -1.*t4900*t568;
  t4989 = t4803 + t4909;
  t5074 = 0. + t1084;
  t5147 = t259*t4900;
  t5151 = t4792*t568;
  t5160 = 0. + t5147 + t5151;
  t4687 = t138*t2217;
  t4728 = 0. + t4687;
  t5122 = 0.03244*t1084;
  t5191 = t138*t5160;
  t5212 = 0. + t5122 + t5191;
  t5307 = -0.03244*t138;
  t5336 = t1084*t5160;
  t5361 = 0. + t5307 + t5336;
  t5532 = 0.0009450000000000014*t264;
  t5539 = 0.001745*t296;
  t5557 = t5532 + t5539;
  t5561 = t259*t5557;
  t5571 = t4846 + t4856;
  t5580 = t5571*t568;
  t5581 = t5561 + t5580;
  t5306 = t5074*t5212;
  t5365 = t3349*t5361;
  t5380 = 0. + t5306 + t5365;
  t5431 = 0. + t4803 + t4909;
  t5753 = t5122 + t5191;
  t5770 = 0.03244*t138;
  t5849 = -1.*t1084*t5160;
  t5861 = t5770 + t5849;
  t5629 = t259*t5571;
  t5633 = -1.*t5557*t568;
  t5637 = t5629 + t5633;
  t6133 = t138*t767;
  t6146 = 0. + t6133;
  t6156 = -1.*t5074*t5212;
  t6173 = -1.*t3349*t5361;
  t6198 = 0. + t6156 + t6173;
  t5396 = -1.*t259*t4900;
  t5397 = -1.*t4792*t568;
  t5399 = t5396 + t5397;
  t6589 = t2962*t5431;
  t6591 = t4728*t5212;
  t6597 = t3065*t5361;
  t6602 = t6589 + t6591 + t6597;
  t6638 = -1.*t1784*t5431;
  t6639 = -1.*t5212*t6146;
  t6642 = -1.*t5361*t1863;
  t6645 = t6638 + t6639 + t6642;
  t4483 = var2[5]*t138*t1492;
  t4485 = var2[17]*t138*t1183;
  t4497 = -1.*var2[4]*t1084*t767;
  t4505 = t4483 + t4485 + t4497;
  t4572 = var2[5]*t138*t1018;
  t4578 = var2[17]*t138*t2773;
  t4596 = -1.*var2[4]*t1084*t2217;
  t4624 = t4572 + t4578 + t4596;
  t4679 = var2[4]*t138;
  t6652 = t2962*t5637;
  t6660 = t5431*t2891;
  t6706 = -1.*t1018*t5431;
  t6707 = -1.*t1784*t5637;
  t6817 = t2217*t5160;
  t6818 = 0. + t6817 + t6589;
  t6562 = t2962*t5399;
  t6564 = t2352*t5431;
  t6855 = -1.*t5160*t767;
  t6857 = 0. + t6638 + t6855;
  t6604 = -1.*t1784*t5399;
  t6608 = -1.*t5431*t1671;
  p_output1[0]=(-1.*t124*t1784 - 1.*t1863*t805)*var2[3] + t124*t138*t767*var2[4] + (t1084*t124*t1492 - 1.*t1671*t805)*var2[5] + (t1084*t1183*t124 - 1.*t1018*t805)*var2[17];
  p_output1[1]=(-1.*t124*t2962 - 1.*t3065*t805)*var2[3] + t124*t138*t2217*var2[4] + (t1018*t1084*t124 - 1.*t2352*t805)*var2[5] + (t1084*t124*t2773 - 1.*t2891*t805)*var2[17];
  p_output1[2]=-1.*t3349*t805*var2[3] + t1084*t124*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t124*t1863 - 1.*t1784*t805)*var2[3] + t138*t767*t805*var2[4] + (t124*t1671 + t1084*t1492*t805)*var2[5] + (t1018*t124 + t1084*t1183*t805)*var2[17];
  p_output1[7]=(t124*t3065 - 1.*t2962*t805)*var2[3] + t138*t2217*t805*var2[4] + (t124*t2352 + t1018*t1084*t805)*var2[5] + (t124*t2891 + t1084*t2773*t805)*var2[17];
  p_output1[8]=t124*t3349*var2[3] + t1084*t805*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4505;
  p_output1[13]=t4624;
  p_output1[14]=t4679;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t1084*t2217*t5380 + t138*(-1.*t4728*t5212 - 1.*t3065*t5361 - 1.*t2962*t5431) + t5074*(t1084*t2217*t5212 - 1.*t138*t2217*t5361 - 1.*t3065*t5753 - 1.*t4728*t5861) + t4728*(t138*t5212 + t1084*t5361 + t3349*t5753 + t5074*t5861))*var2[4] + (t4728*(t1084*t3349*t4989 + t138*t4989*t5074) + t1018*t138*t5380 + t5074*(-1.*t1084*t3065*t4989 - 1.*t138*t4728*t4989 - 1.*t1018*t138*t5212 - 1.*t1018*t1084*t5361 - 1.*t2962*t5399 - 1.*t2352*t5431))*var2[5] + (t138*t2773*t5380 + t4728*(t1084*t3349*t5581 + t138*t5074*t5581) + t5074*(-1.*t138*t2773*t5212 - 1.*t1084*t2773*t5361 - 1.*t2891*t5431 - 1.*t1084*t3065*t5581 - 1.*t138*t4728*t5581 - 1.*t2962*t5637))*var2[17];
  p_output1[19]=((-1.*t138*t5212 - 1.*t1084*t5361 - 1.*t3349*t5753 - 1.*t5074*t5861)*t6146 + t138*(t1863*t5361 + t1784*t5431 + t5212*t6146) - 1.*t1084*t6198*t767 + t5074*(t1863*t5753 + t5861*t6146 - 1.*t1084*t5212*t767 + t138*t5361*t767))*var2[4] + ((-1.*t1084*t3349*t4989 - 1.*t138*t4989*t5074)*t6146 + t5074*(t1084*t1863*t4989 + t138*t1492*t5212 + t1084*t1492*t5361 + t1784*t5399 + t1671*t5431 + t138*t4989*t6146) + t138*t1492*t6198)*var2[5] + ((-1.*t1084*t3349*t5581 - 1.*t138*t5074*t5581)*t6146 + t5074*(t1183*t138*t5212 + t1084*t1183*t5361 + t1018*t5431 + t1084*t1863*t5581 + t1784*t5637 + t138*t5581*t6146) + t1183*t138*t6198)*var2[17];
  p_output1[20]=((-1.*t1084*t2217*t5212 + t138*t2217*t5361 + t3065*t5753 + t4728*t5861)*t6146 - 1.*t1084*t2217*t6645 - 1.*t1084*t6602*t767 + t4728*(-1.*t1863*t5753 - 1.*t5861*t6146 + t1084*t5212*t767 - 1.*t138*t5361*t767))*var2[4] + (t6146*(t1084*t3065*t4989 + t138*t4728*t4989 + t1018*t138*t5212 + t1018*t1084*t5361 + t6562 + t6564) + t138*t1492*t6602 + t4728*(-1.*t1084*t1863*t4989 - 1.*t138*t1492*t5212 - 1.*t1084*t1492*t5361 - 1.*t138*t4989*t6146 + t6604 + t6608) + t1018*t138*t6645)*var2[5] + (t1183*t138*t6602 + t138*t2773*t6645 + t6146*(t138*t2773*t5212 + t1084*t2773*t5361 + t1084*t3065*t5581 + t138*t4728*t5581 + t6652 + t6660) + t4728*(-1.*t1183*t138*t5212 - 1.*t1084*t1183*t5361 - 1.*t1084*t1863*t5581 - 1.*t138*t5581*t6146 + t6706 + t6707))*var2[17];
  p_output1[21]=t4505;
  p_output1[22]=t4624;
  p_output1[23]=t4679;
  p_output1[24]=0.03244*t2352*var2[5] + 0.03244*t2891*var2[17];
  p_output1[25]=-0.03244*t1671*var2[5] - 0.03244*t1018*var2[17];
  p_output1[26]=(t1784*(t2217*t4989 + t1018*t5160 + t6562 + t6564) + t1671*t6818 + t2352*t6857 + t2962*(-1.*t1492*t5160 + t6604 + t6608 - 1.*t4989*t767))*var2[5] + (t1784*(t2773*t5160 + t2217*t5581 + t6652 + t6660) + t1018*t6818 + t2891*t6857 + t2962*(-1.*t1183*t5160 + t6706 + t6707 - 1.*t5581*t767))*var2[17];
  p_output1[27]=t1671*var2[5] + t1018*var2[17];
  p_output1[28]=t2352*var2[5] + t2891*var2[17];
  p_output1[29]=0;
  p_output1[30]=-1.*(-1.*t2641*t4900 - 1.*t337*t5571 - 1.*t4792*t869 - 1.*t5557*t869)*var2[17];
  p_output1[31]=-1.*(t337*t4792 + t337*t5557 + t550*t5571 + t4900*t869)*var2[17];
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



void dJb_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

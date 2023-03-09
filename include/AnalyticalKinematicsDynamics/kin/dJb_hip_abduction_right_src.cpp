/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_hip_abduction_right_src.h"

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
  double t323;
  double t447;
  double t300;
  double t379;
  double t499;
  double t595;
  double t637;
  double t850;
  double t224;
  double t1031;
  double t1223;
  double t1228;
  double t1403;
  double t705;
  double t777;
  double t818;
  double t1026;
  double t2119;
  double t2374;
  double t884;
  double t904;
  double t238;
  double t1678;
  double t1691;
  double t1276;
  double t1294;
  double t3559;
  double t3588;
  double t3629;
  double t3279;
  double t1728;
  double t2430;
  double t2447;
  double t2503;
  double t2616;
  double t2708;
  double t2815;
  double t2882;
  double t3306;
  double t3318;
  double t3638;
  double t3642;
  double t3705;
  double t3716;
  double t3721;
  double t3809;
  double t3870;
  double t3885;
  double t3912;
  double t3931;
  double t4170;
  double t4172;
  double t4179;
  double t4183;
  double t4195;
  double t4197;
  double t4200;
  double t4162;
  double t4167;
  double t4231;
  double t4236;
  double t4277;
  double t4280;
  double t4296;
  double t4259;
  double t4326;
  double t4347;
  double t4350;
  double t4351;
  double t4466;
  double t4467;
  double t4606;
  double t4607;
  double t4622;
  double t4598;
  double t4731;
  double t4733;
  double t4735;
  double t4809;
  double t4814;
  double t4987;
  double t4989;
  double t4992;
  double t4995;
  double t5045;
  double t5047;
  double t5054;
  double t5060;
  double t4095;
  double t4098;
  double t4099;
  double t4101;
  double t4102;
  double t4105;
  double t4116;
  double t4125;
  double t4130;
  double t4947;
  double t4959;
  double t5005;
  double t5008;
  double t5096;
  double t5223;
  double t5237;
  double t5078;
  double t5261;
  double t5263;
  t323 = Cos(var1[17]);
  t447 = Sin(var1[17]);
  t300 = Cos(var1[5]);
  t379 = 0.930418*t323;
  t499 = -0.366501*t447;
  t595 = t379 + t499;
  t637 = t300*t595;
  t850 = Sin(var1[5]);
  t224 = Cos(var1[3]);
  t1031 = -0.366501*t323;
  t1223 = -0.930418*t447;
  t1228 = t1031 + t1223;
  t1403 = Sin(var1[4]);
  t705 = 0.366501*t323;
  t777 = 0.930418*t447;
  t818 = t705 + t777;
  t1026 = Sin(var1[3]);
  t2119 = t300*t818;
  t2374 = -1.*t595*t850;
  t884 = t818*t850;
  t904 = 0. + t637 + t884;
  t238 = Cos(var1[4]);
  t1678 = t300*t1228;
  t1691 = t595*t850;
  t1276 = -1.*t1228*t850;
  t1294 = t637 + t1276;
  t3559 = -0.930418*t323;
  t3588 = 0.366501*t447;
  t3629 = t3559 + t3588;
  t3279 = 0. + t1678 + t1691;
  t1728 = t1678 + t1691;
  t2430 = t2119 + t2374;
  t2447 = -1.*t300*t595;
  t2503 = -1.*t818*t850;
  t2616 = t2447 + t2503;
  t2708 = 0. + t2119 + t2374;
  t2815 = t1403*t904;
  t2882 = 0. + t2815;
  t3306 = -1.*t300*t1228;
  t3318 = t3306 + t2374;
  t3638 = t300*t3629;
  t3642 = t1228*t850;
  t3705 = t3638 + t3642;
  t3716 = -1.*t3629*t850;
  t3721 = t1678 + t3716;
  t3809 = 0. + t637 + t1276;
  t3870 = t1403*t3279;
  t3885 = 0. + t3870;
  t3912 = -1.*t238;
  t3931 = 0. + t3912;
  t4170 = -1.*t323;
  t4172 = 1. + t4170;
  t4179 = -0.091*t4172;
  t4183 = -0.091*t323;
  t4195 = 0. + t4179 + t4183;
  t4197 = t4195*t850;
  t4200 = 0. + t4197;
  t4162 = 0. + t1403;
  t4167 = 0.001*t1403;
  t4231 = t238*t4200;
  t4236 = 0. + t4167 + t4231;
  t4277 = -0.001*t238;
  t4280 = t1403*t4200;
  t4296 = 0. + t4277 + t4280;
  t4259 = t4162*t4236;
  t4326 = t3931*t4296;
  t4347 = 0. + t4259 + t4326;
  t4350 = t4195*t300;
  t4351 = 0. + t4350;
  t4466 = t238*t3279;
  t4467 = 0. + t4466;
  t4606 = 0.001*t238;
  t4607 = -1.*t1403*t4200;
  t4622 = t4606 + t4607;
  t4598 = t4167 + t4231;
  t4731 = -1.*t4162*t4236;
  t4733 = -1.*t3931*t4296;
  t4735 = 0. + t4731 + t4733;
  t4809 = t238*t904;
  t4814 = 0. + t4809;
  t4987 = t4351*t3809;
  t4989 = t4236*t4467;
  t4992 = t4296*t3885;
  t4995 = t4987 + t4989 + t4992;
  t5045 = -1.*t4351*t2708;
  t5047 = -1.*t4236*t4814;
  t5054 = -1.*t4296*t2882;
  t5060 = t5045 + t5047 + t5054;
  t4095 = var2[5]*t238*t2430;
  t4098 = var2[17]*t238*t1728;
  t4099 = -1.*var2[4]*t1403*t904;
  t4101 = t4095 + t4098 + t4099;
  t4102 = var2[5]*t238*t1294;
  t4105 = var2[17]*t238*t3705;
  t4116 = -1.*var2[4]*t1403*t3279;
  t4125 = t4102 + t4105 + t4116;
  t4130 = var2[4]*t238;
  t4947 = -1.*t4195*t850*t3809;
  t4959 = t4351*t3318;
  t5005 = t4195*t850*t2708;
  t5008 = -1.*t4351*t2616;
  t5096 = -1.*t4351*t1294;
  t5223 = t4200*t3279;
  t5237 = 0. + t4987 + t5223;
  t5078 = t4351*t3721;
  t5261 = -1.*t4200*t904;
  t5263 = 0. + t5045 + t5261;
  p_output1[0]=(-1.*t224*t2708 - 1.*t1026*t2882)*var2[3] + t224*t238*t904*var2[4] + (t1403*t224*t2430 - 1.*t1026*t2616)*var2[5] + (-1.*t1026*t1294 + t1403*t1728*t224)*var2[17];
  p_output1[1]=(-1.*t224*t3809 - 1.*t1026*t3885)*var2[3] + t224*t238*t3279*var2[4] + (t1294*t1403*t224 - 1.*t1026*t3318)*var2[5] + (t1403*t224*t3705 - 1.*t1026*t3721)*var2[17];
  p_output1[2]=-1.*t1026*t3931*var2[3] + t1403*t224*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1026*t2708 + t224*t2882)*var2[3] + t1026*t238*t904*var2[4] + (t1026*t1403*t2430 + t224*t2616)*var2[5] + (t1026*t1403*t1728 + t1294*t224)*var2[17];
  p_output1[7]=(-1.*t1026*t3809 + t224*t3885)*var2[3] + t1026*t238*t3279*var2[4] + (t1026*t1294*t1403 + t224*t3318)*var2[5] + (t1026*t1403*t3705 + t224*t3721)*var2[17];
  p_output1[8]=t224*t3931*var2[3] + t1026*t1403*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4101;
  p_output1[13]=t4125;
  p_output1[14]=t4130;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t1403*t3279*t4347 + t238*(-1.*t3885*t4296 - 1.*t3809*t4351 - 1.*t4236*t4467) + t4467*(t238*t4236 + t1403*t4296 + t3931*t4598 + t4162*t4622) + t4162*(t1403*t3279*t4236 - 1.*t238*t3279*t4296 - 1.*t3885*t4598 - 1.*t4467*t4622))*var2[4] + (t1294*t238*t4347 + (t1403*t300*t3931*t4195 + t238*t300*t4162*t4195)*t4467 + t4162*(-1.*t1403*t300*t3885*t4195 - 1.*t1294*t238*t4236 - 1.*t1294*t1403*t4296 - 1.*t3318*t4351 - 1.*t238*t300*t4195*t4467 + t3809*t4195*t850))*var2[5] + (0. + t238*t3705*t4347 + t4162*(0. - 1.*t238*t3705*t4236 - 1.*t1403*t3705*t4296 - 1.*t3721*t4351))*var2[17];
  p_output1[19]=((-1.*t238*t4236 - 1.*t1403*t4296 - 1.*t3931*t4598 - 1.*t4162*t4622)*t4814 + t238*(t2882*t4296 + t2708*t4351 + t4236*t4814) - 1.*t1403*t4735*t904 + t4162*(t2882*t4598 + t4622*t4814 - 1.*t1403*t4236*t904 + t238*t4296*t904))*var2[4] + (t238*t2430*t4735 + (-1.*t1403*t300*t3931*t4195 - 1.*t238*t300*t4162*t4195)*t4814 + t4162*(t1403*t2882*t300*t4195 + t238*t2430*t4236 + t1403*t2430*t4296 + t2616*t4351 + t238*t300*t4195*t4814 - 1.*t2708*t4195*t850))*var2[5] + (0. + t4162*(0. + t1728*t238*t4236 + t1403*t1728*t4296 + t1294*t4351) + t1728*t238*t4735)*var2[17];
  p_output1[20]=((-1.*t1403*t3279*t4236 + t238*t3279*t4296 + t3885*t4598 + t4467*t4622)*t4814 - 1.*t1403*t3279*t5060 - 1.*t1403*t4995*t904 + t4467*(-1.*t2882*t4598 - 1.*t4622*t4814 + t1403*t4236*t904 - 1.*t238*t4296*t904))*var2[4] + (t4814*(t1403*t300*t3885*t4195 + t1294*t238*t4236 + t1294*t1403*t4296 + t238*t300*t4195*t4467 + t4947 + t4959) + t238*t2430*t4995 + t4467*(-1.*t1403*t2882*t300*t4195 - 1.*t238*t2430*t4236 - 1.*t1403*t2430*t4296 - 1.*t238*t300*t4195*t4814 + t5005 + t5008) + t1294*t238*t5060)*var2[5] + (t1728*t238*t4995 + t238*t3705*t5060 + t4814*(0. + t238*t3705*t4236 + t1403*t3705*t4296 + t5078) + t4467*(0. - 1.*t1728*t238*t4236 - 1.*t1403*t1728*t4296 + t5096))*var2[17];
  p_output1[21]=t4101;
  p_output1[22]=t4125;
  p_output1[23]=t4130;
  p_output1[24]=0.001*t3318*var2[5] + 0.001*t3721*var2[17];
  p_output1[25]=-0.001*t2616*var2[5] - 0.001*t1294*var2[17];
  p_output1[26]=(t2708*(t300*t3279*t4195 + t1294*t4200 + t4947 + t4959) + t2616*t5237 + t3318*t5263 + t3809*(-1.*t2430*t4200 + t5005 + t5008 - 1.*t300*t4195*t904))*var2[5] + (t2708*(0. + t3705*t4200 + t5078) + t3809*(0. - 1.*t1728*t4200 + t5096) + t1294*t5237 + t3721*t5263)*var2[17];
  p_output1[27]=t2616*var2[5] + t1294*var2[17];
  p_output1[28]=t3318*var2[5] + t3721*var2[17];
  p_output1[29]=0;
  p_output1[30]=-1.*(0. - 1.*t1228*t4195)*var2[17];
  p_output1[31]=-1.*(0. + t4195*t595)*var2[17];
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



void dJb_hip_abduction_right_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

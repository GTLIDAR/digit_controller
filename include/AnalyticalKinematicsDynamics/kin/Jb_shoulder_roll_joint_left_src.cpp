/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_shoulder_roll_joint_left_src.h"

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
  double t235;
  double t535;
  double t209;
  double t802;
  double t904;
  double t906;
  double t378;
  double t643;
  double t748;
  double t1108;
  double t85;
  double t1678;
  double t1508;
  double t1665;
  double t2279;
  double t2396;
  double t2473;
  double t798;
  double t1366;
  double t1446;
  double t1728;
  double t2002;
  double t2009;
  double t2064;
  double t2544;
  double t2564;
  double t2582;
  double t2670;
  double t2672;
  double t2678;
  double t2688;
  double t2809;
  double t2873;
  double t2875;
  double t3151;
  double t3170;
  double t3171;
  double t3178;
  double t3234;
  double t3243;
  double t3248;
  double t3250;
  double t3259;
  double t3261;
  double t3262;
  double t3267;
  double t3276;
  double t3281;
  double t3173;
  double t3287;
  double t3290;
  double t3294;
  double t3309;
  double t3316;
  double t3130;
  double t3146;
  double t3365;
  double t3370;
  double t3373;
  double t3473;
  double t3486;
  t235 = Cos(var1[13]);
  t535 = Sin(var1[13]);
  t209 = Cos(var1[5]);
  t802 = 0.984808*t235;
  t904 = -0.173648*t535;
  t906 = t802 + t904;
  t378 = 0.173648*t235;
  t643 = 0.984808*t535;
  t748 = t378 + t643;
  t1108 = Sin(var1[5]);
  t85 = Sin(var1[3]);
  t1678 = t209*t906;
  t1508 = Cos(var1[3]);
  t1665 = Sin(var1[4]);
  t2279 = -0.173648*t235;
  t2396 = -0.984808*t535;
  t2473 = t2279 + t2396;
  t798 = t209*t748;
  t1366 = -1.*t906*t1108;
  t1446 = 0. + t798 + t1366;
  t1728 = t748*t1108;
  t2002 = 0. + t1678 + t1728;
  t2009 = t1665*t2002;
  t2064 = 0. + t2009;
  t2544 = -1.*t2473*t1108;
  t2564 = 0. + t1678 + t2544;
  t2582 = t209*t2473;
  t2670 = t906*t1108;
  t2672 = 0. + t2582 + t2670;
  t2678 = t1665*t2672;
  t2688 = 0. + t2678;
  t2809 = Cos(var1[4]);
  t2873 = -1.*t2809;
  t2875 = 0. + t2873;
  t3151 = t2809*t2672;
  t3170 = 0. + t3151;
  t3171 = 0. + t1665;
  t3178 = -1.*t235;
  t3234 = 1. + t3178;
  t3243 = 0.4*t3234;
  t3248 = 0.4*t235;
  t3250 = 0. + t3243 + t3248;
  t3259 = t3250*t209;
  t3261 = 0.12*t3234;
  t3262 = 0.12*t235;
  t3267 = 0. + t3261 + t3262;
  t3276 = t3267*t1108;
  t3281 = 0. + t3259 + t3276;
  t3173 = 0.001*t1665;
  t3287 = t2809*t3281;
  t3290 = 0. + t3173 + t3287;
  t3294 = -0.001*t2809;
  t3309 = t1665*t3281;
  t3316 = 0. + t3294 + t3309;
  t3130 = t2809*t2002;
  t3146 = 0. + t3130;
  t3365 = t3267*t209;
  t3370 = -1.*t3250*t1108;
  t3373 = 0. + t3365 + t3370;
  t3473 = t3373*t2564;
  t3486 = -1.*t3373*t1446;
  p_output1[0]=0. + t1508*t2064 - 1.*t1446*t85;
  p_output1[1]=0. + t1508*t2688 - 1.*t2564*t85;
  p_output1[2]=0. + t1508*t2875;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1446*t1508 + t2064*t85;
  p_output1[7]=0. + t1508*t2564 + t2688*t85;
  p_output1[8]=0. + t2875*t85;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3146;
  p_output1[13]=t3170;
  p_output1[14]=t3171;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3170*(0. + t3171*t3290 + t2875*t3316) + t3171*(-1.*t3170*t3290 - 1.*t2688*t3316 - 1.*t2564*t3373);
  p_output1[19]=t3146*(0. - 1.*t3171*t3290 - 1.*t2875*t3316) + t3171*(t3146*t3290 + t2064*t3316 + t1446*t3373);
  p_output1[20]=0. + t3146*(t3170*t3290 + t2688*t3316 + t3473) + t3170*(-1.*t3146*t3290 - 1.*t2064*t3316 + t3486);
  p_output1[21]=t3146;
  p_output1[22]=t3170;
  p_output1[23]=t3171;
  p_output1[24]=0. + 0.001*t2564;
  p_output1[25]=0. - 0.001*t1446;
  p_output1[26]=0. + t1446*(0. + t2672*t3281 + t3473) + t2564*(0. - 1.*t2002*t3281 + t3486);
  p_output1[27]=t1446;
  p_output1[28]=t2564;
  p_output1[29]=0.;
  p_output1[30]=0. - 1.*(0. - 1.*t2473*t3250 - 1.*t3267*t906);
  p_output1[31]=0. - 1.*(0. + t3267*t748 + t3250*t906);
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
  p_output1[78]=0.;
  p_output1[79]=0.;
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



void Jb_shoulder_roll_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

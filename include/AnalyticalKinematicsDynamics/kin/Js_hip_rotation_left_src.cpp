/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_hip_rotation_left_src.h"

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
  double t2089;
  double t2103;
  double t2205;
  double t2223;
  double t2336;
  double t2347;
  double t2340;
  double t2349;
  double t2351;
  double t2471;
  double t2477;
  double t2479;
  double t2482;
  double t2491;
  double t2366;
  double t2367;
  double t2375;
  double t2527;
  double t2528;
  double t2529;
  double t2535;
  double t2553;
  double t2554;
  double t2540;
  double t2547;
  double t2550;
  double t2552;
  double t2557;
  double t2561;
  double t2582;
  double t2593;
  double t2596;
  double t2598;
  double t2600;
  double t2603;
  double t2610;
  double t2628;
  double t2633;
  double t2635;
  double t1842;
  double t2562;
  double t2563;
  double t2564;
  double t2484;
  double t2498;
  double t2508;
  double t2666;
  double t2667;
  double t2670;
  double t2621;
  double t2622;
  double t2623;
  double t2674;
  double t2675;
  double t2681;
  double t2519;
  double t2522;
  double t2524;
  double t2719;
  double t2724;
  double t2725;
  double t2726;
  double t2712;
  double t2715;
  double t2716;
  t2089 = Cos(var1[3]);
  t2103 = Sin(var1[3]);
  t2205 = Cos(var1[4]);
  t2223 = Sin(var1[4]);
  t2336 = Cos(var1[5]);
  t2347 = Sin(var1[5]);
  t2340 = t2089*t2336*t2223;
  t2349 = t2103*t2347;
  t2351 = t2340 + t2349;
  t2471 = Cos(var1[6]);
  t2477 = -1.*t2336*t2103;
  t2479 = t2089*t2223*t2347;
  t2482 = t2477 + t2479;
  t2491 = Sin(var1[6]);
  t2366 = t2336*t2103*t2223;
  t2367 = -1.*t2089*t2347;
  t2375 = t2366 + t2367;
  t2527 = -1.*t2471;
  t2528 = 1. + t2527;
  t2529 = 0.091*t2528;
  t2535 = 0. + t2529;
  t2553 = 0.091*t2491;
  t2554 = 0. + t2553;
  t2540 = t2089*t2336;
  t2547 = t2103*t2223*t2347;
  t2550 = t2540 + t2547;
  t2552 = t2535*t2550;
  t2557 = t2375*t2554;
  t2561 = 0. + var1[1] + t2552 + t2557;
  t2582 = -1.*var1[2];
  t2593 = -1.*t2205*t2535*t2347;
  t2596 = -1.*t2205*t2336*t2554;
  t2598 = 0. + t2582 + t2593 + t2596;
  t2600 = t2471*t2550;
  t2603 = -1.*t2375*t2491;
  t2610 = t2600 + t2603;
  t2628 = t2471*t2375;
  t2633 = t2550*t2491;
  t2635 = t2628 + t2633;
  t1842 = -1.*var1[0];
  t2562 = t2205*t2471*t2347;
  t2563 = -1.*t2205*t2336*t2491;
  t2564 = t2562 + t2563;
  t2484 = t2471*t2482;
  t2498 = -1.*t2351*t2491;
  t2508 = t2484 + t2498;
  t2666 = -1.*t2535*t2482;
  t2667 = -1.*t2351*t2554;
  t2670 = 0. + t1842 + t2666 + t2667;
  t2621 = t2205*t2336*t2471;
  t2622 = t2205*t2347*t2491;
  t2623 = t2621 + t2622;
  t2674 = t2205*t2535*t2347;
  t2675 = t2205*t2336*t2554;
  t2681 = 0. + var1[2] + t2674 + t2675;
  t2519 = t2471*t2351;
  t2522 = t2482*t2491;
  t2524 = t2519 + t2522;
  t2719 = -1.*var1[1];
  t2724 = -1.*t2535*t2550;
  t2725 = -1.*t2375*t2554;
  t2726 = 0. + t2719 + t2724 + t2725;
  t2712 = t2535*t2482;
  t2715 = t2351*t2554;
  t2716 = 0. + var1[0] + t2712 + t2715;
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
  p_output1[19]=t1842;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t2089*var1[2];
  p_output1[25]=-1.*t2103*var1[2];
  p_output1[26]=t2089*var1[0] + t2103*var1[1];
  p_output1[27]=-1.*t2103;
  p_output1[28]=t2089;
  p_output1[29]=0;
  p_output1[30]=-1.*t2223*var1[1] - 1.*t2103*t2205*var1[2];
  p_output1[31]=t2223*var1[0] + t2089*t2205*var1[2];
  p_output1[32]=t2103*t2205*var1[0] - 1.*t2089*t2205*var1[1];
  p_output1[33]=t2089*t2205;
  p_output1[34]=t2103*t2205;
  p_output1[35]=-1.*t2223;
  p_output1[36]=0.091*t2351 + t2223*var1[1] + t2103*t2205*var1[2];
  p_output1[37]=0.091*t2375 - 1.*t2223*var1[0] - 1.*t2089*t2205*var1[2];
  p_output1[38]=0.091*t2205*t2336 - 1.*t2103*t2205*var1[0] + t2089*t2205*var1[1];
  p_output1[39]=0. - 1.*t2089*t2205;
  p_output1[40]=0. - 1.*t2103*t2205;
  p_output1[41]=0. + t2223;
  p_output1[42]=-0.084668*t2089*t2205 - 0.041869*t2508 - 0.016493*t2524 + 0.366501*(t2561*t2564 + t2598*t2610) - 0.930418*(t2561*t2623 + t2598*t2635);
  p_output1[43]=-0.084668*t2103*t2205 - 0.041869*t2610 - 0.016493*t2635 + 0.366501*(t2564*t2670 + t2508*t2681) - 0.930418*(t2623*t2670 + t2524*t2681);
  p_output1[44]=0.084668*t2223 - 0.041869*t2564 - 0.016493*t2623 + 0.366501*(t2610*t2716 + t2508*t2726) - 0.930418*(t2635*t2716 + t2524*t2726);
  p_output1[45]=0. + 0.366501*t2508 - 0.930418*t2524;
  p_output1[46]=0. + 0.366501*t2610 - 0.930418*t2635;
  p_output1[47]=0. + 0.366501*t2564 - 0.930418*t2623;
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



void Js_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

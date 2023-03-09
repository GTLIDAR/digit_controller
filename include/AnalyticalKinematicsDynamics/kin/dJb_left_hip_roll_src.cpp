/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_left_hip_roll_src.h"

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
  double t107;
  double t170;
  double t349;
  double t161;
  double t177;
  double t233;
  double t104;
  double t433;
  double t465;
  double t647;
  double t14;
  double t1120;
  double t712;
  double t973;
  double t1359;
  double t1391;
  double t1435;
  double t1990;
  double t1999;
  double t1495;
  double t1769;
  double t1182;
  double t2819;
  double t2838;
  double t2843;
  double t1249;
  double t306;
  double t780;
  double t2573;
  double t3232;
  double t1258;
  double t1792;
  double t1909;
  double t2151;
  double t2332;
  double t2357;
  double t2424;
  double t2428;
  double t2814;
  double t2874;
  double t2915;
  double t3031;
  double t3047;
  double t3259;
  double t3354;
  double t3497;
  double t3663;
  double t3740;
  double t3878;
  double t3948;
  double t4965;
  double t4970;
  double t4971;
  double t4974;
  double t4977;
  double t4980;
  double t4983;
  double t4993;
  double t4994;
  double t4997;
  double t5002;
  double t5009;
  double t5057;
  double t5059;
  double t5062;
  double t5069;
  double t5080;
  double t5082;
  double t5093;
  double t4963;
  double t5049;
  double t5051;
  double t4964;
  double t5019;
  double t5020;
  double t5025;
  double t5026;
  double t5030;
  double t5039;
  double t5040;
  double t5244;
  double t5041;
  double t5184;
  double t5185;
  double t5196;
  double t5382;
  double t5385;
  double t5395;
  double t5378;
  double t5109;
  double t5110;
  double t5120;
  double t5456;
  double t5468;
  double t5280;
  double t5282;
  double t5283;
  double t5534;
  double t5537;
  double t5544;
  double t5760;
  double t5761;
  double t5768;
  double t5775;
  double t5778;
  double t5779;
  double t5780;
  double t5796;
  double t4920;
  double t4926;
  double t4934;
  double t4941;
  double t4942;
  double t4944;
  double t4959;
  double t4960;
  double t4961;
  double t5694;
  double t5702;
  double t5722;
  double t5732;
  double t5843;
  double t5846;
  double t5986;
  double t5989;
  double t5875;
  double t5876;
  double t5993;
  double t5994;
  t107 = Cos(var1[6]);
  t170 = Sin(var1[6]);
  t349 = Cos(var1[5]);
  t161 = 0.366501*t107;
  t177 = -0.930418*t170;
  t233 = t161 + t177;
  t104 = Sin(var1[5]);
  t433 = 0.930418*t107;
  t465 = 0.366501*t170;
  t647 = t433 + t465;
  t14 = Sin(var1[3]);
  t1120 = Sin(var1[4]);
  t712 = t349*t647;
  t973 = Cos(var1[3]);
  t1359 = -0.366501*t107;
  t1391 = 0.930418*t170;
  t1435 = t1359 + t1391;
  t1990 = -1.*t104*t647;
  t1999 = t349*t1435;
  t1495 = t104*t1435;
  t1769 = 0. + t712 + t1495;
  t1182 = t349*t233;
  t2819 = -0.930418*t107;
  t2838 = -0.366501*t170;
  t2843 = t2819 + t2838;
  t1249 = t104*t647;
  t306 = -1.*t104*t233;
  t780 = t306 + t712;
  t2573 = Cos(var1[4]);
  t3232 = 0. + t1182 + t1249;
  t1258 = t1182 + t1249;
  t1792 = t1120*t1769;
  t1909 = 0. + t1792;
  t2151 = 0. + t1990 + t1999;
  t2332 = t1990 + t1999;
  t2357 = -1.*t349*t647;
  t2424 = -1.*t104*t1435;
  t2428 = t2357 + t2424;
  t2814 = t104*t233;
  t2874 = t349*t2843;
  t2915 = t2814 + t2874;
  t3031 = -1.*t104*t2843;
  t3047 = t1182 + t3031;
  t3259 = t1120*t3232;
  t3354 = 0. + t3259;
  t3497 = 0. + t306 + t712;
  t3663 = -1.*t349*t233;
  t3740 = t3663 + t1990;
  t3878 = -1.*t2573;
  t3948 = 0. + t3878;
  t4965 = -1.*t107;
  t4970 = 1. + t4965;
  t4971 = 0.091*t4970;
  t4974 = 0.091945*t107;
  t4977 = -0.001745*t170;
  t4980 = 0. + t4971 + t4974 + t4977;
  t4983 = t104*t4980;
  t4993 = -0.001745*t107;
  t4994 = -0.0009450000000000014*t170;
  t4997 = 0. + t4993 + t4994;
  t5002 = t349*t4997;
  t5009 = 0. + t4983 + t5002;
  t5057 = t4993 + t4994;
  t5059 = t104*t5057;
  t5062 = -0.0009450000000000014*t107;
  t5069 = 0.001745*t170;
  t5080 = t5062 + t5069;
  t5082 = t349*t5080;
  t5093 = t5059 + t5082;
  t4963 = 0. + t1120;
  t5049 = t2573*t3232;
  t5051 = 0. + t5049;
  t4964 = 0.03244*t1120;
  t5019 = t2573*t5009;
  t5020 = 0. + t4964 + t5019;
  t5025 = -0.03244*t2573;
  t5026 = t1120*t5009;
  t5030 = 0. + t5025 + t5026;
  t5039 = t349*t4980;
  t5040 = -1.*t104*t4997;
  t5244 = t5039 + t5040;
  t5041 = 0. + t5039 + t5040;
  t5184 = t4963*t5020;
  t5185 = t3948*t5030;
  t5196 = 0. + t5184 + t5185;
  t5382 = 0.03244*t2573;
  t5385 = -1.*t1120*t5009;
  t5395 = t5382 + t5385;
  t5378 = t4964 + t5019;
  t5109 = t349*t5057;
  t5110 = -1.*t104*t5080;
  t5120 = t5109 + t5110;
  t5456 = t2573*t1769;
  t5468 = 0. + t5456;
  t5280 = -1.*t104*t4980;
  t5282 = -1.*t349*t4997;
  t5283 = t5280 + t5282;
  t5534 = -1.*t4963*t5020;
  t5537 = -1.*t3948*t5030;
  t5544 = 0. + t5534 + t5537;
  t5760 = -1.*t5020*t5468;
  t5761 = -1.*t5030*t1909;
  t5768 = -1.*t5041*t2151;
  t5775 = t5760 + t5761 + t5768;
  t5778 = t5020*t5051;
  t5779 = t5030*t3354;
  t5780 = t5041*t3497;
  t5796 = t5778 + t5779 + t5780;
  t4920 = var2[6]*t2573*t1258;
  t4926 = var2[5]*t2573*t2332;
  t4934 = -1.*var2[4]*t1120*t1769;
  t4941 = t4920 + t4926 + t4934;
  t4942 = var2[6]*t2573*t2915;
  t4944 = var2[5]*t2573*t780;
  t4959 = -1.*var2[4]*t1120*t3232;
  t4960 = t4942 + t4944 + t4959;
  t4961 = var2[4]*t2573;
  t5694 = -1.*t5041*t780;
  t5702 = -1.*t5120*t2151;
  t5722 = t3047*t5041;
  t5732 = t5120*t3497;
  t5843 = -1.*t5283*t2151;
  t5846 = -1.*t5041*t2428;
  t5986 = -1.*t5009*t1769;
  t5989 = 0. + t5768 + t5986;
  t5875 = t5283*t3497;
  t5876 = t5041*t3740;
  t5993 = t5009*t3232;
  t5994 = 0. + t5780 + t5993;
  p_output1[0]=(-1.*t14*t1909 - 1.*t2151*t973)*var2[3] + t1769*t2573*t973*var2[4] + (-1.*t14*t2428 + t1120*t2332*t973)*var2[5] + (-1.*t14*t780 + t1120*t1258*t973)*var2[6];
  p_output1[1]=(-1.*t14*t3354 - 1.*t3497*t973)*var2[3] + t2573*t3232*t973*var2[4] + (-1.*t14*t3740 + t1120*t780*t973)*var2[5] + (-1.*t14*t3047 + t1120*t2915*t973)*var2[6];
  p_output1[2]=-1.*t14*t3948*var2[3] + t1120*t973*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t14*t2151 + t1909*t973)*var2[3] + t14*t1769*t2573*var2[4] + (t1120*t14*t2332 + t2428*t973)*var2[5] + (t1120*t1258*t14 + t780*t973)*var2[6];
  p_output1[7]=(-1.*t14*t3497 + t3354*t973)*var2[3] + t14*t2573*t3232*var2[4] + (t1120*t14*t780 + t3740*t973)*var2[5] + (t1120*t14*t2915 + t3047*t973)*var2[6];
  p_output1[8]=t3948*t973*var2[3] + t1120*t14*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4941;
  p_output1[13]=t4960;
  p_output1[14]=t4961;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t2573*(-1.*t3354*t5030 - 1.*t3497*t5041 - 1.*t5020*t5051) - 1.*t1120*t3232*t5196 + t5051*(t2573*t5020 + t1120*t5030 + t3948*t5378 + t4963*t5395) + t4963*(t1120*t3232*t5020 - 1.*t2573*t3232*t5030 - 1.*t3354*t5378 - 1.*t5051*t5395))*var2[4] + (t5051*(t1120*t3948*t5244 + t2573*t4963*t5244) + t2573*t5196*t780 + t4963*(-1.*t3740*t5041 - 1.*t1120*t3354*t5244 - 1.*t2573*t5051*t5244 - 1.*t3497*t5283 - 1.*t2573*t5020*t780 - 1.*t1120*t5030*t780))*var2[5] + (t5051*(t1120*t3948*t5093 + t2573*t4963*t5093) + t4963*(-1.*t2573*t2915*t5020 - 1.*t1120*t2915*t5030 - 1.*t3047*t5041 - 1.*t1120*t3354*t5093 - 1.*t2573*t5051*t5093 - 1.*t3497*t5120) + t2573*t2915*t5196)*var2[6];
  p_output1[19]=((-1.*t2573*t5020 - 1.*t1120*t5030 - 1.*t3948*t5378 - 1.*t4963*t5395)*t5468 + t2573*(t1909*t5030 + t2151*t5041 + t5020*t5468) + t4963*(-1.*t1120*t1769*t5020 + t1769*t2573*t5030 + t1909*t5378 + t5395*t5468) - 1.*t1120*t1769*t5544)*var2[4] + ((-1.*t1120*t3948*t5244 - 1.*t2573*t4963*t5244)*t5468 + t4963*(t2332*t2573*t5020 + t1120*t2332*t5030 + t2428*t5041 + t1120*t1909*t5244 + t2151*t5283 + t2573*t5244*t5468) + t2332*t2573*t5544)*var2[5] + ((-1.*t1120*t3948*t5093 - 1.*t2573*t4963*t5093)*t5468 + t1258*t2573*t5544 + t4963*(t1258*t2573*t5020 + t1120*t1258*t5030 + t1120*t1909*t5093 + t2151*t5120 + t2573*t5093*t5468 + t5041*t780))*var2[6];
  p_output1[20]=((-1.*t1120*t3232*t5020 + t2573*t3232*t5030 + t3354*t5378 + t5051*t5395)*t5468 + t5051*(t1120*t1769*t5020 - 1.*t1769*t2573*t5030 - 1.*t1909*t5378 - 1.*t5395*t5468) - 1.*t1120*t3232*t5775 - 1.*t1120*t1769*t5796)*var2[4] + (t2332*t2573*t5796 + t5051*(-1.*t2332*t2573*t5020 - 1.*t1120*t2332*t5030 - 1.*t1120*t1909*t5244 - 1.*t2573*t5244*t5468 + t5843 + t5846) + t2573*t5775*t780 + t5468*(t1120*t3354*t5244 + t2573*t5051*t5244 + t5875 + t5876 + t2573*t5020*t780 + t1120*t5030*t780))*var2[5] + (t5051*(-1.*t1258*t2573*t5020 - 1.*t1120*t1258*t5030 - 1.*t1120*t1909*t5093 - 1.*t2573*t5093*t5468 + t5694 + t5702) + t5468*(t2573*t2915*t5020 + t1120*t2915*t5030 + t1120*t3354*t5093 + t2573*t5051*t5093 + t5722 + t5732) + t2573*t2915*t5775 + t1258*t2573*t5796)*var2[6];
  p_output1[21]=t4941;
  p_output1[22]=t4960;
  p_output1[23]=t4961;
  p_output1[24]=0.03244*t3740*var2[5] + 0.03244*t3047*var2[6];
  p_output1[25]=-0.03244*t2428*var2[5] - 0.03244*t780*var2[6];
  p_output1[26]=(t3497*(-1.*t2332*t5009 - 1.*t1769*t5244 + t5843 + t5846) + t3740*t5989 + t2428*t5994 + t2151*(t3232*t5244 + t5875 + t5876 + t5009*t780))*var2[5] + (t3497*(-1.*t1258*t5009 - 1.*t1769*t5093 + t5694 + t5702) + t2151*(t2915*t5009 + t3232*t5093 + t5722 + t5732) + t3047*t5989 + t5994*t780)*var2[6];
  p_output1[27]=t2428*var2[5] + t780*var2[6];
  p_output1[28]=t3740*var2[5] + t3047*var2[6];
  p_output1[29]=0;
  p_output1[30]=-1.*(-1.*t233*t4980 - 1.*t2843*t4997 - 1.*t233*t5080 - 1.*t5057*t647)*var2[6];
  p_output1[31]=-1.*(t233*t4997 + t1435*t5057 + t4980*t647 + t5080*t647)*var2[6];
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



void dJb_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

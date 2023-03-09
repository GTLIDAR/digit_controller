/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_left_hip_yaw_src.h"

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
  double t246;
  double t282;
  double t411;
  double t466;
  double t820;
  double t837;
  double t834;
  double t870;
  double t928;
  double t1325;
  double t1351;
  double t1365;
  double t1385;
  double t1401;
  double t1025;
  double t1079;
  double t1083;
  double t1591;
  double t1593;
  double t1627;
  double t1639;
  double t1777;
  double t1784;
  double t1672;
  double t1681;
  double t1690;
  double t1697;
  double t1818;
  double t1821;
  double t1850;
  double t1852;
  double t1857;
  double t1888;
  double t1962;
  double t1965;
  double t1967;
  double t2071;
  double t2082;
  double t2087;
  double t110;
  double t1823;
  double t1834;
  double t1840;
  double t1397;
  double t1434;
  double t1441;
  double t2153;
  double t2162;
  double t2163;
  double t2021;
  double t2038;
  double t2044;
  double t2251;
  double t2262;
  double t2283;
  double t1525;
  double t1526;
  double t1530;
  double t2471;
  double t2491;
  double t2496;
  double t2507;
  double t2453;
  double t2457;
  double t2467;
  t246 = Cos(var1[3]);
  t282 = Sin(var1[3]);
  t411 = Cos(var1[4]);
  t466 = Sin(var1[4]);
  t820 = Cos(var1[5]);
  t837 = Sin(var1[5]);
  t834 = t246*t820*t466;
  t870 = t282*t837;
  t928 = t834 + t870;
  t1325 = Cos(var1[6]);
  t1351 = -1.*t820*t282;
  t1365 = t246*t466*t837;
  t1385 = t1351 + t1365;
  t1401 = Sin(var1[6]);
  t1025 = t820*t282*t466;
  t1079 = -1.*t246*t837;
  t1083 = t1025 + t1079;
  t1591 = -1.*t1325;
  t1593 = 1. + t1591;
  t1627 = 0.091*t1593;
  t1639 = 0. + t1627;
  t1777 = 0.091*t1401;
  t1784 = 0. + t1777;
  t1672 = t246*t820;
  t1681 = t282*t466*t837;
  t1690 = t1672 + t1681;
  t1697 = t1639*t1690;
  t1818 = t1083*t1784;
  t1821 = 0. + var1[1] + t1697 + t1818;
  t1850 = -1.*var1[2];
  t1852 = -1.*t411*t1639*t837;
  t1857 = -1.*t411*t820*t1784;
  t1888 = 0. + t1850 + t1852 + t1857;
  t1962 = t1325*t1690;
  t1965 = -1.*t1083*t1401;
  t1967 = t1962 + t1965;
  t2071 = t1325*t1083;
  t2082 = t1690*t1401;
  t2087 = t2071 + t2082;
  t110 = -1.*var1[0];
  t1823 = t411*t1325*t837;
  t1834 = -1.*t411*t820*t1401;
  t1840 = t1823 + t1834;
  t1397 = t1325*t1385;
  t1434 = -1.*t928*t1401;
  t1441 = t1397 + t1434;
  t2153 = -1.*t1639*t1385;
  t2162 = -1.*t928*t1784;
  t2163 = 0. + t110 + t2153 + t2162;
  t2021 = t411*t820*t1325;
  t2038 = t411*t837*t1401;
  t2044 = t2021 + t2038;
  t2251 = t411*t1639*t837;
  t2262 = t411*t820*t1784;
  t2283 = 0. + var1[2] + t2251 + t2262;
  t1525 = t1325*t928;
  t1526 = t1385*t1401;
  t1530 = t1525 + t1526;
  t2471 = -1.*var1[1];
  t2491 = -1.*t1639*t1690;
  t2496 = -1.*t1083*t1784;
  t2507 = 0. + t2471 + t2491 + t2496;
  t2453 = t1639*t1385;
  t2457 = t928*t1784;
  t2467 = 0. + var1[0] + t2453 + t2457;
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
  p_output1[19]=t110;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t246*var1[2];
  p_output1[25]=-1.*t282*var1[2];
  p_output1[26]=t246*var1[0] + t282*var1[1];
  p_output1[27]=-1.*t282;
  p_output1[28]=t246;
  p_output1[29]=0;
  p_output1[30]=-1.*t466*var1[1] - 1.*t282*t411*var1[2];
  p_output1[31]=t466*var1[0] + t246*t411*var1[2];
  p_output1[32]=t282*t411*var1[0] - 1.*t246*t411*var1[1];
  p_output1[33]=t246*t411;
  p_output1[34]=t282*t411;
  p_output1[35]=-1.*t466;
  p_output1[36]=0.091*t928 + t466*var1[1] + t282*t411*var1[2];
  p_output1[37]=0.091*t1083 - 1.*t466*var1[0] - 1.*t246*t411*var1[2];
  p_output1[38]=0.091*t411*t820 - 1.*t282*t411*var1[0] + t246*t411*var1[1];
  p_output1[39]=0. - 1.*t246*t411;
  p_output1[40]=0. - 1.*t282*t411;
  p_output1[41]=0. + t466;
  p_output1[42]=-0.041869*t1441 - 0.016493*t1530 + 0.366501*(t1821*t1840 + t1888*t1967) - 0.930418*(t1821*t2044 + t1888*t2087) - 0.084668*t246*t411;
  p_output1[43]=-0.041869*t1967 - 0.016493*t2087 + 0.366501*(t1840*t2163 + t1441*t2283) - 0.930418*(t2044*t2163 + t1530*t2283) - 0.084668*t282*t411;
  p_output1[44]=-0.041869*t1840 - 0.016493*t2044 + 0.366501*(t1967*t2467 + t1441*t2507) - 0.930418*(t2087*t2467 + t1530*t2507) + 0.084668*t466;
  p_output1[45]=0. + 0.366501*t1441 - 0.930418*t1530;
  p_output1[46]=0. + 0.366501*t1967 - 0.930418*t2087;
  p_output1[47]=0. + 0.366501*t1840 - 0.930418*t2044;
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



void Js_left_hip_yaw_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

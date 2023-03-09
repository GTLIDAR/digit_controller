/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_shoulder_yaw_joint_right_src.h"

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
  double t71;
  double t117;
  double t181;
  double t193;
  double t334;
  double t387;
  double t382;
  double t404;
  double t410;
  double t432;
  double t483;
  double t484;
  double t863;
  double t849;
  double t1008;
  double t1009;
  double t598;
  double t613;
  double t616;
  double t628;
  double t636;
  double t641;
  double t1028;
  double t1031;
  double t1044;
  double t1051;
  double t1053;
  double t1118;
  double t1206;
  double t1213;
  double t1224;
  double t1003;
  double t1046;
  double t1121;
  double t1130;
  double t1151;
  double t1157;
  double t1175;
  double t1289;
  double t1300;
  double t1311;
  double t856;
  double t919;
  double t930;
  double t1192;
  double t1194;
  double t1200;
  double t46;
  double t1246;
  double t1263;
  double t1276;
  double t1459;
  double t1466;
  double t1469;
  double t1367;
  double t1392;
  double t1457;
  double t951;
  double t954;
  double t961;
  double t1524;
  double t1531;
  double t1550;
  double t1558;
  double t1512;
  double t1516;
  double t1517;
  double t1722;
  double t1728;
  double t1731;
  double t1681;
  double t1923;
  double t1929;
  double t1937;
  double t1977;
  double t1808;
  double t1817;
  double t1690;
  double t1703;
  double t1743;
  double t1745;
  double t2001;
  double t2015;
  double t2021;
  double t2026;
  double t2033;
  double t2036;
  double t2037;
  double t2051;
  double t2057;
  double t2058;
  double t2066;
  double t2072;
  double t2029;
  double t2056;
  double t2075;
  double t2079;
  double t1832;
  double t1835;
  double t2173;
  double t2179;
  double t2210;
  double t2211;
  double t1854;
  double t1874;
  double t2087;
  double t2103;
  double t2104;
  double t2107;
  double t2243;
  double t2249;
  double t2252;
  double t2257;
  double t2367;
  double t2380;
  double t2415;
  double t2419;
  double t1717;
  double t1740;
  double t1765;
  double t1772;
  double t2121;
  double t2137;
  double t2149;
  double t2160;
  double t2468;
  double t2484;
  double t2491;
  double t2506;
  double t1826;
  double t1841;
  double t1842;
  double t1844;
  double t2269;
  double t2270;
  double t2271;
  double t2299;
  double t2530;
  double t2547;
  double t2558;
  double t2560;
  double t2328;
  double t2330;
  double t2338;
  double t2340;
  double t1912;
  double t1934;
  double t1980;
  double t1983;
  double t2657;
  double t2658;
  double t2660;
  double t2664;
  double t2673;
  double t2676;
  double t2704;
  double t2709;
  t71 = Cos(var1[3]);
  t117 = Sin(var1[3]);
  t181 = Cos(var1[4]);
  t193 = Sin(var1[4]);
  t334 = Cos(var1[5]);
  t387 = Sin(var1[5]);
  t382 = t71*t334*t193;
  t404 = t117*t387;
  t410 = t382 + t404;
  t432 = -1.*t334*t117;
  t483 = t71*t193*t387;
  t484 = t432 + t483;
  t863 = Cos(var1[24]);
  t849 = Sin(var1[24]);
  t1008 = -1.*t863;
  t1009 = 1. + t1008;
  t598 = t334*t117*t193;
  t613 = -1.*t71*t387;
  t616 = t598 + t613;
  t628 = t71*t334;
  t636 = t117*t193*t387;
  t641 = t628 + t636;
  t1028 = 0.4*t1009;
  t1031 = -0.12*t849;
  t1044 = 0. + t1028 + t1031;
  t1051 = -0.12*t1009;
  t1053 = -0.4*t849;
  t1118 = 0. + t1051 + t1053;
  t1206 = t1044*t616;
  t1213 = t1118*t641;
  t1224 = 0. + var1[1] + t1206 + t1213;
  t1003 = -1.*var1[2];
  t1046 = -1.*t181*t334*t1044;
  t1121 = -1.*t181*t1118*t387;
  t1130 = 0. + t1003 + t1046 + t1121;
  t1151 = -1.*t849*t616;
  t1157 = t863*t641;
  t1175 = t1151 + t1157;
  t1289 = t863*t616;
  t1300 = t849*t641;
  t1311 = t1289 + t1300;
  t856 = -1.*t849*t410;
  t919 = t863*t484;
  t930 = t856 + t919;
  t1192 = -1.*t181*t334*t849;
  t1194 = t863*t181*t387;
  t1200 = t1192 + t1194;
  t46 = -1.*var1[0];
  t1246 = t863*t181*t334;
  t1263 = t181*t849*t387;
  t1276 = t1246 + t1263;
  t1459 = -1.*t1044*t410;
  t1466 = -1.*t1118*t484;
  t1469 = 0. + t46 + t1459 + t1466;
  t1367 = t181*t334*t1044;
  t1392 = t181*t1118*t387;
  t1457 = 0. + var1[2] + t1367 + t1392;
  t951 = t863*t410;
  t954 = t849*t484;
  t961 = t951 + t954;
  t1524 = -1.*var1[1];
  t1531 = -1.*t1044*t616;
  t1550 = -1.*t1118*t641;
  t1558 = 0. + t1524 + t1531 + t1550;
  t1512 = t1044*t410;
  t1516 = t1118*t484;
  t1517 = 0. + var1[0] + t1512 + t1516;
  t1722 = Cos(var1[25]);
  t1728 = -1.*t1722;
  t1731 = 1. + t1728;
  t1681 = Sin(var1[25]);
  t1923 = 0.104528*t1681;
  t1929 = 0. + t1923;
  t1937 = 0.994522*t1681;
  t1977 = 0. + t1937;
  t1808 = -0.104528*t1681;
  t1817 = 0. + t1808;
  t1690 = -0.994522*t1681;
  t1703 = 0. + t1690;
  t1743 = -0.9890740084840001*t1731;
  t1745 = 1. + t1743;
  t2001 = -0.056500534356700764*t1731;
  t2015 = 0.040271188976*t1929;
  t2021 = 0.38315650737400003*t1977;
  t2026 = 0. + t2001 + t2015 + t2021;
  t2033 = 1.1345904784751044e-7*var1[25];
  t2036 = 0.04027119345689465*t1731;
  t2037 = -0.05650052807*t1817;
  t2051 = t2033 + t2036 + t2037;
  t2057 = -1.1924972351948546e-8*var1[25];
  t2058 = 0.38315655000705834*t1731;
  t2066 = -0.05650052807*t1703;
  t2072 = t2057 + t2058 + t2066;
  t2029 = t2026*t193;
  t2056 = -1.*t2051*t1200;
  t2075 = -1.*t2072*t1276;
  t2079 = 0. + t1003 + t1046 + t2029 + t1121 + t2056 + t2075;
  t1832 = -0.010926102783999999*t1731;
  t1835 = 1. + t1832;
  t2173 = t181*t2026*t117;
  t2179 = t2051*t1175;
  t2210 = t2072*t1311;
  t2211 = 0. + var1[1] + t2173 + t1206 + t1213 + t2179 + t2210;
  t1854 = -1.0000001112680001*t1731;
  t1874 = 1. + t1854;
  t2087 = t181*t1703*t117;
  t2103 = -0.103955395616*t1731*t1175;
  t2104 = t1745*t1311;
  t2107 = t2087 + t2103 + t2104;
  t2243 = t181*t1817*t117;
  t2249 = t1835*t1175;
  t2252 = -0.103955395616*t1731*t1311;
  t2257 = t2243 + t2249 + t2252;
  t2367 = t1874*t181*t117;
  t2380 = t1929*t1175;
  t2415 = t1977*t1311;
  t2419 = t2367 + t2380 + t2415;
  t1717 = t71*t181*t1703;
  t1740 = -0.103955395616*t1731*t930;
  t1765 = t1745*t961;
  t1772 = t1717 + t1740 + t1765;
  t2121 = -1.*t1703*t193;
  t2137 = -0.103955395616*t1731*t1200;
  t2149 = t1745*t1276;
  t2160 = t2121 + t2137 + t2149;
  t2468 = -1.*t2026*t193;
  t2484 = t2051*t1200;
  t2491 = t2072*t1276;
  t2506 = 0. + var1[2] + t1367 + t2468 + t1392 + t2484 + t2491;
  t1826 = t71*t181*t1817;
  t1841 = t1835*t930;
  t1842 = -0.103955395616*t1731*t961;
  t1844 = t1826 + t1841 + t1842;
  t2269 = -1.*t1817*t193;
  t2270 = t1835*t1200;
  t2271 = -0.103955395616*t1731*t1276;
  t2299 = t2269 + t2270 + t2271;
  t2530 = -1.*t71*t181*t2026;
  t2547 = -1.*t2051*t930;
  t2558 = -1.*t2072*t961;
  t2560 = 0. + t46 + t2530 + t1459 + t1466 + t2547 + t2558;
  t2328 = -1.*t1874*t193;
  t2330 = t1929*t1200;
  t2338 = t1977*t1276;
  t2340 = t2328 + t2330 + t2338;
  t1912 = t1874*t71*t181;
  t1934 = t1929*t930;
  t1980 = t1977*t961;
  t1983 = t1912 + t1934 + t1980;
  t2657 = t71*t181*t2026;
  t2658 = t2051*t930;
  t2660 = t2072*t961;
  t2664 = 0. + var1[0] + t2657 + t1512 + t1516 + t2658 + t2660;
  t2673 = -1.*t181*t2026*t117;
  t2676 = -1.*t2051*t1175;
  t2704 = -1.*t2072*t1311;
  t2709 = 0. + t1524 + t2673 + t1531 + t1550 + t2676 + t2704;
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
  p_output1[19]=t46;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t71*var1[2];
  p_output1[25]=-1.*t117*var1[2];
  p_output1[26]=t71*var1[0] + t117*var1[1];
  p_output1[27]=-1.*t117;
  p_output1[28]=t71;
  p_output1[29]=0;
  p_output1[30]=-1.*t193*var1[1] - 1.*t117*t181*var1[2];
  p_output1[31]=t193*var1[0] + t181*t71*var1[2];
  p_output1[32]=t117*t181*var1[0] - 1.*t181*t71*var1[1];
  p_output1[33]=t181*t71;
  p_output1[34]=t117*t181;
  p_output1[35]=-1.*t193;
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
  p_output1[144]=-0.12*t410 - 0.4*t484 + t193*var1[1] + t117*t181*var1[2];
  p_output1[145]=-0.12*t616 - 0.4*t641 - 1.*t193*var1[0] - 1.*t181*t71*var1[2];
  p_output1[146]=-0.12*t181*t334 - 0.4*t181*t387 - 1.*t117*t181*var1[0] + t181*t71*var1[1];
  p_output1[147]=0. - 1.*t181*t71;
  p_output1[148]=0. - 1.*t117*t181;
  p_output1[149]=0. + t193;
  p_output1[150]=-0.994522*(t1130*t1175 + t1200*t1224) + 0.104528*(t1224*t1276 + t1130*t1311) + 0.385267*t181*t71 + 0.005906*t930 + 0.056191*t961;
  p_output1[151]=0.005906*t1175 + 0.056191*t1311 + 0.385267*t117*t181 - 0.994522*(t1200*t1469 + t1457*t930) + 0.104528*(t1276*t1469 + t1457*t961);
  p_output1[152]=0.005906*t1200 + 0.056191*t1276 - 0.385267*t193 - 0.994522*(t1175*t1517 + t1558*t930) + 0.104528*(t1311*t1517 + t1558*t961);
  p_output1[153]=0. - 0.994522*t930 + 0.104528*t961;
  p_output1[154]=0. - 0.994522*t1175 + 0.104528*t1311;
  p_output1[155]=0. - 0.994522*t1200 + 0.104528*t1276;
  p_output1[156]=0.151261*t1772 + 0.249652*t1844 + 0.176528*t1983 - 0.703234*(t2079*t2107 + t2160*t2211) - 0.073913*(t2079*t2257 + t2211*t2299) + 0.707107*(t2211*t2340 + t2079*t2419);
  p_output1[157]=0.151261*t2107 + 0.249652*t2257 + 0.176528*t2419 - 0.703234*(t1772*t2506 + t2160*t2560) - 0.073913*(t1844*t2506 + t2299*t2560) + 0.707107*(t1983*t2506 + t2340*t2560);
  p_output1[158]=0.151261*t2160 + 0.249652*t2299 + 0.176528*t2340 - 0.703234*(t2107*t2664 + t1772*t2709) - 0.073913*(t2257*t2664 + t1844*t2709) + 0.707107*(t2419*t2664 + t1983*t2709);
  p_output1[159]=0. - 0.703234*t1772 - 0.073913*t1844 + 0.707107*t1983;
  p_output1[160]=0. - 0.703234*t2107 - 0.073913*t2257 + 0.707107*t2419;
  p_output1[161]=0. - 0.703234*t2160 - 0.073913*t2299 + 0.707107*t2340;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
}



void Js_shoulder_yaw_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

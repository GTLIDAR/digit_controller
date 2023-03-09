/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:43:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_shoulder_yaw_joint_left_src.h"

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
  double t38;
  double t101;
  double t166;
  double t178;
  double t318;
  double t375;
  double t342;
  double t424;
  double t435;
  double t440;
  double t446;
  double t447;
  double t792;
  double t771;
  double t915;
  double t918;
  double t525;
  double t527;
  double t551;
  double t583;
  double t584;
  double t585;
  double t921;
  double t923;
  double t929;
  double t943;
  double t948;
  double t965;
  double t1092;
  double t1109;
  double t1113;
  double t913;
  double t937;
  double t971;
  double t1005;
  double t1029;
  double t1034;
  double t1038;
  double t1153;
  double t1158;
  double t1170;
  double t776;
  double t796;
  double t807;
  double t1044;
  double t1052;
  double t1084;
  double t35;
  double t1134;
  double t1145;
  double t1146;
  double t1315;
  double t1320;
  double t1345;
  double t1255;
  double t1291;
  double t1304;
  double t869;
  double t888;
  double t906;
  double t1493;
  double t1509;
  double t1514;
  double t1527;
  double t1459;
  double t1467;
  double t1468;
  double t1723;
  double t1730;
  double t1738;
  double t1701;
  double t1860;
  double t1877;
  double t1844;
  double t1848;
  double t1775;
  double t1776;
  double t1706;
  double t1712;
  double t1747;
  double t1756;
  double t1917;
  double t1948;
  double t1984;
  double t1989;
  double t2002;
  double t2023;
  double t2024;
  double t2026;
  double t2035;
  double t2069;
  double t2079;
  double t2080;
  double t2000;
  double t2027;
  double t2094;
  double t2101;
  double t1780;
  double t1786;
  double t2207;
  double t2218;
  double t2221;
  double t2226;
  double t1824;
  double t1833;
  double t2106;
  double t2119;
  double t2135;
  double t2139;
  double t2237;
  double t2238;
  double t2242;
  double t2246;
  double t2347;
  double t2355;
  double t2363;
  double t2366;
  double t1713;
  double t1740;
  double t1760;
  double t1763;
  double t2160;
  double t2164;
  double t2180;
  double t2186;
  double t2417;
  double t2451;
  double t2459;
  double t2471;
  double t1778;
  double t1797;
  double t1801;
  double t1806;
  double t2256;
  double t2270;
  double t2278;
  double t2284;
  double t2532;
  double t2536;
  double t2538;
  double t2545;
  double t2302;
  double t2308;
  double t2310;
  double t2315;
  double t1835;
  double t1859;
  double t1879;
  double t1898;
  double t2626;
  double t2628;
  double t2629;
  double t2631;
  double t2665;
  double t2674;
  double t2676;
  double t2682;
  t38 = Cos(var1[3]);
  t101 = Sin(var1[3]);
  t166 = Cos(var1[4]);
  t178 = Sin(var1[4]);
  t318 = Cos(var1[5]);
  t375 = Sin(var1[5]);
  t342 = t38*t318*t178;
  t424 = t101*t375;
  t435 = t342 + t424;
  t440 = -1.*t318*t101;
  t446 = t38*t178*t375;
  t447 = t440 + t446;
  t792 = Cos(var1[13]);
  t771 = Sin(var1[13]);
  t915 = -1.*t792;
  t918 = 1. + t915;
  t525 = t318*t101*t178;
  t527 = -1.*t38*t375;
  t551 = t525 + t527;
  t583 = t38*t318;
  t584 = t101*t178*t375;
  t585 = t583 + t584;
  t921 = 0.4*t918;
  t923 = 0.12*t771;
  t929 = 0. + t921 + t923;
  t943 = 0.12*t918;
  t948 = -0.4*t771;
  t965 = 0. + t943 + t948;
  t1092 = t929*t551;
  t1109 = t965*t585;
  t1113 = 0. + var1[1] + t1092 + t1109;
  t913 = -1.*var1[2];
  t937 = -1.*t166*t318*t929;
  t971 = -1.*t166*t965*t375;
  t1005 = 0. + t913 + t937 + t971;
  t1029 = -1.*t771*t551;
  t1034 = t792*t585;
  t1038 = t1029 + t1034;
  t1153 = t792*t551;
  t1158 = t771*t585;
  t1170 = t1153 + t1158;
  t776 = -1.*t771*t435;
  t796 = t792*t447;
  t807 = t776 + t796;
  t1044 = -1.*t166*t318*t771;
  t1052 = t792*t166*t375;
  t1084 = t1044 + t1052;
  t35 = -1.*var1[0];
  t1134 = t792*t166*t318;
  t1145 = t166*t771*t375;
  t1146 = t1134 + t1145;
  t1315 = -1.*t929*t435;
  t1320 = -1.*t965*t447;
  t1345 = 0. + t35 + t1315 + t1320;
  t1255 = t166*t318*t929;
  t1291 = t166*t965*t375;
  t1304 = 0. + var1[2] + t1255 + t1291;
  t869 = t792*t435;
  t888 = t771*t447;
  t906 = t869 + t888;
  t1493 = -1.*var1[1];
  t1509 = -1.*t929*t551;
  t1514 = -1.*t965*t585;
  t1527 = 0. + t1493 + t1509 + t1514;
  t1459 = t929*t435;
  t1467 = t965*t447;
  t1468 = 0. + var1[0] + t1459 + t1467;
  t1723 = Cos(var1[14]);
  t1730 = -1.*t1723;
  t1738 = 1. + t1730;
  t1701 = Sin(var1[14]);
  t1860 = -0.994522*t1701;
  t1877 = 0. + t1860;
  t1844 = 0.104528*t1701;
  t1848 = 0. + t1844;
  t1775 = -0.104528*t1701;
  t1776 = 0. + t1775;
  t1706 = 0.994522*t1701;
  t1712 = 0. + t1706;
  t1747 = -0.9890740084840001*t1738;
  t1756 = 1. + t1747;
  t1917 = -0.056500534356700764*t1738;
  t1948 = 0.38315650737400003*t1877;
  t1984 = -0.040271188976*t1848;
  t1989 = 0. + t1917 + t1948 + t1984;
  t2002 = 1.1345904784751044e-7*var1[14];
  t2023 = -0.04027119345689465*t1738;
  t2024 = -0.05650052807*t1776;
  t2026 = t2002 + t2023 + t2024;
  t2035 = 1.1924972351948546e-8*var1[14];
  t2069 = 0.38315655000705834*t1738;
  t2079 = -0.05650052807*t1712;
  t2080 = t2035 + t2069 + t2079;
  t2000 = t1989*t178;
  t2027 = -1.*t2026*t1084;
  t2094 = -1.*t2080*t1146;
  t2101 = 0. + t913 + t937 + t2000 + t971 + t2027 + t2094;
  t1780 = -0.010926102783999999*t1738;
  t1786 = 1. + t1780;
  t2207 = t166*t1989*t101;
  t2218 = t2026*t1038;
  t2221 = t2080*t1170;
  t2226 = 0. + var1[1] + t2207 + t1092 + t1109 + t2218 + t2221;
  t1824 = -1.0000001112680001*t1738;
  t1833 = 1. + t1824;
  t2106 = t166*t1712*t101;
  t2119 = 0.103955395616*t1738*t1038;
  t2135 = t1756*t1170;
  t2139 = t2106 + t2119 + t2135;
  t2237 = t166*t1776*t101;
  t2238 = t1786*t1038;
  t2242 = 0.103955395616*t1738*t1170;
  t2246 = t2237 + t2238 + t2242;
  t2347 = t1833*t166*t101;
  t2355 = t1848*t1038;
  t2363 = t1877*t1170;
  t2366 = t2347 + t2355 + t2363;
  t1713 = t38*t166*t1712;
  t1740 = 0.103955395616*t1738*t807;
  t1760 = t1756*t906;
  t1763 = t1713 + t1740 + t1760;
  t2160 = -1.*t1712*t178;
  t2164 = 0.103955395616*t1738*t1084;
  t2180 = t1756*t1146;
  t2186 = t2160 + t2164 + t2180;
  t2417 = -1.*t1989*t178;
  t2451 = t2026*t1084;
  t2459 = t2080*t1146;
  t2471 = 0. + var1[2] + t1255 + t2417 + t1291 + t2451 + t2459;
  t1778 = t38*t166*t1776;
  t1797 = t1786*t807;
  t1801 = 0.103955395616*t1738*t906;
  t1806 = t1778 + t1797 + t1801;
  t2256 = -1.*t1776*t178;
  t2270 = t1786*t1084;
  t2278 = 0.103955395616*t1738*t1146;
  t2284 = t2256 + t2270 + t2278;
  t2532 = -1.*t38*t166*t1989;
  t2536 = -1.*t2026*t807;
  t2538 = -1.*t2080*t906;
  t2545 = 0. + t35 + t2532 + t1315 + t1320 + t2536 + t2538;
  t2302 = -1.*t1833*t178;
  t2308 = t1848*t1084;
  t2310 = t1877*t1146;
  t2315 = t2302 + t2308 + t2310;
  t1835 = t1833*t38*t166;
  t1859 = t1848*t807;
  t1879 = t1877*t906;
  t1898 = t1835 + t1859 + t1879;
  t2626 = t38*t166*t1989;
  t2628 = t2026*t807;
  t2629 = t2080*t906;
  t2631 = 0. + var1[0] + t2626 + t1459 + t1467 + t2628 + t2629;
  t2665 = -1.*t166*t1989*t101;
  t2674 = -1.*t2026*t1038;
  t2676 = -1.*t2080*t1170;
  t2682 = 0. + t1493 + t2665 + t1509 + t1514 + t2674 + t2676;
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
  p_output1[19]=t35;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t38*var1[2];
  p_output1[25]=-1.*t101*var1[2];
  p_output1[26]=t38*var1[0] + t101*var1[1];
  p_output1[27]=-1.*t101;
  p_output1[28]=t38;
  p_output1[29]=0;
  p_output1[30]=-1.*t178*var1[1] - 1.*t101*t166*var1[2];
  p_output1[31]=t178*var1[0] + t166*t38*var1[2];
  p_output1[32]=t101*t166*var1[0] - 1.*t166*t38*var1[1];
  p_output1[33]=t166*t38;
  p_output1[34]=t101*t166;
  p_output1[35]=-1.*t178;
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
  p_output1[78]=0.12*t435 - 0.4*t447 + t178*var1[1] + t101*t166*var1[2];
  p_output1[79]=0.12*t551 - 0.4*t585 - 1.*t178*var1[0] - 1.*t166*t38*var1[2];
  p_output1[80]=0.12*t166*t318 - 0.4*t166*t375 - 1.*t101*t166*var1[0] + t166*t38*var1[1];
  p_output1[81]=0. - 1.*t166*t38;
  p_output1[82]=0. - 1.*t101*t166;
  p_output1[83]=0. + t178;
  p_output1[84]=0.994522*(t1005*t1038 + t1084*t1113) + 0.104528*(t1113*t1146 + t1005*t1170) - 0.385267*t166*t38 + 0.005906*t807 - 0.056191*t906;
  p_output1[85]=0.005906*t1038 - 0.056191*t1170 - 0.385267*t101*t166 + 0.994522*(t1084*t1345 + t1304*t807) + 0.104528*(t1146*t1345 + t1304*t906);
  p_output1[86]=0.005906*t1084 - 0.056191*t1146 + 0.385267*t178 + 0.994522*(t1038*t1468 + t1527*t807) + 0.104528*(t1170*t1468 + t1527*t906);
  p_output1[87]=0. + 0.994522*t807 + 0.104528*t906;
  p_output1[88]=0. + 0.994522*t1038 + 0.104528*t1170;
  p_output1[89]=0. + 0.994522*t1084 + 0.104528*t1146;
  p_output1[90]=-0.151261*t1763 + 0.249652*t1806 - 0.176528*t1898 - 0.703234*(t2101*t2139 + t2186*t2226) + 0.073913*(t2101*t2246 + t2226*t2284) + 0.707107*(t2226*t2315 + t2101*t2366);
  p_output1[91]=-0.151261*t2139 + 0.249652*t2246 - 0.176528*t2366 - 0.703234*(t1763*t2471 + t2186*t2545) + 0.073913*(t1806*t2471 + t2284*t2545) + 0.707107*(t1898*t2471 + t2315*t2545);
  p_output1[92]=-0.151261*t2186 + 0.249652*t2284 - 0.176528*t2315 - 0.703234*(t2139*t2631 + t1763*t2682) + 0.073913*(t2246*t2631 + t1806*t2682) + 0.707107*(t2366*t2631 + t1898*t2682);
  p_output1[93]=0. - 0.703234*t1763 + 0.073913*t1806 + 0.707107*t1898;
  p_output1[94]=0. - 0.703234*t2139 + 0.073913*t2246 + 0.707107*t2366;
  p_output1[95]=0. - 0.703234*t2186 + 0.073913*t2284 + 0.707107*t2315;
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



void Js_shoulder_yaw_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

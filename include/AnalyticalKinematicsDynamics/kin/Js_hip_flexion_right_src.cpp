/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:44:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_hip_flexion_right_src.h"

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
  double t89;
  double t113;
  double t213;
  double t242;
  double t395;
  double t402;
  double t397;
  double t449;
  double t450;
  double t837;
  double t813;
  double t861;
  double t863;
  double t879;
  double t484;
  double t488;
  double t520;
  double t1069;
  double t1083;
  double t1115;
  double t1116;
  double t1128;
  double t1132;
  double t1148;
  double t1150;
  double t1177;
  double t1095;
  double t1181;
  double t1198;
  double t1205;
  double t1210;
  double t1214;
  double t1216;
  double t1221;
  double t1225;
  double t1229;
  double t1304;
  double t1323;
  double t1327;
  double t1029;
  double t1032;
  double t1047;
  double t59;
  double t832;
  double t917;
  double t964;
  double t1260;
  double t1268;
  double t1288;
  double t1366;
  double t1369;
  double t1377;
  double t1389;
  double t1391;
  double t1400;
  double t975;
  double t983;
  double t987;
  double t1522;
  double t1524;
  double t1534;
  double t1536;
  double t1606;
  double t1624;
  double t1630;
  double t1873;
  double t1931;
  double t1965;
  double t1792;
  double t2109;
  double t2112;
  double t2123;
  double t2125;
  double t2009;
  double t2014;
  double t1835;
  double t1853;
  double t1969;
  double t1976;
  double t2169;
  double t2170;
  double t2171;
  double t2178;
  double t2181;
  double t2195;
  double t2198;
  double t2217;
  double t2227;
  double t2254;
  double t2275;
  double t2282;
  double t2179;
  double t2225;
  double t2319;
  double t2322;
  double t2048;
  double t2053;
  double t2406;
  double t2411;
  double t2428;
  double t2445;
  double t2328;
  double t2330;
  double t2349;
  double t2358;
  double t2490;
  double t2492;
  double t2499;
  double t2515;
  double t2095;
  double t2101;
  double t1866;
  double t1967;
  double t1980;
  double t2003;
  double t2381;
  double t2384;
  double t2402;
  double t2403;
  double t2651;
  double t2657;
  double t2676;
  double t2678;
  double t2044;
  double t2073;
  double t2088;
  double t2092;
  double t2529;
  double t2532;
  double t2537;
  double t2542;
  double t2692;
  double t2696;
  double t2707;
  double t2726;
  double t2840;
  double t2843;
  double t2847;
  double t2867;
  double t2873;
  double t2879;
  double t2881;
  double t2887;
  t89 = Cos(var1[3]);
  t113 = Sin(var1[3]);
  t213 = Cos(var1[4]);
  t242 = Sin(var1[4]);
  t395 = Cos(var1[5]);
  t402 = Sin(var1[5]);
  t397 = t89*t395*t242;
  t449 = t113*t402;
  t450 = t397 + t449;
  t837 = Cos(var1[17]);
  t813 = Sin(var1[17]);
  t861 = -1.*t395*t113;
  t863 = t89*t242*t402;
  t879 = t861 + t863;
  t484 = t395*t113*t242;
  t488 = -1.*t89*t402;
  t520 = t484 + t488;
  t1069 = -0.091*t813;
  t1083 = 0. + t1069;
  t1115 = -1.*t837;
  t1116 = 1. + t1115;
  t1128 = -0.091*t1116;
  t1132 = 0. + t1128;
  t1148 = t89*t395;
  t1150 = t113*t242*t402;
  t1177 = t1148 + t1150;
  t1095 = t1083*t520;
  t1181 = t1132*t1177;
  t1198 = 0. + var1[1] + t1095 + t1181;
  t1205 = -1.*var1[2];
  t1210 = -1.*t213*t395*t1083;
  t1214 = -1.*t1132*t213*t402;
  t1216 = 0. + t1205 + t1210 + t1214;
  t1221 = -1.*t813*t520;
  t1225 = t837*t1177;
  t1229 = t1221 + t1225;
  t1304 = t837*t520;
  t1323 = t813*t1177;
  t1327 = t1304 + t1323;
  t1029 = -1.*t213*t395*t813;
  t1032 = t837*t213*t402;
  t1047 = t1029 + t1032;
  t59 = -1.*var1[0];
  t832 = -1.*t813*t450;
  t917 = t837*t879;
  t964 = t832 + t917;
  t1260 = t837*t213*t395;
  t1268 = t213*t813*t402;
  t1288 = t1260 + t1268;
  t1366 = -1.*t1083*t450;
  t1369 = -1.*t1132*t879;
  t1377 = 0. + t59 + t1366 + t1369;
  t1389 = t213*t395*t1083;
  t1391 = t1132*t213*t402;
  t1400 = 0. + var1[2] + t1389 + t1391;
  t975 = t837*t450;
  t983 = t813*t879;
  t987 = t975 + t983;
  t1522 = -1.*var1[1];
  t1524 = -1.*t1083*t520;
  t1534 = -1.*t1132*t1177;
  t1536 = 0. + t1522 + t1524 + t1534;
  t1606 = t1083*t450;
  t1624 = t1132*t879;
  t1630 = 0. + var1[0] + t1606 + t1624;
  t1873 = Cos(var1[18]);
  t1931 = -1.*t1873;
  t1965 = 1. + t1931;
  t1792 = Sin(var1[18]);
  t2109 = -0.930418*t1792;
  t2112 = 0. + t2109;
  t2123 = 0.366501*t1792;
  t2125 = 0. + t2123;
  t2009 = 0.930418*t1792;
  t2014 = 0. + t2009;
  t1835 = -0.366501*t1792;
  t1853 = 0. + t1835;
  t1969 = -0.134322983001*t1965;
  t1976 = 1. + t1969;
  t2169 = -0.04500040093286238*t1965;
  t2170 = -0.07877663122399998*t2112;
  t2171 = 0.031030906668*t2125;
  t2178 = 0. + t2169 + t2170 + t2171;
  t2181 = 1.296332362046933e-7*var1[18];
  t2195 = -0.07877668146182712*t1965;
  t2198 = -0.045000372235*t2014;
  t2217 = t2181 + t2195 + t2198;
  t2227 = 3.2909349868922137e-7*var1[18];
  t2254 = 0.03103092645718495*t1965;
  t2275 = -0.045000372235*t1853;
  t2282 = t2227 + t2254 + t2275;
  t2179 = t2178*t242;
  t2225 = -1.*t2217*t1047;
  t2319 = -1.*t2282*t1288;
  t2322 = 0. + t1205 + t1210 + t2179 + t1214 + t2225 + t2319;
  t2048 = -0.8656776547239999*t1965;
  t2053 = 1. + t2048;
  t2406 = t213*t2178*t113;
  t2411 = t2217*t1229;
  t2428 = t2282*t1327;
  t2445 = 0. + var1[1] + t2406 + t1095 + t1181 + t2411 + t2428;
  t2328 = t213*t1853*t113;
  t2330 = 0.340999127418*t1965*t1229;
  t2349 = t1976*t1327;
  t2358 = t2328 + t2330 + t2349;
  t2490 = t213*t2014*t113;
  t2492 = t2053*t1229;
  t2499 = 0.340999127418*t1965*t1327;
  t2515 = t2490 + t2492 + t2499;
  t2095 = -1.000000637725*t1965;
  t2101 = 1. + t2095;
  t1866 = t89*t213*t1853;
  t1967 = 0.340999127418*t1965*t964;
  t1980 = t1976*t987;
  t2003 = t1866 + t1967 + t1980;
  t2381 = -1.*t1853*t242;
  t2384 = 0.340999127418*t1965*t1047;
  t2402 = t1976*t1288;
  t2403 = t2381 + t2384 + t2402;
  t2651 = -1.*t2178*t242;
  t2657 = t2217*t1047;
  t2676 = t2282*t1288;
  t2678 = 0. + var1[2] + t1389 + t2651 + t1391 + t2657 + t2676;
  t2044 = t89*t213*t2014;
  t2073 = t2053*t964;
  t2088 = 0.340999127418*t1965*t987;
  t2092 = t2044 + t2073 + t2088;
  t2529 = -1.*t2014*t242;
  t2532 = t2053*t1047;
  t2537 = 0.340999127418*t1965*t1288;
  t2542 = t2529 + t2532 + t2537;
  t2692 = -1.*t89*t213*t2178;
  t2696 = -1.*t2217*t964;
  t2707 = -1.*t2282*t987;
  t2726 = 0. + t59 + t2692 + t1366 + t1369 + t2696 + t2707;
  t2840 = t89*t213*t2178;
  t2843 = t2217*t964;
  t2847 = t2282*t987;
  t2867 = 0. + var1[0] + t2840 + t1606 + t1624 + t2843 + t2847;
  t2873 = -1.*t213*t2178*t113;
  t2879 = -1.*t2217*t1229;
  t2881 = -1.*t2282*t1327;
  t2887 = 0. + t1522 + t2873 + t1524 + t1534 + t2879 + t2881;
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
  p_output1[19]=t59;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t89*var1[2];
  p_output1[25]=-1.*t113*var1[2];
  p_output1[26]=t89*var1[0] + t113*var1[1];
  p_output1[27]=-1.*t113;
  p_output1[28]=t89;
  p_output1[29]=0;
  p_output1[30]=-1.*t242*var1[1] - 1.*t113*t213*var1[2];
  p_output1[31]=t242*var1[0] + t213*t89*var1[2];
  p_output1[32]=t113*t213*var1[0] - 1.*t213*t89*var1[1];
  p_output1[33]=t213*t89;
  p_output1[34]=t113*t213;
  p_output1[35]=-1.*t242;
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
  p_output1[102]=-0.091*t450 + t242*var1[1] + t113*t213*var1[2];
  p_output1[103]=-0.091*t520 - 1.*t242*var1[0] - 1.*t213*t89*var1[2];
  p_output1[104]=-0.091*t213*t395 - 1.*t113*t213*var1[0] + t213*t89*var1[1];
  p_output1[105]=0. - 1.*t213*t89;
  p_output1[106]=0. - 1.*t113*t213;
  p_output1[107]=0. + t242;
  p_output1[108]=-0.366501*(t1047*t1198 + t1216*t1229) - 0.930418*(t1198*t1288 + t1216*t1327) + 0.084668*t213*t89 - 0.041869*t964 + 0.016493*t987;
  p_output1[109]=-0.041869*t1229 + 0.016493*t1327 + 0.084668*t113*t213 - 0.366501*(t1047*t1377 + t1400*t964) - 0.930418*(t1288*t1377 + t1400*t987);
  p_output1[110]=-0.041869*t1047 + 0.016493*t1288 - 0.084668*t242 - 0.366501*(t1229*t1630 + t1536*t964) - 0.930418*(t1327*t1630 + t1536*t987);
  p_output1[111]=0. - 0.366501*t964 - 0.930418*t987;
  p_output1[112]=0. - 0.366501*t1229 - 0.930418*t1327;
  p_output1[113]=0. - 0.366501*t1047 - 0.930418*t1288;
  p_output1[114]=0.041869*t2003 + 0.016493*t2092 + 0.366501*(t2322*t2358 + t2403*t2445) - 0.930418*(t2322*t2515 + t2445*t2542) - 0.151852*(t2101*t213*t89 + t2112*t964 + t2125*t987);
  p_output1[115]=-0.151852*(t1229*t2112 + t1327*t2125 + t113*t2101*t213) + 0.041869*t2358 + 0.016493*t2515 + 0.366501*(t2003*t2678 + t2403*t2726) - 0.930418*(t2092*t2678 + t2542*t2726);
  p_output1[116]=0.041869*t2403 - 0.151852*(t1047*t2112 + t1288*t2125 - 1.*t2101*t242) + 0.016493*t2542 + 0.366501*(t2358*t2867 + t2003*t2887) - 0.930418*(t2515*t2867 + t2092*t2887);
  p_output1[117]=0. + 0.366501*t2003 - 0.930418*t2092;
  p_output1[118]=0. + 0.366501*t2358 - 0.930418*t2515;
  p_output1[119]=0. + 0.366501*t2403 - 0.930418*t2542;
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



void Js_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

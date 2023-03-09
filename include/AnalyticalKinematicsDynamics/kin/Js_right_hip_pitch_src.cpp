/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_right_hip_pitch_src.h"

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
  double t107;
  double t112;
  double t247;
  double t254;
  double t400;
  double t409;
  double t406;
  double t410;
  double t417;
  double t738;
  double t689;
  double t743;
  double t744;
  double t766;
  double t475;
  double t478;
  double t480;
  double t900;
  double t913;
  double t924;
  double t961;
  double t963;
  double t984;
  double t1017;
  double t1024;
  double t1029;
  double t918;
  double t1035;
  double t1087;
  double t1091;
  double t1096;
  double t1101;
  double t1104;
  double t1105;
  double t1110;
  double t1144;
  double t1186;
  double t1187;
  double t1195;
  double t895;
  double t897;
  double t898;
  double t69;
  double t732;
  double t770;
  double t771;
  double t1171;
  double t1182;
  double t1183;
  double t1250;
  double t1252;
  double t1254;
  double t1276;
  double t1281;
  double t1294;
  double t829;
  double t877;
  double t889;
  double t1505;
  double t1520;
  double t1522;
  double t1536;
  double t1570;
  double t1597;
  double t1614;
  double t1915;
  double t1917;
  double t1918;
  double t1838;
  double t2082;
  double t2100;
  double t2111;
  double t2126;
  double t1987;
  double t1996;
  double t1841;
  double t1874;
  double t1950;
  double t1963;
  double t2181;
  double t2185;
  double t2186;
  double t2188;
  double t2204;
  double t2205;
  double t2213;
  double t2249;
  double t2253;
  double t2262;
  double t2264;
  double t2288;
  double t2203;
  double t2251;
  double t2303;
  double t2327;
  double t2009;
  double t2027;
  double t2437;
  double t2442;
  double t2483;
  double t2492;
  double t2343;
  double t2388;
  double t2389;
  double t2390;
  double t2502;
  double t2504;
  double t2509;
  double t2533;
  double t2056;
  double t2061;
  double t1895;
  double t1944;
  double t1968;
  double t1971;
  double t2412;
  double t2414;
  double t2421;
  double t2435;
  double t2655;
  double t2658;
  double t2664;
  double t2668;
  double t1998;
  double t2029;
  double t2034;
  double t2035;
  double t2572;
  double t2586;
  double t2597;
  double t2606;
  double t2688;
  double t2690;
  double t2692;
  double t2697;
  double t2806;
  double t2808;
  double t2824;
  double t2825;
  double t2841;
  double t2845;
  double t2848;
  double t2856;
  t107 = Cos(var1[3]);
  t112 = Sin(var1[3]);
  t247 = Cos(var1[4]);
  t254 = Sin(var1[4]);
  t400 = Cos(var1[5]);
  t409 = Sin(var1[5]);
  t406 = t107*t400*t254;
  t410 = t112*t409;
  t417 = t406 + t410;
  t738 = Cos(var1[17]);
  t689 = Sin(var1[17]);
  t743 = -1.*t400*t112;
  t744 = t107*t254*t409;
  t766 = t743 + t744;
  t475 = t400*t112*t254;
  t478 = -1.*t107*t409;
  t480 = t475 + t478;
  t900 = -0.091*t689;
  t913 = 0. + t900;
  t924 = -1.*t738;
  t961 = 1. + t924;
  t963 = -0.091*t961;
  t984 = 0. + t963;
  t1017 = t107*t400;
  t1024 = t112*t254*t409;
  t1029 = t1017 + t1024;
  t918 = t913*t480;
  t1035 = t984*t1029;
  t1087 = 0. + var1[1] + t918 + t1035;
  t1091 = -1.*var1[2];
  t1096 = -1.*t247*t400*t913;
  t1101 = -1.*t984*t247*t409;
  t1104 = 0. + t1091 + t1096 + t1101;
  t1105 = -1.*t689*t480;
  t1110 = t738*t1029;
  t1144 = t1105 + t1110;
  t1186 = t738*t480;
  t1187 = t689*t1029;
  t1195 = t1186 + t1187;
  t895 = -1.*t247*t400*t689;
  t897 = t738*t247*t409;
  t898 = t895 + t897;
  t69 = -1.*var1[0];
  t732 = -1.*t689*t417;
  t770 = t738*t766;
  t771 = t732 + t770;
  t1171 = t738*t247*t400;
  t1182 = t247*t689*t409;
  t1183 = t1171 + t1182;
  t1250 = -1.*t913*t417;
  t1252 = -1.*t984*t766;
  t1254 = 0. + t69 + t1250 + t1252;
  t1276 = t247*t400*t913;
  t1281 = t984*t247*t409;
  t1294 = 0. + var1[2] + t1276 + t1281;
  t829 = t738*t417;
  t877 = t689*t766;
  t889 = t829 + t877;
  t1505 = -1.*var1[1];
  t1520 = -1.*t913*t480;
  t1522 = -1.*t984*t1029;
  t1536 = 0. + t1505 + t1520 + t1522;
  t1570 = t913*t417;
  t1597 = t984*t766;
  t1614 = 0. + var1[0] + t1570 + t1597;
  t1915 = Cos(var1[18]);
  t1917 = -1.*t1915;
  t1918 = 1. + t1917;
  t1838 = Sin(var1[18]);
  t2082 = -0.930418*t1838;
  t2100 = 0. + t2082;
  t2111 = 0.366501*t1838;
  t2126 = 0. + t2111;
  t1987 = 0.930418*t1838;
  t1996 = 0. + t1987;
  t1841 = -0.366501*t1838;
  t1874 = 0. + t1841;
  t1950 = -0.134322983001*t1918;
  t1963 = 1. + t1950;
  t2181 = -0.04500040093286238*t1918;
  t2185 = -0.07877663122399998*t2100;
  t2186 = 0.031030906668*t2126;
  t2188 = 0. + t2181 + t2185 + t2186;
  t2204 = 1.296332362046933e-7*var1[18];
  t2205 = -0.07877668146182712*t1918;
  t2213 = -0.045000372235*t1996;
  t2249 = t2204 + t2205 + t2213;
  t2253 = 3.2909349868922137e-7*var1[18];
  t2262 = 0.03103092645718495*t1918;
  t2264 = -0.045000372235*t1874;
  t2288 = t2253 + t2262 + t2264;
  t2203 = t2188*t254;
  t2251 = -1.*t2249*t898;
  t2303 = -1.*t2288*t1183;
  t2327 = 0. + t1091 + t1096 + t2203 + t1101 + t2251 + t2303;
  t2009 = -0.8656776547239999*t1918;
  t2027 = 1. + t2009;
  t2437 = t247*t2188*t112;
  t2442 = t2249*t1144;
  t2483 = t2288*t1195;
  t2492 = 0. + var1[1] + t2437 + t918 + t1035 + t2442 + t2483;
  t2343 = t247*t1874*t112;
  t2388 = 0.340999127418*t1918*t1144;
  t2389 = t1963*t1195;
  t2390 = t2343 + t2388 + t2389;
  t2502 = t247*t1996*t112;
  t2504 = t2027*t1144;
  t2509 = 0.340999127418*t1918*t1195;
  t2533 = t2502 + t2504 + t2509;
  t2056 = -1.000000637725*t1918;
  t2061 = 1. + t2056;
  t1895 = t107*t247*t1874;
  t1944 = 0.340999127418*t1918*t771;
  t1968 = t1963*t889;
  t1971 = t1895 + t1944 + t1968;
  t2412 = -1.*t1874*t254;
  t2414 = 0.340999127418*t1918*t898;
  t2421 = t1963*t1183;
  t2435 = t2412 + t2414 + t2421;
  t2655 = -1.*t2188*t254;
  t2658 = t2249*t898;
  t2664 = t2288*t1183;
  t2668 = 0. + var1[2] + t1276 + t2655 + t1281 + t2658 + t2664;
  t1998 = t107*t247*t1996;
  t2029 = t2027*t771;
  t2034 = 0.340999127418*t1918*t889;
  t2035 = t1998 + t2029 + t2034;
  t2572 = -1.*t1996*t254;
  t2586 = t2027*t898;
  t2597 = 0.340999127418*t1918*t1183;
  t2606 = t2572 + t2586 + t2597;
  t2688 = -1.*t107*t247*t2188;
  t2690 = -1.*t2249*t771;
  t2692 = -1.*t2288*t889;
  t2697 = 0. + t69 + t2688 + t1250 + t1252 + t2690 + t2692;
  t2806 = t107*t247*t2188;
  t2808 = t2249*t771;
  t2824 = t2288*t889;
  t2825 = 0. + var1[0] + t2806 + t1570 + t1597 + t2808 + t2824;
  t2841 = -1.*t247*t2188*t112;
  t2845 = -1.*t2249*t1144;
  t2848 = -1.*t2288*t1195;
  t2856 = 0. + t1505 + t2841 + t1520 + t1522 + t2845 + t2848;
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
  p_output1[19]=t69;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t107*var1[2];
  p_output1[25]=-1.*t112*var1[2];
  p_output1[26]=t107*var1[0] + t112*var1[1];
  p_output1[27]=-1.*t112;
  p_output1[28]=t107;
  p_output1[29]=0;
  p_output1[30]=-1.*t254*var1[1] - 1.*t112*t247*var1[2];
  p_output1[31]=t254*var1[0] + t107*t247*var1[2];
  p_output1[32]=t112*t247*var1[0] - 1.*t107*t247*var1[1];
  p_output1[33]=t107*t247;
  p_output1[34]=t112*t247;
  p_output1[35]=-1.*t254;
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
  p_output1[102]=-0.091*t417 + t254*var1[1] + t112*t247*var1[2];
  p_output1[103]=-0.091*t480 - 1.*t254*var1[0] - 1.*t107*t247*var1[2];
  p_output1[104]=-0.091*t247*t400 - 1.*t112*t247*var1[0] + t107*t247*var1[1];
  p_output1[105]=0. - 1.*t107*t247;
  p_output1[106]=0. - 1.*t112*t247;
  p_output1[107]=0. + t254;
  p_output1[108]=-0.930418*(t1087*t1183 + t1104*t1195) + 0.084668*t107*t247 - 0.041869*t771 + 0.016493*t889 - 0.366501*(t1104*t1144 + t1087*t898);
  p_output1[109]=-0.041869*t1144 + 0.016493*t1195 + 0.084668*t112*t247 - 0.930418*(t1183*t1254 + t1294*t889) - 0.366501*(t1294*t771 + t1254*t898);
  p_output1[110]=0.016493*t1183 - 0.084668*t254 - 0.366501*(t1144*t1614 + t1536*t771) - 0.930418*(t1195*t1614 + t1536*t889) - 0.041869*t898;
  p_output1[111]=0. - 0.366501*t771 - 0.930418*t889;
  p_output1[112]=0. - 0.366501*t1144 - 0.930418*t1195;
  p_output1[113]=0. - 0.930418*t1183 - 0.366501*t898;
  p_output1[114]=0.041869*t1971 + 0.016493*t2035 + 0.366501*(t2327*t2390 + t2435*t2492) - 0.930418*(t2327*t2533 + t2492*t2606) - 0.151852*(t107*t2061*t247 + t2100*t771 + t2126*t889);
  p_output1[115]=0.041869*t2390 - 0.151852*(t1144*t2100 + t1195*t2126 + t112*t2061*t247) + 0.016493*t2533 + 0.366501*(t1971*t2668 + t2435*t2697) - 0.930418*(t2035*t2668 + t2606*t2697);
  p_output1[116]=0.041869*t2435 + 0.016493*t2606 + 0.366501*(t2390*t2825 + t1971*t2856) - 0.930418*(t2533*t2825 + t2035*t2856) - 0.151852*(t1183*t2126 - 1.*t2061*t254 + t2100*t898);
  p_output1[117]=0. + 0.366501*t1971 - 0.930418*t2035;
  p_output1[118]=0. + 0.366501*t2390 - 0.930418*t2533;
  p_output1[119]=0. + 0.366501*t2435 - 0.930418*t2606;
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



void Js_right_hip_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

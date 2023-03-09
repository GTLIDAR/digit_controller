/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_right_shoulder_pitch_src.h"

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
  double t104;
  double t110;
  double t170;
  double t309;
  double t748;
  double t175;
  double t189;
  double t208;
  double t300;
  double t315;
  double t432;
  double t491;
  double t502;
  double t102;
  double t774;
  double t782;
  double t807;
  double t823;
  double t826;
  double t841;
  double t898;
  double t941;
  double t56;
  double t987;
  double t1002;
  double t1005;
  double t512;
  double t951;
  double t959;
  double t1010;
  double t37;
  double t1666;
  double t1667;
  double t1690;
  double t1707;
  double t1725;
  double t1726;
  double t1231;
  double t1237;
  double t1297;
  double t1299;
  double t1305;
  double t1338;
  double t1340;
  double t1357;
  double t1373;
  double t1424;
  double t1855;
  double t1864;
  double t1874;
  double t1697;
  double t1797;
  double t1801;
  double t2348;
  double t2350;
  double t2352;
  double t2215;
  double t2230;
  double t2303;
  double t2420;
  double t2456;
  double t2532;
  double t2344;
  double t2392;
  double t2396;
  double t971;
  double t1038;
  double t1090;
  double t1350;
  double t1393;
  double t1405;
  double t1422;
  double t1428;
  double t1437;
  double t1440;
  double t1474;
  double t1486;
  double t1828;
  double t1875;
  double t1895;
  double t1969;
  double t2038;
  double t2074;
  double t2105;
  double t2179;
  double t2183;
  double t2185;
  double t2199;
  double t2206;
  double t2402;
  double t2543;
  double t2551;
  double t2558;
  double t2571;
  double t2584;
  double t2745;
  double t2750;
  double t2771;
  double t2802;
  double t2895;
  double t2941;
  double t3224;
  double t3231;
  double t3247;
  double t3441;
  double t3512;
  double t3629;
  double t3694;
  double t3733;
  double t3746;
  double t3792;
  double t3797;
  double t3880;
  double t3882;
  double t3941;
  double t3943;
  double t3953;
  double t3992;
  double t3368;
  double t3384;
  double t3391;
  double t4072;
  double t4100;
  double t4116;
  double t4121;
  double t4124;
  double t3557;
  double t3588;
  double t3844;
  double t4014;
  double t4045;
  double t4223;
  double t4238;
  double t4314;
  double t4332;
  double t4372;
  double t4374;
  double t4382;
  double t4449;
  double t4478;
  double t4603;
  double t4052;
  double t4142;
  double t4175;
  double t4422;
  double t4606;
  double t4716;
  double t4765;
  double t4778;
  double t4811;
  double t3141;
  double t3183;
  double t3214;
  double t4209;
  double t4858;
  double t5059;
  double t5187;
  double t5401;
  double t5501;
  double t5613;
  double t5675;
  double t5744;
  double t5789;
  double t5851;
  double t5871;
  double t6069;
  double t6051;
  double t6146;
  double t6223;
  t104 = Cos(var1[25]);
  t110 = -1.*t104;
  t170 = 1. + t110;
  t309 = Sin(var1[25]);
  t748 = Sin(var1[24]);
  t175 = -0.010926102783999999*t170;
  t189 = 1. + t175;
  t208 = 0.073913*t189;
  t300 = -0.07310496868062215*t170;
  t315 = 0.104528*t309;
  t432 = 0. + t315;
  t491 = 0.707107*t432;
  t502 = t208 + t300 + t491;
  t102 = Cos(var1[24]);
  t774 = -0.9890740084840001*t170;
  t782 = 1. + t774;
  t807 = 0.703234*t782;
  t823 = -0.007683655156165408*t170;
  t826 = 0.994522*t309;
  t841 = 0. + t826;
  t898 = 0.707107*t841;
  t941 = t807 + t823 + t898;
  t56 = Cos(var1[5]);
  t987 = -1.*t748*t502;
  t1002 = t102*t941;
  t1005 = 0. + t987 + t1002;
  t512 = t102*t502;
  t951 = t748*t941;
  t959 = 0. + t512 + t951;
  t1010 = Sin(var1[5]);
  t37 = Sin(var1[3]);
  t1666 = -0.073913*t189;
  t1667 = 0.07310496868062215*t170;
  t1690 = t1666 + t1667 + t491;
  t1707 = -0.703234*t782;
  t1725 = 0.007683655156165408*t170;
  t1726 = t1707 + t1725 + t898;
  t1231 = Cos(var1[3]);
  t1237 = Cos(var1[4]);
  t1297 = -1.0000001112680001*t170;
  t1299 = 1. + t1297;
  t1305 = 0.707107*t1299;
  t1338 = -0.994522*t309;
  t1340 = 0. + t1338;
  t1357 = -0.104528*t309;
  t1373 = 0. + t1357;
  t1424 = Sin(var1[4]);
  t1855 = -1.*t748*t1690;
  t1864 = t102*t1726;
  t1874 = 0. + t1855 + t1864;
  t1697 = t102*t1690;
  t1797 = t748*t1726;
  t1801 = 0. + t1697 + t1797;
  t2348 = -0.104528*t782;
  t2350 = -0.10338592795881554*t170;
  t2352 = t2348 + t2350;
  t2215 = 0.994522*t189;
  t2230 = 0.010866249592949247*t170;
  t2303 = t2215 + t2230;
  t2420 = t102*t2352;
  t2456 = -1.*t2303*t748;
  t2532 = 0. + t2420 + t2456;
  t2344 = t102*t2303;
  t2392 = t2352*t748;
  t2396 = 0. + t2344 + t2392;
  t971 = t56*t959;
  t1038 = -1.*t1005*t1010;
  t1090 = 0. + t971 + t1038;
  t1350 = 0.703234*t1340;
  t1393 = 0.073913*t1373;
  t1405 = 0. + t1305 + t1350 + t1393;
  t1422 = t1237*t1405;
  t1428 = t56*t1005;
  t1437 = t959*t1010;
  t1440 = 0. + t1428 + t1437;
  t1474 = t1424*t1440;
  t1486 = 0. + t1422 + t1474;
  t1828 = t56*t1801;
  t1875 = -1.*t1874*t1010;
  t1895 = 0. + t1828 + t1875;
  t1969 = -0.703234*t1340;
  t2038 = -0.073913*t1373;
  t2074 = 0. + t1305 + t1969 + t2038;
  t2105 = t1237*t2074;
  t2179 = t56*t1874;
  t2183 = t1801*t1010;
  t2185 = 0. + t2179 + t2183;
  t2199 = t1424*t2185;
  t2206 = 0. + t2105 + t2199;
  t2402 = t56*t2396;
  t2543 = -1.*t2532*t1010;
  t2551 = 0. + t2402 + t2543;
  t2558 = -0.104528*t1340;
  t2571 = 0.994522*t1373;
  t2584 = 0. + t2558 + t2571;
  t2745 = t1237*t2584;
  t2750 = t56*t2532;
  t2771 = t2396*t1010;
  t2802 = 0. + t2750 + t2771;
  t2895 = t1424*t2802;
  t2941 = 0. + t2745 + t2895;
  t3224 = -1.*t2074*t1424;
  t3231 = t1237*t2185;
  t3247 = 0. + t3224 + t3231;
  t3441 = -1.*t102;
  t3512 = 1. + t3441;
  t3629 = 1.1345904784751044e-7*var1[25];
  t3694 = -0.18652*t189;
  t3733 = 0.002538711420946367*t170;
  t3746 = -0.05650052807*t1373;
  t3792 = -0.012773*t432;
  t3797 = t3629 + t3694 + t3733 + t3746 + t3792;
  t3880 = -1.1924972351948546e-8*var1[25];
  t3882 = 0.362968*t782;
  t3941 = 0.40254631039735467*t170;
  t3943 = -0.05650052807*t1340;
  t3953 = -0.012773*t841;
  t3992 = t3880 + t3882 + t3941 + t3943 + t3953;
  t3368 = -1.*t2584*t1424;
  t3384 = t1237*t2802;
  t3391 = 0. + t3368 + t3384;
  t4072 = 0.4*t3512;
  t4100 = -0.12*t748;
  t4116 = -1.*t748*t3797;
  t4121 = t102*t3992;
  t4124 = 0. + t4072 + t4100 + t4116 + t4121;
  t3557 = -0.12*t3512;
  t3588 = -0.4*t748;
  t3844 = t102*t3797;
  t4014 = t748*t3992;
  t4045 = 0. + t3557 + t3588 + t3844 + t4014;
  t4223 = -0.012773*t1299;
  t4238 = -0.056500534356700764*t170;
  t4314 = 0.362968*t1340;
  t4332 = -0.18652*t1373;
  t4372 = 0.040271188976*t432;
  t4374 = 0.38315650737400003*t841;
  t4382 = 0. + t4223 + t4238 + t4314 + t4332 + t4372 + t4374;
  t4449 = t56*t4124;
  t4478 = t4045*t1010;
  t4603 = 0. + t4449 + t4478;
  t4052 = t56*t4045;
  t4142 = -1.*t4124*t1010;
  t4175 = 0. + t4052 + t4142;
  t4422 = -1.*t4382*t1424;
  t4606 = t1237*t4603;
  t4716 = 0. + t4422 + t4606;
  t4765 = t1237*t4382;
  t4778 = t1424*t4603;
  t4811 = 0. + t4765 + t4778;
  t3141 = -1.*t1405*t1424;
  t3183 = t1237*t1440;
  t3214 = 0. + t3141 + t3183;
  t4209 = t2551*t4175;
  t4858 = -1.*t4175*t1895;
  t5059 = -1.*t2551*t4175;
  t5187 = t4175*t1090;
  t5401 = -1.*t4175*t1090;
  t5501 = t4175*t1895;
  t5613 = t2584*t4382;
  t5675 = -1.*t2074*t4382;
  t5744 = -1.*t2584*t4382;
  t5789 = t1405*t4382;
  t5851 = -1.*t1405*t4382;
  t5871 = t2074*t4382;
  t6069 = t1305 + t1969 + t2038;
  t6051 = t2558 + t2571;
  t6146 = t1305 + t1350 + t1393;
  t6223 = -0.707107*t1299;
  p_output1[0]=0. + t1231*t1486 - 1.*t1090*t37;
  p_output1[1]=0. + t1231*t2206 - 1.*t1895*t37;
  p_output1[2]=0. + t1231*t2941 - 1.*t2551*t37;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1090*t1231 + t1486*t37;
  p_output1[7]=0. + t1231*t1895 + t2206*t37;
  p_output1[8]=0. + t1231*t2551 + t2941*t37;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3214;
  p_output1[13]=t3247;
  p_output1[14]=t3391;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3247*(t4209 + t3391*t4716 + t2941*t4811) + t3391*(-1.*t3247*t4716 - 1.*t2206*t4811 + t4858);
  p_output1[19]=t3214*(-1.*t3391*t4716 - 1.*t2941*t4811 + t5059) + t3391*(t3214*t4716 + t1486*t4811 + t5187);
  p_output1[20]=t3247*(-1.*t3214*t4716 - 1.*t1486*t4811 + t5401) + t3214*(t3247*t4716 + t2206*t4811 + t5501);
  p_output1[21]=t3214;
  p_output1[22]=t3247;
  p_output1[23]=t3391;
  p_output1[24]=t1895*(t4209 + t2802*t4603 + t5613) + t2551*(-1.*t2185*t4603 + t4858 + t5675);
  p_output1[25]=t1090*(-1.*t2802*t4603 + t5059 + t5744) + t2551*(t1440*t4603 + t5187 + t5789);
  p_output1[26]=t1895*(-1.*t1440*t4603 + t5401 + t5851) + t1090*(t2185*t4603 + t5501 + t5871);
  p_output1[27]=t1090;
  p_output1[28]=t1895;
  p_output1[29]=t2551;
  p_output1[30]=t2074*(t2396*t4045 + t2532*t4124 + t5613) + t2584*(-1.*t1801*t4045 - 1.*t1874*t4124 + t5675);
  p_output1[31]=t1405*(-1.*t2396*t4045 - 1.*t2532*t4124 + t5744) + t2584*(t1005*t4124 + t5789 + t4045*t959);
  p_output1[32]=t1405*(t1801*t4045 + t1874*t4124 + t5871) + t2074*(-1.*t1005*t4124 + t5851 - 1.*t4045*t959);
  p_output1[33]=t1405;
  p_output1[34]=t2074;
  p_output1[35]=t2584;
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
  p_output1[144]=-0.4*t502 - 1.*(t2303*t3797 + t2352*t3992 + t4382*t6051)*t6069 - 1.*t6051*(-1.*t1690*t3797 - 1.*t1726*t3992 - 1.*t4382*t6069) - 0.12*t941;
  p_output1[145]=-0.4*t1690 - 0.12*t1726 - 1.*(-1.*t2303*t3797 - 1.*t2352*t3992 - 1.*t4382*t6051)*t6146 - 1.*t6051*(t3797*t502 + t4382*t6146 + t3992*t941);
  p_output1[146]=-0.4*t2303 - 0.12*t2352 - 1.*(t1690*t3797 + t1726*t3992 + t4382*t6069)*t6146 - 1.*t6069*(-1.*t3797*t502 - 1.*t4382*t6146 - 1.*t3992*t941);
  p_output1[147]=0. + t1969 + t2038 + t6223;
  p_output1[148]=0. + t1350 + t1393 + t6223;
  p_output1[149]=0. + 0.104528*t1340 - 0.994522*t1373;
  p_output1[150]=0.06187975009291858;
  p_output1[151]=0.00003960378083650226;
  p_output1[152]=1.2241200541759922e-7;
  p_output1[153]=-4.610340000044122e-7;
  p_output1[154]=4.610340000044122e-7;
  p_output1[155]=-1.0000001112680001;
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



void Jb_right_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

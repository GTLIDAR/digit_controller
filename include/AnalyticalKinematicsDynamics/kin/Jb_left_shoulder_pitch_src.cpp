/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_left_shoulder_pitch_src.h"

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
  double t321;
  double t325;
  double t364;
  double t669;
  double t977;
  double t445;
  double t462;
  double t559;
  double t619;
  double t827;
  double t904;
  double t939;
  double t953;
  double t292;
  double t998;
  double t1018;
  double t1027;
  double t1084;
  double t1115;
  double t1162;
  double t1284;
  double t1379;
  double t234;
  double t1529;
  double t1536;
  double t1552;
  double t957;
  double t1385;
  double t1386;
  double t1554;
  double t165;
  double t2270;
  double t2288;
  double t2308;
  double t2311;
  double t1648;
  double t1686;
  double t1730;
  double t1735;
  double t1833;
  double t1840;
  double t1859;
  double t1872;
  double t1888;
  double t1954;
  double t2076;
  double t2426;
  double t2442;
  double t2450;
  double t2307;
  double t2353;
  double t2389;
  double t3036;
  double t3065;
  double t3080;
  double t2874;
  double t2895;
  double t2932;
  double t3165;
  double t3240;
  double t3248;
  double t3031;
  double t3102;
  double t3145;
  double t1523;
  double t1565;
  double t1616;
  double t1785;
  double t1956;
  double t2039;
  double t2098;
  double t2211;
  double t2234;
  double t2235;
  double t2248;
  double t2408;
  double t2489;
  double t2490;
  double t2568;
  double t2577;
  double t2620;
  double t2621;
  double t2630;
  double t2631;
  double t2652;
  double t2717;
  double t3163;
  double t3337;
  double t3356;
  double t3375;
  double t3403;
  double t3461;
  double t3481;
  double t3489;
  double t3505;
  double t3546;
  double t3567;
  double t3600;
  double t4255;
  double t4270;
  double t4279;
  double t4393;
  double t4396;
  double t4457;
  double t4479;
  double t4481;
  double t4492;
  double t4503;
  double t4507;
  double t4522;
  double t4542;
  double t4603;
  double t4635;
  double t4640;
  double t4643;
  double t4328;
  double t4342;
  double t4365;
  double t4823;
  double t4833;
  double t4843;
  double t4927;
  double t4944;
  double t4397;
  double t4399;
  double t4517;
  double t4749;
  double t4750;
  double t5052;
  double t5061;
  double t5124;
  double t5139;
  double t5155;
  double t5290;
  double t5297;
  double t5358;
  double t5368;
  double t5387;
  double t4765;
  double t4980;
  double t5016;
  double t5320;
  double t5403;
  double t5408;
  double t5438;
  double t5456;
  double t5467;
  double t4187;
  double t4216;
  double t4237;
  double t5049;
  double t5485;
  double t5579;
  double t5639;
  double t5670;
  double t5681;
  double t5751;
  double t5724;
  double t5775;
  double t5763;
  double t5842;
  double t5797;
  double t6044;
  double t6024;
  double t6092;
  double t6146;
  double t6147;
  t321 = Cos(var1[14]);
  t325 = -1.*t321;
  t364 = 1. + t325;
  t669 = Sin(var1[14]);
  t977 = Cos(var1[13]);
  t445 = -0.9890740084840001*t364;
  t462 = 1. + t445;
  t559 = 0.703234*t462;
  t619 = -0.007683655156165408*t364;
  t827 = -0.994522*t669;
  t904 = 0. + t827;
  t939 = 0.707107*t904;
  t953 = t559 + t619 + t939;
  t292 = Sin(var1[13]);
  t998 = -0.010926102783999999*t364;
  t1018 = 1. + t998;
  t1027 = -0.073913*t1018;
  t1084 = 0.07310496868062215*t364;
  t1115 = 0.104528*t669;
  t1162 = 0. + t1115;
  t1284 = 0.707107*t1162;
  t1379 = t1027 + t1084 + t1284;
  t234 = Cos(var1[5]);
  t1529 = t977*t953;
  t1536 = -1.*t292*t1379;
  t1552 = 0. + t1529 + t1536;
  t957 = t292*t953;
  t1385 = t977*t1379;
  t1386 = 0. + t957 + t1385;
  t1554 = Sin(var1[5]);
  t165 = Sin(var1[3]);
  t2270 = -0.707107*t904;
  t2288 = t559 + t619 + t2270;
  t2308 = -0.707107*t1162;
  t2311 = t1027 + t1084 + t2308;
  t1648 = Cos(var1[3]);
  t1686 = Cos(var1[4]);
  t1730 = -1.0000001112680001*t364;
  t1735 = 1. + t1730;
  t1833 = -0.104528*t669;
  t1840 = 0. + t1833;
  t1859 = -0.073913*t1840;
  t1872 = 0.994522*t669;
  t1888 = 0. + t1872;
  t1954 = 0.703234*t1888;
  t2076 = Sin(var1[4]);
  t2426 = t977*t2288;
  t2442 = -1.*t292*t2311;
  t2450 = 0. + t2426 + t2442;
  t2307 = t292*t2288;
  t2353 = t977*t2311;
  t2389 = 0. + t2307 + t2353;
  t3036 = -0.104528*t462;
  t3065 = -0.10338592795881554*t364;
  t3080 = t3036 + t3065;
  t2874 = -0.994522*t1018;
  t2895 = -0.010866249592949247*t364;
  t2932 = t2874 + t2895;
  t3165 = t977*t3080;
  t3240 = -1.*t2932*t292;
  t3248 = 0. + t3165 + t3240;
  t3031 = t977*t2932;
  t3102 = t3080*t292;
  t3145 = 0. + t3031 + t3102;
  t1523 = t234*t1386;
  t1565 = -1.*t1552*t1554;
  t1616 = 0. + t1523 + t1565;
  t1785 = 0.707107*t1735;
  t1956 = 0. + t1785 + t1859 + t1954;
  t2039 = t1686*t1956;
  t2098 = t234*t1552;
  t2211 = t1386*t1554;
  t2234 = 0. + t2098 + t2211;
  t2235 = t2076*t2234;
  t2248 = 0. + t2039 + t2235;
  t2408 = t234*t2389;
  t2489 = -1.*t2450*t1554;
  t2490 = 0. + t2408 + t2489;
  t2568 = -0.707107*t1735;
  t2577 = 0. + t2568 + t1859 + t1954;
  t2620 = t1686*t2577;
  t2621 = t234*t2450;
  t2630 = t2389*t1554;
  t2631 = 0. + t2621 + t2630;
  t2652 = t2076*t2631;
  t2717 = 0. + t2620 + t2652;
  t3163 = t234*t3145;
  t3337 = -1.*t3248*t1554;
  t3356 = 0. + t3163 + t3337;
  t3375 = -0.994522*t1840;
  t3403 = -0.104528*t1888;
  t3461 = 0. + t3375 + t3403;
  t3481 = t1686*t3461;
  t3489 = t234*t3248;
  t3505 = t3145*t1554;
  t3546 = 0. + t3489 + t3505;
  t3567 = t2076*t3546;
  t3600 = 0. + t3481 + t3567;
  t4255 = -1.*t2577*t2076;
  t4270 = t1686*t2631;
  t4279 = 0. + t4255 + t4270;
  t4393 = -1.*t977;
  t4396 = 1. + t4393;
  t4457 = 1.1345904784751044e-7*var1[14];
  t4479 = 0.18652*t1018;
  t4481 = -0.002538711420946367*t364;
  t4492 = -0.05650052807*t1840;
  t4503 = -0.012773*t1162;
  t4507 = t4457 + t4479 + t4481 + t4492 + t4503;
  t4522 = 1.1924972351948546e-8*var1[14];
  t4542 = 0.362968*t462;
  t4603 = 0.40254631039735467*t364;
  t4635 = -0.012773*t904;
  t4640 = -0.05650052807*t1888;
  t4643 = t4522 + t4542 + t4603 + t4635 + t4640;
  t4328 = -1.*t3461*t2076;
  t4342 = t1686*t3546;
  t4365 = 0. + t4328 + t4342;
  t4823 = 0.4*t4396;
  t4833 = 0.12*t292;
  t4843 = -1.*t292*t4507;
  t4927 = t977*t4643;
  t4944 = 0. + t4823 + t4833 + t4843 + t4927;
  t4397 = 0.12*t4396;
  t4399 = -0.4*t292;
  t4517 = t977*t4507;
  t4749 = t292*t4643;
  t4750 = 0. + t4397 + t4399 + t4517 + t4749;
  t5052 = -0.012773*t1735;
  t5061 = -0.056500534356700764*t364;
  t5124 = 0.38315650737400003*t904;
  t5139 = 0.18652*t1840;
  t5155 = -0.040271188976*t1162;
  t5290 = 0.362968*t1888;
  t5297 = 0. + t5052 + t5061 + t5124 + t5139 + t5155 + t5290;
  t5358 = t234*t4944;
  t5368 = t4750*t1554;
  t5387 = 0. + t5358 + t5368;
  t4765 = t234*t4750;
  t4980 = -1.*t4944*t1554;
  t5016 = 0. + t4765 + t4980;
  t5320 = -1.*t5297*t2076;
  t5403 = t1686*t5387;
  t5408 = 0. + t5320 + t5403;
  t5438 = t1686*t5297;
  t5456 = t2076*t5387;
  t5467 = 0. + t5438 + t5456;
  t4187 = -1.*t1956*t2076;
  t4216 = t1686*t2234;
  t4237 = 0. + t4187 + t4216;
  t5049 = t3356*t5016;
  t5485 = -1.*t2490*t5016;
  t5579 = -1.*t3356*t5016;
  t5639 = t1616*t5016;
  t5670 = t2490*t5016;
  t5681 = -1.*t1616*t5016;
  t5751 = -1.*t5297*t2577;
  t5724 = t3461*t5297;
  t5775 = t5297*t1956;
  t5763 = -1.*t3461*t5297;
  t5842 = -1.*t5297*t1956;
  t5797 = t5297*t2577;
  t6044 = t3375 + t3403;
  t6024 = t2568 + t1859 + t1954;
  t6092 = t1785 + t1859 + t1954;
  t6146 = 0.073913*t1840;
  t6147 = -0.703234*t1888;
  p_output1[0]=0. - 1.*t1616*t165 + t1648*t2248;
  p_output1[1]=0. - 1.*t165*t2490 + t1648*t2717;
  p_output1[2]=0. - 1.*t165*t3356 + t1648*t3600;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1616*t1648 + t165*t2248;
  p_output1[7]=0. + t1648*t2490 + t165*t2717;
  p_output1[8]=0. + t1648*t3356 + t165*t3600;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4237;
  p_output1[13]=t4279;
  p_output1[14]=t4365;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4279*(t5049 + t4365*t5408 + t3600*t5467) + t4365*(-1.*t4279*t5408 - 1.*t2717*t5467 + t5485);
  p_output1[19]=t4237*(-1.*t4365*t5408 - 1.*t3600*t5467 + t5579) + t4365*(t4237*t5408 + t2248*t5467 + t5639);
  p_output1[20]=t4237*(t4279*t5408 + t2717*t5467 + t5670) + t4279*(-1.*t4237*t5408 - 1.*t2248*t5467 + t5681);
  p_output1[21]=t4237;
  p_output1[22]=t4279;
  p_output1[23]=t4365;
  p_output1[24]=t2490*(t5049 + t3546*t5387 + t5724) + t3356*(-1.*t2631*t5387 + t5485 + t5751);
  p_output1[25]=t1616*(-1.*t3546*t5387 + t5579 + t5763) + t3356*(t2234*t5387 + t5639 + t5775);
  p_output1[26]=t1616*(t2631*t5387 + t5670 + t5797) + t2490*(-1.*t2234*t5387 + t5681 + t5842);
  p_output1[27]=t1616;
  p_output1[28]=t2490;
  p_output1[29]=t3356;
  p_output1[30]=t2577*(t3145*t4750 + t3248*t4944 + t5724) + t3461*(-1.*t2389*t4750 - 1.*t2450*t4944 + t5751);
  p_output1[31]=t1956*(-1.*t3145*t4750 - 1.*t3248*t4944 + t5763) + t3461*(t1386*t4750 + t1552*t4944 + t5775);
  p_output1[32]=t1956*(t2389*t4750 + t2450*t4944 + t5797) + t2577*(-1.*t1386*t4750 - 1.*t1552*t4944 + t5842);
  p_output1[33]=t1956;
  p_output1[34]=t2577;
  p_output1[35]=t3461;
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
  p_output1[78]=-0.4*t1379 - 1.*(-1.*t2311*t4507 - 1.*t2288*t4643 - 1.*t5297*t6024)*t6044 - 1.*t6024*(t2932*t4507 + t3080*t4643 + t5297*t6044) + 0.12*t953;
  p_output1[79]=0.12*t2288 - 0.4*t2311 - 1.*(-1.*t2932*t4507 - 1.*t3080*t4643 - 1.*t5297*t6044)*t6092 - 1.*t6044*(t1379*t4507 + t5297*t6092 + t4643*t953);
  p_output1[80]=-0.4*t2932 + 0.12*t3080 - 1.*(t2311*t4507 + t2288*t4643 + t5297*t6024)*t6092 - 1.*t6024*(-1.*t1379*t4507 - 1.*t5297*t6092 - 1.*t4643*t953);
  p_output1[81]=0. + t2568 + t6146 + t6147;
  p_output1[82]=0. + t1785 + t6146 + t6147;
  p_output1[83]=0. + 0.994522*t1840 + 0.104528*t1888;
  p_output1[84]=-0.06187975009291858;
  p_output1[85]=0.00003960378083650226;
  p_output1[86]=-1.2241200541759922e-7;
  p_output1[87]=-4.610340000044122e-7;
  p_output1[88]=-4.610340000044122e-7;
  p_output1[89]=-1.0000001112680001;
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



void Jb_left_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

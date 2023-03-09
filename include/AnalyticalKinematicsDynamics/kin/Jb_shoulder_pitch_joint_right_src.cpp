/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_shoulder_pitch_joint_right_src.h"

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
  double t297;
  double t328;
  double t438;
  double t545;
  double t744;
  double t486;
  double t490;
  double t497;
  double t499;
  double t587;
  double t626;
  double t643;
  double t722;
  double t253;
  double t776;
  double t841;
  double t843;
  double t851;
  double t896;
  double t899;
  double t944;
  double t954;
  double t183;
  double t1080;
  double t1083;
  double t1142;
  double t724;
  double t976;
  double t982;
  double t1149;
  double t106;
  double t1984;
  double t2010;
  double t2018;
  double t2188;
  double t2193;
  double t2214;
  double t1286;
  double t1330;
  double t1338;
  double t1368;
  double t1491;
  double t1499;
  double t1519;
  double t1594;
  double t1719;
  double t1823;
  double t2336;
  double t2345;
  double t2346;
  double t2181;
  double t2268;
  double t2285;
  double t3276;
  double t3326;
  double t3329;
  double t3070;
  double t3071;
  double t3077;
  double t3567;
  double t3568;
  double t3624;
  double t3178;
  double t3345;
  double t3346;
  double t1011;
  double t1231;
  double t1237;
  double t1537;
  double t1779;
  double t1782;
  double t1789;
  double t1846;
  double t1847;
  double t1865;
  double t1915;
  double t1928;
  double t2297;
  double t2349;
  double t2374;
  double t2417;
  double t2451;
  double t2588;
  double t2592;
  double t2718;
  double t2764;
  double t2844;
  double t2928;
  double t2955;
  double t3400;
  double t3658;
  double t3688;
  double t3881;
  double t3891;
  double t3939;
  double t3974;
  double t4001;
  double t4021;
  double t4044;
  double t4063;
  double t4141;
  double t4536;
  double t4546;
  double t4550;
  double t4569;
  double t4606;
  double t4657;
  double t4658;
  double t4670;
  double t4677;
  double t4681;
  double t4684;
  double t4720;
  double t4723;
  double t4726;
  double t4733;
  double t4741;
  double t4746;
  double t4551;
  double t4556;
  double t4560;
  double t4761;
  double t4778;
  double t4797;
  double t4798;
  double t4803;
  double t4620;
  double t4652;
  double t4690;
  double t4750;
  double t4757;
  double t4817;
  double t4825;
  double t4827;
  double t4854;
  double t4856;
  double t4857;
  double t4858;
  double t4872;
  double t4873;
  double t4875;
  double t4760;
  double t4806;
  double t4810;
  double t4870;
  double t4880;
  double t4882;
  double t4890;
  double t4908;
  double t4909;
  double t4380;
  double t4462;
  double t4520;
  double t4812;
  double t4921;
  double t4944;
  double t4963;
  double t4990;
  double t5022;
  double t5053;
  double t5070;
  double t5085;
  double t5097;
  double t5116;
  double t5130;
  double t5293;
  double t5283;
  double t5317;
  double t5404;
  t297 = Cos(var1[25]);
  t328 = -1.*t297;
  t438 = 1. + t328;
  t545 = Sin(var1[25]);
  t744 = Sin(var1[24]);
  t486 = -0.010926102783999999*t438;
  t490 = 1. + t486;
  t497 = 0.073913*t490;
  t499 = -0.07310496868062215*t438;
  t587 = 0.104528*t545;
  t626 = 0. + t587;
  t643 = 0.707107*t626;
  t722 = t497 + t499 + t643;
  t253 = Cos(var1[24]);
  t776 = -0.9890740084840001*t438;
  t841 = 1. + t776;
  t843 = 0.703234*t841;
  t851 = -0.007683655156165408*t438;
  t896 = 0.994522*t545;
  t899 = 0. + t896;
  t944 = 0.707107*t899;
  t954 = t843 + t851 + t944;
  t183 = Cos(var1[5]);
  t1080 = -1.*t744*t722;
  t1083 = t253*t954;
  t1142 = 0. + t1080 + t1083;
  t724 = t253*t722;
  t976 = t744*t954;
  t982 = 0. + t724 + t976;
  t1149 = Sin(var1[5]);
  t106 = Sin(var1[3]);
  t1984 = -0.073913*t490;
  t2010 = 0.07310496868062215*t438;
  t2018 = t1984 + t2010 + t643;
  t2188 = -0.703234*t841;
  t2193 = 0.007683655156165408*t438;
  t2214 = t2188 + t2193 + t944;
  t1286 = Cos(var1[3]);
  t1330 = Cos(var1[4]);
  t1338 = -1.0000001112680001*t438;
  t1368 = 1. + t1338;
  t1491 = 0.707107*t1368;
  t1499 = -0.994522*t545;
  t1519 = 0. + t1499;
  t1594 = -0.104528*t545;
  t1719 = 0. + t1594;
  t1823 = Sin(var1[4]);
  t2336 = -1.*t744*t2018;
  t2345 = t253*t2214;
  t2346 = 0. + t2336 + t2345;
  t2181 = t253*t2018;
  t2268 = t744*t2214;
  t2285 = 0. + t2181 + t2268;
  t3276 = -0.104528*t841;
  t3326 = -0.10338592795881554*t438;
  t3329 = t3276 + t3326;
  t3070 = 0.994522*t490;
  t3071 = 0.010866249592949247*t438;
  t3077 = t3070 + t3071;
  t3567 = t253*t3329;
  t3568 = -1.*t3077*t744;
  t3624 = 0. + t3567 + t3568;
  t3178 = t253*t3077;
  t3345 = t3329*t744;
  t3346 = 0. + t3178 + t3345;
  t1011 = t183*t982;
  t1231 = -1.*t1142*t1149;
  t1237 = 0. + t1011 + t1231;
  t1537 = 0.703234*t1519;
  t1779 = 0.073913*t1719;
  t1782 = 0. + t1491 + t1537 + t1779;
  t1789 = t1330*t1782;
  t1846 = t183*t1142;
  t1847 = t982*t1149;
  t1865 = 0. + t1846 + t1847;
  t1915 = t1823*t1865;
  t1928 = 0. + t1789 + t1915;
  t2297 = t183*t2285;
  t2349 = -1.*t2346*t1149;
  t2374 = 0. + t2297 + t2349;
  t2417 = -0.703234*t1519;
  t2451 = -0.073913*t1719;
  t2588 = 0. + t1491 + t2417 + t2451;
  t2592 = t1330*t2588;
  t2718 = t183*t2346;
  t2764 = t2285*t1149;
  t2844 = 0. + t2718 + t2764;
  t2928 = t1823*t2844;
  t2955 = 0. + t2592 + t2928;
  t3400 = t183*t3346;
  t3658 = -1.*t3624*t1149;
  t3688 = 0. + t3400 + t3658;
  t3881 = -0.104528*t1519;
  t3891 = 0.994522*t1719;
  t3939 = 0. + t3881 + t3891;
  t3974 = t1330*t3939;
  t4001 = t183*t3624;
  t4021 = t3346*t1149;
  t4044 = 0. + t4001 + t4021;
  t4063 = t1823*t4044;
  t4141 = 0. + t3974 + t4063;
  t4536 = -1.*t2588*t1823;
  t4546 = t1330*t2844;
  t4550 = 0. + t4536 + t4546;
  t4569 = -1.*t253;
  t4606 = 1. + t4569;
  t4657 = 1.1345904784751044e-7*var1[25];
  t4658 = -0.108558*t490;
  t4670 = -0.0011861143593705353*t438;
  t4677 = -0.05650052807*t1719;
  t4681 = -0.0565*t626;
  t4684 = t4657 + t4658 + t4670 + t4677 + t4681;
  t4720 = -1.1924972351948546e-8*var1[25];
  t4723 = 0.398799*t841;
  t4726 = 0.39444173984434006*t438;
  t4733 = -0.05650052807*t1519;
  t4741 = -0.0565*t899;
  t4746 = t4720 + t4723 + t4726 + t4733 + t4741;
  t4551 = -1.*t3939*t1823;
  t4556 = t1330*t4044;
  t4560 = 0. + t4551 + t4556;
  t4761 = 0.4*t4606;
  t4778 = -0.12*t744;
  t4797 = -1.*t744*t4684;
  t4798 = t253*t4746;
  t4803 = 0. + t4761 + t4778 + t4797 + t4798;
  t4620 = -0.12*t4606;
  t4652 = -0.4*t744;
  t4690 = t253*t4684;
  t4750 = t744*t4746;
  t4757 = 0. + t4620 + t4652 + t4690 + t4750;
  t4817 = -0.0565*t1368;
  t4825 = -0.056500534356700764*t438;
  t4827 = 0.398799*t1519;
  t4854 = -0.108558*t1719;
  t4856 = 0.040271188976*t626;
  t4857 = 0.38315650737400003*t899;
  t4858 = 0. + t4817 + t4825 + t4827 + t4854 + t4856 + t4857;
  t4872 = t183*t4803;
  t4873 = t4757*t1149;
  t4875 = 0. + t4872 + t4873;
  t4760 = t183*t4757;
  t4806 = -1.*t4803*t1149;
  t4810 = 0. + t4760 + t4806;
  t4870 = -1.*t4858*t1823;
  t4880 = t1330*t4875;
  t4882 = 0. + t4870 + t4880;
  t4890 = t1330*t4858;
  t4908 = t1823*t4875;
  t4909 = 0. + t4890 + t4908;
  t4380 = -1.*t1782*t1823;
  t4462 = t1330*t1865;
  t4520 = 0. + t4380 + t4462;
  t4812 = t3688*t4810;
  t4921 = -1.*t4810*t2374;
  t4944 = -1.*t3688*t4810;
  t4963 = t4810*t1237;
  t4990 = -1.*t4810*t1237;
  t5022 = t4810*t2374;
  t5053 = t3939*t4858;
  t5070 = -1.*t2588*t4858;
  t5085 = -1.*t3939*t4858;
  t5097 = t1782*t4858;
  t5116 = -1.*t1782*t4858;
  t5130 = t2588*t4858;
  t5293 = t1491 + t2417 + t2451;
  t5283 = t3881 + t3891;
  t5317 = t1491 + t1537 + t1779;
  t5404 = -0.707107*t1368;
  p_output1[0]=0. - 1.*t106*t1237 + t1286*t1928;
  p_output1[1]=0. - 1.*t106*t2374 + t1286*t2955;
  p_output1[2]=0. - 1.*t106*t3688 + t1286*t4141;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1237*t1286 + t106*t1928;
  p_output1[7]=0. + t1286*t2374 + t106*t2955;
  p_output1[8]=0. + t1286*t3688 + t106*t4141;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4520;
  p_output1[13]=t4550;
  p_output1[14]=t4560;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4550*(t4812 + t4560*t4882 + t4141*t4909) + t4560*(-1.*t4550*t4882 - 1.*t2955*t4909 + t4921);
  p_output1[19]=t4520*(-1.*t4560*t4882 - 1.*t4141*t4909 + t4944) + t4560*(t4520*t4882 + t1928*t4909 + t4963);
  p_output1[20]=t4550*(-1.*t4520*t4882 - 1.*t1928*t4909 + t4990) + t4520*(t4550*t4882 + t2955*t4909 + t5022);
  p_output1[21]=t4520;
  p_output1[22]=t4550;
  p_output1[23]=t4560;
  p_output1[24]=t2374*(t4812 + t4044*t4875 + t5053) + t3688*(-1.*t2844*t4875 + t4921 + t5070);
  p_output1[25]=t1237*(-1.*t4044*t4875 + t4944 + t5085) + t3688*(t1865*t4875 + t4963 + t5097);
  p_output1[26]=t2374*(-1.*t1865*t4875 + t4990 + t5116) + t1237*(t2844*t4875 + t5022 + t5130);
  p_output1[27]=t1237;
  p_output1[28]=t2374;
  p_output1[29]=t3688;
  p_output1[30]=t2588*(t3346*t4757 + t3624*t4803 + t5053) + t3939*(-1.*t2285*t4757 - 1.*t2346*t4803 + t5070);
  p_output1[31]=t1782*(-1.*t3346*t4757 - 1.*t3624*t4803 + t5085) + t3939*(t1142*t4803 + t5097 + t4757*t982);
  p_output1[32]=t1782*(t2285*t4757 + t2346*t4803 + t5130) + t2588*(-1.*t1142*t4803 + t5116 - 1.*t4757*t982);
  p_output1[33]=t1782;
  p_output1[34]=t2588;
  p_output1[35]=t3939;
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
  p_output1[144]=-1.*(t3077*t4684 + t3329*t4746 + t4858*t5283)*t5293 - 1.*t5283*(-1.*t2018*t4684 - 1.*t2214*t4746 - 1.*t4858*t5293) - 0.4*t722 - 0.12*t954;
  p_output1[145]=-0.4*t2018 - 0.12*t2214 - 1.*(-1.*t3077*t4684 - 1.*t3329*t4746 - 1.*t4858*t5283)*t5317 - 1.*t5283*(t4858*t5317 + t4684*t722 + t4746*t954);
  p_output1[146]=-0.4*t3077 - 0.12*t3329 - 1.*(t2018*t4684 + t2214*t4746 + t4858*t5293)*t5317 - 1.*t5293*(-1.*t4858*t5317 - 1.*t4684*t722 - 1.*t4746*t954);
  p_output1[147]=0. + t2417 + t2451 + t5404;
  p_output1[148]=0. + t1537 + t1779 + t5404;
  p_output1[149]=0. + 0.104528*t1519 - 0.994522*t1719;
  p_output1[150]=1.2667819939988362e-7;
  p_output1[151]=-6.771751434441614e-7;
  p_output1[152]=1.5092204165654405e-7;
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



void Jb_shoulder_pitch_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

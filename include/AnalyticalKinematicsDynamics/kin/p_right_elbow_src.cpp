/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_elbow_src.h"

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
  double t619;
  double t347;
  double t1648;
  double t1724;
  double t1920;
  double t2023;
  double t2082;
  double t2139;
  double t2107;
  double t2221;
  double t399;
  double t487;
  double t504;
  double t2129;
  double t2235;
  double t2260;
  double t2437;
  double t2440;
  double t2533;
  double t3298;
  double t3350;
  double t3352;
  double t3420;
  double t358;
  double t3054;
  double t3116;
  double t2926;
  double t2929;
  double t2994;
  double t3179;
  double t3217;
  double t3222;
  double t3377;
  double t2667;
  double t2804;
  double t4026;
  double t3624;
  double t625;
  double t845;
  double t1146;
  double t1242;
  double t4731;
  double t4507;
  double t3699;
  double t3702;
  double t3718;
  double t3733;
  double t3834;
  double t3910;
  double t4493;
  double t4234;
  double t4281;
  double t4282;
  double t4292;
  double t4320;
  double t4331;
  double t4551;
  double t4555;
  double t4556;
  double t4567;
  double t4574;
  double t4589;
  double t4642;
  double t4647;
  double t4679;
  double t3438;
  double t4860;
  double t3625;
  double t5301;
  double t4077;
  double t4903;
  double t4052;
  double t5397;
  double t5410;
  double t4862;
  double t4887;
  double t4912;
  double t4913;
  double t4920;
  double t4944;
  double t4979;
  double t4982;
  double t5154;
  double t5282;
  double t5284;
  double t5308;
  double t5309;
  double t5333;
  double t5334;
  double t5342;
  double t5484;
  double t5525;
  double t5560;
  double t5622;
  double t5630;
  double t5646;
  double t5649;
  double t5654;
  double t5103;
  double t5120;
  double t4810;
  double t4828;
  double t4766;
  double t4773;
  double t510;
  double t1037;
  double t1282;
  double t1405;
  double t1989;
  double t2032;
  double t2033;
  double t2294;
  double t2396;
  double t2420;
  double t2634;
  double t2660;
  double t2806;
  double t2809;
  double t5866;
  double t5872;
  double t5910;
  double t5935;
  double t5937;
  double t5940;
  double t3031;
  double t3046;
  double t3134;
  double t3137;
  double t3295;
  double t3370;
  double t3455;
  double t3483;
  double t3632;
  double t3636;
  double t3688;
  double t5959;
  double t5968;
  double t6007;
  double t6037;
  double t6040;
  double t6043;
  double t3962;
  double t4003;
  double t4059;
  double t4064;
  double t4085;
  double t4169;
  double t4192;
  double t4383;
  double t4440;
  double t4500;
  double t4505;
  double t4516;
  double t4540;
  double t4542;
  double t4723;
  double t4794;
  double t4853;
  double t4858;
  double t6054;
  double t6061;
  double t6088;
  double t6094;
  double t6111;
  double t6171;
  double t6176;
  double t6185;
  double t6195;
  double t6208;
  double t6211;
  double t6227;
  double t5055;
  double t5073;
  double t5128;
  double t5148;
  double t5390;
  double t5395;
  double t5426;
  double t5476;
  double t6256;
  double t6270;
  double t6275;
  double t6276;
  double t6283;
  double t6286;
  double t6288;
  double t6305;
  double t5685;
  double t5719;
  double t6316;
  double t6320;
  double t6333;
  double t6344;
  double t5746;
  double t5748;
  double t5823;
  double t5830;
  double t6617;
  double t6629;
  double t6638;
  double t6657;
  double t6662;
  double t6667;
  double t6675;
  double t6686;
  double t6687;
  double t6693;
  double t6711;
  double t6713;
  double t6717;
  double t6719;
  double t6725;
  double t6726;
  double t6731;
  double t6733;
  double t6743;
  double t6747;
  double t6763;
  double t6771;
  double t6774;
  double t6780;
  double t6781;
  double t6813;
  double t6818;
  double t6840;
  double t6841;
  double t6842;
  t619 = Sin(var1[25]);
  t347 = Cos(var1[3]);
  t1648 = Cos(var1[24]);
  t1724 = -1.*t1648;
  t1920 = 1. + t1724;
  t2023 = Sin(var1[24]);
  t2082 = Cos(var1[5]);
  t2139 = Sin(var1[3]);
  t2107 = Sin(var1[4]);
  t2221 = Sin(var1[5]);
  t399 = Cos(var1[25]);
  t487 = -1.*t399;
  t504 = 1. + t487;
  t2129 = t347*t2082*t2107;
  t2235 = t2139*t2221;
  t2260 = t2129 + t2235;
  t2437 = -1.*t2082*t2139;
  t2440 = t347*t2107*t2221;
  t2533 = t2437 + t2440;
  t3298 = Cos(var1[26]);
  t3350 = -1.*t3298;
  t3352 = 1. + t3350;
  t3420 = Sin(var1[26]);
  t358 = Cos(var1[4]);
  t3054 = -0.994522*t619;
  t3116 = 0. + t3054;
  t2926 = -1.*t2023*t2260;
  t2929 = t1648*t2533;
  t2994 = t2926 + t2929;
  t3179 = t1648*t2260;
  t3217 = t2023*t2533;
  t3222 = t3179 + t3217;
  t3377 = -0.051978134642000004*t3352;
  t2667 = -0.104528*t619;
  t2804 = 0. + t2667;
  t4026 = 0.05226439969100001*t3352;
  t3624 = 0.49726168403800003*t3352;
  t625 = 0.104528*t619;
  t845 = 0. + t625;
  t1146 = 0.994522*t619;
  t1242 = 0. + t1146;
  t4731 = Sin(var1[27]);
  t4507 = 0.073913*t3420;
  t3699 = t347*t358*t3116;
  t3702 = -0.103955395616*t504*t2994;
  t3718 = -0.9890740084840001*t504;
  t3733 = 1. + t3718;
  t3834 = t3733*t3222;
  t3910 = t3699 + t3702 + t3834;
  t4493 = -0.703234*t3420;
  t4234 = t347*t358*t2804;
  t4281 = -0.010926102783999999*t504;
  t4282 = 1. + t4281;
  t4292 = t4282*t2994;
  t4320 = -0.103955395616*t504*t3222;
  t4331 = t4234 + t4292 + t4320;
  t4551 = -1.0000001112680001*t504;
  t4555 = 1. + t4551;
  t4556 = t4555*t347*t358;
  t4567 = t845*t2994;
  t4574 = t1242*t3222;
  t4589 = t4556 + t4567 + t4574;
  t4642 = Cos(var1[27]);
  t4647 = -1.*t4642;
  t4679 = 1. + t4647;
  t3438 = -0.707107*t3420;
  t4860 = -0.49726168403800003*t3352;
  t3625 = -0.073913*t3420;
  t5301 = 0.051978134642000004*t3352;
  t4077 = 0.707107*t3420;
  t4903 = -0.05226439969100001*t3352;
  t4052 = 0.703234*t3420;
  t5397 = -0.104528*t4731;
  t5410 = 0. + t5397;
  t4862 = t4860 + t4507;
  t4887 = t4862*t3910;
  t4912 = t4903 + t4493;
  t4913 = t4912*t4331;
  t4920 = -0.500001190325*t3352;
  t4944 = 1. + t4920;
  t4979 = t4944*t4589;
  t4982 = t4887 + t4913 + t4979;
  t5154 = -0.5054634410180001*t3352;
  t5282 = 1. + t5154;
  t5284 = t5282*t3910;
  t5308 = t5301 + t3438;
  t5309 = t5308*t4331;
  t5333 = t4860 + t3625;
  t5334 = t5333*t4589;
  t5342 = t5284 + t5309 + t5334;
  t5484 = t5301 + t4077;
  t5525 = t5484*t3910;
  t5560 = -0.9945383682050002*t3352;
  t5622 = 1. + t5560;
  t5630 = t5622*t4331;
  t5646 = t4903 + t4052;
  t5649 = t5646*t4589;
  t5654 = t5525 + t5630 + t5649;
  t5103 = -0.994522*t4731;
  t5120 = 0. + t5103;
  t4810 = 0.994522*t4731;
  t4828 = 0. + t4810;
  t4766 = 0.104528*t4731;
  t4773 = 0. + t4766;
  t510 = -0.056500534356700764*t504;
  t1037 = 0.040271188976*t845;
  t1282 = 0.38315650737400003*t1242;
  t1405 = 0. + t510 + t1037 + t1282;
  t1989 = 0.4*t1920;
  t2032 = -0.12*t2023;
  t2033 = 0. + t1989 + t2032;
  t2294 = -0.12*t1920;
  t2396 = -0.4*t2023;
  t2420 = 0. + t2294 + t2396;
  t2634 = 1.1345904784751044e-7*var1[25];
  t2660 = 0.04027119345689465*t504;
  t2806 = -0.05650052807*t2804;
  t2809 = t2634 + t2660 + t2806;
  t5866 = t2082*t2139*t2107;
  t5872 = -1.*t347*t2221;
  t5910 = t5866 + t5872;
  t5935 = t347*t2082;
  t5937 = t2139*t2107*t2221;
  t5940 = t5935 + t5937;
  t3031 = -1.1924972351948546e-8*var1[25];
  t3046 = 0.38315655000705834*t504;
  t3134 = -0.05650052807*t3116;
  t3137 = t3031 + t3046 + t3134;
  t3295 = 1.5601527583902087e-7*var1[26];
  t3370 = 0.09582494577057615*t3352;
  t3455 = t3377 + t3438;
  t3483 = -0.231098203479*t3455;
  t3632 = t3624 + t3625;
  t3636 = 0.164383620275*t3632;
  t3688 = t3295 + t3370 + t3483 + t3636;
  t5959 = -1.*t2023*t5910;
  t5968 = t1648*t5940;
  t6007 = t5959 + t5968;
  t6037 = t1648*t5910;
  t6040 = t2023*t5940;
  t6043 = t6037 + t6040;
  t3962 = 1.639789470231751e-8*var1[26];
  t4003 = -0.22983603018311177*t3352;
  t4059 = t4026 + t4052;
  t4064 = 0.164383620275*t4059;
  t4085 = t3377 + t4077;
  t4169 = 0.18957839082800002*t4085;
  t4192 = t3962 + t4003 + t4064 + t4169;
  t4383 = -1.568745163810375e-7*var1[26];
  t4440 = 0.08219200580743281*t3352;
  t4500 = t4026 + t4493;
  t4505 = -0.231098203479*t4500;
  t4516 = t3624 + t4507;
  t4540 = 0.18957839082800002*t4516;
  t4542 = t4383 + t4440 + t4505 + t4540;
  t4723 = 0.19098732144477495*t4679;
  t4794 = 0.014401763312*t4773;
  t4853 = 0.137024246638*t4828;
  t4858 = 0. + t4723 + t4794 + t4853;
  t6054 = t358*t3116*t2139;
  t6061 = -0.103955395616*t504*t6007;
  t6088 = t3733*t6043;
  t6094 = t6054 + t6061 + t6088;
  t6111 = t358*t2804*t2139;
  t6171 = t4282*t6007;
  t6176 = -0.103955395616*t504*t6043;
  t6185 = t6111 + t6171 + t6176;
  t6195 = t4555*t358*t2139;
  t6208 = t845*t6007;
  t6211 = t1242*t6043;
  t6227 = t6195 + t6208 + t6211;
  t5055 = 5.06291820800569e-8*var1[27];
  t5073 = 0.13702426188441388*t4679;
  t5128 = 0.190987300194*t5120;
  t5148 = t5055 + t5073 + t5128;
  t5390 = -4.817066759205414e-7*var1[27];
  t5395 = 0.0144017649144554*t4679;
  t5426 = 0.190987300194*t5410;
  t5476 = t5390 + t5395 + t5426;
  t6256 = t4862*t6094;
  t6270 = t4912*t6185;
  t6275 = t4944*t6227;
  t6276 = t6256 + t6270 + t6275;
  t6283 = t5282*t6094;
  t6286 = t5308*t6185;
  t6288 = t5333*t6227;
  t6305 = t6283 + t6286 + t6288;
  t5685 = -0.010926102783999999*t4679;
  t5719 = 1. + t5685;
  t6316 = t5484*t6094;
  t6320 = t5622*t6185;
  t6333 = t5646*t6227;
  t6344 = t6316 + t6320 + t6333;
  t5746 = -0.9890740084840001*t4679;
  t5748 = 1. + t5746;
  t5823 = -1.0000001112680001*t4679;
  t5830 = 1. + t5823;
  t6617 = -1.*t358*t2082*t2023;
  t6629 = t1648*t358*t2221;
  t6638 = t6617 + t6629;
  t6657 = t1648*t358*t2082;
  t6662 = t358*t2023*t2221;
  t6667 = t6657 + t6662;
  t6675 = -1.*t3116*t2107;
  t6686 = -0.103955395616*t504*t6638;
  t6687 = t3733*t6667;
  t6693 = t6675 + t6686 + t6687;
  t6711 = -1.*t2804*t2107;
  t6713 = t4282*t6638;
  t6717 = -0.103955395616*t504*t6667;
  t6719 = t6711 + t6713 + t6717;
  t6725 = -1.*t4555*t2107;
  t6726 = t845*t6638;
  t6731 = t1242*t6667;
  t6733 = t6725 + t6726 + t6731;
  t6743 = t4862*t6693;
  t6747 = t4912*t6719;
  t6763 = t4944*t6733;
  t6771 = t6743 + t6747 + t6763;
  t6774 = t5282*t6693;
  t6780 = t5308*t6719;
  t6781 = t5333*t6733;
  t6813 = t6774 + t6780 + t6781;
  t6818 = t5484*t6693;
  t6840 = t5622*t6719;
  t6841 = t5646*t6733;
  t6842 = t6818 + t6840 + t6841;
  p_output1[0]=0. + t2033*t2260 + t2420*t2533 + t2809*t2994 + t3137*t3222 + t1405*t347*t358 + t3688*t3910 + t4192*t4331 + t4542*t4589 + t4858*t4982 + t5148*t5342 + t5476*t5654 - 0.250125*(-0.103955395616*t4679*t5342 + t4982*t5410 + t5654*t5719) + 0.206868*(t4982*t5120 - 0.103955395616*t4679*t5654 + t5342*t5748) + 0.290567*(t4828*t5342 + t4773*t5654 + t4982*t5830) + var1[0];
  p_output1[1]=0. + t1405*t2139*t358 + t2033*t5910 + t2420*t5940 + t2809*t6007 + t3137*t6043 + t3688*t6094 + t4192*t6185 + t4542*t6227 + t4858*t6276 + t5148*t6305 + t5476*t6344 + 0.206868*(t5120*t6276 + t5748*t6305 - 0.103955395616*t4679*t6344) + 0.290567*(t5830*t6276 + t4828*t6305 + t4773*t6344) - 0.250125*(t5410*t6276 - 0.103955395616*t4679*t6305 + t5719*t6344) + var1[1];
  p_output1[2]=0. - 1.*t1405*t2107 + t2033*t2082*t358 + t2221*t2420*t358 + t2809*t6638 + t3137*t6667 + t3688*t6693 + t4192*t6719 + t4542*t6733 + t4858*t6771 + t5148*t6813 + t5476*t6842 + 0.206868*(t5120*t6771 + t5748*t6813 - 0.103955395616*t4679*t6842) + 0.290567*(t5830*t6771 + t4828*t6813 + t4773*t6842) - 0.250125*(t5410*t6771 - 0.103955395616*t4679*t6813 + t5719*t6842) + var1[2];
}



void p_right_elbow_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

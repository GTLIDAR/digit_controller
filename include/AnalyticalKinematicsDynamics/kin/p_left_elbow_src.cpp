/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_left_elbow_src.h"

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
  double t674;
  double t101;
  double t1402;
  double t1405;
  double t1410;
  double t1518;
  double t1759;
  double t1972;
  double t1838;
  double t1980;
  double t345;
  double t444;
  double t454;
  double t1925;
  double t2124;
  double t2246;
  double t2621;
  double t2657;
  double t2819;
  double t3744;
  double t3766;
  double t3776;
  double t3864;
  double t266;
  double t3214;
  double t3248;
  double t3099;
  double t3123;
  double t3140;
  double t3331;
  double t3397;
  double t3470;
  double t3843;
  double t2998;
  double t3036;
  double t4220;
  double t3980;
  double t824;
  double t860;
  double t707;
  double t807;
  double t5214;
  double t4835;
  double t4104;
  double t4135;
  double t4136;
  double t4143;
  double t4156;
  double t4157;
  double t4712;
  double t4477;
  double t4496;
  double t4501;
  double t4526;
  double t4582;
  double t4588;
  double t4987;
  double t5012;
  double t5022;
  double t5027;
  double t5045;
  double t5066;
  double t5133;
  double t5135;
  double t5154;
  double t3869;
  double t5378;
  double t3981;
  double t5885;
  double t4366;
  double t5504;
  double t4270;
  double t6013;
  double t6025;
  double t5404;
  double t5423;
  double t5526;
  double t5528;
  double t5561;
  double t5661;
  double t5677;
  double t5737;
  double t5860;
  double t5874;
  double t5884;
  double t5886;
  double t5891;
  double t5898;
  double t5938;
  double t5954;
  double t6082;
  double t6102;
  double t6154;
  double t6168;
  double t6175;
  double t6184;
  double t6187;
  double t6217;
  double t5801;
  double t5810;
  double t5217;
  double t5223;
  double t5315;
  double t5319;
  double t651;
  double t817;
  double t876;
  double t926;
  double t1467;
  double t1678;
  double t1743;
  double t2355;
  double t2363;
  double t2507;
  double t2925;
  double t2993;
  double t3054;
  double t3097;
  double t6411;
  double t6422;
  double t6434;
  double t6440;
  double t6446;
  double t6457;
  double t3178;
  double t3190;
  double t3280;
  double t3315;
  double t3599;
  double t3820;
  double t3939;
  double t3941;
  double t4005;
  double t4059;
  double t4098;
  double t6470;
  double t6474;
  double t6475;
  double t6493;
  double t6497;
  double t6518;
  double t4188;
  double t4200;
  double t4277;
  double t4320;
  double t4408;
  double t4440;
  double t4474;
  double t4624;
  double t4653;
  double t4750;
  double t4801;
  double t4837;
  double t4838;
  double t4972;
  double t5197;
  double t5303;
  double t5358;
  double t5362;
  double t6524;
  double t6526;
  double t6528;
  double t6548;
  double t6557;
  double t6576;
  double t6578;
  double t6586;
  double t6593;
  double t6598;
  double t6607;
  double t6612;
  double t5768;
  double t5798;
  double t5813;
  double t5818;
  double t5986;
  double t6012;
  double t6064;
  double t6080;
  double t6627;
  double t6631;
  double t6644;
  double t6659;
  double t6672;
  double t6677;
  double t6686;
  double t6701;
  double t6245;
  double t6254;
  double t6703;
  double t6728;
  double t6731;
  double t6767;
  double t6298;
  double t6300;
  double t6321;
  double t6348;
  double t7005;
  double t7013;
  double t7024;
  double t7028;
  double t7041;
  double t7058;
  double t7065;
  double t7072;
  double t7079;
  double t7082;
  double t7100;
  double t7103;
  double t7113;
  double t7115;
  double t7123;
  double t7125;
  double t7159;
  double t7162;
  double t7203;
  double t7208;
  double t7209;
  double t7261;
  double t7283;
  double t7286;
  double t7288;
  double t7290;
  double t7300;
  double t7311;
  double t7314;
  double t7318;
  t674 = Sin(var1[14]);
  t101 = Cos(var1[3]);
  t1402 = Cos(var1[13]);
  t1405 = -1.*t1402;
  t1410 = 1. + t1405;
  t1518 = Sin(var1[13]);
  t1759 = Cos(var1[5]);
  t1972 = Sin(var1[3]);
  t1838 = Sin(var1[4]);
  t1980 = Sin(var1[5]);
  t345 = Cos(var1[14]);
  t444 = -1.*t345;
  t454 = 1. + t444;
  t1925 = t101*t1759*t1838;
  t2124 = t1972*t1980;
  t2246 = t1925 + t2124;
  t2621 = -1.*t1759*t1972;
  t2657 = t101*t1838*t1980;
  t2819 = t2621 + t2657;
  t3744 = Cos(var1[15]);
  t3766 = -1.*t3744;
  t3776 = 1. + t3766;
  t3864 = Sin(var1[15]);
  t266 = Cos(var1[4]);
  t3214 = 0.994522*t674;
  t3248 = 0. + t3214;
  t3099 = -1.*t1518*t2246;
  t3123 = t1402*t2819;
  t3140 = t3099 + t3123;
  t3331 = t1402*t2246;
  t3397 = t1518*t2819;
  t3470 = t3331 + t3397;
  t3843 = 0.051978134642000004*t3776;
  t2998 = -0.104528*t674;
  t3036 = 0. + t2998;
  t4220 = -0.05226439969100001*t3776;
  t3980 = 0.49726168403800003*t3776;
  t824 = 0.104528*t674;
  t860 = 0. + t824;
  t707 = -0.994522*t674;
  t807 = 0. + t707;
  t5214 = Sin(var1[16]);
  t4835 = -0.073913*t3864;
  t4104 = t101*t266*t3248;
  t4135 = 0.103955395616*t454*t3140;
  t4136 = -0.9890740084840001*t454;
  t4143 = 1. + t4136;
  t4156 = t4143*t3470;
  t4157 = t4104 + t4135 + t4156;
  t4712 = -0.703234*t3864;
  t4477 = t101*t266*t3036;
  t4496 = -0.010926102783999999*t454;
  t4501 = 1. + t4496;
  t4526 = t4501*t3140;
  t4582 = 0.103955395616*t454*t3470;
  t4588 = t4477 + t4526 + t4582;
  t4987 = -1.0000001112680001*t454;
  t5012 = 1. + t4987;
  t5022 = t5012*t101*t266;
  t5027 = t860*t3140;
  t5045 = t807*t3470;
  t5066 = t5022 + t5027 + t5045;
  t5133 = Cos(var1[16]);
  t5135 = -1.*t5133;
  t5154 = 1. + t5135;
  t3869 = -0.707107*t3864;
  t5378 = -0.49726168403800003*t3776;
  t3981 = 0.073913*t3864;
  t5885 = -0.051978134642000004*t3776;
  t4366 = 0.707107*t3864;
  t5504 = 0.05226439969100001*t3776;
  t4270 = 0.703234*t3864;
  t6013 = -0.104528*t5214;
  t6025 = 0. + t6013;
  t5404 = t5378 + t4835;
  t5423 = t5404*t4157;
  t5526 = t5504 + t4712;
  t5528 = t5526*t4588;
  t5561 = -0.500001190325*t3776;
  t5661 = 1. + t5561;
  t5677 = t5661*t5066;
  t5737 = t5423 + t5528 + t5677;
  t5860 = -0.5054634410180001*t3776;
  t5874 = 1. + t5860;
  t5884 = t5874*t4157;
  t5886 = t5885 + t3869;
  t5891 = t5886*t4588;
  t5898 = t5378 + t3981;
  t5938 = t5898*t5066;
  t5954 = t5884 + t5891 + t5938;
  t6082 = t5885 + t4366;
  t6102 = t6082*t4157;
  t6154 = -0.9945383682050002*t3776;
  t6168 = 1. + t6154;
  t6175 = t6168*t4588;
  t6184 = t5504 + t4270;
  t6187 = t6184*t5066;
  t6217 = t6102 + t6175 + t6187;
  t5801 = 0.994522*t5214;
  t5810 = 0. + t5801;
  t5217 = -0.994522*t5214;
  t5223 = 0. + t5217;
  t5315 = 0.104528*t5214;
  t5319 = 0. + t5315;
  t651 = -0.056500534356700764*t454;
  t817 = 0.38315650737400003*t807;
  t876 = -0.040271188976*t860;
  t926 = 0. + t651 + t817 + t876;
  t1467 = 0.4*t1410;
  t1678 = 0.12*t1518;
  t1743 = 0. + t1467 + t1678;
  t2355 = 0.12*t1410;
  t2363 = -0.4*t1518;
  t2507 = 0. + t2355 + t2363;
  t2925 = 1.1345904784751044e-7*var1[14];
  t2993 = -0.04027119345689465*t454;
  t3054 = -0.05650052807*t3036;
  t3097 = t2925 + t2993 + t3054;
  t6411 = t1759*t1972*t1838;
  t6422 = -1.*t101*t1980;
  t6434 = t6411 + t6422;
  t6440 = t101*t1759;
  t6446 = t1972*t1838*t1980;
  t6457 = t6440 + t6446;
  t3178 = 1.1924972351948546e-8*var1[14];
  t3190 = 0.38315655000705834*t454;
  t3280 = -0.05650052807*t3248;
  t3315 = t3178 + t3190 + t3280;
  t3599 = -1.5601527583902087e-7*var1[15];
  t3820 = 0.09582494577057615*t3776;
  t3939 = t3843 + t3869;
  t3941 = 0.231098203479*t3939;
  t4005 = t3980 + t3981;
  t4059 = 0.164383620275*t4005;
  t4098 = t3599 + t3820 + t3941 + t4059;
  t6470 = -1.*t1518*t6434;
  t6474 = t1402*t6457;
  t6475 = t6470 + t6474;
  t6493 = t1402*t6434;
  t6497 = t1518*t6457;
  t6518 = t6493 + t6497;
  t4188 = 1.639789470231751e-8*var1[15];
  t4200 = 0.22983603018311177*t3776;
  t4277 = t4220 + t4270;
  t4320 = 0.164383620275*t4277;
  t4408 = t3843 + t4366;
  t4440 = 0.18957839082800002*t4408;
  t4474 = t4188 + t4200 + t4320 + t4440;
  t4624 = 1.568745163810375e-7*var1[15];
  t4653 = 0.08219200580743281*t3776;
  t4750 = t4220 + t4712;
  t4801 = 0.231098203479*t4750;
  t4837 = t3980 + t4835;
  t4838 = 0.18957839082800002*t4837;
  t4972 = t4624 + t4653 + t4801 + t4838;
  t5197 = 0.19098732144477495*t5154;
  t5303 = 0.137024246638*t5223;
  t5358 = -0.014401763312*t5319;
  t5362 = 0. + t5197 + t5303 + t5358;
  t6524 = t266*t3248*t1972;
  t6526 = 0.103955395616*t454*t6475;
  t6528 = t4143*t6518;
  t6548 = t6524 + t6526 + t6528;
  t6557 = t266*t3036*t1972;
  t6576 = t4501*t6475;
  t6578 = 0.103955395616*t454*t6518;
  t6586 = t6557 + t6576 + t6578;
  t6593 = t5012*t266*t1972;
  t6598 = t860*t6475;
  t6607 = t807*t6518;
  t6612 = t6593 + t6598 + t6607;
  t5768 = -5.06291820800569e-8*var1[16];
  t5798 = 0.13702426188441388*t5154;
  t5813 = 0.190987300194*t5810;
  t5818 = t5768 + t5798 + t5813;
  t5986 = -4.817066759205414e-7*var1[16];
  t6012 = -0.0144017649144554*t5154;
  t6064 = 0.190987300194*t6025;
  t6080 = t5986 + t6012 + t6064;
  t6627 = t5404*t6548;
  t6631 = t5526*t6586;
  t6644 = t5661*t6612;
  t6659 = t6627 + t6631 + t6644;
  t6672 = t5874*t6548;
  t6677 = t5886*t6586;
  t6686 = t5898*t6612;
  t6701 = t6672 + t6677 + t6686;
  t6245 = -0.010926102783999999*t5154;
  t6254 = 1. + t6245;
  t6703 = t6082*t6548;
  t6728 = t6168*t6586;
  t6731 = t6184*t6612;
  t6767 = t6703 + t6728 + t6731;
  t6298 = -0.9890740084840001*t5154;
  t6300 = 1. + t6298;
  t6321 = -1.0000001112680001*t5154;
  t6348 = 1. + t6321;
  t7005 = -1.*t266*t1759*t1518;
  t7013 = t1402*t266*t1980;
  t7024 = t7005 + t7013;
  t7028 = t1402*t266*t1759;
  t7041 = t266*t1518*t1980;
  t7058 = t7028 + t7041;
  t7065 = -1.*t3248*t1838;
  t7072 = 0.103955395616*t454*t7024;
  t7079 = t4143*t7058;
  t7082 = t7065 + t7072 + t7079;
  t7100 = -1.*t3036*t1838;
  t7103 = t4501*t7024;
  t7113 = 0.103955395616*t454*t7058;
  t7115 = t7100 + t7103 + t7113;
  t7123 = -1.*t5012*t1838;
  t7125 = t860*t7024;
  t7159 = t807*t7058;
  t7162 = t7123 + t7125 + t7159;
  t7203 = t5404*t7082;
  t7208 = t5526*t7115;
  t7209 = t5661*t7162;
  t7261 = t7203 + t7208 + t7209;
  t7283 = t5874*t7082;
  t7286 = t5886*t7115;
  t7288 = t5898*t7162;
  t7290 = t7283 + t7286 + t7288;
  t7300 = t6082*t7082;
  t7311 = t6168*t7115;
  t7314 = t6184*t7162;
  t7318 = t7300 + t7311 + t7314;
  p_output1[0]=0. + t1743*t2246 + t2507*t2819 + t3097*t3140 + t3315*t3470 + t4098*t4157 + t4474*t4588 + t4972*t5066 + t5362*t5737 + t5818*t5954 + t6080*t6217 + 0.250125*(0.103955395616*t5154*t5954 + t5737*t6025 + t6217*t6254) + 0.206868*(t5737*t5810 + 0.103955395616*t5154*t6217 + t5954*t6300) + 0.290567*(t5223*t5954 + t5319*t6217 + t5737*t6348) + t101*t266*t926 + var1[0];
  p_output1[1]=0. + t1743*t6434 + t2507*t6457 + t3097*t6475 + t3315*t6518 + t4098*t6548 + t4474*t6586 + t4972*t6612 + t5362*t6659 + t5818*t6701 + t6080*t6767 + 0.206868*(t5810*t6659 + t6300*t6701 + 0.103955395616*t5154*t6767) + 0.290567*(t6348*t6659 + t5223*t6701 + t5319*t6767) + 0.250125*(t6025*t6659 + 0.103955395616*t5154*t6701 + t6254*t6767) + t1972*t266*t926 + var1[1];
  p_output1[2]=0. + t1743*t1759*t266 + t1980*t2507*t266 + t3097*t7024 + t3315*t7058 + t4098*t7082 + t4474*t7115 + t4972*t7162 + t5362*t7261 + t5818*t7290 + t6080*t7318 + 0.206868*(t5810*t7261 + t6300*t7290 + 0.103955395616*t5154*t7318) + 0.290567*(t6348*t7261 + t5223*t7290 + t5319*t7318) + 0.250125*(t6025*t7261 + 0.103955395616*t5154*t7290 + t6254*t7318) - 1.*t1838*t926 + var1[2];
}



void p_left_elbow_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

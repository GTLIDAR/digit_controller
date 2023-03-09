/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:22:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_right_elbow_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1223;
  double t1246;
  double t1550;
  double t453;
  double t550;
  double t1119;
  double t2110;
  double t2319;
  double t1979;
  double t2021;
  double t2035;
  double t2049;
  double t2090;
  double t1740;
  double t1743;
  double t1766;
  double t1839;
  double t1865;
  double t2093;
  double t2331;
  double t2389;
  double t2404;
  double t2583;
  double t2658;
  double t2668;
  double t2670;
  double t3100;
  double t2231;
  double t1120;
  double t1203;
  double t1952;
  double t2190;
  double t2199;
  double t2213;
  double t2295;
  double t2303;
  double t2709;
  double t2727;
  double t3897;
  double t2867;
  double t2894;
  double t2933;
  double t2938;
  double t3036;
  double t3039;
  double t3117;
  double t3146;
  double t3172;
  double t3182;
  double t3295;
  double t3333;
  double t3357;
  double t3463;
  double t3499;
  double t3533;
  double t3539;
  double t3571;
  double t3598;
  double t3621;
  double t3630;
  double t3646;
  double t3693;
  double t3760;
  double t3763;
  double t3902;
  double t3906;
  double t3918;
  double t3935;
  double t4361;
  double t4199;
  double t4201;
  double t4231;
  double t4236;
  double t4241;
  double t4253;
  double t4271;
  double t4283;
  double t4158;
  double t4373;
  double t4413;
  double t4421;
  double t4435;
  double t4436;
  double t4440;
  double t4448;
  double t4488;
  double t4010;
  double t4014;
  double t4030;
  double t4067;
  double t4149;
  double t4574;
  double t4586;
  double t4590;
  double t4358;
  double t4489;
  double t4490;
  double t4594;
  double t4715;
  double t4722;
  double t4763;
  double t4770;
  double t4786;
  double t4791;
  double t4850;
  double t4855;
  double t4877;
  double t4886;
  double t4894;
  double t4903;
  double t4930;
  double t4933;
  double t4935;
  double t4939;
  double t4942;
  double t4944;
  double t4822;
  double t4908;
  double t4952;
  double t4954;
  double t4965;
  double t4967;
  double t4968;
  double t4977;
  double t5061;
  double t5063;
  double t5064;
  double t5068;
  double t5152;
  double t5153;
  double t5154;
  double t5156;
  double t5172;
  double t5209;
  double t5212;
  double t5227;
  double t5101;
  double t5103;
  double t5115;
  double t5123;
  double t4616;
  double t4621;
  double t5245;
  double t5247;
  double t5248;
  double t5167;
  double t5232;
  double t5240;
  double t5350;
  double t5351;
  double t5353;
  double t5372;
  double t5392;
  double t5414;
  double t5422;
  double t5426;
  double t5428;
  double t5429;
  double t5437;
  double t5452;
  double t5390;
  double t5427;
  double t5457;
  double t5468;
  double t5472;
  double t5473;
  double t5474;
  double t5479;
  double t5542;
  double t5552;
  double t5554;
  double t5555;
  double t5624;
  double t5635;
  double t5637;
  double t5638;
  double t5648;
  double t5651;
  double t5656;
  double t5662;
  double t5575;
  double t5577;
  double t5581;
  double t5587;
  double t5694;
  double t5699;
  double t5732;
  double t5639;
  double t5672;
  double t5681;
  double t5806;
  double t5832;
  double t5826;
  double t5837;
  double t5843;
  double t5848;
  double t5854;
  double t5858;
  double t5845;
  double t5862;
  double t5864;
  double t5874;
  double t5878;
  double t5882;
  double t5815;
  double t5868;
  double t5885;
  double t5888;
  double t5900;
  double t5906;
  double t5911;
  double t5915;
  double t5921;
  double t5931;
  double t5935;
  double t5937;
  double t5891;
  double t5920;
  double t5939;
  double t5953;
  double t5968;
  double t5970;
  double t5990;
  double t5993;
  double t5995;
  double t5996;
  double t5999;
  double t6000;
  double t184;
  double t2757;
  double t3191;
  double t3219;
  double t3270;
  double t3832;
  double t3913;
  double t3968;
  double t3992;
  double t4007;
  double t4095;
  double t4101;
  double t4110;
  double t4136;
  double t4141;
  double t4144;
  double t4568;
  double t4597;
  double t4600;
  double t4603;
  double t4620;
  double t4639;
  double t4644;
  double t4669;
  double t4675;
  double t4676;
  double t4677;
  double t4681;
  double t4698;
  double t4955;
  double t4991;
  double t4993;
  double t5030;
  double t5032;
  double t5044;
  double t5071;
  double t5080;
  double t5084;
  double t5127;
  double t5136;
  double t5140;
  double t5141;
  double t5142;
  double t5148;
  double t5242;
  double t5255;
  double t5264;
  double t5276;
  double t5285;
  double t5286;
  double t5287;
  double t5298;
  double t5302;
  double t5303;
  double t5323;
  double t5324;
  double t5346;
  double t5469;
  double t5490;
  double t5498;
  double t5524;
  double t5539;
  double t5540;
  double t5565;
  double t5568;
  double t5571;
  double t5598;
  double t5605;
  double t5611;
  double t5612;
  double t5614;
  double t5617;
  double t5682;
  double t5740;
  double t5745;
  double t5749;
  double t5755;
  double t5757;
  double t5760;
  double t5761;
  double t5767;
  double t5768;
  double t5780;
  double t5783;
  double t5957;
  double t5994;
  double t6001;
  double t6014;
  double t6019;
  double t6020;
  double t6023;
  double t6025;
  double t6075;
  double t6077;
  double t6078;
  double t6083;
  double t4685;
  double t5325;
  double t5795;
  double t5805;
  double t6141;
  double t6143;
  double t6163;
  double t6181;
  double t6193;
  double t6195;
  double t6172;
  double t6202;
  double t6211;
  double t6224;
  double t6232;
  double t6238;
  double t6139;
  double t6214;
  double t6243;
  double t6254;
  double t6257;
  double t6264;
  double t6268;
  double t6269;
  double t6285;
  double t6289;
  double t6290;
  double t6291;
  double t6255;
  double t6278;
  double t6293;
  double t6297;
  double t6311;
  double t6313;
  double t6320;
  double t6334;
  double t6349;
  double t6350;
  double t6359;
  double t6361;
  double t6035;
  double t6037;
  double t6041;
  double t6065;
  double t6310;
  double t6345;
  double t6370;
  double t6371;
  double t6378;
  double t6382;
  double t6386;
  double t6387;
  double t6112;
  double t6114;
  double t6115;
  double t6122;
  double t6422;
  double t6424;
  double t6426;
  double t6430;
  double t6477;
  double t6485;
  double t6486;
  double t6502;
  double t6508;
  double t6514;
  double t6475;
  double t6487;
  double t6516;
  double t6523;
  double t6530;
  double t6531;
  double t6541;
  double t6542;
  double t6547;
  double t6548;
  double t6550;
  double t6554;
  double t6528;
  double t6544;
  double t6556;
  double t6558;
  double t6565;
  double t6569;
  double t6572;
  double t6574;
  double t6581;
  double t6589;
  double t6592;
  double t6604;
  double t6561;
  double t6575;
  double t6607;
  double t6608;
  double t6622;
  double t6624;
  double t6625;
  double t6633;
  double t6647;
  double t6665;
  double t6666;
  double t6668;
  t1223 = Cos(var1[27]);
  t1246 = -1.*t1223;
  t1550 = 1. + t1246;
  t453 = Cos(var1[26]);
  t550 = -1.*t453;
  t1119 = 1. + t550;
  t2110 = Sin(var1[26]);
  t2319 = Sin(var1[27]);
  t1979 = -0.9890740084840001*t1550;
  t2021 = 1. + t1979;
  t2035 = 0.104528*t2021;
  t2049 = 0.10338592795881554*t1550;
  t2090 = t2035 + t2049;
  t1740 = -0.010926102783999999*t1550;
  t1743 = 1. + t1740;
  t1766 = -0.994522*t1743;
  t1839 = -0.010866249592949247*t1550;
  t1865 = t1766 + t1839;
  t2093 = 0.051978134642000004*t1119;
  t2331 = -0.994522*t2319;
  t2389 = 0. + t2331;
  t2404 = 0.104528*t2389;
  t2583 = -0.104528*t2319;
  t2658 = 0. + t2583;
  t2668 = -0.994522*t2658;
  t2670 = t2404 + t2668;
  t3100 = -0.49726168403800003*t1119;
  t2231 = -0.05226439969100001*t1119;
  t1120 = -0.9945383682050002*t1119;
  t1203 = 1. + t1120;
  t1952 = t1203*t1865;
  t2190 = -0.707107*t2110;
  t2199 = t2093 + t2190;
  t2213 = t2090*t2199;
  t2295 = -0.703234*t2110;
  t2303 = t2231 + t2295;
  t2709 = t2303*t2670;
  t2727 = 0. + t1952 + t2213 + t2709;
  t3897 = Sin(var1[25]);
  t2867 = -0.5054634410180001*t1119;
  t2894 = 1. + t2867;
  t2933 = t2894*t2090;
  t2938 = 0.707107*t2110;
  t3036 = t2093 + t2938;
  t3039 = t1865*t3036;
  t3117 = 0.073913*t2110;
  t3146 = t3100 + t3117;
  t3172 = t3146*t2670;
  t3182 = 0. + t2933 + t3039 + t3172;
  t3295 = Cos(var1[25]);
  t3333 = -1.*t3295;
  t3357 = 1. + t3333;
  t3463 = -1.0000001112680001*t3357;
  t3499 = 1. + t3463;
  t3533 = -0.073913*t2110;
  t3539 = t3100 + t3533;
  t3571 = t2090*t3539;
  t3598 = 0.703234*t2110;
  t3621 = t2231 + t3598;
  t3630 = t1865*t3621;
  t3646 = -0.500001190325*t1119;
  t3693 = 1. + t3646;
  t3760 = t3693*t2670;
  t3763 = 0. + t3571 + t3630 + t3760;
  t3902 = -0.104528*t3897;
  t3906 = 0. + t3902;
  t3918 = -0.994522*t3897;
  t3935 = 0. + t3918;
  t4361 = Cos(var1[24]);
  t4199 = 0.994522*t3897;
  t4201 = 0. + t4199;
  t4231 = t4201*t3763;
  t4236 = -0.103955395616*t3357*t2727;
  t4241 = -0.9890740084840001*t3357;
  t4253 = 1. + t4241;
  t4271 = t4253*t3182;
  t4283 = 0. + t4231 + t4236 + t4271;
  t4158 = Sin(var1[24]);
  t4373 = 0.104528*t3897;
  t4413 = 0. + t4373;
  t4421 = t4413*t3763;
  t4435 = -0.010926102783999999*t3357;
  t4436 = 1. + t4435;
  t4440 = t4436*t2727;
  t4448 = -0.103955395616*t3357*t3182;
  t4488 = 0. + t4421 + t4440 + t4448;
  t4010 = t3499*t3763;
  t4014 = t3906*t2727;
  t4030 = t3935*t3182;
  t4067 = 0. + t4010 + t4014 + t4030;
  t4149 = Cos(var1[5]);
  t4574 = t4361*t4283;
  t4586 = -1.*t4158*t4488;
  t4590 = 0. + t4574 + t4586;
  t4358 = t4158*t4283;
  t4489 = t4361*t4488;
  t4490 = 0. + t4358 + t4489;
  t4594 = Sin(var1[5]);
  t4715 = -1.0000001112680001*t1550;
  t4722 = 1. + t4715;
  t4763 = -0.382684*t4722;
  t4770 = 0.918819*t2389;
  t4786 = 0.096572*t2658;
  t4791 = t4763 + t4770 + t4786;
  t4850 = 0.096572*t1743;
  t4855 = -0.0955161926444975*t1550;
  t4877 = 0.104528*t2319;
  t4886 = 0. + t4877;
  t4894 = -0.382684*t4886;
  t4903 = t4850 + t4855 + t4894;
  t4930 = 0.918819*t2021;
  t4933 = -0.010039180465428352*t1550;
  t4935 = 0.994522*t2319;
  t4939 = 0. + t4935;
  t4942 = -0.382684*t4939;
  t4944 = t4930 + t4933 + t4942;
  t4822 = t3146*t4791;
  t4908 = t3036*t4903;
  t4952 = t2894*t4944;
  t4954 = 0. + t4822 + t4908 + t4952;
  t4965 = t2303*t4791;
  t4967 = t1203*t4903;
  t4968 = t2199*t4944;
  t4977 = 0. + t4965 + t4967 + t4968;
  t5061 = t3693*t4791;
  t5063 = t3621*t4903;
  t5064 = t3539*t4944;
  t5068 = 0. + t5061 + t5063 + t5064;
  t5152 = -0.103955395616*t3357*t4954;
  t5153 = t4436*t4977;
  t5154 = t4413*t5068;
  t5156 = 0. + t5152 + t5153 + t5154;
  t5172 = t4253*t4954;
  t5209 = -0.103955395616*t3357*t4977;
  t5212 = t4201*t5068;
  t5227 = 0. + t5172 + t5209 + t5212;
  t5101 = t3935*t4954;
  t5103 = t3906*t4977;
  t5115 = t3499*t5068;
  t5123 = 0. + t5101 + t5103 + t5115;
  t4616 = Sin(var1[4]);
  t4621 = Cos(var1[4]);
  t5245 = -1.*t4158*t5156;
  t5247 = t4361*t5227;
  t5248 = 0. + t5245 + t5247;
  t5167 = t4361*t5156;
  t5232 = t4158*t5227;
  t5240 = 0. + t5167 + t5232;
  t5350 = 0.92388*t4722;
  t5351 = 0.380588*t2389;
  t5353 = 0.040001*t2658;
  t5372 = t5350 + t5351 + t5353;
  t5392 = 0.040001*t1743;
  t5414 = -0.0395641761067022*t1550;
  t5422 = 0.92388*t4886;
  t5426 = t5392 + t5414 + t5422;
  t5428 = 0.380588*t2021;
  t5429 = -0.004158319780035616*t1550;
  t5437 = 0.92388*t4939;
  t5452 = t5428 + t5429 + t5437;
  t5390 = t3146*t5372;
  t5427 = t3036*t5426;
  t5457 = t2894*t5452;
  t5468 = 0. + t5390 + t5427 + t5457;
  t5472 = t2303*t5372;
  t5473 = t1203*t5426;
  t5474 = t2199*t5452;
  t5479 = 0. + t5472 + t5473 + t5474;
  t5542 = t3693*t5372;
  t5552 = t3621*t5426;
  t5554 = t3539*t5452;
  t5555 = 0. + t5542 + t5552 + t5554;
  t5624 = -0.103955395616*t3357*t5468;
  t5635 = t4436*t5479;
  t5637 = t4413*t5555;
  t5638 = 0. + t5624 + t5635 + t5637;
  t5648 = t4253*t5468;
  t5651 = -0.103955395616*t3357*t5479;
  t5656 = t4201*t5555;
  t5662 = 0. + t5648 + t5651 + t5656;
  t5575 = t3935*t5468;
  t5577 = t3906*t5479;
  t5581 = t3499*t5555;
  t5587 = 0. + t5575 + t5577 + t5581;
  t5694 = -1.*t4158*t5638;
  t5699 = t4361*t5662;
  t5732 = 0. + t5694 + t5699;
  t5639 = t4361*t5638;
  t5672 = t4158*t5662;
  t5681 = 0. + t5639 + t5672;
  t5806 = Cos(var1[3]);
  t5832 = Sin(var1[3]);
  t5826 = t5806*t4149*t4616;
  t5837 = t5832*t4594;
  t5843 = t5826 + t5837;
  t5848 = -1.*t4149*t5832;
  t5854 = t5806*t4616*t4594;
  t5858 = t5848 + t5854;
  t5845 = -1.*t4158*t5843;
  t5862 = t4361*t5858;
  t5864 = t5845 + t5862;
  t5874 = t4361*t5843;
  t5878 = t4158*t5858;
  t5882 = t5874 + t5878;
  t5815 = t5806*t4621*t3935;
  t5868 = -0.103955395616*t3357*t5864;
  t5885 = t4253*t5882;
  t5888 = t5815 + t5868 + t5885;
  t5900 = t5806*t4621*t3906;
  t5906 = t4436*t5864;
  t5911 = -0.103955395616*t3357*t5882;
  t5915 = t5900 + t5906 + t5911;
  t5921 = t3499*t5806*t4621;
  t5931 = t4413*t5864;
  t5935 = t4201*t5882;
  t5937 = t5921 + t5931 + t5935;
  t5891 = t3146*t5888;
  t5920 = t2303*t5915;
  t5939 = t3693*t5937;
  t5953 = t5891 + t5920 + t5939;
  t5968 = t2894*t5888;
  t5970 = t2199*t5915;
  t5990 = t3539*t5937;
  t5993 = t5968 + t5970 + t5990;
  t5995 = t3036*t5888;
  t5996 = t1203*t5915;
  t5999 = t3621*t5937;
  t6000 = t5995 + t5996 + t5999;
  t184 = 1.0000001112680001*var2[27];
  t2757 = -0.994522*t2727;
  t3191 = 0.104528*t3182;
  t3219 = 0. + t2757 + t3191;
  t3270 = var2[25]*t3219;
  t3832 = -1.*t3499*t3763;
  t3913 = -1.*t3906*t2727;
  t3968 = -1.*t3935*t3182;
  t3992 = 0. + t3832 + t3913 + t3968;
  t4007 = var2[24]*t3992;
  t4095 = var2[5]*t4067;
  t4101 = -0.073913*t1865;
  t4110 = -0.703234*t2090;
  t4136 = 0.707107*t2670;
  t4141 = 0. + t4101 + t4110 + t4136;
  t4144 = var2[26]*t4141;
  t4568 = t4149*t4490;
  t4597 = -1.*t4590*t4594;
  t4600 = 0. + t4568 + t4597;
  t4603 = var2[4]*t4600;
  t4620 = -1.*t4067*t4616;
  t4639 = t4149*t4590;
  t4644 = t4490*t4594;
  t4669 = 0. + t4639 + t4644;
  t4675 = t4621*t4669;
  t4676 = 0. + t4620 + t4675;
  t4677 = var2[3]*t4676;
  t4681 = t184 + t3270 + t4007 + t4095 + t4144 + t4603 + t4677;
  t4698 = -6.661520000061927e-7*var2[27];
  t4955 = 0.104528*t4954;
  t4991 = -0.994522*t4977;
  t4993 = 0. + t4955 + t4991;
  t5030 = var2[25]*t4993;
  t5032 = -1.*t3935*t4954;
  t5044 = -1.*t3906*t4977;
  t5071 = -1.*t3499*t5068;
  t5080 = 0. + t5032 + t5044 + t5071;
  t5084 = var2[24]*t5080;
  t5127 = var2[5]*t5123;
  t5136 = 0.707107*t4791;
  t5140 = -0.073913*t4903;
  t5141 = -0.703234*t4944;
  t5142 = 0. + t5136 + t5140 + t5141;
  t5148 = var2[26]*t5142;
  t5242 = t4149*t5240;
  t5255 = -1.*t5248*t4594;
  t5264 = 0. + t5242 + t5255;
  t5276 = var2[4]*t5264;
  t5285 = -1.*t5123*t4616;
  t5286 = t4149*t5248;
  t5287 = t5240*t4594;
  t5298 = 0. + t5286 + t5287;
  t5302 = t4621*t5298;
  t5303 = 0. + t5285 + t5302;
  t5323 = var2[3]*t5303;
  t5324 = t4698 + t5030 + t5084 + t5127 + t5148 + t5276 + t5323;
  t5346 = 2.2794199999731646e-7*var2[27];
  t5469 = 0.104528*t5468;
  t5490 = -0.994522*t5479;
  t5498 = 0. + t5469 + t5490;
  t5524 = var2[25]*t5498;
  t5539 = -1.*t3935*t5468;
  t5540 = -1.*t3906*t5479;
  t5565 = -1.*t3499*t5555;
  t5568 = 0. + t5539 + t5540 + t5565;
  t5571 = var2[24]*t5568;
  t5598 = var2[5]*t5587;
  t5605 = 0.707107*t5372;
  t5611 = -0.073913*t5426;
  t5612 = -0.703234*t5452;
  t5614 = 0. + t5605 + t5611 + t5612;
  t5617 = var2[26]*t5614;
  t5682 = t4149*t5681;
  t5740 = -1.*t5732*t4594;
  t5745 = 0. + t5682 + t5740;
  t5749 = var2[4]*t5745;
  t5755 = -1.*t5587*t4616;
  t5757 = t4149*t5732;
  t5760 = t5681*t4594;
  t5761 = 0. + t5757 + t5760;
  t5767 = t4621*t5761;
  t5768 = 0. + t5755 + t5767;
  t5780 = var2[3]*t5768;
  t5783 = t5346 + t5524 + t5571 + t5598 + t5617 + t5749 + t5780;
  t5957 = t2658*t5953;
  t5994 = -0.103955395616*t1550*t5993;
  t6001 = t1743*t6000;
  t6014 = t5957 + t5994 + t6001;
  t6019 = t2389*t5953;
  t6020 = t2021*t5993;
  t6023 = -0.103955395616*t1550*t6000;
  t6025 = t6019 + t6020 + t6023;
  t6075 = t4722*t5953;
  t6077 = t4939*t5993;
  t6078 = t4886*t6000;
  t6083 = t6075 + t6077 + t6078;
  t4685 = -0.00001*t4681;
  t5325 = -0.00002*t5324;
  t5795 = 0.0014*t5783;
  t5805 = t4685 + t5325 + t5795;
  t6141 = t4149*t5832*t4616;
  t6143 = -1.*t5806*t4594;
  t6163 = t6141 + t6143;
  t6181 = t5806*t4149;
  t6193 = t5832*t4616*t4594;
  t6195 = t6181 + t6193;
  t6172 = -1.*t4158*t6163;
  t6202 = t4361*t6195;
  t6211 = t6172 + t6202;
  t6224 = t4361*t6163;
  t6232 = t4158*t6195;
  t6238 = t6224 + t6232;
  t6139 = t4621*t3935*t5832;
  t6214 = -0.103955395616*t3357*t6211;
  t6243 = t4253*t6238;
  t6254 = t6139 + t6214 + t6243;
  t6257 = t4621*t3906*t5832;
  t6264 = t4436*t6211;
  t6268 = -0.103955395616*t3357*t6238;
  t6269 = t6257 + t6264 + t6268;
  t6285 = t3499*t4621*t5832;
  t6289 = t4413*t6211;
  t6290 = t4201*t6238;
  t6291 = t6285 + t6289 + t6290;
  t6255 = t3146*t6254;
  t6278 = t2303*t6269;
  t6293 = t3693*t6291;
  t6297 = t6255 + t6278 + t6293;
  t6311 = t2894*t6254;
  t6313 = t2199*t6269;
  t6320 = t3539*t6291;
  t6334 = t6311 + t6313 + t6320;
  t6349 = t3036*t6254;
  t6350 = t1203*t6269;
  t6359 = t3621*t6291;
  t6361 = t6349 + t6350 + t6359;
  t6035 = -0.00002*t4681;
  t6037 = 0.00956*t5324;
  t6041 = -0.00003*t5783;
  t6065 = t6035 + t6037 + t6041;
  t6310 = t2658*t6297;
  t6345 = -0.103955395616*t1550*t6334;
  t6370 = t1743*t6361;
  t6371 = t6310 + t6345 + t6370;
  t6378 = t2389*t6297;
  t6382 = t2021*t6334;
  t6386 = -0.103955395616*t1550*t6361;
  t6387 = t6378 + t6382 + t6386;
  t6112 = 0.0014*t4681;
  t6114 = -0.00003*t5324;
  t6115 = 0.00048*t5783;
  t6122 = t6112 + t6114 + t6115;
  t6422 = t4722*t6297;
  t6424 = t4939*t6334;
  t6426 = t4886*t6361;
  t6430 = t6422 + t6424 + t6426;
  t6477 = -1.*t4621*t4149*t4158;
  t6485 = t4361*t4621*t4594;
  t6486 = t6477 + t6485;
  t6502 = t4361*t4621*t4149;
  t6508 = t4621*t4158*t4594;
  t6514 = t6502 + t6508;
  t6475 = -1.*t3935*t4616;
  t6487 = -0.103955395616*t3357*t6486;
  t6516 = t4253*t6514;
  t6523 = t6475 + t6487 + t6516;
  t6530 = -1.*t3906*t4616;
  t6531 = t4436*t6486;
  t6541 = -0.103955395616*t3357*t6514;
  t6542 = t6530 + t6531 + t6541;
  t6547 = -1.*t3499*t4616;
  t6548 = t4413*t6486;
  t6550 = t4201*t6514;
  t6554 = t6547 + t6548 + t6550;
  t6528 = t3146*t6523;
  t6544 = t2303*t6542;
  t6556 = t3693*t6554;
  t6558 = t6528 + t6544 + t6556;
  t6565 = t2894*t6523;
  t6569 = t2199*t6542;
  t6572 = t3539*t6554;
  t6574 = t6565 + t6569 + t6572;
  t6581 = t3036*t6523;
  t6589 = t1203*t6542;
  t6592 = t3621*t6554;
  t6604 = t6581 + t6589 + t6592;
  t6561 = t2658*t6558;
  t6575 = -0.103955395616*t1550*t6574;
  t6607 = t1743*t6604;
  t6608 = t6561 + t6575 + t6607;
  t6622 = t2389*t6558;
  t6624 = t2021*t6574;
  t6625 = -0.103955395616*t1550*t6604;
  t6633 = t6622 + t6624 + t6625;
  t6647 = t4722*t6558;
  t6665 = t4939*t6574;
  t6666 = t4886*t6604;
  t6668 = t6647 + t6665 + t6666;
  p_output1[0]=t5805*(-0.994522*t6014 + 0.104528*t6025) + t6065*(0.096572*t6014 + 0.918819*t6025 - 0.382684*t6083) + (0.040001*t6014 + 0.380588*t6025 + 0.92388*t6083)*t6122;
  p_output1[1]=t5805*(-0.994522*t6371 + 0.104528*t6387) + t6065*(0.096572*t6371 + 0.918819*t6387 - 0.382684*t6430) + t6122*(0.040001*t6371 + 0.380588*t6387 + 0.92388*t6430);
  p_output1[2]=t5805*(-0.994522*t6608 + 0.104528*t6633) + t6065*(0.096572*t6608 + 0.918819*t6633 - 0.382684*t6668) + t6122*(0.040001*t6608 + 0.380588*t6633 + 0.92388*t6668);
}



void AMWorld_right_elbow_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
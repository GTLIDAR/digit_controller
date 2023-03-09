/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:08:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_left_shoulder_roll_src.h"

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
  double t1382;
  double t1826;
  double t353;
  double t1303;
  double t2070;
  double t2245;
  double t2259;
  double t1488;
  double t1881;
  double t2013;
  double t2264;
  double t2038;
  double t3015;
  double t3023;
  double t3166;
  double t505;
  double t608;
  double t3872;
  double t3863;
  double t3901;
  double t3946;
  double t4033;
  double t4133;
  double t4178;
  double t509;
  double t776;
  double t876;
  double t1116;
  double t2278;
  double t2501;
  double t2512;
  double t2554;
  double t2669;
  double t2671;
  double t2720;
  double t2735;
  double t2749;
  double t2926;
  double t3194;
  double t3218;
  double t3237;
  double t3415;
  double t3494;
  double t3521;
  double t3527;
  double t3597;
  double t3618;
  double t3706;
  double t3737;
  double t4019;
  double t4269;
  double t4291;
  double t4329;
  double t4334;
  double t4361;
  double t1160;
  double t3005;
  double t3786;
  double t4743;
  double t4745;
  double t4746;
  double t4788;
  double t4796;
  double t4798;
  double t4515;
  double t4613;
  double t4682;
  double t4778;
  double t4815;
  double t4816;
  double t4866;
  double t4882;
  double t4886;
  double t4714;
  double t4721;
  double t4724;
  double t4726;
  double t4976;
  double t4819;
  double t4887;
  double t4888;
  double t4894;
  double t4924;
  double t4937;
  double t5044;
  double t5053;
  double t5055;
  double t5059;
  double t5060;
  double t5062;
  double t4961;
  double t4964;
  double t4977;
  double t4986;
  double t4990;
  double t4995;
  double t5103;
  double t5113;
  double t5116;
  double t5126;
  double t5132;
  double t5137;
  double t5023;
  double t5026;
  double t5028;
  double t5032;
  double t5125;
  double t5141;
  double t5146;
  double t5155;
  double t5157;
  double t5161;
  double t5193;
  double t5194;
  double t5195;
  double t5208;
  double t5214;
  double t5217;
  double t5261;
  double t5277;
  double t5280;
  double t5290;
  double t5292;
  double t5293;
  double t5365;
  double t5366;
  double t5370;
  double t5378;
  double t5383;
  double t5386;
  double t5422;
  double t5423;
  double t5436;
  double t5439;
  double t5441;
  double t5443;
  double t5456;
  double t5458;
  double t5463;
  double t5465;
  double t5467;
  double t5470;
  double t5474;
  double t5476;
  double t5534;
  double t5535;
  double t5541;
  double t5529;
  double t5543;
  double t5546;
  double t5555;
  double t5559;
  double t5453;
  double t5477;
  double t5497;
  double t5503;
  double t5154;
  double t5164;
  double t5165;
  double t5506;
  double t5509;
  double t5526;
  double t5172;
  double t5178;
  double t5184;
  double t5587;
  double t5591;
  double t5599;
  double t5605;
  double t5286;
  double t5302;
  double t5303;
  double t5310;
  double t5327;
  double t5331;
  double t5657;
  double t5660;
  double t5663;
  double t5711;
  double t5713;
  double t5715;
  double t5702;
  double t5703;
  double t5705;
  double t5706;
  double t5708;
  double t5717;
  double t5725;
  double t5726;
  double t5729;
  double t5733;
  double t5734;
  double t5740;
  double t5741;
  double t5770;
  double t5778;
  double t5779;
  double t5745;
  double t5748;
  double t5753;
  double t5754;
  double t5761;
  double t5762;
  double t5766;
  double t5816;
  double t5824;
  double t5826;
  double t5852;
  double t5854;
  double t5858;
  t1382 = Cos(var1[13]);
  t1826 = Sin(var1[13]);
  t353 = Cos(var1[4]);
  t1303 = Cos(var1[5]);
  t2070 = -0.173648*t1382;
  t2245 = -0.984808*t1826;
  t2259 = t2070 + t2245;
  t1488 = 0.984808*t1382;
  t1881 = -0.173648*t1826;
  t2013 = t1488 + t1881;
  t2264 = Sin(var1[5]);
  t2038 = t1303*t2013;
  t3015 = 0.173648*t1382;
  t3023 = 0.984808*t1826;
  t3166 = t3015 + t3023;
  t505 = Sin(var1[3]);
  t608 = Sin(var1[4]);
  t3872 = Cos(var1[3]);
  t3863 = -1.*t1303*t505*t608;
  t3901 = t3872*t2264;
  t3946 = t3863 + t3901;
  t4033 = -1.*t3872*t1303;
  t4133 = -1.*t505*t608*t2264;
  t4178 = t4033 + t4133;
  t509 = -1.*var2[5];
  t776 = 0. + t608;
  t876 = var2[3]*t776;
  t1116 = 0. + var2[13] + t509 + t876;
  t2278 = -1.*t2259*t2264;
  t2501 = 0. + t2038 + t2278;
  t2512 = var2[4]*t2501;
  t2554 = t1303*t2259;
  t2669 = t2013*t2264;
  t2671 = 0. + t2554 + t2669;
  t2720 = t353*t2671;
  t2735 = 0. + t2720;
  t2749 = var2[3]*t2735;
  t2926 = 0. + t2512 + t2749;
  t3194 = t1303*t3166;
  t3218 = -1.*t2013*t2264;
  t3237 = 0. + t3194 + t3218;
  t3415 = var2[4]*t3237;
  t3494 = t3166*t2264;
  t3521 = 0. + t2038 + t3494;
  t3527 = t353*t3521;
  t3597 = 0. + t3527;
  t3618 = var2[3]*t3597;
  t3706 = 0. + t3415 + t3618;
  t3737 = 0.00001*t3706;
  t4019 = -1.*t1826*t3946;
  t4269 = t1382*t4178;
  t4291 = t4019 + t4269;
  t4329 = t1382*t3946;
  t4334 = t1826*t4178;
  t4361 = t4329 + t4334;
  t1160 = 0.0003*t1116;
  t3005 = 0.00004*t2926;
  t3786 = t1160 + t3005 + t3737;
  t4743 = t3872*t1303*t608;
  t4745 = t505*t2264;
  t4746 = t4743 + t4745;
  t4788 = -1.*t1303*t505;
  t4796 = t3872*t608*t2264;
  t4798 = t4788 + t4796;
  t4515 = 0.00004*t1116;
  t4613 = 0.00075*t2926;
  t4682 = t4515 + t4613 + t3737;
  t4778 = -1.*t1826*t4746;
  t4815 = t1382*t4798;
  t4816 = t4778 + t4815;
  t4866 = t1382*t4746;
  t4882 = t1826*t4798;
  t4886 = t4866 + t4882;
  t4714 = 0.00001*t1116;
  t4721 = 0.00001*t2926;
  t4724 = 0.0007*t3706;
  t4726 = t4714 + t4721 + t4724;
  t4976 = -0.00001*var2[3]*t608*t3521;
  t4819 = 0.984808*t4816;
  t4887 = -0.173648*t4886;
  t4888 = t4819 + t4887;
  t4894 = 0.173648*t4816;
  t4924 = 0.984808*t4886;
  t4937 = t4894 + t4924;
  t5044 = -1.*t3872*t353*t1303*t1826;
  t5053 = t1382*t3872*t353*t2264;
  t5055 = t5044 + t5053;
  t5059 = t1382*t3872*t353*t1303;
  t5060 = t3872*t353*t1826*t2264;
  t5062 = t5059 + t5060;
  t4961 = 0.0003*var2[3]*t353;
  t4964 = -0.00004*var2[3]*t608*t2671;
  t4977 = t4961 + t4964 + t4976;
  t4986 = 0.00004*var2[3]*t353;
  t4990 = -0.00075*var2[3]*t608*t2671;
  t4995 = t4986 + t4990 + t4976;
  t5103 = t1303*t505*t608;
  t5113 = -1.*t3872*t2264;
  t5116 = t5103 + t5113;
  t5126 = t3872*t1303;
  t5132 = t505*t608*t2264;
  t5137 = t5126 + t5132;
  t5023 = 0.00001*var2[3]*t353;
  t5026 = -0.00001*var2[3]*t608*t2671;
  t5028 = -0.0007*var2[3]*t608*t3521;
  t5032 = t5023 + t5026 + t5028;
  t5125 = -1.*t1826*t5116;
  t5141 = t1382*t5137;
  t5146 = t5125 + t5141;
  t5155 = t1382*t5116;
  t5157 = t1826*t5137;
  t5161 = t5155 + t5157;
  t5193 = -1.*t353*t1303*t1826*t505;
  t5194 = t1382*t353*t505*t2264;
  t5195 = t5193 + t5194;
  t5208 = t1382*t353*t1303*t505;
  t5214 = t353*t1826*t505*t2264;
  t5217 = t5208 + t5214;
  t5261 = -1.*t353*t1303*t1826;
  t5277 = t1382*t353*t2264;
  t5280 = t5261 + t5277;
  t5290 = t1382*t353*t1303;
  t5292 = t353*t1826*t2264;
  t5293 = t5290 + t5292;
  t5365 = t1303*t1826*t608;
  t5366 = -1.*t1382*t608*t2264;
  t5370 = t5365 + t5366;
  t5378 = -1.*t1382*t1303*t608;
  t5383 = -1.*t1826*t608*t2264;
  t5386 = t5378 + t5383;
  t5422 = t2038 + t2278;
  t5423 = var2[3]*t353*t5422;
  t5436 = -1.*t1303*t2259;
  t5439 = t5436 + t3218;
  t5441 = var2[4]*t5439;
  t5443 = t5423 + t5441;
  t5456 = t3194 + t3218;
  t5458 = var2[3]*t353*t5456;
  t5463 = -1.*t1303*t2013;
  t5465 = -1.*t3166*t2264;
  t5467 = t5463 + t5465;
  t5470 = var2[4]*t5467;
  t5474 = t5458 + t5470;
  t5476 = 0.00001*t5474;
  t5534 = t1303*t505;
  t5535 = -1.*t3872*t608*t2264;
  t5541 = t5534 + t5535;
  t5529 = t1826*t4746;
  t5543 = t1382*t5541;
  t5546 = t5529 + t5543;
  t5555 = -1.*t1826*t5541;
  t5559 = t4866 + t5555;
  t5453 = 0.00004*t5443;
  t5477 = t5453 + t5476;
  t5497 = 0.00075*t5443;
  t5503 = t5497 + t5476;
  t5154 = 0.984808*t5146;
  t5164 = -0.173648*t5161;
  t5165 = t5154 + t5164;
  t5506 = 0.00001*t5443;
  t5509 = 0.0007*t5474;
  t5526 = t5506 + t5509;
  t5172 = 0.173648*t5146;
  t5178 = 0.984808*t5161;
  t5184 = t5172 + t5178;
  t5587 = t1826*t5116;
  t5591 = t5587 + t4269;
  t5599 = -1.*t1826*t4178;
  t5605 = t5155 + t5599;
  t5286 = 0.984808*t5280;
  t5302 = -0.173648*t5293;
  t5303 = t5286 + t5302;
  t5310 = 0.173648*t5280;
  t5327 = 0.984808*t5293;
  t5331 = t5310 + t5327;
  t5657 = t353*t1303*t1826;
  t5660 = -1.*t1382*t353*t2264;
  t5663 = t5657 + t5660;
  t5711 = -0.984808*t1382;
  t5713 = 0.173648*t1826;
  t5715 = t5711 + t5713;
  t5702 = var2[4]*t5422;
  t5703 = t2554 + t2669;
  t5705 = var2[3]*t353*t5703;
  t5706 = t5702 + t5705;
  t5708 = 0.00001*t5706;
  t5717 = t1303*t5715;
  t5725 = t2259*t2264;
  t5726 = t5717 + t5725;
  t5729 = var2[3]*t353*t5726;
  t5733 = -1.*t5715*t2264;
  t5734 = t2554 + t5733;
  t5740 = var2[4]*t5734;
  t5741 = t5729 + t5740;
  t5770 = -1.*t1382*t4746;
  t5778 = -1.*t1826*t4798;
  t5779 = t5770 + t5778;
  t5745 = 0.00004*t5741;
  t5748 = t5708 + t5745;
  t5753 = 0.00075*t5741;
  t5754 = t5708 + t5753;
  t5761 = 0.0007*t5706;
  t5762 = 0.00001*t5741;
  t5766 = t5761 + t5762;
  t5816 = -1.*t1382*t5116;
  t5824 = -1.*t1826*t5137;
  t5826 = t5816 + t5824;
  t5852 = -1.*t1382*t353*t1303;
  t5854 = -1.*t353*t1826*t2264;
  t5858 = t5852 + t5854;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.984808*t4291 - 0.173648*t4361)*t4682 + (0.173648*t4291 + 0.984808*t4361)*t4726 + t353*t3786*t505;
  p_output1[10]=-1.*t353*t3786*t3872 + t4682*t4888 + t4726*t4937;
  p_output1[11]=0;
  p_output1[12]=-1.*t353*t3872*t4977 + t4888*t4995 + t4937*t5032 + t4682*(0.984808*t5055 - 0.173648*t5062) + t4726*(0.173648*t5055 + 0.984808*t5062) + t3786*t3872*t608;
  p_output1[13]=-1.*t353*t4977*t505 + t4995*t5165 + t5032*t5184 + t4682*(0.984808*t5195 - 0.173648*t5217) + t4726*(0.173648*t5195 + 0.984808*t5217) + t3786*t505*t608;
  p_output1[14]=t353*t3786 + t4995*t5303 + t5032*t5331 + t4682*(0.984808*t5370 - 0.173648*t5386) + t4726*(0.173648*t5370 + 0.984808*t5386) + t4977*t608;
  p_output1[15]=-1.*t353*t3872*t5477 + t4888*t5503 + t4937*t5526 + t4726*(0.984808*t5546 + 0.173648*t5559) + t4682*(-0.173648*t5546 + 0.984808*t5559);
  p_output1[16]=-1.*t353*t505*t5477 + t5165*t5503 + t5184*t5526 + t4726*(0.984808*t5591 + 0.173648*t5605) + t4682*(-0.173648*t5591 + 0.984808*t5605);
  p_output1[17]=t5303*t5503 + t5331*t5526 + t4682*(t5327 - 0.173648*t5663) + t4726*(0.173648*t5293 + 0.984808*t5663) + t5477*t608;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-1.*t353*t3872*t5748 + t4888*t5754 + t4937*t5766 + t4726*(t4819 + 0.173648*t5779) + t4682*(-0.173648*t4816 + 0.984808*t5779);
  p_output1[40]=-1.*t353*t505*t5748 + t5165*t5754 + t5184*t5766 + t4726*(t5154 + 0.173648*t5826) + t4682*(-0.173648*t5146 + 0.984808*t5826);
  p_output1[41]=t5303*t5754 + t5331*t5766 + t4726*(t5286 + 0.173648*t5858) + t4682*(-0.173648*t5280 + 0.984808*t5858) + t5748*t608;
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
}



void Jq_AMWorld_left_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

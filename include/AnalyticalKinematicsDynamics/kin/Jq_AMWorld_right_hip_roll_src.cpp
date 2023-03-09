/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:09:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_right_hip_roll_src.h"

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
  double t7;
  double t104;
  double t6;
  double t998;
  double t1027;
  double t1612;
  double t8;
  double t281;
  double t317;
  double t1643;
  double t3136;
  double t3096;
  double t3097;
  double t3098;
  double t3176;
  double t3218;
  double t3526;
  double t3634;
  double t3759;
  double t1973;
  double t565;
  double t4682;
  double t4687;
  double t4688;
  double t3490;
  double t3871;
  double t3900;
  double t3935;
  double t3996;
  double t4029;
  double t4262;
  double t4276;
  double t4399;
  double t4414;
  double t4818;
  double t4911;
  double t4938;
  double t5029;
  double t5030;
  double t5042;
  double t5045;
  double t5062;
  double t5067;
  double t5084;
  double t1712;
  double t1872;
  double t1933;
  double t2012;
  double t2066;
  double t2398;
  double t2652;
  double t2796;
  double t2956;
  double t2959;
  double t5218;
  double t5243;
  double t5245;
  double t5331;
  double t5340;
  double t5353;
  double t4511;
  double t5103;
  double t5122;
  double t5295;
  double t5355;
  double t5356;
  double t5365;
  double t5382;
  double t5417;
  double t5176;
  double t5207;
  double t5213;
  double t5357;
  double t5447;
  double t5461;
  double t5481;
  double t5484;
  double t5495;
  double t5539;
  double t5559;
  double t5566;
  double t5594;
  double t5595;
  double t5603;
  double t5502;
  double t5514;
  double t5533;
  double t5767;
  double t5770;
  double t5775;
  double t5794;
  double t5798;
  double t5814;
  double t5634;
  double t5638;
  double t5640;
  double t5777;
  double t5838;
  double t5843;
  double t5895;
  double t5913;
  double t5922;
  double t5705;
  double t5706;
  double t5707;
  double t5725;
  double t5738;
  double t5739;
  double t6109;
  double t6112;
  double t6115;
  double t6125;
  double t6133;
  double t6139;
  double t6212;
  double t6220;
  double t6224;
  double t6234;
  double t6246;
  double t6257;
  double t6371;
  double t6375;
  double t6380;
  double t6329;
  double t6343;
  double t6351;
  double t6353;
  double t6354;
  double t6359;
  double t6362;
  double t6370;
  double t6382;
  double t6388;
  double t6399;
  double t6408;
  double t6439;
  double t6441;
  double t6447;
  double t6448;
  double t6453;
  double t6455;
  double t5890;
  double t5936;
  double t5962;
  double t5970;
  double t5975;
  double t5993;
  double t6560;
  double t6572;
  double t6583;
  double t6589;
  double t6121;
  double t6141;
  double t6151;
  double t6169;
  double t6180;
  double t6187;
  double t6688;
  double t6691;
  double t6693;
  double t6777;
  double t6779;
  double t6780;
  double t6732;
  double t6734;
  double t6738;
  double t6743;
  double t6750;
  double t6751;
  double t6752;
  double t6781;
  double t6783;
  double t6791;
  double t6793;
  double t6794;
  double t6796;
  double t6797;
  double t6801;
  double t6825;
  double t6830;
  double t6839;
  double t6894;
  double t6896;
  double t6897;
  t7 = Cos(var1[17]);
  t104 = Sin(var1[17]);
  t6 = Cos(var1[5]);
  t998 = -0.366501*t7;
  t1027 = -0.930418*t104;
  t1612 = t998 + t1027;
  t8 = 0.930418*t7;
  t281 = -0.366501*t104;
  t317 = t8 + t281;
  t1643 = Sin(var1[5]);
  t3136 = Cos(var1[3]);
  t3096 = Sin(var1[3]);
  t3097 = Sin(var1[4]);
  t3098 = -1.*t6*t3096*t3097;
  t3176 = t3136*t1643;
  t3218 = t3098 + t3176;
  t3526 = -1.*t3136*t6;
  t3634 = -1.*t3096*t3097*t1643;
  t3759 = t3526 + t3634;
  t1973 = Cos(var1[4]);
  t565 = t6*t317;
  t4682 = 0.366501*t7;
  t4687 = 0.930418*t104;
  t4688 = t4682 + t4687;
  t3490 = -1.*t104*t3218;
  t3871 = t7*t3759;
  t3900 = t3490 + t3871;
  t3935 = t7*t3218;
  t3996 = t104*t3759;
  t4029 = t3935 + t3996;
  t4262 = -1.*var2[5];
  t4276 = 0. + t3097;
  t4399 = var2[3]*t4276;
  t4414 = 0. + var2[17] + t4262 + t4399;
  t4818 = t6*t4688;
  t4911 = -1.*t317*t1643;
  t4938 = 0. + t4818 + t4911;
  t5029 = var2[4]*t4938;
  t5030 = t4688*t1643;
  t5042 = 0. + t565 + t5030;
  t5045 = t1973*t5042;
  t5062 = 0. + t5045;
  t5067 = var2[3]*t5062;
  t5084 = 0. + t5029 + t5067;
  t1712 = -1.*t1612*t1643;
  t1872 = 0. + t565 + t1712;
  t1933 = var2[4]*t1872;
  t2012 = t6*t1612;
  t2066 = t317*t1643;
  t2398 = 0. + t2012 + t2066;
  t2652 = t1973*t2398;
  t2796 = 0. + t2652;
  t2956 = var2[3]*t2796;
  t2959 = 0. + t1933 + t2956;
  t5218 = t3136*t6*t3097;
  t5243 = t3096*t1643;
  t5245 = t5218 + t5243;
  t5331 = -1.*t6*t3096;
  t5340 = t3136*t3097*t1643;
  t5353 = t5331 + t5340;
  t4511 = 0.00077*t4414;
  t5103 = 0.00001*t5084;
  t5122 = t4511 + t5103;
  t5295 = -1.*t104*t5245;
  t5355 = t7*t5353;
  t5356 = t5295 + t5355;
  t5365 = t7*t5245;
  t5382 = t104*t5353;
  t5417 = t5365 + t5382;
  t5176 = 0.00001*t4414;
  t5207 = 0.00102*t5084;
  t5213 = t5176 + t5207;
  t5357 = 0.930418*t5356;
  t5447 = -0.366501*t5417;
  t5461 = t5357 + t5447;
  t5481 = 0.366501*t5356;
  t5484 = 0.930418*t5417;
  t5495 = t5481 + t5484;
  t5539 = -1.*t3136*t1973*t6*t104;
  t5559 = t7*t3136*t1973*t1643;
  t5566 = t5539 + t5559;
  t5594 = t7*t3136*t1973*t6;
  t5595 = t3136*t1973*t104*t1643;
  t5603 = t5594 + t5595;
  t5502 = 0.00077*var2[3]*t1973;
  t5514 = -0.00001*var2[3]*t3097*t5042;
  t5533 = t5502 + t5514;
  t5767 = t6*t3096*t3097;
  t5770 = -1.*t3136*t1643;
  t5775 = t5767 + t5770;
  t5794 = t3136*t6;
  t5798 = t3096*t3097*t1643;
  t5814 = t5794 + t5798;
  t5634 = 0.00001*var2[3]*t1973;
  t5638 = -0.00102*var2[3]*t3097*t5042;
  t5640 = t5634 + t5638;
  t5777 = -1.*t104*t5775;
  t5838 = t7*t5814;
  t5843 = t5777 + t5838;
  t5895 = t7*t5775;
  t5913 = t104*t5814;
  t5922 = t5895 + t5913;
  t5705 = -1.*t1973*t6*t104*t3096;
  t5706 = t7*t1973*t3096*t1643;
  t5707 = t5705 + t5706;
  t5725 = t7*t1973*t6*t3096;
  t5738 = t1973*t104*t3096*t1643;
  t5739 = t5725 + t5738;
  t6109 = -1.*t1973*t6*t104;
  t6112 = t7*t1973*t1643;
  t6115 = t6109 + t6112;
  t6125 = t7*t1973*t6;
  t6133 = t1973*t104*t1643;
  t6139 = t6125 + t6133;
  t6212 = t6*t104*t3097;
  t6220 = -1.*t7*t3097*t1643;
  t6224 = t6212 + t6220;
  t6234 = -1.*t7*t6*t3097;
  t6246 = -1.*t104*t3097*t1643;
  t6257 = t6234 + t6246;
  t6371 = t6*t3096;
  t6375 = -1.*t3136*t3097*t1643;
  t6380 = t6371 + t6375;
  t6329 = t4818 + t4911;
  t6343 = var2[3]*t1973*t6329;
  t6351 = -1.*t6*t317;
  t6353 = -1.*t4688*t1643;
  t6354 = t6351 + t6353;
  t6359 = var2[4]*t6354;
  t6362 = t6343 + t6359;
  t6370 = t104*t5245;
  t6382 = t7*t6380;
  t6388 = t6370 + t6382;
  t6399 = -1.*t104*t6380;
  t6408 = t5365 + t6399;
  t6439 = t565 + t1712;
  t6441 = var2[3]*t1973*t6439;
  t6447 = -1.*t6*t1612;
  t6448 = t6447 + t4911;
  t6453 = var2[4]*t6448;
  t6455 = t6441 + t6453;
  t5890 = 0.930418*t5843;
  t5936 = -0.366501*t5922;
  t5962 = t5890 + t5936;
  t5970 = 0.366501*t5843;
  t5975 = 0.930418*t5922;
  t5993 = t5970 + t5975;
  t6560 = t104*t5775;
  t6572 = t6560 + t3871;
  t6583 = -1.*t104*t3759;
  t6589 = t5895 + t6583;
  t6121 = 0.930418*t6115;
  t6141 = -0.366501*t6139;
  t6151 = t6121 + t6141;
  t6169 = 0.366501*t6115;
  t6180 = 0.930418*t6139;
  t6187 = t6169 + t6180;
  t6688 = t1973*t6*t104;
  t6691 = -1.*t7*t1973*t1643;
  t6693 = t6688 + t6691;
  t6777 = -0.930418*t7;
  t6779 = 0.366501*t104;
  t6780 = t6777 + t6779;
  t6732 = var2[4]*t6439;
  t6734 = t2012 + t2066;
  t6738 = var2[3]*t1973*t6734;
  t6743 = t6732 + t6738;
  t6750 = -1.*t7*t5245;
  t6751 = -1.*t104*t5353;
  t6752 = t6750 + t6751;
  t6781 = t6*t6780;
  t6783 = t1612*t1643;
  t6791 = t6781 + t6783;
  t6793 = var2[3]*t1973*t6791;
  t6794 = -1.*t6780*t1643;
  t6796 = t2012 + t6794;
  t6797 = var2[4]*t6796;
  t6801 = t6793 + t6797;
  t6825 = -1.*t7*t5775;
  t6830 = -1.*t104*t5814;
  t6839 = t6825 + t6830;
  t6894 = -1.*t7*t1973*t6;
  t6896 = -1.*t1973*t104*t1643;
  t6897 = t6894 + t6896;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00115*t2959*(0.930418*t3900 - 0.366501*t4029) + t1973*t3096*t5122 + (0.366501*t3900 + 0.930418*t4029)*t5213;
  p_output1[10]=-1.*t1973*t3136*t5122 + 0.00115*t2959*t5461 + t5213*t5495;
  p_output1[11]=0;
  p_output1[12]=t3097*t3136*t5122 - 1.*t1973*t3136*t5533 + 0.00115*t2959*(0.930418*t5566 - 0.366501*t5603) + t5213*(0.366501*t5566 + 0.930418*t5603) + t5495*t5640 - 0.00115*t2398*t3097*t5461*var2[3];
  p_output1[13]=t3096*t3097*t5122 - 1.*t1973*t3096*t5533 + 0.00115*t2959*(0.930418*t5707 - 0.366501*t5739) + t5213*(0.366501*t5707 + 0.930418*t5739) + t5640*t5993 - 0.00115*t2398*t3097*t5962*var2[3];
  p_output1[14]=t1973*t5122 + t3097*t5533 + t5640*t6187 + 0.00115*t2959*(0.930418*t6224 - 0.366501*t6257) + t5213*(0.366501*t6224 + 0.930418*t6257) - 0.00115*t2398*t3097*t6151*var2[3];
  p_output1[15]=-0.00001*t1973*t3136*t6362 + 0.00102*t5495*t6362 + t5213*(0.930418*t6388 + 0.366501*t6408) + 0.00115*t2959*(-0.366501*t6388 + 0.930418*t6408) + 0.00115*t5461*t6455;
  p_output1[16]=-0.00001*t1973*t3096*t6362 + 0.00102*t5993*t6362 + 0.00115*t5962*t6455 + t5213*(0.930418*t6572 + 0.366501*t6589) + 0.00115*t2959*(-0.366501*t6572 + 0.930418*t6589);
  p_output1[17]=0.00001*t3097*t6362 + 0.00102*t6187*t6362 + 0.00115*t6151*t6455 + 0.00115*t2959*(t6180 - 0.366501*t6693) + t5213*(0.366501*t6139 + 0.930418*t6693);
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
  p_output1[51]=-0.00001*t1973*t3136*t6743 + 0.00102*t5495*t6743 + t5213*(t5357 + 0.366501*t6752) + 0.00115*t2959*(-0.366501*t5356 + 0.930418*t6752) + 0.00115*t5461*t6801;
  p_output1[52]=-0.00001*t1973*t3096*t6743 + 0.00102*t5993*t6743 + 0.00115*t5962*t6801 + t5213*(t5890 + 0.366501*t6839) + 0.00115*t2959*(-0.366501*t5843 + 0.930418*t6839);
  p_output1[53]=0.00001*t3097*t6743 + 0.00102*t6187*t6743 + 0.00115*t6151*t6801 + t5213*(t6121 + 0.366501*t6897) + 0.00115*t2959*(-0.366501*t6115 + 0.930418*t6897);
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



void Jq_AMWorld_right_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

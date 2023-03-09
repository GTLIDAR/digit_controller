/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_right_shoulder_pitch_src.h"

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
  double t765;
  double t1353;
  double t1431;
  double t1432;
  double t1441;
  double t1678;
  double t2479;
  double t2064;
  double t2075;
  double t2513;
  double t142;
  double t386;
  double t620;
  double t2257;
  double t3085;
  double t3092;
  double t3899;
  double t4017;
  double t4043;
  double t121;
  double t4840;
  double t5103;
  double t4634;
  double t4650;
  double t4698;
  double t5243;
  double t5267;
  double t5280;
  double t4234;
  double t4277;
  double t828;
  double t901;
  double t1029;
  double t1071;
  double t759;
  double t993;
  double t1094;
  double t1104;
  double t1482;
  double t1973;
  double t1983;
  double t3566;
  double t3694;
  double t3767;
  double t4121;
  double t4140;
  double t4490;
  double t4594;
  double t5675;
  double t5682;
  double t5684;
  double t5687;
  double t5690;
  double t5694;
  double t4825;
  double t4836;
  double t5171;
  double t5224;
  double t5732;
  double t5744;
  double t5759;
  double t5376;
  double t5377;
  double t5771;
  double t5773;
  double t5783;
  double t5445;
  double t5465;
  double t5572;
  double t5573;
  double t5862;
  double t5866;
  double t5870;
  double t5879;
  double t5884;
  double t5896;
  double t5963;
  double t5964;
  double t5970;
  double t5972;
  double t5973;
  double t5979;
  double t6087;
  double t6088;
  double t6089;
  double t6094;
  double t6097;
  double t6105;
  double t6153;
  double t6154;
  double t6155;
  double t6159;
  double t6161;
  double t6162;
  double t6164;
  double t6167;
  double t6209;
  double t6212;
  double t6213;
  double t6232;
  double t6233;
  double t6235;
  double t6238;
  double t6241;
  double t6274;
  double t6276;
  double t6280;
  double t6284;
  double t6285;
  double t6287;
  double t5789;
  double t6342;
  double t6347;
  double t6351;
  double t6329;
  double t6330;
  double t6332;
  double t6335;
  double t6336;
  double t6402;
  double t6405;
  double t6406;
  double t6411;
  double t6413;
  double t6415;
  double t6422;
  double t6423;
  double t6424;
  double t6454;
  double t6456;
  double t6457;
  double t6462;
  double t6464;
  double t6466;
  double t6502;
  double t6503;
  double t6508;
  double t6511;
  double t6512;
  double t6514;
  double t6517;
  double t6519;
  double t6521;
  double t6560;
  double t6562;
  t765 = Sin(var1[25]);
  t1353 = Sin(var1[3]);
  t1431 = Cos(var1[24]);
  t1432 = -1.*t1431;
  t1441 = 1. + t1432;
  t1678 = Sin(var1[24]);
  t2479 = Cos(var1[3]);
  t2064 = Cos(var1[5]);
  t2075 = Sin(var1[4]);
  t2513 = Sin(var1[5]);
  t142 = Cos(var1[25]);
  t386 = -1.*t142;
  t620 = 1. + t386;
  t2257 = -1.*t2064*t1353*t2075;
  t3085 = t2479*t2513;
  t3092 = t2257 + t3085;
  t3899 = -1.*t2479*t2064;
  t4017 = -1.*t1353*t2075*t2513;
  t4043 = t3899 + t4017;
  t121 = Cos(var1[4]);
  t4840 = -0.994522*t765;
  t5103 = 0. + t4840;
  t4634 = -1.*t1678*t3092;
  t4650 = t1431*t4043;
  t4698 = t4634 + t4650;
  t5243 = t1431*t3092;
  t5267 = t1678*t4043;
  t5280 = t5243 + t5267;
  t4234 = -0.104528*t765;
  t4277 = 0. + t4234;
  t828 = 0.104528*t765;
  t901 = 0. + t828;
  t1029 = 0.994522*t765;
  t1071 = 0. + t1029;
  t759 = -0.056500534356700764*t620;
  t993 = 0.040271188976*t901;
  t1094 = 0.38315650737400003*t1071;
  t1104 = 0. + t759 + t993 + t1094;
  t1482 = 0.4*t1441;
  t1973 = -0.12*t1678;
  t1983 = 0. + t1482 + t1973;
  t3566 = -0.12*t1441;
  t3694 = -0.4*t1678;
  t3767 = 0. + t3566 + t3694;
  t4121 = 1.1345904784751044e-7*var1[25];
  t4140 = 0.04027119345689465*t620;
  t4490 = -0.05650052807*t4277;
  t4594 = t4121 + t4140 + t4490;
  t5675 = t2479*t2064*t2075;
  t5682 = t1353*t2513;
  t5684 = t5675 + t5682;
  t5687 = -1.*t2064*t1353;
  t5690 = t2479*t2075*t2513;
  t5694 = t5687 + t5690;
  t4825 = -1.1924972351948546e-8*var1[25];
  t4836 = 0.38315655000705834*t620;
  t5171 = -0.05650052807*t5103;
  t5224 = t4825 + t4836 + t5171;
  t5732 = -1.*t1678*t5684;
  t5744 = t1431*t5694;
  t5759 = t5732 + t5744;
  t5376 = -0.9890740084840001*t620;
  t5377 = 1. + t5376;
  t5771 = t1431*t5684;
  t5773 = t1678*t5694;
  t5783 = t5771 + t5773;
  t5445 = -0.010926102783999999*t620;
  t5465 = 1. + t5445;
  t5572 = -1.0000001112680001*t620;
  t5573 = 1. + t5572;
  t5862 = -1.*t2479*t121*t2064*t1678;
  t5866 = t1431*t2479*t121*t2513;
  t5870 = t5862 + t5866;
  t5879 = t1431*t2479*t121*t2064;
  t5884 = t2479*t121*t1678*t2513;
  t5896 = t5879 + t5884;
  t5963 = -1.*t121*t2064*t1678*t1353;
  t5964 = t1431*t121*t1353*t2513;
  t5970 = t5963 + t5964;
  t5972 = t1431*t121*t2064*t1353;
  t5973 = t121*t1678*t1353*t2513;
  t5979 = t5972 + t5973;
  t6087 = t2064*t1678*t2075;
  t6088 = -1.*t1431*t2075*t2513;
  t6089 = t6087 + t6088;
  t6094 = -1.*t1431*t2064*t2075;
  t6097 = -1.*t1678*t2075*t2513;
  t6105 = t6094 + t6097;
  t6153 = t2064*t1353;
  t6154 = -1.*t2479*t2075*t2513;
  t6155 = t6153 + t6154;
  t6159 = t1678*t5684;
  t6161 = t1431*t6155;
  t6162 = t6159 + t6161;
  t6164 = -1.*t1678*t6155;
  t6167 = t5771 + t6164;
  t6209 = t2064*t1353*t2075;
  t6212 = -1.*t2479*t2513;
  t6213 = t6209 + t6212;
  t6232 = t1678*t6213;
  t6233 = t6232 + t4650;
  t6235 = t1431*t6213;
  t6238 = -1.*t1678*t4043;
  t6241 = t6235 + t6238;
  t6274 = t121*t2064*t1678;
  t6276 = -1.*t1431*t121*t2513;
  t6280 = t6274 + t6276;
  t6284 = t1431*t121*t2064;
  t6285 = t121*t1678*t2513;
  t6287 = t6284 + t6285;
  t5789 = -0.103955395616*t620*t5759;
  t6342 = -1.*t1431*t5684;
  t6347 = -1.*t1678*t5694;
  t6351 = t6342 + t6347;
  t6329 = -0.12*t1431;
  t6330 = 0.4*t1678;
  t6332 = t6329 + t6330;
  t6335 = -0.4*t1431;
  t6336 = t6335 + t1973;
  t6402 = t2479*t2064;
  t6405 = t1353*t2075*t2513;
  t6406 = t6402 + t6405;
  t6411 = -1.*t1678*t6213;
  t6413 = t1431*t6406;
  t6415 = t6411 + t6413;
  t6422 = -1.*t1431*t6213;
  t6423 = -1.*t1678*t6406;
  t6424 = t6422 + t6423;
  t6454 = -1.*t121*t2064*t1678;
  t6456 = t1431*t121*t2513;
  t6457 = t6454 + t6456;
  t6462 = -1.*t1431*t121*t2064;
  t6464 = -1.*t121*t1678*t2513;
  t6466 = t6462 + t6464;
  t6502 = 0.3852670428678886*t142;
  t6503 = -0.056500534356700764*t765;
  t6508 = t6502 + t6503;
  t6511 = 0.0059058871981009595*t142;
  t6512 = 0.04027119345689465*t765;
  t6514 = 1.1345904784751044e-7 + t6511 + t6512;
  t6517 = 0.05619101817723254*t142;
  t6519 = 0.38315655000705834*t765;
  t6521 = -1.1924972351948546e-8 + t6517 + t6519;
  t6560 = t1678*t6406;
  t6562 = t6235 + t6560;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1104*t121*t1353 + t1983*t3092 + t3767*t4043 + t4594*t4698 + t5224*t5280 + 0.362968*(-1.*t121*t1353*t5103 + t5280*t5377 - 0.103955395616*t4698*t620) - 0.18652*(-1.*t121*t1353*t4277 + t4698*t5465 - 0.103955395616*t5280*t620) - 0.012773*(t1071*t5280 - 1.*t121*t1353*t5573 + t4698*t901);
  p_output1[10]=t1104*t121*t2479 + t1983*t5684 + t3767*t5694 + t4594*t5759 + t5224*t5783 + 0.362968*(t121*t2479*t5103 + t5377*t5783 + t5789) - 0.18652*(t121*t2479*t4277 + t5465*t5759 - 0.103955395616*t5783*t620) - 0.012773*(t121*t2479*t5573 + t1071*t5783 + t5759*t901);
  p_output1[11]=0;
  p_output1[12]=t121*t1983*t2064*t2479 - 1.*t1104*t2075*t2479 + t121*t2479*t2513*t3767 + t4594*t5870 + t5224*t5896 + 0.362968*(-1.*t2075*t2479*t5103 + t5377*t5896 - 0.103955395616*t5870*t620) - 0.18652*(-1.*t2075*t2479*t4277 + t5465*t5870 - 0.103955395616*t5896*t620) - 0.012773*(-1.*t2075*t2479*t5573 + t1071*t5896 + t5870*t901);
  p_output1[13]=t121*t1353*t1983*t2064 - 1.*t1104*t1353*t2075 + t121*t1353*t2513*t3767 + t4594*t5970 + t5224*t5979 + 0.362968*(-1.*t1353*t2075*t5103 + t5377*t5979 - 0.103955395616*t5970*t620) - 0.18652*(-1.*t1353*t2075*t4277 + t5465*t5970 - 0.103955395616*t5979*t620) - 0.012773*(-1.*t1353*t2075*t5573 + t1071*t5979 + t5970*t901);
  p_output1[14]=-1.*t1104*t121 - 1.*t1983*t2064*t2075 - 1.*t2075*t2513*t3767 + t4594*t6089 + t5224*t6105 + 0.362968*(-1.*t121*t5103 + t5377*t6105 - 0.103955395616*t6089*t620) - 0.18652*(-1.*t121*t4277 + t5465*t6089 - 0.103955395616*t6105*t620) - 0.012773*(-1.*t121*t5573 + t1071*t6105 + t6089*t901);
  p_output1[15]=t3767*t5684 + t1983*t6155 + t5224*t6162 + t4594*t6167 - 0.18652*(t5465*t6167 - 0.103955395616*t6162*t620) + 0.362968*(t5377*t6162 - 0.103955395616*t6167*t620) - 0.012773*(t1071*t6162 + t6167*t901);
  p_output1[16]=t1983*t4043 + t3767*t6213 + t5224*t6233 + t4594*t6241 - 0.18652*(-0.103955395616*t620*t6233 + t5465*t6241) + 0.362968*(t5377*t6233 - 0.103955395616*t620*t6241) - 0.012773*(t1071*t6233 + t6241*t901);
  p_output1[17]=-1.*t121*t1983*t2513 + t121*t2064*t3767 + t5224*t6280 + t4594*t6287 - 0.18652*(-0.103955395616*t620*t6280 + t5465*t6287) + 0.362968*(t5377*t6280 - 0.103955395616*t620*t6287) - 0.012773*(t1071*t6280 + t6287*t901);
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
  p_output1[72]=t5224*t5759 + t5684*t6332 + t5694*t6336 + t4594*t6351 - 0.18652*(t5789 + t5465*t6351) + 0.362968*(t5377*t5759 - 0.103955395616*t620*t6351) - 0.012773*(t1071*t5759 + t6351*t901);
  p_output1[73]=t6213*t6332 + t6336*t6406 + t5224*t6415 + t4594*t6424 - 0.18652*(-0.103955395616*t620*t6415 + t5465*t6424) + 0.362968*(t5377*t6415 - 0.103955395616*t620*t6424) - 0.012773*(t1071*t6415 + t6424*t901);
  p_output1[74]=t121*t2064*t6332 + t121*t2513*t6336 + t5224*t6457 + t4594*t6466 - 0.18652*(-0.103955395616*t620*t6457 + t5465*t6466) + 0.362968*(t5377*t6457 - 0.103955395616*t620*t6466) - 0.012773*(t1071*t6457 + t6466*t901);
  p_output1[75]=t121*t2479*t6508 + t5759*t6514 + t5783*t6521 - 0.012773*(0.104528*t142*t5759 + 0.994522*t142*t5783 - 1.0000001112680001*t121*t2479*t765) + 0.362968*(-0.994522*t121*t142*t2479 - 0.103955395616*t5759*t765 - 0.9890740084840001*t5783*t765) - 0.18652*(-0.104528*t121*t142*t2479 - 0.010926102783999999*t5759*t765 - 0.103955395616*t5783*t765);
  p_output1[76]=t121*t1353*t6508 + t6415*t6514 + t6521*t6562 - 0.012773*(0.104528*t142*t6415 + 0.994522*t142*t6562 - 1.0000001112680001*t121*t1353*t765) + 0.362968*(-0.994522*t121*t1353*t142 - 0.103955395616*t6415*t765 - 0.9890740084840001*t6562*t765) - 0.18652*(-0.104528*t121*t1353*t142 - 0.010926102783999999*t6415*t765 - 0.103955395616*t6562*t765);
  p_output1[77]=-1.*t2075*t6508 + t6457*t6514 + t6287*t6521 - 0.012773*(0.994522*t142*t6287 + 0.104528*t142*t6457 + 1.0000001112680001*t2075*t765) + 0.362968*(0.994522*t142*t2075 - 0.9890740084840001*t6287*t765 - 0.103955395616*t6457*t765) - 0.18652*(0.104528*t142*t2075 - 0.103955395616*t6287*t765 - 0.010926102783999999*t6457*t765);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jp_right_shoulder_pitch_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:21:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_right_shoulder_roll_src.h"

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
  double t568;
  double t1210;
  double t1561;
  double t1133;
  double t2292;
  double t2464;
  double t2904;
  double t2951;
  double t643;
  double t742;
  double t1557;
  double t1734;
  double t1933;
  double t2037;
  double t3024;
  double t3052;
  double t3130;
  double t3137;
  double t3192;
  double t3193;
  double t3203;
  double t3213;
  double t3240;
  double t3251;
  double t3349;
  double t3351;
  double t113;
  double t3965;
  double t3868;
  double t4065;
  double t4068;
  double t4136;
  double t4158;
  double t4166;
  double t4126;
  double t4169;
  double t4274;
  double t4354;
  double t4370;
  double t4513;
  double t1083;
  double t3181;
  double t3478;
  double t3485;
  double t3523;
  double t3549;
  double t3566;
  double t3678;
  double t4839;
  double t4841;
  double t4950;
  double t4954;
  double t5045;
  double t5073;
  double t4594;
  double t4639;
  double t4690;
  double t4692;
  double t4951;
  double t5080;
  double t5085;
  double t5103;
  double t5105;
  double t5150;
  double t5246;
  double t5253;
  double t5260;
  double t5280;
  double t5292;
  double t5295;
  double t5339;
  double t5343;
  double t5348;
  double t5349;
  double t5352;
  double t4316;
  double t4521;
  double t4567;
  double t4724;
  double t4786;
  double t4810;
  double t5347;
  double t5354;
  double t5360;
  double t5376;
  double t5380;
  double t5404;
  double t5091;
  double t5171;
  double t5181;
  double t5416;
  double t5417;
  double t5418;
  double t5199;
  double t5202;
  double t5207;
  double t5267;
  double t5296;
  double t5303;
  double t5326;
  double t5330;
  double t5334;
  t568 = Cos(var1[4]);
  t1210 = Cos(var1[24]);
  t1561 = Sin(var1[24]);
  t1133 = Cos(var1[5]);
  t2292 = 0.984808*t1210;
  t2464 = 0.173648*t1561;
  t2904 = t2292 + t2464;
  t2951 = Sin(var1[5]);
  t643 = Sin(var1[4]);
  t742 = 0. + t643;
  t1557 = 0.173648*t1210;
  t1734 = -0.984808*t1561;
  t1933 = t1557 + t1734;
  t2037 = t1133*t1933;
  t3024 = t2904*t2951;
  t3052 = 0. + t2037 + t3024;
  t3130 = t568*t3052;
  t3137 = 0. + t3130;
  t3192 = t1133*t2904;
  t3193 = -0.173648*t1210;
  t3203 = 0.984808*t1561;
  t3213 = t3193 + t3203;
  t3240 = t3213*t2951;
  t3251 = 0. + t3192 + t3240;
  t3349 = t568*t3251;
  t3351 = 0. + t3349;
  t113 = Cos(var1[3]);
  t3965 = Sin(var1[3]);
  t3868 = t113*t1133*t643;
  t4065 = t3965*t2951;
  t4068 = t3868 + t4065;
  t4136 = -1.*t1133*t3965;
  t4158 = t113*t643*t2951;
  t4166 = t4136 + t4158;
  t4126 = -1.*t1561*t4068;
  t4169 = t1210*t4166;
  t4274 = t4126 + t4169;
  t4354 = t1210*t4068;
  t4370 = t1561*t4166;
  t4513 = t4354 + t4370;
  t1083 = 0.0003*t742;
  t3181 = -0.00004*t3137;
  t3478 = 0.00001*t3351;
  t3485 = t1083 + t3181 + t3478;
  t3523 = -0.00004*t742;
  t3549 = 0.00075*t3137;
  t3566 = -0.00001*t3351;
  t3678 = t3523 + t3549 + t3566;
  t4839 = t1133*t3965*t643;
  t4841 = -1.*t113*t2951;
  t4950 = t4839 + t4841;
  t4954 = t113*t1133;
  t5045 = t3965*t643*t2951;
  t5073 = t4954 + t5045;
  t4594 = 0.00001*t742;
  t4639 = -0.00001*t3137;
  t4690 = 0.0007*t3351;
  t4692 = t4594 + t4639 + t4690;
  t4951 = -1.*t1561*t4950;
  t5080 = t1210*t5073;
  t5085 = t4951 + t5080;
  t5103 = t1210*t4950;
  t5105 = t1561*t5073;
  t5150 = t5103 + t5105;
  t5246 = -1.*t568*t1133*t1561;
  t5253 = t1210*t568*t2951;
  t5260 = t5246 + t5253;
  t5280 = t1210*t568*t1133;
  t5292 = t568*t1561*t2951;
  t5295 = t5280 + t5292;
  t5339 = -1.*t1933*t2951;
  t5343 = 0. + t3192 + t5339;
  t5348 = t1133*t3213;
  t5349 = -1.*t2904*t2951;
  t5352 = 0. + t5348 + t5349;
  t4316 = 0.984808*t4274;
  t4521 = 0.173648*t4513;
  t4567 = t4316 + t4521;
  t4724 = -0.173648*t4274;
  t4786 = 0.984808*t4513;
  t4810 = t4724 + t4786;
  t5347 = -0.00004*t5343;
  t5354 = 0.00001*t5352;
  t5360 = t5347 + t5354;
  t5376 = 0.00075*t5343;
  t5380 = -0.00001*t5352;
  t5404 = t5376 + t5380;
  t5091 = 0.984808*t5085;
  t5171 = 0.173648*t5150;
  t5181 = t5091 + t5171;
  t5416 = -0.00001*t5343;
  t5417 = 0.0007*t5352;
  t5418 = t5416 + t5417;
  t5199 = -0.173648*t5085;
  t5202 = 0.984808*t5150;
  t5207 = t5199 + t5202;
  t5267 = 0.984808*t5260;
  t5296 = 0.173648*t5295;
  t5303 = t5267 + t5296;
  t5326 = -0.173648*t5260;
  t5330 = 0.984808*t5295;
  t5334 = t5326 + t5330;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3678*t4567 + t4692*t4810 - 1.*t113*t3485*t568;
  p_output1[10]=t3678*t5181 + t4692*t5207 - 1.*t3485*t3965*t568;
  p_output1[11]=t3678*t5303 + t4692*t5334 + t3485*t643;
  p_output1[12]=t4567*t5404 + t4810*t5418 - 1.*t113*t5360*t568;
  p_output1[13]=t5181*t5404 + t5207*t5418 - 1.*t3965*t5360*t568;
  p_output1[14]=t5303*t5404 + t5334*t5418 + t5360*t643;
  p_output1[15]=0.00004*t4567 - 0.00001*t4810 + 0.0003*t113*t568;
  p_output1[16]=0.00004*t5181 - 0.00001*t5207 + 0.0003*t3965*t568;
  p_output1[17]=0.00004*t5303 - 0.00001*t5334 - 0.0003*t643;
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
  p_output1[72]=-0.00004*t4567 + 0.00001*t4810 - 0.0003*t113*t568;
  p_output1[73]=-0.00004*t5181 + 0.00001*t5207 - 0.0003*t3965*t568;
  p_output1[74]=-0.00004*t5303 + 0.00001*t5334 + 0.0003*t643;
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



void Jdq_AMWorld_right_shoulder_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

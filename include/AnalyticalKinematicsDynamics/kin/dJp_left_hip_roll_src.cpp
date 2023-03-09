/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:56:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_left_hip_roll_src.h"

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
  double t88;
  double t481;
  double t624;
  double t1031;
  double t1134;
  double t1181;
  double t651;
  double t724;
  double t729;
  double t784;
  double t3051;
  double t97;
  double t1191;
  double t1613;
  double t3200;
  double t3218;
  double t3228;
  double t3365;
  double t3485;
  double t3799;
  double t4397;
  double t4398;
  double t4403;
  double t4378;
  double t4379;
  double t4390;
  double t4461;
  double t4465;
  double t4466;
  double t3820;
  double t4657;
  double t4673;
  double t4676;
  double t4749;
  double t4752;
  double t4765;
  double t4413;
  double t4416;
  double t4423;
  double t4488;
  double t4569;
  double t4577;
  double t4608;
  double t4611;
  double t4621;
  double t4628;
  double t115;
  double t1077;
  double t1977;
  double t2002;
  double t2186;
  double t2208;
  double t2271;
  double t2480;
  double t2499;
  double t2843;
  double t2883;
  double t2977;
  double t3192;
  double t4554;
  double t4560;
  double t4563;
  double t4609;
  double t4641;
  double t4646;
  double t4840;
  double t4944;
  double t4947;
  double t4948;
  double t4950;
  double t4953;
  double t4959;
  double t4960;
  double t4961;
  double t4777;
  double t4715;
  double t4720;
  double t4722;
  double t3245;
  double t3817;
  double t3828;
  double t3856;
  double t4069;
  double t4086;
  double t4092;
  double t4336;
  double t4364;
  double t4454;
  double t4468;
  double t4469;
  double t4482;
  double t4483;
  double t4485;
  double t4489;
  double t4499;
  double t4514;
  double t4518;
  double t5041;
  double t5048;
  double t5049;
  double t5051;
  double t5055;
  double t5057;
  double t5059;
  double t5061;
  double t4682;
  double t4700;
  double t4704;
  double t4709;
  double t4713;
  double t4724;
  double t4736;
  double t5301;
  double t5302;
  double t5303;
  double t4440;
  double t4841;
  double t4843;
  double t4844;
  double t4845;
  double t4881;
  double t4886;
  double t5123;
  double t5126;
  double t5127;
  double t5128;
  double t5133;
  double t5137;
  double t5139;
  double t5147;
  double t5149;
  double t5150;
  double t5153;
  double t5165;
  double t5167;
  double t5168;
  double t5169;
  double t5171;
  double t5173;
  double t5174;
  double t5177;
  double t5179;
  double t5184;
  double t4920;
  double t4926;
  double t4927;
  double t4928;
  double t4929;
  double t4931;
  double t4934;
  double t4941;
  double t5258;
  double t5259;
  double t5260;
  double t5263;
  double t5269;
  double t5273;
  double t5276;
  double t4795;
  double t4801;
  double t4803;
  double t4392;
  double t4412;
  double t4424;
  double t4425;
  double t4442;
  double t4447;
  double t4450;
  double t5020;
  double t5021;
  double t5026;
  double t5027;
  double t5030;
  double t5034;
  double t5035;
  double t5039;
  double t4747;
  double t4766;
  double t4775;
  double t4784;
  double t4785;
  double t4812;
  double t4829;
  double t5300;
  double t5304;
  double t5308;
  double t5310;
  double t5313;
  double t5316;
  double t5317;
  double t5325;
  double t5327;
  double t5331;
  double t5357;
  double t5362;
  double t5363;
  double t5365;
  double t5366;
  double t5369;
  double t5373;
  double t5378;
  double t5379;
  double t5381;
  double t5382;
  double t5190;
  double t5203;
  double t5204;
  double t5210;
  double t5213;
  double t5218;
  double t5225;
  double t5238;
  double t5240;
  double t5241;
  double t5244;
  t88 = Sin(var1[3]);
  t481 = Cos(var1[4]);
  t624 = Cos(var1[6]);
  t1031 = Sin(var1[5]);
  t1134 = Cos(var1[5]);
  t1181 = Sin(var1[6]);
  t651 = -1.*t624;
  t724 = 1. + t651;
  t729 = 0.091*t724;
  t784 = 0. + t729;
  t3051 = Cos(var1[3]);
  t97 = Sin(var1[4]);
  t1191 = 0.091*t1181;
  t1613 = 0. + t1191;
  t3200 = t1134*t88;
  t3218 = -1.*t3051*t97*t1031;
  t3228 = t3200 + t3218;
  t3365 = -1.*t3051*t1134*t97;
  t3485 = -1.*t88*t1031;
  t3799 = t3365 + t3485;
  t4397 = -1.*t3051*t1134;
  t4398 = -1.*t88*t97*t1031;
  t4403 = t4397 + t4398;
  t4378 = -1.*t1134*t88*t97;
  t4379 = t3051*t1031;
  t4390 = t4378 + t4379;
  t4461 = t3051*t1134;
  t4465 = t88*t97*t1031;
  t4466 = t4461 + t4465;
  t3820 = t624*t3228;
  t4657 = t3051*t1134*t97;
  t4673 = t88*t1031;
  t4676 = t4657 + t4673;
  t4749 = -1.*t1134*t88;
  t4752 = t3051*t97*t1031;
  t4765 = t4749 + t4752;
  t4413 = t624*t4403;
  t4416 = -1.*t4390*t1181;
  t4423 = t4413 + t4416;
  t4488 = t624*t4390;
  t4569 = t3051*t481*t624*t1031;
  t4577 = -1.*t3051*t481*t1134*t1181;
  t4608 = t4569 + t4577;
  t4611 = t3051*t481*t1134*t624;
  t4621 = t3051*t481*t1031*t1181;
  t4628 = t4611 + t4621;
  t115 = -0.03244*t88*t97;
  t1077 = -1.*t481*t784*t88*t1031;
  t1977 = -1.*t481*t1134*t88*t1613;
  t2002 = -1.*t481*t624*t88*t1031;
  t2186 = t481*t1134*t88*t1181;
  t2208 = t2002 + t2186;
  t2271 = 0.091945*t2208;
  t2480 = -1.*t481*t1134*t624*t88;
  t2499 = -1.*t481*t88*t1031*t1181;
  t2843 = t2480 + t2499;
  t2883 = -0.001745*t2843;
  t2977 = t115 + t1077 + t1977 + t2271 + t2883;
  t3192 = 0.03244*t3051*t481;
  t4554 = 0.03244*t3051*t97;
  t4560 = t3051*t481*t784*t1031;
  t4563 = t3051*t481*t1134*t1613;
  t4609 = 0.091945*t4608;
  t4641 = -0.001745*t4628;
  t4646 = t4554 + t4560 + t4563 + t4609 + t4641;
  t4840 = 0.03244*t481*t88;
  t4944 = t3051*t481*t1134*t784;
  t4947 = -1.*t3051*t481*t1031*t1613;
  t4948 = -1.*t3051*t481*t624*t1031;
  t4950 = t3051*t481*t1134*t1181;
  t4953 = t4948 + t4950;
  t4959 = -0.001745*t4953;
  t4960 = 0.091945*t4628;
  t4961 = t4944 + t4947 + t4959 + t4960;
  t4777 = -1.*t4676*t1181;
  t4715 = t624*t4676;
  t4720 = -1.*t3228*t1181;
  t4722 = t4715 + t4720;
  t3245 = t784*t3228;
  t3817 = t3799*t1613;
  t3828 = -1.*t3799*t1181;
  t3856 = t3820 + t3828;
  t4069 = 0.091945*t3856;
  t4086 = t624*t3799;
  t4092 = t3228*t1181;
  t4336 = t4086 + t4092;
  t4364 = -0.001745*t4336;
  t4454 = t784*t4390;
  t4468 = t4466*t1613;
  t4469 = t624*t4466;
  t4482 = t4390*t1181;
  t4483 = t4469 + t4482;
  t4485 = -0.001745*t4483;
  t4489 = -1.*t4466*t1181;
  t4499 = t4488 + t4489;
  t4514 = 0.091945*t4499;
  t4518 = t4454 + t4468 + t4485 + t4514;
  t5041 = t481*t1134*t784*t88;
  t5048 = -1.*t481*t88*t1031*t1613;
  t5049 = -0.001745*t2208;
  t5051 = t481*t1134*t624*t88;
  t5055 = t481*t88*t1031*t1181;
  t5057 = t5051 + t5055;
  t5059 = 0.091945*t5057;
  t5061 = t5041 + t5048 + t5049 + t5059;
  t4682 = t784*t4676;
  t4700 = t3228*t1613;
  t4704 = t4676*t1181;
  t4709 = t3820 + t4704;
  t4713 = -0.001745*t4709;
  t4724 = 0.091945*t4722;
  t4736 = t4682 + t4700 + t4713 + t4724;
  t5301 = t1134*t88*t97;
  t5302 = -1.*t3051*t1031;
  t5303 = t5301 + t5302;
  t4440 = -1.*t4403*t1181;
  t4841 = t784*t4403;
  t4843 = t4390*t1613;
  t4844 = 0.091945*t4423;
  t4845 = t4403*t1181;
  t4881 = t4488 + t4845;
  t4886 = -0.001745*t4881;
  t5123 = -1.*t481*t784*t1031;
  t5126 = -1.*t481*t1134*t1613;
  t5127 = -1.*t481*t624*t1031;
  t5128 = t481*t1134*t1181;
  t5133 = t5127 + t5128;
  t5137 = 0.091945*t5133;
  t5139 = -1.*t481*t1134*t624;
  t5147 = -1.*t481*t1031*t1181;
  t5149 = t5139 + t5147;
  t5150 = -0.001745*t5149;
  t5153 = -1.*t1134*t784*t97;
  t5165 = t97*t1031*t1613;
  t5167 = t624*t97*t1031;
  t5168 = -1.*t1134*t97*t1181;
  t5169 = t5167 + t5168;
  t5171 = -0.001745*t5169;
  t5173 = -1.*t1134*t624*t97;
  t5174 = -1.*t97*t1031*t1181;
  t5177 = t5173 + t5174;
  t5179 = 0.091945*t5177;
  t5184 = t5153 + t5165 + t5171 + t5179;
  t4920 = 0.091*t3051*t481*t1134*t624;
  t4926 = 0.091*t3051*t481*t1031*t1181;
  t4927 = -0.001745*t4608;
  t4928 = -1.*t3051*t481*t1134*t624;
  t4929 = -1.*t3051*t481*t1031*t1181;
  t4931 = t4928 + t4929;
  t4934 = 0.091945*t4931;
  t4941 = t4920 + t4926 + t4927 + t4934;
  t5258 = 0.091*t624*t3228;
  t5259 = 0.091*t4676*t1181;
  t5260 = -1.*t624*t3228;
  t5263 = t5260 + t4777;
  t5269 = 0.091945*t5263;
  t5273 = -0.001745*t4722;
  t5276 = t5258 + t5259 + t5269 + t5273;
  t4795 = -1.*t624*t4676;
  t4801 = -1.*t4765*t1181;
  t4803 = t4795 + t4801;
  t4392 = 0.091*t624*t4390;
  t4412 = 0.091*t4403*t1181;
  t4424 = -0.001745*t4423;
  t4425 = -1.*t624*t4390;
  t4442 = t4425 + t4440;
  t4447 = 0.091945*t4442;
  t4450 = t4392 + t4412 + t4424 + t4447;
  t5020 = 0.091*t481*t1134*t624*t88;
  t5021 = 0.091*t481*t88*t1031*t1181;
  t5026 = t481*t624*t88*t1031;
  t5027 = -1.*t481*t1134*t88*t1181;
  t5030 = t5026 + t5027;
  t5034 = -0.001745*t5030;
  t5035 = 0.091945*t2843;
  t5039 = t5020 + t5021 + t5034 + t5035;
  t4747 = 0.091*t624*t4676;
  t4766 = 0.091*t4765*t1181;
  t4775 = t624*t4765;
  t4784 = t4775 + t4777;
  t4785 = -0.001745*t4784;
  t4812 = 0.091945*t4803;
  t4829 = t4747 + t4766 + t4785 + t4812;
  t5300 = 0.091*t624*t4403;
  t5304 = 0.091*t5303*t1181;
  t5308 = -1.*t624*t4403;
  t5310 = -1.*t5303*t1181;
  t5313 = t5308 + t5310;
  t5316 = 0.091945*t5313;
  t5317 = t624*t5303;
  t5325 = t5317 + t4440;
  t5327 = -0.001745*t5325;
  t5331 = t5300 + t5304 + t5316 + t5327;
  t5357 = -0.091*t481*t624*t1031;
  t5362 = 0.091*t481*t1134*t1181;
  t5363 = t481*t624*t1031;
  t5365 = -1.*t481*t1134*t1181;
  t5366 = t5363 + t5365;
  t5369 = 0.091945*t5366;
  t5373 = t481*t1134*t624;
  t5378 = t481*t1031*t1181;
  t5379 = t5373 + t5378;
  t5381 = -0.001745*t5379;
  t5382 = t5357 + t5362 + t5369 + t5381;
  t5190 = -0.091*t1134*t624*t97;
  t5203 = -0.091*t97*t1031*t1181;
  t5204 = -1.*t624*t97*t1031;
  t5210 = t1134*t97*t1181;
  t5213 = t5204 + t5210;
  t5218 = -0.001745*t5213;
  t5225 = t1134*t624*t97;
  t5238 = t97*t1031*t1181;
  t5240 = t5225 + t5238;
  t5241 = 0.091945*t5240;
  t5244 = t5190 + t5203 + t5218 + t5241;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t3192 + t3245 + t3817 + t4069 + t4364)*var2[3] + t2977*var2[4] + t4518*var2[5] + t4450*var2[6];
  p_output1[10]=(t4840 + t4841 + t4843 + t4844 + t4886)*var2[3] + t4646*var2[4] + t4736*var2[5] + t4829*var2[6];
  p_output1[11]=0;
  p_output1[12]=t2977*var2[3] + (t3192 - 1.*t1134*t1613*t3051*t97 - 1.*t1031*t3051*t784*t97 + 0.091945*(t1134*t1181*t3051*t97 - 1.*t1031*t3051*t624*t97) - 0.001745*(-1.*t1031*t1181*t3051*t97 - 1.*t1134*t3051*t624*t97))*var2[4] + t4961*var2[5] + t4941*var2[6];
  p_output1[13]=t4646*var2[3] + (t4840 - 1.*t1134*t1613*t88*t97 - 1.*t1031*t784*t88*t97 + 0.091945*(t1134*t1181*t88*t97 - 1.*t1031*t624*t88*t97) - 0.001745*(-1.*t1031*t1181*t88*t97 - 1.*t1134*t624*t88*t97))*var2[4] + t5061*var2[5] + t5039*var2[6];
  p_output1[14]=(t5123 + t5126 + t5137 + t5150 - 0.03244*t97)*var2[4] + t5184*var2[5] + t5244*var2[6];
  p_output1[15]=t4518*var2[3] + t4961*var2[4] + (t3245 + t3817 + t4069 + t4364)*var2[5] + t5276*var2[6];
  p_output1[16]=t4736*var2[3] + t5061*var2[4] + (t4841 + t4843 + t4844 + t4886)*var2[5] + t5331*var2[6];
  p_output1[17]=t5184*var2[4] + (t5123 + t5126 + t5137 + t5150)*var2[5] + t5382*var2[6];
  p_output1[18]=t4450*var2[3] + t4941*var2[4] + t5276*var2[5] + (-0.091*t1181*t4676 - 0.001745*t4803 + 0.091*t4765*t624 + 0.091945*(t4704 - 1.*t4765*t624))*var2[6];
  p_output1[19]=t4829*var2[3] + t5039*var2[4] + t5331*var2[5] + (-0.091*t1181*t5303 + 0.091*t4466*t624 + 0.091945*(t1181*t5303 - 1.*t4466*t624) - 0.001745*(t4489 - 1.*t5303*t624))*var2[6];
  p_output1[20]=t5244*var2[4] + t5382*var2[5] + (-0.091*t1134*t1181*t481 + t5137 + t5150 + 0.091*t1031*t481*t624)*var2[6];
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



void dJp_left_hip_roll_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

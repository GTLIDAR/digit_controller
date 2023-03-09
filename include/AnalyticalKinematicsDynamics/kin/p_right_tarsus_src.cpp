/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 21:10:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_right_tarsus_src.h"

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
  double t616;
  double t66;
  double t1043;
  double t1357;
  double t1050;
  double t1412;
  double t190;
  double t386;
  double t444;
  double t852;
  double t1138;
  double t1439;
  double t1464;
  double t1482;
  double t1635;
  double t1659;
  double t1689;
  double t172;
  double t2286;
  double t2394;
  double t1980;
  double t1990;
  double t2095;
  double t2430;
  double t2481;
  double t2483;
  double t2561;
  double t2612;
  double t2660;
  double t2684;
  double t1899;
  double t1944;
  double t705;
  double t737;
  double t757;
  double t770;
  double t3879;
  double t3493;
  double t3494;
  double t2802;
  double t2852;
  double t2871;
  double t2924;
  double t2927;
  double t2930;
  double t3428;
  double t3461;
  double t3255;
  double t3279;
  double t3286;
  double t3305;
  double t3320;
  double t3333;
  double t3551;
  double t3600;
  double t3622;
  double t3626;
  double t3628;
  double t3640;
  double t3780;
  double t3835;
  double t3836;
  double t2746;
  double t2749;
  double t3157;
  double t3204;
  double t4598;
  double t4603;
  double t4025;
  double t4042;
  double t4062;
  double t4086;
  double t4102;
  double t4120;
  double t4284;
  double t4293;
  double t4338;
  double t4358;
  double t4385;
  double t4463;
  double t4634;
  double t4670;
  double t4713;
  double t4715;
  double t4721;
  double t4722;
  double t4777;
  double t4781;
  double t4783;
  double t4831;
  double t4191;
  double t4209;
  double t3919;
  double t3925;
  double t3941;
  double t3950;
  double t5309;
  double t5336;
  double t4916;
  double t4917;
  double t4920;
  double t4948;
  double t4986;
  double t5003;
  double t5283;
  double t5295;
  double t5182;
  double t5193;
  double t5195;
  double t5206;
  double t5225;
  double t5237;
  double t5398;
  double t5405;
  double t5439;
  double t5441;
  double t5462;
  double t5463;
  double t4845;
  double t4864;
  double t5080;
  double t5147;
  double t453;
  double t741;
  double t782;
  double t795;
  double t887;
  double t1003;
  double t1485;
  double t1531;
  double t1590;
  double t1601;
  double t1866;
  double t1871;
  double t1965;
  double t1972;
  double t5801;
  double t5802;
  double t5814;
  double t5821;
  double t5875;
  double t5881;
  double t2131;
  double t2191;
  double t2419;
  double t2420;
  double t2553;
  double t2667;
  double t2783;
  double t2796;
  double t5892;
  double t5895;
  double t5920;
  double t5945;
  double t5952;
  double t5964;
  double t3112;
  double t3128;
  double t3214;
  double t3237;
  double t3411;
  double t3466;
  double t3531;
  double t3538;
  double t3837;
  double t3936;
  double t3970;
  double t4003;
  double t5971;
  double t5980;
  double t5982;
  double t5996;
  double t5999;
  double t6006;
  double t6007;
  double t6025;
  double t6063;
  double t6065;
  double t6067;
  double t6068;
  double t4180;
  double t4183;
  double t4249;
  double t4267;
  double t4506;
  double t4535;
  double t4605;
  double t4616;
  double t4744;
  double t4785;
  double t4907;
  double t4912;
  double t6078;
  double t6084;
  double t6092;
  double t6102;
  double t6150;
  double t6153;
  double t6155;
  double t6157;
  double t6189;
  double t6191;
  double t6193;
  double t6202;
  double t5026;
  double t5050;
  double t5158;
  double t5168;
  double t5265;
  double t5299;
  double t5365;
  double t5381;
  double t6213;
  double t6217;
  double t6222;
  double t6239;
  double t6251;
  double t6254;
  double t6255;
  double t6256;
  double t5523;
  double t5526;
  double t6264;
  double t6275;
  double t6284;
  double t6290;
  double t5652;
  double t5654;
  double t5704;
  double t5706;
  double t6455;
  double t6460;
  double t6461;
  double t6464;
  double t6470;
  double t6475;
  double t6485;
  double t6489;
  double t6490;
  double t6513;
  double t6533;
  double t6555;
  double t6561;
  double t6565;
  double t6571;
  double t6585;
  double t6586;
  double t6587;
  double t6608;
  double t6628;
  double t6630;
  double t6641;
  double t6643;
  double t6648;
  double t6663;
  double t6667;
  double t6676;
  double t6681;
  double t6686;
  double t6691;
  double t6696;
  double t6711;
  double t6735;
  double t6739;
  double t6753;
  double t6755;
  double t6763;
  double t6765;
  double t6774;
  double t6776;
  double t6777;
  double t6778;
  t616 = Sin(var1[18]);
  t66 = Cos(var1[3]);
  t1043 = Cos(var1[5]);
  t1357 = Sin(var1[3]);
  t1050 = Sin(var1[4]);
  t1412 = Sin(var1[5]);
  t190 = Cos(var1[18]);
  t386 = -1.*t190;
  t444 = 1. + t386;
  t852 = Sin(var1[17]);
  t1138 = t66*t1043*t1050;
  t1439 = t1357*t1412;
  t1464 = t1138 + t1439;
  t1482 = Cos(var1[17]);
  t1635 = -1.*t1043*t1357;
  t1659 = t66*t1050*t1412;
  t1689 = t1635 + t1659;
  t172 = Cos(var1[4]);
  t2286 = -0.366501*t616;
  t2394 = 0. + t2286;
  t1980 = -1.*t852*t1464;
  t1990 = t1482*t1689;
  t2095 = t1980 + t1990;
  t2430 = t1482*t1464;
  t2481 = t852*t1689;
  t2483 = t2430 + t2481;
  t2561 = Cos(var1[19]);
  t2612 = -1.*t2561;
  t2660 = 1. + t2612;
  t2684 = Sin(var1[19]);
  t1899 = 0.930418*t616;
  t1944 = 0. + t1899;
  t705 = -0.930418*t616;
  t737 = 0. + t705;
  t757 = 0.366501*t616;
  t770 = 0. + t757;
  t3879 = Sin(var1[20]);
  t3493 = 0.930418*t2684;
  t3494 = 0. + t3493;
  t2802 = t66*t172*t2394;
  t2852 = 0.340999127418*t444*t2095;
  t2871 = -0.134322983001*t444;
  t2924 = 1. + t2871;
  t2927 = t2924*t2483;
  t2930 = t2802 + t2852 + t2927;
  t3428 = 0.366501*t2684;
  t3461 = 0. + t3428;
  t3255 = t66*t172*t1944;
  t3279 = -0.8656776547239999*t444;
  t3286 = 1. + t3279;
  t3305 = t3286*t2095;
  t3320 = 0.340999127418*t444*t2483;
  t3333 = t3255 + t3305 + t3320;
  t3551 = -1.000000637725*t444;
  t3600 = 1. + t3551;
  t3622 = t3600*t66*t172;
  t3626 = t737*t2095;
  t3628 = t770*t2483;
  t3640 = t3622 + t3626 + t3628;
  t3780 = Cos(var1[20]);
  t3835 = -1.*t3780;
  t3836 = 1. + t3835;
  t2746 = -0.930418*t2684;
  t2749 = 0. + t2746;
  t3157 = -0.366501*t2684;
  t3204 = 0. + t3157;
  t4598 = 0.366501*t3879;
  t4603 = 0. + t4598;
  t4025 = t3494*t2930;
  t4042 = t3461*t3333;
  t4062 = -1.000000637725*t2660;
  t4086 = 1. + t4062;
  t4102 = t4086*t3640;
  t4120 = t4025 + t4042 + t4102;
  t4284 = -0.8656776547239999*t2660;
  t4293 = 1. + t4284;
  t4338 = t4293*t2930;
  t4358 = -0.340999127418*t2660*t3333;
  t4385 = t2749*t3640;
  t4463 = t4338 + t4358 + t4385;
  t4634 = -0.340999127418*t2660*t2930;
  t4670 = -0.134322983001*t2660;
  t4713 = 1. + t4670;
  t4715 = t4713*t3333;
  t4721 = t3204*t3640;
  t4722 = t4634 + t4715 + t4721;
  t4777 = Cos(var1[21]);
  t4781 = -1.*t4777;
  t4783 = 1. + t4781;
  t4831 = Sin(var1[21]);
  t4191 = 0.930418*t3879;
  t4209 = 0. + t4191;
  t3919 = -0.930418*t3879;
  t3925 = 0. + t3919;
  t3941 = -0.366501*t3879;
  t3950 = 0. + t3941;
  t5309 = -0.366501*t4831;
  t5336 = 0. + t5309;
  t4916 = t4603*t4120;
  t4917 = -0.340999127418*t3836*t4463;
  t4920 = -0.134322983001*t3836;
  t4948 = 1. + t4920;
  t4986 = t4948*t4722;
  t5003 = t4916 + t4917 + t4986;
  t5283 = -0.930418*t4831;
  t5295 = 0. + t5283;
  t5182 = t4209*t4120;
  t5193 = -0.8656776547239999*t3836;
  t5195 = 1. + t5193;
  t5206 = t5195*t4463;
  t5225 = -0.340999127418*t3836*t4722;
  t5237 = t5182 + t5206 + t5225;
  t5398 = -1.000000637725*t3836;
  t5405 = 1. + t5398;
  t5439 = t5405*t4120;
  t5441 = t3925*t4463;
  t5462 = t3950*t4722;
  t5463 = t5439 + t5441 + t5462;
  t4845 = 0.366501*t4831;
  t4864 = 0. + t4845;
  t5080 = 0.930418*t4831;
  t5147 = 0. + t5080;
  t453 = -0.04500040093286238*t444;
  t741 = -0.07877663122399998*t737;
  t782 = 0.031030906668*t770;
  t795 = 0. + t453 + t741 + t782;
  t887 = -0.091*t852;
  t1003 = 0. + t887;
  t1485 = -1.*t1482;
  t1531 = 1. + t1485;
  t1590 = -0.091*t1531;
  t1601 = 0. + t1590;
  t1866 = 1.296332362046933e-7*var1[18];
  t1871 = -0.07877668146182712*t444;
  t1965 = -0.045000372235*t1944;
  t1972 = t1866 + t1871 + t1965;
  t5801 = t1043*t1357*t1050;
  t5802 = -1.*t66*t1412;
  t5814 = t5801 + t5802;
  t5821 = t66*t1043;
  t5875 = t1357*t1050*t1412;
  t5881 = t5821 + t5875;
  t2131 = 3.2909349868922137e-7*var1[18];
  t2191 = 0.03103092645718495*t444;
  t2419 = -0.045000372235*t2394;
  t2420 = t2131 + t2191 + t2419;
  t2553 = -1.296332362046933e-7*var1[19];
  t2667 = -0.14128592423750855*t2660;
  t2783 = -0.045000372235*t2749;
  t2796 = t2553 + t2667 + t2783;
  t5892 = -1.*t852*t5814;
  t5895 = t1482*t5881;
  t5920 = t5892 + t5895;
  t5945 = t1482*t5814;
  t5952 = t852*t5881;
  t5964 = t5945 + t5952;
  t3112 = 3.2909349868922137e-7*var1[19];
  t3128 = -0.055653945343889656*t2660;
  t3214 = -0.045000372235*t3204;
  t3237 = t3112 + t3128 + t3214;
  t3411 = -0.04500040093286238*t2660;
  t3466 = -0.055653909852*t3461;
  t3531 = -0.141285834136*t3494;
  t3538 = 0. + t3411 + t3466 + t3531;
  t3837 = 0.039853038461262744*t3836;
  t3936 = -0.22023459268999998*t3925;
  t3970 = -0.086752619205*t3950;
  t4003 = 0. + t3837 + t3936 + t3970;
  t5971 = t172*t2394*t1357;
  t5980 = 0.340999127418*t444*t5920;
  t5982 = t2924*t5964;
  t5996 = t5971 + t5980 + t5982;
  t5999 = t172*t1944*t1357;
  t6006 = t3286*t5920;
  t6007 = 0.340999127418*t444*t5964;
  t6025 = t5999 + t6006 + t6007;
  t6063 = t3600*t172*t1357;
  t6065 = t737*t5920;
  t6067 = t770*t5964;
  t6068 = t6063 + t6065 + t6067;
  t4180 = 6.295460977284962e-8*var1[20];
  t4183 = -0.22023473313910558*t3836;
  t4249 = 0.039853013046*t4209;
  t4267 = t4180 + t4183 + t4249;
  t4506 = -1.5981976069815686e-7*var1[20];
  t4535 = -0.08675267452931407*t3836;
  t4605 = 0.039853013046*t4603;
  t4616 = t4506 + t4535 + t4605;
  t4744 = 5.7930615939377813e-8*var1[21];
  t4785 = -0.23261833304643187*t4783;
  t4907 = -0.262809976934*t4864;
  t4912 = t4744 + t4785 + t4907;
  t6078 = t3494*t5996;
  t6084 = t3461*t6025;
  t6092 = t4086*t6068;
  t6102 = t6078 + t6084 + t6092;
  t6150 = t4293*t5996;
  t6153 = -0.340999127418*t2660*t6025;
  t6155 = t2749*t6068;
  t6157 = t6150 + t6153 + t6155;
  t6189 = -0.340999127418*t2660*t5996;
  t6191 = t4713*t6025;
  t6193 = t3204*t6068;
  t6202 = t6189 + t6191 + t6193;
  t5026 = -2.281945176511838e-8*var1[21];
  t5050 = -0.5905366811997648*t4783;
  t5158 = -0.262809976934*t5147;
  t5168 = t5026 + t5050 + t5158;
  t5265 = -0.26281014453449253*t4783;
  t5299 = -0.5905363046000001*t5295;
  t5365 = -0.23261818470000004*t5336;
  t5381 = 0. + t5265 + t5299 + t5365;
  t6213 = t4603*t6102;
  t6217 = -0.340999127418*t3836*t6157;
  t6222 = t4948*t6202;
  t6239 = t6213 + t6217 + t6222;
  t6251 = t4209*t6102;
  t6254 = t5195*t6157;
  t6255 = -0.340999127418*t3836*t6202;
  t6256 = t6251 + t6254 + t6255;
  t5523 = -1.000000637725*t4783;
  t5526 = 1. + t5523;
  t6264 = t5405*t6102;
  t6275 = t3925*t6157;
  t6284 = t3950*t6202;
  t6290 = t6264 + t6275 + t6284;
  t5652 = -0.134322983001*t4783;
  t5654 = 1. + t5652;
  t5704 = -0.8656776547239999*t4783;
  t5706 = 1. + t5704;
  t6455 = -1.*t172*t1043*t852;
  t6460 = t1482*t172*t1412;
  t6461 = t6455 + t6460;
  t6464 = t1482*t172*t1043;
  t6470 = t172*t852*t1412;
  t6475 = t6464 + t6470;
  t6485 = -1.*t2394*t1050;
  t6489 = 0.340999127418*t444*t6461;
  t6490 = t2924*t6475;
  t6513 = t6485 + t6489 + t6490;
  t6533 = -1.*t1944*t1050;
  t6555 = t3286*t6461;
  t6561 = 0.340999127418*t444*t6475;
  t6565 = t6533 + t6555 + t6561;
  t6571 = -1.*t3600*t1050;
  t6585 = t737*t6461;
  t6586 = t770*t6475;
  t6587 = t6571 + t6585 + t6586;
  t6608 = t3494*t6513;
  t6628 = t3461*t6565;
  t6630 = t4086*t6587;
  t6641 = t6608 + t6628 + t6630;
  t6643 = t4293*t6513;
  t6648 = -0.340999127418*t2660*t6565;
  t6663 = t2749*t6587;
  t6667 = t6643 + t6648 + t6663;
  t6676 = -0.340999127418*t2660*t6513;
  t6681 = t4713*t6565;
  t6686 = t3204*t6587;
  t6691 = t6676 + t6681 + t6686;
  t6696 = t4603*t6641;
  t6711 = -0.340999127418*t3836*t6667;
  t6735 = t4948*t6691;
  t6739 = t6696 + t6711 + t6735;
  t6753 = t4209*t6641;
  t6755 = t5195*t6667;
  t6763 = -0.340999127418*t3836*t6691;
  t6765 = t6753 + t6755 + t6763;
  t6774 = t5405*t6641;
  t6776 = t3925*t6667;
  t6777 = t3950*t6691;
  t6778 = t6774 + t6776 + t6777;
  p_output1[0]=0. + t1003*t1464 + t1601*t1689 + t1972*t2095 + t2420*t2483 + t2796*t2930 + t3237*t3333 + t3538*t3640 + t4003*t4120 + t4267*t4463 + t4616*t4722 + t4912*t5003 + t5168*t5237 + t5381*t5463 - 0.277485*(t5237*t5295 + t5003*t5336 + t5463*t5526) - 0.319547*(-0.340999127418*t4783*t5237 + t4864*t5463 + t5003*t5654) - 0.58342*(-0.340999127418*t4783*t5003 + t5147*t5463 + t5237*t5706) + t172*t66*t795 + var1[0];
  p_output1[1]=0. + t1003*t5814 + t1601*t5881 + t1972*t5920 + t2420*t5964 + t2796*t5996 + t3237*t6025 + t3538*t6068 + t4003*t6102 + t4267*t6157 + t4616*t6202 + t4912*t6239 + t5168*t6256 + t5381*t6290 - 0.319547*(t5654*t6239 - 0.340999127418*t4783*t6256 + t4864*t6290) - 0.58342*(-0.340999127418*t4783*t6239 + t5706*t6256 + t5147*t6290) - 0.277485*(t5336*t6239 + t5295*t6256 + t5526*t6290) + t1357*t172*t795 + var1[1];
  p_output1[2]=0. + t1003*t1043*t172 + t1412*t1601*t172 + t1972*t6461 + t2420*t6475 + t2796*t6513 + t3237*t6565 + t3538*t6587 + t4003*t6641 + t4267*t6667 + t4616*t6691 + t4912*t6739 + t5168*t6765 + t5381*t6778 - 0.319547*(t5654*t6739 - 0.340999127418*t4783*t6765 + t4864*t6778) - 0.58342*(-0.340999127418*t4783*t6739 + t5706*t6765 + t5147*t6778) - 0.277485*(t5336*t6739 + t5295*t6765 + t5526*t6778) - 1.*t1050*t795 + var1[2];
}



void p_right_tarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

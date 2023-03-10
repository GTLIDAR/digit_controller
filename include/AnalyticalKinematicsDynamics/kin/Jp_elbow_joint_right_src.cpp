/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:55:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_elbow_joint_right_src.h"

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
  double t511;
  double t878;
  double t933;
  double t1000;
  double t1011;
  double t1098;
  double t1329;
  double t1237;
  double t1244;
  double t1346;
  double t83;
  double t95;
  double t310;
  double t1258;
  double t1430;
  double t1465;
  double t1914;
  double t2080;
  double t2186;
  double t3241;
  double t3249;
  double t3268;
  double t3306;
  double t16;
  double t3045;
  double t3072;
  double t2914;
  double t2938;
  double t2961;
  double t3171;
  double t3178;
  double t3183;
  double t3303;
  double t2436;
  double t2559;
  double t3637;
  double t3381;
  double t608;
  double t770;
  double t793;
  double t854;
  double t4055;
  double t3956;
  double t3462;
  double t3498;
  double t3606;
  double t3608;
  double t3610;
  double t3611;
  double t3912;
  double t3849;
  double t3853;
  double t3857;
  double t3875;
  double t3878;
  double t3883;
  double t3990;
  double t4006;
  double t4008;
  double t4009;
  double t4011;
  double t4016;
  double t4036;
  double t4039;
  double t4044;
  double t3307;
  double t4159;
  double t3412;
  double t4319;
  double t3772;
  double t4199;
  double t3642;
  double t4404;
  double t4435;
  double t4192;
  double t4197;
  double t4201;
  double t4203;
  double t4208;
  double t4212;
  double t4220;
  double t4222;
  double t4277;
  double t4297;
  double t4308;
  double t4333;
  double t4357;
  double t4358;
  double t4380;
  double t4383;
  double t4514;
  double t4540;
  double t4552;
  double t4570;
  double t4573;
  double t4576;
  double t4589;
  double t4592;
  double t4268;
  double t4270;
  double t4123;
  double t4139;
  double t4059;
  double t4081;
  double t497;
  double t779;
  double t855;
  double t872;
  double t1038;
  double t1128;
  double t1187;
  double t1761;
  double t1833;
  double t1913;
  double t2253;
  double t2370;
  double t2600;
  double t2730;
  double t4793;
  double t4799;
  double t4800;
  double t4806;
  double t4807;
  double t4816;
  double t3013;
  double t3039;
  double t3148;
  double t3153;
  double t3235;
  double t3287;
  double t3339;
  double t3366;
  double t3415;
  double t3430;
  double t3452;
  double t4822;
  double t4830;
  double t4832;
  double t4847;
  double t4864;
  double t4866;
  double t3620;
  double t3631;
  double t3649;
  double t3705;
  double t3785;
  double t3832;
  double t3848;
  double t3904;
  double t3909;
  double t3941;
  double t3942;
  double t3984;
  double t3986;
  double t3989;
  double t4047;
  double t4115;
  double t4152;
  double t4155;
  double t4877;
  double t4891;
  double t4893;
  double t4898;
  double t4911;
  double t4930;
  double t4939;
  double t4943;
  double t4966;
  double t4969;
  double t4970;
  double t4975;
  double t4242;
  double t4256;
  double t4272;
  double t4274;
  double t4394;
  double t4402;
  double t4470;
  double t4494;
  double t4978;
  double t4979;
  double t4982;
  double t4987;
  double t5003;
  double t5005;
  double t5010;
  double t5015;
  double t4619;
  double t4621;
  double t5033;
  double t5038;
  double t5044;
  double t5047;
  double t4673;
  double t4674;
  double t4702;
  double t4708;
  double t5275;
  double t5281;
  double t5285;
  double t5303;
  double t5309;
  double t5320;
  double t5327;
  double t5342;
  double t5348;
  double t5361;
  double t5369;
  double t5385;
  double t5388;
  double t5394;
  double t5399;
  double t5403;
  double t5407;
  double t5411;
  double t5429;
  double t5450;
  double t5453;
  double t5454;
  double t5471;
  double t5480;
  double t5487;
  double t5490;
  double t5492;
  double t5499;
  double t5510;
  double t5528;
  double t5700;
  double t5708;
  double t5710;
  double t5717;
  double t5720;
  double t5723;
  double t5753;
  double t5755;
  double t5759;
  double t5765;
  double t5789;
  double t5798;
  double t5800;
  double t5815;
  double t5821;
  double t5828;
  double t5833;
  double t5836;
  double t5839;
  double t5840;
  double t5841;
  double t5843;
  double t5854;
  double t5855;
  double t5862;
  double t5880;
  double t5895;
  double t5896;
  double t5904;
  double t5909;
  double t5981;
  double t5986;
  double t6000;
  double t6004;
  double t6011;
  double t6021;
  double t6028;
  double t6029;
  double t6032;
  double t6038;
  double t6044;
  double t6046;
  double t6058;
  double t6079;
  double t6102;
  double t6115;
  double t6118;
  double t6127;
  double t6135;
  double t6136;
  double t6144;
  double t6145;
  double t6156;
  double t6160;
  double t6169;
  double t6171;
  double t6183;
  double t6186;
  double t6194;
  double t6200;
  double t6283;
  double t6294;
  double t6301;
  double t6305;
  double t6309;
  double t6316;
  double t6341;
  double t6350;
  double t6357;
  double t6358;
  double t6359;
  double t6377;
  double t6383;
  double t6385;
  double t6394;
  double t6400;
  double t6402;
  double t6408;
  double t6413;
  double t6417;
  double t6419;
  double t6431;
  double t6432;
  double t6435;
  double t6442;
  double t6460;
  double t6468;
  double t6483;
  double t6495;
  double t6621;
  double t6622;
  double t6624;
  double t6644;
  double t6646;
  double t6651;
  double t6652;
  double t6654;
  double t6660;
  double t6661;
  double t6671;
  double t6678;
  double t6680;
  double t6681;
  double t6687;
  double t6689;
  double t6692;
  double t6705;
  double t6720;
  double t6742;
  double t6743;
  double t6750;
  double t6753;
  double t6758;
  double t6778;
  double t6787;
  double t6794;
  double t6796;
  double t6816;
  double t6868;
  double t6870;
  double t6872;
  double t6879;
  double t6882;
  double t6888;
  double t6897;
  double t6900;
  double t6901;
  double t6903;
  double t6904;
  double t6911;
  double t6916;
  double t6917;
  double t6922;
  double t6925;
  double t6927;
  double t6929;
  double t6932;
  double t6940;
  double t6942;
  double t6943;
  double t6946;
  double t6950;
  double t6959;
  double t6960;
  double t6962;
  double t7071;
  double t7072;
  double t7073;
  double t7078;
  double t7079;
  double t7088;
  double t7089;
  double t7090;
  double t7097;
  double t7100;
  double t7103;
  double t7114;
  double t7118;
  double t7120;
  double t7121;
  double t7124;
  double t7125;
  double t7126;
  double t7131;
  double t7138;
  double t7139;
  double t7141;
  double t7149;
  double t7035;
  double t7036;
  double t7040;
  double t7055;
  double t7057;
  double t7227;
  double t7231;
  double t7233;
  double t7236;
  double t7237;
  double t7251;
  double t7262;
  double t7267;
  double t7268;
  double t7274;
  double t7278;
  double t7281;
  double t7285;
  double t7286;
  double t7287;
  double t7291;
  double t7294;
  double t7297;
  double t7300;
  double t7304;
  double t7310;
  double t7311;
  double t7316;
  double t7324;
  double t7327;
  double t7328;
  double t7330;
  double t7331;
  double t7332;
  double t7333;
  double t7420;
  double t7421;
  double t7425;
  double t7430;
  double t7437;
  double t7442;
  double t7446;
  double t7457;
  double t7462;
  double t7466;
  double t7468;
  double t7470;
  double t7479;
  double t7483;
  double t7485;
  double t7490;
  double t7491;
  double t7493;
  double t7496;
  double t7498;
  double t7499;
  double t7500;
  double t7502;
  double t7509;
  double t7512;
  double t7515;
  double t7517;
  double t7601;
  double t7604;
  double t7605;
  double t7606;
  double t7617;
  double t7621;
  double t7622;
  double t7623;
  double t7629;
  double t7635;
  double t7638;
  double t7641;
  double t7644;
  double t7650;
  double t7651;
  double t7652;
  double t7656;
  double t7661;
  double t7663;
  double t7664;
  double t7666;
  double t7667;
  double t7670;
  double t7672;
  double t7581;
  double t7582;
  double t7583;
  double t7585;
  double t7586;
  double t7589;
  double t7593;
  double t7594;
  double t7597;
  double t7704;
  double t7705;
  double t7707;
  double t7708;
  double t7715;
  double t7723;
  double t7731;
  double t7732;
  double t7734;
  double t7737;
  double t7743;
  double t7753;
  double t7755;
  double t7756;
  double t7758;
  double t7759;
  double t7762;
  double t7763;
  double t7772;
  double t7775;
  double t7781;
  double t7782;
  double t7786;
  double t7787;
  double t7789;
  double t7790;
  double t7837;
  double t7838;
  double t7841;
  double t7849;
  double t7855;
  double t7859;
  double t7860;
  double t7862;
  double t7871;
  double t7873;
  double t7874;
  double t7875;
  double t7878;
  double t7881;
  double t7884;
  double t7885;
  double t7887;
  double t7888;
  double t7890;
  double t7893;
  double t7896;
  double t7897;
  double t7900;
  double t7901;
  double t7938;
  double t7983;
  double t7946;
  double t7935;
  double t7944;
  double t7954;
  double t8002;
  double t7968;
  double t7995;
  double t8008;
  double t7992;
  double t8023;
  double t8001;
  double t8006;
  double t8007;
  double t8010;
  double t8011;
  double t8012;
  double t8015;
  double t8019;
  double t8020;
  double t8024;
  double t8025;
  double t8027;
  double t8030;
  double t8032;
  double t8033;
  double t8034;
  double t8035;
  double t8039;
  double t7941;
  double t7942;
  double t7947;
  double t7950;
  double t7951;
  double t7952;
  double t7963;
  double t7966;
  double t7984;
  double t7986;
  double t7987;
  double t7990;
  double t7993;
  double t7994;
  double t7996;
  double t7997;
  double t7998;
  double t7999;
  double t8068;
  double t8072;
  double t8073;
  double t8075;
  double t8076;
  double t8077;
  double t8078;
  double t8080;
  double t8081;
  double t8082;
  double t8083;
  double t8089;
  double t8090;
  double t8091;
  double t8093;
  double t8095;
  double t8097;
  double t8098;
  double t8099;
  double t8101;
  double t8102;
  double t8104;
  double t8105;
  double t8132;
  double t8134;
  double t8135;
  double t8140;
  double t8141;
  double t8142;
  double t8146;
  double t8148;
  double t8151;
  double t8152;
  double t8154;
  double t8155;
  double t8156;
  double t8157;
  double t8159;
  double t8160;
  double t8161;
  double t8162;
  double t8164;
  double t8165;
  double t8166;
  double t8167;
  double t8193;
  double t8194;
  double t8195;
  double t8197;
  double t8198;
  double t8199;
  double t8201;
  double t8202;
  double t8203;
  double t8233;
  double t8234;
  double t8235;
  double t8236;
  double t8241;
  double t8242;
  double t8243;
  double t8244;
  double t8246;
  double t8247;
  double t8248;
  double t8249;
  double t8271;
  double t8272;
  double t8273;
  double t8274;
  double t8277;
  double t8278;
  double t8280;
  double t8281;
  double t8284;
  double t8285;
  double t8286;
  double t8287;
  t511 = Sin(var1[25]);
  t878 = Sin(var1[3]);
  t933 = Cos(var1[24]);
  t1000 = -1.*t933;
  t1011 = 1. + t1000;
  t1098 = Sin(var1[24]);
  t1329 = Cos(var1[3]);
  t1237 = Cos(var1[5]);
  t1244 = Sin(var1[4]);
  t1346 = Sin(var1[5]);
  t83 = Cos(var1[25]);
  t95 = -1.*t83;
  t310 = 1. + t95;
  t1258 = -1.*t1237*t878*t1244;
  t1430 = t1329*t1346;
  t1465 = t1258 + t1430;
  t1914 = -1.*t1329*t1237;
  t2080 = -1.*t878*t1244*t1346;
  t2186 = t1914 + t2080;
  t3241 = Cos(var1[26]);
  t3249 = -1.*t3241;
  t3268 = 1. + t3249;
  t3306 = Sin(var1[26]);
  t16 = Cos(var1[4]);
  t3045 = -0.994522*t511;
  t3072 = 0. + t3045;
  t2914 = -1.*t1098*t1465;
  t2938 = t933*t2186;
  t2961 = t2914 + t2938;
  t3171 = t933*t1465;
  t3178 = t1098*t2186;
  t3183 = t3171 + t3178;
  t3303 = -0.051978134642000004*t3268;
  t2436 = -0.104528*t511;
  t2559 = 0. + t2436;
  t3637 = 0.05226439969100001*t3268;
  t3381 = 0.49726168403800003*t3268;
  t608 = 0.104528*t511;
  t770 = 0. + t608;
  t793 = 0.994522*t511;
  t854 = 0. + t793;
  t4055 = Sin(var1[27]);
  t3956 = 0.073913*t3306;
  t3462 = -1.*t16*t3072*t878;
  t3498 = -0.103955395616*t310*t2961;
  t3606 = -0.9890740084840001*t310;
  t3608 = 1. + t3606;
  t3610 = t3608*t3183;
  t3611 = t3462 + t3498 + t3610;
  t3912 = -0.703234*t3306;
  t3849 = -1.*t16*t2559*t878;
  t3853 = -0.010926102783999999*t310;
  t3857 = 1. + t3853;
  t3875 = t3857*t2961;
  t3878 = -0.103955395616*t310*t3183;
  t3883 = t3849 + t3875 + t3878;
  t3990 = -1.0000001112680001*t310;
  t4006 = 1. + t3990;
  t4008 = -1.*t4006*t16*t878;
  t4009 = t770*t2961;
  t4011 = t854*t3183;
  t4016 = t4008 + t4009 + t4011;
  t4036 = Cos(var1[27]);
  t4039 = -1.*t4036;
  t4044 = 1. + t4039;
  t3307 = -0.707107*t3306;
  t4159 = -0.49726168403800003*t3268;
  t3412 = -0.073913*t3306;
  t4319 = 0.051978134642000004*t3268;
  t3772 = 0.707107*t3306;
  t4199 = -0.05226439969100001*t3268;
  t3642 = 0.703234*t3306;
  t4404 = -0.104528*t4055;
  t4435 = 0. + t4404;
  t4192 = t4159 + t3956;
  t4197 = t4192*t3611;
  t4201 = t4199 + t3912;
  t4203 = t4201*t3883;
  t4208 = -0.500001190325*t3268;
  t4212 = 1. + t4208;
  t4220 = t4212*t4016;
  t4222 = t4197 + t4203 + t4220;
  t4277 = -0.5054634410180001*t3268;
  t4297 = 1. + t4277;
  t4308 = t4297*t3611;
  t4333 = t4319 + t3307;
  t4357 = t4333*t3883;
  t4358 = t4159 + t3412;
  t4380 = t4358*t4016;
  t4383 = t4308 + t4357 + t4380;
  t4514 = t4319 + t3772;
  t4540 = t4514*t3611;
  t4552 = -0.9945383682050002*t3268;
  t4570 = 1. + t4552;
  t4573 = t4570*t3883;
  t4576 = t4199 + t3642;
  t4589 = t4576*t4016;
  t4592 = t4540 + t4573 + t4589;
  t4268 = -0.994522*t4055;
  t4270 = 0. + t4268;
  t4123 = 0.994522*t4055;
  t4139 = 0. + t4123;
  t4059 = 0.104528*t4055;
  t4081 = 0. + t4059;
  t497 = -0.056500534356700764*t310;
  t779 = 0.040271188976*t770;
  t855 = 0.38315650737400003*t854;
  t872 = 0. + t497 + t779 + t855;
  t1038 = 0.4*t1011;
  t1128 = -0.12*t1098;
  t1187 = 0. + t1038 + t1128;
  t1761 = -0.12*t1011;
  t1833 = -0.4*t1098;
  t1913 = 0. + t1761 + t1833;
  t2253 = 1.1345904784751044e-7*var1[25];
  t2370 = 0.04027119345689465*t310;
  t2600 = -0.05650052807*t2559;
  t2730 = t2253 + t2370 + t2600;
  t4793 = t1329*t1237*t1244;
  t4799 = t878*t1346;
  t4800 = t4793 + t4799;
  t4806 = -1.*t1237*t878;
  t4807 = t1329*t1244*t1346;
  t4816 = t4806 + t4807;
  t3013 = -1.1924972351948546e-8*var1[25];
  t3039 = 0.38315655000705834*t310;
  t3148 = -0.05650052807*t3072;
  t3153 = t3013 + t3039 + t3148;
  t3235 = 1.5601527583902087e-7*var1[26];
  t3287 = 0.09582494577057615*t3268;
  t3339 = t3303 + t3307;
  t3366 = -0.231098203479*t3339;
  t3415 = t3381 + t3412;
  t3430 = 0.164383620275*t3415;
  t3452 = t3235 + t3287 + t3366 + t3430;
  t4822 = -1.*t1098*t4800;
  t4830 = t933*t4816;
  t4832 = t4822 + t4830;
  t4847 = t933*t4800;
  t4864 = t1098*t4816;
  t4866 = t4847 + t4864;
  t3620 = 1.639789470231751e-8*var1[26];
  t3631 = -0.22983603018311177*t3268;
  t3649 = t3637 + t3642;
  t3705 = 0.164383620275*t3649;
  t3785 = t3303 + t3772;
  t3832 = 0.18957839082800002*t3785;
  t3848 = t3620 + t3631 + t3705 + t3832;
  t3904 = -1.568745163810375e-7*var1[26];
  t3909 = 0.08219200580743281*t3268;
  t3941 = t3637 + t3912;
  t3942 = -0.231098203479*t3941;
  t3984 = t3381 + t3956;
  t3986 = 0.18957839082800002*t3984;
  t3989 = t3904 + t3909 + t3942 + t3986;
  t4047 = 0.19098732144477495*t4044;
  t4115 = 0.014401763312*t4081;
  t4152 = 0.137024246638*t4139;
  t4155 = 0. + t4047 + t4115 + t4152;
  t4877 = t1329*t16*t3072;
  t4891 = -0.103955395616*t310*t4832;
  t4893 = t3608*t4866;
  t4898 = t4877 + t4891 + t4893;
  t4911 = t1329*t16*t2559;
  t4930 = t3857*t4832;
  t4939 = -0.103955395616*t310*t4866;
  t4943 = t4911 + t4930 + t4939;
  t4966 = t4006*t1329*t16;
  t4969 = t770*t4832;
  t4970 = t854*t4866;
  t4975 = t4966 + t4969 + t4970;
  t4242 = 5.06291820800569e-8*var1[27];
  t4256 = 0.13702426188441388*t4044;
  t4272 = 0.190987300194*t4270;
  t4274 = t4242 + t4256 + t4272;
  t4394 = -4.817066759205414e-7*var1[27];
  t4402 = 0.0144017649144554*t4044;
  t4470 = 0.190987300194*t4435;
  t4494 = t4394 + t4402 + t4470;
  t4978 = t4192*t4898;
  t4979 = t4201*t4943;
  t4982 = t4212*t4975;
  t4987 = t4978 + t4979 + t4982;
  t5003 = t4297*t4898;
  t5005 = t4333*t4943;
  t5010 = t4358*t4975;
  t5015 = t5003 + t5005 + t5010;
  t4619 = -0.010926102783999999*t4044;
  t4621 = 1. + t4619;
  t5033 = t4514*t4898;
  t5038 = t4570*t4943;
  t5044 = t4576*t4975;
  t5047 = t5033 + t5038 + t5044;
  t4673 = -0.9890740084840001*t4044;
  t4674 = 1. + t4673;
  t4702 = -1.0000001112680001*t4044;
  t4708 = 1. + t4702;
  t5275 = -1.*t1329*t16*t1237*t1098;
  t5281 = t933*t1329*t16*t1346;
  t5285 = t5275 + t5281;
  t5303 = t933*t1329*t16*t1237;
  t5309 = t1329*t16*t1098*t1346;
  t5320 = t5303 + t5309;
  t5327 = -1.*t1329*t3072*t1244;
  t5342 = -0.103955395616*t310*t5285;
  t5348 = t3608*t5320;
  t5361 = t5327 + t5342 + t5348;
  t5369 = -1.*t1329*t2559*t1244;
  t5385 = t3857*t5285;
  t5388 = -0.103955395616*t310*t5320;
  t5394 = t5369 + t5385 + t5388;
  t5399 = -1.*t4006*t1329*t1244;
  t5403 = t770*t5285;
  t5407 = t854*t5320;
  t5411 = t5399 + t5403 + t5407;
  t5429 = t4192*t5361;
  t5450 = t4201*t5394;
  t5453 = t4212*t5411;
  t5454 = t5429 + t5450 + t5453;
  t5471 = t4297*t5361;
  t5480 = t4333*t5394;
  t5487 = t4358*t5411;
  t5490 = t5471 + t5480 + t5487;
  t5492 = t4514*t5361;
  t5499 = t4570*t5394;
  t5510 = t4576*t5411;
  t5528 = t5492 + t5499 + t5510;
  t5700 = -1.*t16*t1237*t1098*t878;
  t5708 = t933*t16*t878*t1346;
  t5710 = t5700 + t5708;
  t5717 = t933*t16*t1237*t878;
  t5720 = t16*t1098*t878*t1346;
  t5723 = t5717 + t5720;
  t5753 = -1.*t3072*t878*t1244;
  t5755 = -0.103955395616*t310*t5710;
  t5759 = t3608*t5723;
  t5765 = t5753 + t5755 + t5759;
  t5789 = -1.*t2559*t878*t1244;
  t5798 = t3857*t5710;
  t5800 = -0.103955395616*t310*t5723;
  t5815 = t5789 + t5798 + t5800;
  t5821 = -1.*t4006*t878*t1244;
  t5828 = t770*t5710;
  t5833 = t854*t5723;
  t5836 = t5821 + t5828 + t5833;
  t5839 = t4192*t5765;
  t5840 = t4201*t5815;
  t5841 = t4212*t5836;
  t5843 = t5839 + t5840 + t5841;
  t5854 = t4297*t5765;
  t5855 = t4333*t5815;
  t5862 = t4358*t5836;
  t5880 = t5854 + t5855 + t5862;
  t5895 = t4514*t5765;
  t5896 = t4570*t5815;
  t5904 = t4576*t5836;
  t5909 = t5895 + t5896 + t5904;
  t5981 = t1237*t1098*t1244;
  t5986 = -1.*t933*t1244*t1346;
  t6000 = t5981 + t5986;
  t6004 = -1.*t933*t1237*t1244;
  t6011 = -1.*t1098*t1244*t1346;
  t6021 = t6004 + t6011;
  t6028 = -1.*t16*t3072;
  t6029 = -0.103955395616*t310*t6000;
  t6032 = t3608*t6021;
  t6038 = t6028 + t6029 + t6032;
  t6044 = -1.*t16*t2559;
  t6046 = t3857*t6000;
  t6058 = -0.103955395616*t310*t6021;
  t6079 = t6044 + t6046 + t6058;
  t6102 = -1.*t4006*t16;
  t6115 = t770*t6000;
  t6118 = t854*t6021;
  t6127 = t6102 + t6115 + t6118;
  t6135 = t4192*t6038;
  t6136 = t4201*t6079;
  t6144 = t4212*t6127;
  t6145 = t6135 + t6136 + t6144;
  t6156 = t4297*t6038;
  t6160 = t4333*t6079;
  t6169 = t4358*t6127;
  t6171 = t6156 + t6160 + t6169;
  t6183 = t4514*t6038;
  t6186 = t4570*t6079;
  t6194 = t4576*t6127;
  t6200 = t6183 + t6186 + t6194;
  t6283 = t1237*t878;
  t6294 = -1.*t1329*t1244*t1346;
  t6301 = t6283 + t6294;
  t6305 = t1098*t4800;
  t6309 = t933*t6301;
  t6316 = t6305 + t6309;
  t6341 = -1.*t1098*t6301;
  t6350 = t4847 + t6341;
  t6357 = -0.103955395616*t310*t6316;
  t6358 = t3857*t6350;
  t6359 = t6357 + t6358;
  t6377 = t3608*t6316;
  t6383 = -0.103955395616*t310*t6350;
  t6385 = t6377 + t6383;
  t6394 = t854*t6316;
  t6400 = t770*t6350;
  t6402 = t6394 + t6400;
  t6408 = t4201*t6359;
  t6413 = t4192*t6385;
  t6417 = t4212*t6402;
  t6419 = t6408 + t6413 + t6417;
  t6431 = t4333*t6359;
  t6432 = t4297*t6385;
  t6435 = t4358*t6402;
  t6442 = t6431 + t6432 + t6435;
  t6460 = t4570*t6359;
  t6468 = t4514*t6385;
  t6483 = t4576*t6402;
  t6495 = t6460 + t6468 + t6483;
  t6621 = t1237*t878*t1244;
  t6622 = -1.*t1329*t1346;
  t6624 = t6621 + t6622;
  t6644 = t1098*t6624;
  t6646 = t6644 + t2938;
  t6651 = t933*t6624;
  t6652 = -1.*t1098*t2186;
  t6654 = t6651 + t6652;
  t6660 = -0.103955395616*t310*t6646;
  t6661 = t3857*t6654;
  t6671 = t6660 + t6661;
  t6678 = t3608*t6646;
  t6680 = -0.103955395616*t310*t6654;
  t6681 = t6678 + t6680;
  t6687 = t854*t6646;
  t6689 = t770*t6654;
  t6692 = t6687 + t6689;
  t6705 = t4201*t6671;
  t6720 = t4192*t6681;
  t6742 = t4212*t6692;
  t6743 = t6705 + t6720 + t6742;
  t6750 = t4333*t6671;
  t6753 = t4297*t6681;
  t6758 = t4358*t6692;
  t6778 = t6750 + t6753 + t6758;
  t6787 = t4570*t6671;
  t6794 = t4514*t6681;
  t6796 = t4576*t6692;
  t6816 = t6787 + t6794 + t6796;
  t6868 = t16*t1237*t1098;
  t6870 = -1.*t933*t16*t1346;
  t6872 = t6868 + t6870;
  t6879 = t933*t16*t1237;
  t6882 = t16*t1098*t1346;
  t6888 = t6879 + t6882;
  t6897 = -0.103955395616*t310*t6872;
  t6900 = t3857*t6888;
  t6901 = t6897 + t6900;
  t6903 = t3608*t6872;
  t6904 = -0.103955395616*t310*t6888;
  t6911 = t6903 + t6904;
  t6916 = t854*t6872;
  t6917 = t770*t6888;
  t6922 = t6916 + t6917;
  t6925 = t4201*t6901;
  t6927 = t4192*t6911;
  t6929 = t4212*t6922;
  t6932 = t6925 + t6927 + t6929;
  t6940 = t4333*t6901;
  t6942 = t4297*t6911;
  t6943 = t4358*t6922;
  t6946 = t6940 + t6942 + t6943;
  t6950 = t4570*t6901;
  t6959 = t4514*t6911;
  t6960 = t4576*t6922;
  t6962 = t6950 + t6959 + t6960;
  t7071 = -1.*t933*t4800;
  t7072 = -1.*t1098*t4816;
  t7073 = t7071 + t7072;
  t7078 = t3857*t7073;
  t7079 = t4891 + t7078;
  t7088 = t3608*t4832;
  t7089 = -0.103955395616*t310*t7073;
  t7090 = t7088 + t7089;
  t7097 = t854*t4832;
  t7100 = t770*t7073;
  t7103 = t7097 + t7100;
  t7114 = t4201*t7079;
  t7118 = t4192*t7090;
  t7120 = t4212*t7103;
  t7121 = t7114 + t7118 + t7120;
  t7124 = t4333*t7079;
  t7125 = t4297*t7090;
  t7126 = t4358*t7103;
  t7131 = t7124 + t7125 + t7126;
  t7138 = t4570*t7079;
  t7139 = t4514*t7090;
  t7141 = t4576*t7103;
  t7149 = t7138 + t7139 + t7141;
  t7035 = -0.12*t933;
  t7036 = 0.4*t1098;
  t7040 = t7035 + t7036;
  t7055 = -0.4*t933;
  t7057 = t7055 + t1128;
  t7227 = t1329*t1237;
  t7231 = t878*t1244*t1346;
  t7233 = t7227 + t7231;
  t7236 = -1.*t1098*t6624;
  t7237 = t933*t7233;
  t7251 = t7236 + t7237;
  t7262 = -1.*t933*t6624;
  t7267 = -1.*t1098*t7233;
  t7268 = t7262 + t7267;
  t7274 = -0.103955395616*t310*t7251;
  t7278 = t3857*t7268;
  t7281 = t7274 + t7278;
  t7285 = t3608*t7251;
  t7286 = -0.103955395616*t310*t7268;
  t7287 = t7285 + t7286;
  t7291 = t854*t7251;
  t7294 = t770*t7268;
  t7297 = t7291 + t7294;
  t7300 = t4201*t7281;
  t7304 = t4192*t7287;
  t7310 = t4212*t7297;
  t7311 = t7300 + t7304 + t7310;
  t7316 = t4333*t7281;
  t7324 = t4297*t7287;
  t7327 = t4358*t7297;
  t7328 = t7316 + t7324 + t7327;
  t7330 = t4570*t7281;
  t7331 = t4514*t7287;
  t7332 = t4576*t7297;
  t7333 = t7330 + t7331 + t7332;
  t7420 = -1.*t16*t1237*t1098;
  t7421 = t933*t16*t1346;
  t7425 = t7420 + t7421;
  t7430 = -1.*t933*t16*t1237;
  t7437 = -1.*t16*t1098*t1346;
  t7442 = t7430 + t7437;
  t7446 = -0.103955395616*t310*t7425;
  t7457 = t3857*t7442;
  t7462 = t7446 + t7457;
  t7466 = t3608*t7425;
  t7468 = -0.103955395616*t310*t7442;
  t7470 = t7466 + t7468;
  t7479 = t854*t7425;
  t7483 = t770*t7442;
  t7485 = t7479 + t7483;
  t7490 = t4201*t7462;
  t7491 = t4192*t7470;
  t7493 = t4212*t7485;
  t7496 = t7490 + t7491 + t7493;
  t7498 = t4333*t7462;
  t7499 = t4297*t7470;
  t7500 = t4358*t7485;
  t7502 = t7498 + t7499 + t7500;
  t7509 = t4570*t7462;
  t7512 = t4514*t7470;
  t7515 = t4576*t7485;
  t7517 = t7509 + t7512 + t7515;
  t7601 = -1.0000001112680001*t1329*t16*t511;
  t7604 = 0.104528*t83*t4832;
  t7605 = 0.994522*t83*t4866;
  t7606 = t7601 + t7604 + t7605;
  t7617 = -0.994522*t83*t1329*t16;
  t7621 = -0.103955395616*t511*t4832;
  t7622 = -0.9890740084840001*t511*t4866;
  t7623 = t7617 + t7621 + t7622;
  t7629 = -0.104528*t83*t1329*t16;
  t7635 = -0.010926102783999999*t511*t4832;
  t7638 = -0.103955395616*t511*t4866;
  t7641 = t7629 + t7635 + t7638;
  t7644 = t4576*t7606;
  t7650 = t4514*t7623;
  t7651 = t4570*t7641;
  t7652 = t7644 + t7650 + t7651;
  t7656 = t4358*t7606;
  t7661 = t4297*t7623;
  t7663 = t4333*t7641;
  t7664 = t7656 + t7661 + t7663;
  t7666 = t4212*t7606;
  t7667 = t4192*t7623;
  t7670 = t4201*t7641;
  t7672 = t7666 + t7667 + t7670;
  t7581 = 0.3852670428678886*t83;
  t7582 = -0.056500534356700764*t511;
  t7583 = t7581 + t7582;
  t7585 = 0.0059058871981009595*t83;
  t7586 = 0.04027119345689465*t511;
  t7589 = 1.1345904784751044e-7 + t7585 + t7586;
  t7593 = 0.05619101817723254*t83;
  t7594 = 0.38315655000705834*t511;
  t7597 = -1.1924972351948546e-8 + t7593 + t7594;
  t7704 = t1098*t7233;
  t7705 = t6651 + t7704;
  t7707 = -1.0000001112680001*t16*t511*t878;
  t7708 = 0.104528*t83*t7251;
  t7715 = 0.994522*t83*t7705;
  t7723 = t7707 + t7708 + t7715;
  t7731 = -0.994522*t83*t16*t878;
  t7732 = -0.103955395616*t511*t7251;
  t7734 = -0.9890740084840001*t511*t7705;
  t7737 = t7731 + t7732 + t7734;
  t7743 = -0.104528*t83*t16*t878;
  t7753 = -0.010926102783999999*t511*t7251;
  t7755 = -0.103955395616*t511*t7705;
  t7756 = t7743 + t7753 + t7755;
  t7758 = t4576*t7723;
  t7759 = t4514*t7737;
  t7762 = t4570*t7756;
  t7763 = t7758 + t7759 + t7762;
  t7772 = t4358*t7723;
  t7775 = t4297*t7737;
  t7781 = t4333*t7756;
  t7782 = t7772 + t7775 + t7781;
  t7786 = t4212*t7723;
  t7787 = t4192*t7737;
  t7789 = t4201*t7756;
  t7790 = t7786 + t7787 + t7789;
  t7837 = 1.0000001112680001*t511*t1244;
  t7838 = 0.104528*t83*t7425;
  t7841 = 0.994522*t83*t6888;
  t7849 = t7837 + t7838 + t7841;
  t7855 = 0.994522*t83*t1244;
  t7859 = -0.103955395616*t511*t7425;
  t7860 = -0.9890740084840001*t511*t6888;
  t7862 = t7855 + t7859 + t7860;
  t7871 = 0.104528*t83*t1244;
  t7873 = -0.010926102783999999*t511*t7425;
  t7874 = -0.103955395616*t511*t6888;
  t7875 = t7871 + t7873 + t7874;
  t7878 = t4576*t7849;
  t7881 = t4514*t7862;
  t7884 = t4570*t7875;
  t7885 = t7878 + t7881 + t7884;
  t7887 = t4358*t7849;
  t7888 = t4297*t7862;
  t7890 = t4333*t7875;
  t7893 = t7887 + t7888 + t7890;
  t7896 = t4212*t7849;
  t7897 = t4192*t7862;
  t7900 = t4201*t7875;
  t7901 = t7896 + t7897 + t7900;
  t7938 = -0.051978134642000004*t3306;
  t7983 = 0.05226439969100001*t3306;
  t7946 = 0.49726168403800003*t3306;
  t7935 = -0.707107*t3241;
  t7944 = -0.073913*t3241;
  t7954 = 0.707107*t3241;
  t8002 = 0.051978134642000004*t3306;
  t7968 = 0.703234*t3241;
  t7995 = 0.073913*t3241;
  t8008 = -0.49726168403800003*t3306;
  t7992 = -0.703234*t3241;
  t8023 = -0.05226439969100001*t3306;
  t8001 = -0.5054634410180001*t3306*t4898;
  t8006 = t7935 + t8002;
  t8007 = t8006*t4943;
  t8010 = t7944 + t8008;
  t8011 = t8010*t4975;
  t8012 = t8001 + t8007 + t8011;
  t8015 = t7954 + t8002;
  t8019 = t8015*t4898;
  t8020 = -0.9945383682050002*t3306*t4943;
  t8024 = t7968 + t8023;
  t8025 = t8024*t4975;
  t8027 = t8019 + t8020 + t8025;
  t8030 = t7995 + t8008;
  t8032 = t8030*t4898;
  t8033 = t7992 + t8023;
  t8034 = t8033*t4943;
  t8035 = -0.500001190325*t3306*t4975;
  t8039 = t8032 + t8034 + t8035;
  t7941 = t7935 + t7938;
  t7942 = -0.231098203479*t7941;
  t7947 = t7944 + t7946;
  t7950 = 0.164383620275*t7947;
  t7951 = 0.09582494577057615*t3306;
  t7952 = 1.5601527583902087e-7 + t7942 + t7950 + t7951;
  t7963 = t7954 + t7938;
  t7966 = 0.18957839082800002*t7963;
  t7984 = t7968 + t7983;
  t7986 = 0.164383620275*t7984;
  t7987 = -0.22983603018311177*t3306;
  t7990 = 1.639789470231751e-8 + t7966 + t7986 + t7987;
  t7993 = t7992 + t7983;
  t7994 = -0.231098203479*t7993;
  t7996 = t7995 + t7946;
  t7997 = 0.18957839082800002*t7996;
  t7998 = 0.08219200580743281*t3306;
  t7999 = -1.568745163810375e-7 + t7994 + t7997 + t7998;
  t8068 = t16*t3072*t878;
  t8072 = t3608*t7705;
  t8073 = t8068 + t7274 + t8072;
  t8075 = t16*t2559*t878;
  t8076 = t3857*t7251;
  t8077 = -0.103955395616*t310*t7705;
  t8078 = t8075 + t8076 + t8077;
  t8080 = t4006*t16*t878;
  t8081 = t770*t7251;
  t8082 = t854*t7705;
  t8083 = t8080 + t8081 + t8082;
  t8089 = -0.5054634410180001*t3306*t8073;
  t8090 = t8006*t8078;
  t8091 = t8010*t8083;
  t8093 = t8089 + t8090 + t8091;
  t8095 = t8015*t8073;
  t8097 = -0.9945383682050002*t3306*t8078;
  t8098 = t8024*t8083;
  t8099 = t8095 + t8097 + t8098;
  t8101 = t8030*t8073;
  t8102 = t8033*t8078;
  t8104 = -0.500001190325*t3306*t8083;
  t8105 = t8101 + t8102 + t8104;
  t8132 = -1.*t3072*t1244;
  t8134 = t3608*t6888;
  t8135 = t8132 + t7446 + t8134;
  t8140 = -1.*t2559*t1244;
  t8141 = t3857*t7425;
  t8142 = t8140 + t8141 + t6904;
  t8146 = -1.*t4006*t1244;
  t8148 = t770*t7425;
  t8151 = t854*t6888;
  t8152 = t8146 + t8148 + t8151;
  t8154 = -0.5054634410180001*t3306*t8135;
  t8155 = t8006*t8142;
  t8156 = t8010*t8152;
  t8157 = t8154 + t8155 + t8156;
  t8159 = t8015*t8135;
  t8160 = -0.9945383682050002*t3306*t8142;
  t8161 = t8024*t8152;
  t8162 = t8159 + t8160 + t8161;
  t8164 = t8030*t8135;
  t8165 = t8033*t8142;
  t8166 = -0.500001190325*t3306*t8152;
  t8167 = t8164 + t8165 + t8166;
  t8193 = 0.13777901533039377*t4036;
  t8194 = 0.19098732144477495*t4055;
  t8195 = t8193 + t8194;
  t8197 = -0.18994107176353728*t4036;
  t8198 = 0.13702426188441388*t4055;
  t8199 = 5.06291820800569e-8 + t8197 + t8198;
  t8201 = -0.019963520514678434*t4036;
  t8202 = 0.0144017649144554*t4055;
  t8203 = -4.817066759205414e-7 + t8201 + t8202;
  t8233 = t4192*t8073;
  t8234 = t4201*t8078;
  t8235 = t4212*t8083;
  t8236 = t8233 + t8234 + t8235;
  t8241 = t4297*t8073;
  t8242 = t4333*t8078;
  t8243 = t4358*t8083;
  t8244 = t8241 + t8242 + t8243;
  t8246 = t4514*t8073;
  t8247 = t4570*t8078;
  t8248 = t4576*t8083;
  t8249 = t8246 + t8247 + t8248;
  t8271 = t4192*t8135;
  t8272 = t4201*t8142;
  t8273 = t4212*t8152;
  t8274 = t8271 + t8272 + t8273;
  t8277 = t4297*t8135;
  t8278 = t4333*t8142;
  t8280 = t4358*t8152;
  t8281 = t8277 + t8278 + t8280;
  t8284 = t4514*t8135;
  t8285 = t4570*t8142;
  t8286 = t4576*t8152;
  t8287 = t8284 + t8285 + t8286;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1187*t1465 + t1913*t2186 + t2730*t2961 + t3153*t3183 + t3452*t3611 + t3848*t3883 + t3989*t4016 + t4155*t4222 + t4274*t4383 + t4494*t4592 - 0.272168*(-0.103955395616*t4044*t4383 + t4222*t4435 + t4592*t4621) + 0.167144*(t4222*t4270 - 0.103955395616*t4044*t4592 + t4383*t4674) + 0.190987*(t4139*t4383 + t4081*t4592 + t4222*t4708) - 1.*t16*t872*t878;
  p_output1[10]=t1187*t4800 + t1913*t4816 + t2730*t4832 + t3153*t4866 + t3452*t4898 + t3848*t4943 + t3989*t4975 + t4155*t4987 + t4274*t5015 + t4494*t5047 + 0.167144*(t4270*t4987 + t4674*t5015 - 0.103955395616*t4044*t5047) + 0.190987*(t4708*t4987 + t4139*t5015 + t4081*t5047) - 0.272168*(t4435*t4987 - 0.103955395616*t4044*t5015 + t4621*t5047) + t1329*t16*t872;
  p_output1[11]=0;
  p_output1[12]=t1187*t1237*t1329*t16 + t1329*t1346*t16*t1913 + t2730*t5285 + t3153*t5320 + t3452*t5361 + t3848*t5394 + t3989*t5411 + t4155*t5454 + t4274*t5490 + t4494*t5528 + 0.167144*(t4270*t5454 + t4674*t5490 - 0.103955395616*t4044*t5528) + 0.190987*(t4708*t5454 + t4139*t5490 + t4081*t5528) - 0.272168*(t4435*t5454 - 0.103955395616*t4044*t5490 + t4621*t5528) - 1.*t1244*t1329*t872;
  p_output1[13]=t2730*t5710 + t3153*t5723 + t3452*t5765 + t3848*t5815 + t3989*t5836 + t4155*t5843 + t4274*t5880 + t4494*t5909 + 0.167144*(t4270*t5843 + t4674*t5880 - 0.103955395616*t4044*t5909) + 0.190987*(t4708*t5843 + t4139*t5880 + t4081*t5909) - 0.272168*(t4435*t5843 - 0.103955395616*t4044*t5880 + t4621*t5909) + t1187*t1237*t16*t878 + t1346*t16*t1913*t878 - 1.*t1244*t872*t878;
  p_output1[14]=-1.*t1187*t1237*t1244 - 1.*t1244*t1346*t1913 + t2730*t6000 + t3153*t6021 + t3452*t6038 + t3848*t6079 + t3989*t6127 + t4155*t6145 + t4274*t6171 + t4494*t6200 + 0.167144*(t4270*t6145 + t4674*t6171 - 0.103955395616*t4044*t6200) + 0.190987*(t4708*t6145 + t4139*t6171 + t4081*t6200) - 0.272168*(t4435*t6145 - 0.103955395616*t4044*t6171 + t4621*t6200) - 1.*t16*t872;
  p_output1[15]=t1913*t4800 + t1187*t6301 + t3153*t6316 + t2730*t6350 + t3848*t6359 + t3452*t6385 + t3989*t6402 + t4155*t6419 + t4274*t6442 + t4494*t6495 + 0.167144*(t4270*t6419 + t4674*t6442 - 0.103955395616*t4044*t6495) + 0.190987*(t4708*t6419 + t4139*t6442 + t4081*t6495) - 0.272168*(t4435*t6419 - 0.103955395616*t4044*t6442 + t4621*t6495);
  p_output1[16]=t1187*t2186 + t1913*t6624 + t3153*t6646 + t2730*t6654 + t3848*t6671 + t3452*t6681 + t3989*t6692 + t4155*t6743 + t4274*t6778 + t4494*t6816 + 0.167144*(t4270*t6743 + t4674*t6778 - 0.103955395616*t4044*t6816) + 0.190987*(t4708*t6743 + t4139*t6778 + t4081*t6816) - 0.272168*(t4435*t6743 - 0.103955395616*t4044*t6778 + t4621*t6816);
  p_output1[17]=-1.*t1187*t1346*t16 + t1237*t16*t1913 + t3153*t6872 + t2730*t6888 + t3848*t6901 + t3452*t6911 + t3989*t6922 + t4155*t6932 + t4274*t6946 + t4494*t6962 + 0.167144*(t4270*t6932 + t4674*t6946 - 0.103955395616*t4044*t6962) + 0.190987*(t4708*t6932 + t4139*t6946 + t4081*t6962) - 0.272168*(t4435*t6932 - 0.103955395616*t4044*t6946 + t4621*t6962);
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
  p_output1[72]=t3153*t4832 + t4800*t7040 + t4816*t7057 + t2730*t7073 + t3848*t7079 + t3452*t7090 + t3989*t7103 + t4155*t7121 + t4274*t7131 + t4494*t7149 + 0.167144*(t4270*t7121 + t4674*t7131 - 0.103955395616*t4044*t7149) + 0.190987*(t4708*t7121 + t4139*t7131 + t4081*t7149) - 0.272168*(t4435*t7121 - 0.103955395616*t4044*t7131 + t4621*t7149);
  p_output1[73]=t6624*t7040 + t7057*t7233 + t3153*t7251 + t2730*t7268 + t3848*t7281 + t3452*t7287 + t3989*t7297 + t4155*t7311 + t4274*t7328 + t4494*t7333 + 0.167144*(t4270*t7311 + t4674*t7328 - 0.103955395616*t4044*t7333) + 0.190987*(t4708*t7311 + t4139*t7328 + t4081*t7333) - 0.272168*(t4435*t7311 - 0.103955395616*t4044*t7328 + t4621*t7333);
  p_output1[74]=t1237*t16*t7040 + t1346*t16*t7057 + t3153*t7425 + t2730*t7442 + t3848*t7462 + t3452*t7470 + t3989*t7485 + t4155*t7496 + t4274*t7502 + t4494*t7517 + 0.167144*(t4270*t7496 + t4674*t7502 - 0.103955395616*t4044*t7517) + 0.190987*(t4708*t7496 + t4139*t7502 + t4081*t7517) - 0.272168*(t4435*t7496 - 0.103955395616*t4044*t7502 + t4621*t7517);
  p_output1[75]=t1329*t16*t7583 + t4832*t7589 + t4866*t7597 + t3989*t7606 + t3452*t7623 + t3848*t7641 + t4494*t7652 + t4274*t7664 + t4155*t7672 + 0.167144*(-0.103955395616*t4044*t7652 + t4674*t7664 + t4270*t7672) - 0.272168*(t4621*t7652 - 0.103955395616*t4044*t7664 + t4435*t7672) + 0.190987*(t4081*t7652 + t4139*t7664 + t4708*t7672);
  p_output1[76]=t7251*t7589 + t7597*t7705 + t3989*t7723 + t3452*t7737 + t3848*t7756 + t4494*t7763 + t4274*t7782 + t4155*t7790 + 0.167144*(-0.103955395616*t4044*t7763 + t4674*t7782 + t4270*t7790) - 0.272168*(t4621*t7763 - 0.103955395616*t4044*t7782 + t4435*t7790) + 0.190987*(t4081*t7763 + t4139*t7782 + t4708*t7790) + t16*t7583*t878;
  p_output1[77]=-1.*t1244*t7583 + t7425*t7589 + t6888*t7597 + t3989*t7849 + t3452*t7862 + t3848*t7875 + t4494*t7885 + t4274*t7893 + t4155*t7901 + 0.167144*(-0.103955395616*t4044*t7885 + t4674*t7893 + t4270*t7901) - 0.272168*(t4621*t7885 - 0.103955395616*t4044*t7893 + t4435*t7901) + 0.190987*(t4081*t7885 + t4139*t7893 + t4708*t7901);
  p_output1[78]=t4898*t7952 + t4943*t7990 + t4975*t7999 + t4274*t8012 + t4494*t8027 + t4155*t8039 + 0.167144*(t4674*t8012 - 0.103955395616*t4044*t8027 + t4270*t8039) - 0.272168*(-0.103955395616*t4044*t8012 + t4621*t8027 + t4435*t8039) + 0.190987*(t4139*t8012 + t4081*t8027 + t4708*t8039);
  p_output1[79]=t7952*t8073 + t7990*t8078 + t7999*t8083 + t4274*t8093 + t4494*t8099 + t4155*t8105 + 0.167144*(t4674*t8093 - 0.103955395616*t4044*t8099 + t4270*t8105) - 0.272168*(-0.103955395616*t4044*t8093 + t4621*t8099 + t4435*t8105) + 0.190987*(t4139*t8093 + t4081*t8099 + t4708*t8105);
  p_output1[80]=t7952*t8135 + t7990*t8142 + t7999*t8152 + t4274*t8157 + t4494*t8162 + t4155*t8167 + 0.167144*(t4674*t8157 - 0.103955395616*t4044*t8162 + t4270*t8167) - 0.272168*(-0.103955395616*t4044*t8157 + t4621*t8162 + t4435*t8167) + 0.190987*(t4139*t8157 + t4081*t8162 + t4708*t8167);
  p_output1[81]=0.190987*(-1.0000001112680001*t4055*t4987 + 0.994522*t4036*t5015 + 0.104528*t4036*t5047) + 0.167144*(-0.994522*t4036*t4987 - 0.9890740084840001*t4055*t5015 - 0.103955395616*t4055*t5047) - 0.272168*(-0.104528*t4036*t4987 - 0.103955395616*t4055*t5015 - 0.010926102783999999*t4055*t5047) + t4987*t8195 + t5015*t8199 + t5047*t8203;
  p_output1[82]=t8195*t8236 + t8199*t8244 + t8203*t8249 + 0.190987*(-1.0000001112680001*t4055*t8236 + 0.994522*t4036*t8244 + 0.104528*t4036*t8249) + 0.167144*(-0.994522*t4036*t8236 - 0.9890740084840001*t4055*t8244 - 0.103955395616*t4055*t8249) - 0.272168*(-0.104528*t4036*t8236 - 0.103955395616*t4055*t8244 - 0.010926102783999999*t4055*t8249);
  p_output1[83]=t8195*t8274 + t8199*t8281 + t8203*t8287 + 0.190987*(-1.0000001112680001*t4055*t8274 + 0.994522*t4036*t8281 + 0.104528*t4036*t8287) + 0.167144*(-0.994522*t4036*t8274 - 0.9890740084840001*t4055*t8281 - 0.103955395616*t4055*t8287) - 0.272168*(-0.104528*t4036*t8274 - 0.103955395616*t4055*t8281 - 0.010926102783999999*t4055*t8287);
}



void Jp_elbow_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

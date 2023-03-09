/*
 * Automatically Generated from Mathematica.
 * Mon 4 Jul 2022 20:33:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_joint_left_src.h"

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
  double t288;
  double t308;
  double t309;
  double t283;
  double t310;
  double t1711;
  double t83;
  double t315;
  double t972;
  double t1012;
  double t306;
  double t311;
  double t313;
  double t1297;
  double t1666;
  double t1670;
  double t1685;
  double t3313;
  double t3321;
  double t3348;
  double t2373;
  double t2438;
  double t2484;
  double t1648;
  double t2940;
  double t3218;
  double t3811;
  double t3849;
  double t3873;
  double t3461;
  double t3516;
  double t1751;
  double t1806;
  double t1876;
  double t2032;
  double t5770;
  double t5859;
  double t5871;
  double t5875;
  double t5881;
  double t5942;
  double t3979;
  double t4000;
  double t4032;
  double t4170;
  double t4175;
  double t4185;
  double t5976;
  double t4710;
  double t4711;
  double t4780;
  double t5035;
  double t5439;
  double t5515;
  double t3613;
  double t3615;
  double t3625;
  double t4186;
  double t4199;
  double t4293;
  double t5767;
  double t6045;
  double t6048;
  double t6061;
  double t6130;
  double t6140;
  double t6188;
  double t6189;
  double t6190;
  double t6192;
  double t6196;
  double t6197;
  double t6203;
  double t6207;
  double t6208;
  double t6229;
  double t6245;
  double t6247;
  double t6262;
  double t6264;
  double t6269;
  double t6277;
  double t6282;
  double t6299;
  double t6329;
  double t6331;
  double t6342;
  double t6346;
  double t6374;
  double t6385;
  double t6142;
  double t6181;
  double t88;
  double t171;
  double t277;
  double t280;
  double t1544;
  double t1558;
  double t1696;
  double t1835;
  double t2040;
  double t2072;
  double t6559;
  double t6560;
  double t6564;
  double t6527;
  double t6529;
  double t6542;
  double t2754;
  double t2773;
  double t3225;
  double t3227;
  double t3437;
  double t3454;
  double t3554;
  double t3576;
  double t6598;
  double t6600;
  double t6607;
  double t6570;
  double t6582;
  double t6585;
  double t6628;
  double t6630;
  double t6635;
  double t6637;
  double t6610;
  double t6615;
  double t6616;
  double t6617;
  double t6621;
  double t6623;
  double t6624;
  double t6625;
  double t6243;
  double t6244;
  double t6303;
  double t6319;
  double t6618;
  double t6626;
  double t6639;
  double t6640;
  double t6647;
  double t6648;
  double t6658;
  double t6659;
  double t6662;
  double t6664;
  double t6669;
  double t6671;
  double t6352;
  double t6356;
  double t6396;
  double t6397;
  double t6401;
  double t6404;
  double t6406;
  double t6408;
  double t6433;
  double t6437;
  double t6443;
  double t6447;
  double t6452;
  double t6458;
  double t6467;
  double t6470;
  double t6471;
  double t6472;
  double t6479;
  double t6490;
  double t6495;
  double t6497;
  double t6514;
  double t6515;
  double t6519;
  double t6520;
  double t6740;
  double t6741;
  double t6743;
  double t6732;
  double t6733;
  double t6734;
  double t6779;
  double t6780;
  double t6781;
  double t6782;
  double t6749;
  double t6750;
  double t6752;
  double t6762;
  double t6769;
  double t6770;
  double t6772;
  double t6777;
  double t6763;
  double t6778;
  double t6783;
  double t6787;
  double t6789;
  double t6791;
  double t6792;
  double t6795;
  double t6800;
  double t6802;
  double t6803;
  double t6810;
  double t6867;
  double t6870;
  double t6871;
  double t6854;
  double t6859;
  double t6860;
  double t6900;
  double t6901;
  double t6902;
  double t6903;
  double t6875;
  double t6880;
  double t6887;
  double t6889;
  double t6894;
  double t6895;
  double t6897;
  double t6898;
  double t6890;
  double t6899;
  double t6904;
  double t6905;
  double t6911;
  double t6914;
  double t6915;
  double t6921;
  double t6924;
  double t6928;
  double t6929;
  double t6930;
  double t7005;
  double t7012;
  double t7014;
  double t6987;
  double t6991;
  double t6992;
  double t7026;
  double t7027;
  double t7028;
  double t7031;
  double t7016;
  double t7017;
  double t7018;
  double t7019;
  double t7021;
  double t7022;
  double t7023;
  double t7024;
  double t7020;
  double t7025;
  double t7032;
  double t7036;
  double t7039;
  double t7044;
  double t7045;
  double t7046;
  double t7048;
  double t7049;
  double t7050;
  double t7054;
  double t7104;
  double t7105;
  double t7106;
  double t7108;
  double t7109;
  double t7110;
  double t7112;
  double t7113;
  double t7125;
  double t7126;
  double t7128;
  double t7119;
  double t7120;
  double t7121;
  double t7115;
  double t7116;
  double t7117;
  double t7118;
  double t7122;
  double t7129;
  double t7130;
  double t7132;
  double t7133;
  double t7134;
  double t7135;
  double t7137;
  double t7138;
  double t7139;
  double t7140;
  double t7165;
  double t7166;
  double t7167;
  double t7170;
  double t7171;
  double t7173;
  double t7177;
  double t7178;
  double t7188;
  double t7189;
  double t7190;
  double t7184;
  double t7185;
  double t7186;
  double t7180;
  double t7181;
  double t7182;
  double t7183;
  double t7187;
  double t7191;
  double t7192;
  double t7194;
  double t7195;
  double t7196;
  double t7197;
  double t7199;
  double t7200;
  double t7201;
  double t7202;
  double t7226;
  double t7227;
  double t7228;
  double t7230;
  double t7231;
  double t7232;
  double t7242;
  double t7243;
  double t7244;
  double t7238;
  double t7239;
  double t7240;
  double t7234;
  double t7235;
  double t7236;
  double t7237;
  double t7241;
  double t7245;
  double t7246;
  double t7248;
  double t7249;
  double t7250;
  double t7251;
  double t7253;
  double t7254;
  double t7255;
  double t7256;
  double t7282;
  double t7283;
  double t7284;
  double t7293;
  double t7294;
  double t7295;
  double t7289;
  double t7290;
  double t7291;
  double t7286;
  double t7287;
  double t7288;
  double t7292;
  double t7296;
  double t7297;
  double t7299;
  double t7300;
  double t7301;
  double t7302;
  double t7304;
  double t7305;
  double t7307;
  double t7308;
  double t7333;
  double t7334;
  double t7335;
  double t7337;
  double t7338;
  double t7339;
  double t7341;
  double t7342;
  double t7343;
  double t7353;
  double t7354;
  double t7355;
  double t7349;
  double t7350;
  double t7351;
  double t7345;
  double t7346;
  double t7347;
  double t7348;
  double t7352;
  double t7356;
  double t7357;
  double t7359;
  double t7360;
  double t7361;
  double t7363;
  double t7367;
  double t7368;
  double t7369;
  double t7370;
  double t7393;
  double t7394;
  double t7395;
  double t7397;
  double t7398;
  double t7399;
  double t7409;
  double t7410;
  double t7411;
  double t7405;
  double t7406;
  double t7407;
  double t7401;
  double t7402;
  double t7403;
  double t7404;
  double t7408;
  double t7412;
  double t7413;
  double t7416;
  double t7417;
  double t7418;
  double t7419;
  double t7421;
  double t7422;
  double t7423;
  double t7424;
  double t7467;
  double t7468;
  double t7469;
  double t7470;
  double t7462;
  double t7463;
  double t7464;
  double t7465;
  double t7457;
  double t7458;
  double t7459;
  double t7460;
  double t7461;
  double t7466;
  double t7471;
  double t7472;
  double t7474;
  double t7475;
  double t7476;
  double t7477;
  double t7479;
  double t7480;
  double t7481;
  double t7482;
  double t7445;
  double t7446;
  double t7447;
  double t7449;
  double t7450;
  double t7451;
  double t7453;
  double t7454;
  double t7455;
  double t7504;
  double t7505;
  double t7518;
  double t7519;
  double t7520;
  double t7521;
  double t7513;
  double t7514;
  double t7515;
  double t7516;
  double t7508;
  double t7509;
  double t7510;
  double t7511;
  double t7512;
  double t7517;
  double t7522;
  double t7523;
  double t7525;
  double t7526;
  double t7527;
  double t7528;
  double t7530;
  double t7531;
  double t7532;
  double t7533;
  double t7567;
  double t7568;
  double t7569;
  double t7570;
  double t7562;
  double t7563;
  double t7564;
  double t7565;
  double t7557;
  double t7558;
  double t7559;
  double t7560;
  double t7561;
  double t7566;
  double t7571;
  double t7572;
  double t7574;
  double t7575;
  double t7576;
  double t7577;
  double t7579;
  double t7580;
  double t7581;
  double t7582;
  double t7615;
  double t7616;
  double t7617;
  double t7618;
  double t7620;
  double t7621;
  double t7622;
  double t7623;
  double t7625;
  double t7626;
  double t7627;
  double t7628;
  double t7603;
  double t7604;
  double t7605;
  double t7607;
  double t7608;
  double t7609;
  double t7611;
  double t7612;
  double t7613;
  double t7646;
  double t7647;
  double t7648;
  double t7655;
  double t7656;
  double t7657;
  double t7658;
  double t7650;
  double t7651;
  double t7652;
  double t7653;
  double t7661;
  double t7663;
  double t7664;
  double t7665;
  double t7667;
  double t7669;
  double t7670;
  double t7671;
  double t7673;
  double t7674;
  double t7675;
  double t7676;
  double t7694;
  double t7695;
  double t7696;
  double t7703;
  double t7704;
  double t7705;
  double t7698;
  double t7699;
  double t7700;
  double t7701;
  double t7707;
  double t7708;
  double t7709;
  double t7710;
  double t7712;
  double t7713;
  double t7714;
  double t7715;
  double t7717;
  double t7718;
  double t7719;
  double t7720;
  double t7766;
  double t7767;
  double t7768;
  double t7769;
  double t7771;
  double t7772;
  double t7773;
  double t7774;
  double t7776;
  double t7777;
  double t7778;
  double t7779;
  double t7753;
  double t7754;
  double t7755;
  double t7757;
  double t7758;
  double t7759;
  double t7761;
  double t7762;
  double t7763;
  double t7797;
  double t7798;
  double t7799;
  double t7800;
  double t7802;
  double t7803;
  double t7804;
  double t7805;
  double t7807;
  double t7808;
  double t7809;
  double t7810;
  t288 = Cos(var1[5]);
  t308 = Sin(var1[3]);
  t309 = Sin(var1[4]);
  t283 = Cos(var1[3]);
  t310 = Sin(var1[5]);
  t1711 = Sin(var1[7]);
  t83 = Cos(var1[6]);
  t315 = -1.*t288*t308*t309;
  t972 = t283*t310;
  t1012 = t315 + t972;
  t306 = -1.*t283*t288;
  t311 = -1.*t308*t309*t310;
  t313 = t306 + t311;
  t1297 = Sin(var1[6]);
  t1666 = Cos(var1[7]);
  t1670 = -1.*t1666;
  t1685 = 1. + t1670;
  t3313 = t83*t313;
  t3321 = -1.*t1012*t1297;
  t3348 = t3313 + t3321;
  t2373 = t83*t1012;
  t2438 = t313*t1297;
  t2484 = t2373 + t2438;
  t1648 = Cos(var1[4]);
  t2940 = 0.366501*t1711;
  t3218 = 0. + t2940;
  t3811 = Cos(var1[8]);
  t3849 = -1.*t3811;
  t3873 = 1. + t3849;
  t3461 = 0.930418*t1711;
  t3516 = 0. + t3461;
  t1751 = -0.930418*t1711;
  t1806 = 0. + t1751;
  t1876 = -0.366501*t1711;
  t2032 = 0. + t1876;
  t5770 = -1.000000637725*t1685;
  t5859 = 1. + t5770;
  t5871 = -1.*t1648*t5859*t308;
  t5875 = t3348*t1806;
  t5881 = t2484*t2032;
  t5942 = t5871 + t5875 + t5881;
  t3979 = -0.340999127418*t1685*t3348;
  t4000 = -0.134322983001*t1685;
  t4032 = 1. + t4000;
  t4170 = t4032*t2484;
  t4175 = -1.*t1648*t308*t3218;
  t4185 = t3979 + t4170 + t4175;
  t5976 = Sin(var1[8]);
  t4710 = -0.8656776547239999*t1685;
  t4711 = 1. + t4710;
  t4780 = t4711*t3348;
  t5035 = -0.340999127418*t1685*t2484;
  t5439 = -1.*t1648*t308*t3516;
  t5515 = t4780 + t5035 + t5439;
  t3613 = Cos(var1[9]);
  t3615 = -1.*t3613;
  t3625 = 1. + t3615;
  t4186 = 0.340999127418*t3873*t4185;
  t4199 = -0.134322983001*t3873;
  t4293 = 1. + t4199;
  t5767 = t4293*t5515;
  t6045 = -0.366501*t5976;
  t6048 = 0. + t6045;
  t6061 = t5942*t6048;
  t6130 = t4186 + t5767 + t6061;
  t6140 = Sin(var1[9]);
  t6188 = -1.000000637725*t3873;
  t6189 = 1. + t6188;
  t6190 = t6189*t5942;
  t6192 = -0.930418*t5976;
  t6196 = 0. + t6192;
  t6197 = t4185*t6196;
  t6203 = 0.366501*t5976;
  t6207 = 0. + t6203;
  t6208 = t5515*t6207;
  t6229 = t6190 + t6197 + t6208;
  t6245 = -0.8656776547239999*t3873;
  t6247 = 1. + t6245;
  t6262 = t6247*t4185;
  t6264 = 0.340999127418*t3873*t5515;
  t6269 = 0.930418*t5976;
  t6277 = 0. + t6269;
  t6282 = t5942*t6277;
  t6299 = t6262 + t6264 + t6282;
  t6329 = 0.366501*t6140;
  t6331 = 0. + t6329;
  t6342 = -0.366501*t6140;
  t6346 = 0. + t6342;
  t6374 = 0.930418*t6140;
  t6385 = 0. + t6374;
  t6142 = -0.930418*t6140;
  t6181 = 0. + t6142;
  t88 = -1.*t83;
  t171 = 1. + t88;
  t277 = 0.091*t171;
  t280 = 0. + t277;
  t1544 = 0.091*t1297;
  t1558 = 0. + t1544;
  t1696 = -0.04500040093286238*t1685;
  t1835 = 0.07877663122399998*t1806;
  t2040 = 0.031030906668*t2032;
  t2072 = 0. + t1696 + t1835 + t2040;
  t6559 = t283*t288*t309;
  t6560 = t308*t310;
  t6564 = t6559 + t6560;
  t6527 = -1.*t288*t308;
  t6529 = t283*t309*t310;
  t6542 = t6527 + t6529;
  t2754 = -3.2909349868922137e-7*var1[7];
  t2773 = 0.03103092645718495*t1685;
  t3225 = -0.045000372235*t3218;
  t3227 = t2754 + t2773 + t3225;
  t3437 = 1.296332362046933e-7*var1[7];
  t3454 = 0.07877668146182712*t1685;
  t3554 = -0.045000372235*t3516;
  t3576 = t3437 + t3454 + t3554;
  t6598 = t83*t6542;
  t6600 = -1.*t6564*t1297;
  t6607 = t6598 + t6600;
  t6570 = t83*t6564;
  t6582 = t6542*t1297;
  t6585 = t6570 + t6582;
  t6628 = t283*t1648*t5859;
  t6630 = t6607*t1806;
  t6635 = t6585*t2032;
  t6637 = t6628 + t6630 + t6635;
  t6610 = -0.340999127418*t1685*t6607;
  t6615 = t4032*t6585;
  t6616 = t283*t1648*t3218;
  t6617 = t6610 + t6615 + t6616;
  t6621 = t4711*t6607;
  t6623 = -0.340999127418*t1685*t6585;
  t6624 = t283*t1648*t3516;
  t6625 = t6621 + t6623 + t6624;
  t6243 = -0.8656776547239999*t3625;
  t6244 = 1. + t6243;
  t6303 = -0.134322983001*t3625;
  t6319 = 1. + t6303;
  t6618 = 0.340999127418*t3873*t6617;
  t6626 = t4293*t6625;
  t6639 = t6637*t6048;
  t6640 = t6618 + t6626 + t6639;
  t6647 = t6189*t6637;
  t6648 = t6617*t6196;
  t6658 = t6625*t6207;
  t6659 = t6647 + t6648 + t6658;
  t6662 = t6247*t6617;
  t6664 = 0.340999127418*t3873*t6625;
  t6669 = t6637*t6277;
  t6671 = t6662 + t6664 + t6669;
  t6352 = -1.000000637725*t3625;
  t6356 = 1. + t6352;
  t6396 = 3.2909349868922137e-7*var1[8];
  t6397 = 0.055653945343889656*t3873;
  t6401 = -0.045000372235*t6048;
  t6404 = t6396 + t6397 + t6401;
  t6406 = -1.5981976069815686e-7*var1[9];
  t6408 = 0.08675267452931407*t3625;
  t6433 = 0.039853013046*t6331;
  t6437 = t6406 + t6408 + t6433;
  t6443 = -0.04500040093286238*t3873;
  t6447 = -0.141285834136*t6196;
  t6452 = 0.055653909852*t6207;
  t6458 = 0. + t6443 + t6447 + t6452;
  t6467 = 0.039853038461262744*t3625;
  t6470 = 0.086752619205*t6346;
  t6471 = -0.22023459268999998*t6385;
  t6472 = 0. + t6467 + t6470 + t6471;
  t6479 = 1.296332362046933e-7*var1[8];
  t6490 = -0.14128592423750855*t3873;
  t6495 = -0.045000372235*t6277;
  t6497 = t6479 + t6490 + t6495;
  t6514 = -6.295460977284962e-8*var1[9];
  t6515 = -0.22023473313910558*t3625;
  t6519 = 0.039853013046*t6181;
  t6520 = t6514 + t6515 + t6519;
  t6740 = t283*t1648*t83*t310;
  t6741 = -1.*t283*t1648*t288*t1297;
  t6743 = t6740 + t6741;
  t6732 = t283*t1648*t288*t83;
  t6733 = t283*t1648*t310*t1297;
  t6734 = t6732 + t6733;
  t6779 = -1.*t283*t5859*t309;
  t6780 = t6743*t1806;
  t6781 = t6734*t2032;
  t6782 = t6779 + t6780 + t6781;
  t6749 = -0.340999127418*t1685*t6743;
  t6750 = t4032*t6734;
  t6752 = -1.*t283*t309*t3218;
  t6762 = t6749 + t6750 + t6752;
  t6769 = t4711*t6743;
  t6770 = -0.340999127418*t1685*t6734;
  t6772 = -1.*t283*t309*t3516;
  t6777 = t6769 + t6770 + t6772;
  t6763 = 0.340999127418*t3873*t6762;
  t6778 = t4293*t6777;
  t6783 = t6782*t6048;
  t6787 = t6763 + t6778 + t6783;
  t6789 = t6189*t6782;
  t6791 = t6762*t6196;
  t6792 = t6777*t6207;
  t6795 = t6789 + t6791 + t6792;
  t6800 = t6247*t6762;
  t6802 = 0.340999127418*t3873*t6777;
  t6803 = t6782*t6277;
  t6810 = t6800 + t6802 + t6803;
  t6867 = t1648*t83*t308*t310;
  t6870 = -1.*t1648*t288*t308*t1297;
  t6871 = t6867 + t6870;
  t6854 = t1648*t288*t83*t308;
  t6859 = t1648*t308*t310*t1297;
  t6860 = t6854 + t6859;
  t6900 = -1.*t5859*t308*t309;
  t6901 = t6871*t1806;
  t6902 = t6860*t2032;
  t6903 = t6900 + t6901 + t6902;
  t6875 = -0.340999127418*t1685*t6871;
  t6880 = t4032*t6860;
  t6887 = -1.*t308*t309*t3218;
  t6889 = t6875 + t6880 + t6887;
  t6894 = t4711*t6871;
  t6895 = -0.340999127418*t1685*t6860;
  t6897 = -1.*t308*t309*t3516;
  t6898 = t6894 + t6895 + t6897;
  t6890 = 0.340999127418*t3873*t6889;
  t6899 = t4293*t6898;
  t6904 = t6903*t6048;
  t6905 = t6890 + t6899 + t6904;
  t6911 = t6189*t6903;
  t6914 = t6889*t6196;
  t6915 = t6898*t6207;
  t6921 = t6911 + t6914 + t6915;
  t6924 = t6247*t6889;
  t6928 = 0.340999127418*t3873*t6898;
  t6929 = t6903*t6277;
  t6930 = t6924 + t6928 + t6929;
  t7005 = -1.*t83*t309*t310;
  t7012 = t288*t309*t1297;
  t7014 = t7005 + t7012;
  t6987 = -1.*t288*t83*t309;
  t6991 = -1.*t309*t310*t1297;
  t6992 = t6987 + t6991;
  t7026 = -1.*t1648*t5859;
  t7027 = t7014*t1806;
  t7028 = t6992*t2032;
  t7031 = t7026 + t7027 + t7028;
  t7016 = -0.340999127418*t1685*t7014;
  t7017 = t4032*t6992;
  t7018 = -1.*t1648*t3218;
  t7019 = t7016 + t7017 + t7018;
  t7021 = t4711*t7014;
  t7022 = -0.340999127418*t1685*t6992;
  t7023 = -1.*t1648*t3516;
  t7024 = t7021 + t7022 + t7023;
  t7020 = 0.340999127418*t3873*t7019;
  t7025 = t4293*t7024;
  t7032 = t7031*t6048;
  t7036 = t7020 + t7025 + t7032;
  t7039 = t6189*t7031;
  t7044 = t7019*t6196;
  t7045 = t7024*t6207;
  t7046 = t7039 + t7044 + t7045;
  t7048 = t6247*t7019;
  t7049 = 0.340999127418*t3873*t7024;
  t7050 = t7031*t6277;
  t7054 = t7048 + t7049 + t7050;
  t7104 = t288*t308;
  t7105 = -1.*t283*t309*t310;
  t7106 = t7104 + t7105;
  t7108 = t83*t7106;
  t7109 = t6564*t1297;
  t7110 = t7108 + t7109;
  t7112 = -1.*t7106*t1297;
  t7113 = t6570 + t7112;
  t7125 = t7113*t1806;
  t7126 = t7110*t2032;
  t7128 = t7125 + t7126;
  t7119 = t4032*t7110;
  t7120 = -0.340999127418*t1685*t7113;
  t7121 = t7119 + t7120;
  t7115 = -0.340999127418*t1685*t7110;
  t7116 = t4711*t7113;
  t7117 = t7115 + t7116;
  t7118 = t4293*t7117;
  t7122 = 0.340999127418*t3873*t7121;
  t7129 = t7128*t6048;
  t7130 = t7118 + t7122 + t7129;
  t7132 = t6189*t7128;
  t7133 = t7121*t6196;
  t7134 = t7117*t6207;
  t7135 = t7132 + t7133 + t7134;
  t7137 = 0.340999127418*t3873*t7117;
  t7138 = t6247*t7121;
  t7139 = t7128*t6277;
  t7140 = t7137 + t7138 + t7139;
  t7165 = t288*t308*t309;
  t7166 = -1.*t283*t310;
  t7167 = t7165 + t7166;
  t7170 = t7167*t1297;
  t7171 = t3313 + t7170;
  t7173 = t83*t7167;
  t7177 = -1.*t313*t1297;
  t7178 = t7173 + t7177;
  t7188 = t7178*t1806;
  t7189 = t7171*t2032;
  t7190 = t7188 + t7189;
  t7184 = t4032*t7171;
  t7185 = -0.340999127418*t1685*t7178;
  t7186 = t7184 + t7185;
  t7180 = -0.340999127418*t1685*t7171;
  t7181 = t4711*t7178;
  t7182 = t7180 + t7181;
  t7183 = t4293*t7182;
  t7187 = 0.340999127418*t3873*t7186;
  t7191 = t7190*t6048;
  t7192 = t7183 + t7187 + t7191;
  t7194 = t6189*t7190;
  t7195 = t7186*t6196;
  t7196 = t7182*t6207;
  t7197 = t7194 + t7195 + t7196;
  t7199 = 0.340999127418*t3873*t7182;
  t7200 = t6247*t7186;
  t7201 = t7190*t6277;
  t7202 = t7199 + t7200 + t7201;
  t7226 = -1.*t1648*t83*t310;
  t7227 = t1648*t288*t1297;
  t7228 = t7226 + t7227;
  t7230 = t1648*t288*t83;
  t7231 = t1648*t310*t1297;
  t7232 = t7230 + t7231;
  t7242 = t7232*t1806;
  t7243 = t7228*t2032;
  t7244 = t7242 + t7243;
  t7238 = t4032*t7228;
  t7239 = -0.340999127418*t1685*t7232;
  t7240 = t7238 + t7239;
  t7234 = -0.340999127418*t1685*t7228;
  t7235 = t4711*t7232;
  t7236 = t7234 + t7235;
  t7237 = t4293*t7236;
  t7241 = 0.340999127418*t3873*t7240;
  t7245 = t7244*t6048;
  t7246 = t7237 + t7241 + t7245;
  t7248 = t6189*t7244;
  t7249 = t7240*t6196;
  t7250 = t7236*t6207;
  t7251 = t7248 + t7249 + t7250;
  t7253 = 0.340999127418*t3873*t7236;
  t7254 = t6247*t7240;
  t7255 = t7244*t6277;
  t7256 = t7253 + t7254 + t7255;
  t7282 = -1.*t83*t6564;
  t7283 = -1.*t6542*t1297;
  t7284 = t7282 + t7283;
  t7293 = t7284*t1806;
  t7294 = t6607*t2032;
  t7295 = t7293 + t7294;
  t7289 = t4032*t6607;
  t7290 = -0.340999127418*t1685*t7284;
  t7291 = t7289 + t7290;
  t7286 = t4711*t7284;
  t7287 = t6610 + t7286;
  t7288 = t4293*t7287;
  t7292 = 0.340999127418*t3873*t7291;
  t7296 = t7295*t6048;
  t7297 = t7288 + t7292 + t7296;
  t7299 = t6189*t7295;
  t7300 = t7291*t6196;
  t7301 = t7287*t6207;
  t7302 = t7299 + t7300 + t7301;
  t7304 = 0.340999127418*t3873*t7287;
  t7305 = t6247*t7291;
  t7307 = t7295*t6277;
  t7308 = t7304 + t7305 + t7307;
  t7333 = t283*t288;
  t7334 = t308*t309*t310;
  t7335 = t7333 + t7334;
  t7337 = t83*t7335;
  t7338 = -1.*t7167*t1297;
  t7339 = t7337 + t7338;
  t7341 = -1.*t83*t7167;
  t7342 = -1.*t7335*t1297;
  t7343 = t7341 + t7342;
  t7353 = t7343*t1806;
  t7354 = t7339*t2032;
  t7355 = t7353 + t7354;
  t7349 = t4032*t7339;
  t7350 = -0.340999127418*t1685*t7343;
  t7351 = t7349 + t7350;
  t7345 = -0.340999127418*t1685*t7339;
  t7346 = t4711*t7343;
  t7347 = t7345 + t7346;
  t7348 = t4293*t7347;
  t7352 = 0.340999127418*t3873*t7351;
  t7356 = t7355*t6048;
  t7357 = t7348 + t7352 + t7356;
  t7359 = t6189*t7355;
  t7360 = t7351*t6196;
  t7361 = t7347*t6207;
  t7363 = t7359 + t7360 + t7361;
  t7367 = 0.340999127418*t3873*t7347;
  t7368 = t6247*t7351;
  t7369 = t7355*t6277;
  t7370 = t7367 + t7368 + t7369;
  t7393 = t1648*t83*t310;
  t7394 = -1.*t1648*t288*t1297;
  t7395 = t7393 + t7394;
  t7397 = -1.*t1648*t288*t83;
  t7398 = -1.*t1648*t310*t1297;
  t7399 = t7397 + t7398;
  t7409 = t7399*t1806;
  t7410 = t7395*t2032;
  t7411 = t7409 + t7410;
  t7405 = t4032*t7395;
  t7406 = -0.340999127418*t1685*t7399;
  t7407 = t7405 + t7406;
  t7401 = -0.340999127418*t1685*t7395;
  t7402 = t4711*t7399;
  t7403 = t7401 + t7402;
  t7404 = t4293*t7403;
  t7408 = 0.340999127418*t3873*t7407;
  t7412 = t7411*t6048;
  t7413 = t7404 + t7408 + t7412;
  t7416 = t6189*t7411;
  t7417 = t7407*t6196;
  t7418 = t7403*t6207;
  t7419 = t7416 + t7417 + t7418;
  t7421 = 0.340999127418*t3873*t7403;
  t7422 = t6247*t7407;
  t7423 = t7411*t6277;
  t7424 = t7421 + t7422 + t7423;
  t7467 = -0.930418*t1666*t6607;
  t7468 = -0.366501*t1666*t6585;
  t7469 = -1.000000637725*t283*t1648*t1711;
  t7470 = t7467 + t7468 + t7469;
  t7462 = 0.366501*t283*t1648*t1666;
  t7463 = -0.340999127418*t6607*t1711;
  t7464 = -0.134322983001*t6585*t1711;
  t7465 = t7462 + t7463 + t7464;
  t7457 = 0.930418*t283*t1648*t1666;
  t7458 = -0.8656776547239999*t6607*t1711;
  t7459 = -0.340999127418*t6585*t1711;
  t7460 = t7457 + t7458 + t7459;
  t7461 = t4293*t7460;
  t7466 = 0.340999127418*t3873*t7465;
  t7471 = t7470*t6048;
  t7472 = t7461 + t7466 + t7471;
  t7474 = t6189*t7470;
  t7475 = t7465*t6196;
  t7476 = t7460*t6207;
  t7477 = t7474 + t7475 + t7476;
  t7479 = 0.340999127418*t3873*t7460;
  t7480 = t6247*t7465;
  t7481 = t7470*t6277;
  t7482 = t7479 + t7480 + t7481;
  t7445 = -0.0846680539949003*t1666;
  t7446 = -0.04500040093286238*t1711;
  t7447 = t7445 + t7446;
  t7449 = -0.016492681424499736*t1666;
  t7450 = 0.03103092645718495*t1711;
  t7451 = -3.2909349868922137e-7 + t7449 + t7450;
  t7453 = -0.04186915633414423*t1666;
  t7454 = 0.07877668146182712*t1711;
  t7455 = 1.296332362046933e-7 + t7453 + t7454;
  t7504 = t7335*t1297;
  t7505 = t7173 + t7504;
  t7518 = -0.930418*t1666*t7339;
  t7519 = -0.366501*t1666*t7505;
  t7520 = -1.000000637725*t1648*t308*t1711;
  t7521 = t7518 + t7519 + t7520;
  t7513 = 0.366501*t1648*t1666*t308;
  t7514 = -0.340999127418*t7339*t1711;
  t7515 = -0.134322983001*t7505*t1711;
  t7516 = t7513 + t7514 + t7515;
  t7508 = 0.930418*t1648*t1666*t308;
  t7509 = -0.8656776547239999*t7339*t1711;
  t7510 = -0.340999127418*t7505*t1711;
  t7511 = t7508 + t7509 + t7510;
  t7512 = t4293*t7511;
  t7517 = 0.340999127418*t3873*t7516;
  t7522 = t7521*t6048;
  t7523 = t7512 + t7517 + t7522;
  t7525 = t6189*t7521;
  t7526 = t7516*t6196;
  t7527 = t7511*t6207;
  t7528 = t7525 + t7526 + t7527;
  t7530 = 0.340999127418*t3873*t7511;
  t7531 = t6247*t7516;
  t7532 = t7521*t6277;
  t7533 = t7530 + t7531 + t7532;
  t7567 = -0.930418*t1666*t7395;
  t7568 = -0.366501*t1666*t7232;
  t7569 = 1.000000637725*t309*t1711;
  t7570 = t7567 + t7568 + t7569;
  t7562 = -0.366501*t1666*t309;
  t7563 = -0.340999127418*t7395*t1711;
  t7564 = -0.134322983001*t7232*t1711;
  t7565 = t7562 + t7563 + t7564;
  t7557 = -0.930418*t1666*t309;
  t7558 = -0.8656776547239999*t7395*t1711;
  t7559 = -0.340999127418*t7232*t1711;
  t7560 = t7557 + t7558 + t7559;
  t7561 = t4293*t7560;
  t7566 = 0.340999127418*t3873*t7565;
  t7571 = t7570*t6048;
  t7572 = t7561 + t7566 + t7571;
  t7574 = t6189*t7570;
  t7575 = t7565*t6196;
  t7576 = t7560*t6207;
  t7577 = t7574 + t7575 + t7576;
  t7579 = 0.340999127418*t3873*t7560;
  t7580 = t6247*t7565;
  t7581 = t7570*t6277;
  t7582 = t7579 + t7580 + t7581;
  t7615 = -0.930418*t3811*t6617;
  t7616 = 0.366501*t3811*t6625;
  t7617 = -1.000000637725*t6637*t5976;
  t7618 = t7615 + t7616 + t7617;
  t7620 = -0.366501*t3811*t6637;
  t7621 = 0.340999127418*t6617*t5976;
  t7622 = -0.134322983001*t6625*t5976;
  t7623 = t7620 + t7621 + t7622;
  t7625 = 0.930418*t3811*t6637;
  t7626 = -0.8656776547239999*t6617*t5976;
  t7627 = 0.340999127418*t6625*t5976;
  t7628 = t7625 + t7626 + t7627;
  t7603 = -0.04186915633414423*t3811;
  t7604 = -0.14128592423750855*t5976;
  t7605 = 1.296332362046933e-7 + t7603 + t7604;
  t7607 = 0.15185209683981668*t3811;
  t7608 = -0.04500040093286238*t5976;
  t7609 = t7607 + t7608;
  t7611 = 0.016492681424499736*t3811;
  t7612 = 0.055653945343889656*t5976;
  t7613 = 3.2909349868922137e-7 + t7611 + t7612;
  t7646 = t4032*t7505;
  t7647 = t1648*t308*t3218;
  t7648 = t7345 + t7646 + t7647;
  t7655 = t4711*t7339;
  t7656 = -0.340999127418*t1685*t7505;
  t7657 = t1648*t308*t3516;
  t7658 = t7655 + t7656 + t7657;
  t7650 = t1648*t5859*t308;
  t7651 = t7339*t1806;
  t7652 = t7505*t2032;
  t7653 = t7650 + t7651 + t7652;
  t7661 = -0.930418*t3811*t7648;
  t7663 = 0.366501*t3811*t7658;
  t7664 = -1.000000637725*t7653*t5976;
  t7665 = t7661 + t7663 + t7664;
  t7667 = -0.366501*t3811*t7653;
  t7669 = 0.340999127418*t7648*t5976;
  t7670 = -0.134322983001*t7658*t5976;
  t7671 = t7667 + t7669 + t7670;
  t7673 = 0.930418*t3811*t7653;
  t7674 = -0.8656776547239999*t7648*t5976;
  t7675 = 0.340999127418*t7658*t5976;
  t7676 = t7673 + t7674 + t7675;
  t7694 = t4032*t7232;
  t7695 = -1.*t309*t3218;
  t7696 = t7401 + t7694 + t7695;
  t7703 = t4711*t7395;
  t7704 = -1.*t309*t3516;
  t7705 = t7703 + t7239 + t7704;
  t7698 = -1.*t5859*t309;
  t7699 = t7395*t1806;
  t7700 = t7232*t2032;
  t7701 = t7698 + t7699 + t7700;
  t7707 = -0.930418*t3811*t7696;
  t7708 = 0.366501*t3811*t7705;
  t7709 = -1.000000637725*t7701*t5976;
  t7710 = t7707 + t7708 + t7709;
  t7712 = -0.366501*t3811*t7701;
  t7713 = 0.340999127418*t7696*t5976;
  t7714 = -0.134322983001*t7705*t5976;
  t7715 = t7712 + t7713 + t7714;
  t7717 = 0.930418*t3811*t7701;
  t7718 = -0.8656776547239999*t7696*t5976;
  t7719 = 0.340999127418*t7705*t5976;
  t7720 = t7717 + t7718 + t7719;
  t7766 = 0.340999127418*t3873*t7648;
  t7767 = t4293*t7658;
  t7768 = t7653*t6048;
  t7769 = t7766 + t7767 + t7768;
  t7771 = t6189*t7653;
  t7772 = t7648*t6196;
  t7773 = t7658*t6207;
  t7774 = t7771 + t7772 + t7773;
  t7776 = t6247*t7648;
  t7777 = 0.340999127418*t3873*t7658;
  t7778 = t7653*t6277;
  t7779 = t7776 + t7777 + t7778;
  t7753 = 0.014606169134372047*t3613;
  t7754 = 0.08675267452931407*t6140;
  t7755 = -1.5981976069815686e-7 + t7753 + t7754;
  t7757 = -0.23670515095269612*t3613;
  t7758 = 0.039853038461262744*t6140;
  t7759 = t7757 + t7758;
  t7761 = -0.03707996069223323*t3613;
  t7762 = -0.22023473313910558*t6140;
  t7763 = -6.295460977284962e-8 + t7761 + t7762;
  t7797 = 0.340999127418*t3873*t7696;
  t7798 = t4293*t7705;
  t7799 = t7701*t6048;
  t7800 = t7797 + t7798 + t7799;
  t7802 = t6189*t7701;
  t7803 = t7696*t6196;
  t7804 = t7705*t6207;
  t7805 = t7802 + t7803 + t7804;
  t7807 = t6247*t7696;
  t7808 = 0.340999127418*t3873*t7705;
  t7809 = t7701*t6277;
  t7810 = t7807 + t7808 + t7809;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1012*t1558 - 1.*t1648*t2072*t308 + t280*t313 + t2484*t3227 + t3348*t3576 - 0.189386*(0.340999127418*t3625*t6130 + t6181*t6229 + t6244*t6299) + 0.165064*(0.340999127418*t3625*t6299 + t6130*t6319 + t6229*t6331) + 0.039853*(t6130*t6346 + t6229*t6356 + t6299*t6385) + t5515*t6404 + t6130*t6437 + t5942*t6458 + t6229*t6472 + t4185*t6497 + t6299*t6520;
  p_output1[10]=t1648*t2072*t283 + t280*t6542 + t1558*t6564 + t3227*t6585 + t3576*t6607 + t6497*t6617 + t6404*t6625 + t6458*t6637 + t6437*t6640 + t6472*t6659 + t6520*t6671 + 0.165064*(t6319*t6640 + t6331*t6659 + 0.340999127418*t3625*t6671) - 0.189386*(0.340999127418*t3625*t6640 + t6181*t6659 + t6244*t6671) + 0.039853*(t6346*t6640 + t6356*t6659 + t6385*t6671);
  p_output1[11]=0;
  p_output1[12]=t1558*t1648*t283*t288 - 1.*t2072*t283*t309 + t1648*t280*t283*t310 + t3227*t6734 + t3576*t6743 + t6497*t6762 + t6404*t6777 + t6458*t6782 + t6437*t6787 + t6472*t6795 + t6520*t6810 + 0.165064*(t6319*t6787 + t6331*t6795 + 0.340999127418*t3625*t6810) - 0.189386*(0.340999127418*t3625*t6787 + t6181*t6795 + t6244*t6810) + 0.039853*(t6346*t6787 + t6356*t6795 + t6385*t6810);
  p_output1[13]=t1558*t1648*t288*t308 - 1.*t2072*t308*t309 + t1648*t280*t308*t310 + t3227*t6860 + t3576*t6871 + t6497*t6889 + t6404*t6898 + t6458*t6903 + t6437*t6905 + t6472*t6921 + t6520*t6930 + 0.165064*(t6319*t6905 + t6331*t6921 + 0.340999127418*t3625*t6930) - 0.189386*(0.340999127418*t3625*t6905 + t6181*t6921 + t6244*t6930) + 0.039853*(t6346*t6905 + t6356*t6921 + t6385*t6930);
  p_output1[14]=-1.*t1648*t2072 - 1.*t1558*t288*t309 - 1.*t280*t309*t310 + t3227*t6992 + t3576*t7014 + t6497*t7019 + t6404*t7024 + t6458*t7031 + t6437*t7036 + t6472*t7046 + t6520*t7054 + 0.165064*(t6319*t7036 + t6331*t7046 + 0.340999127418*t3625*t7054) - 0.189386*(0.340999127418*t3625*t7036 + t6181*t7046 + t6244*t7054) + 0.039853*(t6346*t7036 + t6356*t7046 + t6385*t7054);
  p_output1[15]=t280*t6564 + t1558*t7106 + t3227*t7110 + t3576*t7113 + t6404*t7117 + t6497*t7121 + t6458*t7128 + t6437*t7130 + t6472*t7135 + t6520*t7140 + 0.165064*(t6319*t7130 + t6331*t7135 + 0.340999127418*t3625*t7140) - 0.189386*(0.340999127418*t3625*t7130 + t6181*t7135 + t6244*t7140) + 0.039853*(t6346*t7130 + t6356*t7135 + t6385*t7140);
  p_output1[16]=t1558*t313 + t280*t7167 + t3227*t7171 + t3576*t7178 + t6404*t7182 + t6497*t7186 + t6458*t7190 + t6437*t7192 + t6472*t7197 + t6520*t7202 + 0.165064*(t6319*t7192 + t6331*t7197 + 0.340999127418*t3625*t7202) - 0.189386*(0.340999127418*t3625*t7192 + t6181*t7197 + t6244*t7202) + 0.039853*(t6346*t7192 + t6356*t7197 + t6385*t7202);
  p_output1[17]=t1648*t280*t288 - 1.*t1558*t1648*t310 + t3227*t7228 + t3576*t7232 + t6404*t7236 + t6497*t7240 + t6458*t7244 + t6437*t7246 + t6472*t7251 + t6520*t7256 + 0.165064*(t6319*t7246 + t6331*t7251 + 0.340999127418*t3625*t7256) - 0.189386*(0.340999127418*t3625*t7246 + t6181*t7251 + t6244*t7256) + 0.039853*(t6346*t7246 + t6356*t7251 + t6385*t7256);
  p_output1[18]=0.091*t1297*t6542 + t3227*t6607 + t3576*t7284 + t6404*t7287 + t6497*t7291 + t6458*t7295 + t6437*t7297 + t6472*t7302 + t6520*t7308 + 0.165064*(t6319*t7297 + t6331*t7302 + 0.340999127418*t3625*t7308) - 0.189386*(0.340999127418*t3625*t7297 + t6181*t7302 + t6244*t7308) + 0.039853*(t6346*t7297 + t6356*t7302 + t6385*t7308) + 0.091*t6564*t83;
  p_output1[19]=0.091*t1297*t7335 + t3227*t7339 + t3576*t7343 + t6404*t7347 + t6497*t7351 + t6458*t7355 + t6437*t7357 + t6472*t7363 + t6520*t7370 + 0.165064*(t6319*t7357 + t6331*t7363 + 0.340999127418*t3625*t7370) - 0.189386*(0.340999127418*t3625*t7357 + t6181*t7363 + t6244*t7370) + 0.039853*(t6346*t7357 + t6356*t7363 + t6385*t7370) + 0.091*t7167*t83;
  p_output1[20]=0.091*t1297*t1648*t310 + t3227*t7395 + t3576*t7399 + t6404*t7403 + t6497*t7407 + t6458*t7411 + t6437*t7413 + t6472*t7419 + t6520*t7424 + 0.165064*(t6319*t7413 + t6331*t7419 + 0.340999127418*t3625*t7424) - 0.189386*(0.340999127418*t3625*t7413 + t6181*t7419 + t6244*t7424) + 0.039853*(t6346*t7413 + t6356*t7419 + t6385*t7424) + 0.091*t1648*t288*t83;
  p_output1[21]=t1648*t283*t7447 + t6585*t7451 + t6607*t7455 + t6404*t7460 + t6497*t7465 + t6458*t7470 + t6437*t7472 + t6472*t7477 + t6520*t7482 + 0.165064*(t6319*t7472 + t6331*t7477 + 0.340999127418*t3625*t7482) - 0.189386*(0.340999127418*t3625*t7472 + t6181*t7477 + t6244*t7482) + 0.039853*(t6346*t7472 + t6356*t7477 + t6385*t7482);
  p_output1[22]=t1648*t308*t7447 + t7339*t7455 + t7451*t7505 + t6404*t7511 + t6497*t7516 + t6458*t7521 + t6437*t7523 + t6472*t7528 + t6520*t7533 + 0.165064*(t6319*t7523 + t6331*t7528 + 0.340999127418*t3625*t7533) - 0.189386*(0.340999127418*t3625*t7523 + t6181*t7528 + t6244*t7533) + 0.039853*(t6346*t7523 + t6356*t7528 + t6385*t7533);
  p_output1[23]=-1.*t309*t7447 + t7232*t7451 + t7395*t7455 + t6404*t7560 + t6497*t7565 + t6458*t7570 + t6437*t7572 + t6472*t7577 + t6520*t7582 + 0.165064*(t6319*t7572 + t6331*t7577 + 0.340999127418*t3625*t7582) - 0.189386*(0.340999127418*t3625*t7572 + t6181*t7577 + t6244*t7582) + 0.039853*(t6346*t7572 + t6356*t7577 + t6385*t7582);
  p_output1[24]=t6617*t7605 + t6637*t7609 + t6625*t7613 + t6472*t7618 + t6437*t7623 + t6520*t7628 + 0.165064*(t6331*t7618 + t6319*t7623 + 0.340999127418*t3625*t7628) - 0.189386*(t6181*t7618 + 0.340999127418*t3625*t7623 + t6244*t7628) + 0.039853*(t6356*t7618 + t6346*t7623 + t6385*t7628);
  p_output1[25]=t7605*t7648 + t7609*t7653 + t7613*t7658 + t6472*t7665 + t6437*t7671 + t6520*t7676 + 0.165064*(t6331*t7665 + t6319*t7671 + 0.340999127418*t3625*t7676) - 0.189386*(t6181*t7665 + 0.340999127418*t3625*t7671 + t6244*t7676) + 0.039853*(t6356*t7665 + t6346*t7671 + t6385*t7676);
  p_output1[26]=t7605*t7696 + t7609*t7701 + t7613*t7705 + t6472*t7710 + t6437*t7715 + t6520*t7720 + 0.165064*(t6331*t7710 + t6319*t7715 + 0.340999127418*t3625*t7720) - 0.189386*(t6181*t7710 + 0.340999127418*t3625*t7715 + t6244*t7720) + 0.039853*(t6356*t7710 + t6346*t7715 + t6385*t7720);
  p_output1[27]=0.039853*(-0.366501*t3613*t6640 - 1.000000637725*t6140*t6659 + 0.930418*t3613*t6671) - 0.189386*(0.340999127418*t6140*t6640 - 0.930418*t3613*t6659 - 0.8656776547239999*t6140*t6671) + 0.165064*(-0.134322983001*t6140*t6640 + 0.366501*t3613*t6659 + 0.340999127418*t6140*t6671) + t6640*t7755 + t6659*t7759 + t6671*t7763;
  p_output1[28]=t7755*t7769 + t7759*t7774 + t7763*t7779 + 0.039853*(-0.366501*t3613*t7769 - 1.000000637725*t6140*t7774 + 0.930418*t3613*t7779) - 0.189386*(0.340999127418*t6140*t7769 - 0.930418*t3613*t7774 - 0.8656776547239999*t6140*t7779) + 0.165064*(-0.134322983001*t6140*t7769 + 0.366501*t3613*t7774 + 0.340999127418*t6140*t7779);
  p_output1[29]=t7755*t7800 + t7759*t7805 + t7763*t7810 + 0.039853*(-0.366501*t3613*t7800 - 1.000000637725*t6140*t7805 + 0.930418*t3613*t7810) - 0.189386*(0.340999127418*t6140*t7800 - 0.930418*t3613*t7805 - 0.8656776547239999*t6140*t7810) + 0.165064*(-0.134322983001*t6140*t7800 + 0.366501*t3613*t7805 + 0.340999127418*t6140*t7810);
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



void Jp_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
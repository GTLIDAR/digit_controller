/*
 * Automatically Generated from Mathematica.
 * Mon 14 Sep 2020 10:50:50 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif
#include "p_rightFoot.hh"

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t7;
  double t35;
  double t38;
  double t36;
  double t39;
  double t9;
  double t19;
  double t21;
  double t29;
  double t34;
  double t37;
  double t40;
  double t41;
  double t43;
  double t49;
  double t50;
  double t51;
  double t8;
  double t59;
  double t60;
  double t61;
  double t69;
  double t70;
  double t71;
  double t77;
  double t78;
  double t79;
  double t84;
  double t87;
  double t88;
  double t89;
  double t92;
  double t93;
  double t94;
  double t102;
  double t103;
  double t104;
  double t105;
  double t106;
  double t107;
  double t114;
  double t115;
  double t116;
  double t117;
  double t121;
  double t122;
  double t124;
  double t125;
  double t126;
  double t130;
  double t133;
  double t134;
  double t135;
  double t136;
  double t139;
  double t140;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t156;
  double t164;
  double t165;
  double t166;
  double t167;
  double t168;
  double t169;
  double t174;
  double t175;
  double t176;
  double t178;
  double t181;
  double t182;
  double t185;
  double t186;
  double t187;
  double t188;
  double t197;
  double t198;
  double t201;
  double t202;
  double t203;
  double t204;
  double t211;
  double t212;
  double t213;
  double t214;
  double t215;
  double t216;
  double t220;
  double t221;
  double t222;
  double t224;
  double t230;
  double t231;
  double t232;
  double t233;
  double t234;
  double t235;
  double t241;
  double t244;
  double t245;
  double t246;
  double t247;
  double t248;
  double t254;
  double t255;
  double t256;
  double t257;
  double t260;
  double t261;
  double t264;
  double t265;
  double t266;
  double t268;
  double t308;
  double t309;
  double t310;
  double t313;
  double t271;
  double t272;
  double t275;
  double t276;
  double t277;
  double t278;
  double t284;
  double t285;
  double t288;
  double t289;
  double t290;
  double t293;
  double t298;
  double t299;
  double t300;
  double t301;
  double t302;
  double t305;
  double t321;
  double t338;
  double t312;
  double t355;
  double t326;
  double t327;
  double t328;
  double t329;
  double t330;
  double t331;
  double t352;
  double t343;
  double t344;
  double t345;
  double t346;
  double t347;
  double t348;
  double t359;
  double t360;
  double t361;
  double t362;
  double t363;
  double t364;
  double t322;
  double t366;
  double t315;
  double t380;
  double t335;
  double t369;
  double t339;
  double t28;
  double t30;
  double t31;
  double t44;
  double t45;
  double t53;
  double t54;
  double t57;
  double t58;
  double t398;
  double t399;
  double t400;
  double t402;
  double t403;
  double t404;
  double t63;
  double t64;
  double t67;
  double t68;
  double t73;
  double t80;
  double t85;
  double t86;
  double t406;
  double t407;
  double t408;
  double t410;
  double t411;
  double t412;
  double t96;
  double t97;
  double t98;
  double t101;
  double t109;
  double t110;
  double t113;
  double t129;
  double t131;
  double t132;
  double t414;
  double t415;
  double t416;
  double t417;
  double t419;
  double t420;
  double t421;
  double t422;
  double t424;
  double t425;
  double t426;
  double t427;
  double t142;
  double t143;
  double t144;
  double t145;
  double t158;
  double t159;
  double t160;
  double t161;
  double t173;
  double t177;
  double t179;
  double t180;
  double t429;
  double t430;
  double t431;
  double t432;
  double t434;
  double t435;
  double t436;
  double t438;
  double t440;
  double t441;
  double t442;
  double t443;
  double t193;
  double t194;
  double t195;
  double t196;
  double t206;
  double t207;
  double t208;
  double t223;
  double t225;
  double t229;
  double t445;
  double t446;
  double t447;
  double t448;
  double t450;
  double t451;
  double t452;
  double t453;
  double t456;
  double t457;
  double t458;
  double t459;
  double t237;
  double t238;
  double t239;
  double t240;
  double t250;
  double t251;
  double t252;
  double t253;
  double t263;
  double t267;
  double t269;
  double t270;
  double t461;
  double t462;
  double t463;
  double t464;
  double t466;
  double t467;
  double t468;
  double t469;
  double t471;
  double t472;
  double t473;
  double t474;
  double t280;
  double t281;
  double t282;
  double t283;
  double t295;
  double t296;
  double t297;
  double t307;
  double t311;
  double t317;
  double t319;
  double t323;
  double t324;
  double t325;
  double t476;
  double t477;
  double t478;
  double t479;
  double t481;
  double t482;
  double t483;
  double t484;
  double t486;
  double t487;
  double t488;
  double t489;
  double t333;
  double t334;
  double t336;
  double t337;
  double t340;
  double t341;
  double t342;
  double t350;
  double t351;
  double t353;
  double t354;
  double t356;
  double t357;
  double t358;
  double t367;
  double t491;
  double t492;
  double t493;
  double t494;
  double t370;
  double t496;
  double t497;
  double t498;
  double t499;
  double t372;
  double t373;
  double t501;
  double t502;
  double t503;
  double t504;
  double t377;
  double t378;
  double t381;
  double t383;
  double t387;
  double t389;
  double t390;
  double t392;
  double t525;
  double t526;
  double t527;
  double t529;
  double t530;
  double t531;
  double t533;
  double t534;
  double t535;
  double t536;
  double t538;
  double t539;
  double t540;
  double t541;
  double t543;
  double t544;
  double t545;
  double t546;
  double t548;
  double t549;
  double t550;
  double t551;
  double t553;
  double t555;
  double t556;
  double t557;
  double t559;
  double t560;
  double t561;
  double t562;
  double t564;
  double t565;
  double t566;
  double t567;
  double t569;
  double t570;
  double t571;
  double t573;
  double t575;
  double t576;
  double t577;
  double t578;
  double t580;
  double t581;
  double t582;
  double t583;
  double t585;
  double t586;
  double t587;
  double t588;
  double t590;
  double t591;
  double t592;
  double t593;
  double t595;
  double t596;
  double t597;
  double t598;
  double t600;
  double t601;
  double t602;
  double t603;
  double t605;
  double t606;
  double t607;
  double t608;
  double t610;
  double t611;
  double t612;
  double t613;
  double t615;
  double t616;
  double t617;
  double t618;
  double t620;
  double t621;
  double t622;
  double t623;
  t7 = Cos(var1[3]);
  t35 = Cos(var1[5]);
  t38 = Sin(var1[3]);
  t36 = Sin(var1[4]);
  t39 = Sin(var1[5]);
  t9 = Cos(var1[15]);
  t19 = -1.*t9;
  t21 = 1. + t19;
  t29 = Sin(var1[15]);
  t34 = Sin(var1[14]);
  t37 = t7*t35*t36;
  t40 = t38*t39;
  t41 = t37 + t40;
  t43 = Cos(var1[14]);
  t49 = -1.*t35*t38;
  t50 = t7*t36*t39;
  t51 = t49 + t50;
  t8 = Cos(var1[4]);
  t59 = -1.*t34*t41;
  t60 = t43*t51;
  t61 = t59 + t60;
  t69 = t43*t41;
  t70 = t34*t51;
  t71 = t69 + t70;
  t77 = Cos(var1[16]);
  t78 = -1.*t77;
  t79 = 1. + t78;
  t84 = Sin(var1[16]);
  t87 = -0.366501*t7*t8*t29;
  t88 = 0.340999127418*t21*t61;
  t89 = -0.134322983001*t21;
  t92 = 1. + t89;
  t93 = t92*t71;
  t94 = t87 + t88 + t93;
  t102 = 0.930418*t7*t8*t29;
  t103 = -0.8656776547239999*t21;
  t104 = 1. + t103;
  t105 = t104*t61;
  t106 = 0.340999127418*t21*t71;
  t107 = t102 + t105 + t106;
  t114 = -1.000000637725*t21;
  t115 = 1. + t114;
  t116 = t115*t7*t8;
  t117 = -0.930418*t29*t61;
  t121 = 0.366501*t29*t71;
  t122 = t116 + t117 + t121;
  t124 = Cos(var1[17]);
  t125 = -1.*t124;
  t126 = 1. + t125;
  t130 = Sin(var1[17]);
  t133 = 0.930418*t84*t94;
  t134 = 0.366501*t84*t107;
  t135 = -1.000000637725*t79;
  t136 = 1. + t135;
  t139 = t136*t122;
  t140 = t133 + t134 + t139;
  t148 = -0.8656776547239999*t79;
  t149 = 1. + t148;
  t150 = t149*t94;
  t151 = -0.340999127418*t79*t107;
  t152 = -0.930418*t84*t122;
  t156 = t150 + t151 + t152;
  t164 = -0.340999127418*t79*t94;
  t165 = -0.134322983001*t79;
  t166 = 1. + t165;
  t167 = t166*t107;
  t168 = -0.366501*t84*t122;
  t169 = t164 + t167 + t168;
  t174 = Cos(var1[18]);
  t175 = -1.*t174;
  t176 = 1. + t175;
  t178 = Sin(var1[18]);
  t181 = 0.366501*t130*t140;
  t182 = -0.340999127418*t126*t156;
  t185 = -0.134322983001*t126;
  t186 = 1. + t185;
  t187 = t186*t169;
  t188 = t181 + t182 + t187;
  t197 = 0.930418*t130*t140;
  t198 = -0.8656776547239999*t126;
  t201 = 1. + t198;
  t202 = t201*t156;
  t203 = -0.340999127418*t126*t169;
  t204 = t197 + t202 + t203;
  t211 = -1.000000637725*t126;
  t212 = 1. + t211;
  t213 = t212*t140;
  t214 = -0.930418*t130*t156;
  t215 = -0.366501*t130*t169;
  t216 = t213 + t214 + t215;
  t220 = Cos(var1[19]);
  t221 = -1.*t220;
  t222 = 1. + t221;
  t224 = Sin(var1[19]);
  t230 = -0.366501*t178*t188;
  t231 = -0.930418*t178*t204;
  t232 = -1.000000637725*t176;
  t233 = 1. + t232;
  t234 = t233*t216;
  t235 = t230 + t231 + t234;
  t241 = -0.134322983001*t176;
  t244 = 1. + t241;
  t245 = t244*t188;
  t246 = -0.340999127418*t176*t204;
  t247 = 0.366501*t178*t216;
  t248 = t245 + t246 + t247;
  t254 = -0.340999127418*t176*t188;
  t255 = -0.8656776547239999*t176;
  t256 = 1. + t255;
  t257 = t256*t204;
  t260 = 0.930418*t178*t216;
  t261 = t254 + t257 + t260;
  t264 = Cos(var1[20]);
  t265 = -1.*t264;
  t266 = 1. + t265;
  t268 = Sin(var1[20]);
  t308 = Cos(var1[21]);
  t309 = -1.*t308;
  t310 = 1. + t309;
  t313 = Sin(var1[21]);
  t271 = 0.930418*t224*t235;
  t272 = -0.340999127418*t222*t248;
  t275 = -0.8656776547239999*t222;
  t276 = 1. + t275;
  t277 = t276*t261;
  t278 = t271 + t272 + t277;
  t284 = 0.366501*t224*t235;
  t285 = -0.134322983001*t222;
  t288 = 1. + t285;
  t289 = t288*t248;
  t290 = -0.340999127418*t222*t261;
  t293 = t284 + t289 + t290;
  t298 = -1.000000637725*t222;
  t299 = 1. + t298;
  t300 = t299*t235;
  t301 = -0.366501*t224*t248;
  t302 = -0.930418*t224*t261;
  t305 = t300 + t301 + t302;
  t321 = -0.175248972904*t310;
  t338 = -0.120666640478*t310;
  t312 = -0.444895486988*t310;
  t355 = 0.218018*t313;
  t326 = -0.930418*t268*t278;
  t327 = -0.366501*t268*t293;
  t328 = -1.000000637725*t266;
  t329 = 1. + t328;
  t330 = t329*t305;
  t331 = t326 + t327 + t330;
  t352 = -0.803828*t313;
  t343 = -0.340999127418*t266*t278;
  t344 = -0.134322983001*t266;
  t345 = 1. + t344;
  t346 = t345*t293;
  t347 = 0.366501*t268*t305;
  t348 = t343 + t346 + t347;
  t359 = -0.8656776547239999*t266;
  t360 = 1. + t359;
  t361 = t360*t278;
  t362 = -0.340999127418*t266*t293;
  t363 = 0.930418*t268*t305;
  t364 = t361 + t362 + t363;
  t322 = 0.553471*t313;
  t366 = 0.444895486988*t310;
  t315 = -0.218018*t313;
  t380 = 0.175248972904*t310;
  t335 = -0.553471*t313;
  t369 = 0.120666640478*t310;
  t339 = 0.803828*t313;
  t28 = -0.04500040093286238*t21;
  t30 = 0.0846680539949003*t29;
  t31 = t28 + t30;
  t44 = -1.*t43;
  t45 = 1. + t44;
  t53 = 1.296332362046933e-7*var1[15];
  t54 = -0.07877668146182712*t21;
  t57 = -0.04186915633414423*t29;
  t58 = t53 + t54 + t57;
  t398 = t35*t38*t36;
  t399 = -1.*t7*t39;
  t400 = t398 + t399;
  t402 = t7*t35;
  t403 = t38*t36*t39;
  t404 = t402 + t403;
  t63 = 3.2909349868922137e-7*var1[15];
  t64 = 0.03103092645718495*t21;
  t67 = 0.016492681424499736*t29;
  t68 = t63 + t64 + t67;
  t73 = -1.296332362046933e-7*var1[16];
  t80 = -0.14128592423750855*t79;
  t85 = 0.04186915633414423*t84;
  t86 = t73 + t80 + t85;
  t406 = -1.*t34*t400;
  t407 = t43*t404;
  t408 = t406 + t407;
  t410 = t43*t400;
  t411 = t34*t404;
  t412 = t410 + t411;
  t96 = 3.2909349868922137e-7*var1[16];
  t97 = -0.055653945343889656*t79;
  t98 = 0.016492681424499736*t84;
  t101 = t96 + t97 + t98;
  t109 = -0.04500040093286238*t79;
  t110 = -0.15185209683981668*t84;
  t113 = t109 + t110;
  t129 = 0.039853038461262744*t126;
  t131 = 0.23670515095269612*t130;
  t132 = t129 + t131;
  t414 = -0.366501*t8*t29*t38;
  t415 = 0.340999127418*t21*t408;
  t416 = t92*t412;
  t417 = t414 + t415 + t416;
  t419 = 0.930418*t8*t29*t38;
  t420 = t104*t408;
  t421 = 0.340999127418*t21*t412;
  t422 = t419 + t420 + t421;
  t424 = t115*t8*t38;
  t425 = -0.930418*t29*t408;
  t426 = 0.366501*t29*t412;
  t427 = t424 + t425 + t426;
  t142 = 6.295460977284962e-8*var1[17];
  t143 = -0.22023473313910558*t126;
  t144 = 0.03707996069223323*t130;
  t145 = t142 + t143 + t144;
  t158 = -1.5981976069815686e-7*var1[17];
  t159 = -0.08675267452931407*t126;
  t160 = 0.014606169134372047*t130;
  t161 = t158 + t159 + t160;
  t173 = -4.0833068682577724e-7*var1[18];
  t177 = -0.11476729583292707*t176;
  t179 = 0.0111594154470601*t178;
  t180 = t173 + t177 + t179;
  t429 = 0.930418*t84*t417;
  t430 = 0.366501*t84*t422;
  t431 = t136*t427;
  t432 = t429 + t430 + t431;
  t434 = t149*t417;
  t435 = -0.340999127418*t79*t422;
  t436 = -0.930418*t84*t427;
  t438 = t434 + t435 + t436;
  t440 = -0.340999127418*t79*t417;
  t441 = t166*t422;
  t442 = -0.366501*t84*t427;
  t443 = t440 + t441 + t442;
  t193 = 1.6084556086870008e-7*var1[18];
  t194 = -0.29135406957765553*t176;
  t195 = 0.02832985722118838*t178;
  t196 = t193 + t194 + t195;
  t206 = 0.03044854601678662*t176;
  t207 = 0.3131431996991197*t178;
  t208 = t206 + t207;
  t223 = -0.26285954081199375*t222;
  t225 = 0.634735404786378*t224;
  t229 = t223 + t225;
  t445 = 0.366501*t130*t432;
  t446 = -0.340999127418*t126*t438;
  t447 = t186*t443;
  t448 = t445 + t446 + t447;
  t450 = 0.930418*t130*t432;
  t451 = t201*t438;
  t452 = -0.340999127418*t126*t443;
  t453 = t450 + t451 + t452;
  t456 = t212*t432;
  t457 = -0.930418*t130*t438;
  t458 = -0.366501*t130*t443;
  t459 = t456 + t457 + t458;
  t237 = 1.6169269214444473e-7*var1[19];
  t238 = -0.2326311605896123*t222;
  t239 = -0.09633822312984319*t224;
  t240 = t237 + t238 + t239;
  t250 = -6.369237629068993e-8*var1[19];
  t251 = -0.5905692458505322*t222;
  t252 = -0.24456909227538925*t224;
  t253 = t250 + t251 + t252;
  t263 = -7.041766963257243e-8*var1[20];
  t267 = -0.8232948486053725*t266;
  t269 = 0.05763710717422546*t268;
  t270 = t263 + t267 + t269;
  t461 = -0.366501*t178*t448;
  t462 = -0.930418*t178*t453;
  t463 = t233*t459;
  t464 = t461 + t462 + t463;
  t466 = t244*t448;
  t467 = -0.340999127418*t176*t453;
  t468 = 0.366501*t178*t459;
  t469 = t466 + t467 + t468;
  t471 = -0.340999127418*t176*t448;
  t472 = t256*t453;
  t473 = 0.930418*t178*t459;
  t474 = t471 + t472 + t473;
  t280 = 1.7876586242383724e-7*var1[20];
  t281 = -0.3243041141817093*t266;
  t282 = 0.02270383571304597*t268;
  t283 = t280 + t281 + t282;
  t295 = 0.06194758047549556*t266;
  t296 = 0.8848655643005321*t268;
  t297 = t295 + t296;
  t307 = 2.7989049814696287e-7*var1[21];
  t311 = 0.15748067958019524*t310;
  t317 = t312 + t315;
  t319 = -0.528674719304*t317;
  t323 = t321 + t322;
  t324 = -0.29871295412*t323;
  t325 = t307 + t311 + t319 + t324;
  t476 = 0.930418*t224*t464;
  t477 = -0.340999127418*t222*t469;
  t478 = t276*t474;
  t479 = t476 + t477 + t478;
  t481 = 0.366501*t224*t464;
  t482 = t288*t469;
  t483 = -0.340999127418*t222*t474;
  t484 = t481 + t482 + t483;
  t486 = t299*t464;
  t487 = -0.366501*t224*t469;
  t488 = -0.930418*t224*t474;
  t489 = t486 + t487 + t488;
  t333 = 7.591321355439789e-8*var1[21];
  t334 = -0.2845150083511607*t310;
  t336 = t321 + t335;
  t337 = 0.445034169498*t336;
  t340 = t338 + t339;
  t341 = -0.528674719304*t340;
  t342 = t333 + t334 + t337 + t341;
  t350 = 1.9271694180831932e-7*var1[21];
  t351 = -0.3667264808254521*t310;
  t353 = t338 + t352;
  t354 = -0.29871295412*t353;
  t356 = t312 + t355;
  t357 = 0.445034169498*t356;
  t358 = t350 + t351 + t354 + t357;
  t367 = t366 + t355;
  t491 = -0.930418*t268*t479;
  t492 = -0.366501*t268*t484;
  t493 = t329*t489;
  t494 = t491 + t492 + t493;
  t370 = t369 + t352;
  t496 = -0.340999127418*t266*t479;
  t497 = t345*t484;
  t498 = 0.366501*t268*t489;
  t499 = t496 + t497 + t498;
  t372 = -0.693671301908*t310;
  t373 = 1. + t372;
  t501 = t360*t479;
  t502 = -0.340999127418*t266*t484;
  t503 = 0.930418*t268*t489;
  t504 = t501 + t502 + t503;
  t377 = -0.353861996165*t310;
  t378 = 1. + t377;
  t381 = t380 + t322;
  t383 = t366 + t315;
  t387 = t380 + t335;
  t389 = -0.952469601425*t310;
  t390 = 1. + t389;
  t392 = t369 + t339;
  t525 = -1.*t8*t35*t34;
  t526 = t43*t8*t39;
  t527 = t525 + t526;
  t529 = t43*t8*t35;
  t530 = t8*t34*t39;
  t531 = t529 + t530;
  t533 = 0.366501*t29*t36;
  t534 = 0.340999127418*t21*t527;
  t535 = t92*t531;
  t536 = t533 + t534 + t535;
  t538 = -0.930418*t29*t36;
  t539 = t104*t527;
  t540 = 0.340999127418*t21*t531;
  t541 = t538 + t539 + t540;
  t543 = -1.*t115*t36;
  t544 = -0.930418*t29*t527;
  t545 = 0.366501*t29*t531;
  t546 = t543 + t544 + t545;
  t548 = 0.930418*t84*t536;
  t549 = 0.366501*t84*t541;
  t550 = t136*t546;
  t551 = t548 + t549 + t550;
  t553 = t149*t536;
  t555 = -0.340999127418*t79*t541;
  t556 = -0.930418*t84*t546;
  t557 = t553 + t555 + t556;
  t559 = -0.340999127418*t79*t536;
  t560 = t166*t541;
  t561 = -0.366501*t84*t546;
  t562 = t559 + t560 + t561;
  t564 = 0.366501*t130*t551;
  t565 = -0.340999127418*t126*t557;
  t566 = t186*t562;
  t567 = t564 + t565 + t566;
  t569 = 0.930418*t130*t551;
  t570 = t201*t557;
  t571 = -0.340999127418*t126*t562;
  t573 = t569 + t570 + t571;
  t575 = t212*t551;
  t576 = -0.930418*t130*t557;
  t577 = -0.366501*t130*t562;
  t578 = t575 + t576 + t577;
  t580 = -0.366501*t178*t567;
  t581 = -0.930418*t178*t573;
  t582 = t233*t578;
  t583 = t580 + t581 + t582;
  t585 = t244*t567;
  t586 = -0.340999127418*t176*t573;
  t587 = 0.366501*t178*t578;
  t588 = t585 + t586 + t587;
  t590 = -0.340999127418*t176*t567;
  t591 = t256*t573;
  t592 = 0.930418*t178*t578;
  t593 = t590 + t591 + t592;
  t595 = 0.930418*t224*t583;
  t596 = -0.340999127418*t222*t588;
  t597 = t276*t593;
  t598 = t595 + t596 + t597;
  t600 = 0.366501*t224*t583;
  t601 = t288*t588;
  t602 = -0.340999127418*t222*t593;
  t603 = t600 + t601 + t602;
  t605 = t299*t583;
  t606 = -0.366501*t224*t588;
  t607 = -0.930418*t224*t593;
  t608 = t605 + t606 + t607;
  t610 = -0.930418*t268*t598;
  t611 = -0.366501*t268*t603;
  t612 = t329*t608;
  t613 = t610 + t611 + t612;
  t615 = -0.340999127418*t266*t598;
  t616 = t345*t603;
  t617 = 0.366501*t268*t608;
  t618 = t615 + t616 + t617;
  t620 = t360*t598;
  t621 = -0.340999127418*t266*t603;
  t622 = 0.930418*t268*t608;
  t623 = t620 + t621 + t622;
  p_output1[0]=t101*t107 + t113*t122 + t132*t140 + t145*t156 + t161*t169 + t180*t188 + t196*t204 + t208*t216 + t229*t235 + t240*t248 + t253*t261 + t270*t278 + t283*t293 + t297*t305 + t325*t331 + t342*t348 + t358*t364 - 0.850685*(t331*t367 + t348*t370 + t364*t373) + 0.069082*(t331*t378 + t348*t381 + t364*t383) - 0.425556*(t331*t387 + t348*t390 + t364*t392) - 0.091*t34*t41 - 0.091*t45*t51 + t58*t61 + t68*t71 + t31*t7*t8 + t86*t94 + var1[0];
  p_output1[1]=-0.091*t34*t400 + t101*t422 + t113*t427 + t132*t432 + t145*t438 + t161*t443 + t180*t448 - 0.091*t404*t45 + t196*t453 + t208*t459 + t229*t464 + t240*t469 + t253*t474 + t270*t479 + t283*t484 + t297*t489 + t325*t494 + t342*t499 + t358*t504 - 0.850685*(t367*t494 + t370*t499 + t373*t504) + 0.069082*(t378*t494 + t381*t499 + t383*t504) - 0.425556*(t387*t494 + t390*t499 + t392*t504) + t408*t58 + t412*t68 + t31*t38*t8 + t417*t86 + var1[1];
  p_output1[2]=-1.*t31*t36 + t101*t541 + t113*t546 + t132*t551 + t145*t557 + t161*t562 + t180*t567 + t196*t573 + t208*t578 + t527*t58 + t229*t583 + t240*t588 + t253*t593 + t270*t598 + t283*t603 + t297*t608 + t325*t613 + t342*t618 + t358*t623 - 0.850685*(t367*t613 + t370*t618 + t373*t623) + 0.069082*(t378*t613 + t381*t618 + t383*t623) - 0.425556*(t387*t613 + t390*t618 + t392*t623) + t531*t68 - 0.091*t34*t35*t8 - 0.091*t39*t45*t8 + t536*t86 + var1[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_rightFoot.hh"

namespace SymExpression
{

void p_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 14 Sep 2020 10:51:07 GMT-04:00
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
#include "p_leftFoot.hh"

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t73;
  double t69;
  double t80;
  double t70;
  double t85;
  double t54;
  double t71;
  double t86;
  double t87;
  double t93;
  double t94;
  double t95;
  double t96;
  double t101;
  double t102;
  double t105;
  double t107;
  double t117;
  double t129;
  double t130;
  double t142;
  double t143;
  double t144;
  double t98;
  double t179;
  double t180;
  double t181;
  double t189;
  double t217;
  double t223;
  double t224;
  double t230;
  double t231;
  double t234;
  double t160;
  double t161;
  double t164;
  double t167;
  double t168;
  double t169;
  double t196;
  double t197;
  double t202;
  double t203;
  double t206;
  double t207;
  double t246;
  double t247;
  double t248;
  double t252;
  double t257;
  double t260;
  double t261;
  double t262;
  double t263;
  double t269;
  double t279;
  double t282;
  double t283;
  double t284;
  double t289;
  double t290;
  double t305;
  double t311;
  double t312;
  double t313;
  double t315;
  double t317;
  double t324;
  double t325;
  double t326;
  double t330;
  double t333;
  double t334;
  double t335;
  double t338;
  double t339;
  double t340;
  double t351;
  double t352;
  double t353;
  double t356;
  double t357;
  double t358;
  double t365;
  double t368;
  double t369;
  double t370;
  double t371;
  double t374;
  double t376;
  double t381;
  double t382;
  double t384;
  double t392;
  double t393;
  double t394;
  double t395;
  double t396;
  double t397;
  double t405;
  double t407;
  double t410;
  double t411;
  double t412;
  double t413;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t426;
  double t429;
  double t430;
  double t431;
  double t433;
  double t475;
  double t476;
  double t477;
  double t482;
  double t436;
  double t438;
  double t439;
  double t442;
  double t443;
  double t444;
  double t450;
  double t451;
  double t452;
  double t456;
  double t457;
  double t458;
  double t465;
  double t466;
  double t467;
  double t468;
  double t471;
  double t472;
  double t480;
  double t487;
  double t502;
  double t519;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t498;
  double t522;
  double t510;
  double t511;
  double t512;
  double t513;
  double t514;
  double t515;
  double t527;
  double t528;
  double t529;
  double t530;
  double t531;
  double t532;
  double t506;
  double t537;
  double t503;
  double t546;
  double t483;
  double t534;
  double t488;
  double t58;
  double t62;
  double t106;
  double t110;
  double t113;
  double t567;
  double t568;
  double t569;
  double t571;
  double t573;
  double t574;
  double t131;
  double t132;
  double t133;
  double t140;
  double t145;
  double t150;
  double t151;
  double t152;
  double t577;
  double t578;
  double t579;
  double t581;
  double t582;
  double t583;
  double t178;
  double t188;
  double t193;
  double t194;
  double t208;
  double t213;
  double t214;
  double t215;
  double t235;
  double t236;
  double t240;
  double t249;
  double t253;
  double t254;
  double t595;
  double t596;
  double t597;
  double t598;
  double t585;
  double t586;
  double t587;
  double t588;
  double t590;
  double t591;
  double t592;
  double t593;
  double t271;
  double t272;
  double t277;
  double t278;
  double t297;
  double t300;
  double t301;
  double t302;
  double t321;
  double t327;
  double t331;
  double t332;
  double t600;
  double t601;
  double t602;
  double t603;
  double t605;
  double t606;
  double t607;
  double t608;
  double t611;
  double t612;
  double t613;
  double t614;
  double t342;
  double t348;
  double t349;
  double t350;
  double t362;
  double t363;
  double t364;
  double t383;
  double t385;
  double t386;
  double t616;
  double t617;
  double t618;
  double t619;
  double t621;
  double t622;
  double t623;
  double t624;
  double t626;
  double t628;
  double t629;
  double t630;
  double t401;
  double t402;
  double t403;
  double t404;
  double t415;
  double t416;
  double t417;
  double t418;
  double t428;
  double t432;
  double t434;
  double t435;
  double t632;
  double t633;
  double t634;
  double t635;
  double t637;
  double t638;
  double t639;
  double t640;
  double t642;
  double t643;
  double t644;
  double t645;
  double t446;
  double t447;
  double t448;
  double t449;
  double t460;
  double t461;
  double t464;
  double t474;
  double t478;
  double t484;
  double t486;
  double t490;
  double t491;
  double t492;
  double t647;
  double t648;
  double t649;
  double t650;
  double t652;
  double t653;
  double t654;
  double t655;
  double t657;
  double t658;
  double t659;
  double t660;
  double t500;
  double t501;
  double t504;
  double t505;
  double t507;
  double t508;
  double t509;
  double t517;
  double t518;
  double t520;
  double t521;
  double t523;
  double t524;
  double t526;
  double t535;
  double t662;
  double t663;
  double t664;
  double t665;
  double t538;
  double t667;
  double t668;
  double t669;
  double t670;
  double t540;
  double t541;
  double t673;
  double t674;
  double t677;
  double t678;
  double t547;
  double t549;
  double t550;
  double t552;
  double t557;
  double t558;
  double t560;
  double t562;
  double t700;
  double t701;
  double t702;
  double t704;
  double t705;
  double t706;
  double t718;
  double t719;
  double t720;
  double t721;
  double t713;
  double t714;
  double t715;
  double t716;
  double t708;
  double t709;
  double t710;
  double t711;
  double t723;
  double t724;
  double t725;
  double t726;
  double t728;
  double t729;
  double t730;
  double t732;
  double t734;
  double t735;
  double t736;
  double t737;
  double t739;
  double t740;
  double t741;
  double t742;
  double t744;
  double t745;
  double t746;
  double t747;
  double t750;
  double t751;
  double t752;
  double t753;
  double t755;
  double t756;
  double t757;
  double t758;
  double t760;
  double t761;
  double t762;
  double t763;
  double t765;
  double t766;
  double t767;
  double t768;
  double t770;
  double t771;
  double t772;
  double t773;
  double t775;
  double t776;
  double t777;
  double t778;
  double t780;
  double t781;
  double t782;
  double t783;
  double t785;
  double t786;
  double t789;
  double t790;
  double t792;
  double t793;
  double t795;
  double t796;
  double t798;
  double t799;
  double t800;
  double t801;
  t73 = Cos(var1[3]);
  t69 = Cos(var1[5]);
  t80 = Sin(var1[4]);
  t70 = Sin(var1[3]);
  t85 = Sin(var1[5]);
  t54 = Cos(var1[6]);
  t71 = -1.*t69*t70;
  t86 = t73*t80*t85;
  t87 = t71 + t86;
  t93 = t73*t69*t80;
  t94 = t70*t85;
  t95 = t93 + t94;
  t96 = Sin(var1[6]);
  t101 = Cos(var1[7]);
  t102 = -1.*t101;
  t105 = 1. + t102;
  t107 = Sin(var1[7]);
  t117 = t54*t87;
  t129 = -1.*t95*t96;
  t130 = t117 + t129;
  t142 = t54*t95;
  t143 = t87*t96;
  t144 = t142 + t143;
  t98 = Cos(var1[4]);
  t179 = Cos(var1[8]);
  t180 = -1.*t179;
  t181 = 1. + t180;
  t189 = Sin(var1[8]);
  t217 = -1.000000637725*t105;
  t223 = 1. + t217;
  t224 = t73*t98*t223;
  t230 = -0.930418*t130*t107;
  t231 = -0.366501*t144*t107;
  t234 = t224 + t230 + t231;
  t160 = -0.340999127418*t105*t130;
  t161 = -0.134322983001*t105;
  t164 = 1. + t161;
  t167 = t164*t144;
  t168 = 0.366501*t73*t98*t107;
  t169 = t160 + t167 + t168;
  t196 = -0.8656776547239999*t105;
  t197 = 1. + t196;
  t202 = t197*t130;
  t203 = -0.340999127418*t105*t144;
  t206 = 0.930418*t73*t98*t107;
  t207 = t202 + t203 + t206;
  t246 = Cos(var1[9]);
  t247 = -1.*t246;
  t248 = 1. + t247;
  t252 = Sin(var1[9]);
  t257 = -1.000000637725*t181;
  t260 = 1. + t257;
  t261 = t260*t234;
  t262 = -0.930418*t169*t189;
  t263 = 0.366501*t207*t189;
  t269 = t261 + t262 + t263;
  t279 = 0.340999127418*t181*t169;
  t282 = -0.134322983001*t181;
  t283 = 1. + t282;
  t284 = t283*t207;
  t289 = -0.366501*t234*t189;
  t290 = t279 + t284 + t289;
  t305 = -0.8656776547239999*t181;
  t311 = 1. + t305;
  t312 = t311*t169;
  t313 = 0.340999127418*t181*t207;
  t315 = 0.930418*t234*t189;
  t317 = t312 + t313 + t315;
  t324 = Cos(var1[10]);
  t325 = -1.*t324;
  t326 = 1. + t325;
  t330 = Sin(var1[10]);
  t333 = -0.930418*t252*t269;
  t334 = 0.340999127418*t248*t290;
  t335 = -0.8656776547239999*t248;
  t338 = 1. + t335;
  t339 = t338*t317;
  t340 = t333 + t334 + t339;
  t351 = 0.366501*t252*t269;
  t352 = -0.134322983001*t248;
  t353 = 1. + t352;
  t356 = t353*t290;
  t357 = 0.340999127418*t248*t317;
  t358 = t351 + t356 + t357;
  t365 = -1.000000637725*t248;
  t368 = 1. + t365;
  t369 = t368*t269;
  t370 = -0.366501*t252*t290;
  t371 = 0.930418*t252*t317;
  t374 = t369 + t370 + t371;
  t376 = Cos(var1[11]);
  t381 = -1.*t376;
  t382 = 1. + t381;
  t384 = Sin(var1[11]);
  t392 = 0.930418*t330*t340;
  t393 = -0.366501*t330*t358;
  t394 = -1.000000637725*t326;
  t395 = 1. + t394;
  t396 = t395*t374;
  t397 = t392 + t393 + t396;
  t405 = -0.8656776547239999*t326;
  t407 = 1. + t405;
  t410 = t407*t340;
  t411 = 0.340999127418*t326*t358;
  t412 = -0.930418*t330*t374;
  t413 = t410 + t411 + t412;
  t419 = 0.340999127418*t326*t340;
  t420 = -0.134322983001*t326;
  t421 = 1. + t420;
  t422 = t421*t358;
  t423 = 0.366501*t330*t374;
  t426 = t419 + t422 + t423;
  t429 = Cos(var1[12]);
  t430 = -1.*t429;
  t431 = 1. + t430;
  t433 = Sin(var1[12]);
  t475 = Cos(var1[13]);
  t476 = -1.*t475;
  t477 = 1. + t476;
  t482 = Sin(var1[13]);
  t436 = 0.366501*t384*t397;
  t438 = 0.340999127418*t382*t413;
  t439 = -0.134322983001*t382;
  t442 = 1. + t439;
  t443 = t442*t426;
  t444 = t436 + t438 + t443;
  t450 = -0.930418*t384*t397;
  t451 = -0.8656776547239999*t382;
  t452 = 1. + t451;
  t456 = t452*t413;
  t457 = 0.340999127418*t382*t426;
  t458 = t450 + t456 + t457;
  t465 = -1.000000637725*t382;
  t466 = 1. + t465;
  t467 = t466*t397;
  t468 = 0.930418*t384*t413;
  t471 = -0.366501*t384*t426;
  t472 = t467 + t468 + t471;
  t480 = -0.444895486988*t477;
  t487 = 0.175248972904*t477;
  t502 = 0.120666640478*t477;
  t519 = -0.553471*t482;
  t493 = -0.366501*t433*t444;
  t494 = 0.930418*t433*t458;
  t495 = -1.000000637725*t431;
  t496 = 1. + t495;
  t497 = t496*t472;
  t498 = t493 + t494 + t497;
  t522 = 0.803828*t482;
  t510 = 0.340999127418*t431*t444;
  t511 = -0.8656776547239999*t431;
  t512 = 1. + t511;
  t513 = t512*t458;
  t514 = -0.930418*t433*t472;
  t515 = t510 + t513 + t514;
  t527 = -0.134322983001*t431;
  t528 = 1. + t527;
  t529 = t528*t444;
  t530 = 0.340999127418*t431*t458;
  t531 = 0.366501*t433*t472;
  t532 = t529 + t530 + t531;
  t506 = -0.218018*t482;
  t537 = -0.120666640478*t477;
  t503 = -0.803828*t482;
  t546 = 0.444895486988*t477;
  t483 = 0.218018*t482;
  t534 = -0.175248972904*t477;
  t488 = 0.553471*t482;
  t58 = -1.*t54;
  t62 = 1. + t58;
  t106 = -0.04500040093286238*t105;
  t110 = -0.0846680539949003*t107;
  t113 = t106 + t110;
  t567 = t73*t69;
  t568 = t70*t80*t85;
  t569 = t567 + t568;
  t571 = t69*t70*t80;
  t573 = -1.*t73*t85;
  t574 = t571 + t573;
  t131 = 1.296332362046933e-7*var1[7];
  t132 = 0.07877668146182712*t105;
  t133 = -0.04186915633414423*t107;
  t140 = t131 + t132 + t133;
  t145 = -3.2909349868922137e-7*var1[7];
  t150 = 0.03103092645718495*t105;
  t151 = -0.016492681424499736*t107;
  t152 = t145 + t150 + t151;
  t577 = t54*t569;
  t578 = -1.*t574*t96;
  t579 = t577 + t578;
  t581 = t54*t574;
  t582 = t569*t96;
  t583 = t581 + t582;
  t178 = 1.296332362046933e-7*var1[8];
  t188 = -0.14128592423750855*t181;
  t193 = -0.04186915633414423*t189;
  t194 = t178 + t188 + t193;
  t208 = 3.2909349868922137e-7*var1[8];
  t213 = 0.055653945343889656*t181;
  t214 = 0.016492681424499736*t189;
  t215 = t208 + t213 + t214;
  t235 = -0.04500040093286238*t181;
  t236 = 0.15185209683981668*t189;
  t240 = t235 + t236;
  t249 = 0.039853038461262744*t248;
  t253 = -0.23670515095269612*t252;
  t254 = t249 + t253;
  t595 = t98*t223*t70;
  t596 = -0.930418*t579*t107;
  t597 = -0.366501*t583*t107;
  t598 = t595 + t596 + t597;
  t585 = -0.340999127418*t105*t579;
  t586 = t164*t583;
  t587 = 0.366501*t98*t70*t107;
  t588 = t585 + t586 + t587;
  t590 = t197*t579;
  t591 = -0.340999127418*t105*t583;
  t592 = 0.930418*t98*t70*t107;
  t593 = t590 + t591 + t592;
  t271 = -1.5981976069815686e-7*var1[9];
  t272 = 0.08675267452931407*t248;
  t277 = 0.014606169134372047*t252;
  t278 = t271 + t272 + t277;
  t297 = -6.295460977284962e-8*var1[9];
  t300 = -0.22023473313910558*t248;
  t301 = -0.03707996069223323*t252;
  t302 = t297 + t300 + t301;
  t321 = -1.6084556086870008e-7*var1[10];
  t327 = -0.29135406957765553*t326;
  t331 = -0.02832985722118838*t330;
  t332 = t321 + t327 + t331;
  t600 = t260*t598;
  t601 = -0.930418*t588*t189;
  t602 = 0.366501*t593*t189;
  t603 = t600 + t601 + t602;
  t605 = 0.340999127418*t181*t588;
  t606 = t283*t593;
  t607 = -0.366501*t598*t189;
  t608 = t605 + t606 + t607;
  t611 = t311*t588;
  t612 = 0.340999127418*t181*t593;
  t613 = 0.930418*t598*t189;
  t614 = t611 + t612 + t613;
  t342 = -4.0833068682577724e-7*var1[10];
  t348 = 0.11476729583292707*t326;
  t349 = 0.0111594154470601*t330;
  t350 = t342 + t348 + t349;
  t362 = 0.03044854601678662*t326;
  t363 = -0.3131431996991197*t330;
  t364 = t362 + t363;
  t383 = -0.26285954081199375*t382;
  t385 = -0.634735404786378*t384;
  t386 = t383 + t385;
  t616 = -0.930418*t252*t603;
  t617 = 0.340999127418*t248*t608;
  t618 = t338*t614;
  t619 = t616 + t617 + t618;
  t621 = 0.366501*t252*t603;
  t622 = t353*t608;
  t623 = 0.340999127418*t248*t614;
  t624 = t621 + t622 + t623;
  t626 = t368*t603;
  t628 = -0.366501*t252*t608;
  t629 = 0.930418*t252*t614;
  t630 = t626 + t628 + t629;
  t401 = 6.369237629068993e-8*var1[11];
  t402 = -0.5905692458505322*t382;
  t403 = 0.24456909227538925*t384;
  t404 = t401 + t402 + t403;
  t415 = 1.6169269214444473e-7*var1[11];
  t416 = 0.2326311605896123*t382;
  t417 = -0.09633822312984319*t384;
  t418 = t415 + t416 + t417;
  t428 = 1.7876586242383724e-7*var1[12];
  t432 = 0.3243041141817093*t431;
  t434 = 0.02270383571304597*t433;
  t435 = t428 + t432 + t434;
  t632 = 0.930418*t330*t619;
  t633 = -0.366501*t330*t624;
  t634 = t395*t630;
  t635 = t632 + t633 + t634;
  t637 = t407*t619;
  t638 = 0.340999127418*t326*t624;
  t639 = -0.930418*t330*t630;
  t640 = t637 + t638 + t639;
  t642 = 0.340999127418*t326*t619;
  t643 = t421*t624;
  t644 = 0.366501*t330*t630;
  t645 = t642 + t643 + t644;
  t446 = 7.041766963257243e-8*var1[12];
  t447 = -0.8232948486053725*t431;
  t448 = -0.05763710717422546*t433;
  t449 = t446 + t447 + t448;
  t460 = 0.06194758047549556*t431;
  t461 = -0.8848655643005321*t433;
  t464 = t460 + t461;
  t474 = -2.7989049814696287e-7*var1[13];
  t478 = 0.15748067958019524*t477;
  t484 = t480 + t483;
  t486 = -0.528674719304*t484;
  t490 = t487 + t488;
  t491 = 0.29871295412*t490;
  t492 = t474 + t478 + t486 + t491;
  t647 = 0.366501*t384*t635;
  t648 = 0.340999127418*t382*t640;
  t649 = t442*t645;
  t650 = t647 + t648 + t649;
  t652 = -0.930418*t384*t635;
  t653 = t452*t640;
  t654 = 0.340999127418*t382*t645;
  t655 = t652 + t653 + t654;
  t657 = t466*t635;
  t658 = 0.930418*t384*t640;
  t659 = -0.366501*t384*t645;
  t660 = t657 + t658 + t659;
  t500 = -1.9271694180831932e-7*var1[13];
  t501 = -0.3667264808254521*t477;
  t504 = t502 + t503;
  t505 = 0.29871295412*t504;
  t507 = t480 + t506;
  t508 = 0.445034169498*t507;
  t509 = t500 + t501 + t505 + t508;
  t517 = 7.591321355439789e-8*var1[13];
  t518 = 0.2845150083511607*t477;
  t520 = t487 + t519;
  t521 = 0.445034169498*t520;
  t523 = t502 + t522;
  t524 = -0.528674719304*t523;
  t526 = t517 + t518 + t521 + t524;
  t535 = t534 + t519;
  t662 = -0.366501*t433*t650;
  t663 = 0.930418*t433*t655;
  t664 = t496*t660;
  t665 = t662 + t663 + t664;
  t538 = t537 + t522;
  t667 = 0.340999127418*t431*t650;
  t668 = t512*t655;
  t669 = -0.930418*t433*t660;
  t670 = t667 + t668 + t669;
  t540 = -0.952469601425*t477;
  t541 = 1. + t540;
  t673 = t528*t650;
  t674 = 0.340999127418*t431*t655;
  t677 = 0.366501*t433*t660;
  t678 = t673 + t674 + t677;
  t547 = t546 + t506;
  t549 = -0.693671301908*t477;
  t550 = 1. + t549;
  t552 = t537 + t503;
  t557 = -0.353861996165*t477;
  t558 = 1. + t557;
  t560 = t546 + t483;
  t562 = t534 + t488;
  t700 = t98*t54*t85;
  t701 = -1.*t98*t69*t96;
  t702 = t700 + t701;
  t704 = t98*t69*t54;
  t705 = t98*t85*t96;
  t706 = t704 + t705;
  t718 = -1.*t223*t80;
  t719 = -0.930418*t702*t107;
  t720 = -0.366501*t706*t107;
  t721 = t718 + t719 + t720;
  t713 = t197*t702;
  t714 = -0.340999127418*t105*t706;
  t715 = -0.930418*t80*t107;
  t716 = t713 + t714 + t715;
  t708 = -0.340999127418*t105*t702;
  t709 = t164*t706;
  t710 = -0.366501*t80*t107;
  t711 = t708 + t709 + t710;
  t723 = t260*t721;
  t724 = 0.366501*t716*t189;
  t725 = -0.930418*t711*t189;
  t726 = t723 + t724 + t725;
  t728 = t283*t716;
  t729 = 0.340999127418*t181*t711;
  t730 = -0.366501*t721*t189;
  t732 = t728 + t729 + t730;
  t734 = 0.340999127418*t181*t716;
  t735 = t311*t711;
  t736 = 0.930418*t721*t189;
  t737 = t734 + t735 + t736;
  t739 = -0.930418*t252*t726;
  t740 = 0.340999127418*t248*t732;
  t741 = t338*t737;
  t742 = t739 + t740 + t741;
  t744 = 0.366501*t252*t726;
  t745 = t353*t732;
  t746 = 0.340999127418*t248*t737;
  t747 = t744 + t745 + t746;
  t750 = t368*t726;
  t751 = -0.366501*t252*t732;
  t752 = 0.930418*t252*t737;
  t753 = t750 + t751 + t752;
  t755 = 0.930418*t330*t742;
  t756 = -0.366501*t330*t747;
  t757 = t395*t753;
  t758 = t755 + t756 + t757;
  t760 = t407*t742;
  t761 = 0.340999127418*t326*t747;
  t762 = -0.930418*t330*t753;
  t763 = t760 + t761 + t762;
  t765 = 0.340999127418*t326*t742;
  t766 = t421*t747;
  t767 = 0.366501*t330*t753;
  t768 = t765 + t766 + t767;
  t770 = 0.366501*t384*t758;
  t771 = 0.340999127418*t382*t763;
  t772 = t442*t768;
  t773 = t770 + t771 + t772;
  t775 = -0.930418*t384*t758;
  t776 = t452*t763;
  t777 = 0.340999127418*t382*t768;
  t778 = t775 + t776 + t777;
  t780 = t466*t758;
  t781 = 0.930418*t384*t763;
  t782 = -0.366501*t384*t768;
  t783 = t780 + t781 + t782;
  t785 = -0.366501*t433*t773;
  t786 = 0.930418*t433*t778;
  t789 = t496*t783;
  t790 = t785 + t786 + t789;
  t792 = 0.340999127418*t431*t773;
  t793 = t512*t778;
  t795 = -0.930418*t433*t783;
  t796 = t792 + t793 + t795;
  t798 = t528*t773;
  t799 = 0.340999127418*t431*t778;
  t800 = 0.366501*t433*t783;
  t801 = t798 + t799 + t800;
  p_output1[0]=t130*t140 + t144*t152 + t169*t194 + t207*t215 + t234*t240 + t254*t269 + t278*t290 + t302*t317 + t332*t340 + t350*t358 + t364*t374 + t386*t397 + t404*t413 + t418*t426 + t435*t444 + t449*t458 + t464*t472 + t492*t498 + t509*t515 + t526*t532 + 0.425556*(t498*t535 + t515*t538 + t532*t541) - 0.850685*(t498*t547 + t515*t550 + t532*t552) + 0.069082*(t498*t558 + t515*t560 + t532*t562) + 0.091*t62*t87 + 0.091*t95*t96 + t113*t73*t98 + var1[0];
  p_output1[1]=t140*t579 + t152*t583 + t194*t588 + t215*t593 + t240*t598 + t254*t603 + t278*t608 + t302*t614 + t332*t619 + 0.091*t569*t62 + t350*t624 + t364*t630 + t386*t635 + t404*t640 + t418*t645 + t435*t650 + t449*t655 + t464*t660 + t492*t665 + t509*t670 + t526*t678 + 0.425556*(t535*t665 + t538*t670 + t541*t678) - 0.850685*(t547*t665 + t550*t670 + t552*t678) + 0.069082*(t558*t665 + t560*t670 + t562*t678) + 0.091*t574*t96 + t113*t70*t98 + var1[1];
  p_output1[2]=t140*t702 + t152*t706 + t194*t711 + t215*t716 + t240*t721 + t254*t726 + t278*t732 + t302*t737 + t332*t742 + t350*t747 + t364*t753 + t386*t758 + t404*t763 + t418*t768 + t435*t773 + t449*t778 + t464*t783 + t492*t790 + t509*t796 - 1.*t113*t80 + t526*t801 + 0.425556*(t535*t790 + t538*t796 + t541*t801) - 0.850685*(t547*t790 + t550*t796 + t552*t801) + 0.069082*(t558*t790 + t560*t796 + t562*t801) + 0.091*t62*t85*t98 + 0.091*t69*t96*t98 + var1[2];
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

#include "p_leftFoot.hh"

namespace SymExpression
{

void p_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

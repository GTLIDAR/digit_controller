//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 17-Jul-2022 20:41:51
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "FK_Geo_p.h"
#include "FK_Geo_v.h"
#include "IK_Geo_p.h"
#include "IK_Geo_v.h"
#include "J_FK_Geo_p.h"
#include "J_IK_Geo_p.h"
#include "dJ_FK_Geo_p.h"
#include "dJ_IK_Geo_p.h"
#include "main.h"
#include "KinGeo_terminate.h"
#include "KinGeo_initialize.h"

// Function Declarations
static double argInit_real_T();
static void main_FK_Geo_p();
static void main_FK_Geo_v();
static void main_IK_Geo_p();
static void main_IK_Geo_v();
static void main_J_FK_Geo_p();
static void main_J_IK_Geo_p();
static void main_dJ_FK_Geo_p();
static void main_dJ_IK_Geo_p();

// Function Definitions

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_FK_Geo_p()
{
  double LA;
  double LL;

  // Initialize function 'FK_Geo_p' input arguments.
  // Call the entry-point 'FK_Geo_p'.
  FK_Geo_p(argInit_real_T(), argInit_real_T(), &LA, &LL);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_FK_Geo_v()
{
  double dLA;
  double dLL;

  // Initialize function 'FK_Geo_v' input arguments.
  // Call the entry-point 'FK_Geo_v'.
  FK_Geo_v(argInit_real_T(), argInit_real_T(), argInit_real_T(), argInit_real_T(),
           &dLA, &dLL);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_IK_Geo_p()
{
  double qFlexion;
  double qKnee;

  // Initialize function 'IK_Geo_p' input arguments.
  // Call the entry-point 'IK_Geo_p'.
  IK_Geo_p(argInit_real_T(), argInit_real_T(), &qFlexion, &qKnee);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_IK_Geo_v()
{
  double dqFlexion;
  double dqKnee;

  // Initialize function 'IK_Geo_v' input arguments.
  // Call the entry-point 'IK_Geo_v'.
  IK_Geo_v(argInit_real_T(), argInit_real_T(), argInit_real_T(), argInit_real_T(),
           &dqFlexion, &dqKnee);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_J_FK_Geo_p()
{
  double J_LA[2];
  double J_LL[2];

  // Initialize function 'J_FK_Geo_p' input arguments.
  // Call the entry-point 'J_FK_Geo_p'.
  J_FK_Geo_p(argInit_real_T(), argInit_real_T(), J_LA, J_LL);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_J_IK_Geo_p()
{
  double J_qFlexion[2];
  double J_qKnee[2];

  // Initialize function 'J_IK_Geo_p' input arguments.
  // Call the entry-point 'J_IK_Geo_p'.
  J_IK_Geo_p(argInit_real_T(), argInit_real_T(), J_qFlexion, J_qKnee);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_dJ_FK_Geo_p()
{
  double dJ_LA;
  double dJ_LL;

  // Initialize function 'dJ_FK_Geo_p' input arguments.
  // Call the entry-point 'dJ_FK_Geo_p'.
  dJ_FK_Geo_p(argInit_real_T(), argInit_real_T(), argInit_real_T(),
              argInit_real_T(), &dJ_LA, &dJ_LL);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_dJ_IK_Geo_p()
{
  double dJ_qFlexion[2];
  double dJ_qKnee[2];

  // Initialize function 'dJ_IK_Geo_p' input arguments.
  // Call the entry-point 'dJ_IK_Geo_p'.
  dJ_IK_Geo_p(argInit_real_T(), argInit_real_T(), argInit_real_T(),
              argInit_real_T(), dJ_qFlexion, dJ_qKnee);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  KinGeo_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_dJ_FK_Geo_p();
  main_dJ_IK_Geo_p();
  main_FK_Geo_p();
  main_FK_Geo_v();
  main_IK_Geo_p();
  main_IK_Geo_v();
  main_J_FK_Geo_p();
  main_J_IK_Geo_p();

  // Terminate the application.
  // You do not need to do this more than one time.
  KinGeo_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//

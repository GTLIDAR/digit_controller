#ifndef GEO_EXPRESSIONS_H_
#define GEO_EXPRESSIONS_H_

// Include Files
# include <iostream>

#include "Eigen/Dense"
#include <cmath>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "FK_Geo_p.h"
#include "FK_Geo_v.h"
#include "IK_Geo_p.h"
#include "IK_Geo_v.h"
#include "J_FK_Geo_p.h"
#include "J_IK_Geo_p.h"
#include "dJ_FK_Geo_p.h"
#include "dJ_IK_Geo_p.h"
#include "math2mat.hpp"
#include "mdefs.hpp"
#include "AnalyticalKinematicsDynamics/kin/p_COM_src.h"
#include "AnalyticalKinematicsDynamics/kin/p_left_toe_pitch_src.h"
#include "domain_control.hpp"


using namespace Eigen;


class GeoExpressions{
public:
 
  GeoExpressions();
  
  //---Forward Kinematics to get LA and LL from qthigh and qknee 
  VectorXd FK_Geo_p_cassie(double qFlexion, double qKnee);
  VectorXd FK_Geo_p_digit(double qFlexion, double qKnee, DomainControl::DomainType leg);

  //---Fk to get dLA and dLL from qFlexion, qknee and dqFlexion and dqknee
  VectorXd FK_Geo_v_cassie(double qFlexion, double qKnee, double dqFlexion, double dqKnee);

  //---Inverse Kinematics to get qFlexion and qknee from LA and LL
  VectorXd IK_Geo_p_cassie(double LA, double LL);
  VectorXd IK_Geo_p_digit(double LA, double LL, DomainControl::DomainType leg);

  //---Inverse Kinematics to get velocities dqFlexion and dqknee from LA, LL, dLA, dLL
  VectorXd IK_Geo_v_cassie(double LA, double LL, double dLA, double dLL);


  //---Inverse Kinematics Full state in world frame
  // VectorXd IK_Geo_full_PToe_W(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> base, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const double heading);
  
  
  //---Inverse Kinematics Full state in local frame. ZG: This function is so weird, why it has to output??
  VectorXd IK_Geo_full_PToe(const Eigen::Matrix<double, 3, 1> p_PToe_l, const Eigen::Matrix<double, 3, 1> p_PToe_r, const double heading);

  //---IK geo abduction 
  double IK_q_abd(Eigen::Matrix<double, 3, 1> p_PT, DomainControl::DomainType leg, int q_yaw = 0);

  //---Geo to get LA and LL and p_ST, from pelvis->toe & theta_abduction (theta and not q , this from geometric and not digit abduction angle)
  VectorXd Geo_LA_LL(Eigen::Matrix<double, 3, 1> p_PT, double q_yaw, DomainControl::DomainType leg);

  //---Geo to get dLA and dLL from pelvis->toe & theta_abduction.
  VectorXd Geo_dLA_dLL(Vector3d p_PT, Vector3d v_PT, DomainControl::DomainType leg);

  //---Geo to get LA and LL from pelvis, foot_l & foot_r & theta_abduction in world frame
  // VectorXd Geo_full_LA_LL_PToe_W(const Eigen::Matrix<double, 3, 1> base, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const double heading);

  //---Geo to get LA and LL from pelvis, foot_l & foot_r & theta_abduction in local frame
  VectorXd Geo_full_LA_LL_PToe(const Eigen::Matrix<double, 3, 1> p_PToe_l, const Eigen::Matrix<double, 3, 1> p_PToe_r, const double heading);

  //---IK for single leg (used for swing leg)
  VectorXd IK_PToe(const Eigen::Matrix<double, 3, 1> p_PToe, Eigen::Vector2d &LA_LL, DomainControl::DomainType leg, double q_rotation);

  //-- Velocity IK for swing leg
  VectorXd IK_VToe(const Eigen::Matrix<double, 3, 1> p_PToe, const Eigen::Matrix<double, 3, 1> v_PToe, DomainControl::DomainType leg, double q_rotation, double dq_rotation);

  // transform the torque at Digit's closed-loop toe.
  Vector2d tau_PR2AB(Vector2d tau_PR);

  // Cassie <--> Digit joint convention conversion.
  VectorXd Cassie2Digit(VectorXd q_flexion_knee, DomainControl::DomainType leg, VectorXd& dq_flexion_knee);
  VectorXd Cassie2Digit(VectorXd q_flexion_knee, DomainControl::DomainType leg);
  VectorXd Cassie2Digit(VectorXd q, std::vector<int> index, DomainControl::DomainType leg);
  double Cassie2Digit(double q, int index, DomainControl::DomainType leg);
  VectorXd Digit2Cassie(VectorXd q_flexion_knee, DomainControl::DomainType leg, VectorXd& dq_flexion_knee);
  VectorXd Digit2Cassie(VectorXd q_flexion_knee, DomainControl::DomainType leg);
  VectorXd Digit2Cassie(VectorXd q, std::vector<int> index, DomainControl::DomainType leg);
  double Digit2Cassie(double q, int index, DomainControl::DomainType leg);

};

class TransmissionAnkle{
public:
  TransmissionAnkle();
  double j2mA(double x, double y, std::string side);
  double j2mB(double x, double y, std::string side);

private:
  bool firstEntry = true;
  int nPoints;
  VectorXd lj2mA;
  VectorXd lj2mB;
  VectorXd rj2mA;
  VectorXd rj2mB;

};


class TransmissionAnkleNew{
public:
  TransmissionAnkleNew();
  // int loadTransmissionInfo(std::string type, std::string input[], std::string output[]);
  // int loadActuatorToJointInterp(std::shared_ptr<cpptoml::table> config);
  // int TransmissionInterp(std::string type, std::vector<double> &lq_in, std::vector<double> &lq_out, std::vector<double> &rq_in, std::vector<double> &rq_out);
  // int TransmissionInterp(std::string type, std::vector<double> &lqj_in, std::vector<double> &lqa_out, std::vector<double> &rqj_in, std::vector<double> &rqa_out);
  // int initActuatorToJointInterp();

  double j2mA(double x, double y, std::string side);
  double j2mB(double x, double y, std::string side);

private:
  //motor A left coefficients
  double lA00;
  double lA10;
  double lA01;
  double lA20;
  double lA11;
  double lA02;
  double lA30;
  double lA21;
  double lA12;
  double lA03;
  double lA40;
  double lA31;
  double lA22;
  double lA13;
  double lA04;
  //motor B left coefficients
  double lB00;
  double lB10;
  double lB01;
  double lB20;
  double lB11;
  double lB02;
  double lB30;
  double lB21;
  double lB12;
  double lB03;
  double lB40;
  double lB31;
  double lB22;
  double lB13;
  double lB04;
  //motor A right coefficients            
  double rA00;
  double rA10;
  double rA01;
  double rA20;
  double rA11;
  double rA02;
  double rA30;
  double rA21;
  double rA12;
  double rA03;
  double rA40;
  double rA31;
  double rA22;
  double rA13;
  double rA04;
  //motor B right coefficients            
  double rB00;
  double rB10;
  double rB01;
  double rB20;
  double rB11;
  double rB02;
  double rB30;
  double rB21;
  double rB12;
  double rB03;
  double rB40;
  double rB31;
  double rB22;
  double rB13;
  double rB04;
};

#endif

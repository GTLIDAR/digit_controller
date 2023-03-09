/**

**/

#include "geo_expressions.hpp"

GeoExpressions::GeoExpressions()
{

}

VectorXd GeoExpressions::FK_Geo_p_cassie(double qFlexion, double qKnee)
{
  double LA;
  double LL;
  ::FK_Geo_p(qFlexion, qKnee, &LA, &LL); // add :: to call for FK_Geo_p (global)outside of GeoExpressions class
  Eigen::VectorXd output(2);
  output << LA, LL;
  return output;
}

VectorXd GeoExpressions::FK_Geo_p_digit(double qFlexion, double qKnee, DomainControl::DomainType leg)
{
  double qFlexion_cassie = Digit2Cassie(qFlexion, 2, leg);
  double qKnee_cassie = Digit2Cassie(qKnee, 3, leg);
  return FK_Geo_p_cassie(qFlexion_cassie, qKnee_cassie);
}


VectorXd GeoExpressions::FK_Geo_v_cassie(double qFlexion, double qKnee, double dqFlexion, double dqKnee)
{
  double dLA, dLL;
  ::FK_Geo_v(qFlexion, qKnee, dqFlexion, dqKnee, &dLA, &dLL); // add :: to call for FK_Geo_p (global)outside of GeoExpressions class
  Eigen::VectorXd output(2);
  output << dLA, dLL;
  return output;
}


VectorXd GeoExpressions::IK_Geo_p_cassie(double LA, double LL) 
{
  double qFlexion, qKnee;
  ::IK_Geo_p(LA, LL, &qFlexion, &qKnee); // add :: to call for FK_Geo_p (global)outside of GeoExpressions class
  Eigen::VectorXd output(2);
  output << qFlexion, qKnee;
  return output;
}

VectorXd GeoExpressions::IK_Geo_p_digit(double LA, double LL, DomainControl::DomainType leg) 
{
  VectorXd qFlexionKnee_cassie = IK_Geo_p_cassie(LA, LL);
  Eigen::VectorXd output(2);
  output(0) = Cassie2Digit(qFlexionKnee_cassie(0), 2, leg);
  output(1) = Cassie2Digit(qFlexionKnee_cassie(1), 3, leg);
  return output;
}


VectorXd GeoExpressions::IK_Geo_v_cassie(double LA, double LL, double dLA, double dLL)
{
  double dqFlexion, dqKnee;
  ::IK_Geo_v(LA, LL, dLA, dLL, &dqFlexion, &dqKnee); // add :: to call for FK_Geo_p (global)outside of GeoExpressions class
  Eigen::VectorXd output(2);
  output << dqFlexion, dqKnee;
  return output;
}


double GeoExpressions::IK_q_abd(Eigen::Matrix<double, 3, 1> p_PT, DomainControl::DomainType leg, int q_yaw)
{
  Eigen::Matrix<double, 3, 1> p_PA;

  if(leg == DomainControl::RIGHT_STAND) //right leg
  {
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) = -0.091;
    p_PA(2,0) = 0.0;

  } else { //left leg
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) = 0.091;
    p_PA(2,0) = 0.0;
  }
  
  // hip_abduction -> toe
  Vector3d p_AT = p_PT - p_PA;

  //left abduction and rotation
  double theta_abd = std::atan2(p_AT(1), std::abs(p_AT(2)));

  return theta_abd;
}

VectorXd GeoExpressions::Geo_LA_LL(Eigen::Matrix<double, 3, 1> p_PT, double q_yaw_casie, DomainControl::DomainType leg)
{
  VectorXd output(6);

  Eigen::Matrix<double, 3, 1> p_PA;
  Eigen::Matrix<double, 3, 1> p_AS;

  if(leg == DomainControl::RIGHT_STAND) //right leg
  {
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) = -0.091;
    p_PA(2,0) = 0.0;

    //hip_abduction-> hip_rot ->hip_pitch
    p_AS(0,0) = -0.044;
    p_AS(1,0) = -0.004;
    p_AS(2,0) = -0.1185;
  } else { //left leg
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) =  0.091;
    p_PA(2,0) = 0.0;

    //hip_abduction-> hip_rot ->hip_pitch
    p_AS(0,0) = -0.044;
    p_AS(1,0) =  0.004;
    p_AS(2,0) = -0.1185;
  }

  Vector3d p_AT = p_PT - p_PA;
  double q_roll_cassie = std::atan2(p_AT(1) - p_AT(0) * std::tan(q_yaw_casie), std::abs(p_AT(2)));

  //pelvis->hip_pitch, the abduction shouldn't change the leg angle.
  Eigen::Matrix3d R_PA = Eigen::AngleAxisd(q_roll_cassie, Eigen::Vector3d::UnitX()).toRotationMatrix();
  Eigen::Matrix3d R_AS = Eigen::AngleAxisd(q_yaw_casie, Eigen::Vector3d::UnitZ()).toRotationMatrix();
  Vector3d p_PS = p_PA + R_PA * p_AS;

  //toe->hip_pitch
  Vector3d p_ST_P = p_PT - p_PS;
  Vector3d p_ST_S = (R_PA*R_AS).transpose() * p_ST_P;
  double LL = p_ST_S.norm();
  // std::cout << "p_ST: " << p_ST_S.transpose() << std::endl;
  
  double LA = (p_ST_S(0) > 0 ? 1 : -1) * std::asin(p_ST_S.head(2).norm()/LL);

  output << LA, LL, p_ST_S(0), p_ST_S(1), p_ST_S(2), q_roll_cassie;
  return output;
}

VectorXd GeoExpressions::Geo_dLA_dLL(Vector3d p_PT, Vector3d v_PT, DomainControl::DomainType leg) {
  VectorXd LA_LL = Geo_LA_LL(p_PT, 0, leg); // ZG: This q_yaw input is not correct. This function should be reimplemented.
  double LA = LA_LL(0);
  double LL = LA_LL(1);
  Vector3d p_ST = LA_LL.segment<3>(2);
  Vector3d v_AbdToe = p_PT;

  Vector3d LL_axis = p_ST.normalized();
  double dLL = LL_axis.dot(v_AbdToe);   // calculate by projecting the toe velocity along the axis defined by LL
  Vector3d v_xz(v_AbdToe(0, 0), 0, v_AbdToe(2, 0));   // velocity in the xz plane
  Vector3d LL_xz(p_ST(0, 0), 0, p_ST(2, 0));   // length vector in the xz plane
  Vector3d omega_pitch = LL_xz.cross(v_xz) / LL_xz.squaredNorm();   // basically dLA in vector form, angular velocity vector will be along y axis 
  double dLA = omega_pitch(1, 0);   // y component of angular velocity
  
  VectorXd output(2);
  output << dLA, dLL;
  return output;
}


// VectorXd GeoExpressions::IK_Geo_full_PToe_W(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> base, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const double heading) {
  
//   VectorXd output(29);
//   double COS = std::cos(heading);
//   double SIN = std::sin(heading);

//   double PI = 3.14159;

//   double digitCloseLoopAngleCorrection = 13. / 180 * PI;


//   //floating base quaternions 
  
//   q_sol(0, 0) = 1; //std::cos(heading(0, 0)/2);
//   q_sol(1, 0) = 0;
//   q_sol(2, 0) = 0;
//   q_sol(3, 0) = 0; //std::sin(heading(0, 0)/2);

//   q_sol(4, 0) = base(0, 0);
//   q_sol(5, 0) = base(1, 0);
//   q_sol(6, 0) = base(2, 0);


  
//   Eigen::Matrix<double, 3, 1> p_PT; 
//   //pelvis->toe
//   p_PT(0,0) = (l_foot(0,0) - base(0,0))*COS + -(l_foot(1,0) - base(1,0))*SIN;
//   p_PT(1,0) = -(l_foot(0,0) - base(0,0))*SIN + (l_foot(1,0) - base(1,0))*COS;
//   p_PT(2,0) = (l_foot(2,0) - base(2,0));

//   //left abduction and rotation
//   int leg = 0; 
//   double l_theta_abd = IK_q_abd(p_PT,  leg); //leg == 0 to get left

//   q_sol(7,0) = 0.37524572679 - l_theta_abd; //left abduction zero -1.1955506 +pi/2
//   q_sol(8, 0) = 0;//-0.0076; //left rotation

//   //solve for LA & LL from pelvis->toe and theta_abd
//   VectorXd LA_LL(5);
//   LA_LL = Geo_LA_LL(p_PT, , leg);
//   double LA = LA_LL(0);
//   double LL = LA_LL(1);

//   VectorXd q_flexion_knee_l(2);

//   q_flexion_knee_l = IK_Geo_p_cassie(LA, LL);
//   //frame corrections
//   q_sol(9, 0) = 0.785398163397 - q_flexion_knee_l(0);
//   q_sol(10, 0) = PI/2 + q_flexion_knee_l(1); 

//   // //QUICK FIXES OF TARSUS ANGLE improve code and clean up
//   // cassie_tarsus = -cassie_knee + deg2rad(13); % The actual 
//   // digit_q(11) = cassie_tarsus - deg2rad(103); % from URDF
//   q_sol(11,0) = -q_flexion_knee_l(1) + digitCloseLoopAngleCorrection - 103*PI/180.0;

//   // q_sol(11, 0) = -1.7976891 + (q_flexion_knee_l(1) + digitCloseLoopAngleCorrection);// - 4*PI - qflexion -qknee);//"shin_to_tarsus_left"
//   q_sol(12, 0) = 0.9 - q_flexion_knee_l(0) - q_flexion_knee_l(1) - ((-q_flexion_knee_l(1)+digitCloseLoopAngleCorrection));// toe_pitch_joint_left
//   q_sol(13, 0) =  -l_theta_abd;//toe_roll_joint_left


//   //----Right leg------//

//   leg = 1;  
//   Eigen::Matrix<double, 3, 1> r_p_PT;

//   //pelvis->toe
//   r_p_PT(0,0) = (r_foot(0,0) - base(0,0))*COS + -(r_foot(1,0) - base(1,0))*SIN;
//   r_p_PT(1,0) = -(r_foot(0,0) - base(0,0))*SIN + (r_foot(1,0) - base(1,0))*COS;
//   r_p_PT(2,0) = (r_foot(2,0) - base(2,0));
  
 

//   //right abduction 
//   double r_theta_abd = IK_q_abd(r_p_PT,  leg); //leg == 1 to get left
//   //right abduction and rotation
//   q_sol(18,0) = -0.37524572679 - r_theta_abd; //right abduction
//   q_sol(19, 0) =0; //right rotation

//   //solve for LA & LL from pelvis->toe and theta_abd
  
//   LA_LL = Geo_LA_LL(r_p_PT, ,  leg);
//   double RA = LA_LL(0);
//   double RR = LA_LL(1);

//   VectorXd q_flexion_knee_r(2);
//   q_flexion_knee_r = IK_Geo_p_cassie(RA, RR);

//   //frame corrections 
//   q_sol(20, 0) = -0.785398163397 + q_flexion_knee_r(0); //right flexion
//   q_sol(21, 0) = -PI/2. - q_flexion_knee_r(1); //right knee

//   // //QUICK FIXES OF TARSUS ANGLE improve code and clean up
//   // cassie_tarsus = -cassie_knee + deg2rad(13); % The actual 
//   // digit_q(11) = cassie_tarsus - deg2rad(103); % from URDF
//   q_sol(22,0) = -(-q_flexion_knee_r(1) + digitCloseLoopAngleCorrection - 103*PI/180.0);

//   // q_sol(22, 0) =  1.7976891 -(-q_flexion_knee_r(1)+digitCloseLoopAngleCorrection);// "shin_to_tarsus_left"
//   q_sol(23, 0) =  -0.9 + q_flexion_knee_r(0) + q_flexion_knee_r(1) + ((-q_flexion_knee_r(1)+digitCloseLoopAngleCorrection) );// toe_pitch_joint_right
//   q_sol(24, 0) =  -r_theta_abd;//toe_roll_joint_right

//   //---left arm-----//

//   q_sol(14,0)= -0.150623;
//   q_sol(15,0)= 1.09331;
//   q_sol(16,0)= 5.71354e-05;
//   q_sol(17,0)= -0.141287;
//   //-----Right arm-------//
//   q_sol(25,0)= 0.150628;
//   q_sol(26,0)= -1.09328;
//   q_sol(27,0)= -5.60829e-05;
//   q_sol(28,0)= 0.141287;

//   output << q_sol;
  
//   return output;
// }

VectorXd GeoExpressions::IK_Geo_full_PToe(const Eigen::Matrix<double, 3, 1> p_PToe_l, const Eigen::Matrix<double, 3, 1> p_PToe_r, const double heading)
{
  
  VectorXd q_sol(29);
  double COS = std::cos(heading);
  double SIN = std::sin(heading);

  double digitCloseLoopAngleCorrection = 13. / 180 * M_PI;


  //floating base quaternions 
  
  q_sol(0, 0) = 1; //std::cos(heading(0, 0)/2);
  q_sol(1, 0) = 0;
  q_sol(2, 0) = 0;
  q_sol(3, 0) = 0; //std::sin(heading(0, 0)/2);

  q_sol(4, 0) = 0;
  q_sol(5, 0) = 0;
  q_sol(6, 0) = 0;


  


  //left abduction and rotation
  DomainControl::DomainType leg = DomainControl::LEFT_STAND; 
  double l_theta_abd = IK_q_abd(p_PToe_l,  leg); //leg == 0 to get left

  q_sol(7,0) = 0.37524572679 - l_theta_abd; //left abduction zero -1.1955506 +pi/2
  q_sol(8, 0) = 0;//-0.0076; //left rotation

  //solve for LA & LL from pelvis->toe and theta_abd
  VectorXd LA_LL(5);
  LA_LL = Geo_LA_LL(p_PToe_l, 0, leg);
  double LA = LA_LL(0);
  double LL = LA_LL(1);

  VectorXd q_flexion_knee_l(2);

  q_flexion_knee_l = IK_Geo_p_cassie(LA, LL);
  //frame corrections
  q_sol(9, 0) = 0.785398163397 - q_flexion_knee_l(0);
  q_sol(10, 0) = M_PI/2 + q_flexion_knee_l(1); 

  // //QUICK FIXES OF TARSUS ANGLE improve code and clean up
  // cassie_tarsus = -cassie_knee + deg2rad(13); % The actual 
  // digit_q(11) = cassie_tarsus - deg2rad(103); % from URDF
  q_sol(11,0) = -q_flexion_knee_l(1) + digitCloseLoopAngleCorrection - 103*M_PI/180.0;

  // q_sol(11, 0) = -1.7976891 + (q_flexion_knee_l(1) + digitCloseLoopAngleCorrection);// - 4*PI - qflexion -qknee);//"shin_to_tarsus_left"
  q_sol(12, 0) = 0.9 - q_flexion_knee_l(0) - q_flexion_knee_l(1) - ((-q_flexion_knee_l(1)+digitCloseLoopAngleCorrection));// toe_pitch_joint_left
  q_sol(13, 0) =  -l_theta_abd;//toe_roll_joint_left
  
  //---left arm-----//
  q_sol(14,0)= -0.150623;
  q_sol(15,0)= 1.09331;
  q_sol(16,0)= 5.71354e-05;
  q_sol(17,0)= -0.141287;

  //----Right leg------//

  leg = DomainControl::RIGHT_STAND;

  //right abduction 
  double r_theta_abd = IK_q_abd(p_PToe_r,  leg); //leg == 1 to get left
  //right abduction and rotation
  q_sol(18,0) = -0.37524572679 - r_theta_abd; //right abduction
  q_sol(19, 0) =0; //right rotation

  //solve for LA & LL from pelvis->toe and theta_abd
  
  LA_LL = Geo_LA_LL(p_PToe_r, 0,  leg);
  double RA = LA_LL(0);
  double RR = LA_LL(1);

  VectorXd q_flexion_knee_r(2);
  q_flexion_knee_r = IK_Geo_p_cassie(RA, RR);

  //frame corrections 
  q_sol(20, 0) = -0.785398163397 + q_flexion_knee_r(0); //right flexion
  q_sol(21, 0) = -M_PI/2. - q_flexion_knee_r(1); //right knee

  // //QUICK FIXES OF TARSUS ANGLE improve code and clean up
  // cassie_tarsus = -cassie_knee + deg2rad(13); % The actual 
  // digit_q(11) = cassie_tarsus - deg2rad(103); % from URDF
  q_sol(22,0) = -(-q_flexion_knee_r(1) + digitCloseLoopAngleCorrection - 103*M_PI/180.0);

  // q_sol(22, 0) =  1.7976891 -(-q_flexion_knee_r(1)+digitCloseLoopAngleCorrection);// "shin_to_tarsus_left"
  q_sol(23, 0) =  -0.9 + q_flexion_knee_r(0) + q_flexion_knee_r(1) + ((-q_flexion_knee_r(1)+digitCloseLoopAngleCorrection) );// toe_pitch_joint_right
  q_sol(24, 0) =  -r_theta_abd;//toe_roll_joint_right

  //-----Right arm-------//
  q_sol(25,0)= 0.150628;
  q_sol(26,0)= -1.09328;
  q_sol(27,0)= -5.60829e-05;
  q_sol(28,0)= 0.141287;

  return q_sol;
}

// VectorXd GeoExpressions::Geo_full_LA_LL_PToe_W(const Eigen::Matrix<double, 3, 1> base, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const double heading)
// {
//   VectorXd output(4);
//   double COS = std::cos(heading);
//   double SIN = std::sin(heading);

//   double PI = 3.14159;

//   double digitCloseLoopAngleCorrection = 13. / 180 * PI;

//   //----left leg------//
//   int leg = 0; 
//   Eigen::Matrix<double, 3, 1> p_PT; 
//   //pelvis->toe
//   p_PT(0,0) = (l_foot(0,0) - base(0,0))*COS + -(l_foot(1,0) - base(1,0))*SIN;
//   p_PT(1,0) = -(l_foot(0,0) - base(0,0))*SIN + (l_foot(1,0) - base(1,0))*COS;
//   p_PT(2,0) = (l_foot(2,0) - base(2,0));
//   //left abduction and rotation
  
//   double l_theta_abd = IK_q_abd(p_PT,  leg); //leg == 0 to get left
//   //solve for LA & LL from pelvis->toe and theta_abd
//   VectorXd LA_LL(5);
//   LA_LL = Geo_LA_LL(p_PT, l_theta_abd, leg);
//   double LA = LA_LL(0);
//   double LL = LA_LL(1);


//   //----Right leg------//
//   leg = 1;  
//   Eigen::Matrix<double, 3, 1> r_p_PT;
//   //pelvis->toe
//   r_p_PT(0,0) = (r_foot(0,0) - base(0,0))*COS + -(r_foot(1,0) - base(1,0))*SIN;
//   r_p_PT(1,0) = -(r_foot(0,0) - base(0,0))*SIN + (r_foot(1,0) - base(1,0))*COS;
//   r_p_PT(2,0) = (r_foot(2,0) - base(2,0));
  
//   //right abduction 
//   double r_theta_abd = IK_q_abd(r_p_PT,  leg); //leg == 1 to get left
//   //solve for LA & LL from pelvis->toe and theta_abd
  
//   LA_LL = Geo_LA_LL(r_p_PT, r_theta_abd,  leg);
//   double RA = LA_LL(0);
//   double RR = LA_LL(1);

//   output << LL, LA, RR, RA;
  
//   return output;

// }


VectorXd GeoExpressions::Geo_full_LA_LL_PToe(const Eigen::Matrix<double, 3, 1> p_PToe_l, const Eigen::Matrix<double, 3, 1> p_PToe_r, const double heading)
{
  VectorXd output(4);
  double COS = std::cos(heading);
  double SIN = std::sin(heading);

  //----left leg------//
  DomainControl::DomainType leg = DomainControl::LEFT_STAND;
  
  double l_theta_abd = IK_q_abd(p_PToe_l,  leg); //leg == 0 to get left
  //solve for LA & LL from pelvis->toe and theta_abd
  VectorXd LA_LL(5);
  LA_LL = Geo_LA_LL(p_PToe_l, 0, leg);
  double LA = LA_LL(0);
  double LL = LA_LL(1);


  //----Right leg------//
  leg = DomainControl::RIGHT_STAND;  
  
  //right abduction 
  double r_theta_abd = IK_q_abd(p_PToe_r,  leg); //leg == 1 to get left
  //solve for LA & LL from pelvis->toe and theta_abd
  
  LA_LL = Geo_LA_LL(p_PToe_r, 0,  leg);
  double RA = LA_LL(0);
  double RR = LA_LL(1);

  output << LL, LA, RR, RA;
  
  return output;

}



VectorXd GeoExpressions::IK_PToe(const Eigen::Matrix<double, 3, 1> p_PToe, Eigen::Vector2d &LA_LL, DomainControl::DomainType leg, double q_rotation)
{
  VectorXd q_sol(6);

  double digitCloseLoopAngleCorrection = 13. / 180 * M_PI;
  if (leg == DomainControl::RIGHT_STAND)
  { //right leg in stance (solving for  left (swing) leg )
  
    // double l_theta_abd = IK_q_abd(p_PToe,  1-leg); //leg == 0 to get left
    // std::cout << "l_theta_abd: " << l_theta_abd << std::endl;
    // q_sol(0,0) = 0.37524572679 - l_theta_abd; //left abduction zero -1.1955506 +pi/2

    //solve for LA & LL from pelvis->toe and theta_abd
    Eigen::VectorXd LA_LL_tmp = Geo_LA_LL(p_PToe, -q_rotation, DomainControl::LEFT_STAND);
    // std::cout << "LA_LL_tmp: " << LA_LL_tmp << std::endl;
    LA_LL(0) = std::min(0.5, std::max(-0.5, LA_LL_tmp(0)));
    LA_LL(1) = std::min(1.1, std::max(0.4, LA_LL_tmp(1)));
    q_sol(0, 0) = 0.37524572679 - LA_LL_tmp(5); //left abduction zero -1.1955506 +pi/2
    q_sol(1, 0) = q_rotation;//-0.0076; //left rotation

    double LA = LA_LL(0);
    double LL = LA_LL(1);

    VectorXd q_flexion_knee_l = IK_Geo_p_cassie(LA, LL);
    //frame corrections
    q_sol(2, 0) = 0.785398163397 - q_flexion_knee_l(0);
    q_sol(3, 0) = M_PI/2 + q_flexion_knee_l(1); 

    q_sol(4, 0) = 0.9 - q_flexion_knee_l(0) -digitCloseLoopAngleCorrection;// toe_pitch_joint_left
    // q_sol(4, 0) = 0.9 - q_flexion_knee_l(1) -digitCloseLoopAngleCorrection;// toe_pitch_joint_left
    q_sol(5, 0) =  -LA_LL_tmp(5);//toe_roll_joint_left

  } else { //left leg in stance (solving fro swing foot)

    // double r_theta_abd = IK_q_abd(p_PToe,  1-leg); //leg == 1 to getleft left
    // q_sol(0,0) = -0.37524572679 - r_theta_abd; //right abduction

    //solve for LA & LL from pelvis->toe and theta_abd
    Eigen::VectorXd LA_LL_tmp = Geo_LA_LL(p_PToe, -q_rotation, DomainControl::RIGHT_STAND);
    // std::cout << "LA_LL_tmp: " << LA_LL_tmp << std::endl;
    LA_LL(0) = std::min(0.5, std::max(-0.5, LA_LL_tmp(0)));
    LA_LL(1) = std::min(1.1, std::max(0.4, LA_LL_tmp(1)));
    q_sol(0, 0) = -0.37524572679 - LA_LL_tmp(5); //left abduction zero -1.1955506 +pi/2
    q_sol(1, 0) = q_rotation; //right rotation

    double RA = LA_LL(0);
    double RR = LA_LL(1);

    VectorXd q_flexion_knee_r = IK_Geo_p_cassie(RA, RR);

    //frame corrections 
    q_sol(2, 0) = -0.785398163397 + q_flexion_knee_r(0); //right flexion
    q_sol(3, 0) = -M_PI/2. - q_flexion_knee_r(1); //right knee

    q_sol(4, 0) =  -0.9 + q_flexion_knee_r(0) + digitCloseLoopAngleCorrection;// toe_pitch_joint_right
    q_sol(5, 0) =  -LA_LL_tmp(5);//toe_roll_joint_right
  }

  return q_sol;
}

VectorXd GeoExpressions::IK_VToe(const Eigen::Matrix<double, 3, 1> p_PToe, const Eigen::Matrix<double, 3, 1> v_PToe, DomainControl::DomainType leg, double q_rotation, double dq_rotation)
{
  Eigen::VectorXd dq_sol = Eigen::VectorXd::Zero(6);

  double digitCloseLoopAngleCorrection = 13. / 180 * M_PI;

  // Solve for LA & LL from p_PToe.
  VectorXd LA_LL = Geo_LA_LL(p_PToe, -q_rotation, leg);
  double LA = LA_LL(0);
  double LL = LA_LL(1);
  // Solve for dLA & dLL from v_PToe.
  VectorXd dLA_dLL = Geo_dLA_dLL(p_PToe, v_PToe, leg);
  double dLA = dLA_dLL(0);
  double dLL = dLA_dLL(1);
  double dq_abduction = -v_PToe(1) / LL; // Digit abduction axis is backward.

  VectorXd dq_Flexion_Knee = IK_Geo_v_cassie(LA, LL, dLA, dLL);
  // If leg = 0, then right leg is in swing, so we need to solve for right leg.
  if (leg == DomainControl::LEFT_STAND) {
    Cassie2Digit(VectorXd::Zero(2), DomainControl::RIGHT_STAND, dq_Flexion_Knee); 
  } else if (leg == DomainControl::RIGHT_STAND) {
    Cassie2Digit(VectorXd::Zero(2), DomainControl::LEFT_STAND, dq_Flexion_Knee); 
  }
  
  dq_sol(0, 0) = dq_abduction; // dq_abduction;
  dq_sol(1, 0) = 0; // dqrotation
  dq_sol(2, 0) = dq_Flexion_Knee(0); // dqflexion
  dq_sol(3, 0) = dq_Flexion_Knee(1); // dqknee

  return dq_sol;
}

Vector2d GeoExpressions::tau_PR2AB(Vector2d tau_PR) {
  // tau_PR2AB: Convert torque from [Pitch, Roll] to AB joint.
  // WARNING: this function did not consider the 30 degree attitude of the roll axis.
  Vector2d tau_AB;
  tau_AB(0) = -0.5 * tau_PR(0) + 1.5 * tau_PR(1);
  tau_AB(1) = 0.5 * tau_PR(0) + 1.5 * tau_PR(1);
  return tau_AB;
}

VectorXd GeoExpressions::Cassie2Digit(VectorXd q_flexion_knee, DomainControl::DomainType leg, VectorXd& dq_flexion_knee)
{
  double q_flexion_digit;
  double q_knee_digit;
  if(leg == DomainControl::LEFT_STAND)
  {
    q_flexion_digit = 0.785398163397 - q_flexion_knee(0);
    dq_flexion_knee(0) = -dq_flexion_knee(0);

    q_knee_digit = M_PI/2.0  + q_flexion_knee(1);
    dq_flexion_knee(1) = dq_flexion_knee(1);
  }else{ //right
    q_flexion_digit = -0.785398163397 + q_flexion_knee(0);
    dq_flexion_knee(0) = dq_flexion_knee(0);

    q_knee_digit = -M_PI/2.0  - q_flexion_knee(1);
    dq_flexion_knee(1) = -dq_flexion_knee(1);
  }

  VectorXd q_flexion_knee_digit(2);
  q_flexion_knee_digit << q_flexion_digit, q_knee_digit;
  return q_flexion_knee_digit;
}

VectorXd GeoExpressions::Cassie2Digit(VectorXd q_flexion_knee, DomainControl::DomainType leg)
{
  double q_flexion_digit ;
  double q_knee_digit;
  if(leg == DomainControl::LEFT_STAND) //left
  {
    q_flexion_digit = 0.785398163397 - q_flexion_knee(0);
    q_knee_digit = M_PI/2.0  + q_flexion_knee(1);
  }else{ //right
    q_flexion_digit = -0.785398163397 + q_flexion_knee(0);
    q_knee_digit = -M_PI/2.0  - q_flexion_knee(1);
  }

  VectorXd q_flexion_knee_digit(2);
  q_flexion_knee_digit << q_flexion_digit, q_knee_digit;
  return q_flexion_knee_digit;
}

VectorXd GeoExpressions::Cassie2Digit(VectorXd q, std::vector<int> index, DomainControl::DomainType leg) {
  VectorXd q_digit = q;
  for (auto i : index) {
    q_digit(i) = Cassie2Digit(q(i), i, leg);
  }
  return q_digit;
}

double GeoExpressions::Cassie2Digit(double q, int index, DomainControl::DomainType leg) {
  switch (index) {
  case 0: // abduction.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * 0.37524572679 - q;
    break;
  case 1: // yaw.
    return - q;
    break;
  case 2: // flexion.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * (0.785398163397 - q);
    break;
  case 3: // knee.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * (M_PI/2.0  + q);
    break;
  case 4: // toe pitch.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * q; // ZG: Not correct yet.
    break;
  case 5: // toe roll.
    return 0;
    break;

  default:
    break;
  }
  return 0;
}

VectorXd GeoExpressions::Digit2Cassie(VectorXd q_flexion_knee, DomainControl::DomainType leg, VectorXd& dq_flexion_knee)
{
  if(leg == DomainControl::LEFT_STAND) //left in stance
  {
    q_flexion_knee(0) =  0.785398163397 - q_flexion_knee(0);
    dq_flexion_knee(0) = -dq_flexion_knee(0);

    q_flexion_knee(1) = q_flexion_knee(1) - M_PI/2.0;
    dq_flexion_knee(1) = dq_flexion_knee(1);
  }else{
    q_flexion_knee(0) = q_flexion_knee(0)  + 0.785398163397;
    dq_flexion_knee(0) = dq_flexion_knee(0);

    q_flexion_knee(1) = -M_PI/2.0  - q_flexion_knee(1);
    dq_flexion_knee(1) = -dq_flexion_knee(1);
  }

  return q_flexion_knee;
}

VectorXd GeoExpressions::Digit2Cassie(VectorXd q_flexion_knee, DomainControl::DomainType leg)
{
  if(leg == DomainControl::LEFT_STAND) //left
  {
    q_flexion_knee(0) =  0.785398163397 - q_flexion_knee(0);
    q_flexion_knee(1) = q_flexion_knee(1) - M_PI/2.0;
  }else{
    q_flexion_knee(0) = q_flexion_knee(0)  + 0.785398163397;
    q_flexion_knee(1) = -M_PI/2.0  - q_flexion_knee(1);
  }

  return q_flexion_knee;
}

VectorXd GeoExpressions::Digit2Cassie(VectorXd q, std::vector<int> index, DomainControl::DomainType leg) {
  VectorXd q_cassie = q;
  for (auto i : index) {
    q_cassie(i) = Digit2Cassie(q(i), i, leg);
  }
  return q_cassie;
}

double GeoExpressions::Digit2Cassie(double q, int index, DomainControl::DomainType leg) {
  switch (index) {
  case 0: // abduction.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * 0.37524572679 - q;
    break;
  case 1: // yaw.
    return - q;
    break;
  case 2: // flexion.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * (0.785398163397 - q);
    break;
  case 3: // knee.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * q - M_PI/2.0;
    break;
  case 4: // toe pitch.
    return (leg == DomainControl::LEFT_STAND ? 1:-1) * q; // ZG: Not correct yet.
    break;
  case 5: // toe roll.
    return 0;
    break;

  default:
    break;
  }
  return 0;
}


TransmissionAnkle::TransmissionAnkle()  
{
  lj2mA.resize(6);
  lj2mB.resize(6);
  rj2mA.resize(6);
  rj2mB.resize(6);
  lj2mA << 0.003061, -0.9412, 0.2812, -0.1121, 0.1288, 0.06276;  //motorA left coefficients
  lj2mB << -0.003154, 0.9416, 0.2848, 0.1133, 0.1315, -0.06146;  //motorB left coefficients
  rj2mA << -0.003061, -0.9412, 0.2812, 0.1121, -0.1288, -0.06276;  //motorA right coefficients
  rj2mB << 0.003154, 0.9416, 0.2848, -0.1133, -0.1315, 0.06146;  //motorB right coefficients
}

double TransmissionAnkle::j2mA(double x, double y, std::string side)
{
  if (side == "left")  {
    return lj2mA(0) + lj2mA(1)*x + lj2mA(2)*y + lj2mA(3)*x*x + lj2mA(4)*x*y  + lj2mA(5)*y*y;
  }  
  else  {
    return rj2mA(0) + rj2mA(1)*x + rj2mA(2)*y + rj2mA(3)*x*x + rj2mA(4)*x*y  + rj2mA(5)*y*y;
  }
}

double TransmissionAnkle::j2mB(double x, double y, std::string side)
{
  if (side == "left")  {
    return lj2mB(0) + lj2mB(1)*x + lj2mB(2)*y + lj2mB(3)*x*x + lj2mB(4)*x*y  + lj2mB(5)*y*y;
  }  
  else  {
    return rj2mB(0) + rj2mB(1)*x + rj2mB(2)*y + rj2mB(3)*x*x + rj2mB(4)*x*y  + rj2mB(5)*y*y;
  }
}

TransmissionAnkleNew::TransmissionAnkleNew()
{
  //motor A left coefficients
  lA00 =     0.01785;  
  lA10 =     -0.9256;  
  lA01 =      0.2938;  
  lA20 =    -0.08362;  
  lA11 =       0.103;  
  lA02 =     0.06534;  
  lA30 =     0.02975;  
  lA21 =    -0.02949;  
  lA12 =    -0.01311;  
  lA03 =    -0.03942;  
  lA40 =    -0.03918;  
  lA31 =     0.06356;  
  lA22 =     -0.0451;  
  lA13 =    -0.02977;  
  lA04 =   -0.003042;  
  //motor B left coefficients
  lB00 =    -0.01785;  
  lB10 =      0.9257;  
  lB01 =      0.2972;  
  lB20 =     0.08384;  
  lB11 =      0.1044;  
  lB02 =    -0.06483;  
  lB30 =    -0.02988;  
  lB21 =    -0.02979;  
  lB12 =     0.01411;  
  lB03 =      -0.039;  
  lB40 =     0.04013;  
  lB31 =     0.06584;  
  lB22 =     0.04692;  
  lB13 =    -0.02893;  
  lB04 =    0.003069;  
  //motor A right coefficients            
  rA00 =    -0.01785;  
  rA10 =     -0.9255;  
  rA01 =      0.2938;  
  rA20 =     0.08367;  
  rA11 =     -0.1029;  
  rA02 =    -0.06529;  
  rA30 =      0.0297;  
  rA21 =    -0.02936;  
  rA12 =    -0.01315;  
  rA03 =    -0.03937;  
  rA40 =     0.03896;  
  rA31 =    -0.06342;  
  rA22 =     0.04496;  
  rA13 =     0.02929;  
  rA04 =    0.002823;  
  //motor B right coefficients            
  rB00 =     0.01785; 
  rB10 =      0.9257; 
  rB01 =      0.2972; 
  rB20 =    -0.08391; 
  rB11 =     -0.1045; 
  rB02 =     0.06483; 
  rB30 =    -0.02982; 
  rB21 =    -0.02973; 
  rB12 =     0.01419; 
  rB03 =    -0.03903; 
  rB40 =    -0.03976; 
  rB31 =    -0.06553; 
  rB22 =    -0.04701; 
  rB13 =     0.02931; 
  rB04 =   -0.003061; 
}

double TransmissionAnkleNew::j2mA(double x, double y, std::string side)
{
  if (side == "left")  {
    return lA00 + lA10*x + lA01*y + lA20*pow(x,2) + lA11*x*y + lA02*pow(y,2) + lA30*pow(x,3) 
        + lA21*pow(x,2)*y + lA12*x*pow(y,2) + lA03*pow(y,3) + lA40*pow(x,4) + lA31*pow(x,3)*y 
        + lA22*pow(x,2)*pow(y,2) + lA13*x*pow(y,3) + lA04*pow(y,4);
  }  
  else  {
    return rA00 + rA10*x + rA01*y + rA20*pow(x,2) + rA11*x*y + rA02*pow(y,2) + rA30*pow(x,3) 
        + rA21*pow(x,2)*y + rA12*x*pow(y,2) + rA03*pow(y,3) + rA40*pow(x,4) + rA31*pow(x,3)*y 
        + rA22*pow(x,2)*pow(y,2) + rA13*x*pow(y,3) + rA04*pow(y,4);
  }
}

double TransmissionAnkleNew::j2mB(double x, double y, std::string side)
{
  if (side == "left")  {
    return lB00 + lB10*x + lB01*y + lB20*pow(x,2) + lB11*x*y + lB02*pow(y,2) + lB30*pow(x,3) 
        + lB21*pow(x,2)*y + lB12*x*pow(y,2) + lB03*pow(y,3) + lB40*pow(x,4) + lB31*pow(x,3)*y 
        + lB22*pow(x,2)*pow(y,2) + lB13*x*pow(y,3) + lB04*pow(y,4);
  }  
  else  {
    return rB00 + rB10*x + rB01*y + rB20*pow(x,2) + rB11*x*y + rB02*pow(y,2) + rB30*pow(x,3) 
        + rB21*pow(x,2)*y + rB12*x*pow(y,2) + rB03*pow(y,3) + rB40*pow(x,4) + rB31*pow(x,3)*y 
        + rB22*pow(x,2)*pow(y,2) + rB13*x*pow(y,3) + rB04*pow(y,4);
  }
}

/*
void RobotExpressions::IK_v_full(Eigen::VectorXd& dq_sol, const Eigen::Matrix<double, 3, 1> p_PToe, const Eigen::Matrix<double, 3, 1> v_PToe, int leg, double q_rotation, double dq_rotation)
{
  double PI = 3.14159;

  double digitCloseLoopAngleCorrection = 13. / 180 * PI;

  Eigen::Matrix<double, 3, 1> p_PS; 
  //Eigen::Matrix<double, 3, 1> p_PT; 
  Eigen::Matrix<double, 3, 1> p_ST;   // p_HipToe_P in MATLAB
  Eigen::Matrix<double, 3, 1> p_PA;   //p_PAbd in MATLAB
  Eigen::Matrix<double, 3, 1> p_AbdToe_P;
  Eigen::Matrix<double, 3, 1> p_AS; 
  //constants from rvis_urdf
  //pelvis->hip_pitch
   
  if(leg)
  { //right leg in stance

    //hip_abduction-> hip_rot ->hip_pitch
    p_AS(0,0) = -0.0450304;
    p_AS(1,0) =  0.004;
    p_AS(2,0) = -0.118428;
    
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) = 0.091745;
    p_PA(2,0) = 0.0;
 
  } else {
    p_AS(0,0) = -0.0450304;
    p_AS(1,0) = -0.004;
    p_AS(2,0) = -0.118428;
    
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) = -0.091745;
    p_PA(2,0) = 0.0;
  }

  //toe->hip_abduction
  p_AbdToe_P = p_PToe - p_PA;
  
  double theta_abd = std::atan2(p_AbdToe_P(1,0),std::abs(p_AbdToe_P(2,0)));

  Eigen::Matrix<double, 3, 1> v_AbdToe = v_PToe;

  // Note: using std::pow here instead of manually multiplying, easier to read
  // and has basically the same performance with -O3 --ffast-math (gcc and clang)
  double dq_abduction = (v_AbdToe(1, 0)*std::abs(p_AbdToe_P(2, 0))) /
                        (std::pow(p_AbdToe_P(1, 0), 2) + std::pow(std::abs(p_AbdToe_P(2, 0)), 2)) - 
                        (std::copysign((p_AbdToe_P(1, 0)*v_AbdToe(2, 0)), p_AbdToe_P(2, 0)))/
                        (std::pow(p_AbdToe_P(1, 0), 2) + std::pow(p_AbdToe_P(2, 0), 2)); 

  //pelvis->hip_pitch
  Eigen::Matrix3d R_AS = Eigen::AngleAxisd(theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
  p_PS = p_PA + R_AS*p_AS;
  //toe->hip_pitch
  p_ST = p_PToe - p_PS;
  
  double LL = std::sqrt(p_ST(0,0)*p_ST(0,0) + p_ST(1,0)*p_ST(1,0) + p_ST(2,0)*p_ST(2,0));
  double LA = std::asin(p_ST(0,0)/LL);



  Eigen::Vector3d LL_axis = p_ST.normalized();
  double dLL = LL_axis.dot(v_AbdToe);   // calculate by projecting the toe velocity along the axis defined by LL
  Eigen::Vector3d v_xz(v_AbdToe(0, 0), 0, v_AbdToe(2, 0));   // velocity in the xz plane
  Eigen::Vector3d LL_xz(p_ST(0, 0), 0, p_ST(2, 0));   // length vector in the xz plane
  Eigen::Vector3d omega_pitch = LL_xz.cross(v_xz) / LL_xz.squaredNorm();   // basically dLA in vector form, angular velocity vector will be along y axis 
  double dLA = omega_pitch(1, 0);   // y component of angular velocity

  VectorXd temp_ik_sol = RobotExpressions::Inverse_Kinematics_v(LA, LL, dLA, dLL);
  // q_sol(2, 0) = 0.785398163397 - qflexion;
  // q_sol(3, 0) = PI/2 + qknee; 

  //q_sol(11, 0) = -1.7976891 + (-qknee + digitCloseLoopAngleCorrection);// - 4*PI - qflexion -qknee);//"shin_to_tarsus_left"
  // q_sol(4, 0) = 0.9 - qflexion - qknee - ((-qknee+digitCloseLoopAngleCorrection));// toe_pitch_joint_left
  // q_sol(5, 0) =  -std::atan2(p_AbdToe_P(1,0),std::abs(p_AbdToe_P(2,0)));;//toe_roll_joint_left

  dq_sol(0, 0) = dq_abduction;
  dq_sol(1, 0) = 0;
  dq_sol(2, 0) = temp_ik_sol(0); // dqflexion
  dq_sol(3, 0) = temp_ik_sol(1); // dqknee
  dq_sol(4, 0) = 0;

}

void RobotExpressions::swing_foot_traj(Eigen::Matrix<double, 3, 1>& p_StSw_d, Eigen::Matrix<double, 3, 1>& v_StSw_d, const Eigen::Matrix<double, 3, 1> p_StSw_d_final, const Eigen::Matrix<double, 3, 1> p_StSw_initial, double swing_height_d, double s)
{
  

  if(s>1)
  {
    s = 1;
  }
  Eigen::Matrix<double, 3, 1> D_Sw_d_final;

  D_Sw_d_final = p_StSw_d_final - p_StSw_initial;

  // Linear combination of linear and cos function.
  // Linear has velocity, and cos doesn't have velocity at beginning and ending.
  // We want initially has larger velocity (more linear), and in the end has small velocity (more cos).
  Eigen::Matrix<double, 3, 1> D_Sw_d;
  VectorXd output(3);


  output = get_displacement_xyz(D_Sw_d_final, swing_height_d, s);
  D_Sw_d(0,0) = output(0);
  D_Sw_d(1,0) = output(1);
  D_Sw_d(2,0) = output(2);
  p_StSw_d = p_StSw_initial + D_Sw_d;

  // Find velocity trajectory by center difference.
  double ds = 0.00001;
  Eigen::Matrix<double, 3, 1>output_neg;
  Eigen::Matrix<double, 3, 1> output_pos;
  output = get_displacement_xyz(D_Sw_d_final, swing_height_d, s+ds);
  output_pos(0,0) = output(0);
  output_pos(1,0) = output(1);
  output_pos(2,0) = output(2);

  output = get_displacement_xyz(D_Sw_d_final, swing_height_d, s-ds);
  output_neg(0,0) = output(0);
  output_neg(1,0) = output(1);
  output_neg(2,0) = output(2);


  v_StSw_d = (output_pos - output_neg)/(2*ds);

  // Find acceleration by center difference
  //ds = 1e-6;
  //v_prev = (get_displacement_xyz(D_Sw_d_final, swing_height_d, s) - get_displacement_xyz(D_Sw_d_final, swing_height_d, s-2*ds))/(2*ds);
  //v_next = (get_displacement_xyz(D_Sw_d_final, swing_height_d, s+2*ds) - get_displacement_xyz(D_Sw_d_final, swing_height_d, s))/(2*ds);
  //a_StSw_d = (v_next - v_prev)/(2*ds);
  
}

VectorXd RobotExpressions::get_displacement_xyz(const Eigen::Matrix<double, 3, 1> D_xy_final, double H, double s)
{
  //Eigen::Matrix<double, 3, 1> D;
  VectorXd output(3);
  // x,y direction
  double para_xy = 0.5 + 0.2*s; // 0 means straight line. 1 means cos function.
  double x = (1-para_xy)*D_xy_final(0,0)*s + para_xy*D_xy_final(0,0)*(1-std::cos(3.14159*s))/2;
  double y = (1-para_xy)*D_xy_final(1,0)*s + para_xy*D_xy_final(1,0)*(1-std::cos(3.14159*s))/2;

  // z direction
  double s_norm = 1 - 2*std::abs(s-0.5);
  double para_z = 0.8 + 0.2*s_norm; // 0 means straight line. 1 means cos function.
  double z = (1-para_z)*H*s_norm + para_z*H*(1-cos(3.14159*s_norm))/2;
  
  output << x, y, z;
  
  return output;
}
  

*/
/**
* Author:       Guillermo Castillo
* Email:        castillomartinez.2@osu.edu
* Modified:     01-25-2022
* Copyright:    Cyberbotics Lab @The Ohio State University
**/
/*
* Copyright (c) 2023, The Ohio State University - Cyberbotics Lab
* All rights reserved.
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* 1. Redistributions of source code must retain the above copyright notice, this
*    list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
* 3. Neither the name of the copyright holder nor the names of its
*    contributors may be used to endorse or promote products derived from
*    this software without specific prior written permission.
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#include "robot_expressions.hpp"

RobotExpressions::RobotExpressions()
{

}

MatrixXd RobotExpressions::jac_leftFoot(VectorXd &x)
{
  MatrixXd output(3,22);  

  SymExpression::J_leftFoot(output, x);

  return output;  
}


MatrixXd RobotExpressions::jac_rightFoot(VectorXd &x)
{
  MatrixXd output(3,22);  
  
  SymExpression::J_rightFoot(output, x);

  return output;    
}

MatrixXd RobotExpressions::pos_leftFoot(VectorXd &x)
{
  MatrixXd output(3,1);  
  
  SymExpression::p_leftFoot(output, x);

  return output;
}

MatrixXd RobotExpressions::pos_rightFoot(VectorXd &x)
{
  MatrixXd output(3,1);  
  
  SymExpression::p_rightFoot(output, x);

  return output;
}

MatrixXd RobotExpressions::pos_com(VectorXd &x)
{
  MatrixXd output(3,1);  
  
  SymExpression::p_com(output, x);

  return output;
}

MatrixXd RobotExpressions::vel_com(VectorXd &x, VectorXd &dx)
{
  MatrixXd output(3,1);  
  
  SymExpression::v_com(output, x, dx);

  return output;
}

MatrixXd RobotExpressions::T_rightFoot(VectorXd &x)
{
  MatrixXd output(4,4);  
  
  SymExpression::T_rightFoot(output, x);

  return output;
}


MatrixXd RobotExpressions::T_leftFoot(VectorXd &x)
{
  MatrixXd output(4,4);  
  
  SymExpression::T_leftFoot(output, x);

  return output;
}


VectorXd RobotExpressions::Inverse_Kinematics_p_L(double LA,double LL)
{
//  This function was generated using nonlinear regression 
    VectorXd output(2);
    LL = -LL;
    // std::vector<double> b_hip = {8.1017, 44.7855, 95.1940, 90.9300, 32.0764};
    qHipPitch = - ( b_hip[0] + b_hip[1]*LL + b_hip[2]*pow(LL,2) + b_hip[3]*pow(LL,3) + b_hip[4]*pow(LL,4) );

    qKnee = - ( b_knee[0] + b_knee[1]*LL + b_knee[2]*pow(LL,2) + b_knee[3]*pow(LL,3) );

    output << qHipPitch, qKnee;
    return output;
}

VectorXd RobotExpressions::Inverse_Kinematics_p_L_new(double LA,double LL)
{
//  This function was generated using FROST geometric IK
    VectorXd output(2);
    double t2 = LL*LL;
    double qflexion = LA+std::acos((t2*00.944822373393802 + .02839440665154953)/LL)-(1.0/10.0);
    double qknee = -std::acos(t2*1.889644746787604-1.001611186696901)-(7.0/200.0);
  
    qHipPitch = 0.785398163397 - qflexion;
    qKnee = 3.141592/2 + qknee; 

    output << qHipPitch, qKnee;
    return output;
}


VectorXd RobotExpressions::Inverse_Kinematics_p_R_new(double LA,double LL)
{
//  This function was generated using FROST geometric IK
    VectorXd output(2);

    double RR = LL;
    double RA = LA;
    double rt2 = RR*RR;
    double rqflexion = RA+std::acos((rt2*0.944822373393802 + .02839440665154953)/RR)-(1.0/10.0);
    double rqknee = -std::acos(rt2*1.889644746787604-1.001611186696901)-(7.0/200.0);
    qHipPitch = -0.785398163397 + rqflexion; //right flexion
    qKnee = -3.141592/2. - rqknee; //right knee

    
    output << qHipPitch, qKnee;
    return output;


}

VectorXd RobotExpressions::Forward_Kinematics_p_L(double qHip, double qKnee)
{
//  This function was generated using FROST geometric IK
    VectorXd output(2);

    double rqKnee;
    double rqflexion;
    
    rqflexion = -qHip  + 0.785398163397 ; //right flexion
    rqKnee = -3.141592/2.  + qKnee; //right knee

    double t2 = rqKnee+ 7.0/200;
    double t3 = std::cos(t2);
    double t4 = t3*0.5292;
    double t5 = t4+0.5300526400000001;
    double LA = rqflexion-std::acos(1.0/std::sqrt(t5) *(t4+0.5601052800000001)*0.944822373393802)+1.0/10.0;
    
    double LL = std::sqrt(t5);
    //std::cout << "rqflex= " << rqflexion << "  rqknee= " << rqKnee << " t2= " << t2 << " t3=" << t3 << " t4=" << t4 << " t5=" << t5 << std::endl;
    output << LA, LL;

    return output; 

}

VectorXd RobotExpressions::Forward_Kinematics_p(double qHip, double qKnee, double leg)
{
//  This function was generated using FROST geometric IK
    VectorXd output(2);

    double rqKnee;
    double rqflexion;
    
    if (leg) //right in stance  
    {
      rqflexion = qHip  + 0.785398163397 ; 
      rqKnee = -3.141592/2.  - qKnee; 

    }
    else{ //left in stance
      rqflexion = -qHip  + 0.785398163397 ; 
      rqKnee = -3.141592/2.  + qKnee; 

    }


    double t2 = rqKnee+ 7.0/200;
    double t3 = std::cos(t2);
    double t4 = t3*0.5292;
    double t5 = t4+0.5300526400000001;
    double LA = rqflexion-std::acos(1.0/std::sqrt(t5) *(t4+0.5601052800000001)*0.944822373393802)+1.0/10.0;
    
    double LL = std::sqrt(t5);
    //std::cout << "rqflex= " << rqflexion << "  rqknee= " << rqKnee << " t2= " << t2 << " t3=" << t3 << " t4=" << t4 << " t5=" << t5 << std::endl;
    output << LA, LL;

    return output; 

}

VectorXd RobotExpressions::Forward_Kinematics_p_R(double qHip, double qKnee)
{
//  This function was generated using FROST geometric IK
    VectorXd output(2);

    double rqKnee;
    double rqflexion;

    rqflexion = qHip  + 0.785398163397 ; //right flexion
    rqKnee = -3.141592/2.  - qKnee; //right knee

    double t2 = rqKnee+ 7.0/200;
    double t3 = std::cos(t2);
    double t4 = t3*0.5292;
    double t5 = t4+0.5300526400000001;
    double LA = rqflexion-std::acos(1.0/std::sqrt(t5) *(t4+0.5601052800000001)*0.944822373393802)+1.0/10.0;
    
    double LL = std::sqrt(t5);

    output << LA, LL;

    return output; 

}

VectorXd RobotExpressions::Get_Ik_LL_LA(const Eigen::Matrix<double, 3, 1> COM, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const Eigen::Matrix<double, 1, 1> heading)
{
  VectorXd output(4);
  double COS = std::cos(heading(0,0));
  double SIN = std::sin(heading(0,0));

  Eigen::Matrix<double, 3, 1> p_PS;
  Eigen::Matrix<double, 3, 1> p_AS;  
  Eigen::Matrix<double, 3, 1> p_PT; 
  Eigen::Matrix<double, 3, 1> p_ST; 
  Eigen::Matrix<double, 3, 1> p_PA;
  Eigen::Matrix<double, 3, 1> p_AT;
  //constants from rvis_urdf
  
  //hip_abduction-> hip_rot ->hip_pitch
  p_AS(0,0) = -0.0450304;
  p_AS(1,0) =  0.004;
  p_AS(2,0) = -0.118428;
  
  //pelvis->hip_abduction
  p_PA(0,0) = -0.001;
  p_PA(1,0) =  0.091745;
  p_PA(2,0) = 0.0;
  
  //pelvis->toe
  p_PT(0,0) = (l_foot(0,0) - COM(0,0))*COS + -(l_foot(1,0) - COM(1,0))*SIN;
  p_PT(1,0) = -(l_foot(0,0) - COM(0,0))*SIN + (l_foot(1,0) - COM(1,0))*COS;
  p_PT(2,0) = (l_foot(2,0) - COM(2,0));

  //toe->hip_abduction
  p_AT = p_PT - p_PA;

  //left abduction and rotation
  double l_theta_abd = std::atan2(p_AT(1,0),std::abs(p_AT(2,0)));

  //pelvis->hip_pitch
  Eigen::Matrix3d l_R_AS = Eigen::AngleAxisd(l_theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
  p_PS = p_PA + l_R_AS*p_AS;
 
  //toe->hip_pitch
  p_ST = p_PT - p_PS;


  double LL = std::sqrt(p_ST(0,0)*p_ST(0,0) + p_ST(1,0)*p_ST(1,0) + p_ST(2,0)*p_ST(2,0));
  double LA = std::asin(p_ST(0,0)/LL) ;//+ 0.0519167;

  //---right leg---//

  Eigen::Matrix<double, 3, 1> r_p_PS;
  Eigen::Matrix<double, 3, 1> r_p_AS;  
  Eigen::Matrix<double, 3, 1> r_p_PT;
  Eigen::Matrix<double, 3, 1> r_p_ST;
  Eigen::Matrix<double, 3, 1> r_p_PA;
  Eigen::Matrix<double, 3, 1> r_p_AT;


  //hip_abduction-> hip_rot ->hip_pitch
  r_p_AS(0,0) = -0.0450304;
  r_p_AS(1,0) =  -0.004;
  r_p_AS(2,0) = -0.118428;

  //pelvis->hip_abduction
  r_p_PA(0,0) = -0.001;
  r_p_PA(1,0) = -0.091745;
  r_p_PA(2,0) = 0.0;

  //pelvis->toe
  r_p_PT(0,0) = (r_foot(0,0) - COM(0,0))*COS + -(r_foot(1,0) - COM(1,0))*SIN;
  r_p_PT(1,0) = -(r_foot(0,0) - COM(0,0))*SIN + (r_foot(1,0) - COM(1,0))*COS;
  r_p_PT(2,0) = (r_foot(2,0) - COM(2,0));
  
  //toe->hip_abduction
  r_p_AT = r_p_PT - r_p_PA;

  //right abduction 
  double r_theta_abd = std::atan2(r_p_AT(1,0),std::abs(r_p_AT(2,0)));

  Eigen::Matrix3d r_R_AS = Eigen::AngleAxisd(r_theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
  r_p_PS = r_p_PA + r_R_AS*r_p_AS;

  r_p_ST = r_p_PT - r_p_PS;
  double RR = std::sqrt(r_p_ST(0,0)*r_p_ST(0,0) + r_p_ST(1,0)*r_p_ST(1,0) + r_p_ST(2,0)*r_p_ST(2,0)) ;
  double RA = std::asin(r_p_ST(0,0)/RR);// + 0.0519167;

  output << LL, LA, RR, RA;
  
  return output;

}

VectorXd RobotExpressions::Get_geom_full_Ik_solution(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> COM, const Eigen::Matrix<double, 3, 1> l_foot, const Eigen::Matrix<double, 3, 1> r_foot, const Eigen::Matrix<double, 1, 1> heading)
{
  
  VectorXd output(29);
  double COS = std::cos(heading(0,0));
  double SIN = std::sin(heading(0,0));

  double PI = 3.14159;

  double digitCloseLoopAngleCorrection = 13. / 180 * PI;


  //floating base quaternions 
  
  q_sol(0, 0) = 1; //std::cos(heading(0, 0)/2);
  q_sol(1, 0) = 0;
  q_sol(2, 0) = 0;
  q_sol(3, 0) = 0; //std::sin(heading(0, 0)/2);

  q_sol(4, 0) = COM(0, 0);
  q_sol(5, 0) = COM(1, 0);
  q_sol(6, 0) = COM(2, 0);


  Eigen::Matrix<double, 3, 1> p_PS;
  Eigen::Matrix<double, 3, 1> p_AS;  
  Eigen::Matrix<double, 3, 1> p_PT; 
  Eigen::Matrix<double, 3, 1> p_ST; 
  Eigen::Matrix<double, 3, 1> p_PA;
  Eigen::Matrix<double, 3, 1> p_AT;
  //constants from rvis_urdf
  
  //hip_abduction-> hip_rot ->hip_pitch
  p_AS(0,0) = -0.0450304;
  p_AS(1,0) =  0.004;
  p_AS(2,0) = -0.118428;
  
  //pelvis->hip_abduction
  p_PA(0,0) = -0.001;
  p_PA(1,0) =  0.091745;
  p_PA(2,0) = 0.0;
  
  //pelvis->toe
  p_PT(0,0) = (l_foot(0,0) - COM(0,0))*COS + -(l_foot(1,0) - COM(1,0))*SIN;
  p_PT(1,0) = -(l_foot(0,0) - COM(0,0))*SIN + (l_foot(1,0) - COM(1,0))*COS;
  p_PT(2,0) = (l_foot(2,0) - COM(2,0));

  //toe->hip_abduction
  p_AT = p_PT - p_PA;

  //left abduction and rotation
  double l_theta_abd = std::atan2(p_AT(1,0),std::abs(p_AT(2,0)));
  q_sol(7,0) = 0.37524572679 - l_theta_abd; //left abduction zero -1.1955506 +pi/2
  q_sol(8, 0) = 0;//-0.0076; //left rotation
  
  //pelvis->hip_pitch
  Eigen::Matrix3d l_R_AS = Eigen::AngleAxisd(l_theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
  p_PS = p_PA + l_R_AS*p_AS;
 
  //toe->hip_pitch
  p_ST = p_PT - p_PS;

  //std::cout << "p_st " << p_ST << std::endl;
  double LL = std::sqrt(p_ST(0,0)*p_ST(0,0) + p_ST(1,0)*p_ST(1,0) + p_ST(2,0)*p_ST(2,0));
  //std::cout << "LL" << LL << std::endl;
  
  double LA = std::asin(p_ST(0,0)/LL);// + 0.0519167;
  //std::cout << "LA" << LA << std::endl;

  double t2 = LL*LL;
  double qflexion = LA+std::acos((t2*00.944822373393802 + .02839440665154953)/LL)-(1.0/10.0);
  double qknee = -std::acos(t2*1.889644746787604-1.001611186696901)-(7.0/200.0);
  q_sol(9, 0) = 0.785398163397 - qflexion;
  q_sol(10, 0) = PI/2 + qknee; 

  q_sol(11, 0) = -1.7976891 + (-qknee + digitCloseLoopAngleCorrection);// - 4*PI - qflexion -qknee);//"shin_to_tarsus_left"
  q_sol(12, 0) = 0.9 - qflexion - qknee - ((-qknee+digitCloseLoopAngleCorrection));// toe_pitch_joint_left
  q_sol(13, 0) =  -std::atan2(p_AT(1,0),std::abs(p_AT(2,0)));;//toe_roll_joint_left


  //*************Right leg**************//
  Eigen::Matrix<double, 3, 1> r_p_PS;
  Eigen::Matrix<double, 3, 1> r_p_AS;  
  Eigen::Matrix<double, 3, 1> r_p_PT;
  Eigen::Matrix<double, 3, 1> r_p_ST;
  Eigen::Matrix<double, 3, 1> r_p_PA;
  Eigen::Matrix<double, 3, 1> r_p_AT;


  //hip_abduction-> hip_rot ->hip_pitch
  r_p_AS(0,0) = -0.0450304;
  r_p_AS(1,0) =  -0.004;
  r_p_AS(2,0) = -0.118428;

  //pelvis->hip_abduction
  r_p_PA(0,0) = -0.001;
  r_p_PA(1,0) = -0.091745;
  r_p_PA(2,0) = 0.0;

  //pelvis->toe
  r_p_PT(0,0) = (r_foot(0,0) - COM(0,0))*COS + -(r_foot(1,0) - COM(1,0))*SIN;
  r_p_PT(1,0) = -(r_foot(0,0) - COM(0,0))*SIN + (r_foot(1,0) - COM(1,0))*COS;
  r_p_PT(2,0) = (r_foot(2,0) - COM(2,0));
  
  //toe->hip_abduction
  r_p_AT = r_p_PT - r_p_PA;

  //right abduction 
  double r_theta_abd = std::atan2(r_p_AT(1,0),std::abs(r_p_AT(2,0)));
  //right abduction and rotation
  q_sol(18,0) = -0.37524572679 - r_theta_abd; //right abduction
  q_sol(19, 0) =0; //right rotation

  
  Eigen::Matrix3d r_R_AS = Eigen::AngleAxisd(r_theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
  r_p_PS = r_p_PA + r_R_AS*r_p_AS;

  r_p_ST = r_p_PT - r_p_PS;

  double RR = std::sqrt(r_p_ST(0,0)*r_p_ST(0,0) + r_p_ST(1,0)*r_p_ST(1,0) + r_p_ST(2,0)*r_p_ST(2,0)) ;
  double RA = std::asin(r_p_ST(0,0)/RR) ;//+ 0.0519167;


  double rt2 = RR*RR;
  double rqflexion = RA+std::acos((rt2*0.944822373393802 + .02839440665154953)/RR)-(1.0/10.0);
  double rqknee = -std::acos(rt2*1.889644746787604-1.001611186696901)-(7.0/200.0);
  q_sol(20, 0) = -0.785398163397 + rqflexion; //right flexion
  q_sol(21, 0) = -PI/2. - rqknee; //right knee

  q_sol(22, 0) =  1.7976891 -(-rqknee+digitCloseLoopAngleCorrection);// "shin_to_tarsus_left"
  q_sol(23, 0) =  -0.9 + rqflexion + rqknee + ((-rqknee+digitCloseLoopAngleCorrection) );// toe_pitch_joint_right
  q_sol(24, 0) =  -std::atan2(r_p_ST(1,0),std::abs(r_p_ST(2,0)));//toe_roll_joint_right

  //********left arm*************//

  q_sol(14,0)= -0.150623;
  q_sol(15,0)= 1.09331;
  q_sol(16,0)= 5.71354e-05;
  q_sol(17,0)= -0.141287;
  //********Right arm*************//
  q_sol(25,0)= 0.150628;
  q_sol(26,0)= -1.09328;
  q_sol(27,0)= -5.60829e-05;
  q_sol(28,0)= 0.141287;

  output << q_sol;
  
  return output;
}





VectorXd RobotExpressions::Inverse_Kinematics_p_R(double LA,double LL)
{
//  This function was generated using nonlinear regression 
    VectorXd output(2);
    LL = -LL;
    qHipPitch = ( b_hip[0] + b_hip[1]*LL + b_hip[2]*pow(LL,2) + b_hip[3]*pow(LL,3) + b_hip[4]*pow(LL,4) );

    // std::vector<double> b_knee = { 1.1646, -0.0674, -2.8622, -0.8685};
    qKnee = ( b_knee[0] + b_knee[1]*LL + b_knee[2]*pow(LL,2) + b_knee[3]*pow(LL,3) );

    output << qHipPitch, qKnee;
    return output;
}

VectorXd RobotExpressions::Inverse_Kinematics_v(double LA, double LL, double dLA, double dLL)
 {   
     VectorXd output(2);
     double t2 = 1.0/LL*LL;
     double t3 = LL*LL;
     double t4 = t3 + 3.005264000000002e-2;
     dqFlexion = dLA + dLL * 1.0/sqrt(t2 * t4*t4 * (-8.926893172654969e-1) + 1.0) * (t2*t4*9.44822373393802e-1 - 1.889644746787604);
     double t5 = t3 * 1.889644746787604 - 1.001611186696901;
     dqKnee = LL * dLL * 1.0/sqrt(-t5*t5 + 1.0) * 3.779289493575208;
     output << dqFlexion, dqKnee;  
     return output;
 }


void RobotExpressions::IK_p_full(Eigen::VectorXd& q_sol, const Eigen::Matrix<double, 3, 1> p_PToe, double leg, double q_rotation)
{
  double PI = 3.14159;

  double digitCloseLoopAngleCorrection = 13. / 180 * PI;
  if(leg)
  { //right leg in stance
    Eigen::Matrix<double, 3, 1> p_AbdToe_P;
    Eigen::Matrix<double, 3, 1> p_PS; 
    Eigen::Matrix<double, 3, 1> p_ST; 
    Eigen::Matrix<double, 3, 1> p_PA;
    Eigen::Matrix<double, 3, 1> p_AS;

    //constants from rvis_urdf
    //hip_abduction-> hip_rot ->hip_pitch
    p_AS(0,0) = -0.0450304;
    p_AS(1,0) =  0.004;
    p_AS(2,0) = -0.118428;
    
    //pelvis->hip_abduction
    p_PA(0,0) = -0.001;
    p_PA(1,0) =  0.091745;
    p_PA(2,0) = 0.0;
    
    //toe->hip_abduction
    p_AbdToe_P = p_PToe - p_PA;
    double l_theta_abd = std::atan2(p_AbdToe_P(1,0),std::abs(p_AbdToe_P(2,0)));
    q_sol(0,0) = 0.37524572679- l_theta_abd; // with rotation will be diffrent left abduction zero -1.1955506 +pi/2
    q_sol(1, 0) = 0;//left rotation

    //pelvis->hip_pitch
    Eigen::Matrix3d l_R_AS = Eigen::AngleAxisd(l_theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
    p_PS = p_PA + l_R_AS*p_AS;
  
    //toe->hip_pitch
    p_ST = p_PToe - p_PS;
    
    double LL = std::sqrt(p_ST(0,0)*p_ST(0,0) + p_ST(1,0)*p_ST(1,0) + p_ST(2,0)*p_ST(2,0));
    double LA = std::asin(p_ST(0,0)/LL);

    double t2 = LL*LL;
    double qflexion = LA+std::acos((t2*00.944822373393802 + .02839440665154953)/LL)-(1.0/10.0);
    double qknee = -std::acos(t2*1.889644746787604-1.001611186696901)-(7.0/200.0);
    q_sol(2, 0) = 0.785398163397 - qflexion;
    q_sol(3, 0) = PI/2 + qknee; 

    //q_sol(11, 0) = -1.7976891 + (-qknee + digitCloseLoopAngleCorrection);// - 4*PI - qflexion -qknee);//"shin_to_tarsus_left"
    q_sol(4, 0) = 0.9 - qflexion - qknee - ((-qknee+digitCloseLoopAngleCorrection));// toe_pitch_joint_left
    q_sol(5, 0) =  -std::atan2(p_AbdToe_P(1,0),std::abs(p_AbdToe_P(2,0)));;//toe_roll_joint_left


  }else
  { //left leg in stance

    Eigen::Matrix<double, 3, 1> r_p_PS;
    Eigen::Matrix<double, 3, 1> r_p_PT;
    Eigen::Matrix<double, 3, 1> r_p_ST;
    Eigen::Matrix<double, 3, 1> r_p_PA;
    Eigen::Matrix<double, 3, 1> p_AbdToe_P;
    Eigen::Matrix<double, 3, 1> r_p_AS;
    //hip_abduction-> hip_rot ->hip_pitch
    r_p_AS(0,0) = -0.0450304;
    r_p_AS(1,0) =  -0.004;
    r_p_AS(2,0) = -0.118428;

    //pelvis->hip_abduction
    r_p_PA(0,0) = -0.001;
    r_p_PA(1,0) = -0.091745;
    r_p_PA(2,0) = 0.0;

    p_AbdToe_P = p_PToe - r_p_PA;
    double r_theta_abd = std::atan2(p_AbdToe_P(1,0),std::abs(p_AbdToe_P(2,0)));
    q_sol(0,0) = -0.37524572679 - r_theta_abd; //right abduction
    q_sol(1, 0) =0; //right rotation


    Eigen::Matrix3d r_R_AS = Eigen::AngleAxisd(r_theta_abd, -Eigen::Vector3d::UnitX()).toRotationMatrix();
    r_p_PS = r_p_PA + r_R_AS*r_p_AS;

    r_p_ST = r_p_PT - r_p_PS;

    double RR = std::sqrt(r_p_ST(0,0)*r_p_ST(0,0) + r_p_ST(1,0)*r_p_ST(1,0) + r_p_ST(2,0)*r_p_ST(2,0)) ;
    double RA = std::asin(r_p_ST(0,0)/RR) ;//+ 0.0519167;

    double rt2 = RR*RR;
    double rqflexion = RA+std::acos((rt2*0.944822373393802 + .02839440665154953)/RR)-(1.0/10.0);
    double rqknee = -std::acos(rt2*1.889644746787604-1.001611186696901)-(7.0/200.0);
    q_sol(2, 0) = -0.785398163397 + rqflexion; //right flexion
    q_sol(3, 0) = -PI/2. - rqknee; //right knee

    q_sol(4, 0) =  -0.9 + rqflexion + rqknee + ((-rqknee+digitCloseLoopAngleCorrection) );// toe_pitch_joint_right
    q_sol(5, 0) =  -std::atan2(p_AbdToe_P(1,0),std::abs(p_AbdToe_P(2,0)));//toe_roll_joint_right



  }

}

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

void RobotExpressions::swing_foot_traj(VectorXd& p_StSw_d, 
  Vector3d& v_StSw_d, Vector3d& a_StSw_d, const Vector3d p_StSw_d_final, 
  const Vector3d p_StSw_initial, double swing_height_d, double sXY, double sZ)
{
  double s2T_factor = 1;
  sXY = std::min(sXY, 1.0);
  sZ = std::min(sZ, 1.0);
  Vector3d D_Sw_d_final;

  D_Sw_d_final = p_StSw_d_final - p_StSw_initial;
  //std::cout<< D_Sw_d_final << std::endl;

  // Linear combination of linear and cos function.
  // Linear has velocity, and cos doesn't have velocity at beginning and ending.
  // We want initially has larger velocity (more linear), and in the end has small velocity (more cos).
  Vector3d D_Sw_d;
  VectorXd output(3);

  // This allows reach final position faster by setting desired XY position 
  // closer to final. But we don't want reach final height faster.
  D_Sw_d = get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY, sZ);

  p_StSw_d = p_StSw_initial + D_Sw_d;
 
  // Find velocity trajectory by center difference.
  double ds = 0.00001;
  v_StSw_d = (get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY+ds, sZ+ds) - get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY-ds, sZ-ds))/(2*ds);
  // v_StSw_d = (output_pos - output_neg)/(2*ds);
  v_StSw_d = v_StSw_d / s2T_factor;

  // Find acceleration by center difference.
  VectorXd v_next = (get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY+2*ds, sZ+2*ds) - get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY, sZ))/(2*ds);
  VectorXd v_prev = (get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY, sZ) - get_displacement_xyz(D_Sw_d_final, swing_height_d, sXY-2*ds, sZ-2*ds))/(2*ds);
  a_StSw_d = (v_next - v_prev)/(2*ds);
  a_StSw_d = a_StSw_d / s2T_factor;
  a_StSw_d = a_StSw_d.cwiseMax(-20).cwiseMin(20); // clamp acceleration.
}

VectorXd RobotExpressions::get_displacement_xyz(const Vector3d D_xy_final, double H, double sXY, double sZ)
{
  // x,y direction
  double para_xy = 1; //0.5 + 0.2*sXY; // 0 means straight line. 1 means cos function.
  double x = (1-para_xy)*D_xy_final(0,0)*sXY + para_xy*D_xy_final(0,0)*(1-std::cos(M_PI*sXY))/2;
  double y = (1-para_xy)*D_xy_final(1,0)*sXY + para_xy*D_xy_final(1,0)*(1-std::cos(M_PI*sXY))/2;

  // z direction
  double s_norm = 1 - 2*std::abs(sZ-0.5);
  double para_z = 1;//0.8 + 0.2*s_norm; // 0 means straight line. 1 means cos function.
  double z = (1-para_z)*H*s_norm + para_z*H*(1-cos(M_PI*s_norm))/2;
  
  VectorXd output(3);
  output << x, y, z;
  
  return output;
}
  


/**
* Author:       Victor Paredes, Guillermo Castillo
* Email:        paredescauna.1@osu.edu, castillomartinez.2@osu.edu
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
/**
* Author:       Zhaoyuan Gu, Aziz Shamsah
* Email:        {zgu78, ashamsah3}@gatech.edu
* Modified:     02-25-2023
* Copyright:    LIDAR @ Georgia Tech
**/
#include "walking_trajectory.hpp"

BezierSupport::BezierSupport(int _bezierOrder, VectorXd &_points)
{
  bezierOrder = _bezierOrder;
  bezierBinomialCoef.resize(bezierOrder + 1);  
  
  P.resize( bezierOrder + 1 );

  if(_points.size() == bezierOrder + 1) {
    for(int i = 0; i < _points.size(); i++) {
      P[i] = _points(i);
    }
  }else{
    printf("Error loading bezier polynomial");
  }
}

double BezierSupport::Bezier(double t)
{
  double bezier = 0;
  for(int i = 0; i < bezierOrder + 1; i++) {
    bezier += bincoeffFast(bezierOrder, i) *  P[i] * std::pow(1-t, bezierOrder - i) * std::pow(t,i);
  }
  return bezier;  
}

double BezierSupport::DBezier(double t)
{
  double dbezier = 0;
  for(int i = 0; i < bezierOrder; i++) {
    dbezier += (double)(-(bezierOrder - i)) * bincoeffFast(bezierOrder, i) * P[i] * std::pow(1-t, bezierOrder - i - 1) * std::pow(t,i);
  }

  for(int i = 1; i < bezierOrder + 1; i++) {
    dbezier += (double) i * bincoeffFast(bezierOrder, i) * P[i] * std::pow(1-t, bezierOrder - i) * std::pow(t,i - 1);
  }  
  return dbezier;
}

double BezierSupport::bincoeff(int upper, int lower)
{
  int n = upper;
  int k = lower;
  std::vector< std::vector<int> > C(n + 1, std::vector<int> (k+1, 0) );  
  //int C[n + 1][k + 1]; 
  int i, j; 
  
  // Caculate value of Binomial Coefficient 
  // in bottom up manner 
  for (i = 0; i <= n; i++) 
    { 
      for (j = 0; j <= std::min(i, k); j++) 
        { 
          // Base Cases 
          if (j == 0 || j == i) 
            C[i][j] = 1; 
  
          // Calculate value using previously 
          // stored values 
          else
            C[i][j] = C[i - 1][j - 1] + 
              C[i - 1][j]; 
        } 
    } 
  
    return C[n][k];
}

double BezierSupport::bincoeffFast(int upper, int lower)
{
  if (bezierBinomialCoef[lower] == 0)
  {
    bezierBinomialCoef[lower] = bincoeff(upper, lower);
  }
  return bezierBinomialCoef[lower];
}

PID_comp::PID_comp(double p_gain, double i_gain, double d_gain, double mn, double mx, double dt) :
  kp(p_gain), ki(i_gain), kd(d_gain), min(mn), max(mx), dt(dt) {
}

double PID_comp::update(double qd, double qdotd, double q, double qdot) {
  error_pos = - qd + q;
  error_vel = - qdotd + qdot;
  error_int += error_pos*dt;
  output = kp*error_pos + kd*error_vel + ki*error_int;
  output = std::min(max, std::max(min, output));
  return output;
}

WalkingTrajectory::WalkingTrajectory(std::string path2toml) {

  config = cpptoml::parse_file(path2toml + "/config_files/trajectory_config.toml");
  config_robot = cpptoml::parse_file(path2toml + "/config_files/robot_config.toml");
  // Read TOML File to obtain the number of domains and set each domain class 
  nDomains = config->get_qualified_as<int>("nDomains").value_or(0);

  //walkingDomain.resize(2);
  walkingDomain.reset(new DomainControl::Domain[nDomains]);

  for (int i = 0; i < nDomains; i++) {
    walkingDomain[i].loadDomainInfo(config, (DomainControl::DomainType)i);
    walkingDomain[i].index = i;
  }

  // Assumming the first loaded domain is the first actual domain
  current_domain = &walkingDomain[0];
  domain_transition.isTransitioning = false;
  hasSwitched = false;

  // Creating variables for regulation
  VectorXd bPoints(6);
  bPoints << 0, 0, 0, 0, 1, 1;
  s_slow = new BezierSupport(5, bPoints);
  ds_slow = new BezierSupport(5, bPoints);

  bPoints << 0, 0, 0.5, 0.75, 1, 1;
  s_middle = new BezierSupport(5, bPoints);

  bPoints << 0, 0, 1, 1, 1, 1;
  s_fast = new BezierSupport(5, bPoints);
  
  TorsoPitch = JointFilter(5);
  TorsoRoll = JointFilter(5);
  TorsoYaw = JointFilter(5);
  LFootPitch = JointFilter(5);
  LFootRoll = JointFilter(5);
  RFootPitch = JointFilter(5);
  RFootRoll = JointFilter(5);

  Vx_filtered = JointFilter(5);
  Vy_filtered = JointFilter(1000);
  Ax_filtered = JointFilter(30);
  Ay_filtered = JointFilter(30);
  // Kp_FP.resize(4);
  // Kp_T.resize(4);


  transAnkle = new TransmissionAnkleNew();

  tg_yaw = 0; 
}

double WalkingTrajectory::constrainAngle(double x) {
  x = fmod(x + M_PI, 2 * M_PI);
  if (x < 0)
      x += M_PI;
  return x - M_PI;
}

// ZG: Move this function to utility.h. Have declaration issue.
double angleDiff(double a, double b) {
  double dif = fmod(b - a + M_PI, 2*M_PI);
  if (dif < 0)
    dif += 2*M_PI;
  
  // std::cout << "a: " << a << " b: " << b << std::endl;
  // std::cout << "B-A: " << b-a << " dif: " << dif - M_PI << std::endl;
  
  return dif - M_PI; // [-pi, pi].
}

double WalkingTrajectory::updateYawTarget(double newYawTarget, double yaw_WB, double st_yaw, double sw_yaw) {
  // These should all be set at contact time.
  // All the yaw here use positive Z axis, except for leg yaw measurement.
  
  //target_yaw, base_orientation_unfil(2), 
          // position_full(wdc::joint::RIGHT_HIP_YAW), position_full(wdc::joint::LEFT_HIP_YAW)
  
  // theta_WWpc = theta_WWpc + dtheta (tg_yaw)
  // theta_WpcSt = theta_WSt - theta_WWpc = (yaw_WB - st_yaw - tg_yaw) + st_yaw
  // R_StB   ( theta_WpcSt + theta_StB ) (position(st_yaw))
  tg_yaw_old = tg_yaw;
  tg_yaw = newYawTarget;
  st_yaw_init = st_yaw;
  sw_yaw_init = sw_yaw;

  // Calculate World frame yaw.
  double yaw_WSw_df = tg_yaw;
  // This stays constant. But this is not constant in the data. BAD!
  const double yaw_WSt = yaw_WB - st_yaw;
  double yaw_WSw = yaw_WB - sw_yaw;

  // Calculate Stance frame yaw.
  double yaw_StSw_init = yaw_WSw - yaw_WSt;
  yaw_StSw_df = angleDiff(yaw_WSt, yaw_WSw_df); // yaw_WSw_df-yaw_WSt in [-pi, pi].
  // Limit target turn angle for self-collision avoidance.
  const double yaw_StSw_col_lim = 14 * M_PI/180; // deg.
  if (current_domain->support_leg == 1 && yaw_StSw_df > 0) {
    yaw_StSw_df = std::clamp(yaw_StSw_df, -yaw_StSw_col_lim, yaw_StSw_col_lim);
  }
  if (current_domain->support_leg == 0 && yaw_StSw_df < 0) {
    yaw_StSw_df = std::clamp(yaw_StSw_df, -yaw_StSw_col_lim, yaw_StSw_col_lim);
  }
  yaw_StSw_df = std::clamp(yaw_StSw_df, -yaw_StSw_col_lim, yaw_StSw_col_lim);

  // Calculate target for stance.
  double yaw_StB_init = st_yaw;
  double yaw_StB_df = yaw_StSw_df / 2;
  st_yaw_df = yaw_StB_df;

  const double turning_threshold = 0.1;
  // std::cout << "yaw_StB_df - yaw_StB_init: " << yaw_StB_df - yaw_StB_init << std::endl;
  if (yaw_StB_df - yaw_StB_init > turning_threshold) {
    is_turning = -1;
    std::cout << "Turning left. " << std::endl;
  } else if (yaw_StB_df - yaw_StB_init < -turning_threshold) {
    is_turning = 1;
    std::cout << "Turning right. " << std::endl;
  } else {
    is_turning = 0;
  }

  if (is_turning == 0) {
    turning_step_index = 0;
  } else {
    turning_step_index ++;
  }
  // Calculate target for swing.
  double yaw_BSw_df = -yaw_StB_df + yaw_StSw_df;
  sw_yaw_df = -yaw_BSw_df;

  return yaw_StSw_df;
}

int WalkingTrajectory::reloadRegulators(std::string path2toml="", bool sim=true)
{
  // reg_config = cpptoml::parse_file("regulators_config.toml");
  reg_config = cpptoml::parse_file(path2toml+ "/config_files/regulators_config.toml");
  hip_pitch_offset = reg_config->get_qualified_as<double>("heuristics.pitch_offset").value_or(0.0);
  hip_roll_offset = reg_config->get_qualified_as<double>("heuristics.hip_roll_offset").value_or(0.0);
  hip_yaw_offset = reg_config->get_qualified_as<double>("heuristics.hip_yaw_offset").value_or(0.0);

  Kp_fps = reg_config->get_qualified_as<double>("sagittal-foot-placement.Kp").value_or(0.0),
  Kd_fps = reg_config->get_qualified_as<double>("sagittal-foot-placement.Kd").value_or(0.0),
  Kp_fpf = reg_config->get_qualified_as<double>("frontal-foot-placement.Kp").value_or(0.0),
  Kd_fpf = reg_config->get_qualified_as<double>("frontal-foot-placement.Kd").value_or(0.0),

  Kp_tp = reg_config->get_qualified_as<double>("torso-pitch.Kp").value_or(0.0),
  Kd_tp = reg_config->get_qualified_as<double>("torso-pitch.Kd").value_or(0.0),
  Kp_tr = reg_config->get_qualified_as<double>("torso-roll.Kp").value_or(0.0),
  Kd_tr = reg_config->get_qualified_as<double>("torso-roll.Kd").value_or(0.0),

  landing_pitch_offset_left = reg_config->get_qualified_as<double>("toe-regulation.landing_pitch_offset_left").value_or(0.0); //0.05
  landing_pitch_offset_right = reg_config->get_qualified_as<double>("toe-regulation.landing_pitch_offset_right").value_or(0.0); //0.05
  vx_offset = reg_config->get_qualified_as<double>("sagittal-foot-placement.vx_offset").value_or(0.0); //0.1
  vy_offset = reg_config->get_qualified_as<double>("frontal-foot-placement.vy_offset").value_or(0.0); //0.1


  if (sim) {
    force_threshold = reg_config->get_qualified_as<double>("heuristics.force_threshold_sim").value_or(0.0);
  } else {
    force_threshold = reg_config->get_qualified_as<double>("heuristics.force_threshold_hardware").value_or(0.0);
  }
  
  std::cout << "Force threshold: " << force_threshold << endl;

  // printf("Gains updated: %f \n", Kp_FP(0));
  printf("Regulator Gains updated. \n\n");

  return 0;
}

int WalkingTrajectory::changeDomain(DomainControl::DomainType domain_id) {
  // Check if new domain exists
  if(domain_id < 0 || domain_id >= nDomains) {
    printf("Inconsistent domain id");
    return 0;
  }
  // std::unique_ptr<Domain []> walkingDomain; -> an pointer that points to an object array
  current_domain = &walkingDomain[domain_id]; // get the domain indexed for right leg (-> current_domain.support_leg == DomainControl::Right_STAND)
  if (current_domain->support_leg == DomainControl::DomainType::RIGHT_STAND)  {
    printf("\nChange domain to: RIGHT.\n");
  } else {
    printf("\nChange domain to: LEFT.\n");
  }  
  // std::cout << std::flush;
  return 1;
}

double WalkingTrajectory::compute_phaseVariable(double stept, double t) {
  step_time_spent = t - time_offset;

  // This also update phaseVariable member in the WalkingTrajectory.
  phaseVariable = std::clamp(step_time_spent/T, 0.0, 1.0);

  return phaseVariable;
}

struct EulerAngles {
    double roll, pitch, yaw;
};

EulerAngles ToEulerAng2(double qw, double qx, double qy, double qz) {
    EulerAngles angles;

    // roll (x-axis rotation)
    double sinr_cosp = 2 * (qw * qx + qy * qz);
    double cosr_cosp = 1 - 2 * (qx * qx + qy * qy);
    angles.roll = std::atan2(sinr_cosp, cosr_cosp);

    // pitch (y-axis rotation)
    double sinp = 2 * (qw * qy - qz * qx);
    if (std::abs(sinp) >= 1)
        angles.pitch = std::copysign(M_PI / 2, sinp); // use 90 degrees if out of range
    else
        angles.pitch = std::asin(sinp);

    // yaw (z-axis rotation)
    double siny_cosp = 2 * (qw * qz + qx * qy);
    double cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
    angles.yaw = std::atan2(siny_cosp, cosy_cosp);

    return angles;
}


int WalkingTrajectory::evalGuardSensor(DigitState& currState, DomainControl::DomainType &domain, double &s) {
  if (currState.position_full.size() != (current_domain->nJoints + 10)) { //We need to add 10 because fo the unanctuated joints
    printf("Vector dimensions do not correspond to the number of Joints");
    return 0;
  }

  getGRF(currState);

  if (domain == DomainControl::DomainType::LEFT_STAND) {
    if (s >= 0.6) {
      if ((currState.GRF_LR(2) > force_threshold && s >= 0.9) || (s >= 0.99)) {
        current_domain = &walkingDomain[current_domain->index + 1 >= nDomains
          ? 0 : current_domain->index + 1]; // SWAP  TO   RIGHT   SUPPORT
        hasSwitched = true;
        domain = DomainControl::DomainType::RIGHT_STAND;
        pos_reference_lhiproll_old = currState.position_full[joint::LEFT_HIP_ROLL];
        pos_reference_rhiproll_old = currState.position_full[joint::RIGHT_HIP_ROLL];
        std::cout << "SWAP TO RIGHT SUPPORT" << std::endl;
        return 1; // SWAPPING
      }
    } else {
      hasSwitched = false;
      return 0; // NO SWAP
    }

  } else if (domain == DomainControl::DomainType::RIGHT_STAND) {
    if (s >= 0.6) {
      if ((currState.GRF_LR(0) > force_threshold && s >= 0.9) || (s >= 0.99)) {
        // TODO: remove duplicate current_domain->support_leg and use domain.
        current_domain = &walkingDomain[current_domain->index + 1 >= nDomains
          ? 0 : current_domain->index + 1]; 
        hasSwitched = true;
        domain = DomainControl::DomainType::LEFT_STAND;
        pos_reference_lhiproll_old = currState.position_full[joint::LEFT_HIP_ROLL];
        pos_reference_rhiproll_old = currState.position_full[joint::RIGHT_HIP_ROLL];
        std::cout << "SWAP TO LEFT SUPPORT" << std::endl;
        return 1; // SWAPPING
      }
    } else {
      hasSwitched = false;
      return 0; // NO SWAP
    }    
  } else if (domain == DomainControl::DomainType::DOUBLE_SUPPORT) {
    domain = DomainControl::DomainType::RIGHT_STAND;
    hasSwitched = true;
    return 1;
  }
  
  return 0; // Wait if it is jumping/running? We might need to add that case in the future
}


// OUTPUT: [L_normal, L_horizontal, R_normal, R_horizontal]
int WalkingTrajectory::getGRF(DigitState& currState) {
  if (currState.position_full.size() != (current_domain->nJoints + 10)) { //We need to add 10 because fo the unanctuated joints
    printf("Vector dimensions do not correspond to the number of Joints");
    return 0;
  }

  VectorXd qsL(2);
  VectorXd qsR(2);
  MatrixXd JL;
  MatrixXd JR;
  VectorXd GRF_L(2);
  VectorXd GRF_R(2);
  MatrixXd JLeftFoot;
  MatrixXd JRightFoot;
  VectorXd FsL(2);
  VectorXd FsR(2);  
  MatrixXd FsL_aux(2,1);
  MatrixXd FsR_aux(2,1);
  double Ks1 = 3000;
  double Ks2 = 2600;
  MatrixXd JL_s(2,2);
  MatrixXd JR_s(2,2);


  VectorXd q(22);

  // //Dimension of the joint state used in FROST is 22 = 6 floating base[x,y,z,yaw,pitch,roll] +  12 leg actuated joints + 4 passive joints (knee_to_shin and shin_to_tarsus)
  q << 0,0,0,0,0,0,
    currState.position_full[joint::LEFT_HIP_ROLL], currState.position_full[joint::LEFT_HIP_YAW], currState.position_full[joint::LEFT_HIP_PITCH],
    currState.position_full[joint::LEFT_KNEE], currState.position_full[joint::LEFT_SHIN], currState.position_full[joint::LEFT_TARSUS],
    currState.position_full[joint::LEFT_TOE_PITCH], currState.position_full[joint::LEFT_TOE_ROLL],
    currState.position_full[joint::RIGHT_HIP_ROLL], currState.position_full[joint::RIGHT_HIP_YAW], currState.position_full[joint::RIGHT_HIP_PITCH],
    currState.position_full[joint::RIGHT_KNEE], currState.position_full[joint::RIGHT_SHIN], currState.position_full[joint::RIGHT_TARSUS],
    currState.position_full[joint::RIGHT_TOE_PITCH], currState.position_full[joint::RIGHT_TOE_ROLL];

  // Compute spring deflection
  qsL[0] = currState.position_full[joint::LEFT_SHIN];
  qsL[1] = currState.position_full[joint::LEFT_HEEL_SPRING];
  qsR[0] = currState.position_full[joint::RIGHT_SHIN];
  qsR[1] = currState.position_full[joint::RIGHT_HEEL_SPRING];

  // Compute contact Jacobian 
  JL  = robotExpressions.jac_leftFoot(q);
  JR  = robotExpressions.jac_rightFoot(q);

  // Compute spring force
  FsL[0] =  Ks1 * qsL[0];
  FsL[1] =  Ks2 * qsL[1];
  FsR[0] =  Ks1 * qsR[0];
  FsR[1] =  Ks2 * qsR[1];
  FsL_aux << FsL[0] + FsL[1], 
             FsL[1];
  FsR_aux << FsR[0] + FsR[1], 
            FsR[1];           

  // Get reduced Jacobian for joints where the spring force is applied (heel_spring on tarsus and shin_spring on knee)
  JL_s << JL(0,10), JL(0,11),
          JL(2,10), JL(2,11);

  JR_s << JR(0,18), JR(0,19),
          JR(2,18), JR(2,19);

  GRF_L = (-JL_s).transpose().inverse() * FsL_aux;
  GRF_R = (-JR_s).transpose().inverse() * FsR_aux;

  double max_grf = 500.0;
  GRF_L[0] = std::max(0.0, std::min(GRF_L[0], max_grf));
  GRF_L[1] = std::max(0.0, std::min(GRF_L[1], max_grf));
  GRF_R[0] = std::max(0.0, std::min(GRF_R[0], max_grf));
  GRF_R[1] = std::max(0.0, std::min(GRF_R[1], max_grf));

  currState.GRF_LR << GRF_L[0], GRF_L[1], GRF_R[0], GRF_R[1];

  return 0;
}

int WalkingTrajectory::goToDomain(DomainControl::DomainType source_domain, DomainControl::DomainType target_domain) {
  domain_transition.source_domain = source_domain;
  domain_transition.target_domain = target_domain;
  domain_transition.isTransitioning = true;
  return 1;
}

int WalkingTrajectory::regulation_PSP(const DigitState& currState,
        VectorXd &pos_reference, VectorXd &vel_reference,
        double s, Vector3d& p_StSw_initial, 
        const DigitControlHyperparameters &hyper_param, 
        VectorXd p_MP_P_0, VectorXd &leg_length, VectorXd &command,
        VectorXd& acc_reference) {
  //---left and right arm-----//
  pos_reference.tail(8) << -0.150623, 1.09331, 5.71354e-05, -0.141287, 
                            0.150628, -1.09328, -5.60829e-05, 0.141287;

  Vy_filtered.addPoint(currState.base_velocity[1]);

  double kp_h_pelvis = 1.1;
  if (is_turning == -1 && current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) {
    kp_h_pelvis = 0.6;
  }
  if (is_turning == -1 && current_domain->support_leg == DomainControl::DomainType::RIGHT_STAND) {
    kp_h_pelvis = 1.3;
  }
  double kd_h_pelvis = 0.02; // kd>0.05 would affect the touch performance, cause sudden leg retract.
  double kp_pitch_pelvis = 1.5; // 0.3
  double kd_pitch_pelvis = 0.08;// 0.06; // 0.06
  double kp_roll_pelvis = 1.5;//2.5; // 0.3
  double kd_roll_pelvis = 0.08; //0.06

  double kp_yaw_pelvis = 0.3; // 0.3
  double kd_yaw_pelvis = 0.06; //0.06

  roll = currState.base_orientation[0];
  pitch = currState.base_orientation[1];
  yaw = currState.base_orientation[2]; // [-pi, pi].
  double droll = currState.base_angvel[0];
  double dpitch = currState.base_angvel[1];
  double dyaw = currState.base_angvel[2];
  
  // ZG: Check left and right use domain instead of support_leg. 
  // Remove all usage of support_leg.
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT
    st_flexion = joint::LEFT_HIP_PITCH;
    st_abduction = joint::LEFT_HIP_ROLL;
    st_rotation = joint::LEFT_HIP_YAW;
    st_ankle = joint::LEFT_TARSUS;
    st_toeA = joint::LEFT_TOE_A;
    st_toeB = joint::LEFT_TOE_B;
    st_knee = joint::LEFT_KNEE;

    sw_flexion = joint::RIGHT_HIP_PITCH;
    sw_abduction = joint::RIGHT_HIP_ROLL;
    sw_rotation = joint::RIGHT_HIP_YAW;
    sw_ankle = joint::RIGHT_TARSUS;
    sw_toeA = joint::RIGHT_TOE_A;
    sw_toeB = joint::RIGHT_TOE_B;
    sw_knee = joint::RIGHT_KNEE;

    hip_pitch_direction = 1;
    hip_roll_direction = -1;
    hip_yaw_direction = 1;
  } else {  //RIGHT SUPPORT
    st_flexion = joint::RIGHT_HIP_PITCH;
    st_abduction = joint::RIGHT_HIP_ROLL;
    st_rotation = joint::RIGHT_HIP_YAW;
    st_ankle = joint::RIGHT_TARSUS;
    st_toeA = joint::RIGHT_TOE_A;
    st_toeB = joint::RIGHT_TOE_B;
    st_knee = joint::RIGHT_KNEE;

    sw_flexion = joint::LEFT_HIP_PITCH;
    sw_abduction = joint::LEFT_HIP_ROLL;
    sw_rotation = joint::LEFT_HIP_YAW;
    sw_ankle = joint::LEFT_TARSUS;
    sw_toeA = joint::LEFT_TOE_A;
    sw_toeB = joint::LEFT_TOE_B;
    sw_knee = joint::LEFT_KNEE;

    hip_pitch_direction = -1;
    hip_roll_direction = -1;
    hip_yaw_direction = 1;
  }

  const double swing_height_d = 0.1;
  // Pelvis to Thigh left and right.
  const Vector3d p_PThL = Vector3d{-0.001, 0.091, 0} + Vector3d{-0.044, 0, -0.0505} + Vector3d{0, 0.004, 0.068};
  const Vector3d p_PThR = Vector3d{-0.001, -0.091, 0} + Vector3d{-0.044, 0, -0.0505} + Vector3d{0, -0.004, 0.068};

  VectorXd q_P = DigitState::buildState(VectorXd::Zero(3),
    VectorXd::Zero(3), currState.position_full);

  VectorXd q_B = DigitState::buildState(VectorXd::Zero(3),
    Vector3d{currState.base_orientation(0), currState.base_orientation(1), 0},
    currState.position_full);

  VectorXd q_W = DigitState::buildState(currState.base_position,
    currState.base_orientation, currState.position_full);

  VectorXd dq_W = DigitState::buildState(currState.base_velocity,
    Vector3d{droll, dpitch, dyaw}, currState.velocity_full);
  
  VectorXd dq_B(28);
  dq_B = dq_W;
  dq_B.head(4) = VectorXd::Zero(4);

  VectorXd q_St_fa = DigitState::buildState_FixedArm(VectorXd::Zero(3),
    Vector3d{currState.base_orientation(0), currState.base_orientation(1), 0},
    currState.position_full);
  
  VectorXd dq_St_fa = DigitState::buildState_FixedArm(VectorXd::Zero(3),
    Vector3d{droll, dpitch, dyaw}, currState.velocity_full);

  MatrixXd p_PToe_l = analytical_expressions.p_left_toe_pitch(q_P);
  MatrixXd p_PToe_r = analytical_expressions.p_right_toe_pitch(q_P);

  MatrixXd p_BToe_l = analytical_expressions.p_left_toe_pitch(q_B);
  MatrixXd p_BToe_r = analytical_expressions.p_right_toe_pitch(q_B);

  MatrixXd p_MP_P = -((p_PToe_l + p_PToe_r)/2); //pelvis point w.r.t middle-point in pelvis frame
  MatrixXd p_PC_P = analytical_expressions.p_COM(q_P); //COM w.r.t pelvis in pelvis frame

  p_BC = analytical_expressions.p_COM(q_B); //COM w.r.t pelvis in body frame
  
  AngleAxisd rollAngle(roll, Vector3d::UnitX());
  AngleAxisd pitchAngle(pitch, Vector3d::UnitY());
  Matrix3d R_BP = (pitchAngle * rollAngle).matrix();

  Vector3d v_WB_B = currState.base_velocity;

  VectorXd Cassie_qthigh_knee;
  Cassie_qthigh_knee = geoExpressions.Digit2Cassie(
    Vector2d {
      currState.position_full[joint::LEFT_HIP_PITCH],
      currState.position_full[joint::LEFT_KNEE]
    },
    DomainControl::DomainType::LEFT_STAND);
  VectorXd measured_LA_LL_L = geoExpressions.FK_Geo_p_cassie(Cassie_qthigh_knee(0),Cassie_qthigh_knee(1));

  Cassie_qthigh_knee = geoExpressions.Digit2Cassie(
    Vector2d {
      currState.position_full[joint::RIGHT_HIP_PITCH],
      currState.position_full[joint::RIGHT_KNEE]
    },
    DomainControl::DomainType::RIGHT_STAND);
  VectorXd measured_LA_LL_R = geoExpressions.FK_Geo_p_cassie(Cassie_qthigh_knee(0),Cassie_qthigh_knee(1));

  VectorXd v_StB = v_WB_B; // Assume the stance foot is stationary.
  MatrixXd J_PSw, J33(3,3);
  
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT 
    p_BSt = p_BToe_l;
    p_BSw = p_BToe_r;

    p_WSt = analytical_expressions.p_left_toe_pitch(q_W);

    J_PSw = analytical_expressions.Jp_toe_pitch_joint_right(q_P);
    J33.col(0) = J_PSw.col(dd::RightHipRoll);
    J33.col(1) = J_PSw.col(dd::RightHipPitch);
    J33.col(2) = J_PSw.col(dd::RightKnee) - J_PSw.col(dd::RightAnkle);
  } else {  // RIGHT SUPPORT 
    p_BSt = p_BToe_r;
    p_BSw = p_BToe_l;

    p_WSt = analytical_expressions.p_right_toe_pitch(q_W);

    J_PSw = analytical_expressions.Jp_toe_pitch_joint_left(q_P);
    J33.col(0) = J_PSw.col(dd::LeftHipRoll);
    J33.col(1) = J_PSw.col(dd::LeftHipPitch);
    J33.col(2) = J_PSw.col(dd::LeftKnee) - J_PSw.col(dd::LeftAnkle);
  }
  // std::cout << J33 << std::endl;
  Matrix3d R_BSt = AngleAxisd(-currState.position_full(st_rotation), Vector3d::UnitZ()).toRotationMatrix();
  
  p_StB = R_BSt.transpose() * -p_BSt;
  p_CSt = p_BSt - p_BC;
  p_CSw = p_BSw - p_BC;

  this->v_StB_kin = get_v_StB(q_St_fa, dq_St_fa);

  // L_pCOM = analytical_expressions.AMworld_about_pA(q_B, dq_B, analytical_expressions.p_COM(q_B));
  // L_pCSt = L_pCOM + p_CSt.cross(48.2843212*v_WB_B);
  // L_pCSt = analytical_expressions.AMworld_about_pA(q_W, dq_W, p_WSt); // L_pCOM + p_CSt.cross(50*v_WB_B);//

  // Use world frame in the Body frame location, but aligned with Stance Toe frame.
  VectorXd q_St = q_B; q_St(3) = currState.position_full(st_rotation);
  VectorXd dq_St = dq_W; 
  dq_St.head(3) = R_BSt.transpose() * dq_W.head(3);
  dq_St(3) = currState.velocity_full(st_rotation);
  VectorXd p_BSt_St = R_BSt.transpose() * p_BSt;
  VectorXd Jdq = analytical_expressions.Jdq_AMworld_about_pA(q_St, dq_St, p_BSt_St);//(q_W, dq_W, p_WToeSt);
  MatrixXd mtx_Jdq = Map<Matrix<double,3,28> >(Jdq.data());
  L_pCSt = mtx_Jdq*dq_St;
  
  const double h_toe =  0.0580841; 
  const double H_com = std::max(0.4, std::min(-p_CSt(2) + h_toe, 1.2));
  const double mass = 51.15;//48.2843212;
  v_StB_L = {(L_pCSt(1)/(mass*H_com)),
            (-L_pCSt(0)/(mass*H_com)), 0};
  
  // v_StB_L = {base_velocity(0),
  //           base_velocity(1), 0};

  // theta_WWpc = theta_WWpc + dtheta
  // theta_WpcSt = theta_WSt - theta_WWpc
  // R_StB   ( theta_WpcSt + theta_StB ) (theta_WSt - theta_WWpc + theta_StB)
  // yaw_BSt = - st_yaw
   // theta_WWpc = theta_WWpc + dtheta (tg_yaw)
  // theta_WpcSt = theta_WSt - theta_WWpc = (yaw_WB + yaw_BSt - tg_yaw) + yaw_StB
  // R_StB   ( theta_WpcSt + yaw_StB ) (position(st_yaw))

  // yaw_WpcB = yaw_WB - yaw_WWpc = yaw_unfil - tg_yaw.
  yaw_WpcB = currState.position_full(st_rotation);//angleDiff(tg_yaw_old, base_orientation_unfil(2)); 
  Matrix3d R_WpcB = AngleAxisd(currState.position_full(st_rotation), Vector3d::UnitZ()).toRotationMatrix();
  v_StB_Wpc_L = R_WpcB * v_StB_L; // v_StB_L is in Body frame.
  // v_StB_Wpc_L =  v_StB_L; 

  this ->L_pCSt = L_pCSt;
  // this -> L_pCOM = L_pCOM;
  
  this->p_StSw_B_m = p_BSw - p_BSt; // For logging.

  // Find the phase when toe takes off.
  if (!toe_off) {
    s_toe_off = s;
    p_StSw_initial = this->p_StSw_B_m;
    p_StSw_initial(2) = 0;
    p_BSw_initial.head(2) = p_BSw.head(2); // Only update xy position when toe on ground.
    if ((current_domain->support_leg == DomainControl::DomainType::LEFT_STAND && currState.GRF_LR(2) < 5.0) // Right swing
            || (current_domain->support_leg == DomainControl::DomainType::RIGHT_STAND && currState.GRF_LR(0) < 5.0)) { // Swing toe no GRF.
      toe_off = true;
    }
    if (s_toe_off > 0.08) {
      toe_off = true;
      // TODO: Add warning for force toe off. GRF is not correct for swing leg.
    }
  }
  
  // Detect touch down event, prevent swing foot penetration into ground.
  if (s > 0.6 && this->p_StSw_B_m(2) < 0.01) {
    if (!touch_down) {
      touch_down = true;
      s_touch_down = s;
      this->p_StSw_d_contact = p_StSw_d;
    }
    // p_StSw_d_contact(2) -= 0.00005;
    // p_StSw_d(2) = p_StSw_d_contact(2);
  }
  
  double ds = 1.0 / T;
  double sFast = s_fast->Bezier(s); // Target reach Final faster = Spend more time to track final location.
  double sMiddle = s_middle->Bezier(s);
  double sSlow = s_slow->Bezier(s);
  double sXY_prorate = std::max(0.0, (s-s_toe_off) / (1.0-s_toe_off)); // 0 before take off, then increase to 1 at switch.
  double sZ = s;

  // ==================== STANCE LEG BODY REGULATION =================//
  Eigen::VectorXd measured_St_LA_LL = current_domain->support_leg == DomainControl::DomainType::LEFT_STAND
          ? measured_LA_LL_L : measured_LA_LL_R;
  double st_LA = measured_St_LA_LL(0);
  double st_LL = measured_St_LA_LL(1);

  double st_abd_g = currState.base_orientation_unfil(0)
          + geoExpressions.Digit2Cassie(currState.position_full[st_abduction], 0, current_domain->support_leg);
  double st_LA_g = -currState.base_orientation_unfil(1) + st_LA;

  // Height regulation.
  // const double h_toe =  0.0580841; //toe to ground
  const double h_PTh = 0.1185; // Pelvis to Thigh height difference. For Digit, it's changing.
  double h_St = -p_BSt(2) - h_PTh;
  double LL_to_h_factor_St = std::cos(st_LA_g) * std::cos(st_abd_g);
  // desired height difference from thigh to toe joint (not toe bottom)
  const double h_St_d = p_MP_P_0(2) - h_PTh;
  // Assume the leg pitch and roll unchange, just extend/retract leg to maintain height.
  double h_St_target = h_St + kp_h_pelvis*(h_St_d - h_St) - kd_h_pelvis * currState.base_velocity(2);
  // get target stance leg length from target thigh height
  double LL_St_target = std::min(0.86, h_St_target / LL_to_h_factor_St); // Median

  // Keep pelvis flat -> thigh_pitch
  // leg_pitch_target to keep pelvis_pitch = 0. Negative sign because leg_pitch 
  // and pelvis_pitch are defined in opposite direction.
  double LA_St_target = st_LA + kp_pitch_pelvis*(0 - pitch) + kd_pitch_pelvis*(0 - dpitch);
   
  LA_St_target = std::clamp(LA_St_target, -0.5, 0.5);
  LL_St_target = std::clamp(LL_St_target, 0.4, 1.1);

  // Inverse kinematics of Digit's leg to get desired joint position based on the hip position 
  VectorXd q_thigh_knee = geoExpressions.IK_Geo_p_cassie(LA_St_target,LL_St_target);  
  VectorXd q_St_leg = geoExpressions.Cassie2Digit(q_thigh_knee,current_domain->support_leg);

  // LEG ABDUCTION
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) {  // LEFT stance
    q_St_leg[0] = std::clamp(q_St_leg[0], deg2rad(-60), deg2rad(90));
    q_St_leg[1] = std::clamp(q_St_leg[1], deg2rad(-71), deg2rad(50)); 
  } else {  // right stance
    q_St_leg[0] = std::clamp(q_St_leg[0], deg2rad(-90), deg2rad(60));
    q_St_leg[1] = std::clamp(q_St_leg[1], deg2rad(-50), deg2rad(71));
  }
  // TODO: yaw traj gen: move to a function:
  pos_reference[st_rotation] = 0.5 * (st_yaw_init - st_yaw_df)
          * std::cos(M_PI * sXY_prorate) + 0.5 * (st_yaw_init + st_yaw_df);
  vel_reference[st_rotation] = 0.5 * (st_yaw_init - st_yaw_df)
          * -M_PI / (1 - s_toe_off) * std::sin(M_PI * sXY_prorate) * ds;
  acc_reference[st_rotation] = 0.5 * (st_yaw_init - st_yaw_df)
          * -std::pow(M_PI / (1 - s_toe_off), 2.0) * std::cos(M_PI * sXY_prorate) * ds * ds;
  yaw_WSt = currState.base_orientation(2) - currState.position_full[st_rotation];

  // stance roll position reference is implemented in swing leg section. 

  pos_reference[st_flexion] = q_St_leg[0];
  pos_reference[st_knee] = q_St_leg[1];

  vel_reference[st_abduction] = 0;
  vel_reference[st_flexion] = 0;
  vel_reference[st_knee] = 0;
  
  acc_reference[st_abduction] = 0;
  acc_reference[st_flexion] = 0;
  acc_reference[st_knee] = 0;

  // FK estimation of support plane pich angle.
  double support_plane = 0; //slopeFK_fil[1]; 

  pos_reference[st_toeA] = currState.position_full[st_toeA];   //Keep stance ankle passive 
  pos_reference[st_toeB] = currState.position_full[st_toeB];
  vel_reference[st_toeA] = currState.velocity_full[st_toeA];
  vel_reference[st_toeB] = currState.velocity_full[st_toeB];

  // ====================== swing foot control  ======================== //
  v_WB_B_d(0) =  hyper_param.v_StB_d(0);
  v_WB_B_d(1) =  hyper_param.v_StB_d(1);
  

  // Compute foot placement.
  p_StSw_d_final = calc_p_StSw_d_f(v_WB_B, v_WB_B_d, R_WpcB*p_CSt, step_time_spent, 
      current_domain->support_leg, hyper_param.stepl_d, hyper_param.stepw_d, v_StB_Wpc_L); // output in Wpc frame
  

  this->p_StB_LIP_d = this->p_StC_LIP_d - R_WpcB * p_BC;
   // If turning and left stance, and the the torso should roll to compensate lateral displacement.
  if (is_turning == -1 && current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) {
    // Activate body roll to reduce lateral drift. 
    roll_df = std::clamp(1.0*(p_StB_LIP_d(1) - p_StB(1)), roll_df, 0.2); 
  }
  pos_reference[st_abduction] = currState.position_full[st_abduction] + 
    kp_roll_pelvis * (roll_df - roll) + kd_roll_pelvis * (0 - droll);

  this->p_BSw_final = p_BC + R_WpcB.transpose() * this->p_CSw_St_df; // revert back to body frame
  this->p_BSw_final(2) = -p_MP_P_0(2) + 0.01; // Overwrite the swing final Z. Add offset to delay the early contact.
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) {
    this->p_BSw_final(1) = std::clamp(this->p_BSw_final(1), p_BSt(1) - 0.8, p_BSt(1) - 0.13);
  } else {
    this->p_BSw_final(1) = std::clamp(this->p_BSw_final(1), p_BSt(1) + 0.13, p_BSt(1) + 0.8);
  }
  this->p_StSw_d_final = this->p_BSw_final - p_BSt; // For logging.
  
  // Get swing interpolated trajectory.
  // Vector3d v_StSw_d, a_StSw_d; // Output of swing_foot_traj.
  // robotExpressions.swing_foot_traj(p_StSw_d, v_StSw_d, a_StSw_d, p_StSw_d_final, 
  //   p_StSw_initial, swing_height_d, sXY_prorate, sZ);
  // VectorXd p_BSt_d = p_BSt;
  // p_BSt_d(2) = -p_MP_P_0(2); // Use initial height as swing leg reference.
  // VectorXd p_BSw_d = p_BSt_d + p_StSw_d;
  // v_StB.topLeftCorner(2,1) = v_StB_L;
  // VectorXd v_BSw_d = v_StSw_d - v_StB;
  // VectorXd a_BSw_d = a_StSw_d;
 
  VectorXd p_BSw_d(3), v_BSw_d(3), a_BSw_d(3); // Output of swing_foot_traj. transform with R_BWpc.transpose()*?
  // VectorXd p_BSw_final = p_BSt_f + p_StSw_d_final; // Desired Final position of the swing foot.
  // swing_foot_traj(p_BSw_d, v_BSw_d, a_BSw_d, R_WpcB.transpose()*p_BSw_final,
  swing_foot_traj(p_BSw_d, v_BSw_d, a_BSw_d, p_BSw_final,  
    p_BSw_initial, swing_height_d, sXY_prorate, sZ);
  this->p_BSw_d = p_BSw_d; // For logging.
  this->p_StSw_d = p_BSw_d - p_BSt; // For logging. Aziz seems to have an error (does not converge to p_StSw_d_final)
  this->v_StSw_d = v_BSw_d + v_StB_Wpc_L; // For logging.
  this->a_StSw_d = a_BSw_d; // For logging.

  // ----  solve IK for swing foot ---- //
  Vector2d swing_LA_LL_d; // Output of IK_PToe.

  // //stance error: difference between global stance leg and global target
  // st_yaw_error = angleDiff(tg_yaw, -position[st_rotation]+yaw); 
  // //swing error: difference between stance error and current stance w.r.t to torso
  // sw_yaw_error = st_yaw_error + position[st_rotation];

  st_yaw_error = st_yaw_df; // For logging.
  sw_yaw_error = sw_yaw_df;
  double sw_yaw_df_adjust = sw_yaw_df - (pos_reference[st_rotation] - currState.position_full[st_rotation]);

  VectorXd p_PSw_d = R_BP.transpose() * p_BSw_d;
  // This is a hack to reduce the desired leg length gap at switch. I think the 
  // foundamental issue is the FK and IK_PToe are not consistent.
  // TODO: triple check the first analytical test.
  // p_PSw_d(2) -= 0.02; // Increase the leg length by 2cm. 
  VectorXd q_solution = geoExpressions.IK_PToe(p_PSw_d, swing_LA_LL_d, current_domain->support_leg, sw_yaw_error);  

  pos_reference[sw_abduction] = q_solution(0);
  pos_reference[sw_rotation] =  0.5 * (sw_yaw_init - sw_yaw_df_adjust)
          * std::cos(M_PI*sXY_prorate) + 0.5 * (sw_yaw_init + sw_yaw_df_adjust);
  pos_reference[sw_flexion] = q_solution(2);
  pos_reference[sw_knee] = q_solution(3);

  if (step_time_spent < T) {
    // Calculate joint velocity reference for swing leg.
    
    // Method 0: Straight up using zero reference.
    // vel_reference[sw_abduction] = 0;
    // vel_reference[sw_flexion] = 0;
    // vel_reference[sw_knee] = 0;

    // Method 1: Use target joint position and divide by time (totally wrong).
    // Vector2d swing_LA_LL_df; // Output of IK_PToe.
    // VectorXd q_sw_df = geoExpressions.IK_PToe(p_BSw_df, swing_LA_LL_df, current_domain->support_leg, sw_yaw_error);

    // double T_left = T - step_time_spent;

    // vel_reference[sw_abduction] = (q_sw_df(0) - position[sw_abduction])/T_left;
    // vel_reference[sw_flexion] = (q_sw_df(2) - position[sw_flexion])/T_left;
    // vel_reference[sw_knee] = (q_sw_df(3) - position[sw_knee])/T_left;

    // Method 2: Use v_StSw_d and compute joint velocity through IK.
    VectorXd dq_solution = geoExpressions.IK_VToe(p_BSw_d, v_BSw_d, current_domain->support_leg, 0, 0);
    // dq_solution = VectorXd::Zero(6);
    vel_reference[sw_abduction] = dq_solution(0);
    vel_reference[sw_rotation] = 0.5 * (sw_yaw_init - sw_yaw_df_adjust)
            * -M_PI / (1 - s_toe_off) * std::sin(M_PI * sXY_prorate) * ds;
    // vel_reference[sw_rotation] = dq_solution(1);
    vel_reference[sw_flexion] = dq_solution(2);
    vel_reference[sw_knee] = dq_solution(3);

    VectorXd ddq_solution = geoExpressions.IK_VToe(p_BSw_d, a_BSw_d, current_domain->support_leg, 0, 0);
    acc_reference[sw_abduction] = ddq_solution(0);
    acc_reference[sw_rotation] = 0.5 * (sw_yaw_init - sw_yaw_df_adjust)
            * -std::pow(M_PI / (1 - s_toe_off),2.0) * std::cos(M_PI * sXY_prorate) * ds * ds;
    // acc_reference[sw_rotation] = ddq_solution(1);
    acc_reference[sw_flexion] = ddq_solution(2);
    acc_reference[sw_knee] = ddq_solution(3);

    // Method 3: Use observation from data (step in place). This is too naive.
    // sw_abduction and sw_rotation are close to zero.
    // sw_flexion and sw_knee are propotional to v_StSw_d(2).
    // vel_reference[sw_abduction] = 0;
    // vel_reference[sw_flexion] = (current_domain->support_leg == 0?1:-1) * 6 * v_StSw_d(2);
    // vel_reference[sw_knee] = (current_domain->support_leg == 0?1:-1) * 4 * v_StSw_d(2);

    // Method 4: Use constrained jacobian inverse J33.
    VectorXd dq_solution3 = J33.inverse() * v_BSw_d;
    vel_reference[sw_abduction] = dq_solution3(0);
    vel_reference[sw_flexion] = dq_solution3(1);
    vel_reference[sw_knee] = dq_solution3(2);

    VectorXd ddq_solution3 = J33.inverse() * a_BSw_d;
    acc_reference[sw_abduction] = ddq_solution3(0);
    acc_reference[sw_flexion] = ddq_solution3(1);
    acc_reference[sw_knee] = ddq_solution3(2);
  } else {
    vel_reference[sw_abduction] = 0;
    vel_reference[sw_flexion] = 0;
    vel_reference[sw_knee] = 0;
  }

  // Desired swing toe. // ZG: use existing function to solve toe, like in get_command_new.
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT 
    pos_reference[sw_toeA] = transAnkle->j2mA(
              q_solution(4) - currState.base_orientation[1] - landing_pitch_offset_left,
              q_solution(5), "right");
    pos_reference[sw_toeB] = transAnkle->j2mB(
              q_solution(4) - currState.base_orientation[1] - landing_pitch_offset_left,
              q_solution(5), "right");
    pos_reference[sw_flexion] += currState.base_orientation[1];
  } else{
    pos_reference[sw_toeA] = transAnkle->j2mA(
              q_solution(4) + currState.base_orientation[1] + landing_pitch_offset_left,
              q_solution(5), "left");
    pos_reference[sw_toeB] = transAnkle->j2mB(
              q_solution(4) + currState.base_orientation[1] + landing_pitch_offset_left,
              q_solution(5), "left");
    pos_reference[sw_flexion] -= currState.base_orientation[1];
  }
  vel_reference[sw_toeA] = 0;//velocity[st_toeA];
  vel_reference[sw_toeB] = 0;//velocity[st_toeB];

  double kv = v_WB_B_d(0) > 0.2 ? 3 : 2;
  double kp_lat = 0.5;
  double v = std::clamp(v_StB_L(0), 0.0, 0.5); // Body velocity.
  double r = 0.5; // m.
  double acc_centrifugal = is_turning == -1? v*v/r : 0;
  // Temporary fix: use an random unused joint for body acceleration.
  // Sigittal torso acceleration.
  acc_reference(motor::LEFT_SHOULDER_ROLL) = g / H_com * (p_StB_LIP_d(0)+p_BC(0) 
    + kv * (v_StB_LIP_d(0) - v_StB_Wpc_L(0)));
    // + 12.0 * (p_StB_LIP_df(0) - p_StB_f(0)) + 10.0 * (target_vel(0) - v_StB(0));
    // 15.0 * (p_StB_LIP_df(0) - p_StB_f(0)) + 10.0 * (target_vel(0) - v_StB_f(0)); // v_StB_f has spike after contact.

  // Lateral torso acceleration.
  acc_reference(motor::RIGHT_SHOULDER_ROLL) = g / H_com * (p_StB_LIP_d(1)+p_BC(1) 
    + kv * (v_StB_LIP_d(1) - v_StB_Wpc_L(1)) + kp_lat * (p_StB_LIP_d(1) - p_StB(1)));
    // + acc_centrifugal);

  // Log.
  leg_length(0) = current_domain->support_leg == DomainControl::DomainType::LEFT_STAND
          ? LL_St_target : swing_LA_LL_d(1); // left desired
  leg_length(1) = current_domain->support_leg == DomainControl::DomainType::RIGHT_STAND
          ? LL_St_target : swing_LA_LL_d(1); // right desired.
  leg_length(2) = measured_LA_LL_L(1); // left measured.
  leg_length(3) = measured_LA_LL_R(1); // right measured.
  leg_length(4) = v_StC_0(0);//current_domain->support_leg == 0 ? LA_St_target : swing_LA_LL_d(0); // left desired
  leg_length(5) = v_StC_0_d(0);//current_domain->support_leg == 0 ? swing_LA_LL_d(0) : LA_St_target; // right desired
  leg_length(6) = p_StC_0(0);//measured_LA_LL_L(0); // left measured.
  leg_length(7) = p_StC_0_d(0);//measured_LA_LL_R(0); // right measured.

  // ====================== Joint limits  ======================== //
  // pos_reference[st_rotation] = std::clamp(pos_reference[st_rotation], -0.2, 0.2);
  // pos_reference[sw_rotation] = std::clamp(pos_reference[sw_rotation], -0.2, 0.2);
  pos_reference[joint::LEFT_HIP_PITCH] = std::clamp(pos_reference[joint::LEFT_HIP_PITCH], deg2rad(-60), deg2rad(90));
  pos_reference[joint::RIGHT_HIP_PITCH] = std::clamp(pos_reference[joint::RIGHT_HIP_PITCH], deg2rad(-90), deg2rad(60));
  pos_reference[joint::LEFT_KNEE] = std::clamp(pos_reference[joint::LEFT_KNEE], deg2rad(-71), deg2rad(50));
  pos_reference[joint::RIGHT_KNEE] = std::clamp(pos_reference[joint::RIGHT_KNEE], deg2rad(-50), deg2rad(71));
  
  vel_reference = vel_reference.cwiseMax(-5).cwiseMin(5); // clamp.
  acc_reference = acc_reference.cwiseMax(-10).cwiseMin(10);

  return 0;
}


// ZG: Remove input stance_leg and use Domain class member instead.
VectorXd WalkingTrajectory::calc_p_StSw_d_f(VectorXd v_WB_B, 
  Vector3d v_WB_B_d, VectorXd p_CSt_St, double step_time_spent, 
  int stance_leg, double stepl_d, double stepw_d, VectorXd v_StB_Wpc_L) {
  // v_WB_B_d is the desired velocity of the Body frame in the World frame, at the end of the next swing phase.
  
  const double omega = std::sqrt(g/H_com);
  double step_width_desired = std::abs(stepw_d);//std::abs(stepw_psp);//0.345;//
  double step_length_desired = std::abs(stepl_d);//0.345;//
  int direction = stance_leg == 1 ? -1 : 1; 
  VectorXd p_StC = -p_CSt_St;

  // Predictions based on step_time_spent. 
  v_StB_LIP = // Prediction using after contact state.
  {
    p_StC_0(0)*omega*std::sinh(omega*step_time_spent) + v_StC_0(0)*std::cosh(omega*step_time_spent),
    p_StC_0(1)*omega*std::sinh(omega*step_time_spent) + v_StC_0(1)*std::cosh(omega*step_time_spent),
    0
  };
  p_StC_LIP_d = // Prediction using before contact state.
  {
    p_StC_0_d(0)*std::cosh(omega*step_time_spent) + v_StC_0_d(0)*std::sinh(omega*step_time_spent)/omega, 
    p_StC_0_d(1)*std::cosh(omega*step_time_spent) + v_StC_0_d(1)*std::sinh(omega*step_time_spent)/omega,
    0
  };
  v_StB_LIP_d = // Prediction using before contact state.
  {
    p_StC_0_d(0)*omega*std::sinh(omega*step_time_spent) + v_StC_0_d(0)*std::cosh(omega*step_time_spent),
    p_StC_0_d(1)*omega*std::sinh(omega*step_time_spent) + v_StC_0_d(1)*std::cosh(omega*step_time_spent),
    0
  };
  // Vector3d p_StC_LIP_df = 
  //   {p_StC_0_d(0)*std::cosh(omega*T) + v_StC_0_d(0)*std::sinh(omega*T)/omega, 
  //    p_StC_0_d(1)*std::cosh(omega*T) + v_StC_0_d(1)*std::sinh(omega*T)/omega, 0};
  // p_StB_LIP_df = p_StC_LIP_df - p_BC;

  // Decide the desired lateral velocity based on nominal step width.
  // Say k th step is right stance, then k+1 th step is left stance.
  // End of k+1 step's lateral velocity is negative.
  // Under the periodic walking assumption, compute contact lateral velocity 
  // given step_width_desired.
  // The desired contact velocity is (1) sagittal use target PSP velocity, 
  // (2) lateral use PSP step width to compute the contact velocity.
  // (3) both directions are compensated with waypoint tracking velocity v_pid.
  v_WB_B_d(1) += direction * 0.5 * step_width_desired * std::sqrt(g/1.01)
          * std::sinh(std::sqrt(g/1.01) * T_n) / (1+std::cosh(std::sqrt(g/1.01) * T_n));
  // v_WB_B_d(1) = direction*std::abs(v_WB_B_d(1));
  v_WB_B_d(1) = std::clamp(v_WB_B_d(1), -0.65, 0.65);
  // v_WB_B_d(0) += 0.5 * step_length_desired * std::sqrt(g/1.01) * std::sinh(std::sqrt(g/1.01) * T_n) / (-1+std::cosh(std::sqrt(g/1.01) * T_n));
  v_WB_B_d(0) = std::clamp(v_WB_B_d(0), 0.0, 0.5);
  this->v_WB_B_d = v_WB_B_d;

  // Estimated total time of currecnt step based on previous contact.
  double T_est = step_time_error + T;
  // Decide current step time based on lateral velocity tracking performance. 
  // Adjust (extend or shorten) the step time if needed.
  const double T_max = 0.5;
  const double T_min = 0.35;
  fail_mode = 0;
  // In the correct quadrant.
  is_lateral_v_reachable = 
    std::abs(v_StB_Wpc_L(1)) < std::abs(omega * p_StC(1)) && is_lateral_v_reachable;  
    // || abs(v_StB_Wpc_L(1)) < abs(v_StC_F0_d(1)); // Or the target is larger so we can diverge and reach it.
  if (!is_lateral_v_reachable) { // Outside converging quadrant.
    // Figure out the fail mode.
    if (stance_leg == 1) { // Right stance
      if (v_StB_Wpc_L(1) < 0) { // Fall to right side.
        fail_mode = 1;
      } else { // Accelerating to the left.
        fail_mode = 2;
      }
    } else {
      if (v_StB_Wpc_L(1) > 0) { // Fall to left side.
        fail_mode = 3;
      } else { // Accelerating to the right.
        fail_mode = 4;
      }
    }
  }
  double t_NF0_d = 0;
  double T_l_d = 0; // Desired step time for reaching lateral velocity.
  double T_s_d = 0; // Desired step time for reaching sagittal velocity.

  // try {
    // If consider only lateral velocity tracking, the step time should shrink 
    // on left stance and extend on right stance. This is an observation.
    if (is_lateral_v_reachable) {
      // Calculate how long it takes to reach the desired lateral velocity.
      int sign = v_StB_Wpc_L(1) + omega*p_StC(1) > 0 ? 1 : -1;
      t_NF0_d = std::log((v_StC_d_F0(1) + sign*
        std::sqrt(std::pow(v_StC_d_F0(1), 2.0)-std::pow(v_StB_Wpc_L(1), 2.0) + omega*omega*p_StC(1)*p_StC(1)))
        /(v_StB_Wpc_L(1) + omega*p_StC(1)))/omega;
      T_l_d = std::clamp(step_time_spent + t_NF0_d, std::max(T_min, step_time_spent), T_max);
      t_NF0_d = T_l_d - step_time_spent;
    } else if (fail_mode == 1 || fail_mode == 3) {
      T_l_d = std::max(T_min, step_time_spent);
      t_NF0_d = T_l_d - step_time_spent;
    }
    // else { // Meaning we passed the velocity already, switch asap.
    //   T_l_d = T_min;
    //   t_NF0_d = T_min - step_time_spent;
    // }
  // } catch (const std::exception& e) {
  //   T_l_d = T;
  //   t_NF0_d = T - step_time_spent;
  // }
  
  // Only change left stance.
  // if (is_turning && stance_leg == 0) { 
  //   T = T_l_d; // This will be used for calculating the phase variable in the next cycle.
  //   T_left = std::clamp(t_NF0_d, 0.0, T_max);
  // } else {
  //   T_left = T - step_time_spent;
  // }
  T_left = T - step_time_spent;

  // VectorXd v_StC = v_WB_B; // Body velocity is assumed to be ~= COM velocity 
  // // Predict the state at the end of the current kth swing phase, based on LIPM.
  // p_StB_f = {p_StC(0)*std::cosh(omega*T_left) + v_StC(0)*std::sinh(omega*T_left)/omega, 
  //            p_StC(1)*std::cosh(omega*T_lIeft) + v_StC(1)*std::sinh(omega*T_left)/omega, 0};
  // v_StB_f = {p_StC(0)*omega*std::sinh(omega*T_left) + v_StC(0)*std::cosh(omega*T_left),
  //            p_StC(1)*omega*std::sinh(omega*T_left) + v_StC(1)*std::cosh(omega*T_left)};
  // v_StB_L = {(L_pCSt(1)/(mass*H_com)),
  //           (-L_pCSt(0)/(mass*H_com)), 0};
  // Estimate the momentum at the end of the current kth swing phase 
  // L_pCSt_est = 
  // {
  //   p_StC(1)*mass*H_com*omega*std::sinh(omega*T_left) + (v_StB_Wpc_L(1)*(mass*H_com))*std::cosh(omega*T_left),
  //   p_StC(0)*mass*H_com*omega*std::sinh(omega*T_left) + (v_StB_Wpc_L(0)*(mass*H_com))*std::cosh(omega*T_left),
  //   0
  // };
  
  // Predict body state at the end of the current kth swing phase, based on angular momentum velocity.
  Vector3d p_StC_f = 
  {
    p_StC(0)*std::cosh(omega*T_left) + v_StB_Wpc_L(0)*std::sinh(omega*T_left)/omega, 
    p_StC(1)*std::cosh(omega*T_left) + v_StB_Wpc_L(1)*std::sinh(omega*T_left)/omega,
    0
  };
  p_StB_f = p_StC_f - p_BC;
  v_StB_f = 
  {
    p_StC(0)*omega*std::sinh(omega*T_left) + v_StB_Wpc_L(0)*std::cosh(omega*T_left),
    p_StC(1)*omega*std::sinh(omega*T_left) + v_StB_Wpc_L(1)*std::cosh(omega*T_left),
    0
  };

  
  // std::cout << T_left << "-----" << step_time_spent << "-------" << v_StC(0) << "-------" << v_init(0) << std::endl;
  // Compute the Swing foot position at the end of the swing phase.
  p_SwC_St_df(0) = (v_WB_B_d(0) - v_StB_f(0) * std::cosh(omega*T_n)) / (omega*std::sinh(omega*T_n));
  p_SwC_St_df(1) = (v_WB_B_d(1) - v_StB_f(1) * std::cosh(omega*T_n)) / (omega*std::sinh(omega*T_n));
  p_SwC_St_df(2) = H_com;

  // // Compute the Swing foot position at the end of the swing phase based on Angular momenutm
  // p_SwC_St_df(0) = (v_WB_B_d(0)*mass*1.01 - L_pCSt_est(1) * std::cosh(omega*T)) / (omega*std::sinh(omega*T)*mass*H_com);
  // p_SwC_St_df(1) = (v_WB_B_d(1)*mass*1.01 - L_pCSt_est(0) * std::cosh(omega*T)) / (omega*std::sinh(omega*T)*mass*H_com);
  // p_SwC_St_df(2) = 0;

  p_StSw_d_final = p_StC_f - p_SwC_St_df;
  p_StSw_d_final(2) = 0.0;

  this->p_CSw_St_df = - p_SwC_St_df;

  // // self-collision limit
  // const double minimum_step_width = 0.10;
  // if(stance_leg){
  //   p_StSw_final(1) = std::max(p_StSw_final(1), minimum_step_width);
  //   p_StSw_final(1) = std::min(p_StSw_final(1), 0.7);
  //   // p_SwC_St_df(1) = std::min(p_SwC_St_df(1), 0.0);
  // }else{
  //   p_StSw_final(1) = std::min(p_StSw_final(1), -minimum_step_width);
  //   p_StSw_final(1) = std::max(p_StSw_final(1), -0.7);
  //   // p_SwC_St_df(1) = std::max( p_SwC_St_df(1), 0.0);
  // }
  // this->p_CSw_St_df = p_StSw_final - p_StC_f; // For logging.

  return p_StSw_d_final;
}

void WalkingTrajectory::logStepTime(double time_switches) {
  // if (phase_variable > 0.5) {
  //   double time_spent_actual = phase_variable * T;
  //   step_time_error = time_spent_actual - T;
  // }
  double time_spent_actual = time_switches - time_offset;
  time_offset = time_switches;
  step_time_error = time_spent_actual - T;
}

Vector3d WalkingTrajectory::get_v_StB(VectorXd &q_St, VectorXd &dq_St) {
  // Attached the World frame to Body frame, but aligned with Stance Toe.
  const int n_q = q_St.size(); // 20, state vector size.

  dq_St.segment(3, 3) << 0,0,0;
  dq_St.segment(ddfa::LeftToePitch, 2) << 0,0; // Remove toe velocity.
  dq_St.segment(ddfa::RightToePitch, 2) << 0,0;

  MatrixXd Jb = MatrixXd::Zero(3, n_q);
  if (current_domain->support_leg == 0) { // LEFT SUPPORT
    // Body Jacobian of foot for velocity constraint.
    MatrixXd Jb_L = analytical_expressions.Jb_LeftToeBottomBack(q_St);
    Jb.topLeftCorner(3,n_q) = Jb_L.topLeftCorner(3,n_q);
  } else {
    MatrixXd Jb_R = analytical_expressions.Jb_RightToeBottomBack(q_St);
    Jb.topLeftCorner(3,n_q) = Jb_R.topLeftCorner(3,n_q);
  }
  Vector3d v_StB = (-Jb.topLeftCorner(3,3).inverse()) * 
                   (Jb.bottomRightCorner(3,n_q-3) * dq_St.tail(n_q-3));
                  //  (Jb(:,4:6)*dq(4:6)+Jb(:,range)*dq(range));
  // std::cout << "v_StB: " << v_StB.transpose() << std::endl;
  return v_StB;
}

VectorXd WalkingTrajectory::calc_ff_command(VectorXd &base_orientation, 
  VectorXd &base_angvel,  VectorXd &pos_reference,  VectorXd &position) {
  VectorXd command = VectorXd::Zero(motor::N_MOTORS);
  double u_knee_comp_Kp = 2500;  
  double u_knee_comp_Kd = 50;

  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT
    st_flexion = joint::LEFT_HIP_PITCH; // ZG: joint should be deprecated.
    st_abduction = joint::LEFT_HIP_ROLL;
    st_rotation = joint::LEFT_HIP_YAW;
    sw_flexion = joint::RIGHT_HIP_PITCH;
    sw_abduction = joint::RIGHT_HIP_ROLL;
    sw_rotation = joint::RIGHT_HIP_YAW;
    st_knee = joint::LEFT_KNEE;
    sw_knee = joint::RIGHT_KNEE;
  } else {
    st_flexion = joint::RIGHT_HIP_PITCH;
    st_abduction = joint::RIGHT_HIP_ROLL;
    st_rotation = joint::RIGHT_HIP_YAW;
    sw_flexion = joint::LEFT_HIP_PITCH;
    sw_abduction = joint::LEFT_HIP_ROLL;
    sw_rotation = joint::LEFT_HIP_YAW;
    st_knee = joint::RIGHT_KNEE;
    sw_knee = joint::LEFT_KNEE;
  }
  // std::cout << "COMMAND BEFORE: " << command << "\n";
  torso_pitch_offset = -0.00; //-0.04;
  u_torsopitch = - Kp_tp*(base_orientation[1] - torso_pitch_offset) - Kd_tp * base_angvel[1];  

  //knee compensation
  torso_roll_offset = 0;
  u_torsoroll = - Kp_tr*(base_orientation[0] - torso_roll_offset) - Kd_tr * base_angvel[0];
  double u_compensation_knee = u_knee_comp_Kp*(pos_reference[st_knee] - position[st_knee]);

  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT
    // the torque values are adjusted by the torque regulator, not by PD tracking.
    // command[joint::LEFT_HIP_PITCH] = -u_torsopitch;   
    // command[joint::LEFT_HIP_ROLL] = u_torsoroll;
    
    command[st_knee] = u_compensation_knee + 70;
  } else { // RIGHT SUPPORT
    // command[joint::RIGHT_HIP_PITCH] = u_torsopitch;
    // command[joint::RIGHT_HIP_ROLL] = u_torsoroll;    

    command[st_knee] = u_compensation_knee - 70;
  }

  return command;
}


VectorXd WalkingTrajectory::calc_passivity_command(DigitState& currState, 
  VectorXd pos_reference, VectorXd vel_reference, VectorXd velocity,
  VectorXd acc_reference) {
// Modified passivity controller from the Angular Momentum paper.
// https://arxiv.org/pdf/2105.08170.pdf
// Author: Zhaoyuan Gu

  
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT
    st_abduction = ddfa::LeftHipRoll;
    st_rotation = ddfa::LeftHipYaw;
    st_flexion = ddfa::LeftHipPitch;
    st_knee = ddfa::LeftKnee;
    st_toeA = ddfa::LeftToePitch;
    st_toeB = ddfa::LeftToeRoll;
    sw_abduction = ddfa::RightHipRoll;
    sw_rotation = ddfa::RightHipYaw;
    sw_flexion = ddfa::RightHipPitch;
    sw_knee = ddfa::RightKnee;
    sw_toeA = ddfa::RightToePitch;
    sw_toeB = ddfa::RightToePitch;

    st_motor_abduction = wdc::motor::LEFT_HIP_ROLL;
    st_motor_rotation = wdc::motor::LEFT_HIP_YAW;
    st_motor_thigh = wdc::motor::LEFT_HIP_PITCH;
    st_motor_knee = wdc::motor::LEFT_KNEE;
    st_motor_toeA = wdc::motor::LEFT_TOE_A;
    st_motor_toeB = wdc::motor::LEFT_TOE_B;
    sw_motor_abduction = wdc::motor::RIGHT_HIP_ROLL;
    sw_motor_rotation = wdc::motor::RIGHT_HIP_YAW;
    sw_motor_thigh = wdc::motor::RIGHT_HIP_PITCH;
    sw_motor_knee = wdc::motor::RIGHT_KNEE;
    sw_motor_toeA = wdc::motor::RIGHT_TOE_A;
    sw_motor_toeB = wdc::motor::RIGHT_TOE_B;
  } else {
    st_abduction = ddfa::RightHipRoll;
    st_rotation = ddfa::RightHipYaw;
    st_flexion = ddfa::RightHipPitch;
    st_knee = ddfa::RightKnee;
    st_toeA = ddfa::RightToePitch;
    st_toeB = ddfa::RightToeRoll;
    sw_abduction = ddfa::LeftHipRoll;
    sw_rotation = ddfa::LeftHipYaw;
    sw_flexion = ddfa::LeftHipPitch;
    sw_knee = ddfa::LeftKnee;
    sw_toeA = ddfa::LeftToePitch;
    sw_toeB = ddfa::LeftToeRoll;

    st_motor_abduction = wdc::motor::RIGHT_HIP_ROLL;
    st_motor_rotation = wdc::motor::RIGHT_HIP_YAW;
    st_motor_thigh = wdc::motor::RIGHT_HIP_PITCH;
    st_motor_knee = wdc::motor::RIGHT_KNEE;
    st_motor_toeA = wdc::motor::RIGHT_TOE_A;
    st_motor_toeB = wdc::motor::RIGHT_TOE_B;
    sw_motor_abduction = wdc::motor::LEFT_HIP_ROLL;
    sw_motor_rotation = wdc::motor::LEFT_HIP_YAW;
    sw_motor_thigh = wdc::motor::LEFT_HIP_PITCH;
    sw_motor_knee = wdc::motor::LEFT_KNEE;
    sw_motor_toeA = wdc::motor::LEFT_TOE_A;
    sw_motor_toeB = wdc::motor::LEFT_TOE_B;
  }

  const int n_q = static_cast<int>(ddfa::NumJoints); // 20, state vector size.
  const int n_u = 10;

  // Controlled states: body p, body r, st y, sw y,  st kn, sw ab, sw th, sw kn.
  // Unconstrolled states are equivalently given zero torque. Controlling the 
  // controlled states, the uncontrolled states generate corresponding 
  // acceleration. 
  // If we make torso to have zero acceleration, then by applying the calculated 
  // torque on stance hip motors, the hip joint may have non-zero acceleration 
  // depending on the generated toe joint acceleraion (because other leg joints 
  // are controlled to have zero acceleration). Conversely, if we target zero 
  // hip joint acceleration, then torso acceleration would be the outcome.
  // These's not much difference in performance but the concept are different.
  // I believe the best practice is to make torso have zero acceleration, and
  // make stance toe actuated and give it a non-zero acceleration. This way,
  // we can calculate the stance toe actuation, while keeping body upright.
  VectorXd qc_index(n_u);
  qc_index << 4,5,st_rotation,sw_rotation, st_knee,sw_abduction,sw_flexion,sw_knee, 0, 1;
  // VectorXd selection(n_u);
  // selection << 1,0,0,0,0,0,1,0,0;

  VectorXd motor_index(n_u);
  motor_index << st_motor_thigh,st_motor_abduction,st_motor_rotation,sw_motor_rotation,
    st_motor_knee,sw_motor_abduction,sw_motor_thigh,sw_motor_knee, st_motor_toeA, st_motor_toeB;
  
  // VectorXd Kp_PBC(n_u); // Use array for element wise operation.
  // Kp_PBC << 10, 900, 200, 400, 500, 800, 20, 500, 100;
  // VectorXd Kd_PBC(n_u);
  // Kd_PBC << 1, 30, 4, 5, 5, 5, 1, 5, 5;

  // q_d << 0, 0, pos_reference(st_motor_rotation), pos_reference(sw_motor_rotation), 
  //   pos_reference(st_motor_knee), pos_reference(sw_motor_abduction), 
  //   pos_reference(sw_motor_thigh), pos_reference(sw_motor_knee),
  //   pos_reference(st_motor_toeA); // TODO: update position reference.
  // VectorXd q_m(n_u);
  // q_m << base_orientation(1), base_orientation(0), position_full(st_motor_rotation), position_full(sw_motor_rotation), 
  //   position_full(st_motor_knee), position_full(sw_motor_abduction), 
  //   position_full(sw_motor_thigh), position_full(sw_motor_knee),
  //   position_full(st_motor_toeA);
  // VectorXd q_e = q_d - q_m;

  // // VectorXd dq_d(n_u);
  // dq_d << 0, 0, vel_reference(st_motor_rotation), vel_reference(sw_motor_rotation), 
  //   vel_reference(st_motor_knee), vel_reference(sw_motor_abduction), 
  //   vel_reference(sw_motor_thigh), vel_reference(sw_motor_knee),
  //   vel_reference(st_motor_toeA); // TODO: update velocity reference.
  // VectorXd dq_m(n_u);
  // dq_m << base_angvel(1), base_angvel(0), velocity(st_motor_rotation), velocity(sw_motor_rotation), 
  //   velocity(st_motor_knee), velocity(sw_motor_abduction), 
  //   velocity(sw_motor_thigh), velocity(sw_motor_knee),
  //   velocity(st_motor_toeA);
  // VectorXd dq_e = dq_d - dq_m;

  // VectorXd ddq(n_u);
  ddq_d << 0,0, acc_reference(st_motor_rotation), acc_reference(sw_motor_rotation), 
    acc_reference(st_motor_knee), acc_reference(sw_motor_abduction), 
    acc_reference(sw_motor_thigh), acc_reference(sw_motor_knee),
    acc_reference(motor::LEFT_SHOULDER_ROLL), acc_reference(motor::RIGHT_SHOULDER_ROLL); // TODO: update acceleration reference.

  VectorXd q_B = DigitState::buildState_FixedArm(VectorXd::Zero(3), // Global position doesn't matter.
    Vector3d{currState.base_orientation(0), currState.base_orientation(1), 0}, currState.position_full);

  // Get M G B takes 0.041718 ms.
  MatrixXd M = analytical_expressions.InertiaMatrix(q_B);
  MatrixXd G = analytical_expressions.GravityVector(q_B);
  MatrixXd B = get_B();

  // auto before = std::chrono::system_clock::now();
  // auto ms_spent = std::chrono::duration<double, std::milli>(std::chrono::system_clock::now() - before);
  // std::cout << "Get M G B (ms): " << ms_spent.count() << std::endl;

  // Jacobian of holonomic constraint for contact toe. 
  // Jg*ddq = 0. Ignore dJg*dq term. 
  // Takes 0.01 ms.
  MatrixXd Jg = MatrixXd::Zero(6,n_q);
  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) { // LEFT SUPPORT
    // Body Jacobian of foot for velocity constraint. Speed up by calculating half of the Jacobian.
    MatrixXd Jb_L = analytical_expressions.Jb_LeftToeBottomBack(q_B);
    Jg.bottomLeftCorner(3,n_q) = Jb_L.bottomLeftCorner(3,n_q);
    // Spatial Jacobian of foot for velocity constraint.
    MatrixXd Jc_L = analytical_expressions.Jp_LeftToeBottomBack(q_B);
    Jg.topLeftCorner(3,n_q) = Jc_L; 
  } else {
    MatrixXd Jb_R = analytical_expressions.Jb_RightToeBottomBack(q_B);
    Jg.bottomLeftCorner(3,n_q) = Jb_R.bottomLeftCorner(3,n_q);
    MatrixXd Jc_R = analytical_expressions.Jp_RightToeBottomBack(q_B);
    Jg.topLeftCorner(3,n_q) = Jc_R; 
  }

  // Jacobian for tarsus joint constraint. Js*ddq = 0.
  // According to my observation of Digit joint data, Knee + KneeSpring + Ankle + AnkleSpring = 0.
  // Assume KneeSpring = 0 (fixed). AnkleSpring is not part of the state q.
  // So we have very simple constraint: Knee + Ankle = 0.
  MatrixXd Js = MatrixXd::Zero(2,n_q);
  Js.block<1,2>(0,ddfa::LeftKnee) << -1, -1;
  Js.block<1,2>(1,ddfa::RightKnee) << -1, -1;

  // Extended matrix.
  MatrixXd Me = MatrixXd::Zero(28,28);
  Me.topLeftCorner(n_q,n_q) = M; 
  Me.block<6,n_q>(n_q,0) = Jg; Me.block<2,n_q>(26,0) = Js;
  Me.block<n_q,6>(0,n_q) = -Jg.transpose(); Me.block<n_q,2>(0,26) = -Js.transpose();
  Me = reorder(Me, qc_index, 0); // Reorder rows.
  Me = reorder(Me, qc_index, 1); // Reorder columns.
  // std::cout << Me << "\n\n";

  VectorXd He = VectorXd::Zero(28); He.head(n_q) = G;
  He = reorder(He, qc_index);
  // std::cout << He << "\n\n";
  
  MatrixXd Be = MatrixXd::Zero(28,n_u);
  MatrixXd B_reorder = reorder(B,motor_index,1);
  Be.topLeftCorner(n_q,n_u) = B_reorder.topLeftCorner(n_q,n_u); // Select actuated motor columns.
  Be = reorder(Be, qc_index); // 28x8.

  MatrixXd M11 = Me.topLeftCorner(n_u,n_u);
  MatrixXd M12 = Me.topRightCorner(n_u,28-n_u);
  MatrixXd M21 = Me.bottomLeftCorner(28-n_u,n_u);
  MatrixXd M22 = Me.bottomRightCorner(28-n_u,28-n_u);
  VectorXd H1 = He.head(n_u);
  VectorXd H2 = He.tail(28-n_u);
  MatrixXd B1 = Be.topLeftCorner(n_u,n_u);
  MatrixXd B2 = Be.bottomRightCorner(28-n_u,n_u);
  // std::cout << M11 << "\n\n";
  // std::cout << M12 << "\n\n";
  // std::cout << M21 << "\n\n";
  // std::cout << M22 << "\n\n";
  // std::cout << H1 << "\n\n";

  // Calculate inverse takes 0.415 ms.
  MatrixXd M22_inv = M22.inverse();
  MatrixXd M_bar = M11 - M12 * M22_inv * M21;
  VectorXd H_bar = H1 - M12 * M22_inv * H2;
  MatrixXd B_bar = B1 - M12 * M22_inv * B2;
  MatrixXd B_bar_inv = B_bar.inverse();
  // MatrixXd M_bar_inv = M_bar.inverse();
  // VectorXd ddq_d_bar = ddq_d + selection.cwiseProduct(
  //   Kp_PBC.cwiseProduct(q_e) + Kd_PBC.cwiseProduct(dq_e));

  // fb_8 = B_bar_inv * (Kp_PBC.cwiseProduct(q_e) + Kd_PBC.cwiseProduct(dq_e));
  gc_8.head(n_u) = B_bar_inv * H_bar; 
  //gc_8(8) = 0; // Disable stance toe gravity compensation.
  ff_8.head(n_u) = B_bar_inv * M_bar * ddq_d;
  // Disable stance knee feedforward torque. The body acceleration is affected 
  // by sagittal velocity. This somehow affect the body height while turning.
  ff_8(4) = 0; 

  // const double ff_torque_limit = 90; // Limit the feedforward torque.
  // ff_8 = ff_8.cwiseMax(-ff_torque_limit).cwiseMin(ff_torque_limit);
  
  VectorXd u8 = gc_8 + ff_8; // B_bar_inv * (M_bar * ddq_bar + H_bar);
  u8(8) = std::clamp(u8(8), -20.0, 20.0); 
  u8(9) = std::clamp(u8(9), -6.0, 6.0); 
  VectorXd u = distribute(u8, motor_index);

  // Compute the torque for toe joint.
  // Method 1: use ground reaction force. Not correct because of the toe bottom frame wrong.
  // VectorXd lambda = M22_inv * (B2 * u8 - H2 - M21 * ddq_d);
  // VectorXd wrench_GRF = lambda.tail(6); // XYZ, RPY.
  // Vector2d u_PR {wrench_GRF(3), 0};
  // Vector2d u_AB = geoExpressions.tau_PR2AB(u_PR);
  // if (current_domain->support_leg == 0) { // LEFT SUPPORT
  //   u.segment<2>(motor::LEFT_TOE_A) = u_AB;
  // } else {
  //   u.segment<2>(motor::RIGHT_TOE_A) = u_AB;
  // }

  // Method 2: use joint acceleration.


  
  // if (int(phaseVariable*200) == 150) {
  //   std::cout << ddq_d.transpose() << "\n\n";
  //   // std::cout << vel_reference.transpose() << "\n\n";
  //   // std::cout << dq_e.transpose() << "\n\n";
  //   std::cout << M_bar << "\n\n";
  //   std::cout << H_bar << "\n\n";
  //   std::cout << B_bar_inv << "\n\n";
  // }

  return u;
  // return VectorXd::Zero(wdc::motor::N_MOTORS);
}


VectorXd WalkingTrajectory::select(const VectorXd& q, const VectorXd& index) {
  VectorXd q_selected = VectorXd::Zero(index.size());
  for (int i = 0; i < index.size(); i++) {
    q_selected(i) = q(index(i));
  }
  return q_selected;
}

VectorXd WalkingTrajectory::distribute(const VectorXd& u8, const VectorXd& index) {
  VectorXd u = VectorXd::Zero(wdc::motor::N_MOTORS);
  for (int i = 0; i < index.size(); i++) {
    u(index(i)) = u8(i);
  }
  // Map the toe joint torque to the toe motor.
  u.segment<2>(motor::LEFT_TOE_A) = geoExpressions.tau_PR2AB(u.segment<2>(motor::LEFT_TOE_A));
  u.segment<2>(motor::RIGHT_TOE_A) = geoExpressions.tau_PR2AB(u.segment<2>(motor::RIGHT_TOE_A));
  // u.segment<2>(motor::LEFT_TOE_A) = Vector2d::Zero();
  // u.segment<2>(motor::RIGHT_TOE_A) = Vector2d::Zero();
  return u;
}

MatrixXd WalkingTrajectory::reorder(MatrixXd A, const VectorXd& index, int dim) {

  if (dim != 0) {
    A.transposeInPlace(); // Cause aliasing problem if not InPlace.
  }
  MatrixXd B = MatrixXd::Zero(A.rows(),A.cols());
  
  std::set<int> unselected_index;
  for (int i = 0; i < B.rows(); i++) {
    unselected_index.insert(i);
  }
  for (int i = 0; i < index.size(); i++) {
    int row = index(i);
    assert(row < B.rows());
    B.row(i) = A.row(row);
    unselected_index.erase(row);
  }
  int i = 0;
  for (auto it = unselected_index.begin(); it != unselected_index.end(); it++) {
    int row = *it;
    B.row(index.size()+i) = A.row(row);
    i++;
  }

  if (dim != 0) {
    B.transposeInPlace();
  }

  return B;
}

MatrixXd WalkingTrajectory::J_HeelSpringDeflectionEst(double q_knee, double q_knee_spring, double q_ankle) {
  MatrixXd Js = MatrixXd::Zero(1,3);
  return Js;
}

void WalkingTrajectory::swing_foot_traj(VectorXd& p_PSw_d, VectorXd& v_PSw_d, VectorXd& a_PSw_d, 
  const Vector3d p_PSw_d_final, const Vector3d p_PSw_initial, double swing_height_d, 
  double sXY, double sZ) {

  double ds = 1.0 / T;

  p_PSw_d(0) = 0.5*(p_PSw_initial(0) - p_PSw_d_final(0))*std::cos(M_PI*sXY) + 0.5*(p_PSw_initial(0) + p_PSw_d_final(0));
  v_PSw_d(0) = 0.5*(p_PSw_initial(0) - p_PSw_d_final(0))*-M_PI/(1-s_toe_off)*std::sin(M_PI*sXY)*ds;
  a_PSw_d(0) = 0.5*(p_PSw_initial(0) - p_PSw_d_final(0))*-std::pow(M_PI/(1-s_toe_off),2.0)*std::cos(M_PI*sXY)*ds*ds;

  p_PSw_d(1) = 0.5*(p_PSw_initial(1) - p_PSw_d_final(1))*std::cos(M_PI*sXY) + 0.5*(p_PSw_initial(1) + p_PSw_d_final(1));
  v_PSw_d(1) = 0.5*(p_PSw_initial(1) - p_PSw_d_final(1))*-M_PI/(1-s_toe_off)*std::sin(M_PI*sXY)*ds;
  a_PSw_d(1) = 0.5*(p_PSw_initial(1) - p_PSw_d_final(1))*-std::pow(M_PI/(1-s_toe_off),2.0)*std::cos(M_PI*sXY)*ds*ds;

  // Parabola for Z. Pass through (s, p_PSw): (0, p_PSw_0), (0.5, p_PSw_f+swing_height_d), (1, p_PSw_f).
  double p_PSw_fz = p_PSw_d_final(2);
  double a2 = -2 * p_PSw_fz + 2 * p_PSw_initial(2) - 4 * swing_height_d;
  double a1 = 3 * p_PSw_fz - 3 * p_PSw_initial(2) + 4 * swing_height_d;
  double a0 = p_PSw_initial(2);
  p_PSw_d(2) = a2 * std::pow(sZ,2.0) + a1 * sZ + a0;
  v_PSw_d(2) = (2 * a2 * sZ + a1) * ds;
  a_PSw_d(2) = (2 * a2) * ds * ds;
}

MatrixXd WalkingTrajectory::get_B() {
  // Get the B matrix for the passivity controller.
  // Maps the motor torques to corresponding joints, leaving unactuated joints to zero.
  MatrixXd B = MatrixXd::Zero(static_cast<int>(ddfa::NumJoints), 12); // 20x12.

  // Floating joint is not actuated.
  B(ddfa::LeftHipRoll, wdc::motor::LEFT_HIP_ROLL) = 1;
  B(ddfa::LeftHipYaw, wdc::motor::LEFT_HIP_YAW) = 1;
  B(ddfa::LeftHipPitch, wdc::motor::LEFT_HIP_PITCH) = 1;
  B(ddfa::LeftKnee, wdc::motor::LEFT_KNEE) = 1;
  // KneeSpring is fixed for Digit, whereas it is constrained for Cassie. 
  // Fixed is simpler, as it doesn't show up in the state q and reduces inertia matrix M dimention.
  // Ankle is constrained through four-bar linkage, not actuated.
  B(ddfa::LeftToePitch, wdc::motor::LEFT_TOE_A) = 1; // Toe will not be actuated. Here assume the toe is actuated by convolute motor.
  B(ddfa::LeftToeRoll, wdc::motor::LEFT_TOE_B) = 1;

  B(ddfa::RightHipRoll, wdc::motor::RIGHT_HIP_ROLL) = 1;
  B(ddfa::RightHipYaw, wdc::motor::RIGHT_HIP_YAW) = 1;
  B(ddfa::RightHipPitch, wdc::motor::RIGHT_HIP_PITCH) = 1;
  B(ddfa::RightKnee, wdc::motor::RIGHT_KNEE) = 1;
  B(ddfa::RightToePitch, wdc::motor::RIGHT_TOE_A) = 1; // Toe will not be actuated. Here assume the toe is actuated by convolute motor.
  B(ddfa::RightToeRoll, wdc::motor::RIGHT_TOE_B) = 1;

  // Arms are fixed for now, only consider leg motors.
  // B(dd::LeftShoulderRoll, wdc::motor::LEFT_SHOULDER_ROLL) = 1;
  // B(dd::LeftShoulderPitch, wdc::motor::LEFT_SHOULDER_PITCH) = 1;
  // B(dd::LeftShoulderYaw, wdc::motor::LEFT_SHOULDER_YAW) = 1;
  // B(dd::LeftElbow, wdc::motor::LEFT_ELBOW) = 1;

  // B(dd::RightShoulderRoll, wdc::motor::RIGHT_SHOULDER_ROLL) = 1;
  // B(dd::RightShoulderPitch, wdc::motor::RIGHT_SHOULDER_PITCH) = 1;
  // B(dd::RightShoulderYaw, wdc::motor::RIGHT_SHOULDER_YAW) = 1;
  // B(dd::RightElbow, wdc::motor::RIGHT_ELBOW) = 1;

  return B;
}

VectorXd WalkingTrajectory::calc_gravity(VectorXd q, DomainControl::DomainType domain) {
  // Link origin are set at the center of mass of the links.
  // Joint origin are set at the rotation center of the joints.
  // Frost has forward kinematics functions for both.

  VectorXd gc_command = VectorXd::Zero(wdc::motor::N_MOTORS);

  // Compute link origin (CoM) positions.
  VectorXd p_Pelvis_com = analytical_expressions.p_Pelvis(q);
  VectorXd p_LPelvisRotation_com = analytical_expressions.p_LeftPelvisRotation(q);
  VectorXd p_LHip = analytical_expressions.p_LeftHip(q);
  VectorXd p_LThigh_com = analytical_expressions.p_LeftThigh(q);
  VectorXd p_LKneeShin_com = analytical_expressions.p_LeftKnee(q);
  VectorXd p_LTarsus_com = analytical_expressions.p_LeftTarsus(q);
  VectorXd p_LToe_com = analytical_expressions.p_LeftToe(q);
  VectorXd p_RPelvisRotation_com = analytical_expressions.p_RightPelvisRotation(q);
  VectorXd p_RHip = analytical_expressions.p_RightHip(q);
  VectorXd p_RThigh_com = analytical_expressions.p_RightThigh(q);
  VectorXd p_RKneeShin_com = analytical_expressions.p_RightKnee(q);
  VectorXd p_RTarsus_com = analytical_expressions.p_RightTarsus(q);
  VectorXd p_RToe_com = analytical_expressions.p_RightToe(q);

  // Torso mass + shoulder roll pitch yaw elbow.
  const double Pelvis_mass = 17.1028392 + 2 * (0.535396 + 1.440357 + 1.065387 + 0.550582);

  const double LPelvisRotation_mass = 0.915088; // Yaw motor.
  const double LHip_mass = 0.818753; // Hip link, output of yaw motor.
  const double LThigh_mass = 6.244279;
  const double LKnee_mass = 1.227077;
  const double LShin_mass = 0.895793; // Knee and Shin are jointed by the knee spring and mostly move together.
  const double LTarsus_mass = 1.322865;
  const double LToe_mass = 0.043881+0.531283;

  const double RPelvisRotation_mass = 0.915088;
  const double RHip_mass = 0.818753;
  const double RThigh_mass = 6.244279;
  const double RKnee_mass = 1.227077;
  const double RShin_mass = 0.895793;
  const double RTarsus_mass = 1.322865;
  const double RToe_mass = 0.043881+0.531283;

  // The target joint positions.
  VectorXd p_LAbductionJoint = analytical_expressions.p_LeftAbductionJoint(q);
  VectorXd p_LThighJoint = analytical_expressions.p_LeftThighJoint(q);
  VectorXd p_LKneeJoint = analytical_expressions.p_LeftKneeJoint(q);
  VectorXd p_LTarsusJoint = analytical_expressions.p_LeftTarsusJoint(q);
  VectorXd p_RAbductionJoint = analytical_expressions.p_RightAbductionJoint(q);
  VectorXd p_RThighJoint = analytical_expressions.p_RightThighJoint(q);
  VectorXd p_RKneeJoint = analytical_expressions.p_RightKneeJoint(q);
  VectorXd p_RTarsusJoint = analytical_expressions.p_RightTarsusJoint(q);

  MatrixXd R_LAbductionJoint = analytical_expressions.R_LeftAbductionJoint(q);
  MatrixXd R_LThighJoint = analytical_expressions.R_LeftThighJoint(q);
  MatrixXd R_LKneeJoint = analytical_expressions.R_LeftKneeJoint(q);
  MatrixXd R_RAbductionJoint = analytical_expressions.R_RightAbductionJoint(q);
  MatrixXd R_RThighJoint = analytical_expressions.R_RightThighJoint(q);
  MatrixXd R_RKneeJoint = analytical_expressions.R_RightKneeJoint(q);

  // We don't have the mass for the arms yet.
  MatrixXd p_Links_com(13, 3);
  p_Links_com <<  p_Pelvis_com.transpose(), 
    p_LPelvisRotation_com.transpose(), p_LHip.transpose(), p_LThigh_com.transpose(),
    p_LKneeShin_com.transpose(), p_LTarsus_com.transpose(), p_LToe_com.transpose(),
    p_RPelvisRotation_com.transpose(), p_RHip.transpose(), p_RThigh_com.transpose(),
    p_RKneeShin_com.transpose(), p_RTarsus_com.transpose(), p_RToe_com.transpose();
  p_Links_com.transposeInPlace();

  VectorXd Links_mass(13);
  Links_mass << Pelvis_mass,
                LPelvisRotation_mass, LHip_mass, LThigh_mass,
                LKnee_mass + LShin_mass, LTarsus_mass, LToe_mass,
                RPelvisRotation_mass, RHip_mass, RThigh_mass,
                RKnee_mass + RShin_mass, RTarsus_mass, RToe_mass;
  
  const double total_mass = Links_mass.sum();

  if (domain == DomainControl::DomainType::LEFT_STAND) {
    std::vector<int> st_abduction_burden_index {0,7,8,9,10,11,12};
    double u_gc_st_abduction = get_joint_gravity_burden(
      p_Links_com, Links_mass, st_abduction_burden_index, p_LAbductionJoint,
      R_LAbductionJoint, Vector3d::UnitZ());
    
    std::vector<int> st_thigh_burden_index = {0,1,2,7,8,9,10,11,12};
    double u_gc_st_thigh = -get_joint_gravity_burden(
      p_Links_com, Links_mass, st_thigh_burden_index, p_LThighJoint,
      R_LThighJoint, Vector3d::UnitZ());
    
    // std::vector<int> st_knee_burden_index = {0,1,2,3,7,8,9,10,11,12};
    // double u_gc_st_knee = -get_joint_gravity_burden(
    //   p_Links_com, Links_mass, st_knee_burden_index, p_LKneeJoint, R_LKneeJoint, Vector3d::UnitZ());

    // Knee torque is roughly equal to the torque of the GRF act on tarsus joint.
    std::vector<int> st_knee_burden_index = {0};
    Matrix<double, 1, 1> all_link_mass; all_link_mass << total_mass;
    double u_gc_st_knee = get_joint_gravity_burden(
      p_LTarsusJoint, all_link_mass, st_knee_burden_index, p_LKneeJoint,
      R_LKneeJoint, Vector3d::UnitZ());

    std::vector<int> sw_abduction_burden_index = {7,8,9,10,11,12};
    double u_gc_sw_abduction = -get_joint_gravity_burden(
      p_Links_com, Links_mass, sw_abduction_burden_index, p_RAbductionJoint,
      R_RAbductionJoint, Vector3d::UnitZ());
    
    std::vector<int> sw_thigh_burden_index = {9,10,11,12};
    double u_gc_sw_thigh = -get_joint_gravity_burden(
      p_Links_com, Links_mass, sw_thigh_burden_index, p_RThighJoint,
      R_RThighJoint, Vector3d::UnitZ());

    std::vector<int> sw_knee_burden_index = {0,1,2,3,4,5,6,7,8,9};
    double u_gc_sw_knee = -get_joint_gravity_burden(
      p_Links_com, Links_mass, sw_knee_burden_index, p_RKneeJoint,
      R_RKneeJoint, Vector3d::UnitZ());
    
    gc_command(motor::LEFT_HIP_ROLL) = u_gc_st_abduction;
    gc_command(motor::LEFT_HIP_PITCH) = u_gc_st_thigh;
    gc_command(motor::LEFT_KNEE) = u_gc_st_knee;
    gc_command(motor::RIGHT_HIP_ROLL) = u_gc_sw_abduction;
    gc_command(motor::RIGHT_HIP_PITCH) = u_gc_sw_thigh;
    gc_command(motor::RIGHT_KNEE) = u_gc_sw_knee;

  } else if (domain == DomainControl::DomainType::RIGHT_STAND) {
    std::vector<int> st_abduction_burden_index = {0,1,2,3,4,5,6};
    double u_gc_st_abduction = get_joint_gravity_burden(
      p_Links_com, Links_mass, st_abduction_burden_index, p_RAbductionJoint,
      R_RAbductionJoint, Vector3d::UnitZ());
    
    std::vector<int> st_thigh_burden_index = {0,1,2,3,4,5,6,7,8};
    double u_gc_st_thigh = -get_joint_gravity_burden(
      p_Links_com, Links_mass, st_thigh_burden_index, p_RThighJoint,
      R_RThighJoint, Vector3d::UnitZ());

    // std::vector<int> st_knee_burden_index = {0,1,2,3,4,5,6,7,8,9};
    // double u_gc_st_knee = -get_joint_gravity_burden(
    //   p_Links_com, Links_mass, st_knee_burden_index, p_RKneeJoint, R_RKneeJoint, Vector3d::UnitZ());

    std::vector<int> st_knee_burden_index = {0};
    Matrix<double, 1, 1> all_link_mass; all_link_mass << total_mass;
    double u_gc_st_knee = get_joint_gravity_burden(
      p_RTarsusJoint, all_link_mass, st_knee_burden_index, p_RKneeJoint,
      R_RKneeJoint, Vector3d::UnitZ());

    std::vector<int> sw_abduction_burden_index = {1,2,3,4,5,6};
    double u_gc_sw_abduction = -get_joint_gravity_burden(
      p_Links_com, Links_mass, sw_abduction_burden_index, p_LAbductionJoint,
      R_LAbductionJoint, Vector3d::UnitZ());
    
    std::vector<int> sw_thigh_burden_index = {3,4,5,6};
    double u_gc_sw_thigh = -get_joint_gravity_burden(
      p_Links_com, Links_mass, sw_thigh_burden_index, p_LThighJoint,
      R_LThighJoint, Vector3d::UnitZ());

    std::vector<int> sw_knee_burden_index = {4,5,6};
    double u_gc_sw_knee = -get_joint_gravity_burden(
      p_Links_com, Links_mass, sw_knee_burden_index, p_LKneeJoint,
      R_LKneeJoint, Vector3d::UnitZ());
    
    gc_command(motor::RIGHT_HIP_ROLL) = u_gc_st_abduction;
    gc_command(motor::RIGHT_HIP_PITCH) = u_gc_st_thigh;
    gc_command(motor::RIGHT_KNEE) = u_gc_st_knee;
    gc_command(motor::LEFT_HIP_ROLL) = u_gc_sw_abduction;
    gc_command(motor::LEFT_HIP_PITCH) = u_gc_sw_thigh;
    gc_command(motor::LEFT_KNEE) = u_gc_sw_knee;

  } else if (domain == DomainControl::DomainType::DOUBLE_SUPPORT) {
    // VectorXd st_abduction_burden_index = [1,2:8];
    // VectorXd u_gc_st_abduction = -get_joint_gravity_burden(
    //   p_Links_com, Links_mass, st_abduction_burden_index, p_RAbductionJoint, R_RAbductionJoint, Vector3d::UnitX());
    
    // VectorXd st_thigh_burden_index = [1,2:8,9,10];
    // VectorXd u_gc_st_thigh = -get_joint_gravity_burden(
    //   p_Links_com, Links_mass, st_thigh_burden_index, p_RThighJoint, R_RThighJoint, Vector3d::UnitZ());

    // VectorXd sw_abduction_burden_index = [3:8];
    // VectorXd u_gc_sw_abduction = get_joint_gravity_burden(
    //   p_Links_com, Links_mass, sw_abduction_burden_index, p_LAbductionJoint, R_LAbductionJoint, Vector3d::UnitX());
    
    // VectorXd sw_thigh_burden_index = [4:8];   
    // VectorXd u_gc_sw_thigh = get_joint_gravity_burden(
    //   p_Links_com, Links_mass, sw_thigh_burden_index, p_LThighJoint, R_LThighJoint, Vector3d::UnitZ());

  } else {
    std::cout << __FUNCTION__ << ": Domain not defined" << std::endl;
  }

  return gc_command * linear_fast_rise(phaseVariable);
}

double WalkingTrajectory::get_joint_gravity_burden(MatrixXd p_Links_com, 
  VectorXd Links_mass, std::vector<int> burden_index, VectorXd p_BJ,
  MatrixXd R_BJ, VectorXd joint_direction) {

  const double g = 9.81;
  double composition_mass = 0;
  VectorXd p_composition_mass = VectorXd::Zero(3);
  for (auto i : burden_index) {
    p_composition_mass += p_Links_com.col(i) * Links_mass(i);
    composition_mass += Links_mass(i);
  }
  p_composition_mass /= composition_mass; // Burden position in {B} frame.
  VectorXd tau_B = Vector3d(p_composition_mass - p_BJ).cross(
    -composition_mass*g*Vector3d::UnitZ()); // Torque on joint in {B} frame.
  return joint_direction.transpose()*R_BJ.transpose()*tau_B;
}

double WalkingTrajectory::linear_fast_rise(double s) {
  const double k = 20;
  return std::min(1.0, k*s);
}

struct QuaternionVector {
    double w, x, y, z;
};

EulerAngles ToEulerAngles(QuaternionVector q) {
    EulerAngles angles;

    // roll (x-axis rotation)
    double sinr_cosp = 2 * (q.w * q.x + q.y * q.z);
    double cosr_cosp = 1 - 2 * (q.x * q.x + q.y * q.y);
    angles.roll = std::atan2(sinr_cosp, cosr_cosp);

    // pitch (y-axis rotation)
    double sinp = 2 * (q.w * q.y - q.z * q.x);
    if (std::abs(sinp) >= 1) {
      angles.pitch = std::copysign(M_PI / 2, sinp); // use 90 degrees if out of range
    } else {
      angles.pitch = std::asin(sinp);
    }
    // yaw (z-axis rotation)
    double siny_cosp = 2 * (q.w * q.z + q.x * q.y);
    double cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
    angles.yaw = std::atan2(siny_cosp, cosy_cosp);

    return angles;
}

int WalkingTrajectory::slopeEstimationFK(VectorXd &orientation,
        VectorXd &x_full, VectorXd &slopeFK) {
  VectorXd q(22);
  MatrixXd T_base_leftFoot = MatrixXd::Zero(4,4);
  MatrixXd T_base_rightFoot = MatrixXd::Zero(4,4);
  Matrix3d R_base_stanceFoot; // = MatrixXd::Zero(3,3);
  Matrix3d R_world_base; // = MatrixXd::Zero(3,3);
  Matrix3d R_world_stanceFoot; // = MatrixXd::Zero(3,3);
  Vector3d p_base_stanceFoot; // = Vector3d::Zero();
  Vector3d ea_world_stanceFoot;

  q << 0,0,0, orientation[2],orientation[1],orientation[0], //yaw, pitch, roll
  x_full[joint::LEFT_HIP_ROLL], x_full[joint::LEFT_HIP_YAW],
  x_full[joint::LEFT_HIP_PITCH], x_full[joint::LEFT_KNEE],
  x_full[joint::LEFT_SHIN], x_full[joint::LEFT_TARSUS],
  x_full[joint::LEFT_TOE_PITCH], x_full[joint::LEFT_TOE_ROLL],
  x_full[joint::RIGHT_HIP_ROLL], x_full[joint::RIGHT_HIP_YAW],
  x_full[joint::RIGHT_HIP_PITCH], x_full[joint::RIGHT_KNEE],
  x_full[joint::RIGHT_SHIN], x_full[joint::RIGHT_TARSUS],
  x_full[joint::RIGHT_TOE_PITCH], x_full[joint::RIGHT_TOE_ROLL];

  T_base_leftFoot = robotExpressions.T_leftFoot(q);
  T_base_rightFoot = robotExpressions.T_rightFoot(q);

  AngleAxisd rollAngle(orientation[0], Vector3d::UnitX());
  AngleAxisd pitchAngle(orientation[1], Vector3d::UnitY());
  AngleAxisd yawAngle(orientation[2], Vector3d::UnitZ());
  Quaternion<double> quat = yawAngle * pitchAngle * rollAngle;

  R_world_base = quat.matrix();  

  R_world_stanceFoot = R_world_base * R_base_stanceFoot;
  ea_world_stanceFoot = R_world_stanceFoot.eulerAngles(2,1,0); 

  Matrix3d R_base_leftFoot; 
  Matrix3d R_base_rightFoot; 
  Matrix3d R_world_leftFoot;
  Matrix3d R_world_rightFoot;
  Vector3d ea_world_leftFoot;
  Vector3d ea_world_rightFoot;

  R_base_leftFoot = T_base_leftFoot.block<3,3>(0,0);
  R_base_rightFoot = T_base_rightFoot.block<3,3>(0,0);
  R_world_leftFoot = R_world_base * R_base_leftFoot;
  R_world_rightFoot = R_world_base * R_base_rightFoot;
  ea_world_leftFoot = R_world_leftFoot.eulerAngles(2,1,0); 
  ea_world_rightFoot = R_world_rightFoot.eulerAngles(2,1,0); 


  Quaternion<double> quat_world_rightFoot(R_world_rightFoot);
  QuaternionVector qright;
  qright.w = quat_world_rightFoot.w();
  qright.x = quat_world_rightFoot.vec()[0];
  qright.y = quat_world_rightFoot.vec()[1];
  qright.z = quat_world_rightFoot.vec()[2];
  EulerAngles angles_world_rightFoot;
  angles_world_rightFoot = ToEulerAngles(qright);

  Quaternion<double> quat_world_leftFoot(R_world_leftFoot);
  QuaternionVector qleft;
  qleft.w = quat_world_leftFoot.w();
  qleft.x = quat_world_leftFoot.vec()[0];
  qleft.y = quat_world_leftFoot.vec()[1];
  qleft.z = quat_world_leftFoot.vec()[2];
  EulerAngles angles_world_leftFoot;
  angles_world_leftFoot = ToEulerAngles(qleft);

  Vector3d ones; 
  ones << 1.0, 1.0, 1.0;

  if (current_domain->support_leg == DomainControl::DomainType::LEFT_STAND) {
    R_base_stanceFoot = T_base_leftFoot.block<3,3>(0,0);
    p_base_stanceFoot = T_base_leftFoot.block<3,1>(0,3);

    slopeFK[0] = angles_world_leftFoot.roll;
    slopeFK[1] = angles_world_leftFoot.pitch - 3.35*M_PI/180; //3.35 is the offset in the measurement (probably coming from the mismatch model between urdf and simulator)
  } else {
    slopeFK[0] = angles_world_rightFoot.roll;
    slopeFK[1] = angles_world_rightFoot.pitch - 3.35*M_PI/180;
  }
  return 0;
}

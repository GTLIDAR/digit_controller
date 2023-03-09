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

#ifndef MOTOR_CONTROL_H_
#define MOTOR_CONTROL_H_

#include <memory.h>
#include "safety_manager.hpp"
#include "domain_control.hpp"
// #include "SharedData.h"
// #include "Config.h"
// #include "Time.h"
// #include "Eigen"
// #include "joint_filter.hpp"
// #include "cpptoml/include/cpptoml.h"
// using namespace Eigen;
// using namespace wdc;


namespace jointControl{
  enum ControlAlgorithm{
    PD_CONTROL = 0,
    CUSTOM_CONTROL = 9
  };

  // enum Domain{
  //   LEFT_STAND = 0,
  //   RIGHT_STAND = 1,
  //   DOUBLE_SUPPORT = 2,
  //   FLOATING = 3
  // };
}

class MotorControl{
public:
  MotorControl(jointControl::ControlAlgorithm control_algorithm, int filter_window, std::string path2toml);
  // Trajectory based on linear interpolation to reach a point in R^1 (or R^n) in t seconds. Ideally to set initial positions on the robot smoothly
  double jointToPoint(double t, double totalTime, bool newCommand, double pos_ref, VectorXd &pos_feed, double vel_ref, VectorXd &vel_feed, wdc::motor::Enum joint_id, DomainControl::DomainType domain = DomainControl::DOUBLE_SUPPORT);
  VectorXd robotToPoint(double t, double totalTime, bool newCommand, VectorXd &x_ref, VectorXd &x_feed, VectorXd &xd_ref, VectorXd &xd_feed, VectorXd &dGains, bool updateReference, DomainControl::DomainType domain = DomainControl::DOUBLE_SUPPORT);
  
  double jointControl(double pos_ref, VectorXd &pos_feed, double vel_ref, VectorXd &vel_feed, wdc::motor::Enum joint_id, DomainControl::DomainType domain = DomainControl::DOUBLE_SUPPORT);
  VectorXd robotControl(VectorXd &x_ref, VectorXd &x_feed, VectorXd &xd_ref, VectorXd &xd_feed, VectorXd &dGains, DomainControl::DomainType domain = DomainControl::DOUBLE_SUPPORT);
  int loadGains(std::string path2toml);

  JointFilter FilteredJoint[N_MOTORS];
private:
  
  double jointController(double pos_ref, double &pos_feed, double vel_ref, double vel_feed, wdc::motor::Enum joint_id);
  VectorXd robotController(VectorXd &x_ref, VectorXd &x_feed, VectorXd &xd_ref, VectorXd &xd_feed);
  
  double PDcontrol(double pos_ref, double &pos_feed, double vel_ref, double &vel_feed, wdc::motor::Enum joint_id);
  VectorXd PDcontrol(VectorXd &pos_ref, VectorXd &pos_feed, VectorXd &vel_ref, VectorXd &vel_feed);

  int selectGains(DomainControl::DomainType domain, bool force = false);

  jointControl::ControlAlgorithm controlAlgorithm;
  double floating_Kp[N_MOTORS_HALF];
  double floating_Kd[N_MOTORS_HALF];
  double contact_Kp[N_MOTORS_HALF];
  double contact_Kd[N_MOTORS_HALF];
  double stand_Kp[N_MOTORS_HALF];
  double stand_Kd[N_MOTORS_HALF];
  std::string joint_label[N_MOTORS_HALF];
  
  double Gain_Kp[N_MOTORS];
  double Gain_Kd[N_MOTORS];
  double max_torque[N_MOTORS];
  double min_torque[N_MOTORS];
  bool isUsingFilter;
  int size_windowFilter;
  double safety_parameter;
  DomainControl::DomainType robot_domain;
  std::shared_ptr<cpptoml::table> config;

  struct motor_t{
    double torque_limit;
    double velocity_limit;
    double target_torque;
    double target_position;
    double target_velocity;
  };

  struct command_struct{
    motor_t actuators[N_MOTORS];
  };

};

#endif

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

#include "motor_control.hpp"
#include "domain_control.hpp"
#include <iostream>

MotorControl::MotorControl(jointControl::ControlAlgorithm control_algorithm, int filter_window,std::string path2toml="")
{
  this->controlAlgorithm = control_algorithm;
  joint_label[0] = "HipRoll";
  joint_label[1] = "HipYaw";
  joint_label[2] = "HipPitch";
  joint_label[3] = "Knee";
  joint_label[4] = "ToeA";
  joint_label[5] = "ToeB";
  joint_label[6] = "ShoulderRoll";
  joint_label[7] = "ShoulderPitch";
  joint_label[8] = "ShoulderYaw";
  joint_label[9] = "Elbow";  

  robot_domain = DomainControl::DomainType::DOUBLE_SUPPORT;
  loadGains(path2toml);
}

int MotorControl::loadGains(std::string path2toml="")
{
  // USING TOML TO STORE PD GAINS
  config = cpptoml::parse_file(path2toml+"/config_files/robot_config.toml");
  // config = cpptoml::parse_file("robot_config.toml");
  for(int i = 0; i < N_MOTORS_HALF; i++) {
    // int32_t aux = config->get_qualified_as<double>("pid-floating." + joint_label[i] + ".Kp").value_or(0);
    floating_Kp[i] = config->get_qualified_as<double>("pid-floating." + joint_label[i] + ".Kp").value_or(0);
    floating_Kd[i] = config->get_qualified_as<double>("pid-floating." + joint_label[i] + ".Kd").value_or(0);
    contact_Kp[i] = config->get_qualified_as<double>("pid-contact." + joint_label[i] + ".Kp").value_or(0);
    contact_Kd[i] = config->get_qualified_as<double>("pid-contact." + joint_label[i] + ".Kd").value_or(0);
    stand_Kp[i] = config->get_qualified_as<double>("pid-standing." + joint_label[i] + ".Kp").value_or(0);
    stand_Kd[i] = config->get_qualified_as<double>("pid-standing." + joint_label[i] + ".Kd").value_or(0);
  }

  std::cout << "\n FLOATING Kp GAINS \n";
  for (size_t i = 0; i < N_MOTORS_HALF; i++)
  {
    std::cout << floating_Kp[i] << " ";
  }
  
  std::cout << "\n FLOATING Kd GAINS \n";
  for (size_t i = 0; i < N_MOTORS_HALF; i++)
  {
    std::cout << floating_Kd[i] << " ";
  }

  std::cout << "\n CONTACT Kp GAINS \n";
  for (size_t i = 0; i < N_MOTORS_HALF; i++)
  {
    std::cout << contact_Kp[i] << " ";
  }

  std::cout << "\n CONTACT Kd GAINS \n";
  for (size_t i = 0; i < N_MOTORS_HALF; i++)
  {
    std::cout << contact_Kd[i] << " ";
  }    

  std::cout << "\n STAND Kp GAINS \n";
  for (size_t i = 0; i < N_MOTORS_HALF; i++)
  {
    std::cout << stand_Kp[i] << " ";
  }

  std::cout << "\n STAND Kd GAINS \n";
  for (size_t i = 0; i < N_MOTORS_HALF; i++)
  {
    std::cout << stand_Kd[i] << " ";
  }    
  std::cout << "\n";
  
  selectGains(robot_domain, true);  


  // Load max/min control signal limits
  for(int i = 0; i < 2; i++) {
    for(int k = 0; k < 6; k++) {
      max_torque[k + 6*i] = config->get_qualified_as<double>("pid-limits." + joint_label[k] + ".Max").value_or(0);
      min_torque[k + 6*i] = config->get_qualified_as<double>("pid-limits." + joint_label[k] + ".Min").value_or(0);      
    }
    for(int k = 0; k < 4; k++) {
      max_torque[12+k + 4*i] = config->get_qualified_as<double>("pid-limits." + joint_label[6+k] + ".Max").value_or(0);
      min_torque[12+k + 4*i] = config->get_qualified_as<double>("pid-limits." + joint_label[6+k] + ".Min").value_or(0);      
    } 
  }
  // for(int i = 0; i < N_MOTORS; i++) {
  //   std::cout << "Max Torque: " << max_torque[i] << std::endl;
  //   std::cout << "Min Torque: " << min_torque[i] << std::endl;
  // }

  safety_parameter = config->get_qualified_as<double>("safety.safety_parameter").value_or(0);

  if(config->get_qualified_as<std::string>("filter.use_filter").value_or("false") == "yes") {
    isUsingFilter = true;
    size_windowFilter = config->get_qualified_as<int>("filter.window_size").value_or(1);
  }else{
    isUsingFilter = false;
  }

  if(isUsingFilter) {
    for(int i = 0; i < N_MOTORS; i++) {
      FilteredJoint[i] = JointFilter(size_windowFilter);
    }
  }
  
  return 0;
}

int  MotorControl::selectGains(DomainControl::DomainType domain, bool force)
{
  // std::cout << "domain: " << domain << "\n";
  // std::cout << "robot domain: " << robot_domain << "\n";
  
  if((domain != robot_domain) || force) {
    if (domain == DomainControl::DomainType::LEFT_STAND) {
      for (int i = 0; i < 6; i ++) { // Legs.
        Gain_Kp[i] = contact_Kp[i];
        Gain_Kp[6+i] = floating_Kp[i];
        Gain_Kd[i] = contact_Kd[i];
        Gain_Kd[6+i] = floating_Kd[i];
      }    
      for (int i = 6; i < 10; i ++) { // Arms.
        Gain_Kp[6+i] = contact_Kp[i];
        Gain_Kp[10+i] = contact_Kp[i];
        Gain_Kd[6+i] = contact_Kd[i];
        Gain_Kd[10+i] = contact_Kd[i];
      }          
    } else if (domain == DomainControl::DomainType::RIGHT_STAND) {
      for (int i = 0; i < 6; i ++) { // Legs.
        Gain_Kp[i] = floating_Kp[i];
        Gain_Kp[6+i] = contact_Kp[i];
        Gain_Kd[i] = floating_Kd[i];
        Gain_Kd[6+i] = contact_Kd[i];
      }    
      for(int i = 6; i < 10; i ++) { // Arms.
        Gain_Kp[6+i] = contact_Kp[i];
        Gain_Kp[10+i] = contact_Kp[i];
        Gain_Kd[6+i] = contact_Kd[i];
        Gain_Kd[10+i] = contact_Kd[i];
      }        
    } else if (domain == DomainControl::DOUBLE_SUPPORT){
      for (int i = 0; i < 6; i ++) {
        Gain_Kp[i] = stand_Kp[i];
        Gain_Kp[6+i] = stand_Kp[i];
        Gain_Kd[i] = stand_Kd[i];
        Gain_Kd[6+i] = stand_Kd[i];
      }    
      for (int i = 6; i < 10; i ++) {
        Gain_Kp[6+i] = stand_Kp[i];
        Gain_Kp[10+i] = stand_Kp[i];
        Gain_Kd[6+i] = stand_Kd[i];
        Gain_Kd[10+i] = stand_Kd[i];
      }  
    } else if (domain == DomainControl::FLOATING) {
      for (int i = 0; i < 6; i ++) {
        Gain_Kp[i] = floating_Kp[i];
        Gain_Kp[6+i] = floating_Kp[i];
        Gain_Kd[i] = floating_Kd[i];
        Gain_Kd[6+i] = floating_Kd[i];
      }    
      for (int i = 6; i < 10; i ++) {
        Gain_Kp[6+i] = floating_Kp[i];
        Gain_Kp[10+i] = floating_Kp[i];
        Gain_Kd[6+i] = floating_Kd[i];
        Gain_Kd[10+i] = floating_Kd[i];
      } 
    }    
  }
  // Gain_Kp[axisorder::LEFT_KNEE] = 800;
  // Gain_Kp[axisorder::RIGHT_KNEE] = 900;
  // for(int i = 0; i < 12; i ++) {
  //   std::cout << Gain_Kp[i] << "/n";
  //   std::cout << Gain_Kd[i] << "/n";    
  // }   
  return 0;
}

double MotorControl::jointControl(double pos_ref, VectorXd &pos_feed,
        double vel_ref, VectorXd &vel_feed, wdc::motor::Enum joint_id,
        DomainControl::DomainType domain) {

  double command;

  selectGains(domain);
  
  if (isUsingFilter) {
    FilteredJoint[joint_id].addPoint(vel_feed[joint_id]);
    command = jointController(pos_ref, pos_feed[joint_id], vel_ref, FilteredJoint[joint_id].getFilteredData(), joint_id);
  } else {
    command = jointController(pos_ref, pos_feed[joint_id], vel_ref, vel_feed[joint_id], joint_id);
  }

  // Clapping command
  command = (command < min_torque[joint_id] ? min_torque[joint_id] : command);
  command = (command > max_torque[joint_id] ? max_torque[joint_id] : command);
  command = safety_parameter * command;

  return command; 
}

VectorXd MotorControl::robotControl(VectorXd &x_ref, VectorXd &x_feed,
        VectorXd &dx_ref, VectorXd &dx_feed, VectorXd &dGains,
        DomainControl::DomainType domain) {

  VectorXd command(N_MOTORS);
  // std::cout << "domain: " << domain << "\n";
  selectGains(domain);
  
  command = robotController(x_ref, x_feed, dx_ref, dx_feed);
  // std::cout << "Command before limits: " << command << "\n";

  // Clamp and safety.
  for(int i = 0; i < N_MOTORS; i++) {
    command[i] = command[i] > max_torque[i] ? max_torque[i] : command(i);
    command[i] = command[i] < min_torque[i] ? min_torque[i] : command(i);
    command[i] = safety_parameter * command[i];   //CHECK THIS PART, IS IT ALWAYS NEEDED?
    dGains[i] = Gain_Kp[i];
  }

  return command;
}

double MotorControl::jointController(double pos_ref, double &pos_feed, double vel_ref, double vel_feed, wdc::motor::Enum joint_id)
{
  double command = PDcontrol(pos_ref,pos_feed, vel_ref, vel_feed, joint_id);
  return command;
}

VectorXd MotorControl::robotController(VectorXd &x_ref, VectorXd &x_feed, VectorXd &xd_ref, VectorXd &xd_feed)
{
  VectorXd command(N_MOTORS);
  if(controlAlgorithm == jointControl::ControlAlgorithm::PD_CONTROL) {
    command = PDcontrol(x_ref, x_feed, xd_ref, xd_feed);
  }else if (controlAlgorithm == jointControl::ControlAlgorithm::CUSTOM_CONTROL) {
    // PLACE CONTROLLER HERE -- Might add a virtual member function
    command.setZero();    
  }else{
    command.setZero();
  }

  return command;
}

double MotorControl::jointToPoint(double t, double totalTime, bool newCommand,
        double pos_ref, VectorXd &pos_feed, double vel_ref, VectorXd &vel_feed,
        wdc::motor::Enum joint_id, DomainControl::DomainType domain) {

  double command;
  static double time_offset = 0;
  static double starting_position = 0;
  static double starting_vel = 0;
  double new_pos_ref = 0;
  double new_vel_ref = 0;

  if(newCommand) {
    time_offset = t;
    starting_position = pos_feed[joint_id];
    starting_vel = vel_feed[joint_id];
  }

  double time_param = (t - time_offset > totalTime ? totalTime : t - time_offset);
  time_param = (time_param - time_offset < 0 ? 0 : time_param - time_offset);
  
  new_pos_ref = starting_position + time_param/totalTime * (pos_ref - starting_position);
  new_vel_ref = starting_vel + time_param/totalTime * (vel_ref - starting_vel);
  
  command = jointControl(new_pos_ref, pos_feed, new_vel_ref, vel_feed, joint_id);

  return command;
}

VectorXd MotorControl::robotToPoint(double t, double totalTime, bool newCommand,
        VectorXd &x_ref, VectorXd &x_feed, VectorXd &xd_ref, VectorXd &xd_feed,
        VectorXd &dGain, bool updateReference, DomainControl::DomainType domain) {
          
  VectorXd command(N_MOTORS);
  static double time_offset = 0;
  static VectorXd starting_pos_ref = VectorXd::Zero(N_MOTORS);
  static VectorXd starting_vel_ref = VectorXd::Zero(N_MOTORS);
  VectorXd new_pos_ref = VectorXd::Zero(N_MOTORS);
  VectorXd new_vel_ref = VectorXd::Zero(N_MOTORS);

  // Interpolating polynomial at^3 + bt^2 + ct + d
  static VectorXd a = VectorXd::Zero(N_MOTORS);
  static VectorXd b = VectorXd::Zero(N_MOTORS);
  static VectorXd c = VectorXd::Zero(N_MOTORS);
  static VectorXd d = VectorXd::Zero(N_MOTORS);

  if(newCommand) {;
    time_offset = t;
    starting_pos_ref = x_ref;
    starting_vel_ref = xd_ref;

    d = x_feed;
    c = xd_feed;

    for(int i = 0; i < x_feed.size(); i++) {
      double r1 = x_ref(i) - d(i) - c(i) * totalTime;
      double r2 = xd_ref(i) - c(i);
      a(i) = r2 / (totalTime * totalTime) - 2 * r1 / (totalTime * totalTime * totalTime);
      // std::cout << "a" << a(i) << std::endl;
      b(i) = 3 * r1 / (totalTime * totalTime) - r2 / totalTime;
      // std::cout << "b" << b(i) << std::endl;
    }
  }

  double time_param = (t - time_offset >= totalTime ? totalTime : t - time_offset);
  time_param = (time_param  <= 0 ? 0 : time_param);

  //new_pos_ref = starting_pos + time_param/totalTime * (x_ref - starting_pos);
  //new_vel_ref = starting_vel + time_param/totalTime * (xd_ref - starting_vel);
  for(int i = 0; i < x_feed.size(); i++) {
    new_pos_ref(i) = a(i) * pow(time_param,3) + b(i) * pow(time_param,2) + c(i) * time_param + d(i);
    new_vel_ref(i) = 3 * a(i) * pow(time_param,2) + 2 * b(i) * time_param + c(i); 
  }
 

  if(updateReference) {
    new_pos_ref = x_ref;
    new_vel_ref = xd_ref;
  }
  
  // command = robotControl(x_ref, x_feed, xd_ref, xd_feed);
  command = robotControl(new_pos_ref, x_feed, new_vel_ref, xd_feed, dGain);

  return command;
}

VectorXd MotorControl::PDcontrol(VectorXd &pos_ref, VectorXd &pos_feed, VectorXd &vel_ref, VectorXd &vel_feed)
{
  VectorXd command(N_MOTORS);
  for(int i = 0; i < N_MOTORS; i++) {
    command(i) = Gain_Kp[i] * (pos_ref(i) - pos_feed(i)) + Gain_Kd[i] * (vel_ref(i) - vel_feed(i));
  }

  return command;
}

double MotorControl::PDcontrol(double pos_ref, double &pos_feed, double vel_ref, double &vel_feed, wdc::motor::Enum joint_id)
{
  double command = Gain_Kp[joint_id] * (pos_ref - pos_feed) + Gain_Kd[joint_id] * (vel_ref - vel_feed);
  return command;
}

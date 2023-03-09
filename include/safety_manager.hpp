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
* Author:       Victor Paredes, Guillermo Castillo
* Email:        paredescauna.1@osu.edu, castillomartinez.2@osu.edu
* Modified:     01-25-2022
* Copyright:    Cyberbotics Lab @The Ohio State University
**/
/**
* Author:       Zhaoyuan Gu, Aziz Shamsah
* Email:        {zgu78, ashamsah3}@gatech.edu
* Modified:     02-25-2023
* Copyright:    LIDAR @ Georgia Tech
**/
#ifndef SAFETY_MANAGER_H_
#define SAFETY_MANAGER_H_

#include <unistd.h>
#include <iostream>
#include <cmath>
#include <csignal>
#include <memory>

extern "C"{
    #include "lowlevelapi.h"
}

#include <Eigen/Dense>

#include "filter.hpp"
#include "cpptoml/include/cpptoml.h"
#include "digit_definition.hpp"
#include "digit_state.hpp"

using namespace Eigen;

namespace wdc
{ 
    namespace button
    {
        enum Enum
        {
            REMOTE_STANDSTILL,    ///< Remote 'standstill' button.
            REMOTE_WALK,          ///< Remote 'walk' button.
            REMOTE_TURN_AROUND,   ///< Remote 'turn around' button.
            REMOTE_ZERO_POSITION,   ///< Remote 'zero position' button.

            ENABLE_INTERFACE,     ///< Enable signal: interface ready to operate (used to synchronize digit_interface with main_digit)
            ENABLE_MAIN,          ///< Enable signal: main code ready to operate (used to synchronize digit_interface with main_digit)

            N_BUTTONS             ///< Number of buttons on the exoskeleton.
        };
        
        /////////////////////////////////////////////////////////////////////////////////
        /// \struct  Button_s states for a button which could be pressed for a long period
        /// \details Event Associated to button presses should only trigger for long presses
        ///          (ie) more that 1 clock tic. Thus the struct keeps the duration of the current
        ///          press.
        /////////////////////////////////////////////////////////////////////////////////
        struct Button_s
        {
            bool isPressed = 0;                ///< True / False = Pressed / Not pressed.
            bool isEventSent;              ///< Store if the event was sent or not, must be false to send an event
            uint32_t pressedTimeMillisecond; ///< Time since the beginning of the last press.
            uint32_t waitTimeMillisecond;    ///< Required pressed time to trigger the associated event.
        };

        struct State_s
        {
            Button_s buttons[N_BUTTONS];
        };

    }  // End of namespace button.
}  // End of namespace wdc.

int32_t const N_JOINTS = wdc::joint::N_JOINTS;
int32_t const N_MOTORS = wdc::motor::N_MOTORS;
int32_t const N_MOTORS_HALF = 10;

class SafetyManager {
public:
  SafetyManager() {};
  SafetyManager(std::string path2toml = "");

  int executeCommand(VectorXd command, VectorXd velocity, VectorXd damping);
  VectorXd clampCommand(VectorXd command);
  
  int digit_connect(bool enabled);
  int digit_shutdown(void);
  // int getFullFeedback(VectorXd &base_position, VectorXd &base_orientation, VectorXd &base_velocity, VectorXd &base_angvel, VectorXd &jointPosition, VectorXd &jointVelocity, VectorXd &torque, VectorXd &IMUquaternion, VectorXd &IMUangvel, VectorXd &IMUacceleration, VectorXd &base_quaternion, VectorXd &base_orientation_unfil);
  DigitState getFullFeedback();
  // int checkState(VectorXd base_orientation, VectorXd base_velocity);
  int checkState(const DigitState& currState);

  int updateYawOffset(double newYawOffset);

  bool isRunning = false;

  wdc::button::State_s buttons;
  
  double yawOffset = 0.0;

  // Define inputs and outputs (updated each iteration)
  llapi_command_t command = {0};
  llapi_observation_t observation;   // all the sensor data from Digit

  int test_command(bool enable); 

  double robot_time = 0;
 
private:

  int checkVectorDimensions(VectorXd &vector);  
  int executeTorqueCommand(VectorXd command, VectorXd velocity, VectorXd damping);

  std::shared_ptr<cpptoml::table> config;
  bool isUsingFilter;
  int size_windowFilter;  
  JointFilter filteredJointVelocity[N_JOINTS];
  JointFilter filteredBaseVel[3];
  JointFilter filteredBaseAngVel[3];
  JointFilter filteredIMUacceleration[3];
  // std::unique_ptr<JointFilter> filteredBaseOrientation[3];  
  
  JointFilter filteredRoll;
  JointFilter filteredPitch;
  JointFilter filteredYaw;

};

namespace SafetyLimits {
  struct JointLimits{
    // It is safer to assume 0 by default
    float position_min = 0;
    float position_max = 0;
    float velocity_max = 0;
  };

  struct ActuatorLimits{
    float torque_max = 0;
  };

};



#endif //SAFETY_MANAGER_H_

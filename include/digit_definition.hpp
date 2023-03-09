
#ifndef DIGIT_DEFINITION_H_
#define DIGIT_DEFINITION_H_

#include <vector>
#include <string>

#include "Eigen"

using namespace Eigen;


namespace wdc
{
  namespace joint
  {
    enum Enum
    {
      LEFT_HIP_ROLL,
      LEFT_HIP_YAW,
      LEFT_HIP_PITCH,
      LEFT_KNEE,
      LEFT_TOE_A,
      LEFT_TOE_B,

      RIGHT_HIP_ROLL,
      RIGHT_HIP_YAW,
      RIGHT_HIP_PITCH,
      RIGHT_KNEE,
      RIGHT_TOE_A,
      RIGHT_TOE_B,

      LEFT_SHOULDER_ROLL,
      LEFT_SHOULDER_PITCH,
      LEFT_SHOULDER_YAW,
      LEFT_ELBOW,

      RIGHT_SHOULDER_ROLL,
      RIGHT_SHOULDER_PITCH,
      RIGHT_SHOULDER_YAW,
      RIGHT_ELBOW,

      LEFT_SHIN,
      LEFT_TARSUS,
      LEFT_TOE_PITCH,
      LEFT_TOE_ROLL,
      LEFT_HEEL_SPRING,

      RIGHT_SHIN,
      RIGHT_TARSUS,   
      RIGHT_TOE_PITCH,
      RIGHT_TOE_ROLL,
      RIGHT_HEEL_SPRING,    

      N_JOINTS ///< N_JOINTS = 30, number of joints (actuated+passive) on the Digit Robot
    };

    char const * const NAME[joint::N_JOINTS] =
    {
      "LeftHipRoll",
      "LeftHipYaw",
      "LeftHipPitch",
      "LeftKnee",
      "LeftToeA",
      "LeftToeB",

      "RightHipRoll",
      "RightHipYaw",
      "RightHipPitch",
      "RightKnee",
      "RightToeA",
      "RightToeB",

      "LeftShoulderRoll",
      "LeftShoulderPitch",
      "LeftShoulderYaw",
      "LeftElbow",

      "RightShoulderRoll",
      "RightShoulderPitch",
      "RightShoulderYaw",
      "RightElbow",

      "LeftShin",
      "LeftTarsus",
      "LeftToePitch",
      "LeftToeRoll",
      "LeftHeelSpring",

      "RightShin",
      "RightTarsus",        
      "RightToePitch",
      "RightToeRoll",
      "RightHeelSpring",
    };
  }  // End of namespace joint

  namespace motor
  { // This is the first 20 elements of the joints.
    enum Enum
    {
      LEFT_HIP_ROLL,
      LEFT_HIP_YAW,
      LEFT_HIP_PITCH,
      LEFT_KNEE,
      LEFT_TOE_A,  // can be set to be passively actuated
      LEFT_TOE_B,

      RIGHT_HIP_ROLL,
      RIGHT_HIP_YAW,
      RIGHT_HIP_PITCH,
      RIGHT_KNEE,
      RIGHT_TOE_A,
      RIGHT_TOE_B,

      LEFT_SHOULDER_ROLL,
      LEFT_SHOULDER_PITCH,
      LEFT_SHOULDER_YAW,
      LEFT_ELBOW,

      RIGHT_SHOULDER_ROLL,
      RIGHT_SHOULDER_PITCH,
      RIGHT_SHOULDER_YAW,
      RIGHT_ELBOW,

      N_MOTORS,  ///< N_MOTORS = 20, As the last enumerator, this is the number of motors in this config.
      NOT_A_MOTOR = N_MOTORS  ///< Alias of N_MOTOR
    };

    char const * const NAME[N_MOTORS] =
    {
      "LeftHipRoll",
      "LeftHipYaw",
      "LeftHipPitch",
      "LeftKnee",
      "LeftToeA",
      "LeftToeB",

      "RightHipRoll",
      "RightHipYaw",
      "RightHipPitch",
      "RightKnee",
      "RightToeA",
      "RightToeB",

      "LeftShoulderRoll",
      "LeftShoulderPitch",
      "LeftShoulderYaw",
      "LeftElbow",
              
      "RightShoulderRoll",
      "RightShoulderPitch",
      "RightShoulderYaw",
      "RightElbow",
    };
  }  // End of namespace motor.
}

namespace dd {
  // Digit URDF definition, as used by FROST and its Analytical functions.
  // https://github.gatech.edu/GeorgiaTechLIDARGroup/Digit_CFROST
  enum Joints {
    Pelvis_X = 0,
    Pelvis_Y = 1,
    Pelvis_Z = 2,
    Pelvis_Yaw = 3, // Only FROST functions use yaw pitch roll order for FK. Because internally, it is intrinsics.
    Pelvis_Pitch = 4,
    Pelvis_Roll = 5,

    LeftHipRoll = 6,
    LeftHipYaw = 7,
    LeftHipPitch = 8,
    LeftKnee = 9, // With fixed knee spring.
    LeftAnkle = 10,
    LeftToePitch = 11,
    LeftToeRoll = 12,

    LeftShoulderRoll = 13,
    LeftShoulderPitch = 14,
    LeftShoulderYaw = 15,
    LeftElbow = 16,

    RightHipRoll = 17,
    RightHipYaw = 18,
    RightHipPitch = 19,
    RightKnee = 20, // With fixed knee spring.
    RightAnkle = 21,
    RightToePitch = 22,
    RightToeRoll = 23,

    RightShoulderRoll = 24,
    RightShoulderPitch = 25,
    RightShoulderYaw = 26,
    RightElbow = 27,
    
    NumJoints
  };

  const std::vector<std::string> joint_names = {
    "Pelvis_X",
    "Pelvis_Y",
    "Pelvis_Z",
    "Pelvis_Yaw",
    "Pelvis_Pitch",
    "Pelvis_Roll",

    "LeftHipRoll",
    "LeftHipYaw",
    "LeftHipPitch",
    "LeftKnee",
    "LeftAnkle",
    "LeftToePitch",
    "LeftToeRoll",

    "LeftShoulderRoll",
    "LeftShoulderPitch",
    "LeftShoulderYaw",
    "LeftElbow",

    "RightHipRoll",
    "RightHipYaw",
    "RightHipPitch",
    "RightKnee",
    "RightAnkle",
    "RightToePitch",
    "RightToeRoll",
    
    "RightShoulderRoll",
    "RightShoulderPitch",
    "RightShoulderYaw",
    "RightElbow"
  };
} // namespace dd (digit definition)

namespace ddfa {
  enum JointsFixedArms {
    Pelvis_X = 0,
    Pelvis_Y = 1,
    Pelvis_Z = 2,
    Pelvis_Yaw = 3, // Only FROST functions use yaw pitch roll order for FK. Because internally, it is intrinsics.
    Pelvis_Pitch = 4,
    Pelvis_Roll = 5,

    LeftHipRoll = 6,
    LeftHipYaw = 7,
    LeftHipPitch = 8,
    LeftKnee = 9, // With fixed knee spring.
    LeftAnkle = 10,
    LeftToePitch = 11,
    LeftToeRoll = 12,

    RightHipRoll = 13,
    RightHipYaw = 14,
    RightHipPitch = 15,
    RightKnee = 16, // With fixed knee spring.
    RightAnkle = 17,
    RightToePitch = 18,
    RightToeRoll = 19,
    
    NumJoints
  };
} // namespace ddfa (digit definition fixed arm)


class DigitControlHyperparameters {
 public:
  DigitControlHyperparameters() {};
  DigitControlHyperparameters(double step_time_crnt, double step_time_next,
    Vector3d v_StB_d, double stepl_d, double stepw_d):
    step_time_crnt(step_time_crnt), step_time_next(step_time_next),
    v_StB_d(v_StB_d), stepl_d(stepl_d), stepw_d(stepw_d) {};

  double step_time_crnt;
  double step_time_next;
  Vector3d v_StB_d;
  double stepl_d;
  double stepw_d;

};
#endif // DIGIT_DEFINITION_H_
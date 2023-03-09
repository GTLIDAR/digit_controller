###
# Author:       Guillermo Castillo
# Email:        castillomartinez.2@osu.edu
# Modified:     01-25-2022
# Copyright:    Cyberbotics Lab @The Ohio State University
###

cmake_minimum_required(VERSION 3.14)
project(digit_main)

#set(CMAKE_CXX_FLAGS "-O2")
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  roslib
  sensor_msgs
  message_generation
  genmsg
)

add_message_files(
  FILES
  DigitState.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
  sensor_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  lowlevelapi_22/
  include/
  include/MathExpr/
  include/Eigen/
  include/GeometricKinematics
  include/AnalyticalKinematicsDynamics
)

add_subdirectory(include/GeometricKinematics)
add_subdirectory(include/AnalyticalKinematicsDynamics)
add_subdirectory(test)

# also build libartl
add_custom_target(libartl
        $(MAKE) -C "${CMAKE_CURRENT_SOURCE_DIR}/lowlevelapi_22"
        COMMENT "Building the ARTL library"
        VERBATIM)

# Create a minimal API library using Agility Robotics API (to use the lowlevel API of Digit, 
# including the UDP connection).
add_library(AR_api STATIC lowlevelapi_22/lowlevelapi.c)
add_dependencies(AR_api libartl) # lowlevelapi depends on ARTL
target_include_directories(AR_api PUBLIC lowlevelapi_22)
link_directories(lowlevelapi_22/libartl)
target_link_libraries(AR_api PUBLIC -lartl -lpthread)

add_executable(lowlevelapi_example lowlevelapi_22/lowlevelapi_example.c)
target_link_libraries(lowlevelapi_example AR_api)

set(EIGEN_INCL include/Eigen) 
set(TOML_INCL include/cpptoml)

set(EXPR_SRCS
  "include/MathExpr/J_leftFoot.cc"
  "include/MathExpr/J_rightFoot.cc"
  "include/MathExpr/p_leftFoot.cc"
  "include/MathExpr/p_rightFoot.cc"
  "include/MathExpr/p_com.cc"
  "include/MathExpr/v_com.cc"
  "include/MathExpr/T_leftFoot.cc"
  "include/MathExpr/T_rightFoot.cc"
)

set(EXPR_INCL "include/MathExpr")

# Create core libraries for cyberbotics lab
add_library(joint_filter_lib STATIC "src/filter.cpp")
target_include_directories(joint_filter_lib PUBLIC ${CMAKE_SOURCE_DIR}/include ${EIGEN_INCL})
target_link_libraries(joint_filter_lib)

add_library(safety_manager_lib STATIC src/safety_manager.cpp)
target_include_directories(safety_manager_lib 
    PUBLIC 
    ${CMAKE_SOURCE_DIR}/include ${EIGEN_INCL}  ${TOML_INCL})
target_link_libraries(safety_manager_lib AR_api joint_filter_lib)

add_library(motor_control_lib STATIC src/motor_control.cpp)
target_include_directories(motor_control_lib PUBLIC ${CMAKE_SOURCE_DIR}/include ${EIGEN_INCL} ${TOML_INCL})
target_link_libraries(motor_control_lib safety_manager_lib joint_filter_lib)

add_library(math_expressions_lib STATIC ${EXPR_SRCS})
target_include_directories(math_expressions_lib PUBLIC "include" ${EIGEN_INCL} ${TOML_INCL} ${EXPR_INCL})
target_link_libraries(math_expressions_lib  safety_manager_lib)

add_library(robot_expressions_lib STATIC "src/robot_expressions.cpp" ${EXPR_SRCS})
target_include_directories(robot_expressions_lib PUBLIC "include" ${EIGEN_INCL} ${TOML_INCL} ${EXPR_INCL})
target_link_libraries(robot_expressions_lib safety_manager_lib math_expressions_lib)

add_library(walking_trajectory_lib STATIC src/walking_trajectory.cpp src/standing_controller.cpp src/digit_state.cpp)
target_include_directories(walking_trajectory_lib PUBLIC ${CMAKE_SOURCE_DIR}/include ${EIGEN_INCL} ${TOML_INCL})
target_link_libraries(walking_trajectory_lib safety_manager_lib joint_filter_lib robot_expressions_lib kinematics_dynamics_lib)

add_library(domain_control_lib STATIC "src/domain_control.cpp")
target_include_directories(domain_control_lib PUBLIC "include" ${CMAKE_SOURCE_DIR}/include ${EIGEN_INCL})


add_library(step_planner_lib STATIC 
  src/step_planner.cpp
  src/PS_planner.cpp
)

#Create main control program
add_executable(digit_main src/digit_main.cpp src/turtlebot.cpp src/input_listener.cpp)
target_link_libraries(digit_main 
  safety_manager_lib 
  motor_control_lib 
  walking_trajectory_lib 
  kinematics_dynamics_lib
  # kinematics_dynamics_fixarm_lib
  geometric_kinematics_lib
  step_planner_lib
  domain_control_lib
  ${catkin_LIBRARIES}
)
add_dependencies(digit_main digit_main_generate_messages_cpp)

set(_INCLUDE_CURRENT_DIR true)

file(GLOB_RECURSE KIN_DYN_SRCS 
  kin/*.cpp # contact points are fixed-arm version in this folder.
  dynFixArm/*.cpp # Use fixed-arm dynamics
)
add_library(kinematics_dynamics_lib
  ${KIN_DYN_SRCS}
  analytical_expressions.cpp
)
target_include_directories(kinematics_dynamics_lib PUBLIC
  kin/ 
  dynFixArm/
)

# file(GLOB_RECURSE KIN_DYN_FIXARM_SRCS 
#   kinFixArm/*.cpp
#   dynFixArm/*.cpp
# )
# add_library(kinematics_dynamics_fixarm_lib
#   ${KIN_DYN_FIXARM_SRCS}
#   analytical_expressions_fixarm.cpp
# )
# target_include_directories(kinematics_dynamics_fixarm_lib PUBLIC
#   kinFixArm/ 
#   dynFixArm/
# )

add_executable(kin_dyn_test test/main.cc)
target_link_libraries(kin_dyn_test kinematics_dynamics_lib)

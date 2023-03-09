set(CMAKE_INCLUDE_CURRENT_DIR true)

add_library(geometric_kinematics_lib
  IK_Geo_p.cpp
  IK_Geo_v.cpp
  J_IK_Geo_p.cpp
  dJ_IK_Geo_p.cpp
  FK_Geo_p.cpp
  FK_Geo_v.cpp
  J_FK_Geo_p.cpp
  dJ_FK_Geo_p.cpp
  KinGeo_rtwutil.cpp
  KinGeo_initialize.cpp
  rt_nonfinite.cpp
  rtGetNaN.cpp
  rtGetInf.cpp
  geo_expressions.cpp
)

add_executable(GeometricKinematicsMain
  examples/main.cpp
  KinGeo_terminate.cpp
)
target_link_libraries(GeometricKinematicsMain geometric_kinematics_lib)

add_executable(GeometricKinematicsTest
  examples/test.cpp
)
target_link_libraries(GeometricKinematicsTest geometric_kinematics_lib)

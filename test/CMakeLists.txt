# Unit Testing stuff

set(CMAKE_INCLUDE_CURRENT_DIR true)
option(ENABLE_TESTS "Enable unit tests for frost functions" ON)

if (ENABLE_TESTS)

  include(FetchContent)
  include(CTest)
  #set(FETCHCONTENT_QUIET OFF)
  FetchContent_Declare(
    DocTest 
    URL https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h
    DOWNLOAD_DIR ${CMAKE_CURRENT_SOURCE_DIR}
    DOWNLOAD_NO_EXTRACT TRUE
  )
  FetchContent_MakeAvailable(DocTest) 
  add_compile_definitions(TEST)

  # Note: test_entrypoint.h is used to provide main() for each test.
  #       This allows for having a single test to be split across multiple files
  #       (to test multiple different functions) without issues. While not strictly
  #       necessary, I think it makes stuff a bit more streamlined for the future.

  add_executable(test_analytical_kindyn
    "test_analytical_kindyn.cpp"
  )
  # target_include_directories(test_analytical_kindyn PUBLIC "test")
  target_link_libraries(test_analytical_kindyn 
    kinematics_dynamics_lib
    geometric_kinematics_lib
    # kinematics_dynamics_fixarm_lib
  )
  add_test(
    NAME digit_main_p_com_test
    COMMAND test_analytical_kindyn
  )

  
  add_executable(test_geometric_kin
    "test_geometric_kin.cpp"
  )
  # target_include_directories(test_geometric_kin PUBLIC "test")
  target_link_libraries(test_geometric_kin 
    geometric_kinematics_lib
    # walking_trajectory_lib
  )
  add_test(
    NAME digit_main_fk_ik_p_test
    COMMAND test_geometric_kin
  )

endif()

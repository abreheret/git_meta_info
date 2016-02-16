project(git_meta_info)
cmake_minimum_required(VERSION 2.8)

configure_file(
  ${CMAKE_SOURCE_DIR}/git_meta_info.cmake.in
  ${CMAKE_BINARY_DIR}/git_meta_info.cmake
)
include_directories(${CMAKE_BINARY_DIR})
add_executable(test_git_meta_info ../src/main_test.cpp)
add_custom_command(TARGET test_git_meta_info PRE_BUILD COMMAND cmake -P ${CMAKE_BINARY_DIR}/git_meta_info.cmake)




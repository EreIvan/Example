cmake_minimum_required(VERSION 2.8)

project(Point)


add_executable(${PROJECT_NAME} "main.cpp" "point.cpp" "point.hpp")

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

cmake_minimum_required(VERSION 3.10)
project(Shapes)

set(CMAKE_CXX_STANDARD 11)

add_executable(shapes main.cpp shapes.cpp)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(shapes_test test.cpp shapes.cpp)
target_link_libraries(shapes_test Boost::unit_test_framework)
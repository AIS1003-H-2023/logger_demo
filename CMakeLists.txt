cmake_minimum_required(VERSION 3.17)
project(logger_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(live_09_10 main.cpp)
target_include_directories(live_09_10 PRIVATE "${CMAKE_SOURCE_DIR}/include")

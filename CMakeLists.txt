cmake_minimum_required(VERSION 3.26)
project(live_09_10)

set(CMAKE_CXX_STANDARD 17)

add_executable(live_09_10 main.cpp)
target_include_directories(live_09_10 PRIVATE "${CMAKE_SOURCE_DIR}/include")

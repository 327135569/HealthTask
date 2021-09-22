cmake_minimum_required(VERSION 3.20)
project(HealthTask)

set(CMAKE_CXX_STANDARD 17)

add_executable(HealthTask WIN32 main.cpp)
target_compile_options(HealthTask PRIVATE /utf-8)

cmake_minimum_required(VERSION 3.20)
project(HealthTask)

set(CMAKE_CXX_STANDARD 17)

# Remove RTC
set(CMAKE_CXX_FLAGS_DEBUG "/Zi /Ob0 /Od")
set(CMAKE_C_FLAGS_DEBUG "/Zi /Ob0 /Od")

add_executable(HealthTask WIN32 main.cpp)
target_compile_options(HealthTask PRIVATE /utf-8)

# Remove c/c++ library
target_link_options(HealthTask PRIVATE /NODEFAULTLIB /ENTRY:fakemain)
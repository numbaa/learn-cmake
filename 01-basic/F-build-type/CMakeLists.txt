cmake_minimum_required(VERSION 3.5)

# 设置默认 BUILD_TYPE，但是后面一句没看懂
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Setting build type to 'RelWithDebInfo' as none was specified.")
  set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

project(build_type)

add_executable(build_type main.cpp)


# Release -O3 -DNDEBUG
# Debug -g
# MinSizeRel -Os -DNDEBUG
# RelWithDebInfo -O2 -g -DNDEBUG

# 可以通过 命令行参数 -DCMAKE_BUILD_TYPE=xxxx 设置BUILD_TYPE
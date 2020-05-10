cmake_minimum_required(VERSION 3.5)

project (hello_cmake)

add_executable(hello_cmake main.cpp)

# 通过使用-DCMAKE_C_COMPILER=XXX， -DCMAKE_CXX_COMPILER=xxx指定编译器
cmake_minimum_required(VERSION 3.5)

#declare a target
project(hello_cmake)

#declare a target's trait
add_executable(hello_cmake main.cpp)

#笔记
# 有需要可以用${PROJECT_NAME}代替第二个'hello_cmake'
# CMAKE_BINARY_DIR被赋值成我执行cmake命令的目录
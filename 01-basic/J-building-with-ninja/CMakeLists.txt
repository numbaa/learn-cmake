cmake_minimum_required(VERSION 3.5)

project(hello_ninja)

add_executable(hello_ninja main.cpp)

# cmake .. -G Ninja && ninja
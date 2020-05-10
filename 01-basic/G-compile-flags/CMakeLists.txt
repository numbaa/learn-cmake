cmake_minimum_required(VERSION 3.5)

# 还有 CMAKE_C_FLAGS CMAKE_LINKER_FALGS
# 但是这几个变量是全局的，不建议用他们
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DFLAG1" CACHE STRING "Set C++ compiler flags" FORCE)

project(compile_falgs)

add_executable(compile_flags main.cpp)

# 建议这么用，可以传递
target_compile_definitions(compile_flags
    PRIVATE
        FLAG2
)
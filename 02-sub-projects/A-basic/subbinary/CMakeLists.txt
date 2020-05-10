cmake_minimum_required(VERSION 3.5)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    sub::lib1
    sub::lib2
)
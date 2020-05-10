cmake_minimum_required(VERSION 3.5)

project(hello_library)

add_library(hello_library SHARED
    src/hello.cpp
)

# 只是给人看的，不会产生什么实质影响
add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(hello_binary
    src/main.cpp
)

target_link_libraries(hello_binary
    PRIVATE
        hello::library
)
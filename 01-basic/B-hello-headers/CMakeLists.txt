cmake_minimum_required(VERSION 3.5)

project(hello_headers)

set (SOURCES
    src/hello.cpp
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

#笔记
# CMAKE_SOURCE_DIR 源码根目录
# CMAKE_CURRENT_SOURCE_DIR 用到sub-projects时的当前目录
# PROJECT_SOURCE_DIR ？？
# CMAKE_BINARY_DIR 运行cmake命令的目录
# CMAKE_CURRENT_BINARY_DIR The build directory you are currently in
# PROJECT_BINARY_DIR The build directory for the current project


# 不建议 SOURCES 设置源文件的做法，而应该把源码放进add_xxx
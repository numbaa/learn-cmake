cmake_minimum_required(VERSION 3.5)

project(hello_library)

add_library(hello_library STATIC
    src/hello.cpp
)

# 声明为PUBLIC时，编译这个library会用这个include目录，编译使用这个library的target也会用这个include目录
# 声明为PRIVATE时，只有这个library会用这个include目录
# 声明为INTERFACE时，只有链接这个library的target会使用这个include目录
target_include_directories(hello_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(hello_binary
    src/main.cpp
)

# 这里PRIVATE啥意思
target_link_libraries(hello_binary
    PRIVATE
        hello_library
)
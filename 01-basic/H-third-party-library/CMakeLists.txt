cmake_minimum_required(VERSION 3.5)

project(third_party_include)

# 这里是最小版本，我装的是1.72也能通过
# REQUIRED 指示没找到就不让过
# COMPONENTS指示要那几个组件
find_package(Boost
    1.71
    REQUIRED
    COMPONENTS filesystem system
)

# find_package成功后会导出几个变量，比如Boost_INCLUDE_DIRS
if(Boost_FOUND)
    message ("boost found")
else()
    message (FATAL_ERROR "Cannot find Boost")
endif()

add_executable(third_party main.cpp)

target_link_libraries(third_party
    PRIVATE
        Boost::filesystem
)
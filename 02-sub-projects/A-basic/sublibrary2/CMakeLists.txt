project(sublibrary2)

add_library(${PROJECT_NAME} src/sublib2.cpp)
add_library(sub::lib2 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
add_library(helper Helper.cpp)

target_include_directories(helper PUBLIC
    ${CMAKE_SOURCE_DIR}/code/include
    ${CMAKE_SOURCE_DIR}/code/src
)
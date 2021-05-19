cmake_minimum_required(VERSION 3.16.3)
project(abc)

set(CMAKE_CXX_STANDARD 14)

add_executable(abc_no1 no1.cpp)
add_executable(abc_no2 no2.cpp)
add_executable(abc_no3 no3.cpp)
add_executable(abc_no4 no4.cpp)
add_executable(abc_no5 no5.cpp)
add_executable(abc_no6 no6.cpp)

include_directories($ENV{ACLib_dir})
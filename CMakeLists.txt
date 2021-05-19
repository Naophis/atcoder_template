cmake_minimum_required(VERSION 3.16.3)
project(abc)

set(CMAKE_CXX_STANDARD 14)

add_executable(abc_a main_a.cpp)
add_executable(abc_b main_b.cpp)
add_executable(abc_c main_c.cpp)
add_executable(abc_d main_d.cpp)
add_executable(abc_e main_e.cpp)
add_executable(abc_f main_f.cpp)

include_directories($ENV{ACLib_dir})
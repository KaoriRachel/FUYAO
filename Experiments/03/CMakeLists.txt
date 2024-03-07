cmake_minimum_required(VERSION 3.16)
project(exp03)

set(CMAKE_CXX_STANDARD 17)
set(EXP03_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_compile_options(-fexceptions)
add_compile_options(-frtti)

# src
add_subdirectory(src exp03_social_network)

# test
# add_subdirectory(test test_exp03_social_network)
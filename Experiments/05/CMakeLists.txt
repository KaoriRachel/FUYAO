cmake_minimum_required(VERSION 3.16)
project(exp05)

set(CMAKE_CXX_STANDARD 17)
set(EXP05_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_compile_options(-fexceptions)
add_compile_options(-frtti)

# src
add_subdirectory(src exp05_finra)

# test
add_subdirectory(test test_exp02_media_service)

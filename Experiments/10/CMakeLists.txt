cmake_minimum_required(VERSION 3.16)
project(exp10)

set(CMAKE_CXX_STANDARD 17)
set(EXP10_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_compile_options(-fexceptions)
add_compile_options(-frtti)

# src
add_subdirectory(rdma_scale_src exp10_rdma)
add_subdirectory(fuyao_scale_src exp10_fuyao)

# test
add_subdirectory(test test_exp02_media_service)

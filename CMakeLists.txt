cmake_minimum_required(VERSION 3.16)
project(Fuyao-benchmarks)
set(CMAKE_CXX_STANDARD 17)

set(LUMINE_BENCHMARKS_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# enable debug or not
# add_compile_options(-D__DEBUG)


# Fuyao
# add_compile_options(-D__DEBUG)
add_compile_options(-D__ENABLE_RDMA)
add_subdirectory(Fuyao Fuyao)

#Experiments
add_subdirectory(Experiments experiments)
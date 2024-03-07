cmake_minimum_required(VERSION 3.16)
project(Fuyao-experiments)

include_directories(${LUMINE_BENCHMARKS_DIR}/Fuyao/src/host/worker/cpp)
include_directories(${LUMINE_BENCHMARKS_DIR}/Fuyao/lib)
include_directories(${LUMINE_BENCHMARKS_DIR}/Experiments/deps/libmc)

set(EXP02_BUILD ON)
set(EXP07_BUILD OFF)
set(EXP09_BUILD ON)

# add some experiments
add_subdirectory(00 exp00)
add_subdirectory(01 exp01)

add_subdirectory(03 exp03)
add_subdirectory(05 exp05)
add_subdirectory(06 exp06)
add_subdirectory(08 exp08)
add_subdirectory(10 exp10)
add_subdirectory(11 exp11)
add_subdirectory(14 exp14)

if (EXP02_BUILD)
#    add_compile_options(-D__EXP02_NIGHTCORE_ACROSS_HOST)
#    add_compile_options(-D__EXP02_ENABLE_BREAKDOWN)
    # deps
    add_subdirectory(deps/libmc libmc)
    add_subdirectory(deps/hiredis hiredis)

    add_subdirectory(02 exp02)
endif ()

if (EXP07_BUILD)
    add_subdirectory(07 exp07)
endif ()

if (EXP09_BUILD)
    add_compile_options(-fexceptions)
    add_compile_options(-frtti)

    ## deps
    add_compile_options(-DCPPZMQ_BUILD_TESTS=OFF)
#    set(CPPZMQ_BUILD_TESTS OFF)
    add_subdirectory(deps/zeromq zeromq)

    ## zeromq
    set(CPPZMQ_BUILD_TESTS FALSE)
    set(ZeroMQ_DIR ${CMAKE_CURRENT_BINARY_DIR}/deps/zeromq)
    add_subdirectory(deps/cppzmq cppzmq)

    ## protobuf
    INCLUDE(FindProtobuf)
    FIND_PACKAGE(Protobuf REQUIRED)
    INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})

    add_subdirectory(09 exp09)
endif ()
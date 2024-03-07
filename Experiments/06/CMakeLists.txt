cmake_minimum_required(VERSION 3.16)
project(exp06)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-fexceptions)

set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp)

include_directories(utils/)

set(EXP06_FRONT_END_NAME                        exp06_front_end)
set(EXP06_BACK_END_NAME                         exp06_back_end)

set(EXP06_FRONT_END_SOURCE_FILES                src/0_front_end/front_end.cpp)
set(EXP06_BACK_END_SOURCE_FILES                 src/1_back_end/back_end.cpp)

add_executable(${EXP06_FRONT_END_NAME}          ${EXP06_FRONT_END_SOURCE_FILES})
add_executable(${EXP06_BACK_END_NAME}           ${EXP06_BACK_END_SOURCE_FILES})

target_link_libraries(${EXP06_FRONT_END_NAME}   ${FUNC_WORKER_CPP_LIBRARIES_NAME})
target_link_libraries(${EXP06_BACK_END_NAME}    ${FUNC_WORKER_CPP_LIBRARIES_NAME})
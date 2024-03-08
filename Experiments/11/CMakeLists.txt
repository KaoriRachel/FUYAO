cmake_minimum_required(VERSION 3.16)
project(exp11)

set(CMAKE_CXX_STANDARD 17)
set(EXP11_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_compile_options(-fexceptions)
add_compile_options(-frtti)

if (ENABLE_ACROSS)
    add_compile_options(-D__ENABLE_ACROSS)
endif ()

include_directories(${EXP11_BASE_DIR}/common)
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp)

set(EXP11_RUN_AUDIT   exp11_run_audit)
set(EXP11_MARGIN_BALANCE   exp11_margin_balance)

add_executable(${EXP11_RUN_AUDIT}               src/stage_0/run_audit.cpp)
add_executable(${EXP11_MARGIN_BALANCE}          src/stage_1/marginBalance.cpp)

set(EXP11_COMMON_LIB
        ${FUNC_WORKER_CPP_LIBRARIES_NAME}
        nlohmann_json mc hiredis)

target_link_libraries(${EXP11_RUN_AUDIT}             ${EXP11_COMMON_LIB})
target_link_libraries(${EXP11_MARGIN_BALANCE}        ${EXP11_COMMON_LIB})

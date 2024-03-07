cmake_minimum_required(VERSION 3.16)
project(exp08)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-fexceptions)

# precondition : build Lumine-host
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp)

include_directories(utils/)

set(EXP08_UPSTREAM_NAME                         exp08_upstream)
set(EXP08_DOWNSTREAM_NAME                       exp08_downstream)

set(EXP08_UPSTREAM_SOURCER_FILES                src/upstream/upstream.cpp)
set(EXP08_DOWNSTREAM_SOURCER_FILES              src/downstream/downstream.cpp)

add_executable(${EXP08_UPSTREAM_NAME}           ${EXP08_UPSTREAM_SOURCER_FILES})
add_executable(${EXP08_DOWNSTREAM_NAME}         ${EXP08_DOWNSTREAM_SOURCER_FILES})

target_link_libraries(${EXP08_UPSTREAM_NAME}    ${FUNC_WORKER_CPP_LIBRARIES_NAME})
target_link_libraries(${EXP08_DOWNSTREAM_NAME}  ${FUNC_WORKER_CPP_LIBRARIES_NAME})
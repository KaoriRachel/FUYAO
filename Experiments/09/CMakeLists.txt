cmake_minimum_required(VERSION 3.16)
project(exp09)
set(CMAKE_CXX_STANDARD 17)

# precondition : build Lumine-host
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp)

include_directories(utils/)
include_directories(include/)
include_directories(src-gen/)
include_directories(common/include/)

set(EXP09_START_NAME                          exp09_start)
set(EXP09_START_FOR_FINRA_NAME                exp09_start_for_finra)
set(EXP09_START_FOR_CHAIN_NAME                exp09_start_for_chain)
set(EXP09_END_NAME                            exp09_end)
set(EXP09_REGISTER_NAME                       exp09_register)

set(EXP_COMMON_FILES
        common/include/zmq/zmq_util.cpp
        common/include/zmq/socket_cache.cpp
        src-gen/common.pb.cc
        src-gen/operation.pb.cc
        src-gen/kvs.pb.cc
        src-gen/anna.pb.cc)

set(EXP_COMMON_LIBRARIES libzmq cppzmq ${Protobuf_LIBRARIES})

set(EXP09_START_SOURCER_FILES           src/0_start/start.cpp ${EXP_COMMON_FILES})
set(EXP09_START_FOR_FINRA_SOURCE_FILES  src/0_start/start_for_finra.cpp ${EXP_COMMON_FILES})
set(EXP09_START_FOR_CHAIN_SOURCE_FILES  src/0_start/start_for_chain.cpp ${EXP_COMMON_FILES})
set(EXP09_END_SOURCER_FILES             src/1_end/end.cpp ${EXP_COMMON_FILES})
set(EXP09_REGISTER_SOURCE_FILES         src/2_register/register.cpp ${EXP_COMMON_FILES})

add_executable(${EXP09_START_NAME}                  ${EXP09_START_SOURCER_FILES})
add_executable(${EXP09_START_FOR_FINRA_NAME}        ${EXP09_START_FOR_FINRA_SOURCE_FILES})
add_executable(${EXP09_START_FOR_CHAIN_NAME}        ${EXP09_START_FOR_CHAIN_SOURCE_FILES})
add_executable(${EXP09_END_NAME}                    ${EXP09_END_SOURCER_FILES})
add_executable(${EXP09_REGISTER_NAME}               ${EXP09_REGISTER_SOURCE_FILES})

target_link_libraries(${EXP09_START_NAME}                   ${FUNC_WORKER_CPP_LIBRARIES_NAME} ${EXP_COMMON_LIBRARIES})
target_link_libraries(${EXP09_START_FOR_FINRA_NAME}         ${FUNC_WORKER_CPP_LIBRARIES_NAME} ${EXP_COMMON_LIBRARIES})
target_link_libraries(${EXP09_START_FOR_CHAIN_NAME}         ${FUNC_WORKER_CPP_LIBRARIES_NAME} ${EXP_COMMON_LIBRARIES})
target_link_libraries(${EXP09_END_NAME}                     ${FUNC_WORKER_CPP_LIBRARIES_NAME} ${EXP_COMMON_LIBRARIES})
target_link_libraries(${EXP09_REGISTER_NAME}                ${FUNC_WORKER_CPP_LIBRARIES_NAME} ${EXP_COMMON_LIBRARIES})
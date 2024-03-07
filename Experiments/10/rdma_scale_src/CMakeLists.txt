CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
project(exp10)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-D__WORKER_PYTHON_BUILD)

include_directories(../utils)

set(EXP10_RDMA_SERVER_NAME exp10_rdma_server)
set(EXP10_RDMA_CLIENT_NAME exp10_rdma_client)

set(EXP10_RDMA_CLIENT_FILES
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/base/logging.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/base/thread.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/bit_map.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/infinity.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/queue_pair.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/shared_memory.cpp
        ${EXP10_BASE_DIR}/rdma_scale_src/rdma_rc_client.cpp)

set(EXP10_RDMA_SERVER_FILES
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/base/logging.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/base/thread.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/bit_map.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/infinity.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/queue_pair.cpp
        ${LUMINE_BENCHMARKS_DIR}/Fuyao/lib/rdma/shared_memory.cpp
        ${EXP10_BASE_DIR}/rdma_scale_src/rdma_rc_server.cpp)

set(EXP10_LIBRARIES fmt GSL absl::flags uv_a)

add_executable(${EXP10_RDMA_SERVER_NAME} ${EXP10_RDMA_SERVER_FILES})
add_executable(${EXP10_RDMA_CLIENT_NAME} ${EXP10_RDMA_CLIENT_FILES})

# verbs
set(ENV{PKG_CONFIG_PATH} /usr/lib/x86_64-linux-gnu/pkgconfig)
set(ENV{PKG_CONFIG_EXECUTABLE} /usr/bin/pkg-config)
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBIBVERBS REQUIRED IMPORTED_TARGET libibverbs)

target_link_libraries(${EXP10_RDMA_SERVER_NAME} ${EXP10_LIBRARIES} PkgConfig::LIBIBVERBS)
target_link_libraries(${EXP10_RDMA_CLIENT_NAME} ${EXP10_LIBRARIES} PkgConfig::LIBIBVERBS)
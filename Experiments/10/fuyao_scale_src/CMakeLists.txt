#include_directories(${EXP02_BASE_DIR}/common)

# precondition : build Lumine
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp mc)
include_directories(../utils)

# one: set name
set(EXP10_FN_A                      exp10_fn_a)
set(EXP10_FN_B                     exp10_fn_b)

# three: add executable files
add_executable(${EXP10_FN_A}        ${EXP10_BASE_DIR}/fuyao_scale_src/fn_a/fn_a.cpp)
add_executable(${EXP10_FN_B}       ${EXP10_BASE_DIR}/fuyao_scale_src/fn_b/fn_b.cpp)

# four: link
set(EXP10_FUYAO_COMMON_LIB
        ${FUNC_WORKER_CPP_LIBRARIES_NAME}
        nlohmann_json mc hiredis)

target_link_libraries(${EXP10_FN_A}        ${EXP10_FUYAO_COMMON_LIB})
target_link_libraries(${EXP10_FN_B}       ${EXP10_FUYAO_COMMON_LIB})
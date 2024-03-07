include_directories(${EXP02_BASE_DIR}/utils)
include_directories(${EXP02_BASE_DIR}/common)

set(TEST_EXP05_COMMON_LIB nlohmann_json fmt)

set(TEST_EXP05_JSON                     test_exp05_json)

add_executable(${TEST_EXP05_JSON}           test_json.cpp)

target_link_libraries(${TEST_EXP05_JSON}           ${TEST_EXP05_COMMON_LIB})

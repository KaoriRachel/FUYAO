include_directories(${LUMINE_EXPERIMENTS_DIR}/10/test/utils)

#set(TEST_EXP05_COMMON_LIB nlohmann_json fmt)

set(TEST_EXP10_TIME                     test_exp10_TIME)

add_executable(${TEST_EXP10_TIME}           test_time.cpp)

#target_link_libraries(${TEST_EXP10_TIME}           ${TEST_EXP05_COMMON_LIB})

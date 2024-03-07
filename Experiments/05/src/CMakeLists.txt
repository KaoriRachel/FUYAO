include_directories(${EXP05_BASE_DIR}/common)
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp mc)

set(EXP05_LAST_PX   exp05_last_px)
set(EXP05_MARKET_DATA   exp05_market_data)
set(EXP05_SIDE   exp05_side)
set(EXP05_TRADE_DATE   exp05_trade_date)
set(EXP05_VOLUME  exp05_volume)
set(EXP05_MARGIN_BALANCE   exp05_margin_balance)

add_executable(${EXP05_LAST_PX}        ${EXP05_BASE_DIR}/src/stage_0/lastpx.cpp)
add_executable(${EXP05_MARKET_DATA}        ${EXP05_BASE_DIR}/src/stage_0/marketdata.cpp)
add_executable(${EXP05_SIDE}        ${EXP05_BASE_DIR}/src/stage_0/side.cpp)
add_executable(${EXP05_TRADE_DATE}        ${EXP05_BASE_DIR}/src/stage_0/trddate.cpp)
add_executable(${EXP05_VOLUME}        ${EXP05_BASE_DIR}/src/stage_0/volume.cpp)
add_executable(${EXP05_MARGIN_BALANCE}        ${EXP05_BASE_DIR}/src/stage_1/marginBalance.cpp)

set(EXP05_COMMON_LIB
        ${FUNC_WORKER_CPP_LIBRARIES_NAME}
        nlohmann_json mc hiredis)
target_link_libraries(${EXP05_LAST_PX}        ${EXP05_COMMON_LIB})
target_link_libraries(${EXP05_MARKET_DATA}        ${EXP05_COMMON_LIB})
target_link_libraries(${EXP05_SIDE}        ${EXP05_COMMON_LIB})
target_link_libraries(${EXP05_TRADE_DATE}        ${EXP05_COMMON_LIB})
target_link_libraries(${EXP05_VOLUME}        ${EXP05_COMMON_LIB})
target_link_libraries(${EXP05_MARGIN_BALANCE}        ${EXP05_COMMON_LIB})


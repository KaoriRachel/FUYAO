cmake_minimum_required(VERSION 3.16)
project(exp07)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-fexceptions)
add_compile_options(-frtti)

# precondition : build Lumine-host
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp)

include_directories(utils/)

# opencv
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# tensorflow
LINK_DIRECTORIES(lib/)

include_directories(include/tensorflow/bazel-bin/tensorflow/include)
include_directories(include/tensorflow/bazel-bin/tensorflow/include/src)

set(EXP07_RESIZE_NAME                          exp07_resize)
set(EXP07_LABEL_NAME                           exp07_label)
set(EXP07_AVERAGE_NAME                         exp07_average)

set(EXP07_RESIZE_SOURCER_FILES                 src/0_resize/resize.cpp)
set(EXP07_LABEL_SOURCER_FILES                  src/1_label/label.cpp)
set(EXP07_AVERAGE_SOURCER_FILES                src/2_average/average.cpp)

add_executable(${EXP07_RESIZE_NAME}            ${EXP07_RESIZE_SOURCER_FILES})
add_executable(${EXP07_LABEL_NAME}             ${EXP07_LABEL_SOURCER_FILES})
add_executable(${EXP07_AVERAGE_NAME}           ${EXP07_AVERAGE_SOURCER_FILES})

target_link_libraries(${EXP07_RESIZE_NAME}     ${FUNC_WORKER_CPP_LIBRARIES_NAME} ${OpenCV_LIBS})
target_link_libraries(${EXP07_LABEL_NAME}      ${FUNC_WORKER_CPP_LIBRARIES_NAME} -ltensorflow_cc)
target_link_libraries(${EXP07_AVERAGE_NAME}    ${FUNC_WORKER_CPP_LIBRARIES_NAME})

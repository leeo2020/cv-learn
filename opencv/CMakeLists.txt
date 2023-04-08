# requirement of cmake version
cmake_minimum_required(VERSION 3.14)

# project name
PROJECT(TEST)

# find required opencv
find_package(OpenCV REQUIRED)
# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})
# name of executable file and path of source file
add_executable(test main.cxx)
# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})
# opencv libraries
target_link_libraries(test PRIVATE ${OpenCV_LIBS})
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
# 拷贝 0.jpg 到 build 中
execute_process( COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/0.jpg ${EXECUTABLE_OUTPUT_PATH})

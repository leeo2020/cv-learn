# project name
PROJECT(TEST)
# requirement of cmake version
cmake_minimum_required(VERSION 3.14)

# find required opencv
find_package(OpenCV REQUIRED)
# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})
# name of executable file and path of source file
add_executable(test test.cpp)
# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})
# opencv libraries
target_link_libraries(test PRIVATE ${OpenCV_LIBS})
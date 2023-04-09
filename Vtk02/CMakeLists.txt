cmake_minimum_required(VERSION 3.14)
project(itk01 LANGUAGES CXX)

find_package(ITK REQUIRED)
message("ITK_FOUND: ${ITK_FOUND}")
message("ITK_INCLUDE_DIRS: ${ITK_INCLUDE_DIRS}")
message("ITK_LIBRARY_DIRS: ${ITK_LIBRARY_DIRS}")
message("ITK_LIBRARIES: ${ITK_LIBRARIES}")
# include(${ITK_USE_FILE})
include_directories(${ITK_INCLUDE_DIRS})
link_libraries(${ITK_LIBRARY_DIRS})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${ITK_LIBRARIES})
# 拷贝 0.jpg 到 build 中
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
execute_process( COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/0.jpg ${EXECUTABLE_OUTPUT_PATH})


cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(find_pack LANGUAGES CXX)

# find_package(OpenCV 3.4.2)
# message("OpenCV_FOUND: ${OpenCV_FOUND}")
# message("OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")

# find_package(OpenCV 4.0.1)
# message("OpenCV_FOUND: ${OpenCV_FOUND}")
# message("OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")

# find_package(OpenCV 3.0.0)
# message("OpenCV_FOUND: ${OpenCV_FOUND}")

# find_package(OpenCV 3.0.0 EXACT)
# message("OpenCV_FOUND: ${OpenCV_FOUND}")

# find_package(VTK 8.2)
# message("VTK_FOUND: ${VTK_FOUND}")
# message("VTK_INCLUDE_DIRS: ${VTK_INCLUDE_DIRS}")
# include_directories(${VTK_INCLUDE_DIRS})
# add_executable(main main.cxx)
# link_directories(${VTK_LIBRARY_DIRS})
# target_link_libraries(${PROJECT_NAME} PRIVATE ${VTK_LIBRARIES})

set(VTK_DIR "E:/Cplus/ToolKits/VTK/include/vtk-8.2")
find_package(VTK REQUIRED NO_MODULE)
include(${VTK_USE_FILE})
add_executable(${PROJECT_NAME} main.cxx)
# link_directories(${VTK_LIBRARY_DIRS})
target_link_libraries(${PROJECT_NAME} ${VTK_LIBRARIES})

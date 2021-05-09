cmake_minimum_required(VERSION 3.2)

project(Demo)

set(CMAKE_BUILD_TYPE "RELEASE")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 设置编译后库文件目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# 设置可执行文件目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 查找opencv包
find_package( OpenCV REQUIRED PATHS ${PROJECT_SOURCE_DIR}/libcv/lib/cmake)
# 包含头文件目录
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加编译可执行文件
add_executable(Demo demo.cpp)
# 链接opencv库
target_link_libraries(Demo ${OpenCV_LIBS})
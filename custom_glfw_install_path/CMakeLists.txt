cmake_minimum_required(VERSION 3.2)

project(Demo)

set(CMAKE_BUILD_TYPE "RELEASE")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 设置编译后库文件目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# 设置可执行文件目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package( glfw3 3.3 REQUIRED PATHS ${PROJECT_SOURCE_DIR}/libglfw/lib/cmake)

# include_directories(${GLFW_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加编译可执行文件
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
add_executable(Demo ${SRC})

target_link_libraries(Demo glfw)

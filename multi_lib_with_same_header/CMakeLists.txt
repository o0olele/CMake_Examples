cmake_minimum_required(VERSION 3.2)

project(calc)

set(CMAKE_BUILD_TYPE "RELEASE")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(math)
add_subdirectory(calc)

link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(Calc ${PROJECT_SOURCE_DIR}/calc/main.cpp)
target_link_directories(Calc PRIVATE ${PROJECT_SOURCE_DIR}/calc PRIVATE ${PROJECT_SOURCE_DIR}/math)
target_link_libraries(Calc math calc)
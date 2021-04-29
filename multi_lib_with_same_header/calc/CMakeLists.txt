project(calc)

file(GLOB_RECURSE c_files *.cpp *.c)

add_library(calc STATIC ${c_files})

target_include_directories(calc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(calc PROPERTIES OUTPUT_NAME "calc")

target_link_libraries(calc math)
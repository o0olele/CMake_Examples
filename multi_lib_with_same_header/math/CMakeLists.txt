project(math)

file(GLOB_RECURSE c_files *.cpp *.c)

add_library(math STATIC ${c_files})

target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(math PROPERTIES OUTPUT_NAME "math")
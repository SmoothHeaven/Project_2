#add data_structure_lib and include its header file
add_library(data_structure_lib data_structure_lib.cpp)
target_include_directories(data_structure_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

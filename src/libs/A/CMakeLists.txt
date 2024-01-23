add_library(math_lib math_lib.cpp)
target_include_directories(math_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(math_lib data_structure_lib)

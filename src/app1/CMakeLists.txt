#make app1 an excecutable and include/link the dir and lib
add_executable(app1 app1.cpp)
target_include_directories(app1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src/libs/A) 
target_link_libraries(app1 PRIVATE math_lib)

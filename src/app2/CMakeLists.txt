#make app2 an excecutable and include/link the dir and lib
add_executable(app2 app2.cpp)
include_directories( ${OpenCV_INCLUDE_DIRS} )
target_link_libraries(app2 PRIVATE ${OpenCV_LIBS})




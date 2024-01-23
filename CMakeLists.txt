cmake_minimum_required(VERSION 3.11)
project(Project_2)

find_package(OpenCV REQUIRED)


set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)

set_target_properties(app1 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exc
)

set_target_properties(app2 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exc
)

set_target_properties(math_lib PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

set(source_file "${CMAKE_SOURCE_DIR}/src/app2/img/1.jpg")


set(destination_dir "${CMAKE_BINARY_DIR}/exc/img")

file(COPY ${source_file} DESTINATION ${destination_dir})


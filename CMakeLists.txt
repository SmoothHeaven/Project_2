# Specify the minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.11)

# Set the name of the project and enable C++ support
project(Project_2)

# Find and load settings for an installed copy of OpenCV
find_package(OpenCV REQUIRED)

# Set the C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)

# Add a subdirectory to the build. This directory should contain its own CMakeLists.txt
add_subdirectory(src)

# Set properties for the target named app1. It specifies the directory
# where the executable should be placed after building
set_target_properties(app1 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exc
)

# Similar to the above, but for the target named app2
set_target_properties(app2 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exc
)

# Set properties for a library target named math_lib. It specifies the directory
# where the library should be placed after building
set_target_properties(math_lib PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

# Define a variable to hold the path to an image file used by app2
set(source_file "${CMAKE_SOURCE_DIR}/src/app2/img/1.jpg")

# Define a variable for the destination directory where the image should be copied
set(destination_dir "${CMAKE_BINARY_DIR}/exc/img")

# Copy the specified source file to the specified destination directory
# This is typically done to ensure that runtime resources (like images) are available
# in the same directory as the executable
file(COPY ${source_file} DESTINATION ${destination_dir})

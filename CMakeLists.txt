cmake_minimum_required(VERSION 3.14)
project(OpenGLTemplate)

# Use C++11 standard
set(CMAKE_CXX_STANDARD 11)

# Source files
set(SOURCE_FILES main.cpp)
add_executable(OpenGLTemplate ${SOURCE_FILES})

# Include directories for GLEW and GLFW
find_package(GLEW REQUIRED)
find_package(glfw3 3.4 REQUIRED)
find_package(OpenGL REQUIRED)

# Link the libraries
target_link_libraries(OpenGLTemplate GLEW::GLEW glfw OpenGL::GL)

cmake_minimum_required(VERSION 3.5)

project (glfw-cmake)

find_package(glfw3 3.2 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(glfw-cmake main.cc)

target_include_directories(glfw-cmake PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(glfw-cmake ${OPENGL_gl_LIBRARY} glfw ${GLFW_LIBRARIES})


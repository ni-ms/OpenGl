cmake_minimum_required(VERSION 3.22)
project(OpenGl)

add_executable(OpenGl main.cpp)
target_link_libraries(OpenGl -lfreeglut -lglew32 -lopengl32)

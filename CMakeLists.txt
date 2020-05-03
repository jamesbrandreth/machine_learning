cmake_minimum_required(VERSION 3.0.0)

project(machine_learning)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file (GLOB source_files "./src/*.cpp")

add_executable(ml ${source_files})
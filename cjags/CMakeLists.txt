cmake_minimum_required(VERSION 3.10)
project(cjags)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)

#include_directories("/home/mi/anaconda3/include/python3.6/")
include_directories("/home/mi/anaconda3/include/python3.7m/")
#include_directories("/usr/include/python3.6m")
include_directories("/usr/include/JAGS")
include_directories("/usr/lib/python3/dist-packages/numpy/core/include/")

#include_directories("~/anaconda3/include/python3.7m/")
#include_directories("/home/mi/anaconda3/lib/python3.7/site-packages/numpy/core/include/")
include_directories("/home/mi/anaconda3/include/python3.7m/")
include_directories("/usr/local/include")
#include_directories("/usr/include/python3.6")
#target_link_libraries("/home/mi/anaconda3/lib/")
#link_directories("/home/mi/anaconda3/lib")
#link_directories("/home/mi/anaconda3/lib")


#find_package(PythonInterp)
#find_package(PythonLibs)


add_executable(cjags main.cpp)
#target_link_libraries(cjags main.a)
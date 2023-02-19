cmake_minimum_required(VERSION 3.23)
project (currence_converter)

set(CMAKE_CXX_STANDARD 14)

add_executable(currence_converter src/main.cpp src/Currency_convertor.cpp src/Currency_convertor.h src/Program_start.cpp src/Program_start.h)

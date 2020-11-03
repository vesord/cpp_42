cmake_minimum_required(VERSION 3.17)
project(module08)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp ex00/easyfind.hpp)
add_executable(ex01 ex01/Span.cpp ex01/Span.hpp ex01/main.cpp)
add_executable(ex02 ex02/main.cpp ex02/MutantStack.cpp ex02/MutantStack.hpp)
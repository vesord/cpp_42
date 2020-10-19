cmake_minimum_required(VERSION 3.17)
project(module03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/FragTrap.cpp ex00/FragTrap.hpp ex00/main.cpp)
add_executable(ex01 ex01/FragTrap.cpp ex01/FragTrap.hpp ex01/main.cpp ex01/ScavTrap.cpp ex01/ScavTrap.hpp)
add_executable(ex02 ex02/FragTrap.cpp ex02/FragTrap.hpp
        ex02/ScavTrap.cpp ex02/ScavTrap.hpp
        ex02/ClapTrap.cpp ex02/ClapTrap.hpp
        ex02/main.cpp )
add_executable(ex03 ex03/FragTrap.cpp ex03/FragTrap.hpp
        ex03/ScavTrap.cpp ex03/ScavTrap.hpp
        ex03/ClapTrap.cpp ex03/ClapTrap.hpp
        ex03/main.cpp ex03/NinjaTrap.cpp ex03/NinjaTrap.hpp)
add_executable(ex04 ex04/FragTrap.cpp ex04/FragTrap.hpp
        ex04/ScavTrap.cpp ex04/ScavTrap.hpp
        ex04/ClapTrap.cpp ex04/ClapTrap.hpp
        ex04/main.cpp ex04/NinjaTrap.cpp ex04/NinjaTrap.hpp ex04/SuperTrap.cpp ex04/SuperTrap.hpp)
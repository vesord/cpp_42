cmake_minimum_required(VERSION 3.17)
project(module01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/Pony.cpp ex00/Pony.hpp ex00/main.cpp)
add_executable(ex01 ex01/ex01.cpp)
add_executable(ex02 ex02/Zombie.cpp ex02/Zombie.hpp ex02/ZombieEvent.cpp ex02/ZombieEvent.hpp ex02/main.cpp)
add_executable(ex03 ex03/Zombie.cpp ex03/Zombie.hpp ex03/ZombieHorde.cpp ex03/ZombieHorde.hpp ex03/main.cpp)
add_executable(ex04 ex04/ex04.cpp)
add_executable(ex05 ex05/Brain.cpp ex05/Brain.hpp ex05/main.cpp ex05/Human.cpp ex05/Human.hpp)
add_executable(ex06 ex06/Weapon.cpp ex06/Weapon.hpp ex06/HumanA.cpp ex06/HumanA.hpp ex06/HumanB.cpp ex06/HumanB.hpp ex06/main.cpp)
add_executable(ex07 ex07/main.cpp)
add_executable(ex08 main.cpp)
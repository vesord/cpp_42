cmake_minimum_required(VERSION 3.17)
project(module04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp ex00/Sorcerer.cpp ex00/Sorcerer.hpp ex00/Victim.cpp ex00/Victim.hpp ex00/main.cpp ex00/Peon.cpp ex00/Peon.hpp)
add_executable(ex01 ex01/AWeapon.cpp ex01/AWeapon.hpp
        ex01/PlasmaRifle.cpp ex01/PlasmaRifle.hpp
        ex01/PowerFist.cpp ex01/PowerFist.hpp
        ex01/Enemy.cpp ex01/Enemy.hpp
        ex01/SuperMutant.cpp ex01/SuperMutant.hpp
        ex01/RadScorpion.cpp ex01/RadScorpion.hpp
        ex01/Character.cpp ex01/Character.hpp
        ex01/main.cpp)
add_executable(ex02
        ex02/ISquad.hpp
        ex02/Squad.cpp ex02/Squad.hpp
        ex02/ISpaceMarine.hpp
        ex02/TacticalMarine.cpp ex02/TacticalMarine.hpp
        ex02/AssaultTerminator.cpp ex02/AssaultTerminator.hpp
        ex02/main.cpp)

add_executable(ex03
        ex03/main.cpp
        ex03/AMateria.cpp ex03/AMateria.hpp
        ex03/Ice.cpp ex03/Ice.hpp
        ex03/Cure.cpp ex03/Cure.hpp
        ex03/ICharacter.hpp ex03/Character.cpp ex03/Character.hpp
        ex03/MateriaSource.cpp ex03/MateriaSource.hpp ex03/IMateriaSource.hpp)
cmake_minimum_required(VERSION 3.17)
project(module00)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/megaphone.cpp)
add_executable( ex01 ex01/Contact.class.cpp ex01/Contact.class.hpp
                ex01/Phonebook.class.cpp ex01/Phonebook.class.hpp
                ex01/my_cool_phonebook.cpp)
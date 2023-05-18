cmake_minimum_required(VERSION 3.21)
project(EJ_Poo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(EJ_Poo
        main.cpp
        materias.cpp
        materias.h
        personas.cpp
        personas.h)

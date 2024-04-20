cmake_minimum_required(VERSION 3.26)
project(lab_16 C)

set(CMAKE_C_STANDARD 11)

add_executable(
        libs/data_structures/matrix/matrix.h
        libs/data_structures/matrix/matrix.c
        lab16_solutions.h
        lab16_solutions.c
        main.c)

target_link_libraries(libs)
cmake_minimum_required(VERSION 3.15)
project(battleshipv2 C)

set(CMAKE_C_STANDARD 99)

add_executable(battleshipv2 main.c Board.h Board.c Strings.h Strings.c)
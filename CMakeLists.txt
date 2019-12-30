cmake_minimum_required(VERSION 3.15)
project(battleshipv2 C)

set(CMAKE_C_STANDARD 99)

add_executable(battleshipv2 main.c direction.c direction.h coordinate.h coordinate.c board.h ship.h game.h)
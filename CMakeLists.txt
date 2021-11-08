cmake_minimum_required(VERSION 3.20)
project(Tower_Of_Hanoi C)

set(CMAKE_C_STANDARD 99)

add_executable(Tower_Of_Hanoi main.c towerStruct.c towerStruct.h affichage.c affichage.h)

cmake_minimum_required(VERSION 3.23)
project(mi_app C)

set(CMAKE_C_STANDARD 99)

add_executable(mi_app main.c List.c List.h)

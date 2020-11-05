cmake_minimum_required(VERSION 3.17)
project(BasicDataStructures C)

set(CMAKE_C_STANDARD 11)

add_executable( BasicDataStructures main.c basicDataStructures.h linkedList.c queue.c stack.c)


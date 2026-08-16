cmake_minimum_required(VERSION 4.2)
project(lang C)

set(CMAKE_C_STANDARD 17)

add_executable(lang main.c
        CXobject.c
        CXobject.h
        GC.c
        GC.h
        token.c)

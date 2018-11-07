cmake_minimum_required(VERSION 3.12)
project(QxdAlg C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(QxdAlg
        main.c
        qxddefs.h
        qxdsearching.h
        qxdsorting.h)

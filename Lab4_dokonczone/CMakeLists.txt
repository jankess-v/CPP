cmake_minimum_required(VERSION 3.26)
project(Lab4)

set(CMAKE_CXX_STANDARD 23)

add_executable(Lab4 main.cpp
        Citizen.cpp
        Citizen.h
        City.cpp
        City.h)

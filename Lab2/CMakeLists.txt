cmake_minimum_required(VERSION 3.26)
project(Lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab2 main.cpp
        Employee.cpp
        Employee.h
        Developer.cpp
        Developer.h
        TeamLeader.cpp
        TeamLeader.h
        Bufor.cpp
        Bufor.h
        MeanBufor.cpp
        MeanBufor.h
        MaxBufor.cpp
        MaxBufor.h)

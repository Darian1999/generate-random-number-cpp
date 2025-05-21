cmake_minimum_required(VERSION 3.31)
project(untitled1)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled1 main.cpp
        randomnumbergenerator/rng.h
        randomnumbergenerator/rng.cpp
        generaterandomseed/randomSeedGenerator.cpp
        generaterandomseed/randomSeedGenerator.h)

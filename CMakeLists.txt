# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(untitled SHARED library.cpp library.h User/User.cpp User/User.h FilterBanks.cpp FilterBanks.h Sort/MergeSort.cpp Sort/MergeSort.h)
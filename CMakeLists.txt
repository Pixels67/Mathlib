cmake_minimum_required(VERSION 4.0)
project(Mathlib)

set(CMAKE_CXX_STANDARD 20)

add_library(Mathlib
        include/Mathlib.hpp
        src/Math.hpp
        src/Math.cpp
        src/Vector.hpp
        src/Color.hpp
        src/Matrix.hpp
        src/Quaternion.hpp
)

target_include_directories(Mathlib PUBLIC include src)
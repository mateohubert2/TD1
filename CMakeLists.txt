cmake_minimum_required(VERSION 3.26)
project(TD1)

set(CMAKE_CXX_STANDARD 23)

add_executable(TD1 main.cpp
        date.h
        date.cpp
        client.h
        client.cpp
)

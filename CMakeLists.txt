cmake_minimum_required(VERSION 3.5)
project(Chess)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/window.cpp
    src/piece.cpp)

add_executable(Chess ${SOURCES})
target_link_libraries(Chess sfml-graphics sfml-window sfml-system)

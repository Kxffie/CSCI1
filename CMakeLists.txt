cmake_minimum_required(VERSION 3.15)
project(reactionTime)

set(CMAKE_CXX_STANDARD 17)

add_executable(reactionTime main.cpp)
target_link_libraries(reactionTime PRIVATE gdi32)

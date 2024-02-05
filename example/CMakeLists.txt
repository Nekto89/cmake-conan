cmake_minimum_required(VERSION 3.24)

project(Test LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

find_package(PNG REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE PNG::PNG)

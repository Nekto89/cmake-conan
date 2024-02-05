cmake_minimum_required(VERSION 3.24)

project(FormatOutput LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

find_package(TBB REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE TBB::tbb)

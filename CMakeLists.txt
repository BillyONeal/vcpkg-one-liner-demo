cmake_minimum_required(VERSION 3.20)

project(TestProgram CXX)
find_package(ZLIB REQUIRED)
add_executable(program program.cpp)
target_link_libraries(program PRIVATE ZLIB::ZLIB)

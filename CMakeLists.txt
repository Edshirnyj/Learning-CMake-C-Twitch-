cmake_minimum_required(VERSION 3.10.0)
project(TestProject VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE_EXECUTIBLE main.cpp)

include_directories(Work1)

add_executable(main ${SOURCE_EXECUTIBLE})

add_subdirectory(Work1)

target_link_libraries(main LinearAND)


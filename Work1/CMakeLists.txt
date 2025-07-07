cmake_minimum_required(VERSION 3.10.0)

project(Work1)
set(SOURCE_LIBRARY LinearAND.cpp LinearAND.h)

add_library(LinearAND STATIC ${SOURCE_LIBRARY})
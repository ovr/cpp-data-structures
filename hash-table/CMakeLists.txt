cmake_minimum_required(VERSION 3.5)
project(hash_table)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/HashTable.cpp src/HashTable.h src/Bucket.h)
add_executable(hash_table ${SOURCE_FILES})
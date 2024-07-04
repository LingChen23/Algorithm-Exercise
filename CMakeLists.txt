cmake_minimum_required(VERSION 3.21)
project(AlgorithmExercise)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)		# 指定编译后exe放入bin文件夹中

include_directories(include)
link_directories(lib/x64)

add_executable(AlgorithmExercise

        ComputerTest/07约数的个数.cpp)




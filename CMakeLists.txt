# cmake_minimum_required(VERSION <specify CMake version here>)
project(regexMaster)

set(CMAKE_CXX_STANDARD 14)

add_executable(regexMaster RegexMaster.cpp FileLoader.h FileLoader.cpp FileCreator.h FileCreator.cpp TimeMachine.cpp TimeMachine.h LogHandler.cpp LogHandler.h)
# cmake_minimum_required(VERSION <3.13.4>)
project(regexMaster)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required

add_executable(regexMaster RegexMaster.cpp FileLoader.h FileLoader.cpp FileCreator.h FileCreator.cpp TimeMachine.cpp TimeMachine.h
        LogHandler.cpp LogHandler.h RegexMasterProperties.cpp RegexMasterProperties.h)
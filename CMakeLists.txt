# cmake_minimum_required(VERSION <3.13.4>)
project(regexMaster)

link_libraries(stdc++fs)
set(CMAKE_CXX_STANDARD 17)
set(GCC_COVERAGE_COMPILE_FLAGS "-std=c++17 -lstdc++fs")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required

add_executable(regexMaster RegexMaster.cpp FileLoader.h FileLoader.cpp FileCreator.h FileCreator.cpp TimeMachine.cpp TimeMachine.h
        LogHandler.cpp LogHandler.h RegexMasterProperties.cpp RegexMasterProperties.h RegexMasterPropertiesHandler.cpp RegexMasterPropertiesHandler.h)
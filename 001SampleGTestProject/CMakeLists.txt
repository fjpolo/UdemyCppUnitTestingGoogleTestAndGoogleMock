# https://stackoverflow.com/questions/13703647/how-to-properly-add-include-directories-with-cmake
# https://cmake.org/cmake/help/latest/guide/tutorial/index.html

# Minimum version of CMake
cmake_minimum_required(VERSION 3.12) # version can be different

# Set C++11
#set(CMAKE_CXX_STANDARD 11)

# Find package
#find_package(GTest REQUIRED)
#message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")

# Project name
project(SampleGTestProject) #name of your project

#
# GoogleTest
#
add_subdirectory(googletest)
include_directories(googletest/include) 
set(GTSOURCES 
    tests/test.cpp 
    MyMathLib/MyMathLib.cpp 
    MyMathLib/MyMathLib.h 
    )
# Add executable
add_executable(test ${GTSOURCES})                 # add this executable
#add_executable(test tests/test.cpp )           # add this executable
# Link libraries
target_link_libraries(test PRIVATE gtest) # link google test to this executable

#
# Project
#
set(SOURCES 
    src/main.cpp 
    MyMathLib/MyMathLib.cpp 
    MyMathLib/MyMathLib.h 
    )
# Add Executable
add_executable(main ${SOURCES})


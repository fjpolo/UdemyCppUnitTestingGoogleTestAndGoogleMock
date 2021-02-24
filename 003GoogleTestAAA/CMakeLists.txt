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
project(GoogleTestWithLib) #name of your project

# Add Library
add_library(CommonLibrary LibraryCode/LibraryCode.cpp)


#
# GoogleTest
#
add_subdirectory(googletest)
include_directories(googletest/include) 
set(GTSOURCES 
    tests/testRunner.cpp 
    LibraryCode/LibraryCode.cpp 
    LibraryCode/LibraryCode.hpp 
    )
add_executable(testrunner ${GTSOURCES})                 # add this executable
target_link_libraries(testrunner PRIVATE gtest) # link google test to this executable



#
# Main App
#
# Add executable
add_executable(mainApp src/main.cpp)                 # add this executable
# Link libraries
target_link_libraries(mainApp CommonLibrary) # link google test to this executable


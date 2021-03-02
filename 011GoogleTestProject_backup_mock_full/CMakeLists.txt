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
project(MockFull) #name of your project

# Add Library
add_library(CommonLibrary Libraries/EmployeeManager.cpp Libraries/IDatabaseConnection.cpp)
#add_library(databaseConnectionLibrary Libraries/IDatabaseConnection.cpp)
#add_library(employeeManagerLibrary Libraries/EmployeeManager.cpp)
#set(ACTUAL_LIBRARIES 
#    databaseConnectionLibrary 
#    employeeManagerLibrary 
#    Libraries/Employee.cpp)
set(GTSOURCES 
    tests/testRunner.cpp 
    Libraries/Employee.hpp 
    Libraries/EmployeeManager.cpp 
    Libraries/EmployeeManager.hpp 
    Libraries/IDatabaseConnection.cpp 
    Libraries/IDatabaseConnection.hpp 
    )

#
# GoogleTest
#
add_subdirectory(googletest)
include_directories(googletest/include) 
include_directories(googlemock/include) 
#add_executable(testRunner tests/testRunner.cpp)
add_executable(testRunner ${GTSOURCES}) 
#target_link_libraries(${ACTUAL_LIBRARIES})
target_link_libraries(testRunner PRIVATE gtest) # link google test to this executable
target_link_libraries(testRunner PRIVATE gmock) # link google mock to this executable



#
# Main App
#

# Add executable
add_executable(mainApp src/main.cpp)                 # add this executable
# Link libraries
target_link_libraries(mainApp CommonLibrary)

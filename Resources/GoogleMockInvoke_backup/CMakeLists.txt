cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")

set(GMOCK_LIBRARIES /usr/lib/libgmock.a /usr/lib/libgmock_main.a)

add_library(databaseConnectionLibrary IDatabaseConnection.cpp)
add_library(employeeManagerLibrary EmployeeManager.cpp)

set(ACTUAL_LIBRARIES databaseConnectionLibrary employeeManagerLibrary)

add_executable(mainApp main.cpp)
target_link_libraries(${ACTUAL_LIBRARIES})

add_executable(testRunner testRunner.cpp)
target_link_libraries(testRunner 
    ${GTEST_LIBRARIES} 
    ${GMOCK_LIBRARIES} 
    pthread 
    ${ACTUAL_LIBRARIES})


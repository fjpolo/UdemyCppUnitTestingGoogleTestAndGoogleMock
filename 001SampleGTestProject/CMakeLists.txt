cmake_minimum_required(VERSION 3.12) # version can be different
project(001SampleGTestProject) #name of your project
add_subdirectory(googletest) # add googletest subdirectory
include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>
include_directories(googlemock/include) # this is so we can #include <gtest/gtest.h>
add_executable(main main.cpp) # add this executable
#target_link_libraries(main PRIVATE gtest) # link google test to this executable

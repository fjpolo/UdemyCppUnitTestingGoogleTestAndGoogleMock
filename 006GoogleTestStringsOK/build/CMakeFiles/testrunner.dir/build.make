# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build

# Include any dependencies generated for this target.
include CMakeFiles/testrunner.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testrunner.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testrunner.dir/flags.make

CMakeFiles/testrunner.dir/tests/testRunner.cpp.obj: CMakeFiles/testrunner.dir/flags.make
CMakeFiles/testrunner.dir/tests/testRunner.cpp.obj: CMakeFiles/testrunner.dir/includes_CXX.rsp
CMakeFiles/testrunner.dir/tests/testRunner.cpp.obj: ../tests/testRunner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testrunner.dir/tests/testRunner.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testrunner.dir\tests\testRunner.cpp.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\tests\testRunner.cpp

CMakeFiles/testrunner.dir/tests/testRunner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrunner.dir/tests/testRunner.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\tests\testRunner.cpp > CMakeFiles\testrunner.dir\tests\testRunner.cpp.i

CMakeFiles/testrunner.dir/tests/testRunner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrunner.dir/tests/testRunner.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\tests\testRunner.cpp -o CMakeFiles\testrunner.dir\tests\testRunner.cpp.s

CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.obj: CMakeFiles/testrunner.dir/flags.make
CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.obj: CMakeFiles/testrunner.dir/includes_CXX.rsp
CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.obj: ../LibraryCode/LibraryCode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testrunner.dir\LibraryCode\LibraryCode.cpp.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\LibraryCode\LibraryCode.cpp

CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\LibraryCode\LibraryCode.cpp > CMakeFiles\testrunner.dir\LibraryCode\LibraryCode.cpp.i

CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\LibraryCode\LibraryCode.cpp -o CMakeFiles\testrunner.dir\LibraryCode\LibraryCode.cpp.s

# Object files for target testrunner
testrunner_OBJECTS = \
"CMakeFiles/testrunner.dir/tests/testRunner.cpp.obj" \
"CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.obj"

# External object files for target testrunner
testrunner_EXTERNAL_OBJECTS =

testrunner.exe: CMakeFiles/testrunner.dir/tests/testRunner.cpp.obj
testrunner.exe: CMakeFiles/testrunner.dir/LibraryCode/LibraryCode.cpp.obj
testrunner.exe: CMakeFiles/testrunner.dir/build.make
testrunner.exe: lib/libgtestd.a
testrunner.exe: CMakeFiles/testrunner.dir/linklibs.rsp
testrunner.exe: CMakeFiles/testrunner.dir/objects1.rsp
testrunner.exe: CMakeFiles/testrunner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testrunner.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testrunner.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testrunner.dir/build: testrunner.exe

.PHONY : CMakeFiles/testrunner.dir/build

CMakeFiles/testrunner.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testrunner.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testrunner.dir/clean

CMakeFiles/testrunner.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\006GoogleTestStringsOK\build\CMakeFiles\testrunner.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testrunner.dir/depend


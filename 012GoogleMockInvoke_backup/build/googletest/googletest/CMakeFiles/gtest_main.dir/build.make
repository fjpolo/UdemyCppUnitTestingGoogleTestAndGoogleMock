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
CMAKE_SOURCE_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build

# Include any dependencies generated for this target.
include googletest/googletest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include googletest/googletest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include googletest/googletest/CMakeFiles/gtest_main.dir/flags.make

googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: googletest/googletest/CMakeFiles/gtest_main.dir/flags.make
googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: googletest/googletest/CMakeFiles/gtest_main.dir/includes_CXX.rsp
googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: ../googletest/googletest/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\googletest\googletest\src\gtest_main.cc

googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\googletest\googletest\src\gtest_main.cc > CMakeFiles\gtest_main.dir\src\gtest_main.cc.i

googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\googletest\googletest\src\gtest_main.cc -o CMakeFiles\gtest_main.dir\src\gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/libgtest_maind.a: googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj
lib/libgtest_maind.a: googletest/googletest/CMakeFiles/gtest_main.dir/build.make
lib/libgtest_maind.a: googletest/googletest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\lib\libgtest_maind.a"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest_main.dir\cmake_clean_target.cmake
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gtest_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest/googletest/CMakeFiles/gtest_main.dir/build: lib/libgtest_maind.a

.PHONY : googletest/googletest/CMakeFiles/gtest_main.dir/build

googletest/googletest/CMakeFiles/gtest_main.dir/clean:
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest_main.dir\cmake_clean.cmake
.PHONY : googletest/googletest/CMakeFiles/gtest_main.dir/clean

googletest/googletest/CMakeFiles/gtest_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\googletest\googletest C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest C:\Users\fpolo\Downloads\Franco\Courses\Coursera\GoogleTest\012GoogleMockInvoke_backup\build\googletest\googletest\CMakeFiles\gtest_main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : googletest/googletest/CMakeFiles/gtest_main.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2017.2.3\New folder\CLion 2017.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2017.2.3\New folder\CLion 2017.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\abhisek\CLionProjects\untitled16

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\abhisek\CLionProjects\untitled16\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled16.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled16.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled16.dir/flags.make

CMakeFiles/untitled16.dir/main.cpp.obj: CMakeFiles/untitled16.dir/flags.make
CMakeFiles/untitled16.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\abhisek\CLionProjects\untitled16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled16.dir/main.cpp.obj"
	D:\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled16.dir\main.cpp.obj -c C:\Users\abhisek\CLionProjects\untitled16\main.cpp

CMakeFiles/untitled16.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled16.dir/main.cpp.i"
	D:\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\abhisek\CLionProjects\untitled16\main.cpp > CMakeFiles\untitled16.dir\main.cpp.i

CMakeFiles/untitled16.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled16.dir/main.cpp.s"
	D:\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\abhisek\CLionProjects\untitled16\main.cpp -o CMakeFiles\untitled16.dir\main.cpp.s

CMakeFiles/untitled16.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/untitled16.dir/main.cpp.obj.requires

CMakeFiles/untitled16.dir/main.cpp.obj.provides: CMakeFiles/untitled16.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled16.dir\build.make CMakeFiles/untitled16.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled16.dir/main.cpp.obj.provides

CMakeFiles/untitled16.dir/main.cpp.obj.provides.build: CMakeFiles/untitled16.dir/main.cpp.obj


# Object files for target untitled16
untitled16_OBJECTS = \
"CMakeFiles/untitled16.dir/main.cpp.obj"

# External object files for target untitled16
untitled16_EXTERNAL_OBJECTS =

untitled16.exe: CMakeFiles/untitled16.dir/main.cpp.obj
untitled16.exe: CMakeFiles/untitled16.dir/build.make
untitled16.exe: CMakeFiles/untitled16.dir/linklibs.rsp
untitled16.exe: CMakeFiles/untitled16.dir/objects1.rsp
untitled16.exe: CMakeFiles/untitled16.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\abhisek\CLionProjects\untitled16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled16.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled16.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled16.dir/build: untitled16.exe

.PHONY : CMakeFiles/untitled16.dir/build

CMakeFiles/untitled16.dir/requires: CMakeFiles/untitled16.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/untitled16.dir/requires

CMakeFiles/untitled16.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled16.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled16.dir/clean

CMakeFiles/untitled16.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\abhisek\CLionProjects\untitled16 C:\Users\abhisek\CLionProjects\untitled16 C:\Users\abhisek\CLionProjects\untitled16\cmake-build-debug C:\Users\abhisek\CLionProjects\untitled16\cmake-build-debug C:\Users\abhisek\CLionProjects\untitled16\cmake-build-debug\CMakeFiles\untitled16.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled16.dir/depend


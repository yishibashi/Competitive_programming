# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Typical_DP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Typical_DP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Typical_DP.dir/flags.make

CMakeFiles/Typical_DP.dir/B.cpp.o: CMakeFiles/Typical_DP.dir/flags.make
CMakeFiles/Typical_DP.dir/B.cpp.o: ../B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Typical_DP.dir/B.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Typical_DP.dir/B.cpp.o -c /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/B.cpp

CMakeFiles/Typical_DP.dir/B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Typical_DP.dir/B.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/B.cpp > CMakeFiles/Typical_DP.dir/B.cpp.i

CMakeFiles/Typical_DP.dir/B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Typical_DP.dir/B.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/B.cpp -o CMakeFiles/Typical_DP.dir/B.cpp.s

CMakeFiles/Typical_DP.dir/B.cpp.o.requires:

.PHONY : CMakeFiles/Typical_DP.dir/B.cpp.o.requires

CMakeFiles/Typical_DP.dir/B.cpp.o.provides: CMakeFiles/Typical_DP.dir/B.cpp.o.requires
	$(MAKE) -f CMakeFiles/Typical_DP.dir/build.make CMakeFiles/Typical_DP.dir/B.cpp.o.provides.build
.PHONY : CMakeFiles/Typical_DP.dir/B.cpp.o.provides

CMakeFiles/Typical_DP.dir/B.cpp.o.provides.build: CMakeFiles/Typical_DP.dir/B.cpp.o


# Object files for target Typical_DP
Typical_DP_OBJECTS = \
"CMakeFiles/Typical_DP.dir/B.cpp.o"

# External object files for target Typical_DP
Typical_DP_EXTERNAL_OBJECTS =

Typical_DP: CMakeFiles/Typical_DP.dir/B.cpp.o
Typical_DP: CMakeFiles/Typical_DP.dir/build.make
Typical_DP: CMakeFiles/Typical_DP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Typical_DP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Typical_DP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Typical_DP.dir/build: Typical_DP

.PHONY : CMakeFiles/Typical_DP.dir/build

CMakeFiles/Typical_DP.dir/requires: CMakeFiles/Typical_DP.dir/B.cpp.o.requires

.PHONY : CMakeFiles/Typical_DP.dir/requires

CMakeFiles/Typical_DP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Typical_DP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Typical_DP.dir/clean

CMakeFiles/Typical_DP.dir/depend:
	cd /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug /Users/Kayg/Workspace/Competitive_programming/AtCoder/Typical_DP/cmake-build-debug/CMakeFiles/Typical_DP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Typical_DP.dir/depend

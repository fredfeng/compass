# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yufeng/research/others/compass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yufeng/research/others/compass

# Include any dependencies generated for this target.
include dex-parser-test/CMakeFiles/dex-parser-test.dir/depend.make

# Include the progress variables for this target.
include dex-parser-test/CMakeFiles/dex-parser-test.dir/progress.make

# Include the compile flags for this target's objects.
include dex-parser-test/CMakeFiles/dex-parser-test.dir/flags.make

dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o: dex-parser-test/CMakeFiles/dex-parser-test.dir/flags.make
dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o: dex-parser-test/main_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yufeng/research/others/compass/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o"
	cd /home/yufeng/research/others/compass/dex-parser-test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/dex-parser-test.dir/main_test.o -c /home/yufeng/research/others/compass/dex-parser-test/main_test.cpp

dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dex-parser-test.dir/main_test.i"
	cd /home/yufeng/research/others/compass/dex-parser-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yufeng/research/others/compass/dex-parser-test/main_test.cpp > CMakeFiles/dex-parser-test.dir/main_test.i

dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dex-parser-test.dir/main_test.s"
	cd /home/yufeng/research/others/compass/dex-parser-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yufeng/research/others/compass/dex-parser-test/main_test.cpp -o CMakeFiles/dex-parser-test.dir/main_test.s

dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.requires:
.PHONY : dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.requires

dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.provides: dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.requires
	$(MAKE) -f dex-parser-test/CMakeFiles/dex-parser-test.dir/build.make dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.provides.build
.PHONY : dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.provides

dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.provides.build: dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o

# Object files for target dex-parser-test
dex__parser__test_OBJECTS = \
"CMakeFiles/dex-parser-test.dir/main_test.o"

# External object files for target dex-parser-test
dex__parser__test_EXTERNAL_OBJECTS =

dex-parser-test/dex-parser-test: dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o
dex-parser-test/dex-parser-test: dex-parser-test/CMakeFiles/dex-parser-test.dir/build.make
dex-parser-test/dex-parser-test: lib/libdex-parser.a
dex-parser-test/dex-parser-test: lib/libsail.a
dex-parser-test/dex-parser-test: lib/libutil.a
dex-parser-test/dex-parser-test: dex-parser-test/CMakeFiles/dex-parser-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable dex-parser-test"
	cd /home/yufeng/research/others/compass/dex-parser-test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dex-parser-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dex-parser-test/CMakeFiles/dex-parser-test.dir/build: dex-parser-test/dex-parser-test
.PHONY : dex-parser-test/CMakeFiles/dex-parser-test.dir/build

dex-parser-test/CMakeFiles/dex-parser-test.dir/requires: dex-parser-test/CMakeFiles/dex-parser-test.dir/main_test.o.requires
.PHONY : dex-parser-test/CMakeFiles/dex-parser-test.dir/requires

dex-parser-test/CMakeFiles/dex-parser-test.dir/clean:
	cd /home/yufeng/research/others/compass/dex-parser-test && $(CMAKE_COMMAND) -P CMakeFiles/dex-parser-test.dir/cmake_clean.cmake
.PHONY : dex-parser-test/CMakeFiles/dex-parser-test.dir/clean

dex-parser-test/CMakeFiles/dex-parser-test.dir/depend:
	cd /home/yufeng/research/others/compass && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yufeng/research/others/compass /home/yufeng/research/others/compass/dex-parser-test /home/yufeng/research/others/compass /home/yufeng/research/others/compass/dex-parser-test /home/yufeng/research/others/compass/dex-parser-test/CMakeFiles/dex-parser-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dex-parser-test/CMakeFiles/dex-parser-test.dir/depend


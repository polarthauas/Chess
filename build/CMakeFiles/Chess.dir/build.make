# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/polar/Documentos/c++/Chess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/polar/Documentos/c++/Chess/build

# Include any dependencies generated for this target.
include CMakeFiles/Chess.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Chess.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Chess.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chess.dir/flags.make

CMakeFiles/Chess.dir/src/main.cpp.o: CMakeFiles/Chess.dir/flags.make
CMakeFiles/Chess.dir/src/main.cpp.o: /home/polar/Documentos/c++/Chess/src/main.cpp
CMakeFiles/Chess.dir/src/main.cpp.o: CMakeFiles/Chess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/polar/Documentos/c++/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Chess.dir/src/main.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chess.dir/src/main.cpp.o -MF CMakeFiles/Chess.dir/src/main.cpp.o.d -o CMakeFiles/Chess.dir/src/main.cpp.o -c /home/polar/Documentos/c++/Chess/src/main.cpp

CMakeFiles/Chess.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chess.dir/src/main.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/polar/Documentos/c++/Chess/src/main.cpp > CMakeFiles/Chess.dir/src/main.cpp.i

CMakeFiles/Chess.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chess.dir/src/main.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/polar/Documentos/c++/Chess/src/main.cpp -o CMakeFiles/Chess.dir/src/main.cpp.s

CMakeFiles/Chess.dir/src/window.cpp.o: CMakeFiles/Chess.dir/flags.make
CMakeFiles/Chess.dir/src/window.cpp.o: /home/polar/Documentos/c++/Chess/src/window.cpp
CMakeFiles/Chess.dir/src/window.cpp.o: CMakeFiles/Chess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/polar/Documentos/c++/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Chess.dir/src/window.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chess.dir/src/window.cpp.o -MF CMakeFiles/Chess.dir/src/window.cpp.o.d -o CMakeFiles/Chess.dir/src/window.cpp.o -c /home/polar/Documentos/c++/Chess/src/window.cpp

CMakeFiles/Chess.dir/src/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chess.dir/src/window.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/polar/Documentos/c++/Chess/src/window.cpp > CMakeFiles/Chess.dir/src/window.cpp.i

CMakeFiles/Chess.dir/src/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chess.dir/src/window.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/polar/Documentos/c++/Chess/src/window.cpp -o CMakeFiles/Chess.dir/src/window.cpp.s

CMakeFiles/Chess.dir/src/piece.cpp.o: CMakeFiles/Chess.dir/flags.make
CMakeFiles/Chess.dir/src/piece.cpp.o: /home/polar/Documentos/c++/Chess/src/piece.cpp
CMakeFiles/Chess.dir/src/piece.cpp.o: CMakeFiles/Chess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/polar/Documentos/c++/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Chess.dir/src/piece.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chess.dir/src/piece.cpp.o -MF CMakeFiles/Chess.dir/src/piece.cpp.o.d -o CMakeFiles/Chess.dir/src/piece.cpp.o -c /home/polar/Documentos/c++/Chess/src/piece.cpp

CMakeFiles/Chess.dir/src/piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chess.dir/src/piece.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/polar/Documentos/c++/Chess/src/piece.cpp > CMakeFiles/Chess.dir/src/piece.cpp.i

CMakeFiles/Chess.dir/src/piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chess.dir/src/piece.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/polar/Documentos/c++/Chess/src/piece.cpp -o CMakeFiles/Chess.dir/src/piece.cpp.s

# Object files for target Chess
Chess_OBJECTS = \
"CMakeFiles/Chess.dir/src/main.cpp.o" \
"CMakeFiles/Chess.dir/src/window.cpp.o" \
"CMakeFiles/Chess.dir/src/piece.cpp.o"

# External object files for target Chess
Chess_EXTERNAL_OBJECTS =

Chess: CMakeFiles/Chess.dir/src/main.cpp.o
Chess: CMakeFiles/Chess.dir/src/window.cpp.o
Chess: CMakeFiles/Chess.dir/src/piece.cpp.o
Chess: CMakeFiles/Chess.dir/build.make
Chess: CMakeFiles/Chess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/polar/Documentos/c++/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Chess"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chess.dir/build: Chess
.PHONY : CMakeFiles/Chess.dir/build

CMakeFiles/Chess.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chess.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chess.dir/clean

CMakeFiles/Chess.dir/depend:
	cd /home/polar/Documentos/c++/Chess/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/polar/Documentos/c++/Chess /home/polar/Documentos/c++/Chess /home/polar/Documentos/c++/Chess/build /home/polar/Documentos/c++/Chess/build /home/polar/Documentos/c++/Chess/build/CMakeFiles/Chess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chess.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = "C:\Users\User\Documents\3rd sem\cmake-3.31.5-windows-x86_64\cmake-3.31.5-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\User\Documents\3rd sem\cmake-3.31.5-windows-x86_64\cmake-3.31.5-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\User\Documents\3rd sem\graphics_project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\User\Documents\3rd sem\graphics_project\build"

# Include any dependencies generated for this target.
include CMakeFiles/simulator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simulator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simulator.dir/flags.make

CMakeFiles/simulator.dir/codegen:
.PHONY : CMakeFiles/simulator.dir/codegen

CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/drawing.cxx
CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\drawing.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\drawing.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\drawing.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\drawing.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\drawing.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\drawing.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\drawing.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/misc.cxx
CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\misc.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\misc.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\misc.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\misc.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\misc.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\misc.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\misc.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/mouse.cxx
CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\mouse.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\mouse.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\mouse.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\mouse.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\mouse.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\mouse.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\mouse.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/palette.cxx
CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\palette.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\palette.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\palette.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\palette.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\palette.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\palette.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\palette.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/text.cxx
CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\text.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\text.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\text.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\text.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\text.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\text.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\text.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/winbgi.cxx
CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\winbgi.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\winbgi.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\winbgi.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\winbgi.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\winbgi.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\winbgi.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\winbgi.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/winthread.cxx
CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\winthread.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\winthread.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\winthread.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\winthread.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\winthread.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\winthread.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\winthread.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/dibutil.cxx
CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\dibutil.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\dibutil.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\dibutil.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\dibutil.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\dibutil.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\dibutil.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\dibutil.cxx.s

CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj: CMakeFiles/simulator.dir/flags.make
CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj: CMakeFiles/simulator.dir/includes_CXX.rsp
CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj: C:/Users/User/Documents/3rd\ sem/graphics_project/src/libbgi_src/file.cxx
CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj: CMakeFiles/simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj -MF CMakeFiles\simulator.dir\src\libbgi_src\file.cxx.obj.d -o CMakeFiles\simulator.dir\src\libbgi_src\file.cxx.obj -c "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\file.cxx"

CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\file.cxx" > CMakeFiles\simulator.dir\src\libbgi_src\file.cxx.i

CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Documents\3rd sem\graphics_project\src\libbgi_src\file.cxx" -o CMakeFiles\simulator.dir\src\libbgi_src\file.cxx.s

# Object files for target simulator
simulator_OBJECTS = \
"CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj" \
"CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj"

# External object files for target simulator
simulator_EXTERNAL_OBJECTS =

libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/drawing.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/misc.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/mouse.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/palette.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/text.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/winbgi.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/winthread.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/dibutil.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/src/libbgi_src/file.cxx.obj
libsimulator.a: CMakeFiles/simulator.dir/build.make
libsimulator.a: CMakeFiles/simulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libsimulator.a"
	$(CMAKE_COMMAND) -P CMakeFiles\simulator.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\simulator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simulator.dir/build: libsimulator.a
.PHONY : CMakeFiles/simulator.dir/build

CMakeFiles/simulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\simulator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/simulator.dir/clean

CMakeFiles/simulator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\User\Documents\3rd sem\graphics_project" "C:\Users\User\Documents\3rd sem\graphics_project" "C:\Users\User\Documents\3rd sem\graphics_project\build" "C:\Users\User\Documents\3rd sem\graphics_project\build" "C:\Users\User\Documents\3rd sem\graphics_project\build\CMakeFiles\simulator.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/simulator.dir/depend


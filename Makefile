# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = D:/Programas/Programas/CMAKE/bin/cmake.exe

# The command to remove a file.
RM = D:/Programas/Programas/CMAKE/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/dante/OneDrive/Documentos/NetBeansProjects/lab-3-libro-de-calificaciones-Danter28

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/dante/OneDrive/Documentos/NetBeansProjects/lab-3-libro-de-calificaciones-Danter28

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	D:/Programas/Programas/CMAKE/bin/cmake-gui.exe -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	D:/Programas/Programas/CMAKE/bin/cmake.exe -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:/Users/dante/OneDrive/Documentos/NetBeansProjects/lab-3-libro-de-calificaciones-Danter28/CMakeFiles C:/Users/dante/OneDrive/Documentos/NetBeansProjects/lab-3-libro-de-calificaciones-Danter28/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:/Users/dante/OneDrive/Documentos/NetBeansProjects/lab-3-libro-de-calificaciones-Danter28/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named LibroCalificaciones

# Build rule for target.
LibroCalificaciones: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 LibroCalificaciones
.PHONY : LibroCalificaciones

# fast build rule for target.
LibroCalificaciones/fast:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/build
.PHONY : LibroCalificaciones/fast

LibroCalificaciones.obj: LibroCalificaciones.cpp.obj

.PHONY : LibroCalificaciones.obj

# target to build an object file
LibroCalificaciones.cpp.obj:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/LibroCalificaciones.cpp.obj
.PHONY : LibroCalificaciones.cpp.obj

LibroCalificaciones.i: LibroCalificaciones.cpp.i

.PHONY : LibroCalificaciones.i

# target to preprocess a source file
LibroCalificaciones.cpp.i:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/LibroCalificaciones.cpp.i
.PHONY : LibroCalificaciones.cpp.i

LibroCalificaciones.s: LibroCalificaciones.cpp.s

.PHONY : LibroCalificaciones.s

# target to generate assembly for a file
LibroCalificaciones.cpp.s:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/LibroCalificaciones.cpp.s
.PHONY : LibroCalificaciones.cpp.s

main.obj: main.cpp.obj

.PHONY : main.obj

# target to build an object file
main.cpp.obj:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/main.cpp.obj
.PHONY : main.cpp.obj

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/LibroCalificaciones.dir/build.make CMakeFiles/LibroCalificaciones.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... LibroCalificaciones"
	@echo "... rebuild_cache"
	@echo "... LibroCalificaciones.obj"
	@echo "... LibroCalificaciones.i"
	@echo "... LibroCalificaciones.s"
	@echo "... main.obj"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

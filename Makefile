# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/james/Projects/machine_learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/james/Projects/machine_learning

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/james/Projects/machine_learning/CMakeFiles /home/james/Projects/machine_learning/CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/james/Projects/machine_learning/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named ml

# Build rule for target.
ml: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 ml
.PHONY : ml

# fast build rule for target.
ml/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/build
.PHONY : ml/fast

src/binary_point.o: src/binary_point.cpp.o

.PHONY : src/binary_point.o

# target to build an object file
src/binary_point.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/binary_point.cpp.o
.PHONY : src/binary_point.cpp.o

src/binary_point.i: src/binary_point.cpp.i

.PHONY : src/binary_point.i

# target to preprocess a source file
src/binary_point.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/binary_point.cpp.i
.PHONY : src/binary_point.cpp.i

src/binary_point.s: src/binary_point.cpp.s

.PHONY : src/binary_point.s

# target to generate assembly for a file
src/binary_point.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/binary_point.cpp.s
.PHONY : src/binary_point.cpp.s

src/classified_point.o: src/classified_point.cpp.o

.PHONY : src/classified_point.o

# target to build an object file
src/classified_point.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/classified_point.cpp.o
.PHONY : src/classified_point.cpp.o

src/classified_point.i: src/classified_point.cpp.i

.PHONY : src/classified_point.i

# target to preprocess a source file
src/classified_point.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/classified_point.cpp.i
.PHONY : src/classified_point.cpp.i

src/classified_point.s: src/classified_point.cpp.s

.PHONY : src/classified_point.s

# target to generate assembly for a file
src/classified_point.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/classified_point.cpp.s
.PHONY : src/classified_point.cpp.s

src/eval.o: src/eval.cpp.o

.PHONY : src/eval.o

# target to build an object file
src/eval.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/eval.cpp.o
.PHONY : src/eval.cpp.o

src/eval.i: src/eval.cpp.i

.PHONY : src/eval.i

# target to preprocess a source file
src/eval.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/eval.cpp.i
.PHONY : src/eval.cpp.i

src/eval.s: src/eval.cpp.s

.PHONY : src/eval.s

# target to generate assembly for a file
src/eval.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/eval.cpp.s
.PHONY : src/eval.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/multiclass_perceptron.o: src/multiclass_perceptron.cpp.o

.PHONY : src/multiclass_perceptron.o

# target to build an object file
src/multiclass_perceptron.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/multiclass_perceptron.cpp.o
.PHONY : src/multiclass_perceptron.cpp.o

src/multiclass_perceptron.i: src/multiclass_perceptron.cpp.i

.PHONY : src/multiclass_perceptron.i

# target to preprocess a source file
src/multiclass_perceptron.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/multiclass_perceptron.cpp.i
.PHONY : src/multiclass_perceptron.cpp.i

src/multiclass_perceptron.s: src/multiclass_perceptron.cpp.s

.PHONY : src/multiclass_perceptron.s

# target to generate assembly for a file
src/multiclass_perceptron.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/multiclass_perceptron.cpp.s
.PHONY : src/multiclass_perceptron.cpp.s

src/perceptron.o: src/perceptron.cpp.o

.PHONY : src/perceptron.o

# target to build an object file
src/perceptron.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/perceptron.cpp.o
.PHONY : src/perceptron.cpp.o

src/perceptron.i: src/perceptron.cpp.i

.PHONY : src/perceptron.i

# target to preprocess a source file
src/perceptron.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/perceptron.cpp.i
.PHONY : src/perceptron.cpp.i

src/perceptron.s: src/perceptron.cpp.s

.PHONY : src/perceptron.s

# target to generate assembly for a file
src/perceptron.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/perceptron.cpp.s
.PHONY : src/perceptron.cpp.s

src/point.o: src/point.cpp.o

.PHONY : src/point.o

# target to build an object file
src/point.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/point.cpp.o
.PHONY : src/point.cpp.o

src/point.i: src/point.cpp.i

.PHONY : src/point.i

# target to preprocess a source file
src/point.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/point.cpp.i
.PHONY : src/point.cpp.i

src/point.s: src/point.cpp.s

.PHONY : src/point.s

# target to generate assembly for a file
src/point.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/point.cpp.s
.PHONY : src/point.cpp.s

src/test_result.o: src/test_result.cpp.o

.PHONY : src/test_result.o

# target to build an object file
src/test_result.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/test_result.cpp.o
.PHONY : src/test_result.cpp.o

src/test_result.i: src/test_result.cpp.i

.PHONY : src/test_result.i

# target to preprocess a source file
src/test_result.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/test_result.cpp.i
.PHONY : src/test_result.cpp.i

src/test_result.s: src/test_result.cpp.s

.PHONY : src/test_result.s

# target to generate assembly for a file
src/test_result.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/test_result.cpp.s
.PHONY : src/test_result.cpp.s

src/util.o: src/util.cpp.o

.PHONY : src/util.o

# target to build an object file
src/util.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/util.cpp.o
.PHONY : src/util.cpp.o

src/util.i: src/util.cpp.i

.PHONY : src/util.i

# target to preprocess a source file
src/util.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/util.cpp.i
.PHONY : src/util.cpp.i

src/util.s: src/util.cpp.s

.PHONY : src/util.s

# target to generate assembly for a file
src/util.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ml.dir/build.make CMakeFiles/ml.dir/src/util.cpp.s
.PHONY : src/util.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... ml"
	@echo "... src/binary_point.o"
	@echo "... src/binary_point.i"
	@echo "... src/binary_point.s"
	@echo "... src/classified_point.o"
	@echo "... src/classified_point.i"
	@echo "... src/classified_point.s"
	@echo "... src/eval.o"
	@echo "... src/eval.i"
	@echo "... src/eval.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/multiclass_perceptron.o"
	@echo "... src/multiclass_perceptron.i"
	@echo "... src/multiclass_perceptron.s"
	@echo "... src/perceptron.o"
	@echo "... src/perceptron.i"
	@echo "... src/perceptron.s"
	@echo "... src/point.o"
	@echo "... src/point.i"
	@echo "... src/point.s"
	@echo "... src/test_result.o"
	@echo "... src/test_result.i"
	@echo "... src/test_result.s"
	@echo "... src/util.o"
	@echo "... src/util.i"
	@echo "... src/util.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system


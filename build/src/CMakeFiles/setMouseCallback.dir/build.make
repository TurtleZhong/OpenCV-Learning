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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/m/zxl-opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/m/zxl-opencv/build

# Include any dependencies generated for this target.
include src/CMakeFiles/setMouseCallback.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/setMouseCallback.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/setMouseCallback.dir/flags.make

src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o: src/CMakeFiles/setMouseCallback.dir/flags.make
src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o: ../src/setMouseCallback.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/m/zxl-opencv/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o"
	cd /home/m/zxl-opencv/build/src && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o -c /home/m/zxl-opencv/src/setMouseCallback.cpp

src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.i"
	cd /home/m/zxl-opencv/build/src && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/m/zxl-opencv/src/setMouseCallback.cpp > CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.i

src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.s"
	cd /home/m/zxl-opencv/build/src && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/m/zxl-opencv/src/setMouseCallback.cpp -o CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.s

src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.requires:
.PHONY : src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.requires

src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.provides: src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/setMouseCallback.dir/build.make src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.provides.build
.PHONY : src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.provides

src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.provides.build: src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o

# Object files for target setMouseCallback
setMouseCallback_OBJECTS = \
"CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o"

# External object files for target setMouseCallback
setMouseCallback_EXTERNAL_OBJECTS =

../bin/setMouseCallback: src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o
../bin/setMouseCallback: src/CMakeFiles/setMouseCallback.dir/build.make
../bin/setMouseCallback: /usr/local/lib/libopencv_videostab.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_video.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ts.a
../bin/setMouseCallback: /usr/local/lib/libopencv_superres.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_stitching.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_photo.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ocl.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_objdetect.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_nonfree.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ml.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_legacy.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_imgproc.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_highgui.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_gpu.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_flann.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_features2d.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_core.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_contrib.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_calib3d.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_videostab.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_video.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ts.a
../bin/setMouseCallback: /usr/local/lib/libopencv_superres.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_stitching.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_photo.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ocl.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_objdetect.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_nonfree.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ml.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_legacy.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_imgproc.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_highgui.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_gpu.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_flann.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_features2d.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_core.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_contrib.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_calib3d.so.2.4.11
../bin/setMouseCallback: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/setMouseCallback: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/setMouseCallback: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/setMouseCallback: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/setMouseCallback: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/setMouseCallback: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/setMouseCallback: /usr/local/lib/libopencv_nonfree.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ocl.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_gpu.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_photo.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_objdetect.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_legacy.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_video.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_ml.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_calib3d.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_features2d.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_highgui.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_imgproc.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_flann.so.2.4.11
../bin/setMouseCallback: /usr/local/lib/libopencv_core.so.2.4.11
../bin/setMouseCallback: src/CMakeFiles/setMouseCallback.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/setMouseCallback"
	cd /home/m/zxl-opencv/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/setMouseCallback.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/setMouseCallback.dir/build: ../bin/setMouseCallback
.PHONY : src/CMakeFiles/setMouseCallback.dir/build

src/CMakeFiles/setMouseCallback.dir/requires: src/CMakeFiles/setMouseCallback.dir/setMouseCallback.cpp.o.requires
.PHONY : src/CMakeFiles/setMouseCallback.dir/requires

src/CMakeFiles/setMouseCallback.dir/clean:
	cd /home/m/zxl-opencv/build/src && $(CMAKE_COMMAND) -P CMakeFiles/setMouseCallback.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/setMouseCallback.dir/clean

src/CMakeFiles/setMouseCallback.dir/depend:
	cd /home/m/zxl-opencv/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/m/zxl-opencv /home/m/zxl-opencv/src /home/m/zxl-opencv/build /home/m/zxl-opencv/build/src /home/m/zxl-opencv/build/src/CMakeFiles/setMouseCallback.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/setMouseCallback.dir/depend


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
include src/CMakeFiles/trackMarker.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/trackMarker.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/trackMarker.dir/flags.make

src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o: src/CMakeFiles/trackMarker.dir/flags.make
src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o: ../src/trackMarker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/m/zxl-opencv/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o"
	cd /home/m/zxl-opencv/build/src && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/trackMarker.dir/trackMarker.cpp.o -c /home/m/zxl-opencv/src/trackMarker.cpp

src/CMakeFiles/trackMarker.dir/trackMarker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trackMarker.dir/trackMarker.cpp.i"
	cd /home/m/zxl-opencv/build/src && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/m/zxl-opencv/src/trackMarker.cpp > CMakeFiles/trackMarker.dir/trackMarker.cpp.i

src/CMakeFiles/trackMarker.dir/trackMarker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trackMarker.dir/trackMarker.cpp.s"
	cd /home/m/zxl-opencv/build/src && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/m/zxl-opencv/src/trackMarker.cpp -o CMakeFiles/trackMarker.dir/trackMarker.cpp.s

src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.requires:
.PHONY : src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.requires

src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.provides: src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/trackMarker.dir/build.make src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.provides.build
.PHONY : src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.provides

src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.provides.build: src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o

# Object files for target trackMarker
trackMarker_OBJECTS = \
"CMakeFiles/trackMarker.dir/trackMarker.cpp.o"

# External object files for target trackMarker
trackMarker_EXTERNAL_OBJECTS =

../bin/trackMarker: src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o
../bin/trackMarker: src/CMakeFiles/trackMarker.dir/build.make
../bin/trackMarker: /usr/local/lib/libopencv_videostab.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_video.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ts.a
../bin/trackMarker: /usr/local/lib/libopencv_superres.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_stitching.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_photo.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ocl.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_objdetect.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_nonfree.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ml.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_legacy.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_imgproc.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_highgui.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_gpu.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_flann.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_features2d.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_core.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_contrib.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_calib3d.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_videostab.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_video.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ts.a
../bin/trackMarker: /usr/local/lib/libopencv_superres.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_stitching.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_photo.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ocl.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_objdetect.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_nonfree.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ml.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_legacy.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_imgproc.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_highgui.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_gpu.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_flann.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_features2d.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_core.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_contrib.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_calib3d.so.2.4.11
../bin/trackMarker: /usr/local/lib/libboost_chrono.so
../bin/trackMarker: /usr/local/lib/libboost_unit_test_framework.so
../bin/trackMarker: /usr/local/lib/libg2o_types_slam2d.so
../bin/trackMarker: /usr/local/lib/libg2o_stuff.so
../bin/trackMarker: /usr/local/lib/libopencv_ml.so
../bin/trackMarker: /usr/local/lib/libboost_random.so
../bin/trackMarker: /usr/local/lib/libboost_date_time.so
../bin/trackMarker: /usr/local/lib/libopencv_flann.so
../bin/trackMarker: /usr/local/lib/libboost_thread.so
../bin/trackMarker: /usr/local/lib/libboost_context.so
../bin/trackMarker: /usr/local/lib/libboost_log.so
../bin/trackMarker: /usr/local/lib/libg2o_types_sim3.so
../bin/trackMarker: /usr/local/lib/libboost_filesystem.so
../bin/trackMarker: /usr/local/lib/libopencv_calib3d.so
../bin/trackMarker: /usr/local/lib/libopencv_stitching.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_cholmod.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_structure_only.so
../bin/trackMarker: /usr/local/lib/libopencv_ocl.so
../bin/trackMarker: /usr/local/lib/libopencv_objdetect.so
../bin/trackMarker: /usr/local/lib/libg2o_csparse_extension.so
../bin/trackMarker: /usr/local/lib/libboost_atomic.so
../bin/trackMarker: /usr/local/lib/libboost_serialization.so
../bin/trackMarker: /usr/local/lib/libboost_program_options.so
../bin/trackMarker: /usr/local/lib/libg2o_types_data.so
../bin/trackMarker: /usr/local/lib/libopencv_nonfree.so
../bin/trackMarker: /usr/local/lib/libboost_system.so
../bin/trackMarker: /usr/local/lib/libboost_signals.so
../bin/trackMarker: /usr/local/lib/libboost_timer.so
../bin/trackMarker: /usr/local/lib/libboost_python.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_csparse.so
../bin/trackMarker: /usr/local/lib/libboost_coroutine.so
../bin/trackMarker: /usr/local/lib/libboost_math_c99f.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_dense.so
../bin/trackMarker: /usr/local/lib/libg2o_types_sclam2d.so
../bin/trackMarker: /usr/local/lib/libg2o_cli.so
../bin/trackMarker: /usr/local/lib/libboost_math_tr1.so
../bin/trackMarker: /usr/local/lib/libboost_prg_exec_monitor.so
../bin/trackMarker: /usr/local/lib/libopencv_highgui.so
../bin/trackMarker: /usr/local/lib/libopencv_features2d.so
../bin/trackMarker: /usr/local/lib/libopencv_video.so
../bin/trackMarker: /usr/local/lib/libopencv_videostab.so
../bin/trackMarker: /usr/local/lib/libopencv_gpu.so
../bin/trackMarker: /usr/local/lib/libopencv_superres.so
../bin/trackMarker: /usr/local/lib/libboost_container.so
../bin/trackMarker: /usr/local/lib/libboost_math_tr1l.so
../bin/trackMarker: /usr/local/lib/libg2o_core.so
../bin/trackMarker: /usr/local/lib/libboost_math_c99.so
../bin/trackMarker: /usr/local/lib/libg2o_ext_freeglut_minimal.so
../bin/trackMarker: /usr/local/lib/libg2o_interface.so
../bin/trackMarker: /usr/local/lib/libboost_log_setup.so
../bin/trackMarker: /usr/local/lib/libopencv_photo.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_slam2d_linear.so
../bin/trackMarker: /usr/local/lib/libg2o_types_sba.so
../bin/trackMarker: /usr/local/lib/libopencv_contrib.so
../bin/trackMarker: /usr/local/lib/libopencv_legacy.so
../bin/trackMarker: /usr/local/lib/libg2o_viewer.so
../bin/trackMarker: /usr/local/lib/libboost_regex.so
../bin/trackMarker: /usr/local/lib/libboost_graph.so
../bin/trackMarker: /usr/local/lib/libg2o_opengl_helper.so
../bin/trackMarker: /usr/local/lib/libg2o_interactive.so
../bin/trackMarker: /usr/local/lib/libg2o_parser.so
../bin/trackMarker: /usr/local/lib/libboost_math_tr1f.so
../bin/trackMarker: /usr/local/lib/libboost_math_c99l.so
../bin/trackMarker: /usr/local/lib/libboost_wserialization.so
../bin/trackMarker: /usr/local/lib/libboost_locale.so
../bin/trackMarker: /usr/local/lib/libboost_type_erasure.so
../bin/trackMarker: /usr/local/lib/libg2o_simulator.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_pcg.so
../bin/trackMarker: /usr/local/lib/libopencv_imgproc.so
../bin/trackMarker: /usr/local/lib/libboost_iostreams.so
../bin/trackMarker: /usr/local/lib/libopencv_core.so
../bin/trackMarker: /usr/local/lib/libboost_wave.so
../bin/trackMarker: /usr/local/lib/libg2o_types_icp.so
../bin/trackMarker: /usr/local/lib/libg2o_types_slam3d.so
../bin/trackMarker: /usr/local/lib/libaruco.so
../bin/trackMarker: /usr/local/lib/libg2o_solver_eigen.so
../bin/trackMarker: /usr/local/lib/libg2o_incremental.so
../bin/trackMarker: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/trackMarker: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/trackMarker: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/trackMarker: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/trackMarker: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/trackMarker: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/trackMarker: /usr/local/lib/libopencv_nonfree.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ocl.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_gpu.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_photo.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_objdetect.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_legacy.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_video.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_ml.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_calib3d.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_features2d.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_highgui.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_imgproc.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_flann.so.2.4.11
../bin/trackMarker: /usr/local/lib/libopencv_core.so.2.4.11
../bin/trackMarker: src/CMakeFiles/trackMarker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/trackMarker"
	cd /home/m/zxl-opencv/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trackMarker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/trackMarker.dir/build: ../bin/trackMarker
.PHONY : src/CMakeFiles/trackMarker.dir/build

src/CMakeFiles/trackMarker.dir/requires: src/CMakeFiles/trackMarker.dir/trackMarker.cpp.o.requires
.PHONY : src/CMakeFiles/trackMarker.dir/requires

src/CMakeFiles/trackMarker.dir/clean:
	cd /home/m/zxl-opencv/build/src && $(CMAKE_COMMAND) -P CMakeFiles/trackMarker.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/trackMarker.dir/clean

src/CMakeFiles/trackMarker.dir/depend:
	cd /home/m/zxl-opencv/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/m/zxl-opencv /home/m/zxl-opencv/src /home/m/zxl-opencv/build /home/m/zxl-opencv/build/src /home/m/zxl-opencv/build/src/CMakeFiles/trackMarker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/trackMarker.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ros-industrial/HW8/src/service

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ros-industrial/HW8/build/service

# Include any dependencies generated for this target.
include CMakeFiles/pubvel_toggle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pubvel_toggle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pubvel_toggle.dir/flags.make

CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o: CMakeFiles/pubvel_toggle.dir/flags.make
CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o: /home/ros-industrial/HW8/src/service/src/pubvel_toggle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ros-industrial/HW8/build/service/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o -c /home/ros-industrial/HW8/src/service/src/pubvel_toggle.cpp

CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ros-industrial/HW8/src/service/src/pubvel_toggle.cpp > CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.i

CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ros-industrial/HW8/src/service/src/pubvel_toggle.cpp -o CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.s

CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.requires:

.PHONY : CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.requires

CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.provides: CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.requires
	$(MAKE) -f CMakeFiles/pubvel_toggle.dir/build.make CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.provides.build
.PHONY : CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.provides

CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.provides.build: CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o


# Object files for target pubvel_toggle
pubvel_toggle_OBJECTS = \
"CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o"

# External object files for target pubvel_toggle
pubvel_toggle_EXTERNAL_OBJECTS =

/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: CMakeFiles/pubvel_toggle.dir/build.make
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/libroscpp.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/librosconsole.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/librostime.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /opt/ros/kinetic/lib/libcpp_common.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle: CMakeFiles/pubvel_toggle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ros-industrial/HW8/build/service/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pubvel_toggle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pubvel_toggle.dir/build: /home/ros-industrial/HW8/devel/.private/service/lib/service/pubvel_toggle

.PHONY : CMakeFiles/pubvel_toggle.dir/build

CMakeFiles/pubvel_toggle.dir/requires: CMakeFiles/pubvel_toggle.dir/src/pubvel_toggle.cpp.o.requires

.PHONY : CMakeFiles/pubvel_toggle.dir/requires

CMakeFiles/pubvel_toggle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pubvel_toggle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pubvel_toggle.dir/clean

CMakeFiles/pubvel_toggle.dir/depend:
	cd /home/ros-industrial/HW8/build/service && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ros-industrial/HW8/src/service /home/ros-industrial/HW8/src/service /home/ros-industrial/HW8/build/service /home/ros-industrial/HW8/build/service /home/ros-industrial/HW8/build/service/CMakeFiles/pubvel_toggle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pubvel_toggle.dir/depend


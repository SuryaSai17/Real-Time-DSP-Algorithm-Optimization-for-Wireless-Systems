cmake_minimum_required(VERSION 3.10)

# Project name and version
project(RealTimeDSP VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(main main.cpp dsp_algorithm.cpp test_dsp_algorithm.cpp)

# Link libraries if needed
# target_link_libraries(main PRIVATE some_library)

cmake_minimum_required(VERSION 3.5)

# that's the name of the project
project(JNIDebugTestCLion)

# make sure to add JVM's location
include_directories( ${CMAKE_JAVA_} $ENV{JAVA_HOME}/include $ENV{JAVA_HOME}/include/darwin )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# we want to generate library inside project dir instead of build location
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib)

set(SOURCE_FILES recipeNoD001_HelloWorld.c)

# the target is library, not executable
# setting it with CMake is super easy!
add_library(JNIDebugTestCLion SHARED ${SOURCE_FILES})
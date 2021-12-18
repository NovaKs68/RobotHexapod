# version 3.11 or later of CMake needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(
    VscodeCmakeHello
    VERSION 0.1
    DESCRIPTION "Small CMake example built with VSCode")

add_subdirectory(robotHexapodControl)   # look subdirectory for CMakeLists.txt to process
add_subdirectory(robotHexapodSimulation)
add_subdirectory(apps)
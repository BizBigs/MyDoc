cmake_minimum_required(VERSION 3.16)

project(MyDoc VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY
  ${CMAKE_CURRENT_SOURCE_DIR}/arch)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
  ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/delivery)

# defines targets and sources
add_subdirectory(src)

# enable testing and define tests
#enable_testing()
#add_subdirectory(tests)
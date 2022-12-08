cmake_minimum_required(VERSION 3.16)

project(MyDoc VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/delivery)

find_package(Qt6 REQUIRED COMPONENTS Core)

#qt_standard_project_setup()

add_executable(MyDoc
    main.cpp
)

target_link_libraries(MyDoc PRIVATE Qt6::Core)

set_target_properties(MyDoc PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
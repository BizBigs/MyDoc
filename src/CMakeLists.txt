#qt_standard_project_setup()

include_directories("/include")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(MyDoc
    app.cpp
)

add_subdirectory(MainApplication)

target_link_libraries(MyDoc
    PRIVATE 
        Qt6::Core
        Qt6::Widgets
        MainApplication
)

set_target_properties(MyDoc PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
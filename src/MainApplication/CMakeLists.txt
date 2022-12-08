add_library(MainApplication)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

FILE(GLOB LIB_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*)

target_sources(MainApplication PRIVATE ${LIB_SOURCES})

target_link_libraries(MainApplication PRIVATE Qt6::Core Qt6::Widgets)

target_include_directories(MainApplication PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
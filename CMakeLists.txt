cmake_minimum_required(VERSION 3.25)

project( DOM_creator
    #
    LANGUAGES CXX
    VERSION 0.1.0
)


# --------- Library ---------

add_library(html_parser INTERFACE)
target_include_directories(html_parser INTERFACE src)


# --------- Executable ---------

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE app/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE html_parser)


# --------- Features & Properties ---------

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    #
    CMAKE_EXPORT_COMPILE_COMMANDS ON
)
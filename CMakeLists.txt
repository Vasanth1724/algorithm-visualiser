cmake_minimum_required(VERSION 3.10)

project(AlgorithmVisualiser VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SFML_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/lib/SFML")
set(SFML_LIB_DIR "${CMAKE_SOURCE_DIR}/lib")

include_directories(${SFML_INCLUDE_DIR} include)

file(GLOB_RECURSE SOURCES
    src/*.cpp
)

add_executable(${PROJECT_NAME} main.cpp ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    ${SFML_LIB_DIR}/libsfml-graphics.dylib
    ${SFML_LIB_DIR}/libsfml-window.dylib
    ${SFML_LIB_DIR}/libsfml-system.dylib
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/out/bin)

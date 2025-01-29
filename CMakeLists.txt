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

if (APPLE)
    target_link_libraries(${PROJECT_NAME}
        ${SFML_LIB_DIR}/libsfml-graphics.dylib
        ${SFML_LIB_DIR}/libsfml-window.dylib
        ${SFML_LIB_DIR}/libsfml-system.dylib
    )
elseif (WIN32)  
    target_link_libraries(${PROJECT_NAME}
        ${SFML_LIB_DIR}/sfml-graphics.a
        ${SFML_LIB_DIR}/sfml-window.a
        ${SFML_LIB_DIR}/sfml-system.a
    )
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy   
        ${SFML_LIB_DIR}/sfml-graphics-2.dll
        ${SFML_LIB_DIR}/sfml-window-2.dll
        ${SFML_LIB_DIR}/sfml-system-2.dll
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
    )

endif()

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)

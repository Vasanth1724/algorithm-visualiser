cmake_minimum_required(VERSION 3.10)

# Project name and version
project(AlgorithmVisualiser VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the path to SFML headers and libraries
set(SFML_INCLUDE_DIR "/opt/homebrew/Cellar/sfml@2/2.6.2/include")
set(SFML_LIB_DIR "/opt/homebrew/Cellar/sfml@2/2.6.2/lib")

# Include SFML directories
include_directories(${SFML_INCLUDE_DIR} include)  # Add your project's include folder

# Add the source files
file(GLOB_RECURSE SOURCES
    src/*.cpp
)

# Create the executable
add_executable(${PROJECT_NAME} main.cpp ${SOURCES})

# Link SFML libraries
target_link_libraries(${PROJECT_NAME}
    ${SFML_LIB_DIR}/libsfml-graphics.dylib
    ${SFML_LIB_DIR}/libsfml-window.dylib
    ${SFML_LIB_DIR}/libsfml-system.dylib
)

# Optionally, you can also specify where the output executable goes
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

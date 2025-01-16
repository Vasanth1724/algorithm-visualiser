#include "Window/window.hpp"
#include <iostream>

ApplicationWindow::ApplicationWindow(int width, int height) :
    width(width), height(height) {
    std::cout << "Window created with width: " << width << " and height: " << height << std::endl;
    }
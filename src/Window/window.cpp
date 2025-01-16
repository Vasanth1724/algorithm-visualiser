#include "Window/window.hpp"

#include <iostream>
#include <SFML/Window.hpp>


ApplicationWindow::ApplicationWindow(int width, int height, const char* title) :
    width(width), height(height), title(title){}

void ApplicationWindow::createWindow() {
    sf::Window window(sf::VideoMode(width, height), title);
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }

    std::cout << "Window created with width: " << width << " and height: " << height << std::endl;
}
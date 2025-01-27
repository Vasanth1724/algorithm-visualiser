#include <iostream>
#include <SFML/Graphics.hpp>

#include "Window/window.hpp"
#include "Bar/bar.hpp"



ApplicationWindow::ApplicationWindow(int width, int height, const char* title) :
    width(width), height(height), title(title){}

void ApplicationWindow::createWindow() {
    sf::RenderWindow window(sf::VideoMode(width, height), title);

    while(window.isOpen()) {
        sf::Event event;

        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::White);

        // Draw here

        window.display(); 
    }

    std::cout << "Window created with width: " << width << " and height: " << height << std::endl;
}

void ApplicationWindow::drawBar() {
    Bar bar(100, 100);
}
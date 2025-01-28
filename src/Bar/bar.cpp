#include "Bar/bar.hpp"

#include <iostream>


Bar::Bar(int pos_x, int pos_y, int bar_width, int bar_height): 
        bar(sf::Vector2f(bar_width, bar_height)) {
            bar.setPosition(pos_x, pos_y);
            bar.setOutlineColor(sf::Color::Black);
            bar.setOutlineThickness(2);
            bar.setFillColor(sf::Color::Red);
        

}

const sf::RectangleShape Bar::getBar() {
    return bar;
}
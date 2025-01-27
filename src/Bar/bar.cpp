#include "Bar/bar.hpp"
#include <iostream>

Bar::Bar(int height, int position) : 
    height(height), position(position) {
    std::cout << "Bar created with height: " << height << " and position: " << position << std::endl;
    
}

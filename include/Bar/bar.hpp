#ifndef BAR_HPP
#define BAR_HPP
#include <SFML/Graphics/RectangleShape.hpp>

class Bar {
	public:
		Bar(int pos_x, int pos_y, int bar_width, int bar_height);
		const sf::RectangleShape getBar();

	private:
		sf::RectangleShape bar;
		int pos_x, pos_y, bar_width, bar_height;
		
};

#endif
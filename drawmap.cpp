#include "drawmap.h"
#include <SFML/Graphics.hpp>
drawmap::drawmap() {

	sf::VertexArray map;

}
void drawmap::getmousetomap() {
	
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		mouserightclickdelete();
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {

		mouseleftclickdelete();
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
		mouseleftclickadd();
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
		mouseleftclickadd();
	}
}
void drawmap::mouseleftclickadd() {



	sf::Vector2i addvector = sf::Mouse::getPosition(const Window & relativeTo);
		
	map[addvector.x].color = { 100,100,100 };
	map[addvector.y].color = { 100,100,100 };
}
void drawmap::mouserightclick() {

	sf::Vector2i addvector = sf::Mouse::getPosition(const Window & relativeTo);
	map[addvector.x].color = { 0,0,0 };
	map[addvector.y].color = { 0,0,0 };
}
void drawmap::mouserightclickdelete() {

}
void drawmap::mouseleftclickdelet() {

}
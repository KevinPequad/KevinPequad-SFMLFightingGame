#include "drawmap.h"
#include <SFML/Graphics.hpp>
drawmap::drawmap() {

	sf::VertexArray map;
	
}

void drawmap::mouseleftclickadd(sf::Vector2i addvector2i)
{

	sf::Vertex temp_map;
	sf::Vector2f addvector2f = sf::Vector2f(addvector2i);
	temp_map.position =  addvector2f;
	temp_map.color = { 100,100,100 };
	for (int i; i < map.getVertexCount(); i++) {
		if (map[i].position == addvector2f) {

		}
		else {
			map.append(temp_map);
		}
	}
}
void drawmap::mouserightclickdelete(sf::Vector2i addvector2i) {

	
	sf::Vector2f addvector2f = sf::Vector2f(addvector2i);
	//this is temporary until I find a aglortihim to delete such function.
	map.clear();
}
sf::VertexArray drawmap::returnmap() {
	return map;
}

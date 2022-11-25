
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Vector>
using namespace sf;
class drawmap {

public:
	
	drawmap();
	void mouserightclickdelete(sf::Vector2i addvector2i);
	void mouseleftclickadd(sf::Vector2i addvector2i);
	sf::VertexArray returnmap();
private:
	sf::VertexArray map;
	sf::Vector2i mouseposition;
	sf::RenderWindow drawwindow;

};

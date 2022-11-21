
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Vector>

class drawmap {

private:
	
	drawmap();
	void mouserightclickdelete();
	void mouseleftclickadd();
	void getmousetomap();
	sf::VertexArray returnmap();
protected:
	sf::VertexArray map;
	sf::Vector2i mouseposition;
	

};

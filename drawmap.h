
#include <SFML/Graphics.hpp>

class drawmap {

private:
	drawmap();
	void mouserightclickdelete();
	void mouseleftclickadd();
	void determinemousedraw();
	void getmousecordinates();

protected:
	sf::VertexArray map;
	

};


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


class drawmap {

private:
	drawmap();
	void mouserightclickdelete();
	void mouseleftclickadd(const Window& relativeTo);
	void mouseleftclickdelet();
	void getmousetomap();
	void mouseleftclickadd();
	void mouserightclick();
	void mouseleftclickdelete();
protected:
	sf::VertexArray map;
	

};

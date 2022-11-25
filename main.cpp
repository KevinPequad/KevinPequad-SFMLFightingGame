#include <SFML/Graphics.hpp>
#include "drawmap.h"
#include "player.h"
#include <SFML/Window.hpp>
#include <iostream>

using namespace sf;

int main()
{
    
    
    sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height), "SFML works!");
    drawmap map;
    
    while (window.isOpen())
    {



       
        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                Vector2i addvector = sf::Mouse::getPosition(window);
                map.mouseleftclickadd(addvector);
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
                 Vector2i addvector = sf::Mouse::getPosition(window);
                map.mouserightclickdelete(addvector);
            }
        }

        window.clear();
        window.draw(map.returnmap());
        window.display();
    }

    return 0;
}




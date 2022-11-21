#include <SFML/Graphics.hpp>
#include "drawmap.h"
#include "player.h"
#include <SFML/Window.hpp>
#include <iostream>

using namespace sf;

int main()
{
    
    
    sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height), "SFML works!");
    

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
     
        window.display();
    }

    return 0;
}




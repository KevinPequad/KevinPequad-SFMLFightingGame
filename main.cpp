#include <SFML/Graphics.hpp>
#include "drawmap.h"
#include "player.h"
#include <SFML/Window.hpp>
#include <iostream>

using namespace sf;

int main()
{
    sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}




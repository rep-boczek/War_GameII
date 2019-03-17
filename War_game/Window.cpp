#include "Window.h"

Wiiii::Wiiii()
{

    sf::RenderWindow win(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green)
    //ctor
    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                win.close();
        }

        win.clear();
        win.draw(shape);
        win.display();
    }
}

Wiiii::~Wiiii()
{
    //dtor
}

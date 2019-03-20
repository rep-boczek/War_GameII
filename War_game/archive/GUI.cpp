#include "GUI.h"

#include <iostream>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>


GUI::GUI()
{
    //ctor

}

void GUI::main_window()
{
    sf::RenderWindow win(sf::VideoMode(630, 630), "War_game");
    while (win.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (win.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                win.close();
        }
    }

}

GUI::~GUI()
{
    //dtor
}

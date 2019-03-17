//main.cpp

#include "DispMan.h"

int main(){

    sf::RenderWindow win(sf::VideoMode(200, 200), "SFML works!");
    DispMan exa;
    exa.Render(win);

	return 0;
}

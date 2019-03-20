#ifndef DISPMAN_H
#define DISPMAN_H

#include <iostream>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

class DispMan
{
public:
	DispMan();
	void Render(sf::RenderWindow &window);
	virtual ~DispMan();
private:
	sf::Texture bgTex;
	sf::Sprite  bgSprite;



    protected:
};

#endif // DISPMAN_H

#include "DispMan.h"

DispMan::DispMan(){
    //DispMan();
	bgTex.setSmooth(false);
	bgSprite.setPosition(0, 0);
}

/*void DispMan::setFilePath(std::string filepath){
	bgTex.loadFromFile(filepath);
	bgSprite.setTexture(bgTex);
}*/

void DispMan::Render(sf::RenderWindow &window){
    //sf::RenderWindow &window
	window.draw(bgSprite);

	//sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
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
}

DispMan::~DispMan()
{
    //dtor
}
/*


DisplayManager::DisplayManager(int screenWidth, int screenHeight) {
    screenWidth = screenWidth;
    screenHeight = screenHeight;
    initDisplay();
}
void DisplayManager::initDisplay() {
    // now this is where it becomes tricky
    // normally I would write
    // mainWindow = sf::RenderWindow(sf::VideoMode(screenWidth, screenHeight, 32), "FooBar"));
    // however, this doesn't work, because RenderWindows overload the assignment operator to make sure they're not being copied, as far as I understand
    // this is what I write instead
    sf::RenderWindow mainWindow(sf::VideoMode(screenWidth, screenHeight, 32), "FooBar"));
    // however, this seems to be a local variable, as the RenderWindow gets destructed as soon as I leave the initDisplay() function
}
*/

#ifndef GUI_H
#define GUI_H

#include <iostream>
#include <TGUI/TGUI.hpp>

#include "Game.h"

class GUI
{
    public:
        GUI();

        int mainFrame();
        //void windowDisp(sf::RenderWindow &window);

        int *pos;
        int *pos2;

        virtual ~GUI();

    protected:

    private:

};

#endif // GUI_H

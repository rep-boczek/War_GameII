#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

using namespace sf;



class MainWindow
{

    public:

        MainWindow(RenderWindow &window);
        void add(float x, float y, float velocity);

        virtual ~MainWindow();

    private:

        RenderWindow &mainWindow;


    protected:


};

#endif // MAINWINDOW_H

#include "GUI.h"
#include <windows.h>
#include <time.h>

GUI::GUI()
{
    //ctor

sf::RenderWindow window(sf::VideoMode(1000, 800), "TGUI window");
    window.setFramerateLimit(60);
    tgui::Gui gui(window);

        tgui::Theme theme{"themes/Black.txt"};
        gui.add(tgui::Picture::create("themes/Background.jpg"));

        auto canvas = tgui::Canvas::create({600, 600});
        canvas->setPosition(10, 10);
        canvas->clear();
        canvas->display();
        gui.add(canvas);

        auto labelNinja1 = tgui::Label::create();
        labelNinja1->setRenderer(theme.getRenderer("Label"));
        labelNinja1->setText("Ninja");
        labelNinja1->setPosition(620, 30);
        labelNinja1->setTextSize(16);
        gui.add(labelNinja1);

        auto labelSoldier1 = tgui::Label::create();
        labelSoldier1->setRenderer(theme.getRenderer("Label"));
        labelSoldier1->setText("Soldier");
        labelSoldier1->setPosition(620, 70);
        labelSoldier1->setTextSize(16);
        gui.add(labelSoldier1);

        auto labelArcher1 = tgui::Label::create();
        labelArcher1->setRenderer(theme.getRenderer("Label"));
        labelArcher1->setText("Archer");
        labelArcher1->setPosition(620, 110);
        labelArcher1->setTextSize(16);
        gui.add(labelArcher1);

        auto labelCannon1 = tgui::Label::create();
        labelCannon1->setRenderer(theme.getRenderer("Label"));
        labelCannon1->setText("Cannon");
        labelCannon1->setPosition(620, 150);
        labelCannon1->setTextSize(16);
        gui.add(labelCannon1);

        auto labelRobot10001 = tgui::Label::create();
        labelRobot10001->setRenderer(theme.getRenderer("Label"));
        labelRobot10001->setText("Robot1000");
        labelRobot10001->setPosition(620, 190);
        labelRobot10001->setTextSize(16);
        gui.add(labelRobot10001);

        auto labelRobot20001 = tgui::Label::create();
        labelRobot20001->setRenderer(theme.getRenderer("Label"));
        labelRobot20001->setText("Robot2000");
        labelRobot20001->setPosition(620, 230);
        labelRobot20001->setTextSize(16);
        gui.add(labelRobot20001);

        auto labelNinja2 = tgui::Label::create();
        labelNinja2->setRenderer(theme.getRenderer("Label"));
        labelNinja2->setText("Ninja");
        labelNinja2->setPosition(620, 310);
        labelNinja2->setTextSize(16);
        gui.add(labelNinja2);

        auto labelSoldier2 = tgui::Label::create();
        labelSoldier2->setRenderer(theme.getRenderer("Label"));
        labelSoldier2->setText("Soldier");
        labelSoldier2->setPosition(620, 350);
        labelSoldier2->setTextSize(16);
        gui.add(labelSoldier2);

        auto labelArcher2 = tgui::Label::create();
        labelArcher2->setRenderer(theme.getRenderer("Label"));
        labelArcher2->setText("Archer");
        labelArcher2->setPosition(620, 390);
        labelArcher2->setTextSize(16);
        gui.add(labelArcher2);

        auto labelCannon2 = tgui::Label::create();
        labelCannon2->setRenderer(theme.getRenderer("Label"));
        labelCannon2->setText("Cannon");
        labelCannon2->setPosition(620, 430);
        labelCannon2->setTextSize(16);
        gui.add(labelCannon2);

        auto labelRobot10002 = tgui::Label::create();
        labelRobot10002->setRenderer(theme.getRenderer("Label"));
        labelRobot10002->setText("Robot1000");
        labelRobot10002->setPosition(620, 470);
        labelRobot10002->setTextSize(16);
        gui.add(labelRobot10002);

        auto labelRobot20002 = tgui::Label::create();
        labelRobot20002->setRenderer(theme.getRenderer("Label"));
        labelRobot20002->setText("Robot2000");
        labelRobot20002->setPosition(620, 510);
        labelRobot20002->setTextSize(16);
        gui.add(labelRobot20002);


        auto ninjaBox1 = tgui::EditBox::create();
        ninjaBox1->setRenderer(theme.getRenderer("EditBox"));
        ninjaBox1->setSize(50, 25);
        ninjaBox1->setTextSize(16);
        ninjaBox1->setPosition(740, 25);
        gui.add(ninjaBox1);

        auto soldierBox1 = tgui::EditBox::create();
        soldierBox1->setRenderer(theme.getRenderer("EditBox"));
        soldierBox1->setSize(50, 25);
        soldierBox1->setTextSize(16);
        soldierBox1->setPosition(740, 65);
        gui.add(soldierBox1);

        auto archerBox1 = tgui::EditBox::create();
        archerBox1->setRenderer(theme.getRenderer("EditBox"));
        archerBox1->setSize(50, 25);
        archerBox1->setTextSize(16);
        archerBox1->setPosition(740, 105);
        gui.add(archerBox1);

        auto cannonBox1 = tgui::EditBox::create();
        cannonBox1->setRenderer(theme.getRenderer("EditBox"));
        cannonBox1->setSize(50, 25);
        cannonBox1->setTextSize(16);
        cannonBox1->setPosition(740, 145);
        gui.add(cannonBox1);

        auto robot1000Box1 = tgui::EditBox::create();
        robot1000Box1->setRenderer(theme.getRenderer("EditBox"));
        robot1000Box1->setSize(50, 25);
        robot1000Box1->setTextSize(16);
        robot1000Box1->setPosition(740, 185);
        gui.add(robot1000Box1);

        auto robot2000Box1 = tgui::EditBox::create();
        robot2000Box1->setRenderer(theme.getRenderer("EditBox"));
        robot2000Box1->setSize(50, 25);
        robot2000Box1->setTextSize(16);
        robot2000Box1->setPosition(740, 225);
        gui.add(robot2000Box1);

        auto ninjaBox2 = tgui::EditBox::create();
        ninjaBox2->setRenderer(theme.getRenderer("EditBox"));
        ninjaBox2->setSize(50, 25);
        ninjaBox2->setTextSize(16);
        ninjaBox2->setPosition(740, 305);
        gui.add(ninjaBox2);

        auto soldierBox2 = tgui::EditBox::create();
        soldierBox2->setRenderer(theme.getRenderer("EditBox"));
        soldierBox2->setSize(50, 25);
        soldierBox2->setTextSize(16);
        soldierBox2->setPosition(740, 345);
        gui.add(soldierBox2);

        auto archerBox2 = tgui::EditBox::create();
        archerBox2->setRenderer(theme.getRenderer("EditBox"));
        archerBox2->setSize(50, 25);
        archerBox2->setTextSize(16);
        archerBox2->setPosition(740, 385);
        gui.add(archerBox2);

        auto cannonBox2 = tgui::EditBox::create();
        cannonBox2->setRenderer(theme.getRenderer("EditBox"));
        cannonBox2->setSize(50, 25);
        cannonBox2->setTextSize(16);
        cannonBox2->setPosition(740, 425);
        gui.add(cannonBox2);

        auto robot1000Box2 = tgui::EditBox::create();
        robot1000Box2->setRenderer(theme.getRenderer("EditBox"));
        robot1000Box2->setSize(50, 25);
        robot1000Box2->setTextSize(16);
        robot1000Box2->setPosition(740, 465);
        gui.add(robot1000Box2);

        auto robot2000Box2 = tgui::EditBox::create();
        robot2000Box2->setRenderer(theme.getRenderer("EditBox"));
        robot2000Box2->setSize(50, 25);
        robot2000Box2->setTextSize(16);
        robot2000Box2->setPosition(740, 505);
        gui.add(robot2000Box2);


        sf::CircleShape circle;
        circle.setRadius(2);
        circle.setOutlineColor(sf::Color::Red);
        circle.setOutlineThickness(5);



        int ii=0;


        while (window.isOpen())
        {
            sf::Event event;

            while (window.pollEvent(event))
            {

                ii=0;

        if(ii==0)
            circle.setPosition(10, 20);
        else
            circle.setPosition(20, 40);
        ii=1;

        canvas->clear();
        canvas->draw(circle);



                if (event.type == sf::Event::Closed)
                {gui.removeAllWidgets();
                    window.close();}

                gui.handleEvent(event); // Pass the event to the widgets

            }

            window.clear();
            gui.draw(); // Draw all widgets
            window.display();
        }



}

int GUI::mainFrame()
{



}


GUI::~GUI()
{
    //dtor
}

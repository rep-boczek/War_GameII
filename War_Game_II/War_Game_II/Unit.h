#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <cmath>
#include <vector>
#include <string>






class Unit
{
    public:
        Unit();
        Unit(std::string);
        float M_PI = 3.1416;
        void moveU(int);
        //void attack(int getDamage);
        void attack(int);
        //void sight(std::vector<double>);
        void sight(int);
        void rot (int[]);
        void setHealth(int);
        void setSpeed(int);
        void setDamagep(int);
        int position[2];
        std::vector<double> sightF;

        int speed=2;
        //void moveUnit(int [], int);
        int healthp=100;
        int damagep=10;
         virtual ~Unit();

    protected:






    private:
        //pozniej




};

#endif // UNIT_H

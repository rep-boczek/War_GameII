#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <cmath>
#include <vector>



struct point
{
    int x, y;
};




class Unit
{
    public:
        Unit();
        float M_PI = 3.1416;
        void moveU(int);
        void attack(int getDamage);
        //void sight(std::vector<double>);
        void sight(int);
        void rot (int[]);
        void setHealth(int);
        void setSpeed(int);
        void setDamagep(int);
        int position[2];
        std::vector<double> sightF;
        virtual ~Unit();
        int speed=2;
        void moveUnit(int [], int);
        int healthp=100;
        int damagep=10;

    protected:






    private:
        //pozniej




};

#endif // UNIT_H

#include <iostream>
#include "Unit.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <vector>
#include "gameFunctions.h"

Unit::Unit()
{
    //ctor

}


Unit::Unit(std::string name)
{
    //ctor
    srand(time(NULL));

}

void Unit::moveU(int i)
{
    if(i==0)
    {
        position[0] = rand() % 399 + 100;
        position[1] = rand() % 399 + 100;
        //std::cout<<"RANDOM"<<position[0]<<","<<position[1]<<std::endl;
    }

    else
    {
        moveUnit(position, speed);
    }

}

void Unit::sight(int i)
{

    double y1, y2;
    double r3 = (2*M_PI) + static_cast <double> (rand()) /( static_cast <double> (RAND_MAX/(0-(2*M_PI))));


    if(i==0)
    {
        sightF.push_back(0);
        sightF.push_back(0);
        sightF.push_back(0);
    }
    y1 = position[1]*tan(r3+(M_PI/6));
    y2 = -position[1]*tan(M_PI/6 - r3);
    sightF.at(0) =r3;
    sightF.at(1) =y1;
    sightF.at(2) =y2;
    //std::cout<<"vec= "<<sightF.at(0)<<","<<sightF.at(1)<<","<<sightF.at(2)<<std::endl; // direction, lookLeft, lookRight
}


void Unit::rot (int XY2[])
{
    //std::cout<<"here "<<position[0]-XY2[0]<<std::endl;
    double a = (position[1]-XY2[1])/(position[0]-XY2[0]);
    sightF.at(0) = atan(a);
}

void Unit::attack (int enHealth)
{
    enHealth = enHealth - damagep;
}
void Unit::setHealth(int HP)
{
    healthp = 100;
}
void Unit::setSpeed(int SP)
{
    speed = 2;
}
void Unit::setDamagep(int DP)
{
    damagep = 10;
}

/*int* Unit::position()
{

}*/



Unit::~Unit()
{
    //dtor
}

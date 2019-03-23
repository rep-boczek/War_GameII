#include <iostream>
#include "Unit.h"
#include <stdlib.h>
#include <time.h>
#include "gameFunctions.h"
#include <math.h>
#include <vector>


Unit::Unit()
{
    //ctor
        srand(time(NULL));


}

void Unit::moveU(int* XY)
{



    if(XY[0]==0&&XY[1]==0)
    {
        XY[0] = rand() % 99 + 1;
        XY[1] = rand() % 99 + 1;
        //std::cout<<"RANDOM"<<XY[0]<<","<<XY[1]<<std::endl;

    }

    else
    {
        moveUnit(XY, Unit::speed);
    }

}

void Unit::sight(int* XY, std::vector<double>* sightF)
{
    double y1, y2;
    double r3 = (2*M_PI) + static_cast <double> (rand()) /( static_cast <double> (RAND_MAX/(0-(2*M_PI))));
    y1 = XY[1]*tan(r3+(M_PI/6));
    y2 = -XY[1]*tan(M_PI/6 - r3);
    sightF -> at(0) = r3;
    sightF -> at(1) = y1;
    sightF -> at(2) = y2;
    //std::cout<<"vec= "<<sightF->at(0)<<","<<sightF->at(1)<<","<<sightF->at(2)<<std::endl; // direction, lookLeft, lookRight
}

void Unit::rot (int* XY1, int* XY2, std::vector<double>* sightF)
{
    double a = (XY1[1]-XY2[1])/(XY1[0]-XY2[0]);
    sightF -> at(0) = atan(a);
}

void Unit::attack (int getDamage)
{
    healthp =- getDamage;
}





/*int* Unit::position()
{

}*/



Unit::~Unit()
{
    //dtor
}

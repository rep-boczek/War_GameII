#include <iostream>
#include "Unit.h"
#include <stdlib.h>
#include <time.h>
#include <Coordinates.h>>



Unit::Unit()
{
    //ctor


}

int* Unit::startPosition()
{
    int XY[2];
    XY[0] = Coordinates::pickRan();
    XY[1] = Coordinates::pickRan();

    return XY;
}



Unit::~Unit()
{
    //dtor
}

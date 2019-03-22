#include <iostream>
#include "Unit.h"
#include <stdlib.h>
#include <time.h>
#include <Coordinates.h>
#include "gameFunctions.h"


Unit::Unit()
{
    //ctor


}

void Unit::moveU(int* XY)
{


    if(XY[0]==0&&XY[1]==0)
    {
        XY[0] = Coordinates::pickRan();
        XY[1] = Coordinates::pickRan();
    }
    else
    {
        moveUnit(XY, Unit::speed);
    }

}


/*int* Unit::position()
{

}*/



Unit::~Unit()
{
    //dtor
}

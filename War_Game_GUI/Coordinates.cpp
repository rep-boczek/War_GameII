#include "Coordinates.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>


Coordinates::Coordinates()
{
    //ctor
}

int Coordinates::pickRan()
{

    int c = rand() % 99 + 1;
    return c;
}


/*int* Coordinates::moveU()
{


}*/


Coordinates::~Coordinates()
{
    //dtor
}

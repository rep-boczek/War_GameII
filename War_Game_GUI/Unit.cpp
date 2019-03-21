#include "Unit.h"
#include <stdlib.h>
#include <time.h>


Unit::Unit()
{
    //ctor
    srand (time(NULL));
}

    void Unit::position ()
    {
        int x = rand() % 99 + 1;
        int y = rand() % 399 + 1;
        std::cout<<"position "<<x<<","<<y<<std::endl;
    }


Unit::~Unit()
{
    //dtor
}

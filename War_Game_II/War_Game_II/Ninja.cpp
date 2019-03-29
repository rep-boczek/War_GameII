#include "Ninja.h"

Ninja::Ninja()
{
    //ctor
}

Ninja::Ninja(std::string name)
{
    //ctor
}

void Ninja::special(Unit D)
{

    position[0] = D.position[0]+1;
    position[1] = D.position[1]+1;

}

Ninja::~Ninja()
{
    //dtor
}

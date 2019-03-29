#include "Human.h"

Human::Human()
{
    //ctor
}

Human::Human(std::string name)
{
    //ctor
}

bool Human::dodge(Unit U)
{
    int p = rand() % 100;
    if(p<30)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Human::special(Unit)
{

}


Human::~Human()
{
    //dtor
}

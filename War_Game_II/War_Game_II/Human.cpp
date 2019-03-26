#include "Human.h"

Human::Human()
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
void Human::special()

{

}

Human::~Human()
{
    //dtor
}

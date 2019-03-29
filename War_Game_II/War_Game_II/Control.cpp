#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "Control.h"

Control::Control()
{
   //ctor



}

int Control::calc_distance (Unit A, Unit B)
{
    return sqrt(pow(A.position[0]-B.position[0],2)+pow(A.position[1]-B.position[1],2));
}

bool Control::DoIseeEnemy(Unit A, std::vector<Unit> *F, int Number)
{
    int x=0;
    for (int i=0; i<Number; i++)
    {
        if(F->at(i).position[1]>A.sightF.at(1)&&F->at(i).position[1]<A.sightF.at(2))
        {std::cout<<"sightF "<<A.sightF.at(1)<<std::endl;
            x++;}
    }
    if (x!=0)
        return true;
    else
        return false;

}

int Control::closestEnemy (Unit A, std::vector<Unit> *F, int Number)
{
    int X= 0;
    int Min = 400;
    for (int i=0; i<Number; i++)
    {

        if(F->at(i).position[1]>A.sightF.at(1)&&F->at(i).position[1]<A.sightF.at(2))
        {
            if(sqrt(pow(A.position[0]-F->at(i).position[0],2)+pow(A.position[1]-F->at(i).position[1],2)) < 400)
                {X = i;
                Min = sqrt(pow(A.position[0]-F->at(i).position[0],2)+pow(A.position[1]-F->at(i).position[1],2));}
        }
    }
    std::cout<<"X = "<<X<<std::endl;
    return X;

}


/*void Control::state(int* arr)
{
    Unit p;
    arr = p.startPosition();
}*/













Control::~Control()
{
    //dtor
}









#include "Manager.h"

Manager::Manager()
{
    //ctor

    int iter = 0;
    GUI Gu;
    Gu.mainFrame();

    /*Game Ga(iter);
    while(1==1)
    {


        std::cout<<"iter w manager"<<iter<<std::endl;
        Ga.Play(iter);

        if(Ga.nOfUnitsP1==0 || Ga.nOfUnitsP2 ==0)
        {break;}
        iter++;
    }*/
}

Manager::~Manager()
{
    //dtor
}

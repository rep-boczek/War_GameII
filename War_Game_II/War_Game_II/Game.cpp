#include "Game.h"
#include "Unit.h"
#include <windows.h>
#include <time.h>
#include "Formation.h"
#include "Control.h"


Game::Game()
{
    //ctor


    int nOfUnitsP1 = 2;
    int nOfUnitsP2 = 2;

    Unit P1[nOfUnitsP1];
    Unit P2[nOfUnitsP2];

    Unit A;
    Unit AA;
    Unit B;
    Unit BB;

    P1[0] = A;
    P1[1] = AA;
    P2[0] = B;
    P2[1] = BB;

    std::vector<Unit> P1v;
    std::vector<Unit> P2v;

    Control K;
    int iter = 0;
    int x;

    while(1==1)
    {

            for(int i =0; i<2; i++)
            {
             P1[i].moveU(iter);
             P1[i].sight(iter);
             P2[i].moveU(iter);
             P2[i].sight(iter);
            std::cout<<"P1 "<<P1[i].position[0]<<" , "<<P1[i].position[1]<<std::endl;
            std::cout<<"P2 "<<P2[i].position[0]<<" , "<<P2[i].position[1]<<std::endl;
            }
            for(int i = 0; i<2; i++)
            {
            if(K.DoIseeEnemy(P1[i],P2,nOfUnitsP2) == true)
            {
                x = K.closestEnemy(P1[i], P2, nOfUnitsP2);
                P1[i].rot(P2[x].position);
                std::cout<<"! P1["<<i<<"] hit P2["<<x<<"]"<<std::endl;
                P2[x].healthp=P2[x].healthp -10;
                std::cout<<"Health P2["<<x<<"]="<<P2[x].healthp<<std::endl;
                if(P2[x].healthp<=0)
                {
                    for (int j = x; j <= nOfUnitsP2; ++j)
                        if(nOfUnitsP2 == 1)
                            {
                                nOfUnitsP2 =0;
                                std::cout<<"P1 WON!!!"<<std::endl;
                            break;}
                        else
                            {P2[j] = P2[j + 1];
                            nOfUnitsP2 = nOfUnitsP2 - 1;}
                }
            }
           if(K.DoIseeEnemy(P2[i],P1,nOfUnitsP1) == true)
            {
                x=K.closestEnemy(P2[i], P1, nOfUnitsP1);
                P2[i].rot(P1[x].position);
                std::cout<<"! P2["<<i<<"] hit P1["<<x<<"]"<<std::endl;
                P1[x].healthp=P1[x].healthp -10;
                std::cout<<"Health P1["<<x<<"]="<<P1[x].healthp<<std::endl;
                if(P1[x].healthp<=0)
                {
                    for (int j = x; j <= nOfUnitsP1; ++j)
                        if(nOfUnitsP1 == 1)
                            {
                                nOfUnitsP1 =0;
                                std::cout<<"P2 WON!!!"<<std::endl;
                            break;}
                        else
                            {P1[j] = P1[j + 1];
                            nOfUnitsP1 = nOfUnitsP1 - 1;}
                }
            }

            }
            Sleep(1000);
            iter++;
            if(nOfUnitsP1==0 || nOfUnitsP2 ==0)
                break;
    }
}



Game::~Game()
{
    //dtor
}

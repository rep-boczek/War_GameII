#include "Game.h"

Game::Game()
{}
Game::Game(int iter, int n1, int n2, std::vector<Unit> *P1v, std::vector<Unit> *P2v)
{

    //ctor
    nOfUnitsP1 = n1;
    nOfUnitsP2 = n2;
    std::string unitname="Unit1";
    std::string str;
    for(int i=0; i<nOfUnitsP1; i++)
    {
        str= std::to_string(i);
        unitname = unitname + str;
        P1v.push_back(Unit(unitname));
        str.clear();
        unitname.clear();
    }


    for(int i=0; i<nOfUnitsP2; i++)
    {
        unitname="Unit2";
        str= std::to_string(i);
        unitname = unitname + str;
        P2v.push_back(Unit(unitname));
        str.clear();
        unitname.clear();
    }

    std::cout<<"Game "<<P1v.size()<<std::endl;
}

void Game::disp()
{
   std::cout<<"here Disp"<<P1v.size()<<std::endl;
}

void Game::Play(int iter, std::vector<Unit> *P1v, std::vector<Unit> *P2v)
{

        Sleep(2000);
        for(int i =0; i<nOfUnitsP1; i++)
            {

                std::cout<<"here Play"<<P1v.size()<<std::endl;
                std::cout<<"here3"<<P1v.at(i).position[0]<<std::endl;
                P1v.at(i).moveU(iter);
                std::cout<<"here"<<P1v.at(i).position[0]<<std::endl;
                P1v.at(i).sight(iter);
                std::cout<<"P1 m/s ["<<i<<"]= "<<P1v.at(i).position[0]<<" , "<<P1v.at(i).position[1]<<std::endl;
            }
        for(int i =0; i<nOfUnitsP2; i++)
            {
                P2v.at(i).moveU(iter);
                P2v.at(i).sight(iter);
                std::cout<<"P2 m/s ["<<i<<"]= "<<P2v.at(i).position[0]<<" , "<<P2v.at(i).position[1]<<std::endl;
            }

        for(int i = 0; i<nOfUnitsP1; i++)
            {

            if(K.DoIseeEnemy(P1v.at(i),P2v,nOfUnitsP2) == true)
            {
                x = K.closestEnemy(P1v.at(i), P2v, nOfUnitsP2);
                std::cout<<"P1 d"<<P1v.at(i).position[0]<<std::endl;
                std::cout<<"P2 d"<<P2v.at(x).position[0]<<std::endl;
                P1v.at(i).rot(P2v.at(x).position);
                std::cout<<"! P1["<<i<<"] hit P2["<<x<<"]"<<std::endl;
                P2v.at(x).healthp=P2v.at(x).healthp -10;
                std::cout<<"Health P2["<<x<<"]="<<P2v.at(x).healthp<<std::endl;
                if(P2v.at(x).healthp<=0)
                {
                    P2v.erase(P2v.begin()+x);
                    nOfUnitsP2 = nOfUnitsP2 - 1;
                }
            }
            if(nOfUnitsP2 == 0)
            {
                std::cout<<"Health P1 won!"<<std::endl;
                break;
            }
           if(K.DoIseeEnemy(P2v.at(i),P1v,nOfUnitsP1) == true)
            {
                x=K.closestEnemy(P2v.at(i), P1v, nOfUnitsP1);
                P2v.at(i).rot(P1v.at(x).position);
                std::cout<<"! P2["<<i<<"] hit P1["<<x<<"]"<<std::endl;
                P1v.at(x).healthp=P1v.at(x).healthp -10;
                std::cout<<"Health P1["<<x<<"]="<<P1v.at(x).healthp<<std::endl;
                if(P1v.at(x).healthp<=0)
                {
                    P1v.erase(P1v.begin()+x);
                    nOfUnitsP1 = nOfUnitsP1 - 1;
                }
            }

            if(nOfUnitsP1 == 0)
            {
                std::cout<<"Health P2 won!"<<std::endl;
                break;
            }

            }




}


Game::~Game()
{
    //dtor
}

#include "Game.h"

Game::Game()
{}
Game::Game(int iter, int n1, int n2, std::vector<Unit> *P1v, std::vector<Unit> *P2v)
{

    //ctor
    nOfUnitsP1 = n1;
    nOfUnitsP2 = n2;
    std::string unitname="";
    std::string str;
    P1v->clear();
    for(int i=0; i<nOfUnitsP1; i++)
    {
        std::string unitname="Unit1";
        str= std::to_string(i);
        unitname = unitname + str;
        P1v->push_back(Unit(unitname));
        str.clear();
        unitname.clear();
    }

    P2v->clear();
    for(int i=0; i<nOfUnitsP2; i++)
    {
        unitname="Unit2";
        str= std::to_string(i);
        unitname = unitname + str;
        P2v->push_back(Unit(unitname));
        str.clear();
        unitname.clear();

    }


}

void Game::disp()
{
   //std::cout<<"here Disp "<<P1v.size()<<std::endl;
}

void Game::Play(int iter, std::vector<Unit> *P1v, std::vector<Unit> *P2v)
{
        for(int i =0; i<nOfUnitsP1; i++)
            {

                std::cout<<"here Play "<<P1v->size()<<std::endl;
                P1v->at(i).moveU(iter);
                P1v->at(i).sight(iter);
            }
        for(int i =0; i<nOfUnitsP2; i++)
            {
                P2v->at(i).moveU(iter);
                P2v->at(i).sight(iter);
            }

        for(int i = 0; i<nOfUnitsP1; i++)
            {

            if(K.DoIseeEnemy(P1v->at(i),P2v,nOfUnitsP2) == true)
            {
                x = K.closestEnemy(P1v->at(i), P2v, nOfUnitsP2);
                P1v->at(i).rot(P2v->at(x).position);
                std::cout<<"! P1["<<i<<"] hit P2["<<x<<"]"<<std::endl;
                P2v->at(x).healthp=P2v->at(x).healthp -10;
                std::cout<<"Health P2["<<x<<"]="<<P2v->at(x).healthp<<std::endl;
                std::cout<<"x "<<x<<std::endl;
                if(P2v->at(x).healthp<=0)
                {
                    std::cout<<"nOfUnitsP2 before erase "<<P2v->size()<<std::endl;
                    std::cout<<"x "<<x<<std::endl;
                    P2v->erase(P2v->begin()+x);
                    nOfUnitsP2 = nOfUnitsP2 - 1;
                    std::cout<<"nOfUnitsP2 after erase "<<P2v->size()<<std::endl;
                }
            }
            if(nOfUnitsP2 == 0)
            {
                std::cout<<"Health P1 won!"<<std::endl;
                break;
            }
            std::cout<<"i! "<<i<<std::endl;
           if(K.DoIseeEnemy(P2v->at(i),P1v,nOfUnitsP1) == true)
            {
                x=K.closestEnemy(P2v->at(i), P1v, nOfUnitsP1);
                P2v->at(i).rot(P1v->at(x).position);
                std::cout<<"! P2["<<i<<"] hit P1["<<x<<"]"<<std::endl;
                P1v->at(x).healthp=P1v->at(x).healthp -10;
                std::cout<<"Health P1["<<x<<"]="<<P1v->at(x).healthp<<std::endl;
                std::cout<<"x "<<x<<std::endl;
                if(P1v->at(x).healthp<=0)
                {
                    std::cout<<"nOfUnitsP1 before erase "<<P1v->size()<<std::endl;
                    std::cout<<"x "<<x<<std::endl;
                    std::cout<<"P1v size "<<P1v->size()<<std::endl;
                    P1v->erase(P1v->begin()+x);
                    nOfUnitsP1 = nOfUnitsP1 - 1;
                    std::cout<<"nOfUnitsP1 after erase "<<P1v->size()<<std::endl;
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

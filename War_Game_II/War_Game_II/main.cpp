#include <iostream>
#include "Unit.h"
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#include <vector>

int main(void)
{

    int arr[2]={0,0};
    int* a = arr;
    int arrx[2]={0,0};
    int* ax = arrx;
    std::vector<double> *s = new std::vector<double>(3);
    std::vector<double> *sx = new std::vector<double>(3);
    Unit U;
    U.speed = 2;
    U.healthp = 100;
    Unit X;
    X.speed = 3;
    X.healthp = 100;
    while(1==1)
    {
        U.moveU(a);
        U.sight(a, s);
        X.moveU(ax);
        X.sight(ax, sx);
        std::cout<<"X "<<ax[0]<<","<<ax[1]<<" U "<<a[0]<<","<<a[1]<<std::endl;
        //std::cout<<"Xvec= "<<sx->at(0)<<","<<sx->at(1)<<","<<sx->at(2)<<std::endl;
        std::cout<<"U health "<<U.healthp<<std::endl;
        std::cout<<"X health "<<X.healthp<<std::endl;
        std::cout<<"Xvec= "<<sx->at(0)<<std::endl;
        if(a[1]>sx->at(1)&&a[1]<sx->at(2))
        {
            std::cout<<"Xvec= "<<sx->at(0)<<std::endl;
            X.rot(a,ax,sx);
            std::cout<<"bang!"<<std::endl;
            U.healthp=U.healthp -10;
            if(U.healthp<=0)
            {
                std::cout<<"X Won!"<<std::endl;
                break;
            }
        }
        if(ax[1]>s->at(1)&&ax[1]<s->at(2))
        {
            std::cout<<"bang!"<<std::endl;
            X.healthp=X.healthp-10;
            if(X.healthp<=0)
            {
                std::cout<<"U Won!"<<std::endl;
                break;
            }
        }
        Sleep(1000);

    }
}

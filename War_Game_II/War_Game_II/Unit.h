#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <cmath>

#include <vector>



struct point
{
    int x, y;
};


class Unit
{
    public:
        Unit();
        int* startPosition();
        void moveU(int *);
        int healthp;
        int damagep;
        int speed;

        int position[2];

        void attack(int getDamage);
        void sight(int *, std::vector<double>*);
        void rot (int *, int *, std::vector<double>*);
        void calc_distance (int *, int *, std::vector<double>*);


        virtual ~Unit();
    protected:



    private:
        //pozniej


};

#endif // UNIT_H

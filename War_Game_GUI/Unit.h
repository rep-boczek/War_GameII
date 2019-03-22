#ifndef UNIT_H
#define UNIT_H

#include <iostream>
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
        void calc_distance (float dis);
        int position[2];

        void attack();



        virtual ~Unit();
    protected:



    private:
        //pozniej


};

#endif // UNIT_H

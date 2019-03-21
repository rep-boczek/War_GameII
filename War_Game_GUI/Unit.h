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
        virtual ~Unit();

    protected:

    int healthp;
        int damagep;
        int speed;
        void calc_distance (float dis);

        void move();
        void attack();

    private:
        //pozniej


};

#endif // UNIT_H

#ifndef CONTROL_H
#define CONTROL_H

#include "Formation.h"
#include "Unit.h"

class Control
{
    public:
        Control();
        virtual ~Control();
        int calc_distance (Unit, Unit);
        int closestEnemy (Unit, Unit[], int);
        bool DoIseeEnemy (Unit, Unit[], int);
    protected:

    private:
};

#endif // CONTROL_H

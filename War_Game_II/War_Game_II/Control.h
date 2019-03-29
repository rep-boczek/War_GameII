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
        int closestEnemy (Unit, std::vector<Unit>*, int);
        bool DoIseeEnemy (Unit, std::vector<Unit>*, int);
    protected:

    private:
};

#endif // CONTROL_H

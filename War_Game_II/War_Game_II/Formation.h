#ifndef FORMATION_H
#define FORMATION_H

#include "Unit.h"

class Formation
{
    public:
        Formation();


        int formationCount = 5;
        void setLeg();
        Unit leg[];


        virtual ~Formation();
    protected:

    private:


};

#endif // FORMATION_H

#ifndef HUMAN_H
#define HUMAN_H

#include <Unit.h>


class Human : protected Unit
{
    public:
       Human();


        virtual void special();

        virtual ~Human();

    protected:


        bool dodge(Unit);

    private:
};

#endif // HUMAN_H

#ifndef HUMAN_H
#define HUMAN_H

#include <Unit.h>
#include <string>


class Human : public Unit
{
    public:
        Human();
       Human(std::string);


        virtual void special(Unit);
        virtual ~Human();

    protected:


        bool dodge(Unit);

    private:
};

#endif // HUMAN_H

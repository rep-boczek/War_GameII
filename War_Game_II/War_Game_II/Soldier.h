#ifndef SOLDIER_H
#define SOLDIER_H

#include <Human.h>
#include <string>


class Soldier : public Human
{
    public:
        Soldier();
        Soldier(std::string);
        void special(Unit);
        virtual ~Soldier();

    protected:

    private:
};

#endif // SOLDIER_H

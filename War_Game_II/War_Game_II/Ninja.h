#ifndef NINJA_H
#define NINJA_H

#include <Human.h>
#include <string>

class Ninja : public Human
{
    public:
        Ninja();
        Ninja(std::string);

        void special(Unit);
        virtual ~Ninja();

    protected:



    private:
};

#endif // NINJA_H

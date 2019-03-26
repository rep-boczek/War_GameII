#ifndef ARTILERY_H
#define ARTILERY_H

#include <Unit.h>


class Artilery : protected Unit
{
    public:
        Artilery();

        int bulletCount;
        void areaOfAttacj();

        virtual ~Artilery();

    protected:



    private:
};

#endif // ARTILERY_H

#ifndef ARTILERY_H
#define ARTILERY_H
#include <string>

#include <Unit.h>


class Artilery : public Unit
{
    public:
        Artilery();
        Artilery(std::string);

        int bulletCount;
        void areaOfAttacj();

        virtual ~Artilery();

    protected:



    private:
};

#endif // ARTILERY_H

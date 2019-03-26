#ifndef AI_H
#define AI_H

#include <Unit.h>


class AI : protected Unit
{
    public:
        AI() {}




        virtual ~AI() {}

    protected:

        void dodge(); //defined under Human
        void barrier build();

    private:
};

#endif // AI_H

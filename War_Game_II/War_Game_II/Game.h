#ifndef GAME_H
#define GAME_H

#include "Unit.h"
#include <windows.h>
#include <time.h>
#include "Control.h"

class Game
{
    public:
        Game();
        Game(int, int, int, std::vector<Unit>*, std::vector<Unit>*);

        std::vector<Unit> P1v;
        std::vector<Unit> P2v;

        Control K;

        int x;

        void Play(int, std::vector<Unit>*, std::vector<Unit>*);
        void disp();
        int nOfUnitsP1;
        int nOfUnitsP2;

        virtual ~Game();


    protected:

    private:




};

#endif // GAME_H

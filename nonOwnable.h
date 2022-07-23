#ifndef NONOWNABLE_H
#define NONOWNABLE_h

#include <iostream>
#include "boardcell.h"
#include "gameBoard.h"

class NonOwnable: public BoardCell {
    int pos;
    GameBoard *game;
public:
    NonOwnable(int pos, GameBoard *game);
};
/*
void function(Player *curr);
};

class GooseNesting: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class GoToTims: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class CoopFee: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class DCTimsline: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class SLC: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class Tuition: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class NeedlesHall: public NonOwnable {
    public:
        void function(Player *curr) override;
};

class CollectOSAP: public NonOwnable {
    public:
        void function(Player *curr) override;
};
*/
#endif

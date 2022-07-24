#ifndef _OWNABLE_H_
#define _OWNABLE_H_

#include <string>
#include "boardcell.h"
class Player;
class GameBoard; 

class Ownable: public BoardCell{
    public:
        std::string dept;
        int cost;
        GameBoard *game;
        Ownable(std::string name, int cost,  shared_ptr<Player>owner , std::string dept, GameBoard *game);
        void buyProperty();
        void auction();
        virtual void doOperation(shared_ptr<Player> curr) override = 0;
        virtual int getImprovs() override = 0;
        virtual void resetImprovs() override = 0;
        virtual void getImprovCost() override = 0;
        virtual void setImprovs() override = 0;
        std::string propName;
        shared_ptr<Player>owner; // set up owner field
        bool isMortgage = false; //default val
        void setMortgage(bool x);
}; 
#endif

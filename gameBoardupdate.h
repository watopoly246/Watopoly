#ifndef __GAMEBOARD_H
#define __GAMEBOARD_H

#include <string>
#include "cell.h"
#include "player.h"
#include "ownable.h"
#include "improvable.h"
#include "nonImprovable.h"
#include "dice.h"

class GameBoard
{
    BoardCell *square[40]; // Store in order of occurence on board with CollectOSAP as 0;
    Ownable *prop[28];     // In order
    Player *player[8];     // Store player in order of turn
    Dice *dice;
    // char *playerChar[6]; // Store in order of turn/player

public:
    GameBoard();
    ~GameBoard();
    void roll();
    void next();
    // int getPosition(Player player); // Gets player's current position
    void move(Player player); // Gets player's current position and changes it to new position after roll;
    void buyProperty(Player player, Ownable prop);
    void sellProperty(Player player, Ownable prop);
    void mortgage(Player player, Ownable prop);
    void unmortgage(Player player, Ownable prop);
    void improve_buy(Player player, Improvable prop);
    void improve_sell(Player player, Improvable prop);
    void trade(Player player1, Ownable prop1, int money1, Player player2, Ownable prop2, int money2);
    void auction(Ownable prop);
    bool bankrupt(); // autoChecker
    vector<int> getPlayerPos(); 
    vector<int> getImprovs();

    Player *currPlayer;
    bool rollComplete;
};
#endif
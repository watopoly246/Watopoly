#include <string>

class Player{
    std::string playerName;
    char playerChar;
    int position;
    int money;

public:

    int getPosition(); // gives players position
    void setPosition(int sum); //sets new position
    int getMoney(); // gives info of money
    void money_add(unsigned int val);
    void money_sub(unsigned int val);

};
#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <cstdlib>
#include <ctime>

class Computer : public Player {
private:
    std::string name;
public:
    Computer(std::string playerName) : name(playerName) {
        std::srand(std::time(0));
    }
    Move* makeMove() override;
    std::string getName() override { return name; }
};

#endif

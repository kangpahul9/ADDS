#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>

class Human : public Player {
private:
    std::string name;
public:
    Human(std::string playerName) : name(playerName) {}
    Move* makeMove() override;
    std::string getName() override { return name; }
};

#endif

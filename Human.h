#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>
#include <iostream>

class Human : public Player {
private:
    std::string name;

public:
    Human(std::string playerName = "Human") : name(playerName) {}
    char makeMove() override;
    std::string getName() override { return name; }
};

#endif

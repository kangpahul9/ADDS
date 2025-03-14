#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"
#include <string>
#include <iostream>

class Human : public Player {
private:
    std::string name;
public:
    Human(std::string name = "Human"); // Constructor with default value
    Move* makeMove() override;
    std::string getName() override { return name; }
};

#endif

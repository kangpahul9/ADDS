#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <cstdlib>
#include <ctime>
class Computer : public Player {
    public:
        Computer() : name("Computer") {} // Default constructor
        Computer(std::string playerName) : name(playerName) {} // Parameterized constructor
        std::string getName() override { return name; }
        Move* makeMove() override; // Implement in Computer.cpp
    
    private:
        std::string name;
    };
#endif

#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <cstdlib>
#include <ctime>
class Computer : public Player {
    public:
        Computer() : name("Computer") {} 
        Computer(std::string playerName) : name(playerName) {}
        std::string getName() override { return name; }
        Move* makeMove() override; 
    
    private:
        std::string name;
    };
#endif

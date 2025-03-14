#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>

class Human : public Player {
    public:
        Human() : name("Human") {} 
        Human(std::string playerName) : name(playerName) {} 
        std::string getName()  { return name; }
        Move* makeMove() ; 
    
    private:
        std::string name;
    };

#endif

    
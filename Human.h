#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>

class Human : public Player {
    public:
        Human() : name("Human") {} // Default constructor
        Human(std::string playerName) : name(playerName) {} // Parameterized constructor
        std::string getName()  { return name; }
        Move* makeMove() ; // Implement in Human.cpp
    
    private:
        std::string name;
    };

#endif

    
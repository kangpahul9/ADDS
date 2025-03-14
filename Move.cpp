#include "Move.h"

std::string Rock::getName() {
    return name;
}
bool Rock::beats(Move* other){
    if(other->getName()=="Scissors"){
        return true;
    }
    return false;
}

std::string Paper::getName() {
    return name;
}
bool Paper::beats(Move* other){
    if(other->getName()=="Rock"){
        return true;
    }
    return false;
}

std::string Scissors::getName() {
    return name;
}
bool Scissors::beats(Move* other){
    if(other->getName()=="Paper"){
        return true;
    }
    return false;
}

std::string Zombie::getName() {
    return name;
}
bool Zombie::beats(Move* other){
    if(other->getName()=="Pirate"||other->getName()=="Ninja"){
        return true;
    }
    return false;
}

std::string Pirate::getName() {
    return name;
}
bool Pirate::beats(Move* other){
    if(other->getName()=="Robot"||other->getName()=="Zombie"){
        return true;
    }
    return false;
}

std::string Ninja::getName() {
    return name;
}
bool Ninja::beats(Move* other){
    if(other->getName()=="Zombie"||other->getName()=="Pirate"){
        return true;
    }
    return false;
}

std::string Robot::getName() {
    return name;
}
bool Robot::beats(Move* other){
    if(other->getName()=="Rock"||other->getName()=="Scissors"){
        return true;
    }
    return false;
}

std::string Monkey::getName() {
    return name;
}
bool Monkey::beats(Move* other){
    if(other->getName()=="Robot"){
        return true;
    }
    return false;
}
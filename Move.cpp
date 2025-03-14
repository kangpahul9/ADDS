#include "Move.h"

std::string Rock::getName() const { return "Rock"; }
bool Rock::beats(const Move* other) const {
    return other->getName() == "Scissors" || other->getName() == "Robot";
}

std::string Paper::getName() const { return "Paper"; }
bool Paper::beats(const Move* other) const {
    return other->getName() == "Rock" || other->getName() == "Zombie";
}

std::string Scissors::getName() const { return "Scissors"; }
bool Scissors::beats(const Move* other) const {
    return other->getName() == "Paper" || other->getName() == "Monkey";
}

std::string Monkey::getName() const { return "Monkey"; }
bool Monkey::beats(const Move* other) const {
    return other->getName() == "Robot" || other->getName() == "Pirate";
}

std::string Robot::getName() const { return "Robot"; }
bool Robot::beats(const Move* other) const {
    return other->getName() == "Scissors" || other->getName() == "Zombie";
}

std::string Pirate::getName() const { return "Pirate"; }
bool Pirate::beats(const Move* other) const {
    return other->getName() == "Ninja" || other->getName() == "Rock";
}

std::string Ninja::getName() const { return "Ninja"; }
bool Ninja::beats(const Move* other) const {
    return other->getName() == "Zombie" || other->getName() == "Monkey";
}

std::string Zombie::getName() const { return "Zombie"; }
bool Zombie::beats(const Move* other) const {
    return other->getName() == "Pirate" || other->getName() == "Paper";
}

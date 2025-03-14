#include "Move.h"

bool Rock::beats(const Move* other) const {
    return other->getName() == "Scissors" || other->getName() == "Zombie";
}

bool Paper::beats(const Move* other) const {
    return other->getName() == "Rock" || other->getName() == "Monkey";
}

bool Scissors::beats(const Move* other) const {
    return other->getName() == "Paper" || other->getName() == "Pirate";
}

bool Robot::beats(const Move* other) const {
    return other->getName() == "Paper" || other->getName() == "Ninja";
}

bool Monkey::beats(const Move* other) const {
    return other->getName() == "Zombie" || other->getName() == "Pirate";
}

bool Pirate::beats(const Move* other) const {
    return other->getName() == "Ninja" || other->getName() == "Scissors";
}

bool Ninja::beats(const Move* other) const {
    return other->getName() == "Zombie" || other->getName() == "Robot";
}

bool Zombie::beats(const Move* other) const {
    return other->getName() == "Monkey" || other->getName() == "Paper";
}

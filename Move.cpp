#include "Move.h"

// Rock Class Implementation
Rock::Rock() {
    // Constructor implementation
}

std::string Rock::getName() const {
    return "Rock";
}

bool Rock::beats(const Move* other) const {
    return dynamic_cast<const Scissors*>(other) != nullptr || dynamic_cast<const Zombie*>(other) != nullptr;
}

// Paper Class Implementation
Paper::Paper() {
    // Constructor implementation
}

std::string Paper::getName() const {
    return "Paper";
}

bool Paper::beats(const Move* other) const {
    return dynamic_cast<const Rock*>(other) != nullptr || dynamic_cast<const Monkey*>(other) != nullptr;
}

// Scissors Class Implementation
Scissors::Scissors() {
    // Constructor implementation
}

std::string Scissors::getName() const {
    return "Scissors";
}

bool Scissors::beats(const Move* other) const {
    return dynamic_cast<const Paper*>(other) != nullptr || dynamic_cast<const Pirate*>(other) != nullptr;
}

// Robot Class Implementation
Robot::Robot() {
    // Constructor implementation
}

std::string Robot::getName() const {
    return "Robot";
}

bool Robot::beats(const Move* other) const {
    return dynamic_cast<const Paper*>(other) != nullptr || dynamic_cast<const Ninja*>(other) != nullptr;
}

// Monkey Class Implementation
Monkey::Monkey() {
    // Constructor implementation
}

std::string Monkey::getName() const {
    return "Monkey";
}

bool Monkey::beats(const Move* other) const {
    return dynamic_cast<const Zombie*>(other) != nullptr || dynamic_cast<const Pirate*>(other) != nullptr;
}

// Pirate Class Implementation
Pirate::Pirate() {
    // Constructor implementation
}

std::string Pirate::getName() const {
    return "Pirate";
}

bool Pirate::beats(const Move* other) const {
    return dynamic_cast<const Ninja*>(other) != nullptr || dynamic_cast<const Scissors*>(other) != nullptr;
}

// Ninja Class Implementation
Ninja::Ninja() {
    // Constructor implementation
}

std::string Ninja::getName() const {
    return "Ninja";
}

bool Ninja::beats(const Move* other) const {
    return dynamic_cast<const Zombie*>(other) != nullptr || dynamic_cast<const Robot*>(other) != nullptr;
}

// Zombie Class Implementation
Zombie::Zombie() {
    // Constructor implementation
}

std::string Zombie::getName() const {
    return "Zombie";
}

bool Zombie::beats(const Move* other) const {
    return dynamic_cast<const Monkey*>(other) != nullptr || dynamic_cast<const Paper*>(other) != nullptr;
}

#include "Human.h"
#include "Move.h"
#include <iostream>

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter Move: ";
    std::cin >> moveName;
    
    if (moveName == "Rock") return new Rock();
    if (moveName == "Paper") return new Paper();
    if (moveName == "Scissors") return new Scissors();
    if (moveName == "Monkey") return new Monkey();
    if (moveName == "Robot") return new Robot();
    if (moveName == "Pirate") return new Pirate();
    if (moveName == "Ninja") return new Ninja();
    if (moveName == "Zombie") return new Zombie();
    
    std::cout << "Invalid move! Defaulting to Rock.\n";
    return new Rock();
}

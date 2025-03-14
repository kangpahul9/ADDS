#include "Human.h"
#include "Move.h"
#include <iostream>
#include <algorithm>

Human::Human(std::string name) : name(name) {}  // Define Constructor

Move* Human::makeMove() {
    std::string choice;
    while (true) {
        std::cout << "Enter move: ";
        std::cin >> choice;
        
        // Convert to lowercase for case-insensitive comparison
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

        if (choice == "rock") return new Rock();
        if (choice == "paper") return new Paper();
        if (choice == "scissors") return new Scissors();
        if (choice == "robot") return new Robot();
        if (choice == "monkey") return new Monkey();
        if (choice == "pirate") return new Pirate();
        if (choice == "ninja") return new Ninja();
        if (choice == "zombie") return new Zombie();

        std::cout << "Invalid move. Try again." << std::endl;
    }
}

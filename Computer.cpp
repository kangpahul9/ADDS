#include "Computer.h"
#include "Move.h"

Move* Computer::makeMove() {
    int choice = std::rand() % 8;
    switch (choice) {
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Monkey();
        case 4: return new Robot();
        case 5: return new Pirate();
        case 6: return new Ninja();
        case 7: return new Zombie();
    }
    return new Rock(); // Default case
}

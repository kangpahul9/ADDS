#include "Computer.h"
#include "Move.h"
#include "Referee.h"
#include <cstdlib>  // For random number generation

extern Referee referee;  // Access global referee

Computer::Computer() : name("Computer"), move(nullptr) {}

Move* Computer::makeMove() {
    Move* lastHumanMove = referee.getLastHumanMove();  // Get human's last move
    std::string lastMoveName = lastHumanMove ? lastHumanMove->getName() : "";

    if (lastMoveName == "Rock" || lastMoveName == "Paper" || lastMoveName == "Scissors") {
        int moveChoice = std::rand() % 3;  // Choose from Rock, Paper, Scissors
        switch (moveChoice) {
            case 0: return new Rock();
            case 1: return new Paper();
            case 2: return new Scissors();
        }
    } else {
        int moveChoice = std::rand() % 8;  // Choose from all moves
        switch (moveChoice) {
            case 0: return new Rock();
            case 1: return new Paper();
            case 2: return new Scissors();
            case 3: return new Robot();
            case 4: return new Monkey();
            case 5: return new Pirate();
            case 6: return new Ninja();
            case 7: return new Zombie();
        }
    }

    return new Rock();  // Default fallback
}

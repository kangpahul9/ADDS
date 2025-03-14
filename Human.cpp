#include "Human.h"
#include "Move.h"
#include <iostream>
#include <string>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Move* Human::makeMove() {
    std::string playerMove;
    std::cout << "Enter Move: ";
    std::cin >> playerMove;
    
    if (playerMove == "Rock") return new Rock();
    if (playerMove == "Paper") return new Paper();
    if (playerMove == "Scissors") return new Scissors();
    if (playerMove == "Monkey") return new Monkey();
    if (playerMove == "Robot") return new Robot();
    if (playerMove == "Pirate") return new Pirate();
    if (playerMove == "Ninja") return new Ninja();
    if (playerMove == "Zombie") return new Zombie();
    
    return new Rock();
}

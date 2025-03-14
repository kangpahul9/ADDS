#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Move.h"
#include <iostream>

Referee referee;  // Global referee instance

int main() {
    Human player1("Mei");
    Computer player2;

    Player* winner = referee.refGame(&player1, &player2);  // Only pass two arguments

    if (winner) {
        std::cout << winner->getName() << " Wins." << std::endl;
    } else {
        std::cout << "It's a Tie." << std::endl;
    }

    return 0;
}

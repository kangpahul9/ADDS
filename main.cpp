#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human player1("You");
    Computer player2;
    Referee referee;

    Player* winner = referee.refGame(&player1, &player2);

    if (winner) {
        std::cout << winner->getName() << " wins!\n";
    } else {
        std::cout << "It's a tie!\n";
    }
    return 0;
}

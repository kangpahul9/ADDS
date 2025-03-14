#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human player1("Mei");
    Computer player2;
    Referee referee;

    Player* winner = referee.refGame(&player1, &player2);

    if (winner) {
        std::cout << winner->getName() << " Wins." << std::endl;
    } else {
        std::cout << "It's a Tie." << std::endl;
    }

    return 0;
}

#include "Referee.h"

Referee::Referee() : lastHumanMove(nullptr) {}

Move* Referee::getLastHumanMove() {
    return lastHumanMove;
}

Player* Referee::refGame(Player* player1, Player* player2) {
    lastHumanMove = player1->makeMove();  // Store human move
    Move* move2 = player2->makeMove();    // Let the computer make a move

    if (lastHumanMove->beats(move2)) {
        return player1;
    } else if (move2->beats(lastHumanMove)) {
        return player2;
    } else {
        return nullptr;  // Tie
    }
}

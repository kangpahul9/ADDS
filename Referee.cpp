#include "Referee.h"
#include "Move.h"
 
Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    if (move1->getBeatsList(), move2) {
        return player1;
    } else if (move2->winCheck(move2->getBeatsList(), move1)) {
        return player2;
    } else {
        return NULL;
    }
}

#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
private:
    Move* lastHumanMove;  // Store the last move of the human player
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);
    Move* getLastHumanMove();  // New method to access the last move
};

#endif

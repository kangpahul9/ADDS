#include "Referee.h"
#include "Move.h"
 
Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    if (winCheck(move1, move2)) {
        return player1;
    }
    if (winCheck(move2, move1)) {
        return player2;
    }
}
bool Referee::winCheck(Move* move1, Move *other) {
    std::vector<std::string> list = move1->getBeatsList();
    for (int i = 0; i < list.size(); i++) {
        if (other->getName() == list[i]) {
            return true;
        }
    }
    return false;
};
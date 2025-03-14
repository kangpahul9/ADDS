#include "Move.h"

bool Move::winCheck(std::vector<std::string> beatsList, Move *other) {
    for (int i = 0; i < beatsList.size(); i++) {
        if (other->getName() == beatsList[i]) {
            return true;
        }
    }
    return false;
}








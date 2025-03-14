#include "Computer.h"
#include "Move.h"

Computer::Computer() : name("Computer"), move(new Rock()) {}

Move* Computer::makeMove() {
    return move;
}

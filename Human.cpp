#include "Human.h"

char Human::makeMove() {
    char move;
    while (true) {
        std::cout << "Enter move: ";
        std::cin >> move;
        move = toupper(move);
        if (move == 'R' || move == 'P' || move == 'S') {
            return move;
        }
        std::cout << "Invalid input. Please enter R, P, or S." << std::endl;
    }
}

#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    
    Human human;
    Computer computer;
    Referee referee;
    
    Player* winner = referee.refGame(&human, &computer);
    
    if (winner) {
        std::cout << winner->getName();
    } else {
        std::cout << "Tie" << std::endl;
    }
    
    return 0;
}

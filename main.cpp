#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    
    Human human("Mei");
    Computer computer;
    Referee referee;
    
    Player* winner = referee.refGame(&human, &computer);
    
    if (winner) {
        std::cout << winner->getName() << " Wins" << std::endl;
    } else {
        std::cout << "It's a draw!" << std::endl;
    }
    
    return 0;
}

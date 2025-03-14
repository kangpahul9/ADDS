#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;
    
    Human human(playerName);
    Computer computer("AI");
    Referee referee;
    
    Player* winner = referee.refGame(&human, &computer);
    
    if (winner) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a draw!" << std::endl;
    }
    
    return 0;
}

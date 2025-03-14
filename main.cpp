#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main()
{

    Human human("Kang");
    Computer computer;
    Referee referee;

    Player *winner = referee.refGame(&human, &computer);

    if (winner)
    {
        std::cout << "Winner: " << winner->getName() << std::endl;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}


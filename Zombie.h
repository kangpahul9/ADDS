#include "Move.h"
class Zombie : public Move
{
public:
    Zombie(){name = "Zombie";
        beatsList.push_back("Pirate");
        beatsList.push_back("Monkey");}
    std::string getName();
    std::vector<std::string> getBeatsList();
};
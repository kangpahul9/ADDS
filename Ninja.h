#include "Move.h"
class Ninja : public Move
{
public:
    Ninja(){
        name = "Ninja";
        beatsList.push_back("Zombie");
        beatsList.push_back("Pirate");
    }
    std::string getName();
    std::vector<std::string> getBeatsList();
};
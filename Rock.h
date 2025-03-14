#include "Move.h"
class Rock : public Move
{
public:
    Rock(){
        name = "Rock";
        beatsList.push_back("Scissors");
    }
    std::string getName();
    std::vector<std::string> getBeatsList();
};
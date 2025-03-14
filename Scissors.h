#include "Move.h"
class Scissors : public Move
{
public:
    Scissors() { name = "Scissors"; beatsList.push_back("Paper"); } 
    std::string getName();
    std::vector<std::string> getBeatsList();
};
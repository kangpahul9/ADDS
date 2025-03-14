#include "Move.h"
class Pirate : public Move
{
public:
    Pirate(){
        name = "Pirate";
        beatsList.push_back("Robot");
        beatsList.push_back("Monkey");
    }
    std::string getName();
    std::vector<std::string> getBeatsList();
};
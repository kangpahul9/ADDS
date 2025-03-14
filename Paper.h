#include "Move.h"
class Paper : public Move
{
public:
    Paper(){
        name = "Paper";
        beatsList.push_back("Rock");
    }
    std::string getName();
    std::vector<std::string> getBeatsList();
};

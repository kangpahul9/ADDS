#include "Move.h"
class Robot : public Move {
    public:
        Robot(){ name = "Robot"; beatsList.push_back("Zombie"); beatsList.push_back("Ninja"); }
        std::string getName() ;
        std::vector<std::string> getBeatsList();
    };
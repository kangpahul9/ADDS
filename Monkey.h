#include "Move.h"
class Monkey : public Move {
    public:
        Monkey(){
            name = "Monkey";
            beatsList.push_back("Robot");
            beatsList.push_back("Ninja");
        }
        std::string getName() ;
        std::vector<std::string> getBeatsList();
    };
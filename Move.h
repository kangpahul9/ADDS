#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <iostream>
#include <vector>
class Move
{
protected:
    std::string name;
    std::vector<std::string> beatsList;

public:
    virtual ~Move() {}
    virtual std::string getName() = 0;
    virtual std::vector<std::string> getBeatsList() = 0;
    bool winCheck(std::vector<std::string> beatsList, Move *other);
};






    

#endif
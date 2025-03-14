#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <iostream>
class Move
{
protected:
    std::string name;

public:
    virtual ~Move() {}
    virtual std::string getName() = 0;
    virtual bool beats(Move *other) = 0;
};

class Rock : public Move
{
public:
    Rock() { name = "Rock"; }
    std::string getName();
    bool beats(Move *other);
};
class Paper : public Move
{
public:
    Paper() { name = "Paper"; }
    std::string getName();
    bool beats(Move *other);
};
class Scissors : public Move
{
public:
    Scissors() { name = "Scissors"; }
    std::string getName();
    bool beats(Move *other);
};
class Zombie : public Move
{
public:
    Zombie() { name = "Zombie"; }
    std::string getName();
    bool beats(Move *other);
};
class Pirate : public Move
{
public:
    Pirate() { name = "Pirate"; }
    std::string getName();
    bool beats(Move *other);
};
class Ninja : public Move
{
public:
    Ninja() { name = "Ninja"; }
    std::string getName();
    bool beats(Move *other);
};
class Robot : public Move {
    public:
        Robot() { name = "Robot"; }
        std::string getName() ;
        bool beats( Move* other);
    };
    class Monkey : public Move {
        public:
            Monkey() { name = "Monkey"; }
            std::string getName() ;
            bool beats( Move* other);
        };

#endif

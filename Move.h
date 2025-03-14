#ifndef MOVE_H
#define MOVE_H

#include <string>
#include<iostream>
class Move {
public:
    virtual ~Move() {}
    virtual std::string getName() const = 0;
    virtual bool beats(const Move* other) const = 0;
};

class Rock : public Move {
public:
    Rock(){std::cout<<"Rock ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Paper : public Move {
public:
Paper(){std::cout<<"Paper ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Scissors : public Move {
public:
Scissors(){std::cout<<"Scissors ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Monkey : public Move {
public:
Monkey(){std::cout<<"Monkey ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Robot : public Move {
public:
Robot(){std::cout<<"Robot ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Pirate : public Move {
public:
Pirate(){std::cout<<"Pirate ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Ninja : public Move {
public:
Ninja(){std::cout<<"Ninja ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Zombie : public Move {
public:
Zombie(){std::cout<<"Zombie ";}
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

#endif

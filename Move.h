#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual bool beats(const Move* other) const = 0;
    virtual ~Move() {} // Virtual destructor
};

class Rock : public Move {
public:
    Rock();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Paper : public Move {
public:
    Paper();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Scissors : public Move {
public:
    Scissors();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Robot : public Move {
public:
    Robot();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Monkey : public Move {
public:
    Monkey();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Pirate : public Move {
public:
    Pirate();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Ninja : public Move {
public:
    Ninja();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Zombie : public Move {
public:
    Zombie();
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

#endif

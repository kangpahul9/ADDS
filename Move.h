#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual bool beats(const Move* other) const = 0;
    virtual ~Move() {} // Virtual destructor
};

// Rock Class
class Rock : public Move {
public:
    std::string getName() const override { return "Rock"; }
    bool beats(const Move* other) const override;
};

// Paper Class
class Paper : public Move {
public:
    std::string getName() const override { return "Paper"; }
    bool beats(const Move* other) const override;
};

// Scissors Class
class Scissors : public Move {
public:
    std::string getName() const override { return "Scissors"; }
    bool beats(const Move* other) const override;
};

// Additional Moves
class Robot : public Move {
public:
    std::string getName() const override { return "Robot"; }
    bool beats(const Move* other) const override;
};

class Monkey : public Move {
public:
    std::string getName() const override { return "Monkey"; }
    bool beats(const Move* other) const override;
};

class Pirate : public Move {
public:
    std::string getName() const override { return "Pirate"; }
    bool beats(const Move* other) const override;
};

class Ninja : public Move {
public:
    std::string getName() const override { return "Ninja"; }
    bool beats(const Move* other) const override;
};

class Zombie : public Move {
public:
    std::string getName() const override { return "Zombie"; }
    bool beats(const Move* other) const override;
};

#endif
#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual ~Move() {}
    virtual std::string getName() const = 0;
    virtual bool beats(const Move* other) const = 0;
};

class Rock : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Paper : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Scissors : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Monkey : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Robot : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Pirate : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Ninja : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

class Zombie : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

#endif

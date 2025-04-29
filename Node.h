#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int value;
    Node *next;

public:
    Node(int val);
    int getValue() const;
    Node *getNext() const;
    void setNext(Node *nextNode);
};

#endif
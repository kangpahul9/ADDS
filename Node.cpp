#include "Node.h"

Node::Node(int val) : value(val), next(nullptr) {} 

int Node::getValue() const {
    return value;
}

Node* Node::getNext() const {
    return next; 
}

void Node::setNext(Node* nextNode) {
    next = nextNode; 
}

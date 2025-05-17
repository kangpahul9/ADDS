#ifndef TRINODE_H
#define TRINODE_H

#include <vector>  // for std::vector

class TriNode {
public:
    TriNode();
    TriNode(int numChildren); // number of children

    bool isEnd;
    int routerNumber;
    std::vector<TriNode*> children;

    ~TriNode();
};

#endif

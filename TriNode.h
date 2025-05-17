#ifndef TRINODE_H
#define TRINODE_H

#include <vector> 

class TriNode {
public:
    TriNode();
    TriNode(int numChildren);

    bool isEnd;
    int routerNumber;
    std::vector<TriNode*> children;

    ~TriNode();
};

#endif

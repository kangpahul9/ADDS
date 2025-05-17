#include "TriNode.h"

TriNode::TriNode() : TriNode(26) {}

TriNode::TriNode(int numChildren)
    : isEnd(false), routerNumber(-1), children(numChildren, nullptr) {}

TriNode::~TriNode() {
    for (TriNode* child : children) {
        delete child;
    }
}

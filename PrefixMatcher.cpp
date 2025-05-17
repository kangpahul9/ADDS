#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() : root(new TriNode(2)) {}

int PrefixMatcher::selectRouter(const std::string& networkAddress) { 
    TriNode* cur = root;
    int bestMatch = -1;

    for (char c : networkAddress) {
        int index = c - '0';

        if (cur->isEnd) {
            bestMatch = cur->routerNumber;
        }

        if (cur->children[index] == nullptr) {
            break;
        }

        cur = cur->children[index];
    }

    // Final check if current node isEnd
    if (cur && cur->isEnd) {
        bestMatch = cur->routerNumber;
    }

    return bestMatch;
}

void PrefixMatcher::insert(const std::string& address, int routerNumber) {
    TriNode* cur = root;

    for (char c : address) {
        int index = c - '0';

        if (cur->children[index] == nullptr) {
            cur->children[index] = new TriNode(2);
        }

        cur = cur->children[index];
    }

    cur->isEnd = true;
    cur->routerNumber = routerNumber;
}

PrefixMatcher::~PrefixMatcher() {
    delete root; // Recursively deletes the trie due to TriNode destructor
}

#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>      // For std::string
#include "TriNode.h"   // Your Trie node definition

class PrefixMatcher {
public:
    PrefixMatcher();

    int selectRouter(const std::string& networkAddress);  // Return router with longest matching prefix
    void insert(const std::string& address, int routerNumber); // Add router address

    ~PrefixMatcher();

private: 
    TriNode* root;
};

#endif // PREFIXMATCHER_H

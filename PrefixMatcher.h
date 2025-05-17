#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>    
#include "TriNode.h"  

class PrefixMatcher {
public:
    PrefixMatcher();

    int selectRouter(const std::string& networkAddress);
    void insert(const std::string& address, int routerNumber);

    ~PrefixMatcher();

private: 
    TriNode* root;
};

#endif 

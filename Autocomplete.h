#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <string>
#include <vector>
#include "TriNode.h"

class Autocomplete {
public:
    Autocomplete();

    std::vector<std::string> getSuggestions(const std::string& partialWord);  
    void insert(const std::string& word); 

    ~Autocomplete();

private: 
    TriNode* root;
    void getSuggestionsHelper(TriNode* cur, const std::string& prefix, std::vector<std::string>& suggestions);
};

#endif

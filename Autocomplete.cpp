#include "Autocomplete.h"

Autocomplete::Autocomplete() : root(new TriNode(26)) {}

std::vector<std::string> Autocomplete::getSuggestions(const std::string& partialWord) {
    std::vector<std::string> suggestions;
    TriNode* cur = root;

    for (char c : partialWord) {
        int index = c - 'a';
        if (cur->children[index] == nullptr) {
            return suggestions; 
        }
        cur = cur->children[index];
    }

    getSuggestionsHelper(cur, partialWord, suggestions);
    return suggestions;
}

void Autocomplete::getSuggestionsHelper(TriNode* cur, const std::string& prefix, std::vector<std::string>& suggestions) {
    if (cur->isEnd) {
        suggestions.push_back(prefix);
    }

    for (int i = 0; i < cur->children.size(); ++i) {
        if (cur->children[i] != nullptr) {
            char nextChar = 'a' + i;
            getSuggestionsHelper(cur->children[i], prefix + nextChar, suggestions);
        }
    }
}

void Autocomplete::insert(const std::string& word) {
    TriNode* cur = root;

    for (char c : word) {
        int index = c - 'a';
        if (cur->children[index] == nullptr) {
            cur->children[index] = new TriNode(26);
        }
        cur = cur->children[index];
    }

    cur->isEnd = true;
}

Autocomplete::~Autocomplete() {
    delete root; 
}

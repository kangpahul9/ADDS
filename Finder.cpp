#include "Finder.h"
#include <string>
#include <vector>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    int last_found_index = 0;

    for (size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i), last_found_index);

        if (found != std::string::npos) {
            result.push_back(found);
            last_found_index = found; 
        } else {
            break;
        }
    }
    for (int i = result.size(); i < s2.length(); i++) {
        result.push_back(-1);
    }

    return result;
}

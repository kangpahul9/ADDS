#include <iostream>
#include "Finder.h"

using namespace std;

int main() {
    Finder finder;
    string s1 = "734658732465";  // Example string 1
    string s2 = "463";       // Example string 2

    vector<int> result = finder.findSubstrings(s1, s2);

    cout << "Indexes of prefixes of s2 in s1: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <sstream>
#include <vector>

#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    std::vector<int> numbers;
    int num;

    while (ss >> num) {
        numbers.push_back(num); 
    }

    QuickSort sorter;
    RecursiveBinarySearch searcher;

    std::vector<int> sorted = sorter.sort(numbers); 
    bool found = searcher.search(sorted, 1); 

    std::cout << (found ? "true" : "false"); 
    for (int n : sorted) {
        std::cout << " " << n;
    }
    std::cout << std::endl;

    return 0;
}

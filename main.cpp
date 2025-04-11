#include <iostream>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    std::vector<int> numbers;
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    QuickSort sorter;
    numbers = sorter.sort(numbers);

    RecursiveBinarySearch searcher;
    bool found = searcher.search(numbers, 1);

    std::cout << (found ? "true" : "false");
    for (int n : numbers) {
        std::cout << " " << n;
    }
    std::cout << std::endl;

    return 0;
}

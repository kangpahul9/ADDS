#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high) {
    std::vector<std::pair<int, int>> stack;
    stack.push_back({low, high});

    while (!stack.empty()) {
        auto [l, h] = stack.back();
        stack.pop_back();

        if (l < h) {
            int p = partition(list, l, h);
            stack.push_back({l, p - 1});
            stack.push_back({p + 1, h});
        }
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[low + 2];
    std::swap(list[low + 2], list[high]);

    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (list[j] <= pivot) {
            ++i;
            std::swap(list[i], list[j]);
        }
    }

    std::swap(list[i + 1], list[high]);
    return i + 1;
}

#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> newHeap;
    
    for (int value : values) {
        newHeap.push(value);
        
        if (newHeap.size() > k) {  
            newHeap.pop();
        }
    }
    
    return newHeap.top();   
}
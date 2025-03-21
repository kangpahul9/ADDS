#include"EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    if (numCrates <= loadSize) {
        return 1;
    }
    if(memo.find(numCrates) != memo.end()){
        return memo[numCrates];
    }
    int result = numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates + 1) / 2, loadSize);
    memo[numCrates] = result;
    
    return result;
}
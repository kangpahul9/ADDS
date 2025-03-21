#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // If crates fit in one truck, return 1
    }
    // Split into two roughly equal piles and recursively determine trucks required
    return numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates + 1) / 2, loadSize);
}

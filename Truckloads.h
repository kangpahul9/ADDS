#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H
class Truckloads
{
private:
    int numCrates;
    int loadSize;
public:
    Truckloads(): numCrates(0), loadSize(0) {};
    Truckloads(int numCrates, int loadSize): numCrates(numCrates), loadSize(loadSize) {};
    int getNumCrates() { return numCrates; }
    int getLoadSize() { return loadSize; }
    int numTrucks(int numCrates, int loadSize);
};

#endif
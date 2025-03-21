#include<iostream>
#include"Truckloads.h"
#include"Reverser.h"
int main()
{
    // Truckloads truckloads(1024,4);
    // int a = truckloads.numTrucks(truckloads.getNumCrates(), truckloads.getLoadSize());
    // std::cout << "The number of crates is: " << truckloads.getNumCrates() << std::endl;
    // std::cout << "The load size is: " << truckloads.getLoadSize() << std::endl;
    // std::cout << "The number of trucks required is: " << a << std::endl;
    Reverser reverser;
    std::string reversedString = reverser.reverseString("Hello");
    std::cout << "The reversed string is: " << reversedString << std::endl;
    int reversedDigit = reverser.reverseDigit(12345);
    std::cout << "The reversed digit is: " << reversedDigit << std::endl;
    
    return 0;
}
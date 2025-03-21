#include<iostream>
#include"Truckloads.h"
#include"Reverser.h"
#include"EfficientTruckloads.h"
int main()
{
    EfficientTruckloads truckloads;
    int numTrucks = truckloads.numTrucks(14, 3);
    std::cout << "The number of trucks is: " << numTrucks << std::endl;
    Reverser reverser;
    std::string reversedString = reverser.reverseString("Hello");
    std::cout << "The reversed string is: " << reversedString << std::endl;
    int reversedDigit = reverser.reverseDigit(12345);
    std::cout << "The reversed digit is: " << reversedDigit << std::endl;
    
    return 0;
}
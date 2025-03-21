#include "Reverser.h"
std::string Reverser::reverseString(std::string characters)
{
    if (characters.length() == 0)
    {
        return "ERROR"
    }
    
    std::string reversed = "";
    for (int i = characters.length() - 1; i >= 0; i--)
    {
        reversed += characters[i];
    }
    return reversed;
}


int Reverser::reverseDigit(int num)
{
    if (num == 0 || num < 0)
    {
        return -1;
    }
    
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
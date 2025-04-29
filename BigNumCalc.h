#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <list>
#include <string>

class BigNumCalc {
public:
    BigNumCalc();
    ~BigNumCalc();

    std::list<int> convertStringToDigitList(const std::string& number);
    std::list<int> addDigitLists(const std::list<int>& num1, const std::list<int>& num2);
    std::list<int> subtractDigitLists(const std::list<int>& num1, const std::list<int>& num2);
    std::list<int> multiplyBySingleDigit(const std::list<int>& number, const std::list<int>& singleDigit);
};

#endif 

#include "BigNumCalc.h"
#include <algorithm> 
#include <iostream>

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char c : numString) {
        if (isdigit(c)) {
            result.push_back(c - '0');
        }
    }
    return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        int val1 = (it1 != num1.rend()) ? *it1 : 0;
        int val2 = (it2 != num2.rend()) ? *it2 : 0;
        int sum = val1 + val2 + carry;
        result.push_front(sum % 10);
        carry = sum / 10;

        if (it1 != num1.rend()) ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int borrow = 0;

    while (it1 != num1.rend()) {
        int val1 = *it1 - borrow;
        int val2 = (it2 != num2.rend()) ? *it2 : 0;

        if (val1 < val2) {
            val1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        int diff = val1 - val2;
        result.push_front(diff);

        ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    // Remove leading zeros
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    if (num2.size() != 1) {
        return result;
    }

    int multiplier = num2.front();
    int carry = 0;

    for (auto it = num1.rbegin(); it != num1.rend(); ++it) {
        int product = (*it) * multiplier + carry;
        result.push_front(product % 10);
        carry = product / 10;
    }

    while (carry != 0) {
        result.push_front(carry % 10);
        carry /= 10;
    }

    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

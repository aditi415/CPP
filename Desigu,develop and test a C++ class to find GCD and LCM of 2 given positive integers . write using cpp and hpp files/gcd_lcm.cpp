#include "gcd_lcm.hpp"

// Constructor
NumberOperations::NumberOperations(int x, int y) {
    a = x;
    b = y;
}

// GCD using Euclidean algorithm
int NumberOperations::getGCD() const {
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// LCM using formula: LCM(a,b) = (a * b) / GCD(a,b)
int NumberOperations::getLCM() const {
    return (a * b) / getGCD();
}

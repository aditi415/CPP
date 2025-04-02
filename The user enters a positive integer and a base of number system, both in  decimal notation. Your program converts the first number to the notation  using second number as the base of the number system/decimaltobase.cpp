// decimaltobase.cpp
#include "decimaltobase.hpp"

std::string convertToBase(int number, int base) {
    if (base < 2 || base > 36) return "Invalid Base";
    
    std::string result = "";
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    while (number > 0) {
        result = digits[number % base] + result;
        number /= base;
    }
    
    return result.empty() ? "0" : result;
}

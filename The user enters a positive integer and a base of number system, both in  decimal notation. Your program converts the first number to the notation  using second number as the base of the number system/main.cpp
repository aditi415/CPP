// main.cpp
#include <iostream>
#include "decimaltobase.hpp"

int main() {
    int number, base;
    std::cout << "Enter a number and base: ";
    std::cin >> number >> base;
    
    std::cout << "Output: " << convertToBase(number, base) << std::endl;
    return 0;
}

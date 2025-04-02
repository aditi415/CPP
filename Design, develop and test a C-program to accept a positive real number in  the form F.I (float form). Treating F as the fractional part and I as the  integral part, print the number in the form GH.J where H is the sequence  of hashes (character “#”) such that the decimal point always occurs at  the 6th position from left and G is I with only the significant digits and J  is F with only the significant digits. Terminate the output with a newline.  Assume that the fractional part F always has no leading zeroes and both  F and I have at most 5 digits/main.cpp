// main.cpp
#include <iostream>
#include "format_number.hpp"

int main() {
    float number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Output: " << formatNumber(number);
    return 0;
}

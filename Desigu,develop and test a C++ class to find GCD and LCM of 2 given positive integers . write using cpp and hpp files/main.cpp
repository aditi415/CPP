#include <iostream>
#include "gcd_lcm.hpp"
int main() {
    int num1, num2;

    std::cout << "Enter two positive integers: ";
    std::cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        std::cout << "Please enter only positive integers." << std::endl;
        return 1;
    }

    NumberOperations op(num1, num2);

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << op.getGCD() << std::endl;
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << op.getLCM() << std::endl;

    return 0;
}

#include <iostream>
#include "float_format.hpp"

int main() {
    std::string input;
    std::cout << "Enter a positive real number (F.I format): ";
    std::cin >> input;

    FloatFormatter formatter(input);
    formatter.printFormatted();

    return 0;
}

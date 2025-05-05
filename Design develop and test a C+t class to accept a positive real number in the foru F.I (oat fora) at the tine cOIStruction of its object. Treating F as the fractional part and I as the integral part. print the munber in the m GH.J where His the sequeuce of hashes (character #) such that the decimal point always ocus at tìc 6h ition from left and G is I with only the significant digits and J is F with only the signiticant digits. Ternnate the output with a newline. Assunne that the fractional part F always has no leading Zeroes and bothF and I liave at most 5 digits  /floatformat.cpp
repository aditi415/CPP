#include "float_format.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>

FloatFormatter::FloatFormatter(const std::string& input) {
    size_t dotPos = input.find('.');
    if (dotPos != std::string::npos) {
        integral = input.substr(0, dotPos);
        fractional = input.substr(dotPos + 1);
    } else {
        integral = input;
        fractional = "";
    }
}

void FloatFormatter::printFormatted() const {
    std::string G = integral;
    std::string J = fractional;

    // Remove leading zeroes in G
    size_t gStart = G.find_first_not_of('0');
    if (gStart != std::string::npos)
        G = G.substr(gStart);
    else
        G = "0";

    // Remove trailing zeroes in J
    size_t jEnd = J.find_last_not_of('0');
    if (jEnd != std::string::npos)
        J = J.substr(0, jEnd + 1);
    else
        J = "0";

    // Total width before decimal should be 6 characters (with # padding)
    int hashes = 6 - static_cast<int>(G.length());
    for (int i = 0; i < hashes; ++i) std::cout << "#";

    std::cout << G << "." << J << std::endl;
}

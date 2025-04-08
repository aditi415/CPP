// format_number.cpp
#include "format_number.hpp"
#include <sstream>
#include <iomanip>

std::string formatNumber(float number) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(5) << number;
    std::string str = ss.str();
    
    size_t dotPos = str.find('.');
    std::string integral = str.substr(0, dotPos);
    std::string fractional = str.substr(dotPos + 1);

    // Remove trailing zeros from fractional part
    while (!fractional.empty() && fractional.back() == '0') {
        fractional.pop_back();
    }
    
    // Remove leading zeros from integral part
    while (!integral.empty() && integral.front() == '0' && integral.size() > 1) {
        integral.erase(integral.begin());
    }

    // Calculate the number of '#' to ensure the decimal at 6th position
    int hashCount = 6 - integral.size();
    std::string hashes(hashCount > 0 ? hashCount : 0, '#');

    return hashes + fractional + "." + integral + "\n";
}

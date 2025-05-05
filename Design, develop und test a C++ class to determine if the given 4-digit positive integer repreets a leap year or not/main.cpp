#include <iostream>
#include "leap_year.hpp"

int main() {
    int year;

    std::cout << "Enter a 4-digit positive year: ";
    std::cin >> year;

    if (year < 1000 || year > 9999) {
        std::cout << "Invalid input! Please enter a 4-digit positive year." << std::endl;
        return 1;
    }

    YearChecker checker(year);

    if (checker.isLeapYear()) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}

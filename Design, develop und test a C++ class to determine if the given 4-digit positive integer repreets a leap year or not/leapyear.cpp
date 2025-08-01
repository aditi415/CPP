#include "leap_year.hpp"

YearChecker::YearChecker(int y) {
    year = y;
}
bool YearChecker::isLeapYear() const {
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    return (year % 400 == 0);
}

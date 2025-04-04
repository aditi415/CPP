#ifndef SYMMETRIC_DATE_HPP
#define SYMMETRIC_DATE_HPP

#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>

class SymmetricDateFinder {
public:
    void findSymmetricDates();

private:
    bool isSymmetric(const std::string& date);
    bool isValidDate(int day, int month, int year);
    bool isLeapYear(int year);
};

#endif // SYMMETRIC_DATE_FINDER_HPP

#ifndef LEAP_YEAR_HPP
#define LEAP_YEAR_HPP

class YearChecker {
private:
    int year;

public:
    YearChecker(int y);
    bool isLeapYear() const;
};

#endif // LEAP_YEAR_HPP

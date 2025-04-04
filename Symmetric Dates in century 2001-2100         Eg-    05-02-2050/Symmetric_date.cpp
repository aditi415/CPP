#include "Symmetric_date.hpp"

bool SymmetricDateFinder::isSymmetric(const std::string& date) {
    int len = date.length();
    for (int i = 0; i < len / 2; i++) {
        if (date[i] != date[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

void SymmetricDateFinder::findSymmetricDates() {
    for (int year = 2001; year <= 2100; year++) {
        for (int month = 1; month <= 12; month++) {
            for (int day = 1; day <= 31; day++) {
                if (!isValidDate(day, month, year)) continue;
                
                std::ostringstream oss;
                oss << std::setw(2) << std::setfill('0') << day << ""
                    << std::setw(2) << std::setfill('0') << month << ""
                    << year;
                
                std::string dateStr = oss.str();
                if (isSymmetric(dateStr)) {
                    std::cout << std::setw(2) << std::setfill('0') << day << "-"
                              << std::setw(2) << std::setfill('0') << month << "-"
                              << year << std::endl;
                }
            }
        }
    }
}

bool SymmetricDateFinder::isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12 || day < 1) return false;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) daysInMonth[1] = 29;
    return day <= daysInMonth[month - 1];
}

bool SymmetricDateFinder::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


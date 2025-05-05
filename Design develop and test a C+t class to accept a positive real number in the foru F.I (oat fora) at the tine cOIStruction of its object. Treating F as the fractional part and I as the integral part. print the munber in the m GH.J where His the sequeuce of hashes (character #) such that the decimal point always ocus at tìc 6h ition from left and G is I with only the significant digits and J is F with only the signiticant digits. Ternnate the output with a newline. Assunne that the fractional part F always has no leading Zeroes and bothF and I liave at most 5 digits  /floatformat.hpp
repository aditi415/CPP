#ifndef FLOAT_FORMAT_HPP
#define FLOAT_FORMAT_HPP

#include <string>

class FloatFormatter {
private:
    std::string fractional;
    std::string integral;

public:
    FloatFormatter(const std::string& input);
    void printFormatted() const;
};

#endif // FLOAT_FORMAT_HPP

#include "Polynomial.hpp"
#include <iostream>

int main() {
    Polynomial poly;
    poly.inputCoefficients();

    double x;
    std::cout << "Enter value of x: ";
    std::cin >> x;

    double result = poly.evaluate(x);
    std::cout << "f(x) = " << result << std::endl;

    return 0;
}

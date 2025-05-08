#include "Polynomial.hpp"
#include <iostream>
#include <cmath>

Polynomial::Polynomial() : a(0), b(0), c(0) {}

void Polynomial::inputCoefficients() {
    std::cout << "Enter coefficient a (for x^4): ";
    std::cin >> a;
    std::cout << "Enter coefficient b (for x^2): ";
    std::cin >> b;
    std::cout << "Enter constant term c: ";
    std::cin >> c;
}

double Polynomial::evaluate(double x) const {
    return a * std::pow(x, 4) + b * std::pow(x, 2) + c;
}

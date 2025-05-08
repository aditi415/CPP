#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

class Polynomial {
private:
    double a, b, c;

public:
    Polynomial();
    void inputCoefficients();
    double evaluate(double x) const;
};

#endif

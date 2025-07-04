#include <iostream>
#include <vector>
#include "lagrange.hpp"
int main() {
    int n;
    std::cout << "Enter the number of data points: ";
    std::cin >> n;

    std::vector<double> x(n), y(n);
    std::cout << "Enter the x and f(x) values:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "x[" << i << "] = ";
        std::cin >> x[i];
        std::cout << "f(x[" << i << "]) = ";
        std::cin >> y[i];
    }

    double z;
    std::cout << "Enter the point z at which f(z) is to be estimated: ";
    std::cin >> z;

    double result = lagrangeInterpolation(x, y, z);
    std::cout << "The estimated value f(" << z << ") is: " << result << std::endl;

    return 0;
}

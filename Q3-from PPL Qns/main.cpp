#include "MagicSquare.hpp"
#include <iostream>

int main() {
    int n;
    std::cout << "Enter an odd value for N (>= 3): ";
    std::cin >> n;

    if (n < 3 || n % 2 == 0) {
        std::cerr << "Only odd values >= 3 are allowed!" << std::endl;
        return 1;
    }

    MagicSquare ms(n);
    ms.generate();
    std::cout << "\nMagic Square of size " << n << ":\n";
    ms.print();

    return 0;
}

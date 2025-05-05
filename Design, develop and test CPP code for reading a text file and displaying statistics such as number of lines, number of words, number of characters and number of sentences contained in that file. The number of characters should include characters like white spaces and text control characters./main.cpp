#include "TextStatistics.hpp"
#include <iostream>

int main() {
    std::string filename;
    std::cout << "Enter filename to analyze: ";
    std::cin >> filename;

    TextStatistics stats(filename);
    stats.analyze();
    stats.displayStatistics();

    return 0;
}

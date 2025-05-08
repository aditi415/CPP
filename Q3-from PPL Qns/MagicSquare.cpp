#include "MagicSquare.hpp"
#include <iostream>
#include <iomanip>

MagicSquare::MagicSquare(int n) {
    size = n;
    square = new int*[size];
    for (int i = 0; i < size; ++i)
        square[i] = new int[size]();
}

MagicSquare::~MagicSquare() {
    for (int i = 0; i < size; ++i)
        delete[] square[i];
    delete[] square;
}

void MagicSquare::generate() {
    int num = 1;
    int i = 0;
    int j = size / 2;

    while (num <= size * size) {
        square[i][j] = num++;

        int new_i = (i - 1 + size) % size;
        int new_j = (j + 1) % size;

        if (square[new_i][new_j] != 0)
            i = (i + 1) % size;
        else {
            i = new_i;
            j = new_j;
        }
    }
}

void MagicSquare::print() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << std::setw(4) << square[i][j];
        std::cout << std::endl;
    }
}

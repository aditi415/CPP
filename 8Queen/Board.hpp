#ifndef BOARD_H
#define BOARD_H

#include "Queen.hpp"
#include <vector>
#include <iostream>

class Board {
private:
    std::vector<std::vector<char>> board;
    static const int SIZE = 8;

public:
    Board();
    bool isSafe(int row, int col);
    bool solve(int col);
    void display();
};

#endif


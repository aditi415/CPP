#include "Board.h"

int main() {
    Board board;

    if (board.solve(0)) {
        board.display();
    } else {
        std::cout << "No solution exists.\n";
    }

    return 0;
}

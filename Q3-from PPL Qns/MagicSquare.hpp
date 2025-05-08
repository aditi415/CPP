#ifndef MAGICSQUARE_HPP
#define MAGICSQUARE_HPP

class MagicSquare {
private:
    int** square;
    int size;

public:
    MagicSquare(int n);
    ~MagicSquare();
    void generate();
    void print() const;
};

#endif

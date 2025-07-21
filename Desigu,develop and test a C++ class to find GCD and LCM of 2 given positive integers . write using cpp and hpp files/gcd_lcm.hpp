#ifndef GCD_LCM_HPP
#define GCD_LCM_HPP
class NumberOperations {
private:
    int a, b;

public:
    NumberOperations(int x, int y);

    int getGCD() const;
    int getLCM() const;
};

#endif // GCD_LCM_HPP

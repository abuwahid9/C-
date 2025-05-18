/* Write an OOP in C++ language to calculate the factorial of a number. */
#include <iostream>
using namespace std;

class FactorialCalculator {
private:
    int number;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> number;
    }
    unsigned long long factorial() {
        unsigned long long result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    FactorialCalculator fc;
    fc.input();
    cout << "Factorial: " << fc.factorial() << endl;
    return 0;
}
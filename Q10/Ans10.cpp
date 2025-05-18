/* Write a C++ program to perform all arithmetic operations using inline function. */

#include <iostream>
using namespace std;

class Arithmetic {
public:
    inline int add(int a, int b) {
        return a + b;
    }
    inline int subtract(int a, int b) {
        return a - b;
    }
    inline int multiply(int a, int b) {
        return a * b;
    }
    inline double divide(int a, int b) {
        if (b == 0) {
            cout << "Division by zero error!" << endl;
            return 0;
        }
        return static_cast<double>(a) / b;
    }
};

int main() {
    Arithmetic ar;
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Addition: " << ar.add(x, y) << endl;
    cout << "Subtraction: " << ar.subtract(x, y) << endl;
    cout << "Multiplication: " << ar.multiply(x, y) << endl;
    cout << "Division: " << ar.divide(x, y) << endl;
    return 0;
}
/* Write a C++ program using the concept of object-oriented programming to check
whether given number is prime or not. */

#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int number;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> number;
    }
    bool isPrime() {
        if (number <= 1) return false;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    PrimeChecker pc;
    pc.input();
    if (pc.isPrime())
        cout << "The number is prime." << endl;
    else
        cout << "The number is not prime." << endl;
    return 0;
}
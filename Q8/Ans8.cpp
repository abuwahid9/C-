/* Write a c++ program to add numbers using the concept of polymorphism. */

#include <iostream>
using namespace std;

class Adder {
public:
    // Function to add two integers
    virtual int add(int a, int b) {
        return a + b;
    }
    // Function to add three integers
    virtual int add(int a, int b, int c) {
        return a + b + c;
    }
    // Function to add two doubles
    virtual double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Adder ad;
    cout << "Sum of 2 and 3: " << ad.add(2, 3) << endl;
    cout << "Sum of 2, 3 and 4: " << ad.add(2, 3, 4) << endl;
    cout << "Sum of 2.5 and 3.7: " << ad.add(2.5, 3.7) << endl;
    return 0;
}
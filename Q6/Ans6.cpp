/* Write a C++ program using the concept of object-oriented programming to find out the
maximum and minimum from three numbers. */

#include <iostream>
using namespace std;

class MaxMinFinder {
private:
    int a, b, c;
public:
    void input() {
        cout << "Enter three numbers\n\n";
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;       
        cout << "Enter three number: ";
        cin >> c;
    }
    int getMax() {
        int maxVal = a;
        if (b > maxVal) maxVal = b;
        if (c > maxVal) maxVal = c;
        return maxVal;
    }
    int getMin() {
        int minVal = a;
        if (b < minVal) minVal = b;
        if (c < minVal) minVal = c;
        return minVal;
    }
};

int main() {
    MaxMinFinder mmf;
    mmf.input();
    cout << "Maximum: " << mmf.getMax() << endl;
    cout << "Minimum: " << mmf.getMin() << endl;
    return 0;
}
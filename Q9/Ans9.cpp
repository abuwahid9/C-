/* Write a C++ program to calculate the area of a square and a cube using inline function. */

#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Inline function to calculate area of square
    inline int areaSquare(int side) {
        return side * side;
    }
    // Inline function to calculate surface area of cube
    inline int areaCube(int side) {
        return 6 * side * side;
    }
};

int main() {
    AreaCalculator ac;
    int side;
    cout << "Enter the side length: ";
    cin >> side;
    cout << "Area of square: " << ac.areaSquare(side) << endl;
    cout << "Surface area of cube: " << ac.areaCube(side) << endl;
    return 0;
}
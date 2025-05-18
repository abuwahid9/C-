/*Write a C++ program using the concept of object-oriented programming to calculate the
area of a circle.*/
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    void input() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }
    double area() {
        return 3.141592653589793 * radius * radius;
    }
};

int main() {
    Circle c;
    c.input();
    cout << "Area of the circle: " << c.area() << endl;
    return 0;
}
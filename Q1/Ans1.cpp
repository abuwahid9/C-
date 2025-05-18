#include <iostream>
using namespace std;

class AverageCalculator {
private:
    double num1, num2;
public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    double getAverage() {
        return (num1 + num2) / 2.0;
    }
};
int main() {
    AverageCalculator avgCalc;
    avgCalc.input();
    cout << "Average: " << avgCalc.getAverage() << endl;
    return 0;
}
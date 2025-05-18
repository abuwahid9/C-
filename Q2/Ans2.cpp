/* Write a C++ program using the concept of object-oriented programming to make a
calculator which can calculate summation, subtraction, multiplication and division of two
numbers. */

#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;
public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    double add() {
        return num1 + num2;
    }
    double subtract() {
        return num1 - num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int choice;
    calc.input();
    cout << "Choose operation:\n";
    cout << "1. Addition \n result: " << calc.add() << endl;
    cout << "\n2. Subtraction \n result: " << calc.subtract() << endl; 
    cout << "\n3. Multiplication \n result: " << calc.multiply() << endl;
    cout<<  "\n4. Division \n result: " << calc.divide() << endl;
    cout << "\n5. Exit\n";
    // cout << "Enter your choice: ";
    // cin >> choice;

    // switch (choice) {
    //     case 1:
    //         cout << "Result: " << calc.add() << endl;
    //         break;
    //     case 2:
    //         cout << "Result: " << calc.subtract() << endl;
    //         break;
    //     case 3:
    //         cout << "Result: " << calc.multiply() << endl;
    //         break;
    //     case 4:
    //         cout << "Result: " << calc.divide() << endl;
    //         break;
    //     default:
    //         cout << "Invalid choice!" << endl;
    // }
    return 0;
}
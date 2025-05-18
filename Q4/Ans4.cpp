#include <iostream>
using namespace std;

class EvenOddDistinguish {
public:
    void displayEvenOdd() {
        cout << "Even numbers from 1 to 100:\n";
        for (int i = 1; i <= 100; ++i) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
        cout << "\nOdd numbers from 1 to 100:\n";
        for (int i = 1; i <= 100; ++i) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    EvenOddDistinguish obj;
    obj.displayEvenOdd();
    return 0;
}
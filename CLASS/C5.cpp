#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    cout << "5 + 3 = " << calc.add(5, 3) << endl;
    cout << "5 - 3 = " << calc.subtract(5, 3) << endl;
    cout << "5 * 3 = " << calc.multiply(5, 3) << endl;
    cout << "5 / 3 = " << calc.divide(5, 3) << endl;
    return 0;

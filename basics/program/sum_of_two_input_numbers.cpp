#include <iostream>
using namespace  std;

// * Sum of two input numbers
// * 1. take two numbers as input
// * 2. print the sum of the two numbers

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << (num1+num2) << endl;

    return 0;
}
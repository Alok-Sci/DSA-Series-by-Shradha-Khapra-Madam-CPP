#include <iostream>
using namespace std;

// * Arithmetic operators: performs arithmetic operations on variables
// * addition (+)
// * subtraction (-)
// * multiplication (*)
// * division (/)
// * modulus (%)

int main()
{
    cout << "Sum: " << (5 + 3) << endl;
    cout << "Difference: " << (5 - 3) << endl;
    cout << "Product: " << (5 * 3) << endl;
    cout << "Division: " << (5 / 3) << endl;
    cout << "Division: " << (5 / (double)3) << endl; // * type casting for getting decimal result
    cout << "Remainder: " << (5 % 3) << endl;
}
#include <iostream>
using namespace std;

// * Unary operators
// * 1. increment (var++, ++var)
// * 2. descrement (var--, --var)

int main()
{
    int a = 5;

    cout << a++ << endl; // * post increment
    cout << a << endl;
    cout << ++a << endl; // * pre increment

    cout << a-- << endl; // * post decrement
    cout << a << endl;
    cout << --a << endl; // * pre decrement
}
#include <iostream>
using namespace std;

// * Ternary means three (3)
// * is a shorthand for if-else statement
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << (num >= 0 ? "Positive" : "negative");
}
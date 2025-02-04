#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num <= 1)
        return num;
    return num * factorial(num - 1);
}

int main()
{
    int num;

    cout << "Enter a number to find factorial of: \n";
    cin >> num;

    cout << "Factorial of " << num << ": " << factorial(num);

    return 0;
}
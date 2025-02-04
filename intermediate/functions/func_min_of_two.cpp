#include <iostream>
using namespace std;

// * function definition (with parameters)
int minOfTwo(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num1 = 4, num2 = 9;
    cout << "Among " << num1 << " and " << num2 << ", " << minOfTwo(num1, num2) << " is smaller" << endl; // * in minOfTwo(num1, num2), num1 and num2 are arguments
    return 0;
}
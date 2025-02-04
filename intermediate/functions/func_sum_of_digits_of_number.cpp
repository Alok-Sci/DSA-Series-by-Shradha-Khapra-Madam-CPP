#include <iostream>
using namespace std;

int sumOfDigitsOfNumbers(int num)
{
    // * initialize sum with 0
    int sum = 0;

    for (int i = num; i > 0; i /= 10)
    {
        // * get the last digit using modulo
        int lastDigit = i % 10;

        // * add last digit to sum
        sum += lastDigit;
    }

    return sum;
}

int main () {
    cout << "Sum of Digits of 143: " << sumOfDigitsOfNumbers(143) << endl;
    return 0;
}
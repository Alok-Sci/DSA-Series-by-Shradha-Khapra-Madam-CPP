#include <iostream>
using namespace std;

// * convert a number from binary number system to decimal number system
int binToDec(int bin)
{
    // * 0. initialize power and dec;
    int dec = 0;
    int pow = 1;
    int lastBit;

    while (bin > 0)
    {
        // * 1. extract last digit of binary value [divide by 10 and get the remainder]
        lastBit = bin % 10;

        // * 2. update the binary [divide by 10]
        bin /= 10;

        // * 3. multiply last digit with power, and sum to the dec
        dec += lastBit * pow;

        // * 4. update the power
        pow *= 2;
    }

    // * if execution reached this far then bin must be 0 and we got our final decimal value
    return dec;
}

int main()
{
    int bin;
    cout << "Enter a binary value to get its decimal form: ";
    cin >> bin;

    cout << "Decimal of " << bin << " is " << binToDec(bin) << endl;
}
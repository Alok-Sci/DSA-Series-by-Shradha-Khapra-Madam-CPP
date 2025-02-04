#include <iostream>
using namespace std;

int binaryAddition(int bin1, int bin2)
{
    int binSum = 0;
    int carry = 0;
    int power = 1;

    while (bin1 > 0 || bin2 > 0 || carry > 0)
    {
        // * extract the lastBit of both binary values
        int lastBitOfBin1 = bin1 % 10;
        int lastBitOfBin2 = bin2 % 10;

        // * get the sum of lastBits of both values
        int currentSum = lastBitOfBin1 + lastBitOfBin2 + carry;

        // * calculate the bit to add
        int bitToAdd = currentSum % 2;
        binSum += bitToAdd * power;

        // * calculate carry
        carry = currentSum / 2;

        // * remove the lastBit from original binary values
        bin1 /= 10;
        bin2 /= 10;

        // * update the power
        power *= 10;
    }
    return binSum;
}

int main()
{
    cout << "Find the sum of binary values: " << endl;
    cout << "Enter first binary value: ";
    int firstBin;
    cin >> firstBin;

    cout << "Enter second binary value: ";
    int secondBin;
    cin >> secondBin;

    cout << "Binary sum of " << firstBin << " and " << secondBin << " is " << binaryAddition(firstBin, secondBin);
}
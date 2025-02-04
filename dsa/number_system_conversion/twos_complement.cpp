#include <iostream>

using namespace std;

/// * flip binary digits
int flipBit(int bit)
{
    return bit == 0 ? 1 : 0;
}

/// * get one's complement
int OnesComplement(int bin)
{
    int onesComplement = 0;
    int lastBit;
    int pow = 1;
    while (bin > 0)
    {
        // * extract last digit from bin [modulo of 10]
        lastBit = bin % 10;

        // * update the bin [divide by 10]
        bin /= 10;

        // * update one'sComplement [flip the new bit, multiply with power to put on the left of the previous bit]
        onesComplement += flipBit(lastBit) * pow;

        // * update the power
        pow *= 10;
    }
    return onesComplement;
}

/// * binary addition
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

// * find two's complement
// * [one's complement of binary + 1]
int TwosComplement(int bin)
{
    int onesComplement = OnesComplement(bin);
    return binaryAddition(onesComplement, 1);
}

int main()
{
    cout << "Find the two's complement of binary: ";
    int bin;
    cin >> bin;

    cout << "Two's complement of " << bin << " is " << TwosComplement(bin) << endl;
    return 0;
}
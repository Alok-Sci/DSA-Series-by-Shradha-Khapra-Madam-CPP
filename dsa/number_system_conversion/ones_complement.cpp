#include <iostream>

using namespace std;

int flipBit(int bit)
{
    return bit == 0 ? 1 : 0;
}

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

int main()
{
    cout << "Find the one's complement of binary: ";
    int bin;
    cin >> bin;

    cout << "One's complement of " << bin << " is " << OnesComplement(bin) << endl;
    return 0;
}
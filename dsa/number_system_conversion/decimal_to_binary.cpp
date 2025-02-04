#include <iostream>
using namespace std;

int decToBin(int dec)
{
    int rem;
    int bin;
    int pow = 1;
    while (dec > 0)
    {
        /// * divide by 2 and get the remainder
        rem = dec % 2;

        /// * divide by 2 and update the value
        dec /= 2;

        /// * update the binary value
        /// * [put the new remainder on the left of the existing binary value]
        bin += rem * pow;

        /// * update the power (multiply with 10 to put the next value on the left - reverse order)
        pow *= 10;
    }

    return bin;
}

int main()
{
    int dec;
    cout << "Enter a decimal value to get its binary form: ";
    cin >> dec;

    cout << "Binary of " << dec << " is " << decToBin(dec) << endl;
}
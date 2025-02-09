#include <iostream>
using namespace std;

// * Bitwise operators: works on the binary value of operands
// * (4)10 = (100)2
// * (8)10 = (1000)2

int main()
{
    // ! Bitwise AND
    // * 0 & 0 ==> 0
    // * 0 & 1 ==> 0
    // * 1 & 0 ==> 0
    // * 1 & 1 ==> 1

    // *  (0100)2
    // * +(1000)2
    // *  (0000)2 --> (0)10
    cout << "Bitwise AND (&): 4 & 8 = " << (4 & 8) << endl;

    // ! Bitwise OR
    // * 0 | 0 ==> 0
    // * 0 | 1 ==> 1
    // * 1 | 0 ==> 1
    // * 1 | 1 ==> 1

    // *  (0100)2
    // * +(1000)2
    // *  (1100)2 --> (12)10
    cout << "Bitwise OR (|): 4 | 8 = " << (4 | 8) << endl;

    // ! Bitwise XOR
    // * 0 ^ 0 ==> 0
    // * 0 ^ 1 ==> 1
    // * 1 ^ 0 ==> 1
    // * 1 ^ 1 ==> 0

    // *  (0100)2
    // * +(1000)2
    // *  (1100)2 --> (12)10
    cout << "Bitwise XOR (^): 4 ^ 8 = " << (4 ^ 8) << endl;

    // ! Bitwise Left Shift
    // * 4 << 2 == (4 * 2^2)
    // * 4 is the number to be converted into binary form (i.e, 100)
    // * 2 is the number of bits the above number's bits to be shifted to left

    // *  (0100) << 2
    // *  (010000)2 ==> (16)10
    cout << "Bitwise Left shift (<<): 4 << 2 = " << (4 << 2) << endl;

    // ! Bitwise Right Shift
    // * 4 >> 2 == (4 / 2^2)
    // * 4 is the number to be converted into binary form (i.e, 100)
    // * 2 is the number of bits the above number's bits to be shifted to right

    // *  (0100) >> 2
    // *  (01)2 ==> (1)10
    cout << "Bitwise Right shift (>>): 4 >> 2 = " << (4 >> 2) << endl;
}
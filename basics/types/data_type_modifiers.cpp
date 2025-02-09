#include <iostream>
using namespace std;

/// * Data type modifiers: to change the meaning of data types
// long: used to take up a big storage in memory to store a large integer value [differs OS to OS] [usually double of int]
// short: used to take up less storage in memory for a variable [usually half of int]
// long long: used to store a very large integer value [differs OS to OS]
// signed: 
//   - will store both negative and positive integers, negative numbers are identified using MSB[most significant bit]. 
//   - The far left bit is used to identify if the number is negative or positive. If MSB is 1 then the integer value is negative, else positive. 
// unsigned: 
//   - will store only positive integers, therefore can store double the integer value [2^32-1]

int main()
{
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long long int : " << sizeof(long long int) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of short: " << sizeof(short) << endl;

    signed a = -11;
    cout << "Signed negative integer(-11): " << a << endl;
    signed b = 11;
    cout << "Signed positive integer(11): " << b << endl;

    unsigned c = -11;
    /// * storing negative integer value in the unsigned int variable will result in a large integer value in the memory
    /// * explanation: 
    /// * - when negative numbers are stored in the memory then first they are converted into it's 2's complement, 
    /// * - which converts the integer value in binary 
    /// * - then bits are flipped (one's complement) 
    /// * - then add 1 to the value 
    /// * - and finally the MSB is set to 1, 
    /// * - eventually the binary is converted into the decimal

    cout << "UnSigned negative integer(-11): " << c << endl;
    unsigned d = 11;
    cout << "UnSigned positive integer(11): " << d << endl;

}
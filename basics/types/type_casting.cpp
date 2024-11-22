#include <iostream>
using namespace std;

// * Type Casting: Conversion of data from one data type to another
// * There are two type of Type Casting

int main()
{
    // * 1. Type conversion (Implicit):
    // *    - Compiler does it automatically
    // *    - Conversion from bigger data type to smaller (i.e, float(4 bytes)--> double(8 bytes))
    char grade = 'A';
    int gradeASCII = grade;
    cout << gradeASCII << endl;

    // * 2. Type casting (Explicit)
    // *    - We tell the compiler to do this conversion with the following notation
    // *    - Conversion from smaller data type to bigger (i.e, double(8 bytes)--> int(4 bytes))
    double percentage = 69.88;
    int absolutePercentage = (int)percentage;
    cout << absolutePercentage << endl;

    return 0;
}
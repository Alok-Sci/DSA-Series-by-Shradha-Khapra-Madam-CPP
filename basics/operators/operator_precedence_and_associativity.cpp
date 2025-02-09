#include <iostream>
using namespace std;

/// * Operator Precedence: compiler decides which operator group will be prioritized in an expression.
/// * Operator Associativity: compiler decides in an operator group in which order (ltr/rtl) the operators will be prioritized in an expression.

///  [ ! , + , - ] | R to L
///  [ * , / , % ] | L to R
///  [ + , - ] | L to R
///  [ < , <= , >= , > ] | L to R
///  [ == , !=] | L to R
///  [ && , || ] | L to R
///  [ = ] | R to L

int main()
{
    int a = 4, b = 5;
    cout << "[ ! , + , - ] | R to L: " << (!a) << a++ << a-- << endl;
    cout << "[ * , / , % ] | L to R: " << a * b / a % b << endl;
    cout << "[ + , - ] | L to R: " << a + b - a << endl;
    cout << "[ < , <= , >= , > ] | L to R: " << (a < b <= a >= b > a)<< endl;
    cout << "[ == , !=] | L to R: " << (a == b != a) << endl;
    cout << "[ && , || ] | L to R: " << (a && b || a) << endl;
    cout << "[ = ] | R to L: " << (a = 9) << endl;

    return 0;
}
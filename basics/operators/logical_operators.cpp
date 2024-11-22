#include <iostream>
using namespace std;

// * Logical operators: evaluates between boolean expressions and returns boolean value
// * AND : (condition1) && (condition2)
// * OR : (condition1) || (condition2)
// * NOT : !(condition1)

int main()
{
    cout << ((3 < 8) && (5 > 2)) << endl; // true && true -> true
    cout << ((3 < 8) && (5 < 2)) << endl; // true && false -> false
    cout << ((3 < 8) || (5 > 2)) << endl; // true || true -> true
    cout << ((3 < 8) || (5 < 2)) << endl; // true || false -> true
    cout << !(3 < 8) << endl; // !true -> false
}
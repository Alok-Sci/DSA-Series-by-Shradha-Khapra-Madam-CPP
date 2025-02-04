#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "+++++++++++" << endl;
    cout << "Even or Odd" << endl;
    cout << "+++++++++++" << endl;
    cout << "Enter a number: ";

    cin >> num;

    if (num % 2 == 0)
        cout << num << " is an even number" << endl;
    else
        cout << num << " is an odd number\n";
}
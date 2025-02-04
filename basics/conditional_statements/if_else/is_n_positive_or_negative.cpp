#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "++++++++++++++++++++++++++++++" << endl;
    cout << "Is number positive OR negative" << endl;
    cout << "++++++++++++++++++++++++++++++" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0)
    {
        cout << num << " is a positive number" << endl;
    }
    else
    {
        cout << num << " is a negative number" << endl;
    }
}
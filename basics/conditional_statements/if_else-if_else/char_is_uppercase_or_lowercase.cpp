#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    // * ASCII values
    // * A-Z --> uppercase
    // * a-z --> lowercase

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UPPERCASE" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else
    {
        cout << "neither";
    }

    return 0;
}
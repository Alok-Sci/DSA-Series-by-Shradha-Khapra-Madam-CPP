#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter the character: ";
    cin >> character;

    // * ASCII values
    // * A-Z is 65-90
    // * a-z is 97-122

    if ((int)character >= 65 && (int)character <= 90)
    {
        cout << "UPPERCASE" << endl;
    }
    else if ((int)character >= 97 && (int)character <= 122)
    {
        cout << "lowercase" << endl;
    }
    else
    {
        cout << "neither";
    }

    return 0;
}
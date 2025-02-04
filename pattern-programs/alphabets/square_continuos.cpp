#include <iostream>
using namespace std;

const char FIRST_CAPITAL_ALPHABET = 'A';
const char LAST_CAPITAL_ALPHABET = 'Z';
int main()
{
    int squareLength;
    char counter = FIRST_CAPITAL_ALPHABET;

    cout << "Enter the length of the square: ";
    cin >> squareLength;

    for (int row = 0; row < squareLength; row++)
    {
        for (int col = 0; col < squareLength; col++)
        {
            if (counter > (int)LAST_CAPITAL_ALPHABET)
                counter = FIRST_CAPITAL_ALPHABET;
            cout << counter++ << "  ";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

const int FIRST_ALPHABET_ASCII = 65;
const int LAST_ALPHABET_ASCII = 90;
const int TOTAL_ALPHABET_COUNT = 25;
int main()
{
    // * user defined square length
    int squareLength;

    cout << "Enter the length of the square: ";
    cin >> squareLength;

    for (int row = 0; row < squareLength; row++)
    {
        // * initialize the value for the first character of the row
        char squareChar = FIRST_ALPHABET_ASCII; // * 65-90
        for (int col = 0; col < squareLength; col++)
        {
            cout << (char)(squareChar + (col % TOTAL_ALPHABET_COUNT)) << "  ";
        }
        cout << endl;
    }
    return 0;
}